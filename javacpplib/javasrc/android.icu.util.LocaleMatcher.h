#ifndef __android_icu_util_LocaleMatcher__
#define __android_icu_util_LocaleMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.Row_S_R3.h"
#include "android.icu.util.LocaleMatcher_S_LanguageMatcherData.h"
#include "android.icu.util.LocaleMatcher_S_OutputDouble.h"
#include "android.icu.util.LocalePriorityList.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Double.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::util{
class LocaleMatcher : public java::lang::Object {
protected:
private:
	static double DEFAULT_THRESHOLD;
	static std::shared_ptr<android::icu::util::ULocale> UNKNOWN_LOCALE;
	static std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> canonicalMap;
	static std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> defaultWritten;
	std::shared_ptr<android::icu::util::ULocale> defaultLanguage;
	double threshold;
	void virtual add(std::shared_ptr<android::icu::util::ULocale> language,std::shared_ptr<java::lang::Double> weight);
	void virtual addFiltered(std::shared_ptr<java::lang::String> desired,std::shared_ptr<android::icu::impl::Row_S_R3<android::icu::util::ULocale,android::icu::util::ULocale,java::lang::Double>> localeToMaxAndWeight);
	std::shared_ptr<android::icu::util::ULocale> virtual addLikelySubtags(std::shared_ptr<android::icu::util::ULocale> languageCode);
	std::shared_ptr<android::icu::util::ULocale> virtual getBestMatchInternal(std::shared_ptr<android::icu::util::ULocale> languageCode,std::shared_ptr<android::icu::util::LocaleMatcher_S_OutputDouble> outputWeight);
	void virtual processMapping();
public:
	static bool DEBUG;
	std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<android::icu::impl::Row_S_R3<android::icu::util::ULocale,android::icu::util::ULocale,java::lang::Double>>>> desiredLanguageToPossibleLocalesToMaxLocaleToData;
	std::shared_ptr<java::util::Set<android::icu::impl::Row_S_R3<android::icu::util::ULocale,android::icu::util::ULocale,java::lang::Double>>> localeToMaxLocaleAndWeight;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> matcherData;
	static void static_cinit();
	LocaleMatcher(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList);
	LocaleMatcher(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList,std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> matcherData);
	LocaleMatcher(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList,std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> matcherData,double threshold);
	LocaleMatcher(std::shared_ptr<java::lang::String> languagePriorityListString);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> getICUSupplementalData();
	static double match(std::shared_ptr<android::icu::util::ULocale> a,std::shared_ptr<android::icu::util::ULocale> b);
	std::shared_ptr<android::icu::util::ULocale> virtual canonicalize(std::shared_ptr<android::icu::util::ULocale> ulocale);
	std::shared_ptr<android::icu::util::ULocale> virtual getBestMatch(std::shared_ptr<android::icu::util::LocalePriorityList> languageList);
	std::shared_ptr<android::icu::util::ULocale> virtual getBestMatch(std::shared_ptr<android::icu::util::ULocale> ulocale);
	std::shared_ptr<android::icu::util::ULocale> virtual getBestMatch(std::shared_ptr<java::lang::String> languageList);
	std::shared_ptr<android::icu::util::ULocale> virtual getBestMatch(std::shared_ptr<std::vector<android::icu::util::ULocale>> ulocales);
	double virtual match(std::shared_ptr<android::icu::util::ULocale> desired,std::shared_ptr<android::icu::util::ULocale> desiredMax,std::shared_ptr<android::icu::util::ULocale> supported,std::shared_ptr<android::icu::util::ULocale> supportedMax);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::LocaleMatcher::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleMatcher(){
	}

}; // class LocaleMatcher
}; // namespace android::icu::util

#endif //__android_icu_util_LocaleMatcher__

