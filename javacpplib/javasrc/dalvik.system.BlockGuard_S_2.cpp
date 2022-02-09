// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\BlockGuard$2.smali
#include "java2ctype.h"
#include "dalvik.system.BlockGuard_S_2.h"
#include "dalvik.system.BlockGuard_S_Policy.h"
#include "dalvik.system.BlockGuard.h"

// .method constructor <init>()V
dalvik::system::BlockGuard_S_2::BlockGuard_S_2()
{
	
	// 032    invoke-direct {p0}, Ljava/lang/ThreadLocal;-><init>()V
	return;

}
// .method protected initialValue()Ldalvik/system/BlockGuard$Policy;
std::shared_ptr<dalvik::system::BlockGuard_S_Policy> dalvik::system::BlockGuard_S_2::initialValue()
{
	
	return dalvik::system::BlockGuard::LAX_POLICY;

}


