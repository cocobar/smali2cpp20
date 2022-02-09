#ifndef __android_icu_util_LocaleMatcher_S_ScoreData__
#define __android_icu_util_LocaleMatcher_S_ScoreData__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher$ScoreData.smali
#include "java2ctype.h"
#include "android.icu.impl.Relation.h"
#include "android.icu.impl.Row_S_R3.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.LocaleMatcher_S_Level.h"
#include "android.icu.util.LocaleMatcher_S_LocalePatternMatcher.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Double.h"
#include "java.lang.String.h"
#include "java.util.LinkedHashSet.h"

namespace android::icu::util{
class LocaleMatcher_S_ScoreData : public android::icu::util::Freezable<android::icu::util::LocaleMatcher_S_ScoreData> {
protected:
private:
	static double maxUnequal_changeD_sameS;
	static double maxUnequal_changeEqual;
	bool frozen;
	double virtual getRawScore(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<android::icu::util::ULocale> supportedLocale);
public:
	std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> level;
	std::shared_ptr<java::util::LinkedHashSet<android::icu::impl::Row_S_R3<android::icu::util::LocaleMatcher_S_LocalePatternMatcher,android::icu::util::LocaleMatcher_S_LocalePatternMatcher,java::lang::Double>>> scores;
	LocaleMatcher_S_ScoreData(std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> level);
	void virtual addDataToScores(std::shared_ptr<java::lang::String> desired,std::shared_ptr<java::lang::String> supported,std::shared_ptr<android::icu::impl::Row_S_R3<android::icu::util::LocaleMatcher_S_LocalePatternMatcher,android::icu::util::LocaleMatcher_S_LocalePatternMatcher,java::lang::Double>> data);
	std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> virtual cloneAsThawed();
	std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> virtual freeze();
	std::shared_ptr<android::icu::impl::Relation<java::lang::String,java::lang::String>> virtual getMatchingLanguages();
	double virtual getScore(std::shared_ptr<android::icu::util::ULocale> dMax,std::shared_ptr<java::lang::String> desiredRaw,std::shared_ptr<java::lang::String> desiredMax,std::shared_ptr<android::icu::util::ULocale> sMax,std::shared_ptr<java::lang::String> supportedRaw,std::shared_ptr<java::lang::String> supportedMax);
	bool virtual isFrozen();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~LocaleMatcher_S_ScoreData(){
	}

}; // class LocaleMatcher_S_ScoreData
}; // namespace android::icu::util

#endif //__android_icu_util_LocaleMatcher_S_ScoreData__

