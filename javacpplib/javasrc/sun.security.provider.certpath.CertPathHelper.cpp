// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\CertPathHelper.smali
#include "java2ctype.h"
#include "java.security.cert.X509CRLSelector.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.util.Date.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.CertPathHelper.h"
#include "sun.security.x509.GeneralNameInterface.h"

static sun::security::provider::certpath::CertPathHelper::instance;
// .method protected constructor <init>()V
sun::security::provider::certpath::CertPathHelper::CertPathHelper()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static setDateAndTime(Ljava/security/cert/X509CRLSelector;Ljava/util/Date;J)V
void sun::security::provider::certpath::CertPathHelper::setDateAndTime(std::shared_ptr<java::security::cert::X509CRLSelector> sel,std::shared_ptr<java::util::Date> date,long long skew)
{
	
	//    .param p0, "sel"    # Ljava/security/cert/X509CRLSelector;
	//    .param p1, "date"    # Ljava/util/Date;
	//    .param p2, "skew"    # J
	sun::security::provider::certpath::CertPathHelper::instance->implSetDateAndTime(sel, date, skew);
	return;

}
// .method static setPathToNames(Ljava/security/cert/X509CertSelector;Ljava/util/Set;)V
void sun::security::provider::certpath::CertPathHelper::setPathToNames(std::shared_ptr<java::security::cert::X509CertSelector> sel,std::shared_ptr<java::util::Set<sun::security::x509::GeneralNameInterface>> names)
{
	
	//    .param p0, "sel"    # Ljava/security/cert/X509CertSelector;
	//    .annotation system Ldalvik/annotation/Signature;
	// 042        value = {
	// 043            "(",
	// 044            "Ljava/security/cert/X509CertSelector;",
	// 045            "Ljava/util/Set",
	// 046            "<",
	// 047            "Lsun/security/x509/GeneralNameInterface;",
	// 048            ">;)V"
	// 049        }
	// 050    .end annotation
	//    .local p1, "names":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/x509/GeneralNameInterface;>;"
	sun::security::provider::certpath::CertPathHelper::instance->implSetPathToNames(sel, names);
	return;

}
// .method protected abstract implSetPathToNames(Ljava/security/cert/X509CertSelector;Ljava/util/Set;)V
void sun::security::provider::certpath::CertPathHelper::implSetPathToNames(std::shared_ptr<java::security::cert::X509CertSelector> var0,std::shared_ptr<java::util::Set<sun::security::x509::GeneralNameInterface>> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 070        value = {
	// 071            "(",
	// 072            "Ljava/security/cert/X509CertSelector;",
	// 073            "Ljava/util/Set",
	// 074            "<",
	// 075            "Lsun/security/x509/GeneralNameInterface;",
	// 076            ">;)V"
	// 077        }
	// 078    .end annotation

}


