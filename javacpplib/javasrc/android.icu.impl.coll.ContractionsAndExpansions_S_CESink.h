#ifndef __android_icu_impl_coll_ContractionsAndExpansions_S_CESink__
#define __android_icu_impl_coll_ContractionsAndExpansions_S_CESink__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\ContractionsAndExpansions$CESink.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class ContractionsAndExpansions_S_CESink : public java::lang::Object {
protected:
private:
public:
	void handleCE(long long var0) = 0;
	void handleExpansion(std::shared_ptr<long long[]> var0,int var1,int var2) = 0;
	ContractionsAndExpansions_S_CESink(){ };
	virtual ~ContractionsAndExpansions_S_CESink(){ };

}; // class ContractionsAndExpansions_S_CESink
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_ContractionsAndExpansions_S_CESink__
