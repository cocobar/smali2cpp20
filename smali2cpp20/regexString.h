
#ifndef _REGEX_STRING_H__
#define _REGEX_STRING_H__
#include <string>
#include <regex>
#include <cassert>
#include <vector>
#include "BaseObject.h"

#include "BaseAssert.h"

// ������ʽǶ��
// <A+;B-;C*;>
// ^<((?:[A-Z](?:[+-\\*]);)*)>$
/*
	[00]:<A+;B-;C*;>
	[01]:A+;B-;C*;
*/
// [+-.]  // ������
// [+-.\x2A] // ������ ����*


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
// û��ð�ŵ�
#define AnnoNameNoColon "(?:[A-Z]?(?:[0-9]*|[\\w]*))"
#define AnnoName AnnoNameNoColon "[:]{1,2}"

// Smali �����﷨����Ĳ���,�����κη���
#define RegexOnlySmaliBaseType \
"(?:" \
"L[\\w/$-]+;" "|"\
"B|C|D|F|I|J|S|Z|V" \
")"

// ��������,��ģ������,����ģ�帴����
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

// �����������ģ��
#define PatternInAngleBrackets "(?:[^<>]*)"

// ���Ͷ���,û�зֺ�
#define PatternClassDefineStart "L"
#define PatternClassDefineNoSemicolon "[\\w/$.-]+"
#define PatternClassDefineEnd ";"

// ������Խ����Ա
// Ҳ���Խ� ; ��������
#define PatternMemberNoSemicolon "[.][\\w/$.-]*"
#define PatternClassMember "(?:" "[.][\\w/$.-]*[;]|[;]" ")"


#define RegexAnno1 "<" PatternInAngleBrackets ">" PatternClassMember
#define RegexAnno2 "<" PatternInAngleBrackets RegexAnno1 ">" PatternClassMember
#define RegexAnno3 "<" PatternInAngleBrackets RegexAnno2 ">" PatternClassMember
#define RegexAnno4 "<" PatternInAngleBrackets RegexAnno3 ">" PatternClassMember
#define RegexAnno5 "<" PatternInAngleBrackets RegexAnno4 ">" PatternClassMember
#define RegexAnno6 "<" PatternInAngleBrackets RegexAnno5 ">" PatternClassMember
#define RegexAnnoAll "(?:" RegexAnno1 "|" RegexAnno2 "|" RegexAnno3 "|" RegexAnno4 "|" RegexAnno5 "|" RegexAnno6 ")"

// ��һ������Ƕ��
#define RegexSmaliBaseAnnoType RegexSmaliBaseType "|" \
PatternClassDefineStart PatternClassDefineNoSemicolon RegexAnnoAll 
#define RegexSmaliBaseAnnoFullType SmaliTypePrefix "(?:" RegexSmaliBaseAnnoType ")"


// �ڶ�������չ��
#define RegexSmaliType \
RegexSmaliBaseType "|" \
PatternClassDefineStart PatternClassDefineNoSemicolon "<" "(?:" RegexSmaliBaseAnnoFullType ")*"  ">" "(?:" PatternMemberNoSemicolon "(?:<" "(?:" RegexSmaliBaseAnnoFullType ")*"  ">)?" ")*" "[;]"

// ���ն�������������
#define RegexSmaliFullType SmaliTypePrefix "(?:" RegexSmaliType ")"


// ��ȡ�����ַ���
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

// ��ȡ�ַ����б�
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
		RegexStart			// ��ʼ
		SmaliTypePrefix		// ����ǰ׺
		"(" PatternClassDefineStart // �ඨ�忪ʼ
		PatternClassDefineNoSemicolon ")"   // Class����		// ��ȡ����
		"<(" "(?:" RegexSmaliFullType ")*" ")>"	// �����ŵ�����		// ��ȡ�����ģ�����

		// ��Ա��������
		"((?:" PatternMemberNoSemicolon	// ��ȡֻ��Ա
		"(?:<"
		"(?:" RegexSmaliFullType ")*"	// ��׼��������
		">)?"
		")?)"

		PatternClassDefineEnd	// �ඨ�����
		RegexEnd			// ����
	);


};


#endif


