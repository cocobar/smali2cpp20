#ifndef __android_icu_text_StringSearch_S_CEI__
#define __android_icu_text_StringSearch_S_CEI__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch$CEI.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class StringSearch_S_CEI : public java::lang::Object {
protected:
private:
	StringSearch_S_CEI();
public:
	long long ce_;
	int highIndex_;
	int lowIndex_;
	StringSearch_S_CEI(std::shared_ptr<android::icu::text::StringSearch_S_CEI> _this0);
public:
	virtual ~StringSearch_S_CEI(){
	}

}; // class StringSearch_S_CEI
}; // namespace android::icu::text

#endif //__android_icu_text_StringSearch_S_CEI__

