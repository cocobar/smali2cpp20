#ifndef __android_icu_text_TimeZoneNames_S_DefaultTimeZoneNames__
#define __android_icu_text_TimeZoneNames_S_DefaultTimeZoneNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$DefaultTimeZoneNames.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Set.h"

namespace android::icu::text{
class TimeZoneNames_S_DefaultTimeZoneNames : public android::icu::text::TimeZoneNames {
protected:
private:
	static long long serialVersionUID;
	TimeZoneNames_S_DefaultTimeZoneNames();
public:
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames> INSTANCE;
	static void static_cinit();
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> virtual find(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getAvailableMetaZoneIDs();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> tzID);
	std::shared_ptr<java::lang::String> virtual getMetaZoneDisplayName(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type);
	std::shared_ptr<java::lang::String> virtual getMetaZoneID(std::shared_ptr<java::lang::String> tzID,long long date);
	std::shared_ptr<java::lang::String> virtual getReferenceZoneID(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> region);
	std::shared_ptr<java::lang::String> virtual getTimeZoneDisplayName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneNames_S_DefaultTimeZoneNames(){
	}

}; // class TimeZoneNames_S_DefaultTimeZoneNames
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneNames_S_DefaultTimeZoneNames__

