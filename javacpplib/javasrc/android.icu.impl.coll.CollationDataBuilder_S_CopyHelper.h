#ifndef __android_icu_impl_coll_CollationDataBuilder_S_CopyHelper__
#define __android_icu_impl_coll_CollationDataBuilder_S_CopyHelper__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataBuilder$CopyHelper.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_CEModifier.h"
#include "android.icu.impl.coll.CollationDataBuilder.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationDataBuilder_S_CopyHelper : public java::lang::Object {
protected:
private:
public:
	static bool _assertionsDisabled;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> dest;
	std::shared_ptr<long long[]> modifiedCEs;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_CEModifier> modifier;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> src;
	static void static_cinit();
	CollationDataBuilder_S_CopyHelper(std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> s,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> d,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_CEModifier> m);
	int virtual copyCE32(int cVar0);
	void virtual copyRangeCE32(int start,int end,int ce32);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationDataBuilder_S_CopyHelper::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationDataBuilder_S_CopyHelper(){
	}

}; // class CollationDataBuilder_S_CopyHelper
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationDataBuilder_S_CopyHelper__

