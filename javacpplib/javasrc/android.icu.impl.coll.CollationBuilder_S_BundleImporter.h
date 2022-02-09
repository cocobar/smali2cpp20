#ifndef __android_icu_impl_coll_CollationBuilder_S_BundleImporter__
#define __android_icu_impl_coll_CollationBuilder_S_BundleImporter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationBuilder$BundleImporter.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Importer.h"
#include "java.lang.String.h"

namespace android::icu::impl::coll{
class CollationBuilder_S_BundleImporter : public android::icu::impl::coll::CollationRuleParser_S_Importer {
protected:
private:
public:
	CollationBuilder_S_BundleImporter();
	std::shared_ptr<java::lang::String> virtual getRules(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> collationType);
public:
	virtual ~CollationBuilder_S_BundleImporter(){
	}

}; // class CollationBuilder_S_BundleImporter
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationBuilder_S_BundleImporter__

