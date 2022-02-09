#ifndef __android_icu_text_DateIntervalInfo__
#define __android_icu_text_DateIntervalInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.text.DateIntervalFormat_S_BestMatchInfo.h"
#include "android.icu.text.DateIntervalInfo_S_PatternInfo.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.ULocale.h"
#include "java.io.Serializable.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::text{
class DateIntervalInfo : public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::text::DateIntervalInfo>, public java::io::Serializable {
protected:
private:
	static std::shared_ptr<java::lang::String> CALENDAR_KEY;
	static std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,android::icu::text::DateIntervalInfo>> DIICACHE;
	static std::shared_ptr<java::lang::String> EARLIEST_FIRST_PREFIX;
	static std::shared_ptr<java::lang::String> FALLBACK_STRING;
	static std::shared_ptr<java::lang::String> INTERVAL_FORMATS_KEY;
	static std::shared_ptr<java::lang::String> LATEST_FIRST_PREFIX;
	static int MINIMUM_SUPPORTED_CALENDAR_FIELD;
	static long long serialVersionUID;
	std::shared_ptr<java::lang::String> fFallbackIntervalPattern;
	bool fFirstDateInPtnIsLaterDate;
	std::shared_ptr<java::util::Map<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> fIntervalPatterns;
	bool fIntervalPatternsReadOnly;
	bool frozen;
	static std::shared_ptr<java::util::Map<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> cloneIntervalPatterns(std::shared_ptr<java::util::Map<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> patterns);
	std::shared_ptr<java::lang::Object> virtual cloneUnfrozenDII();
	void virtual initializeData(std::shared_ptr<android::icu::util::ULocale> locale);
	void virtual initializeFromReadOnlyPatterns(std::shared_ptr<android::icu::text::DateIntervalInfo> dii);
	void virtual setIntervalPattern(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> lrgDiffCalUnit,std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> ptnInfo);
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> virtual setIntervalPatternInternally(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> lrgDiffCalUnit,std::shared_ptr<java::lang::String> cVar0);
	void virtual setup(std::shared_ptr<android::icu::util::ULocale> locale);
	static int splitPatternInto2Part(std::shared_ptr<java::lang::String> intervalPattern);
	static bool stringNumeric(int fieldWidth,int anotherFieldWidth,char patternLetter);
public:
	static std::shared_ptr<std::vector<java::lang::String>> CALENDAR_FIELD_TO_PATTERN_LETTER;
	static int currentSerialVersion;
	static std::shared_ptr<java::lang::String> _get0();
	static std::shared_ptr<java::lang::String> _get1();
	static std::shared_ptr<java::util::Map> _get2(std::shared_ptr<android::icu::text::DateIntervalInfo> _this);
	static std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> _wrap0(std::shared_ptr<android::icu::text::DateIntervalInfo> _this,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> lrgDiffCalUnit,std::shared_ptr<java::lang::String> intervalPattern);
	static void static_cinit();
	DateIntervalInfo();
	DateIntervalInfo(std::shared_ptr<android::icu::util::ULocale> locale);
	DateIntervalInfo(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> genPatternInfo(std::shared_ptr<java::lang::String> intervalPattern,bool laterDateFirst);
	static void parseSkeleton(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<int[]> skeletonFieldWidth);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::text::DateIntervalInfo> virtual cloneAsThawed();
	bool virtual equals(std::shared_ptr<java::lang::Object> a);
	std::shared_ptr<android::icu::text::DateIntervalInfo> virtual freeze();
	std::shared_ptr<android::icu::text::DateIntervalFormat_S_BestMatchInfo> virtual getBestSkeleton(std::shared_ptr<java::lang::String> cVar0);
	bool virtual getDefaultOrder();
	std::shared_ptr<java::lang::String> virtual getFallbackIntervalPattern();
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> virtual getIntervalPattern(std::shared_ptr<java::lang::String> skeleton,int field);
	std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<java::lang::String>>> virtual getPatterns();
	std::shared_ptr<java::util::Map<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> virtual getRawPatterns();
	int virtual hashCode();
	bool virtual isFrozen();
	void virtual setFallbackIntervalPattern(std::shared_ptr<java::lang::String> fallbackPattern);
	void virtual setIntervalPattern(std::shared_ptr<java::lang::String> skeleton,int lrgDiffCalUnit,std::shared_ptr<java::lang::String> intervalPattern);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateIntervalInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateIntervalInfo(){
	}

}; // class DateIntervalInfo
}; // namespace android::icu::text

#endif //__android_icu_text_DateIntervalInfo__

