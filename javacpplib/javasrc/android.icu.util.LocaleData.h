#ifndef __android_icu_util_LocaleData__
#define __android_icu_util_LocaleData__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleData.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.LocaleData_S_MeasurementSystem.h"
#include "android.icu.util.LocaleData_S_PaperSize.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class LocaleData : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> DELIMITER_TYPES;
	static std::shared_ptr<java::lang::String> LOCALE_DISPLAY_PATTERN;
	static std::shared_ptr<java::lang::String> MEASUREMENT_SYSTEM;
	static std::shared_ptr<java::lang::String> PAPER_SIZE;
	static std::shared_ptr<java::lang::String> PATTERN;
	static std::shared_ptr<java::lang::String> SEPARATOR;
	static std::shared_ptr<android::icu::util::VersionInfo> gCLDRVersion;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> langBundle;
	bool noSubstitute;
	LocaleData();
	static std::shared_ptr<android::icu::util::UResourceBundle> measurementTypeBundleForLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> measurementType);
public:
	static int ALT_QUOTATION_END;
	static int ALT_QUOTATION_START;
	static int DELIMITER_COUNT;
	static int ES_AUXILIARY;
	static int ES_COUNT;
	static int ES_CURRENCY;
	static int ES_INDEX;
	static int ES_PUNCTUATION;
	static int ES_STANDARD;
	static int QUOTATION_END;
	static int QUOTATION_START;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::VersionInfo> getCLDRVersion();
	static std::shared_ptr<android::icu::text::UnicodeSet> getExemplarSet(std::shared_ptr<android::icu::util::ULocale> locale,int options);
	static std::shared_ptr<android::icu::text::UnicodeSet> getExemplarSet(std::shared_ptr<android::icu::util::ULocale> locale,int options,int extype);
	static std::shared_ptr<android::icu::util::LocaleData> getInstance();
	static std::shared_ptr<android::icu::util::LocaleData> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::util::LocaleData_S_MeasurementSystem> getMeasurementSystem(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::util::LocaleData_S_PaperSize> getPaperSize(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual getDelimiter(int type);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getExemplarSet(int options,int extype);
	std::shared_ptr<java::lang::String> virtual getLocaleDisplayPattern();
	std::shared_ptr<java::lang::String> virtual getLocaleSeparator();
	bool virtual getNoSubstitute();
	void virtual setNoSubstitute(bool setting);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::LocaleData::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleData(){
	}

}; // class LocaleData
}; // namespace android::icu::util

#endif //__android_icu_util_LocaleData__

