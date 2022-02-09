#ifndef __android_icu_impl_coll_CollationCompare__
#define __android_icu_impl_coll_CollationCompare__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationCompare.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationCompare : public java::lang::Object {
protected:
private:
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationCompare();
	static int compareUpToQuaternary(std::shared_ptr<android::icu::impl::coll::CollationIterator> left,std::shared_ptr<android::icu::impl::coll::CollationIterator> right,std::shared_ptr<android::icu::impl::coll::CollationSettings> settings);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationCompare::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationCompare(){
	}

}; // class CollationCompare
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationCompare__

