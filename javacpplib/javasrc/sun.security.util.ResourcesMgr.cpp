// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ResourcesMgr.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.AccessController.h"
#include "java.util.ResourceBundle.h"
#include "sun.security.util.ResourcesMgr_S_1.h"
#include "sun.security.util.ResourcesMgr_S_2.h"
#include "sun.security.util.ResourcesMgr.h"

static sun::security::util::ResourcesMgr::altBundle;
static sun::security::util::ResourcesMgr::bundle;
// .method public constructor <init>()V
sun::security::util::ResourcesMgr::ResourcesMgr()
{
	
	// 018    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::ResourcesMgr::getString(std::shared_ptr<java::lang::String> s)
{
	
	std::shared_ptr<sun::security::util::ResourcesMgr_S_1> cVar0;
	std::shared_ptr<java::util::ResourceBundle> cVar1;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( sun::security::util::ResourcesMgr::bundle )     
		goto label_cond_11;
	cVar0 = std::make_shared<sun::security::util::ResourcesMgr_S_1>();
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::util::ResourceBundle");
	sun::security::util::ResourcesMgr::bundle = cVar1;
label_cond_11:
	return sun::security::util::ResourcesMgr::bundle->getString(s);

}
// .method public static getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::ResourcesMgr::getString(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::String> altBundleName)
{
	
	std::shared_ptr<sun::security::util::ResourcesMgr_S_2> cVar0;
	std::shared_ptr<java::util::ResourceBundle> cVar1;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "altBundleName"    # Ljava/lang/String;
	if ( sun::security::util::ResourcesMgr::altBundle )     
		goto label_cond_11;
	cVar0 = std::make_shared<sun::security::util::ResourcesMgr_S_2>(altBundleName);
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::util::ResourceBundle");
	sun::security::util::ResourcesMgr::altBundle = cVar1;
label_cond_11:
	return sun::security::util::ResourcesMgr::altBundle->getString(s);

}


