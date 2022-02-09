
#ifndef _REGEX_STRING_H__
#define _REGEX_STRING_H__
#include <string>
#include <regex>
#include <cassert>
#include <vector>
#include "BaseObject.h"

#include "BaseAssert.h"

// 正则表达式嵌套
// <A+;B-;C*;>
// ^<((?:[A-Z](?:[+-\\*]);)*)>$
/*
	[00]:<A+;B-;C*;>
	[01]:A+;B-;C*;
*/
// [+-.]  // 单个点
// [+-.\x2A] // 单个点 单个*


#define RegexStart "^\\s*"
#define RegexEnd "\\s*$"


#define PatternFieldFlags "(?:static|final|public|private|protected|synchronized|bridge|varargs|abstract|strict|synthetic|transient|volatile|enum)"

#define PatternMethodFlags "(?:static|constructor|declared-synchronized|public|private|protected|abstract|final|varargs|native)"


// '\\ufffd'
// -Infinity
#define PatternFieldValue "(?:" \
"[-+]?0x[a-fA-F0-9]+[tsL]?" "|" \
"[-+]?[-.0-9E]+[f]?" "|" \
"[-+]?(?:Infinity|NaN)[f]?" "|" \
"(?:false|true)" "|" \
"null" "|" \
"(?:[\"](?:[^\\\\\"]*(?:\\\\\"|\\\\)*[^\\\\\"]*)*[\"])" "|" \
"(?:[\'](?:[^\\\\\']*(?:\\\\\'|\\\\)*[^\\\\\']*)*[\'])" \
")"

#define SmaliTypePrefix "(?:[-+]?[\\[]*)?"

// C01:{L...;}
// A::{L...;}
// A:{L...;}
// T_CONS:
// 没有冒号的
#define AnnoNameNoColon "(?:[A-Z]?(?:[0-9]*|[\\w]*))"
#define AnnoName AnnoNameNoColon "[:]{1,2}"

// Smali 基本语法定义的部分,不带任何泛型
#define RegexOnlySmaliBaseType \
"(?:" \
"L[\\w/$-]+;" "|"\
"B|C|D|F|I|J|S|Z|V" \
")"

// 基本类型,带模板子类,不带模板复合类
#define RegexSmaliBaseType \
"[\x2A]" "|" /* "*" */\
"T" AnnoNameNoColon ";" "|" /*TC0\TA\TT*/\
"L[\\w/$.-]+;" "|" /*Laaa/vvv/ccc;*/\
"B|C|D|F|I|J|S|Z|V"

#define RegexSmaliBaseTypeNoSemicolon \
"(?:" \
"T" AnnoNameNoColon  "|" \
"L[\\w/$.-]+" \
")" 

/*
* (
	Ljava/util/EnumMap<
		Landroid/icu/text/RelativeDateTimeFormatter$Style;
		Ljava/util/EnumMap<
			Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
			Ljava/util/EnumMap<
				Landroid/icu/text/RelativeDateTimeFormatter$Direction;
				Ljava/lang/String;
			>;
		>;
	>;
	Ljava/util/EnumMap<
		Landroid/icu/text/RelativeDateTimeFormatter$Style;
		Ljava/util/EnumMap<
			Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;
			[[Ljava/lang/String;
		>;
	>;
	Ljava/lang/String;
	Landroid/icu/text/PluralRules;
	Landroid/icu/text/NumberFormat;
	Landroid/icu/text/RelativeDateTimeFormatter$Style;
	Landroid/icu/text/DisplayContext;
	Landroid/icu/text/BreakIterator;
	Landroid/icu/util/ULocale;
)
V
*/

// 尖括号里面的模板
#define PatternInAngleBrackets "(?:[^<>]*)"

// 类型定义,没有分号
#define PatternClassDefineStart "L"
#define PatternClassDefineNoSemicolon "[\\w/$.-]+"
#define PatternClassDefineEnd ";"

// 后面可以接类成员
// 也可以接 ; 结束符号
#define PatternMemberNoSemicolon "[.][\\w/$.-]*"
#define PatternClassMember "(?:" "[.][\\w/$.-]*[;]|[;]" ")"


#define RegexAnno1 "<" PatternInAngleBrackets ">" PatternClassMember
#define RegexAnno2 "<" PatternInAngleBrackets RegexAnno1 ">" PatternClassMember
#define RegexAnno3 "<" PatternInAngleBrackets RegexAnno2 ">" PatternClassMember
#define RegexAnno4 "<" PatternInAngleBrackets RegexAnno3 ">" PatternClassMember
#define RegexAnno5 "<" PatternInAngleBrackets RegexAnno4 ">" PatternClassMember
#define RegexAnno6 "<" PatternInAngleBrackets RegexAnno5 ">" PatternClassMember
#define RegexAnnoAll "(?:" RegexAnno1 "|" RegexAnno2 "|" RegexAnno3 "|" RegexAnno4 "|" RegexAnno5 "|" RegexAnno6 ")"

