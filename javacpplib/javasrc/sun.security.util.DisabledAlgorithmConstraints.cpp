// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DisabledAlgorithmConstraints.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.AlgorithmParameters.h"
#include "java.security.CryptoPrimitive.h"
#include "java.security.Key.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathValidatorException_S_BasicReason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"
#include "sun.security.util.AbstractAlgorithmConstraints.h"
#include "sun.security.util.AlgorithmDecomposer.h"
#include "sun.security.util.CertConstraintParameters.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DisabledAlgorithmConstraints_S_Constraints.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"

static sun::security::util::DisabledAlgorithmConstraints::PROPERTY_CERTPATH_DISABLED_ALGS = std::make_shared<java::lang::String>("jdk.certpath.disabledAlgorithms");
static sun::security::util::DisabledAlgorithmConstraints::PROPERTY_JAR_DISABLED_ALGS = std::make_shared<java::lang::String>("jdk.jar.disabledAlgorithms");
static sun::security::util::DisabledAlgorithmConstraints::PROPERTY_TLS_DISABLED_ALGS = std::make_shared<java::lang::String>("jdk.tls.disabledAlgorithms");
static sun::security::util::DisabledAlgorithmConstraints::debug;
// .method static synthetic -get0()Lsun/security/util/Debug;
std::shared_ptr<sun::security::util::Debug> sun::security::util::DisabledAlgorithmConstraints::_get0()
{
	
	return sun::security::util::DisabledAlgorithmConstraints::debug;

}
// .method static constructor <clinit>()V
void sun::security::util::DisabledAlgorithmConstraints::static_cinit()
{
	
	sun::security::util::DisabledAlgorithmConstraints::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::util::DisabledAlgorithmConstraints::DisabledAlgorithmConstraints(std::shared_ptr<java::lang::String> propertyName)
{
	
	std::shared_ptr<sun::security::util::AlgorithmDecomposer> cVar0;
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	cVar0 = std::make_shared<sun::security::util::AlgorithmDecomposer>();
	sun::security::util::DisabledAlgorithmConstraints::(propertyName, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Lsun/security/util/AlgorithmDecomposer;)V
sun::security::util::DisabledAlgorithmConstraints::DisabledAlgorithmConstraints(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<sun::security::util::AlgorithmDecomposer> decomposer)
{
	
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints_S_Constraints> cVar0;
	
	//    .param p1, "propertyName"    # Ljava/lang/String;
	//    .param p2, "decomposer"    # Lsun/security/util/AlgorithmDecomposer;
	sun::security::util::AbstractAlgorithmConstraints::(decomposer);
	this->disabledAlgorithms = sun::security::util::DisabledAlgorithmConstraints::getAlgorithms(propertyName);
	cVar0 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints_S_Constraints>(this->disabledAlgorithms);
	this->algorithmConstraints = cVar0;
	return;

}
// .method private checkConstraints(Ljava/util/Set;Lsun/security/util/CertConstraintParameters;)V
void sun::security::util::DisabledAlgorithmConstraints::checkConstraints(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<sun::security::util::CertConstraintParameters> cp)
{
	
	int cVar0;
	std::shared_ptr<java::security::AlgorithmParameters> cVar1;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<java::lang::String> algorithm;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p2, "cp"    # Lsun/security/util/CertConstraintParameters;
	//    .annotation system Ldalvik/annotation/Signature;
	// 108        value = {
	// 109            "(",
	// 110            "Ljava/util/Set",
	// 111            "<",
	// 112            "Ljava/security/CryptoPrimitive;",
	// 113            ">;",
	// 114            "Lsun/security/util/CertConstraintParameters;",
	// 115            ")V"
	// 116        }
	// 117    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 120        value = {
	// 121            Ljava/security/cert/CertPathValidatorException;
	// 122        }
	// 123    .end annotation
	//    .local p1, "primitives":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;"
	cVar0 = -0x1;
	cVar1 = 0x0;
	cert = cp->getCertificate();
	//    .local v7, "cert":Ljava/security/cert/X509Certificate;
	algorithm = cert->getSigAlgName();
	//    .local v6, "algorithm":Ljava/lang/String;
	if ( this->permits(primitives, algorithm, cVar1) )     
		goto label_cond_2d;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Algorithm constraints check failed on disabled signature algorithm: ")))->append(algorithm)->toString(), cVar1, cVar1, cVar0, java::security::cert::CertPathValidatorException_S_BasicReason::ALGORITHM_CONSTRAINED);
	// throw
	throw cVar2;
	// 182    .line 207
label_cond_2d:
	if ( this->permits(primitives, cert->getPublicKey()->getAlgorithm(), cVar1) )     
		goto label_cond_58;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Algorithm constraints check failed on disabled public key algorithm: ")))->append(algorithm)->toString(), cVar1, cVar1, cVar0, java::security::cert::CertPathValidatorException_S_BasicReason::ALGORITHM_CONSTRAINED);
	// throw
	throw cVar4;
	// 230    .line 215
label_cond_58:
	this->algorithmConstraints->permits(cp);
	return;

}
// .method private checkConstraints(Ljava/util/Set;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z
bool sun::security::util::DisabledAlgorithmConstraints::checkConstraints(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::Key> key,std::shared_ptr<java::security::AlgorithmParameters> parameters)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "key"    # Ljava/security/Key;
	//    .param p4, "parameters"    # Ljava/security/AlgorithmParameters;
	//    .annotation system Ldalvik/annotation/Signature;
	// 246        value = {
	// 247            "(",
	// 248            "Ljava/util/Set",
	// 249            "<",
	// 250            "Ljava/security/CryptoPrimitive;",
	// 251            ">;",
	// 252            "Ljava/lang/String;",
	// 253            "Ljava/security/Key;",
	// 254            "Ljava/security/AlgorithmParameters;",
	// 255            ")Z"
	// 256        }
	// 257    .end annotation
	//    .local p1, "primitives":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;"
	cVar0 = 0x0;
	if ( key )     
		goto label_cond_d;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The key cannot be null")));
	// throw
	throw cVar1;
	// 277    .line 173
label_cond_d:
	if ( !(algorithm) )  
		goto label_cond_1c;
	if ( !(algorithm->length()) )  
		goto label_cond_1c;
	if ( this->permits(primitives, algorithm, parameters) )     
		goto label_cond_1c;
	return cVar0;
	// 297    .line 180
label_cond_1c:
	if ( this->permits(primitives, key->getAlgorithm(), 0x0) )     
		goto label_cond_27;
	return cVar0;
	// 312    .line 185
label_cond_27:
	return this->algorithmConstraints->permits(key);

}
// .method public checkProperty(Ljava/lang/String;)Z
bool sun::security::util::DisabledAlgorithmConstraints::checkProperty(std::shared_ptr<java::lang::String> param)
{
	
	bool cVar0;
	std::shared_ptr<std::vector<java::lang::String>> cVar1;
	int cVar2;
	
	//    .param p1, "param"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = this->disabledAlgorithms;
	cVar2 = cVar0;
label_goto_b:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_20;
	//    .local v0, "block":Ljava/lang/String;
	if ( cVar1[cVar2]->toLowerCase(java::util::Locale::ENGLISH)->indexOf(param->toLowerCase(java::util::Locale::ENGLISH)) < 0 ) 
		goto label_cond_1d;
	return 0x1;
	// 370    .line 155
label_cond_1d:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_b;
	// 376    .line 160
	// 377    .end local v0    # "block":Ljava/lang/String;
label_cond_20:
	return cVar0;

}
// .method public final permits(Ljava/util/Set;Ljava/security/cert/X509Certificate;)V
void sun::security::util::DisabledAlgorithmConstraints::permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<sun::security::util::CertConstraintParameters> cVar0;
	
	//    .param p2, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 386        value = {
	// 387            "(",
	// 388            "Ljava/util/Set",
	// 389            "<",
	// 390            "Ljava/security/CryptoPrimitive;",
	// 391            ">;",
	// 392            "Ljava/security/cert/X509Certificate;",
	// 393            ")V"
	// 394        }
	// 395    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 398        value = {
	// 399            Ljava/security/cert/CertPathValidatorException;
	// 400        }
	// 401    .end annotation
	//    .local p1, "primitives":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;"
	cVar0 = std::make_shared<sun::security::util::CertConstraintParameters>(cert);
	this->checkConstraints(primitives, cVar0);
	return;

}
// .method public final permits(Ljava/util/Set;Lsun/security/util/CertConstraintParameters;)V
void sun::security::util::DisabledAlgorithmConstraints::permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<sun::security::util::CertConstraintParameters> cp)
{
	
	//    .param p2, "cp"    # Lsun/security/util/CertConstraintParameters;
	//    .annotation system Ldalvik/annotation/Signature;
	// 420        value = {
	// 421            "(",
	// 422            "Ljava/util/Set",
	// 423            "<",
	// 424            "Ljava/security/CryptoPrimitive;",
	// 425            ">;",
	// 426            "Lsun/security/util/CertConstraintParameters;",
	// 427            ")V"
	// 428        }
	// 429    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 432        value = {
	// 433            Ljava/security/cert/CertPathValidatorException;
	// 434        }
	// 435    .end annotation
	//    .local p1, "primitives":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;"
	this->checkConstraints(primitives, cp);
	return;

}
// .method public final permits(Ljava/util/Set;Ljava/lang/String;Ljava/security/AlgorithmParameters;)Z
bool sun::security::util::DisabledAlgorithmConstraints::permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::AlgorithmParameters> parameters)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "parameters"    # Ljava/security/AlgorithmParameters;
	//    .annotation system Ldalvik/annotation/Signature;
	// 451        value = {
	// 452            "(",
	// 453            "Ljava/util/Set",
	// 454            "<",
	// 455            "Ljava/security/CryptoPrimitive;",
	// 456            ">;",
	// 457            "Ljava/lang/String;",
	// 458            "Ljava/security/AlgorithmParameters;",
	// 459            ")Z"
	// 460        }
	// 461    .end annotation
	//    .local p1, "primitives":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;"
	if ( !(primitives) )  
		goto label_cond_8;
	if ( !(primitives->isEmpty()) )  
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No cryptographic primitive specified")));
	// throw
	throw cVar0;
	// 486    .line 104
