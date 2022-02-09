#ifndef __android_icu_impl_coll_CollationKeys__
#define __android_icu_impl_coll_CollationKeys__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationKeys.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.CollationKeys_S_LevelCallback.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyByteSink.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyLevel.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationKeys : public java::lang::Object {
protected:
private:
	static int CASE_LOWER_FIRST_COMMON_HIGH;
	static int CASE_LOWER_FIRST_COMMON_LOW;
	static int CASE_LOWER_FIRST_COMMON_MAX_COUNT;
	static int CASE_LOWER_FIRST_COMMON_MIDDLE;
	static int CASE_UPPER_FIRST_COMMON_HIGH;
	static int CASE_UPPER_FIRST_COMMON_LOW;
	static int CASE_UPPER_FIRST_COMMON_MAX_COUNT;
	static int QUAT_COMMON_HIGH;
	static int QUAT_COMMON_LOW;
	static int QUAT_COMMON_MAX_COUNT;
	static int QUAT_COMMON_MIDDLE;
	static int QUAT_SHIFTED_LIMIT_BYTE;
	static int SEC_COMMON_LOW;
	static int SEC_COMMON_MAX_COUNT;
	static int SEC_COMMON_MIDDLE;
	static int TER_LOWER_FIRST_COMMON_HIGH;
	static int TER_LOWER_FIRST_COMMON_LOW;
	static int TER_LOWER_FIRST_COMMON_MAX_COUNT;
	static int TER_LOWER_FIRST_COMMON_MIDDLE;
	static int TER_ONLY_COMMON_HIGH;
	static int TER_ONLY_COMMON_LOW;
	static int TER_ONLY_COMMON_MAX_COUNT;
	static int TER_ONLY_COMMON_MIDDLE;
	static int TER_UPPER_FIRST_COMMON_HIGH;
	static int TER_UPPER_FIRST_COMMON_LOW;
	static int TER_UPPER_FIRST_COMMON_MAX_COUNT;
	static int TER_UPPER_FIRST_COMMON_MIDDLE;
	static std::shared_ptr<int[]> levelMasks;
	CollationKeys();
	static std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyLevel> getSortKeyLevel(int levels,int level);
public:
	static bool _assertionsDisabled;
	static int SEC_COMMON_HIGH;
	static std::shared_ptr<android::icu::impl::coll::CollationKeys_S_LevelCallback> SIMPLE_LEVEL_FALLBACK;
	static void static_cinit();
	static void writeSortKeyUpToQuaternary(std::shared_ptr<android::icu::impl::coll::CollationIterator> iter,std::shared_ptr<bool[]> compressibleBytes,std::shared_ptr<android::icu::impl::coll::CollationSettings> settings,std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyByteSink> sink,int minLevel,std::shared_ptr<android::icu::impl::coll::CollationKeys_S_LevelCallback> callback,bool preflight);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationKeys::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationKeys(){
	}

}; // class CollationKeys
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationKeys__

