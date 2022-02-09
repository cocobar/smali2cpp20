#ifndef __android_icu_impl_coll_CollationRuleParser_S_Importer__
#define __android_icu_impl_coll_CollationRuleParser_S_Importer__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRuleParser$Importer.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::coll{
class CollationRuleParser_S_Importer : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> getRules(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1) = 0;
	CollationRuleParser_S_Importer(){ };
	virtual ~CollationRuleParser_S_Importer(){ };

}; // class CollationRuleParser_S_Importer
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationRuleParser_S_Importer__

