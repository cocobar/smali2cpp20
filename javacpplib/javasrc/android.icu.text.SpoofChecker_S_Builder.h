#ifndef __android_icu_text_SpoofChecker_S_Builder__
#define __android_icu_text_SpoofChecker_S_Builder__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_RestrictionLevel.h"
#include "android.icu.text.SpoofChecker_S_SpoofData.h"
#include "android.icu.text.SpoofChecker.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "java.io.Reader.h"
#include "java.lang.Object.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::text{
class SpoofChecker_S_Builder : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> fRestrictionLevel;
	void virtual addScriptChars(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::UnicodeSet> allowedChars);
public:
	std::shared_ptr<android::icu::text::UnicodeSet> fAllowedCharsSet;
	std::shared_ptr<java::util::Set<android::icu::util::ULocale>> fAllowedLocales;
	int fChecks;
	std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> fSpoofData;
	SpoofChecker_S_Builder();
	SpoofChecker_S_Builder(std::shared_ptr<android::icu::text::SpoofChecker> src);
	std::shared_ptr<android::icu::text::SpoofChecker> virtual build();
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> virtual setAllowedChars(std::shared_ptr<android::icu::text::UnicodeSet> chars);
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> virtual setAllowedJavaLocales(std::shared_ptr<java::util::Set<java::util::Locale>> locales);
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> virtual setAllowedLocales(std::shared_ptr<java::util::Set<android::icu::util::ULocale>> locales);
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> virtual setChecks(int checks);
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> virtual setData(std::shared_ptr<java::io::Reader> confusables);
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> virtual setData(std::shared_ptr<java::io::Reader> confusables,std::shared_ptr<java::io::Reader> confusablesWholeScript);
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder> virtual setRestrictionLevel(std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> restrictionLevel);
public:
	virtual ~SpoofChecker_S_Builder(){
	}

}; // class SpoofChecker_S_Builder
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_Builder__

