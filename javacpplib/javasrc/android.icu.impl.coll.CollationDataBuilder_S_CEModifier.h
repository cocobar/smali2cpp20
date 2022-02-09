#ifndef __android_icu_impl_coll_CollationDataBuilder_S_CEModifier__
#define __android_icu_impl_coll_CollationDataBuilder_S_CEModifier__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataBuilder$CEModifier.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationDataBuilder_S_CEModifier : public java::lang::Object {
protected:
private:
public:
	long long modifyCE(long long var0) = 0;
	long long modifyCE32(int var0) = 0;
	CollationDataBuilder_S_CEModifier(){ };
	virtual ~CollationDataBuilder_S_CEModifier(){ };

}; // class CollationDataBuilder_S_CEModifier
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationDataBuilder_S_CEModifier__

