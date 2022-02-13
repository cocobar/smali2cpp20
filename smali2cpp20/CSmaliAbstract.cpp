#include "CSmaliAbstract.h"
#include "CRegexString.h"
#include "CSmaliType.h"

CSmaliAbstract::CSmaliAbstract() {
	isPrivate = false;
	isPublic = true;
	isProtcted = false;
}

void CSmaliAbstract::setPrivateType() {
	isPublic = false;
	isPrivate = true;
	isProtcted = false;
}
void CSmaliAbstract::setPublicType() {
	isPublic = true;
	isPrivate = false;
	isProtcted = false;
}
void CSmaliAbstract::setProtctedType() {
	isPublic = false;
	isPrivate = false;
	isProtcted = true;
}

bool CSmaliAbstract::getPrivateType() {
	return isPrivate;
}
bool CSmaliAbstract::getPublicType() {
	return isPublic;
}
bool CSmaliAbstract::getProtctedType() {
	return isProtcted;
}
std::string CSmaliAbstract::getCppPermissionString(unsigned long val) {
	if (val & kAccPublic) {
		return "public";
	}
	if (val & kAccPrivate) {
		return "private";
	}
	if (val & kAccProtected) {
		return "protected";
	}
	return "public";
}

/*
	static constexpr uint32_t kAccPublic = 0x0001;  // class, field, method, ic
	static constexpr uint32_t kAccPrivate = 0x0002;  // field, method, ic
	static constexpr uint32_t kAccProtected = 0x0004;  // field, method, ic
	static constexpr uint32_t kAccStatic = 0x0008;  // field, method, ic
	static constexpr uint32_t kAccFinal = 0x0010;  // class, field, method, ic
	static constexpr uint32_t kAccSynchronized = 0x0020;  // method (only allowed on natives)
	static constexpr uint32_t kAccSuper = 0x0020;  // class (not used in dex)
	static constexpr uint32_t kAccVolatile = 0x0040;  // field
	static constexpr uint32_t kAccBridge = 0x0040;  // method (1.5)
	static constexpr uint32_t kAccTransient = 0x0080;  // field
	static constexpr uint32_t kAccVarargs = 0x0080;  // method (1.5)
	static constexpr uint32_t kAccNative = 0x0100;  // method
	static constexpr uint32_t kAccInterface = 0x0200;  // class, ic
	static constexpr uint32_t kAccAbstract = 0x0400;  // class, method, ic
	static constexpr uint32_t kAccStrict = 0x0800;  // method
	static constexpr uint32_t kAccSynthetic = 0x1000;  // class, field, method, ic
	static constexpr uint32_t kAccAnnotation = 0x2000;  // class, ic (1.5)
	static constexpr uint32_t kAccEnum = 0x4000;  // class, field, ic (1.5)
	static constexpr uint32_t kAccConstructor = 0x00010000;  // method (dex only) <(cl)init>
	static constexpr uint32_t kAccDeclaredSynchronized = 0x00020000;  // method (dex only)
	strFlags = "public static strictfp "
*/

void CSmaliAbstract::setFlags(std::string strFlags) {
	flag = 0;
	std::vector<std::string> listFlags = regexGetStringList(strFlags, "\\s*(" PatternAllFlags ")\\s*", 2, 1);
	for (auto k = listFlags.begin(); k != listFlags.end(); k++) {
		if (*k == "public") { flag |= kAccPublic; }
		else if (*k == "protected") { flag |= kAccProtected; }
		else if (*k == "private") { flag |= kAccPrivate; }
		else if (*k == "final") { flag |= kAccFinal; }
		else if (*k == "static") { flag |= kAccStatic; isStatic = 1; }
		else if (*k == "abstract") { flag |= kAccAbstract; }
		else if (*k == "interface") { flag |= kAccInterface; }
		else if (*k == "transient") { flag |= kAccTransient; }
		else if (*k == "volatile") { flag |= kAccVolatile; }
		else if (*k == "synchronized") { flag |= kAccSynchronized; }
		else if (*k == "annotation") { flag |= kAccAnnotation; }
		else if (*k == "synthetic") { flag |= kAccSynthetic; }
		else if (*k == "enum") { flag |= kAccEnum; }
		else if (*k == "constructor") { flag |= kAccConstructor; }
		else if (*k == "declared-synchronized") { flag |= kAccDeclaredSynchronized; }
		else if (*k == "bridge") { flag |= kAccBridge; }
		else if (*k == "varargs") { flag |= kAccVarargs; }
		else if (*k == "native") { flag |= kAccNative; }
		else if (*k == "strictfp") { flag |= kAccStrict; }
		else {
			CBaseAssert(0);
		}
	}

	if (flag & kAccPublic) {
		setPublicType();
	}
	else if (flag & kAccPrivate) {
		setPrivateType();
	}
	else if (flag & kAccProtected) {
		setProtctedType();
	}
}

// 增加各级的使用类型，只能设置当前级别的
void CSmaliAbstract::useType(std::string strClass, std::string strMember, bool bMethod) {
	std::string strTmpClassName = CSmaliType(strClass, nullptr).getBaseType()->getFullTypeSmaliString();
	constexpr auto pMf = RegexStart
		"(" "L[\\w/$-]+;" ")"				// 标准类型
		RegexEnd;
	std::smatch m;
	if (std::regex_search(strTmpClassName, m, std::regex(pMf)) && (m.size() == 2)) {
		auto a = usedType.findType(strTmpClassName);
		if (bMethod) {
			a->addUsedMethod(strMember);
		}
		else {
			a->addUsedMethod(strMember);
		}
	}
	else {
		constexpr auto pMf1 = RegexStart
			"(" "B|C|D|F|I|J|S|Z|V" ")"				// 标准类型
			RegexEnd;
		std::smatch m1;
		if (std::regex_search(strTmpClassName, m1, std::regex(pMf1)) && (m1.size() == 2)) {
			//  OK, 但是不要理会
		}
		else {
			CBaseAssert(0);
		}
	}
}

void CSmaliAbstract::collect(std::map<std::string, std::shared_ptr<CTypeDefine>>& usedTypeMap) {
	usedType.collect(usedTypeMap);
}