label_cond_11:
	return sun::security::util::DisabledAlgorithmConstraints::checkAlgorithm(this->disabledAlgorithms, algorithm, this->decomposer);

}
// .method public final permits(Ljava/util/Set;Ljava/lang/String;Ljava/security/Key;Ljava/security/AlgorithmParameters;)Z
bool sun::security::util::DisabledAlgorithmConstraints::permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::Key> key,std::shared_ptr<java::security::AlgorithmParameters> parameters)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "key"    # Ljava/security/Key;
	//    .param p4, "parameters"    # Ljava/security/AlgorithmParameters;
	//    .annotation system Ldalvik/annotation/Signature;
	// 505        value = {
	// 506            "(",
	// 507            "Ljava/util/Set",
	// 508            "<",
	// 509            "Ljava/security/CryptoPrimitive;",
	// 510            ">;",
	// 511            "Ljava/lang/String;",
	// 512            "Ljava/security/Key;",
	// 513            "Ljava/security/AlgorithmParameters;",
	// 514            ")Z"
	// 515        }
	// 516    .end annotation
	//    .local p1, "primitives":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;"
	if ( !(algorithm) )  
		goto label_cond_8;
	if ( algorithm->length() )     
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No algorithm name specified")));
	// throw
	throw cVar0;
	// 539    .line 128
label_cond_11:
	return this->checkConstraints(primitives, algorithm, key, parameters);

}
// .method public final permits(Ljava/util/Set;Ljava/security/Key;)Z
bool sun::security::util::DisabledAlgorithmConstraints::permits(std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> primitives,std::shared_ptr<java::security::Key> key)
{
	
	//    .param p2, "key"    # Ljava/security/Key;
	//    .annotation system Ldalvik/annotation/Signature;
	// 552        value = {
	// 553            "(",
	// 554            "Ljava/util/Set",
	// 555            "<",
	// 556            "Ljava/security/CryptoPrimitive;",
	// 557            ">;",
	// 558            "Ljava/security/Key;",
	// 559            ")Z"
	// 560        }
	// 561    .end annotation
	//    .local p1, "primitives":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;"
	return this->checkConstraints(primitives, std::make_shared<java::lang::String>(std::make_shared<char[]>("")), key, 0x0);

}


