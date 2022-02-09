#ifndef __android_icu_text_UFormat__
#define __android_icu_text_UFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UFormat.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.text.Format.h"

namespace android::icu::text{
class UFormat : public java::text::Format {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<android::icu::util::ULocale> actualLocale;
	std::shared_ptr<android::icu::util::ULocale> validLocale;
public:
	UFormat();
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type);
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual);
public:
	virtual ~UFormat(){
	}

}; // class UFormat
}; // namespace android::icu::text

#endif //__android_icu_text_UFormat__

