#ifndef __android_icu_impl_TZDBTimeZoneNames_S_TZDBNameSearchHandler__
#define __android_icu_impl_TZDBTimeZoneNames_S_TZDBNameSearchHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TZDBTimeZoneNames$TZDBNameSearchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNameInfo.h"
#include "android.icu.impl.TextTrieMap_S_ResultHandler.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
class TZDBTimeZoneNames_S_TZDBNameSearchHandler : public android::icu::impl::TextTrieMap_S_ResultHandler<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo> {
protected:
private:
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> _matches;
	std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> _nameTypes;
	std::shared_ptr<java::lang::String> _region;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	TZDBTimeZoneNames_S_TZDBNameSearchHandler(std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes,std::shared_ptr<java::lang::String> region);
	std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> virtual getMatches();
	bool virtual handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo>> values);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TZDBTimeZoneNames_S_TZDBNameSearchHandler(){
	}

}; // class TZDBTimeZoneNames_S_TZDBNameSearchHandler
}; // namespace android::icu::impl

#endif //__android_icu_impl_TZDBTimeZoneNames_S_TZDBNameSearchHandler__

