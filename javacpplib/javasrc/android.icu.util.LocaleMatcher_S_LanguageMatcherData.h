#ifndef __android_icu_util_LocaleMatcher_S_LanguageMatcherData__
#define __android_icu_util_LocaleMatcher_S_LanguageMatcherData__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher$LanguageMatcherData.smali
#include "java2ctype.h"
#include "android.icu.impl.Relation.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.LocaleMatcher_S_ScoreData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

namespace android::icu::util{
class LocaleMatcher_S_LanguageMatcherData : public android::icu::util::Freezable<android::icu::util::LocaleMatcher_S_LanguageMatcherData> {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_util_LocaleMatcher_S_LevelSwitchesValues;
	bool frozen;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> languageScores;
	std::shared_ptr<android::icu::impl::Relation<java::lang::String,java::lang::String>> matchingLanguages;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> regionScores;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> scriptScores;
	static int _getandroid_icu_util_LocaleMatcher_S_LevelSwitchesValues();
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> virtual addDistance(std::shared_ptr<java::lang::String> desired,std::shared_ptr<java::lang::String> supported,int percent,bool oneway,std::shared_ptr<java::lang::String> comment);
public:
	LocaleMatcher_S_LanguageMatcherData();
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> virtual addDistance(std::shared_ptr<java::lang::String> desired,std::shared_ptr<java::lang::String> supported,int percent,std::shared_ptr<java::lang::String> comment);
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> virtual addDistance(std::shared_ptr<java::lang::String> desired,std::shared_ptr<java::lang::String> supported,int percent,bool oneway);
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> virtual cloneAsThawed();
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> virtual freeze();
	bool virtual isFrozen();
	double virtual match(std::shared_ptr<android::icu::util::ULocale> a,std::shared_ptr<android::icu::util::ULocale> aMax,std::shared_ptr<android::icu::util::ULocale> b,std::shared_ptr<android::icu::util::ULocale> bMax);
	std::shared_ptr<android::icu::impl::Relation<java::lang::String,java::lang::String>> virtual matchingLanguages();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~LocaleMatcher_S_LanguageMatcherData(){
	}

}; // class LocaleMatcher_S_LanguageMatcherData
}; // namespace android::icu::util

#endif //__android_icu_util_LocaleMatcher_S_LanguageMatcherData__

