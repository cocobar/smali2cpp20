#ifndef __sun_util_locale_LocaleUtils__
#define __sun_util_locale_LocaleUtils__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleUtils.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace sun::util::locale{
class LocaleUtils : public java::lang::Object {
protected:
private:
	LocaleUtils();
	static bool isLower(char c);
	static bool isUpper(char c);
public:
	static int caseIgnoreCompare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2);
	static bool caseIgnoreMatch(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2);
	static bool isAlpha(char c);
	static bool isAlphaNumeric(char c);
	static bool isAlphaNumericString(std::shared_ptr<java::lang::String> s);
	static bool isAlphaString(std::shared_ptr<java::lang::String> s);
	static bool isEmpty(std::shared_ptr<java::lang::String> str);
	static bool isEmpty(std::shared_ptr<java::util::List<java::lang::Object>> list);
	static bool isEmpty(std::shared_ptr<java::util::Map<java::lang::Object,java::lang::Object>> map);
	static bool isEmpty(std::shared_ptr<java::util::Set<java::lang::Object>> set);
	static bool isNumeric(char c);
	static bool isNumericString(std::shared_ptr<java::lang::String> s);
	static char toLower(char cVar0);
	static std::shared_ptr<java::lang::String> toLowerString(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> toTitleString(std::shared_ptr<java::lang::String> s);
	static char toUpper(char cVar0);
	static std::shared_ptr<java::lang::String> toUpperString(std::shared_ptr<java::lang::String> s);
public:
	virtual ~LocaleUtils(){
	}

}; // class LocaleUtils
}; // namespace sun::util::locale

#endif //__sun_util_locale_LocaleUtils__

