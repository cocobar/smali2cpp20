// CPP L:\smali2cpp20\x64\Release\out\sun\security\jca\JCAUtil$CachedSecureRandomHolder.smali
#include "java2ctype.h"
#include "java.security.SecureRandom.h"
#include "sun.security.jca.JCAUtil_S_CachedSecureRandomHolder.h"

static sun::security::jca::JCAUtil_S_CachedSecureRandomHolder::instance;
// .method static constructor <clinit>()V
void sun::security::jca::JCAUtil_S_CachedSecureRandomHolder::static_cinit()
{
	
	std::shared_ptr<java::security::SecureRandom> cVar0;
	
	cVar0 = std::make_shared<java::security::SecureRandom>();
	sun::security::jca::JCAUtil_S_CachedSecureRandomHolder::instance = cVar0;
	return;

}
// .method private constructor <init>()V
sun::security::jca::JCAUtil_S_CachedSecureRandomHolder::JCAUtil_S_CachedSecureRandomHolder()
{
	
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


