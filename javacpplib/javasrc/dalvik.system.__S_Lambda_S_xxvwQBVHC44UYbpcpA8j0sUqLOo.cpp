// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\-$Lambda$xxvwQBVHC44UYbpcpA8j0sUqLOo.smali
#include "java2ctype.h"
#include "dalvik.system.__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo.h"
#include "dalvik.system.DexPathList.h"
#include "java.lang.Object.h"
#include "java.nio.ByteBuffer.h"

static dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo::_S_INST_S_0;
// .method private final synthetic $m$0(Ljava/lang/Object;)Z
bool dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo::_S_m_S_0(std::shared_ptr<java::lang::Object> arg0)
{
	
	//    .param p1, "arg0"    # Ljava/lang/Object;
	arg0->checkCast("java::nio::ByteBuffer");
	//    .end local p1    # "arg0":Ljava/lang/Object;
	return dalvik::system::DexPathList::lambda$-dalvik_system_DexPathList_3307(arg0);

}
// .method static synthetic constructor <clinit>()V
void dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo::static_cinit()
{
	
	std::shared_ptr<dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo> cVar0;
	
	cVar0 = std::make_shared<dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo>();
	dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo::_S_INST_S_0 = cVar0;
	return;

}
// .method private synthetic constructor <init>()V
dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo()
{
	
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public final test(Ljava/lang/Object;)Z
bool dalvik::system::__S_Lambda_S_xxvwQBVHC44UYbpcpA8j0sUqLOo::test(std::shared_ptr<java::lang::Object> var0)
{
	
	return this->$m$0(var0);

}


