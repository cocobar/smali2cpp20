#ifndef __android_icu_impl_coll_CollationRoot__
#define __android_icu_impl_coll_CollationRoot__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRoot.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"

namespace android::icu::impl::coll{
class CollationRoot : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::RuntimeException> exception;
	static std::shared_ptr<android::icu::impl::coll::CollationTailoring> rootSingleton;
public:
	static void static_cinit();
	CollationRoot();
	static std::shared_ptr<android::icu::impl::coll::CollationData> getData();
	static std::shared_ptr<android::icu::impl::coll::CollationTailoring> getRoot();
	static std::shared_ptr<android::icu::impl::coll::CollationSettings> getSettings();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationRoot::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationRoot(){
	}

}; // class CollationRoot
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationRoot__

