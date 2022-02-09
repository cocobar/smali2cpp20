#ifndef __android_icu_impl_locale_AsciiUtil__
#define __android_icu_impl_locale_AsciiUtil__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\AsciiUtil.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class AsciiUtil : public java::lang::Object {
protected:
private:
public:
	AsciiUtil();
	static int caseIgnoreCompare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2);
	static bool caseIgnoreMatch(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2);
	static bool isAlpha(char c);
	static bool isAlphaNumeric(char c);
	static bool isAlphaNumericString(std::shared_ptr<java::lang::String> s);
	static bool isAlphaString(std::shared_ptr<java::lang::String> s);
	static bool isNumeric(char c);
	static bool isNumericString(std::shared_ptr<java::lang::String> s);
	static char toLower(char cVar0);
	static std::shared_ptr<java::lang::String> toLowerString(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> toTitleString(std::shared_ptr<java::lang::String> s);
	static char toUpper(char cVar0);
	static std::shared_ptr<java::lang::String> toUpperString(std::shared_ptr<java::lang::String> s);
public:
	virtual ~AsciiUtil(){
	}

}; // class AsciiUtil
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_AsciiUtil__

