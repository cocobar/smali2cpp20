#ifndef __android_icu_impl_OlsonTimeZone__
#define __android_icu_impl_OlsonTimeZone__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\OlsonTimeZone.smali
#include "java2ctype.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "android.icu.util.TimeArrayTimeZoneRule.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::impl{
class OlsonTimeZone : public android::icu::util::BasicTimeZone {
protected:
private:
	static bool DEBUG;
	static int MAX_OFFSET_SECONDS;
	static int SECONDS_PER_DAY;
	static std::shared_ptr<java::lang::String> ZONEINFORES;
	static int currentSerialVersion;
	std::shared_ptr<java::lang::String> canonicalID;
	double finalStartMillis;
	int finalStartYear;
	std::shared_ptr<android::icu::util::SimpleTimeZone> finalZone;
	std::shared_ptr<android::icu::util::SimpleTimeZone> finalZoneWithStartYear;
	std::shared_ptr<android::icu::util::TimeZoneTransition> firstFinalTZTransition;
	std::shared_ptr<android::icu::util::TimeZoneTransition> firstTZTransition;
	int firstTZTransitionIdx;
	std::shared_ptr<std::vector<android::icu::util::TimeArrayTimeZoneRule>> historicRules;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> initialRule;
	bool isFrozen;
	int serialVersionOnStream;
	int transitionCount;
	bool transitionRulesInitialized;
	std::shared_ptr<long long[]> transitionTimes64;
	int typeCount;
	std::shared_ptr<unsigned char[]> typeMapData;
	std::shared_ptr<int[]> typeOffsets;
	void virtual construct(std::shared_ptr<android::icu::util::UResourceBundle> top,std::shared_ptr<android::icu::util::UResourceBundle> res);
	void virtual constructEmpty();
	int virtual dstOffsetAt(int transIdx);
	void virtual getHistoricalOffset(long long date,bool local,int NonExistingTimeOpt,int DuplicatedTimeOpt,std::shared_ptr<int[]> offsets);
	int virtual getInt(unsigned char val);
	void virtual initTransitionRules();
	int virtual initialDstOffset();
	int virtual initialRawOffset();
	static std::shared_ptr<android::icu::util::UResourceBundle> loadRule(std::shared_ptr<android::icu::util::UResourceBundle> top,std::shared_ptr<java::lang::String> ruleid);
	int virtual rawOffsetAt(int transIdx);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
	int virtual zoneOffsetAt(int transIdx);
public:
	static bool _assertionsDisabled;
	static long long serialVersionUID;
	static void static_cinit();
	OlsonTimeZone(std::shared_ptr<android::icu::util::UResourceBundle> top,std::shared_ptr<android::icu::util::UResourceBundle> res,std::shared_ptr<java::lang::String> id);
	OlsonTimeZone(std::shared_ptr<java::lang::String> id);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::util::TimeZone> virtual cloneAsThawed();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<android::icu::util::TimeZone> virtual freeze();
	std::shared_ptr<java::lang::String> virtual getCanonicalID();
	int virtual getDSTSavings();
	std::shared_ptr<android::icu::util::TimeZoneTransition> virtual getNextTransition(long long base,bool inclusive);
	int virtual getOffset(int era,int year,int month,int day,int dayOfWeek,int milliseconds);
	int virtual getOffset(int era,int cVar1,int month,int dom,int dow,int millis,int monthLength);
	void virtual getOffset(long long date,bool local,std::shared_ptr<int[]> offsets);
	void virtual getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets);
	std::shared_ptr<android::icu::util::TimeZoneTransition> virtual getPreviousTransition(long long base,bool inclusive);
	int virtual getRawOffset();
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual getTimeZoneRules();
	bool virtual hasSameRules(std::shared_ptr<android::icu::util::TimeZone> other);
	int virtual hashCode();
	bool virtual inDaylightTime(std::shared_ptr<java::util::Date> date);
	bool virtual isFrozen();
	bool virtual observesDaylightTime();
	void virtual setID(std::shared_ptr<java::lang::String> id);
	void virtual setRawOffset(int offsetMillis);
	std::shared_ptr<java::lang::String> virtual toString();
	bool virtual useDaylightTime();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::OlsonTimeZone::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~OlsonTimeZone(){
	}

}; // class OlsonTimeZone
}; // namespace android::icu::impl

#endif //__android_icu_impl_OlsonTimeZone__

