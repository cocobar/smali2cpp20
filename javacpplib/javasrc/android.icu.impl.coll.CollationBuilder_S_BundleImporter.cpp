// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationBuilder$BundleImporter.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationBuilder_S_BundleImporter.h"
#include "android.icu.impl.coll.CollationLoader.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::impl::coll::CollationBuilder_S_BundleImporter::CollationBuilder_S_BundleImporter()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getRules(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::coll::CollationBuilder_S_BundleImporter::getRules(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> collationType)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "collationType"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::impl::coll::CollationLoader::loadRules(cVar0, collationType);

}