// 第一层类型嵌套
#define RegexSmaliBaseAnnoType RegexSmaliBaseType "|" \
PatternClassDefineStart PatternClassDefineNoSemicolon RegexAnnoAll 
#define RegexSmaliBaseAnnoFullType SmaliTypePrefix "(?:" RegexSmaliBaseAnnoType ")"


// 第二层线性展开
#define RegexSmaliType \
RegexSmaliBaseType "|" \
PatternClassDefineStart PatternClassDefineNoSemicolon "<" "(?:" RegexSmaliBaseAnnoFullType ")*"  ">" "(?:" PatternMemberNoSemicolon "(?:<" "(?:" RegexSmaliBaseAnnoFullType ")*"  ">)?" ")*" "[;]"

// 最终对外输出的是这个
#define RegexSmaliFullType SmaliTypePrefix "(?:" RegexSmaliType ")"


// 提取单个字符串
static inline std::string regexGetStringIndex(std::string str, const char* pMode, int nMax, int nIndex) {
	std::regex regType(pMode);
	std::smatch m;
	bool found = std::regex_search(str, m, regType);
	BaseAssert(found && (m.size() == nMax));
	if (found) {
		return m[nIndex];
	}
	return std::string("");
}

// 提取字符串列表
static inline std::vector<std::string> regexGetStringList(std::string str, const char* pMode, int nMax, int nIndex) {
	std::vector<std::string> strRegTypeList;
	std::string strp = str;
	while (strp.size() > 0) {
		std::regex regType(pMode);
		std::smatch m;
		bool found = std::regex_search(strp, m, regType);
		BaseAssert(found && (m.size() == 2));
		if (found) {
			strRegTypeList.push_back(m[1]);
			strp = strp.substr(m[0].length());
		}
	}
	return strRegTypeList;
}

class CRegexString {

private:

public:
	CRegexString() {}
	~CRegexString() {}

	static inline std::regex reformatFfGoto =  std::regex("^\\s*(if.*)\\s+(goto.*)\\s*$");
	static inline std::regex reformatLabel = std::regex("^\\s*(label_[\\w]+[:])\\s*$");

	static inline std::regex matchDotSourceFile = std::regex("^\\s*[.]source\\s+\"((?:[^\\\\\"]*)[.]java)\"\\s*$");
	static inline std::regex matchDotImplementsClass = std::regex("^\\s*[.]implements\\s+(L(?:[\\w/$-]*);)\\s*$");
	static inline std::regex matchDotSuperClass = std::regex("^\\s*[.]super\\s+(L(?:[\\w/$-]*);)\\s*$");

	static inline std::regex getJavaClassTypeInfo = std::regex(RegexStart "([-+]?[\\[]*)" "(" RegexSmaliType ")" RegexEnd);
	static inline std::regex getJavaClassBaseType = std::regex(RegexStart "(?:[-+]?[\\[]*)?" "(" RegexSmaliType ")" RegexEnd);

	static inline std::regex getJavaClassBaseTypeForSmali = std::regex(RegexStart "(?:[-+]?[\\[]*)?" "(" RegexSmaliBaseType ")" RegexEnd);

	static inline std::regex checkPrimType = std::regex("^[-+]?(B|C|D|F|I|J|S|Z|V)$");
	static inline std::regex checkAnoType = std::regex(
		RegexStart
		"T" AnnoNameNoColon PatternClassDefineEnd
		RegexEnd
	);
	static inline std::regex checkJavaBaseClassType = std::regex("^[-+]?(L[\\w/$.-]+;)$");
	static inline std::regex checkJavaFullClassType = std::regex(
		RegexStart			// 开始
		SmaliTypePrefix		// 类型前缀
		"(" PatternClassDefineStart // 类定义开始
		PatternClassDefineNoSemicolon ")"   // Class定义		// 提取主类
		"<(" "(?:" RegexSmaliFullType ")*" ")>"	// 尖括号的内容		// 提取主类的模板参数

		// 成员类型描述
		"((?:" PatternMemberNoSemicolon	// 提取只成员
		"(?:<"
		"(?:" RegexSmaliFullType ")*"	// 标准类型数组
		">)?"
		")?)"

		PatternClassDefineEnd	// 类定义结束
		RegexEnd			// 结束
	);


};


#endif


