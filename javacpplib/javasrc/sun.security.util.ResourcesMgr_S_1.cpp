// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ResourcesMgr$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.ResourceBundle.h"
#include "sun.security.util.Resources.h"
#include "sun.security.util.ResourcesMgr_S_1.h"

// .method constructor <init>()V
sun::security::util::ResourcesMgr_S_1::ResourcesMgr_S_1()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/util/ResourceBundle;
std::shared_ptr<java::util::ResourceBundle> sun::security::util::ResourcesMgr_S_1::run()
{
	
	return java::util::ResourceBundle::getBundle(sun::security::util::Resources()->getName());

}


