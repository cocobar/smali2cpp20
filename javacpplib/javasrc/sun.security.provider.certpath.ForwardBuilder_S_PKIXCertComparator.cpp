// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ForwardBuilder$PKIXCertComparator.smali
#include "java2ctype.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.Builder.h"
#include "sun.security.provider.certpath.ForwardBuilder_S_PKIXCertComparator.h"
#include "sun.security.provider.certpath.ForwardBuilder.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::ForwardBuilder_S_PKIXCertComparator::METHOD_NME = std::make_shared<java::lang::String>("PKIXCertComparator.compare()");
// .method constructor <init>(Ljava/util/Set;Lsun/security/x509/X509CertImpl;)V
sun::security::provider::certpath::ForwardBuilder_S_PKIXCertComparator::ForwardBuilder_S_PKIXCertComparator(std::shared_ptr<java::util::Set<javax::security::auth::x500::X500Principal>> trustedSubjectDNs,std::shared_ptr<sun::security::x509::X509CertImpl> previousCert)
{
	
	//    .param p2, "previousCert"    # Lsun/security/x509/X509CertImpl;
	//    .annotation system Ldalvik/annotation/Signature;
	// 054        value = {
	// 055            "(",
	// 056            "Ljava/util/Set",
	// 057            "<",
	// 058            "Ljavax/security/auth/x500/X500Principal;",
	// 059            ">;",
	// 060            "Lsun/security/x509/X509CertImpl;",
	// 061            ")V"
	// 062        }
	// 063    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 066        value = {
	// 067            Ljava/io/IOException;
	// 068        }
	// 069    .end annotation
	//    .local p1, "trustedSubjectDNs":Ljava/util/Set;, "Ljava/util/Set<Ljavax/security/auth/x500/X500Principal;>;"
	// 074    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->trustedSubjectDNs = trustedSubjectDNs;
	this->certSkidSelector = this->getSelector(previousCert);
	return;

}
// .method private getSelector(Lsun/security/x509/X509CertImpl;)Ljava/security/cert/X509CertSelector;
std::shared_ptr<java::security::cert::X509CertSelector> sun::security::provider::certpath::ForwardBuilder_S_PKIXCertComparator::getSelector(std::shared_ptr<sun::security::x509::X509CertImpl> previousCert)
{
	
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> akidExt;
	std::shared_ptr<unsigned char[]> skid;
	std::shared_ptr<java::security::cert::X509CertSelector> selector;
	
	//    .param p1, "previousCert"    # Lsun/security/x509/X509CertImpl;
	//    .annotation system Ldalvik/annotation/Throws;
	// 094        value = {
	// 095            Ljava/io/IOException;
	// 096        }
	// 097    .end annotation
	if ( !(previousCert) )  
		goto label_cond_18;
	akidExt = previousCert->getAuthorityKeyIdentifierExtension();
	//    .local v0, "akidExt":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	if ( !(akidExt) )  
		goto label_cond_18;
	skid = akidExt->getEncodedKeyIdentifier();
	//    .local v2, "skid":[B
	if ( !(skid) )  
		goto label_cond_18;
	selector = std::make_shared<java::security::cert::X509CertSelector>();
	//    .local v1, "selector":Ljava/security/cert/X509CertSelector;
	selector->setSubjectKeyIdentifier(skid);
	return selector;
	// 135    .line 461
	// 136    .end local v0    # "akidExt":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	// 137    .end local v1    # "selector":Ljava/security/cert/X509CertSelector;
	// 138    .end local v2    # "skid":[B
label_cond_18:
	return 0x0;

}
// .method public compare(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;)I
int sun::security::provider::certpath::ForwardBuilder_S_PKIXCertComparator::compare(std::shared_ptr<java::security::cert::X509Certificate> oCert1,std::shared_ptr<java::security::cert::X509Certificate> oCert2)
{
	
	std::shared_ptr<javax::security::auth::x500::X500Principal> cIssuer1;
	std::shared_ptr<javax::security::auth::x500::X500Principal> cIssuer2;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> cIssuer1Name;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> cIssuer2Name;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int m1;
	int m2;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::Iterator> tSubject_S_iterator;
	std::shared_ptr<javax::security::auth::x500::X500Principal> tSubject;
	auto tSubjectName;
	int distanceTto1;
	int distanceTto2;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::Object> tAo1;
	std::shared_ptr<java::lang::Object> tAo2;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	int hopsTto1;
	int hopsTto2;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	std::shared_ptr<java::lang::StringBuilder> cVar11;
	std::shared_ptr<javax::security::auth::x500::X500Principal> cSubject1;
	std::shared_ptr<javax::security::auth::x500::X500Principal> cSubject2;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	std::shared_ptr<java::lang::StringBuilder> cVar13;
	int distanceStoI1;
	int distanceStoI2;
	std::shared_ptr<java::lang::StringBuilder> cVar14;
	std::shared_ptr<java::lang::StringBuilder> cVar15;
	
	//    .param p1, "oCert1"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "oCert2"    # Ljava/security/cert/X509Certificate;
	if ( !(oCert1->equals(oCert2)) )  
		goto label_cond_9;
	return 0x0;
	// 178    .line 486
label_cond_9:
	if ( !(this->certSkidSelector) )  
		goto label_cond_37;
	if ( !(this->certSkidSelector->match(oCert1)) )  
		goto label_cond_24;
	return -0x1;
	// 210    .line 490
label_cond_24:
	if ( !(this->certSkidSelector->match(oCert2)) )  
		goto label_cond_37;
	return 0x1;
	// 233    .line 495
label_cond_37:
	cIssuer1 = oCert1->getIssuerX500Principal();
	//    .local v2, "cIssuer1":Ljavax/security/auth/x500/X500Principal;
	cIssuer2 = oCert2->getIssuerX500Principal();
	//    .local v4, "cIssuer2":Ljavax/security/auth/x500/X500Principal;
	cIssuer1Name = sun::security::x509::X500Name::asX500Name(cIssuer1);
	//    .local v3, "cIssuer1Name":Lsun/security/x509/X500Name;
	cIssuer2Name = sun::security::x509::X500Name::asX500Name(cIssuer2);
	//    .local v5, "cIssuer2Name":Lsun/security/x509/X500Name;
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_87;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() o1 Issuer:  ")))->append(cIssuer1)->toString());
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() o2 Issuer:  ")))->append(cIssuer2)->toString());
label_cond_87:
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_97;
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() MATCH TRUSTED SUBJECT TEST...")));
label_cond_97:
	m1 = this->trustedSubjectDNs->contains(cIssuer1);
	//    .local v16, "m1":Z
	m2 = this->trustedSubjectDNs->contains(cIssuer2);
	//    .local v17, "m2":Z
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_f3;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() m1: ")))->append(m1)->toString());
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() m2: ")))->append(m2)->toString());
label_cond_f3:
	if ( !(m1) )  
		goto label_cond_fa;
	if ( !(m2) )  
		goto label_cond_fa;
	return -0x1;
	// 441    .line 520
label_cond_fa:
	if ( !(m1) )  
		goto label_cond_ff;
	return -0x1;
	// 450    .line 522
label_cond_ff:
	if ( !(m2) )  
		goto label_cond_104;
	return 0x1;
	// 459    .line 529
label_cond_104:
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_114;
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() NAMING DESCENDANT TEST...")));
label_cond_114:
	tSubject_S_iterator = this->trustedSubjectDNs->iterator();
	//    .local v21, "tSubject$iterator":Ljava/util/Iterator;
label_cond_11e:
	if ( !(tSubject_S_iterator->hasNext()) )  
		goto label_cond_1a1;
	tSubject = tSubject_S_iterator->next();
	tSubject->checkCast("javax::security::auth::x500::X500Principal");
	//    .local v20, "tSubject":Ljavax/security/auth/x500/X500Principal;
	tSubjectName = sun::security::x509::X500Name::asX500Name(tSubject);
	//    .local v22, "tSubjectName":Lsun/security/x509/X500Name;
	distanceTto1 = sun::security::provider::certpath::Builder::distance(tSubjectName, cIssuer1Name, -0x1);
	//    .local v12, "distanceTto1":I
	distanceTto2 = sun::security::provider::certpath::Builder::distance(tSubjectName, cIssuer2Name, -0x1);
	//    .local v13, "distanceTto2":I
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_182;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() distanceTto1: ")))->append(distanceTto1)->toString());
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() distanceTto2: ")))->append(distanceTto2)->toString());
label_cond_182:
	if ( distanceTto1 > 0 ) 
		goto label_cond_186;
	if ( distanceTto2 <= 0 )
		goto label_cond_11e;
label_cond_186:
	if ( distanceTto1 != distanceTto2 )
		goto label_cond_18b;
	return -0x1;
	// 609    .line 545
label_cond_18b:
	if ( distanceTto1 <= 0 )
		goto label_cond_192;
	if ( distanceTto2 > 0 ) 
		goto label_cond_192;
	return -0x1;
	// 620    .line 547
label_cond_192:
	if ( distanceTto1 > 0 ) 
		goto label_cond_199;
	if ( distanceTto2 <= 0 )
		goto label_cond_199;
	return 0x1;
	// 631    .line 549
label_cond_199:
	if ( distanceTto1 >= distanceTto2 )
		goto label_cond_19e;
	return -0x1;
	// 640    .line 552
label_cond_19e:
	return 0x1;
	// 646    .line 560
	// 647    .end local v12    # "distanceTto1":I
	// 648    .end local v13    # "distanceTto2":I
	// 649    .end local v20    # "tSubject":Ljavax/security/auth/x500/X500Principal;
	// 650    .end local v22    # "tSubjectName":Lsun/security/x509/X500Name;
label_cond_1a1:
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_1b1;
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() NAMING ANCESTOR TEST...")));
label_cond_1b1:
	tSubject_S_iterator = this->trustedSubjectDNs->iterator();
label_cond_1bb:
	if ( !(tSubject_S_iterator->hasNext()) )  
		goto label_cond_240;
	tSubject = tSubject_S_iterator->next();
	tSubject->checkCast("javax::security::auth::x500::X500Principal");
	//    .restart local v20    # "tSubject":Ljavax/security/auth/x500/X500Principal;
	tSubjectName = sun::security::x509::X500Name::asX500Name(tSubject);
	//    .restart local v22    # "tSubjectName":Lsun/security/x509/X500Name;
	distanceTto1 = sun::security::provider::certpath::Builder::distance(tSubjectName, cIssuer1Name, 0x7fffffff);
	//    .restart local v12    # "distanceTto1":I
	distanceTto2 = sun::security::provider::certpath::Builder::distance(tSubjectName, cIssuer2Name, 0x7fffffff);
	//    .restart local v13    # "distanceTto2":I
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_221;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() distanceTto1: ")))->append(distanceTto1)->toString());
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() distanceTto2: ")))->append(distanceTto2)->toString());
label_cond_221:
	if ( distanceTto1 < 0 ) 
		goto label_cond_225;
	if ( distanceTto2 >= 0 )
		goto label_cond_1bb;
label_cond_225:
	if ( distanceTto1 != distanceTto2 )
		goto label_cond_22a;
	return -0x1;
	// 801    .line 577
label_cond_22a:
	if ( distanceTto1 >= 0 )
		goto label_cond_231;
	if ( distanceTto2 < 0 ) 
		goto label_cond_231;
	return -0x1;
	// 812    .line 579
label_cond_231:
	if ( distanceTto1 < 0 ) 
		goto label_cond_238;
	if ( distanceTto2 >= 0 )
		goto label_cond_238;
	return 0x1;
	// 823    .line 581
label_cond_238:
	if ( distanceTto1 <= distanceTto2 )
		goto label_cond_23d;
	return -0x1;
	// 832    .line 584
label_cond_23d:
	return 0x1;
	// 838    .line 593
	// 839    .end local v12    # "distanceTto1":I
	// 840    .end local v13    # "distanceTto2":I
	// 841    .end local v20    # "tSubject":Ljavax/security/auth/x500/X500Principal;
	// 842    .end local v22    # "tSubjectName":Lsun/security/x509/X500Name;
label_cond_240:
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_250;
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() SAME NAMESPACE AS TRUSTED TEST...")));
label_cond_250:
	tSubject_S_iterator = this->trustedSubjectDNs->iterator();
label_cond_25a:
	if ( !(tSubject_S_iterator->hasNext()) )  
		goto label_cond_32a;
	tSubject = tSubject_S_iterator->next();
	tSubject->checkCast("javax::security::auth::x500::X500Principal");
	//    .restart local v20    # "tSubject":Ljavax/security/auth/x500/X500Principal;
	tSubjectName = sun::security::x509::X500Name::asX500Name(tSubject);
	//    .restart local v22    # "tSubjectName":Lsun/security/x509/X500Name;
	tAo1 = tSubjectName->commonAncestor(cIssuer1Name);
	//    .local v18, "tAo1":Lsun/security/x509/X500Name;
	tAo2 = tSubjectName->commonAncestor(cIssuer2Name);
	//    .local v19, "tAo2":Lsun/security/x509/X500Name;
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_2ba;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() tAo1: ")))->append(java::lang::String::valueOf(tAo1))->toString());
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() tAo2: ")))->append(java::lang::String::valueOf(tAo2))->toString());
label_cond_2ba:
	if ( tAo1 )     
		goto label_cond_2be;
	if ( !(tAo2) )  
		goto label_cond_25a;
label_cond_2be:
	if ( !(tAo1) )  
		goto label_cond_322;
	if ( !(tAo2) )  
		goto label_cond_322;
	hopsTto1 = sun::security::provider::certpath::Builder::hops(tSubjectName, cIssuer1Name, 0x7fffffff);
	//    .local v14, "hopsTto1":I
	hopsTto2 = sun::security::provider::certpath::Builder::hops(tSubjectName, cIssuer2Name, 0x7fffffff);
	//    .local v15, "hopsTto2":I
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_318;
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() hopsTto1: ")))->append(hopsTto1)->toString());
	cVar11 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar11->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() hopsTto2: ")))->append(hopsTto2)->toString());
label_cond_318:
	if ( hopsTto1 == hopsTto2 )
		goto label_cond_25a;
	if ( hopsTto1 <= hopsTto2 )
		goto label_cond_31f;
	return 0x1;
	// 1083    .line 618
label_cond_31f:
	return -0x1;
	// 1089    .line 620
	// 1090    .end local v14    # "hopsTto1":I
	// 1091    .end local v15    # "hopsTto2":I
label_cond_322:
	if ( tAo1 )     
		goto label_cond_327;
	return 0x1;
	// 1100    .line 623
label_cond_327:
	return -0x1;
	// 1106    .line 632
	// 1107    .end local v18    # "tAo1":Lsun/security/x509/X500Name;
	// 1108    .end local v19    # "tAo2":Lsun/security/x509/X500Name;
	// 1109    .end local v20    # "tSubject":Ljavax/security/auth/x500/X500Principal;
	// 1110    .end local v22    # "tSubjectName":Lsun/security/x509/X500Name;
label_cond_32a:
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_33a;
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() CERT ISSUER/SUBJECT COMPARISON TEST...")));
label_cond_33a:
	cSubject1 = oCert1->getSubjectX500Principal();
	//    .local v6, "cSubject1":Ljavax/security/auth/x500/X500Principal;
	cSubject2 = oCert2->getSubjectX500Principal();
	//    .local v8, "cSubject2":Ljavax/security/auth/x500/X500Principal;
	//    .local v7, "cSubject1Name":Lsun/security/x509/X500Name;
	//    .local v9, "cSubject2Name":Lsun/security/x509/X500Name;
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_38a;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() o1 Subject: ")))->append(cSubject1)->toString());
	cVar13 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar13->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() o2 Subject: ")))->append(cSubject2)->toString());
label_cond_38a:
	distanceStoI1 = sun::security::provider::certpath::Builder::distance(sun::security::x509::X500Name::asX500Name(cSubject1), cIssuer1Name, 0x7fffffff);
	//    .local v10, "distanceStoI1":I
	distanceStoI2 = sun::security::provider::certpath::Builder::distance(sun::security::x509::X500Name::asX500Name(cSubject2), cIssuer2Name, 0x7fffffff);
	//    .local v11, "distanceStoI2":I
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_3dc;
	cVar14 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar14->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() distanceStoI1: ")))->append(distanceStoI1)->toString());
	cVar15 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(cVar15->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() distanceStoI2: ")))->append(distanceStoI2)->toString());
label_cond_3dc:
	if ( distanceStoI2 <= distanceStoI1 )
		goto label_cond_3e1;
	return -0x1;
	// 1306    .line 654
label_cond_3e1:
	if ( distanceStoI2 >= distanceStoI1 )
		goto label_cond_3e6;
	return 0x1;
	// 1315    .line 660
label_cond_3e6:
	if ( !(sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})) )  
		goto label_cond_3f6;
	sun::security::provider::certpath::ForwardBuilder::-get0({const[class].FS-Param})->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKIXCertComparator.compare() no tests matched; RETURN 0")));
label_cond_3f6:
	return -0x1;

}


