// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\RevocationChecker$RejectKeySelector.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.Certificate.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.RevocationChecker_S_RejectKeySelector.h"
#include "sun.security.provider.certpath.RevocationChecker.h"
#include "sun.security.util.Debug.h"

// .method constructor <init>(Ljava/util/Set;)V
sun::security::provider::certpath::RevocationChecker_S_RejectKeySelector::RevocationChecker_S_RejectKeySelector(std::shared_ptr<java::util::Set<java::security::PublicKey>> badPublicKeys)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 034        value = {
	// 035            "(",
	// 036            "Ljava/util/Set",
	// 037            "<",
	// 038            "Ljava/security/PublicKey;",
	// 039            ">;)V"
	// 040        }
	// 041    .end annotation
	//    .local p1, "badPublicKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/PublicKey;>;"
	// 046    invoke-direct {p0}, Ljava/security/cert/X509CertSelector;-><init>()V
	this->badKeySet = badPublicKeys;
	return;

}
// .method public match(Ljava/security/cert/Certificate;)Z
bool sun::security::provider::certpath::RevocationChecker_S_RejectKeySelector::match(std::shared_ptr<java::security::cert::Certificate> cert)
{
	
	bool cVar0;
	
	//    .param p1, "cert"    # Ljava/security/cert/Certificate;
	cVar0 = 0x0;
	if ( this->match(cert) )     
		goto label_cond_8;
	return cVar0;
	// 074    .line 1141
label_cond_8:
	if ( !(this->badKeySet->contains(cert->getPublicKey())) )  
		goto label_cond_25;
	if ( !(sun::security::provider::certpath::RevocationChecker::-get0({const[class].FS-Param})) )  
		goto label_cond_24;
	sun::security::provider::certpath::RevocationChecker::-get0({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RejectKeySelector.match: bad key")));
label_cond_24:
	return cVar0;
	// 108    .line 1147
label_cond_25:
	if ( !(sun::security::provider::certpath::RevocationChecker::-get0({const[class].FS-Param})) )  
		goto label_cond_35;
	sun::security::provider::certpath::RevocationChecker::-get0({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RejectKeySelector.match: returning true")));
label_cond_35:
	return 0x1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::RevocationChecker_S_RejectKeySelector::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RejectKeySelector: [\n")));
	sb->append(this->toString());
	sb->append(this->badKeySet);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")));
	return sb->toString();

}


