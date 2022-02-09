#ifndef __android_icu_text_DurationFormat__
#define __android_icu_text_DurationFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DurationFormat.smali
#include "java2ctype.h"
#include "android.icu.text.UFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Date.h"

namespace android::icu::text{
class DurationFormat : public android::icu::text::UFormat {
protected:
	DurationFormat();
	DurationFormat(std::shared_ptr<android::icu::util::ULocale> locale);
private:
	static long long serialVersionUID;
public:
	static std::shared_ptr<android::icu::text::DurationFormat> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::StringBuffer> format(std::shared_ptr<java::lang::Object> var0,std::shared_ptr<java::lang::StringBuffer> var1,std::shared_ptr<java::text::FieldPosition> var2);
	std::shared_ptr<java::lang::String> formatDurationFrom(long long var0,long long var1);
	std::shared_ptr<java::lang::String> formatDurationFromNow(long long var0);
	std::shared_ptr<java::lang::String> formatDurationFromNowTo(std::shared_ptr<java::util::Date> var0);
	std::shared_ptr<java::lang::Object> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
public:
	virtual ~DurationFormat(){
	}

}; // class DurationFormat
}; // namespace android::icu::text

#endif //__android_icu_text_DurationFormat__

