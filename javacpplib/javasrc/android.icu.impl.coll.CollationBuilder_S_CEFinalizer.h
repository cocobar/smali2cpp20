#ifndef __android_icu_impl_coll_CollationBuilder_S_CEFinalizer__
#define __android_icu_impl_coll_CollationBuilder_S_CEFinalizer__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationBuilder$CEFinalizer.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_CEModifier.h"

namespace android::icu::impl::coll{
class CollationBuilder_S_CEFinalizer : public android::icu::impl::coll::CollationDataBuilder_S_CEModifier {
protected:
private:
	std::shared_ptr<long long[]> finalCEs;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationBuilder_S_CEFinalizer(std::shared_ptr<long long[]> ces);
	long long virtual modifyCE(long long ce);
	long long virtual modifyCE32(int ce32);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationBuilder_S_CEFinalizer::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationBuilder_S_CEFinalizer(){
	}

}; // class CollationBuilder_S_CEFinalizer
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationBuilder_S_CEFinalizer__

