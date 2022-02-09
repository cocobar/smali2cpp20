// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\JCAUtil.smali
#include "java2ctype.h"
#include "java.lang.Math.h"
#include "java.security.SecureRandom.h"
#include "sun.security.jca.JCAUtil_S_CachedSecureRandomHolder.h"
#include "sun.security.jca.JCAUtil.h"

static sun::security::jca::JCAUtil::ARRAY_SIZE = 0x1000;
// .method private constructor <init>()V
sun::security::jca::JCAUtil::JCAUtil()
{
	
	// 024    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getSecureRandom()Ljava/security/SecureRandom;
std::shared_ptr<java::security::SecureRandom> sun::security::jca::JCAUtil::getSecureRandom()
{
	
	return sun::security::jca::JCAUtil_S_CachedSecureRandomHolder::instance;

}
// .method public static getTempArraySize(I)I
int sun::security::jca::JCAUtil::getTempArraySize(int totalSize)
{
	
	//    .param p0, "totalSize"    # I
	return java::lang::Math::min(0x1000, totalSize);

}


