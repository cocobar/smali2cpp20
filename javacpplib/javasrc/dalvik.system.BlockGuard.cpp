// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\BlockGuard.smali
#include "java2ctype.h"
#include "dalvik.system.BlockGuard_S_1.h"
#include "dalvik.system.BlockGuard_S_2.h"
#include "dalvik.system.BlockGuard_S_Policy.h"
#include "dalvik.system.BlockGuard.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.ThreadLocal.h"

static dalvik::system::BlockGuard::DISALLOW_DISK_READ = 0x2;
static dalvik::system::BlockGuard::DISALLOW_DISK_WRITE = 0x1;
static dalvik::system::BlockGuard::DISALLOW_NETWORK = 0x4;
static dalvik::system::BlockGuard::LAX_POLICY;
static dalvik::system::BlockGuard::PASS_RESTRICTIONS_VIA_RPC = 0x8;
static dalvik::system::BlockGuard::PENALTY_DEATH = 0x40;
static dalvik::system::BlockGuard::PENALTY_DIALOG = 0x20;
static dalvik::system::BlockGuard::PENALTY_LOG = 0x10;
static dalvik::system::BlockGuard::threadPolicy;
// .method static constructor <clinit>()V
void dalvik::system::BlockGuard::static_cinit()
{
	
	std::shared_ptr<dalvik::system::BlockGuard_S_1> cVar0;
	std::shared_ptr<dalvik::system::BlockGuard_S_2> cVar1;
	
	cVar0 = std::make_shared<dalvik::system::BlockGuard_S_1>();
	dalvik::system::BlockGuard::LAX_POLICY = cVar0;
	cVar1 = std::make_shared<dalvik::system::BlockGuard_S_2>();
	dalvik::system::BlockGuard::threadPolicy = cVar1;
	return;

}
// .method private constructor <init>()V
dalvik::system::BlockGuard::BlockGuard()
{
	
	// 074    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getThreadPolicy()Ldalvik/system/BlockGuard$Policy;
std::shared_ptr<dalvik::system::BlockGuard_S_Policy> dalvik::system::BlockGuard::getThreadPolicy()
{
	
	std::shared_ptr<dalvik::system::BlockGuard_S_Policy> cVar0;
	
	cVar0 = dalvik::system::BlockGuard::threadPolicy->get();
	cVar0->checkCast("dalvik::system::BlockGuard_S_Policy");
	return cVar0;

}
// .method public static setThreadPolicy(Ldalvik/system/BlockGuard$Policy;)V
void dalvik::system::BlockGuard::setThreadPolicy(std::shared_ptr<dalvik::system::BlockGuard_S_Policy> policy)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p0, "policy"    # Ldalvik/system/BlockGuard$Policy;
	if ( policy )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("policy == null")));
	// throw
	throw cVar0;
	// 112    .line 158
label_cond_b:
	dalvik::system::BlockGuard::threadPolicy->set(policy);
	return;

}


