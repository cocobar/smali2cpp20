// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ManifestEntryVerifier$SunProviderHolder.smali
#include "java2ctype.h"
#include "java.security.Provider.h"
#include "sun.security.jca.Providers.h"
#include "sun.security.util.ManifestEntryVerifier_S_SunProviderHolder.h"

static sun::security::util::ManifestEntryVerifier_S_SunProviderHolder::instance;
// .method static synthetic -get0()Ljava/security/Provider;
std::shared_ptr<java::security::Provider> sun::security::util::ManifestEntryVerifier_S_SunProviderHolder::_get0()
{
	
	return sun::security::util::ManifestEntryVerifier_S_SunProviderHolder::instance;

}
// .method static constructor <clinit>()V
void sun::security::util::ManifestEntryVerifier_S_SunProviderHolder::static_cinit()
{
	
	sun::security::util::ManifestEntryVerifier_S_SunProviderHolder::instance = sun::security::jca::Providers::getSunProvider({const[class].FS-Param});
	return;

}
// .method private constructor <init>()V
sun::security::util::ManifestEntryVerifier_S_SunProviderHolder::ManifestEntryVerifier_S_SunProviderHolder()
{
	
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


