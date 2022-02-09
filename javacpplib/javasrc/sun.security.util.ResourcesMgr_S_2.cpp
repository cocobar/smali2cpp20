// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ResourcesMgr$2.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.ResourceBundle.h"
#include "sun.security.util.ResourcesMgr_S_2.h"

// .method constructor <init>(Ljava/lang/String;)V
sun::security::util::ResourcesMgr_S_2::ResourcesMgr_S_2(std::shared_ptr<java::lang::String> var0)
{
	
	this->val_S_altBundleName = var0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/util/ResourceBundle;
std::shared_ptr<java::util::ResourceBundle> sun::security::util::ResourcesMgr_S_2::run()
{
	
	return java::util::ResourceBundle::getBundle(this->val_S_altBundleName);

}


