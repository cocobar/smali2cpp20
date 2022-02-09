#ifndef __android_icu_impl_TimeZoneNamesImpl_S_ZNames__
#define __android_icu_impl_TimeZoneNamesImpl_S_ZNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$ZNames.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_NameInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_ZNames : public java::lang::Object {
protected:
	TimeZoneNamesImpl_S_ZNames(std::shared_ptr<std::vector<java::lang::String>> names);
private:
	static std::shared_ptr<int[]> _android_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndexSwitchesValues;
	static std::shared_ptr<int[]> _android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues;
	static int EX_LOC_INDEX;
	std::shared_ptr<std::vector<java::lang::String>> _names;
	bool didAddIntoTrie;
	static int _getandroid_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndexSwitchesValues();
	static int _getandroid_icu_text_TimeZoneNames_S_NameTypeSwitchesValues();
	void virtual addNamesIntoTrie(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::impl::TextTrieMap<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>> trie);
	static std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> getNameType(int index);
	static int getNameTypeIndex(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type);
public:
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> EMPTY_ZNAMES;
	static int NUM_NAME_TYPES;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> createMetaZoneAndPutInCache(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::TimeZoneNamesImpl_S_ZNames>> cache,std::shared_ptr<std::vector<java::lang::String>> names,std::shared_ptr<java::lang::String> mzID);
	static std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> createTimeZoneAndPutInCache(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::TimeZoneNamesImpl_S_ZNames>> cache,std::shared_ptr<std::vector<java::lang::String>> cVar0,std::shared_ptr<java::lang::String> tzID);
	void virtual addAsMetaZoneIntoTrie(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::impl::TextTrieMap<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>> trie);
	void virtual addAsTimeZoneIntoTrie(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::impl::TextTrieMap<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>> trie);
	std::shared_ptr<java::lang::String> virtual getName(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TimeZoneNamesImpl_S_ZNames::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneNamesImpl_S_ZNames(){
	}

}; // class TimeZoneNamesImpl_S_ZNames
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_ZNames__

