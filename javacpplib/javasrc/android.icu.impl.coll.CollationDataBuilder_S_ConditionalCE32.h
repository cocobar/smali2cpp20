#ifndef __android_icu_impl_coll_CollationDataBuilder_S_ConditionalCE32__
#define __android_icu_impl_coll_CollationDataBuilder_S_ConditionalCE32__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataBuilder$ConditionalCE32.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::coll{
class CollationDataBuilder_S_ConditionalCE32 : public java::lang::Object {
protected:
private:
public:
	int builtCE32;
	int ce32;
	std::shared_ptr<java::lang::String> context;
	int defaultCE32;
	int next;
	CollationDataBuilder_S_ConditionalCE32(std::shared_ptr<java::lang::String> ct,int ce);
	bool virtual hasContext();
	int virtual prefixLength();
public:
	virtual ~CollationDataBuilder_S_ConditionalCE32(){
	}

}; // class CollationDataBuilder_S_ConditionalCE32
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationDataBuilder_S_ConditionalCE32__

