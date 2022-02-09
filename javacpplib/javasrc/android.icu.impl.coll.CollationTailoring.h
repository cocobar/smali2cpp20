#ifndef __android_icu_impl_coll_CollationTailoring__
#define __android_icu_impl_coll_CollationTailoring__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationTailoring.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.SharedObject_S_Reference.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl::coll{
class CollationTailoring : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> rules;
	std::shared_ptr<android::icu::util::UResourceBundle> rulesResource;
public:
	static bool _assertionsDisabled;
	std::shared_ptr<android::icu::util::ULocale> actualLocale;
	std::shared_ptr<android::icu::impl::coll::CollationData> data;
	std::shared_ptr<java::util::Map<java::lang::Integer,java::lang::Integer>> maxExpansions;
	std::shared_ptr<android::icu::impl::coll::CollationData> ownedData;
	std::shared_ptr<android::icu::impl::coll::SharedObject_S_Reference<android::icu::impl::coll::CollationSettings>> settings;
	std::shared_ptr<android::icu::impl::Trie2_32> trie;
	std::shared_ptr<android::icu::text::UnicodeSet> unsafeBackwardSet;
	int version;
	static void static_cinit();
	CollationTailoring(std::shared_ptr<android::icu::impl::coll::SharedObject_S_Reference<android::icu::impl::coll::CollationSettings>> baseSettings);
	static std::shared_ptr<android::icu::util::VersionInfo> makeBaseVersion(std::shared_ptr<android::icu::util::VersionInfo> ucaVersion);
	void virtual ensureOwnedData();
	std::shared_ptr<java::lang::String> virtual getRules();
	int virtual getUCAVersion();
	void virtual setRules(std::shared_ptr<java::lang::String> r);
	void virtual setRulesResource(std::shared_ptr<android::icu::util::UResourceBundle> res);
	void virtual setVersion(int baseVersion,int rulesVersion);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationTailoring::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationTailoring(){
	}

}; // class CollationTailoring
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationTailoring__

