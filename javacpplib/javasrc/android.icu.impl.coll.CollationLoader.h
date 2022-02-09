#ifndef __android_icu_impl_coll_CollationLoader__
#define __android_icu_impl_coll_CollationLoader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationLoader.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::coll{
class CollationLoader : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> rootRules;
	CollationLoader();
	static std::shared_ptr<android::icu::util::UResourceBundle> findWithFallback(std::shared_ptr<android::icu::util::UResourceBundle> table,std::shared_ptr<java::lang::String> entryName);
	static void loadRootRules();
public:
	static void static_cinit();
	static std::shared_ptr<java::lang::String> getRootRules();
	static std::shared_ptr<java::lang::String> loadRules(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> collationType);
	static std::shared_ptr<android::icu::impl::coll::CollationTailoring> loadTailoring(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::Output<android::icu::util::ULocale>> outValidLocale);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationLoader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationLoader(){
	}

}; // class CollationLoader
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationLoader__

