// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\SignatureFileVerifier.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.security.AlgorithmParameters.h"
#include "java.security.CodeSigner.h"
#include "java.security.CryptoPrimitive.h"
#include "java.security.MessageDigest.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.SignatureException.h"
#include "java.security.Timestamp.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.util.ArrayList.h"
#include "java.util.Base64_S_Decoder.h"
#include "java.util.Base64.h"
#include "java.util.Collections.h"
#include "java.util.EnumSet.h"
#include "java.util.HashMap.h"
#include "java.util.Hashtable.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.jar.Attributes_S_Name.h"
#include "java.util.jar.Attributes.h"
#include "java.util.jar.Manifest.h"
#include "sun.security.jca.Providers.h"
#include "sun.security.pkcs.ContentInfo.h"
#include "sun.security.pkcs.PKCS7.h"
#include "sun.security.pkcs.SignerInfo.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"
#include "sun.security.util.ManifestDigester_S_Entry.h"
#include "sun.security.util.ManifestDigester.h"
#include "sun.security.util.SignatureFileVerifier.h"

static sun::security::util::SignatureFileVerifier::ATTR_DIGEST;
static sun::security::util::SignatureFileVerifier::DIGEST_PRIMITIVE_SET;
static sun::security::util::SignatureFileVerifier::JAR_DISABLED_CHECK;
static sun::security::util::SignatureFileVerifier::debug;
static sun::security::util::SignatureFileVerifier::hexc;
// .method static constructor <clinit>()V
void sun::security::util::SignatureFileVerifier::static_cinit()
{
	
	std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints> cVar0;
	std::shared<std::vector<char[]>> cVar1;
	
	sun::security::util::SignatureFileVerifier::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("jar")));
	sun::security::util::SignatureFileVerifier::DIGEST_PRIMITIVE_SET = java::util::Collections::unmodifiableSet(java::util::EnumSet::of(java::security::CryptoPrimitive::MESSAGE_DIGEST));
	cVar0 = std::make_shared<sun::security::util::DisabledAlgorithmConstraints>(std::make_shared<java::lang::String>(std::make_shared<char[]>("jdk.jar.disabledAlgorithms")));
	sun::security::util::SignatureFileVerifier::JAR_DISABLED_CHECK = cVar0;
	sun::security::util::SignatureFileVerifier::ATTR_DIGEST = std::make_shared<java::lang::String>(std::make_shared<char[]>("-DIGEST-Manifest-Main-Attributes"))->toUpperCase(java::util::Locale::ENGLISH);
	cVar1 = std::make_shared<std::vector<char[]>>(0x10);
	?;
	sun::security::util::SignatureFileVerifier::hexc = cVar1;
	return;
	// 131    .line 576
	// 132    :array_34
	// 133    .array-data 2
	// 134        0x30s
	// 135        0x31s
	// 136        0x32s
	// 137        0x33s
	// 138        0x34s
	// 139        0x35s
	// 140        0x36s
	// 141        0x37s
	// 142        0x38s
	// 143        0x39s
	// 144        0x61s
	// 145        0x62s
	// 146        0x63s
	// 147        0x64s
	// 148        0x65s
	// 149        0x66s
	// 150    .end array-data

}
// .method public constructor <init>(Ljava/util/ArrayList;Lsun/security/util/ManifestDigester;Ljava/lang/String;[B)V
sun::security::util::SignatureFileVerifier::SignatureFileVerifier(std::shared_ptr<java::util::ArrayList<std::vector<java::security::CodeSigner>>> signerCache,std::shared_ptr<sun::security::util::ManifestDigester> md,std::shared_ptr<java::lang::String> name,std::shared_ptr<unsigned char[]> rawBytes)
{
	
	bool cVar0;
	std::shared_ptr<sun::security::pkcs::PKCS7> cVar1;
	
	//    .param p2, "md"    # Lsun/security/util/ManifestDigester;
	//    .param p3, "name"    # Ljava/lang/String;
	//    .param p4, "rawBytes"    # [B
	//    .annotation system Ldalvik/annotation/Signature;
	// 159        value = {
	// 160            "(",
	// 161            "Ljava/util/ArrayList",
	// 162            "<[",
	// 163            "Ljava/security/CodeSigner;",
	// 164            ">;",
	// 165            "Lsun/security/util/ManifestDigester;",
	// 166            "Ljava/lang/String;",
	// 167            "[B)V"
	// 168        }
	// 169    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 172        value = {
	// 173            Ljava/io/IOException;,
	// 174            Ljava/security/cert/CertificateException;
	// 175        }
	// 176    .end annotation
	//    .local p1, "signerCache":Ljava/util/ArrayList;, "Ljava/util/ArrayList<[Ljava/security/CodeSigner;>;"
	cVar0 = 0x0;
	// 183    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->workaround = cVar0;
	this->certificateFactory = 0x0;
	//    .local v0, "obj":Ljava/lang/Object;
	try {
	//label_try_start_a:
	cVar1 = std::make_shared<sun::security::pkcs::PKCS7>(rawBytes);
	this->block = cVar1;
	this->sfBytes = this->block->getContentInfo()->getData();
	this->certificateFactory = java::security::cert::CertificateFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("X509")));
	//label_try_end_2a:
	}
	catch (...){
		goto label_catchall_45;
	}
	//    .catchall {:try_start_a .. :try_end_2a} :catchall_45
	sun::security::jca::Providers::stopJarVerification(sun::security::jca::Providers::startJarVerification({const[class].FS-Param}));
	this->name = name->substring(cVar0, name->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("."))))->toUpperCase(java::util::Locale::ENGLISH);
	this->md = md;
	this->signerCache = signerCache;
	return;
	// 267    .line 121
	// 268    .end local v0    # "obj":Ljava/lang/Object;
label_catchall_45:
	// move-exception
	
	sun::security::jca::Providers::stopJarVerification(0x0);
	// throw
	throw;

}
// .method static contains([Ljava/security/CodeSigner;Ljava/security/CodeSigner;)Z
bool sun::security::util::SignatureFileVerifier::contains(std::shared_ptr<std::vector<java::security::CodeSigner>> set,std::shared_ptr<java::security::CodeSigner> signer)
{
	
	int i;
	
	//    .param p0, "set"    # [Ljava/security/CodeSigner;
	//    .param p1, "signer"    # Ljava/security/CodeSigner;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= set->size() )
		goto label_cond_11;
	if ( !(set[i]->equals(signer)) )  
		goto label_cond_e;
	return 0x1;
	// 308    .line 597
label_cond_e:
	i = ( i + 0x1);
	goto label_goto_1;
	// 314    .line 601
label_cond_11:
	return 0x0;

}
// .method private getDigest(Ljava/lang/String;)Ljava/security/MessageDigest;
std::shared_ptr<java::security::MessageDigest> sun::security::util::SignatureFileVerifier::getDigest(std::shared_ptr<java::lang::String> algorithm)
{
	
	std::shared_ptr<java::security::SignatureException> e;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<java::security::MessageDigest> digest;
	std::shared_ptr<java::lang::Object> digest;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 325        value = {
	// 326            Ljava/security/SignatureException;
	// 327        }
	// 328    .end annotation
	if ( sun::security::util::SignatureFileVerifier::JAR_DISABLED_CHECK->permits(sun::security::util::SignatureFileVerifier::DIGEST_PRIMITIVE_SET, algorithm, 0x0) )     
		goto label_cond_25;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	e = std::make_shared<java::security::SignatureException>(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SignatureFile check failed. Disabled algorithm used: ")))->append(algorithm)->toString());
	//    .local v1, "e":Ljava/security/SignatureException;
	// throw
	throw e;
	// 371    .line 235
	// 372    .end local v1    # "e":Ljava/security/SignatureException;
label_cond_25:
	if ( this->createdDigests )     
		goto label_cond_30;
	cVar1 = std::make_shared<java::util::HashMap>();
	this->createdDigests = cVar1;
label_cond_30:
	digest = this->createdDigests->get(algorithm);
	digest->checkCast("java::security::MessageDigest");
	//    .local v0, "digest":Ljava/security/MessageDigest;
	if ( digest )     
		goto label_cond_43;
	try {
	//label_try_start_3a:
	digest = java::security::MessageDigest::getInstance(algorithm);
	this->createdDigests->put(algorithm, digest);
	//label_try_end_43:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_44;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_3a .. :try_end_43} :catch_44
label_cond_43:
label_goto_43:
	return digest;
	// 417    .line 244
label_catch_44:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "nsae":Ljava/security/NoSuchAlgorithmException;
	goto label_goto_43;

}
// .method private getSigners([Lsun/security/pkcs/SignerInfo;Lsun/security/pkcs/PKCS7;)[Ljava/security/CodeSigner;
std::shared_ptr<java::security::CodeSigner> sun::security::util::SignatureFileVerifier::getSigners(std::shared_ptr<std::vector<sun::security::pkcs::SignerInfo>> infos,std::shared_ptr<sun::security::pkcs::PKCS7> block)
{
	
	std::shared_ptr<java::util::ArrayList> signers;
	int i;
	std::shared_ptr<sun::security::pkcs::SignerInfo> info;
	std::shared_ptr<java::util::List> chain;
	std::shared_ptr<java::security::CodeSigner> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<std::vector<java::security::CodeSigner>> cVar2;
	
	//    .param p1, "infos"    # [Lsun/security/pkcs/SignerInfo;
	//    .param p2, "block"    # Lsun/security/pkcs/PKCS7;
	//    .annotation system Ldalvik/annotation/Throws;
	// 430        value = {
	// 431            Ljava/io/IOException;,
	// 432            Ljava/security/NoSuchAlgorithmException;,
	// 433            Ljava/security/SignatureException;,
	// 434            Ljava/security/cert/CertificateException;
	// 435        }
	// 436    .end annotation
	signers = 0x0;
	//    .local v4, "signers":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/security/CodeSigner;>;"
	i = 0x0;
	//    .end local v4    # "signers":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/security/CodeSigner;>;"
	//    .local v2, "i":I
label_goto_3:
	if ( i >= infos->size() )
		goto label_cond_4a;
	info = infos[i];
	//    .local v3, "info":Lsun/security/pkcs/SignerInfo;
	chain = info->getCertificateChain(block);
	//    .local v1, "chain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/security/cert/X509Certificate;>;"
	//    .local v0, "certChain":Ljava/security/cert/CertPath;
	if ( signers )     
		goto label_cond_19;
	signers = std::make_shared<java::util::ArrayList>();
label_cond_19:
	cVar0 = std::make_shared<java::security::CodeSigner>(this->certificateFactory->generateCertPath(chain), info->getTimestamp());
	signers->add(cVar0);
	if ( !(sun::security::util::SignatureFileVerifier::debug) )  
		goto label_cond_47;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature Block Certificate: ")))->append(chain->get(0x0))->toString());
label_cond_47:
	i = ( i + 0x1);
	goto label_goto_3;
	// 535    .line 567
	// 536    .end local v0    # "certChain":Ljava/security/cert/CertPath;
	// 537    .end local v1    # "chain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/security/cert/X509Certificate;>;"
	// 538    .end local v3    # "info":Lsun/security/pkcs/SignerInfo;
label_cond_4a:
	if ( !(signers) )  
		goto label_cond_59;
	cVar2 = signers->toArray(std::make_shared<std::vector<std::vector<java::security::CodeSigner>>>(signers->size()));
	cVar2->checkCast("std::vector<java::security::CodeSigner>");
	return cVar2;
	// 557    .line 570
label_cond_59:
	return 0x0;

}
// .method public static isBlockOrSF(Ljava/lang/String;)Z
bool sun::security::util::SignatureFileVerifier::isBlockOrSF(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".SF"))) )     
		goto label_cond_24;
	if ( s->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".DSA"))) )     
		goto label_cond_24;
	if ( s->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".RSA"))) )     
		goto label_cond_24;
	if ( !(s->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".EC")))) )  
		goto label_cond_26;
label_cond_24:
	return 0x1;
	// 610    .line 175
label_cond_26:
	return 0x0;

}
// .method public static isSigningRelated(Ljava/lang/String;)Z
bool sun::security::util::SignatureFileVerifier::isSigningRelated(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	bool cVar1;
	bool cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<java::lang::String> cVar4;
	int extIndex;
	std::shared_ptr<java::lang::String> ext;
	int index;
	int cc;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = -0x1;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = name->toUpperCase(java::util::Locale::ENGLISH);
	if ( cVar3->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("META-INF/"))) )     
		goto label_cond_13;
	return cVar2;
	// 647    .line 193
label_cond_13:
	cVar4 = cVar3->substring(0x9);
	if ( cVar4->indexOf(0x2f) == cVar0 )
		goto label_cond_22;
	return cVar2;
	// 667    .line 197
label_cond_22:
	if ( sun::security::util::SignatureFileVerifier::isBlockOrSF(cVar4) )     
		goto label_cond_31;
	if ( !(cVar4->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("MANIFEST.MF")))) )  
		goto label_cond_32;
label_cond_31:
	return cVar1;
	// 687    .line 199
label_cond_32:
	if ( !(cVar4->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("SIG-")))) )  
		goto label_cond_77;
	extIndex = cVar4->lastIndexOf(0x2e);
	//    .local v2, "extIndex":I
	if ( extIndex == cVar0 )
		goto label_cond_76;
	ext = cVar4->substring(( extIndex + 0x1));
	//    .local v1, "ext":Ljava/lang/String;
	if ( ext->length() >  0x3 )
		goto label_cond_56;
	if ( ext->length() >= cVar1 )
		goto label_cond_57;
label_cond_56:
	return cVar2;
	// 735    .line 211
label_cond_57:
	index = 0x0;
	//    .local v3, "index":I
label_goto_58:
	if ( index >= ext->length() )
		goto label_cond_76;
	cc = ext->charAt(index);
	//    .local v0, "cc":C
	if ( cc <  0x41 )
		goto label_cond_6a;
	if ( cc <= 0x5a )
		goto label_cond_73;
label_cond_6a:
	if ( cc <  0x30 )
		goto label_cond_72;
	if ( cc <= 0x39 )
		goto label_cond_73;
label_cond_72:
	return cVar2;
	// 775    .line 211
label_cond_73:
	index = ( index + 0x1);
	goto label_goto_58;
	// 781    .line 219
	// 782    .end local v0    # "cc":C
	// 783    .end local v1    # "ext":Ljava/lang/String;
	// 784    .end local v3    # "index":I
label_cond_76:
	return cVar1;
	// 788    .line 221
	// 789    .end local v2    # "extIndex":I
label_cond_77:
	return cVar2;

}
// .method static isSubSet([Ljava/security/CodeSigner;[Ljava/security/CodeSigner;)Z
bool sun::security::util::SignatureFileVerifier::isSubSet(std::shared_ptr<std::vector<java::security::CodeSigner>> subset,std::shared_ptr<std::vector<java::security::CodeSigner>> set)
{
	
	bool cVar0;
	int i;
	
	//    .param p0, "subset"    # [Ljava/security/CodeSigner;
	//    .param p1, "set"    # [Ljava/security/CodeSigner;
	cVar0 = 0x1;
	if ( set != subset )
		goto label_cond_4;
	return cVar0;
	// 808    .line 612
label_cond_4:
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= subset->size() )
		goto label_cond_15;
	if ( sun::security::util::SignatureFileVerifier::contains(set, subset[i]) )     
		goto label_cond_12;
	return 0x0;
	// 832    .line 612
label_cond_12:
	i = ( i + 0x1);
	goto label_goto_5;
	// 838    .line 616
label_cond_15:
	return cVar0;

}
// .method static matches([Ljava/security/CodeSigner;[Ljava/security/CodeSigner;[Ljava/security/CodeSigner;)Z
bool sun::security::util::SignatureFileVerifier::matches(std::shared_ptr<std::vector<java::security::CodeSigner>> signers,std::shared_ptr<std::vector<java::security::CodeSigner>> oldSigners,std::shared_ptr<std::vector<java::security::CodeSigner>> newSigners)
{
	
	bool cVar0;
	bool cVar1;
	int i;
	int cVar2;
	
	//    .param p0, "signers"    # [Ljava/security/CodeSigner;
	//    .param p1, "oldSigners"    # [Ljava/security/CodeSigner;
	//    .param p2, "newSigners"    # [Ljava/security/CodeSigner;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( oldSigners )     
		goto label_cond_7;
	if ( signers != newSigners )
		goto label_cond_7;
	return cVar0;
	// 862    .line 634
label_cond_7:
	if ( !(oldSigners) )  
		goto label_cond_12;
	if ( !(( sun::security::util::SignatureFileVerifier::isSubSet(oldSigners, signers) ^ 0x1)) )  
		goto label_cond_12;
	return cVar1;
	// 877    .line 638
label_cond_12:
	if ( sun::security::util::SignatureFileVerifier::isSubSet(newSigners, signers) )     
		goto label_cond_19;
	return cVar1;
	// 888    .line 645
label_cond_19:
	i = 0x0;
	//    .local v1, "i":I
label_goto_1a:
	if ( i >= signers->size() )
		goto label_cond_35;
	if ( !(oldSigners) )  
		goto label_cond_27;
	if ( sun::security::util::SignatureFileVerifier::contains(oldSigners, signers[i]) )     
		goto label_cond_30;
label_cond_27:
	cVar2 = sun::security::util::SignatureFileVerifier::contains(newSigners, signers[i]);
label_goto_2d:
	if ( cVar2 )     
		goto label_cond_32;
	return cVar1;
	// 924    .line 647
label_cond_30:
	cVar2 = 0x1;
	//    .local v0, "found":Z
	goto label_goto_2d;
	// 931    .line 645
	// 932    .end local v0    # "found":Z
label_cond_32:
	i = ( i + 0x1);
	goto label_goto_1a;
	// 938    .line 652
label_cond_35:
	return cVar0;

}
// .method private processImpl(Ljava/util/Hashtable;Ljava/util/List;)V
void sun::security::util::SignatureFileVerifier::processImpl(std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> signers,std::shared_ptr<java::util::List<java::lang::Object>> manifestDigests)
{
	
	std::shared_ptr<java::util::jar::Manifest> sf;
	std::shared_ptr<java::io::ByteArrayInputStream> cVar0;
	std::shared_ptr<java::lang::String> version;
	std::shared_ptr<std::vector<sun::security::pkcs::SignerInfo>> infos;
	std::shared_ptr<java::lang::SecurityException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<std::vector<java::security::CodeSigner>> newSigners;
	std::shared_ptr<java::util::Iterator> entries;
	int manifestSigned;
	std::shared_ptr<java::lang::SecurityException> cVar3;
	std::shared_ptr<java::util::Map_S_Entry> e;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::util::jar::Attributes> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 946        value = {
	// 947            "(",
	// 948            "Ljava/util/Hashtable",
	// 949            "<",
	// 950            "Ljava/lang/String;",
	// 951            "[",
	// 952            "Ljava/security/CodeSigner;",
	// 953            ">;",
	// 954            "Ljava/util/List",
	// 955            "<",
	// 956            "Ljava/lang/Object;",
	// 957            ">;)V"
	// 958        }
	// 959    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 962        value = {
	// 963            Ljava/io/IOException;,
	// 964            Ljava/security/SignatureException;,
	// 965            Ljava/security/NoSuchAlgorithmException;,
	// 966            Ljava/util/jar/JarException;,
	// 967            Ljava/security/cert/CertificateException;
	// 968        }
	// 969    .end annotation
	//    .local p1, "signers":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;[Ljava/security/CodeSigner;>;"
	//    .local p2, "manifestDigests":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	sf = std::make_shared<java::util::jar::Manifest>();
	//    .local v6, "sf":Ljava/util/jar/Manifest;
	cVar0 = std::make_shared<java::io::ByteArrayInputStream>(this->sfBytes);
	sf->read(cVar0);
	version = sf->getMainAttributes()->getValue(java::util::jar::Attributes_S_Name::SIGNATURE_VERSION);
	//    .local v7, "version":Ljava/lang/String;
	if ( !(version) )  
		goto label_cond_26;
	if ( !(( version->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("1.0"))) ^ 0x1)) )  
		goto label_cond_27;
label_cond_26:
	return;
	// 1018    .line 292
label_cond_27:
	infos = this->block->verify(this->sfBytes);
	//    .local v2, "infos":[Lsun/security/pkcs/SignerInfo;
	if ( infos )     
		goto label_cond_4d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::SecurityException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot verify signature block file ")))->append(this->name)->toString());
	// throw
	throw cVar1;
	// 1061    .line 300
label_cond_4d:
	newSigners = this->getSigners(infos, this->block);
	//    .local v5, "newSigners":[Ljava/security/CodeSigner;
	if ( newSigners )     
		goto label_cond_56;
	return;
	// 1076    .line 307
label_cond_56:
	entries = sf->getEntries()->entrySet()->iterator();
	//    .local v1, "entries":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/jar/Attributes;>;>;"
	manifestSigned = this->verifyManifestHash(sf, this->md, manifestDigests);
	//    .local v3, "manifestSigned":Z
	if ( manifestSigned )     
		goto label_cond_7d;
	if ( !(( this->verifyManifestMainAttrs(sf, this->md) ^ 0x1)) )  
		goto label_cond_7d;
	cVar3 = std::make_shared<java::lang::SecurityException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid signature file digest for Manifest main attributes")));
	// throw
	throw cVar3;
	// 1123    .line 319
label_cond_7d:
label_goto_7d:
	if ( !(entries->hasNext()) )  
		goto label_cond_fa;
	e = entries->next();
	e->checkCast("java::util::Map_S_Entry");
	//    .local v0, "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/jar/Attributes;>;"
	name = e->getKey();
	name->checkCast("java::lang::String");
	//    .local v4, "name":Ljava/lang/String;
	if ( manifestSigned )     
		goto label_cond_9f;
	cVar4 = e->getValue();
	cVar4->checkCast("java::util::jar::Attributes");
	if ( !(this->verifySection(cVar4, name, this->md)) )  
		goto label_cond_dc;
label_cond_9f:
	if ( !(name->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("./")))) )  
		goto label_cond_ad;
	name = name->substring(0x2);
label_cond_ad:
	if ( !(name->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))) )  
		goto label_cond_bb;
	name = name->substring(0x1);
label_cond_bb:
	this->updateSigners(newSigners, signers, name);
	if ( !(sun::security::util::SignatureFileVerifier::debug) )  
		goto label_cond_7d;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("processSignature signed name = ")))->append(name)->toString());
	goto label_goto_7d;
	// 1235    .line 339
label_cond_dc:
	if ( !(sun::security::util::SignatureFileVerifier::debug) )  
		goto label_cond_7d;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("processSignature unsigned name = ")))->append(name)->toString());
	goto label_goto_7d;
	// 1266    .line 345
	// 1267    .end local v0    # "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/jar/Attributes;>;"
	// 1268    .end local v4    # "name":Ljava/lang/String;
label_cond_fa:
	this->updateSigners(newSigners, signers, std::make_shared<java::lang::String>(std::make_shared<char[]>("META-INF/MANIFEST.MF")));
	return;

}
// .method static toHex([B)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::SignatureFileVerifier::toHex(std::shared_ptr<unsigned char[]> data)
{
	
	std::shared_ptr<java::lang::StringBuffer> sb;
	int i;
	
	//    .param p0, "data"    # [B
	sb = std::make_shared<java::lang::StringBuffer>(( data->size() * 0x2));
	//    .local v1, "sb":Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v0, "i":I
label_goto_9:
	if ( i >= data->size() )
		goto label_cond_27;
	sb->append(sun::security::util::SignatureFileVerifier::hexc[( _shri(data[i],0x4) & 0xf)]);
	sb->append(sun::security::util::SignatureFileVerifier::hexc[( data[i] & 0xf)]);
	i = ( i + 0x1);
	goto label_goto_9;
	// 1331    .line 591
label_cond_27:
	return sb->toString();

}
// .method private verifyManifestHash(Ljava/util/jar/Manifest;Lsun/security/util/ManifestDigester;Ljava/util/List;)Z
bool sun::security::util::SignatureFileVerifier::verifyManifestHash(std::shared_ptr<java::util::jar::Manifest> sf,std::shared_ptr<sun::security::util::ManifestDigester> md,std::shared_ptr<java::util::List<java::lang::Object>> manifestDigests)
{
	
	std::shared_ptr<java::util::Iterator> se_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> se;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::security::MessageDigest> digest;
	std::shared_ptr<unsigned char[]> computedHash;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<unsigned char[]> expectedHash;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "sf"    # Ljava/util/jar/Manifest;
	//    .param p2, "md"    # Lsun/security/util/ManifestDigester;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1345        value = {
	// 1346            "(",
	// 1347            "Ljava/util/jar/Manifest;",
	// 1348            "Lsun/security/util/ManifestDigester;",
	// 1349            "Ljava/util/List",
	// 1350            "<",
	// 1351            "Ljava/lang/Object;",
	// 1352            ">;)Z"
	// 1353        }
	// 1354    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1357        value = {
	// 1358            Ljava/io/IOException;,
	// 1359            Ljava/security/SignatureException;
	// 1360        }
	// 1361    .end annotation
	//    .local p3, "manifestDigests":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	//    .local v6, "mattr":Ljava/util/jar/Attributes;
	//    .local v5, "manifestSigned":Z
	se_S_iterator = sf->getMainAttributes()->entrySet()->iterator();
	//    .local v8, "se$iterator":Ljava/util/Iterator;
label_cond_d:
label_goto_d:
	if ( !(se_S_iterator->hasNext()) )  
		goto label_cond_c6;
	se = se_S_iterator->next();
	se->checkCast("java::util::Map_S_Entry");
	//    .local v7, "se":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;"
	key = se->getKey()->toString();
	//    .local v4, "key":Ljava/lang/String;
	if ( !(key->toUpperCase(java::util::Locale::ENGLISH)->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-DIGEST-MANIFEST")))) )  
		goto label_cond_d;
	//    .local v0, "algorithm":Ljava/lang/String;
	manifestDigests->add(key);
	manifestDigests->add(se->getValue());
	digest = this->getDigest(key->substring(0x0, ( key->length() + -0x10)));
	//    .local v2, "digest":Ljava/security/MessageDigest;
	if ( !(digest) )  
		goto label_cond_d;
	computedHash = md->manifestDigest(digest);
	//    .local v1, "computedHash":[B
	cVar0 = se->getValue();
	cVar0->checkCast("java::lang::String");
	expectedHash = java::util::Base64::getMimeDecoder({const[class].FS-Param})->decode(cVar0);
	//    .local v3, "expectedHash":[B
	if ( !(sun::security::util::SignatureFileVerifier::debug) )  
		goto label_cond_bd;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature File: Manifest digest ")))->append(digest->getAlgorithm())->toString());
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  sigfile  ")))->append(sun::security::util::SignatureFileVerifier::toHex(expectedHash))->toString());
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  computed ")))->append(sun::security::util::SignatureFileVerifier::toHex(computedHash))->toString());
	sun::security::util::SignatureFileVerifier::debug->println();
label_cond_bd:
	if ( !(java::security::MessageDigest::isEqual(computedHash, expectedHash)) )  
		goto label_cond_d;
	0x1;
	goto label_goto_d;
	// 1586    .line 393
	// 1587    .end local v0    # "algorithm":Ljava/lang/String;
	// 1588    .end local v1    # "computedHash":[B
	// 1589    .end local v2    # "digest":Ljava/security/MessageDigest;
	// 1590    .end local v3    # "expectedHash":[B
	// 1591    .end local v4    # "key":Ljava/lang/String;
	// 1592    .end local v7    # "se":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;"
label_cond_c6:
	return 0x0;

}
// .method private verifyManifestMainAttrs(Ljava/util/jar/Manifest;Lsun/security/util/ManifestDigester;)Z
bool sun::security::util::SignatureFileVerifier::verifyManifestMainAttrs(std::shared_ptr<java::util::jar::Manifest> sf,std::shared_ptr<sun::security::util::ManifestDigester> md)
{
	
	std::shared_ptr<java::util::Iterator> se_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> se;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::security::MessageDigest> digest;
	std::shared_ptr<unsigned char[]> computedHash;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<unsigned char[]> expectedHash;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "sf"    # Ljava/util/jar/Manifest;
	//    .param p2, "md"    # Lsun/security/util/ManifestDigester;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1602        value = {
	// 1603            Ljava/io/IOException;,
	// 1604            Ljava/security/SignatureException;
	// 1605        }
	// 1606    .end annotation
	//    .local v6, "mattr":Ljava/util/jar/Attributes;
	//    .local v1, "attrsVerified":Z
	se_S_iterator = sf->getMainAttributes()->entrySet()->iterator();
	//    .local v9, "se$iterator":Ljava/util/Iterator;
label_cond_d:
	if ( !(se_S_iterator->hasNext()) )  
		goto label_cond_d7;
	se = se_S_iterator->next();
	se->checkCast("java::util::Map_S_Entry");
	//    .local v8, "se":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;"
	key = se->getKey()->toString();
	//    .local v5, "key":Ljava/lang/String;
	if ( !(key->toUpperCase(java::util::Locale::ENGLISH)->endsWith(sun::security::util::SignatureFileVerifier::ATTR_DIGEST)) )  
		goto label_cond_d;
	//    .local v0, "algorithm":Ljava/lang/String;
	digest = this->getDigest(key->substring(0x0, (key->length() -  sun::security::util::SignatureFileVerifier::ATTR_DIGEST->length())));
	//    .local v3, "digest":Ljava/security/MessageDigest;
	if ( !(digest) )  
		goto label_cond_d;
	//    .local v7, "mde":Lsun/security/util/ManifestDigester$Entry;
	computedHash = md->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Manifest-Main-Attributes")), 0x0)->digest(digest);
	//    .local v2, "computedHash":[B
	cVar0 = se->getValue();
	cVar0->checkCast("java::lang::String");
	expectedHash = java::util::Base64::getMimeDecoder({const[class].FS-Param})->decode(cVar0);
	//    .local v4, "expectedHash":[B
	if ( !(sun::security::util::SignatureFileVerifier::debug) )  
		goto label_cond_bf;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature File: Manifest Main Attributes digest ")))->append(digest->getAlgorithm())->toString());
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  sigfile  ")))->append(sun::security::util::SignatureFileVerifier::toHex(expectedHash))->toString());
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  computed ")))->append(sun::security::util::SignatureFileVerifier::toHex(computedHash))->toString());
	sun::security::util::SignatureFileVerifier::debug->println();
label_cond_bf:
	if ( java::security::MessageDigest::isEqual(computedHash, expectedHash) )     
		goto label_cond_d;
	if ( !(sun::security::util::SignatureFileVerifier::debug) )  
		goto label_cond_d7;
	sun::security::util::SignatureFileVerifier::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Verification of Manifest main attributes failed")));
	sun::security::util::SignatureFileVerifier::debug->println();
	//    .end local v0    # "algorithm":Ljava/lang/String;
	//    .end local v2    # "computedHash":[B
	//    .end local v3    # "digest":Ljava/security/MessageDigest;
	//    .end local v4    # "expectedHash":[B
	//    .end local v5    # "key":Ljava/lang/String;
	//    .end local v7    # "mde":Lsun/security/util/ManifestDigester$Entry;
	//    .end local v8    # "se":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;"
label_cond_d7:
	return 0x1;

}
// .method private verifySection(Ljava/util/jar/Attributes;Ljava/lang/String;Lsun/security/util/ManifestDigester;)Z
bool sun::security::util::SignatureFileVerifier::verifySection(std::shared_ptr<java::util::jar::Attributes> sfAttr,std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::security::util::ManifestDigester> md)
{
	
	std::shared_ptr<sun::security::util::ManifestDigester_S_Entry> mde;
	std::shared_ptr<java::lang::SecurityException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Iterator> se_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> se;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::security::MessageDigest> digest;
	int ok;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<unsigned char[]> expected;
	std::shared_ptr<unsigned char[]> computed;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::SecurityException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	
	//    .param p1, "sfAttr"    # Ljava/util/jar/Attributes;
	//    .param p2, "name"    # Ljava/lang/String;
	//    .param p3, "md"    # Lsun/security/util/ManifestDigester;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1868        value = {
	// 1869            Ljava/io/IOException;,
	// 1870            Ljava/security/SignatureException;
	// 1871        }
	// 1872    .end annotation
	//    .local v9, "oneDigestVerified":Z
	mde = md->get(name, this->block->isOldStyle());
	//    .local v7, "mde":Lsun/security/util/ManifestDigester$Entry;
	if ( mde )     
		goto label_cond_2d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::SecurityException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("no manifest section for signature file entry ")))->append(name)->toString());
	// throw
	throw cVar0;
	// 1927    .line 474
label_cond_2d:
	if ( !(sfAttr) )  
		goto label_cond_164;
	se_S_iterator = sfAttr->entrySet()->iterator();
	//    .local v11, "se$iterator":Ljava/util/Iterator;
label_cond_37:
	if ( !(se_S_iterator->hasNext()) )  
		goto label_cond_164;
	se = se_S_iterator->next();
	se->checkCast("java::util::Map_S_Entry");
	//    .local v10, "se":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;"
	key = se->getKey()->toString();
	//    .local v6, "key":Ljava/lang/String;
	if ( !(key->toUpperCase(java::util::Locale::ENGLISH)->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-DIGEST")))) )  
		goto label_cond_37;
	//    .local v2, "algorithm":Ljava/lang/String;
	digest = this->getDigest(key->substring(0x0, ( key->length() + -0x7)));
	//    .local v4, "digest":Ljava/security/MessageDigest;
	if ( !(digest) )  
		goto label_cond_37;
	ok = 0x0;
	//    .local v8, "ok":Z
	cVar2 = se->getValue();
	cVar2->checkCast("java::lang::String");
	expected = java::util::Base64::getMimeDecoder({const[class].FS-Param})->decode(cVar2);
	//    .local v5, "expected":[B
	if ( !(this->workaround) )  
		goto label_cond_124;
	computed = mde->digestWorkaround(digest);
	//    .local v3, "computed":[B
label_goto_82:
	if ( !(sun::security::util::SignatureFileVerifier::debug) )  
		goto label_cond_ef;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature Block File: ")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" digest=")))->append(digest->getAlgorithm())->toString());
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  expected ")))->append(sun::security::util::SignatureFileVerifier::toHex(expected))->toString());
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  computed ")))->append(sun::security::util::SignatureFileVerifier::toHex(computed))->toString());
	sun::security::util::SignatureFileVerifier::debug->println();
label_cond_ef:
	if ( !(java::security::MessageDigest::isEqual(computed, expected)) )  
		goto label_cond_12a;
	0x1;
	ok = 0x1;
label_cond_f7:
label_goto_f7:
	if ( ok )     
		goto label_cond_37;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::SecurityException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid ")))->append(digest->getAlgorithm())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" signature file digest for ")))->append(name)->toString());
	// throw
	throw cVar6;
	// 2206    .line 498
	// 2207    .end local v3    # "computed":[B
label_cond_124:
	//    .restart local v3    # "computed":[B
	goto label_goto_82;
	// 2216    .line 514
label_cond_12a:
	if ( this->workaround )     
		goto label_cond_f7;
	computed = mde->digestWorkaround(digest);
	if ( !(java::security::MessageDigest::isEqual(computed, expected)) )  
		goto label_cond_f7;
	if ( !(sun::security::util::SignatureFileVerifier::debug) )  
		goto label_cond_15e;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::SignatureFileVerifier::debug->println(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  re-computed ")))->append(sun::security::util::SignatureFileVerifier::toHex(computed))->toString());
	sun::security::util::SignatureFileVerifier::debug->println();
label_cond_15e:
	this->workaround = 0x1;
	0x1;
	ok = 0x1;
	goto label_goto_f7;
	// 2285    .line 536
	// 2286    .end local v2    # "algorithm":Ljava/lang/String;
	// 2287    .end local v3    # "computed":[B
	// 2288    .end local v4    # "digest":Ljava/security/MessageDigest;
	// 2289    .end local v5    # "expected":[B
	// 2290    .end local v6    # "key":Ljava/lang/String;
	// 2291    .end local v8    # "ok":Z
	// 2292    .end local v10    # "se":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;"
	// 2293    .end local v11    # "se$iterator":Ljava/util/Iterator;
label_cond_164:
	return 0x0;

}
// .method public needSignatureFile(Ljava/lang/String;)Z
bool sun::security::util::SignatureFileVerifier::needSignatureFile(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	return this->name->equalsIgnoreCase(name);

}
// .method public needSignatureFileBytes()Z
bool sun::security::util::SignatureFileVerifier::needSignatureFileBytes()
{
	
	bool cVar0;
	
	if ( this->sfBytes )     
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public process(Ljava/util/Hashtable;Ljava/util/List;)V
void sun::security::util::SignatureFileVerifier::process(std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> signers,std::shared_ptr<java::util::List<java::lang::Object>> manifestDigests)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2338        value = {
	// 2339            "(",
	// 2340            "Ljava/util/Hashtable",
	// 2341            "<",
	// 2342            "Ljava/lang/String;",
	// 2343            "[",
	// 2344            "Ljava/security/CodeSigner;",
	// 2345            ">;",
	// 2346            "Ljava/util/List",
	// 2347            "<",
	// 2348            "Ljava/lang/Object;",
	// 2349            ">;)V"
	// 2350        }
	// 2351    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2354        value = {
	// 2355            Ljava/io/IOException;,
	// 2356            Ljava/security/SignatureException;,
	// 2357            Ljava/security/NoSuchAlgorithmException;,
	// 2358            Ljava/util/jar/JarException;,
	// 2359            Ljava/security/cert/CertificateException;
	// 2360        }
	// 2361    .end annotation
	//    .local p1, "signers":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;[Ljava/security/CodeSigner;>;"
	//    .local p2, "manifestDigests":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	//    .local v0, "obj":Ljava/lang/Object;
	try {
	//label_try_start_1:
	this->processImpl(signers, manifestDigests);
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_c;
	}
	//    .catchall {:try_start_1 .. :try_end_8} :catchall_c
	sun::security::jca::Providers::stopJarVerification(sun::security::jca::Providers::startJarVerification({const[class].FS-Param}));
	return;
	// 2387    .line 269
	// 2388    .end local v0    # "obj":Ljava/lang/Object;
label_catchall_c:
	// move-exception
	
	sun::security::jca::Providers::stopJarVerification(0x0);
	// throw
	throw;

}
// .method public setSignatureFile([B)V
void sun::security::util::SignatureFileVerifier::setSignatureFile(std::shared_ptr<unsigned char[]> sfBytes)
{
	
	//    .param p1, "sfBytes"    # [B
	this->sfBytes = sfBytes;
	return;

}
// .method updateSigners([Ljava/security/CodeSigner;Ljava/util/Hashtable;Ljava/lang/String;)V
void sun::security::util::SignatureFileVerifier::updateSigners(std::shared_ptr<std::vector<java::security::CodeSigner>> newSigners,std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> signers,std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	std::shared_ptr<std::vector<java::security::CodeSigner>> oldSigners;
	int i;
	std::shared_ptr<std::vector<java::security::CodeSigner>> cachedSigners;
	std::shared_ptr<java::lang::Object> cachedSigners;
	std::shared<std::vector<std::vector<java::security::CodeSigner>>> cachedSigners;
	
	//    .param p1, "newSigners"    # [Ljava/security/CodeSigner;
	//    .param p3, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2416        value = {
	// 2417            "([",
	// 2418            "Ljava/security/CodeSigner;",
	// 2419            "Ljava/util/Hashtable",
	// 2420            "<",
	// 2421            "Ljava/lang/String;",
	// 2422            "[",
	// 2423            "Ljava/security/CodeSigner;",
	// 2424            ">;",
	// 2425            "Ljava/lang/String;",
	// 2426            ")V"
	// 2427        }
	// 2428    .end annotation
	//    .local p2, "signers":Ljava/util/Hashtable;, "Ljava/util/Hashtable<Ljava/lang/String;[Ljava/security/CodeSigner;>;"
	cVar0 = 0x0;
	oldSigners = signers->get(name);
	oldSigners->checkCast("std::vector<java::security::CodeSigner>");
	//    .local v2, "oldSigners":[Ljava/security/CodeSigner;
	i = ( this->signerCache->size() + -0x1);
	//    .local v1, "i":I
label_goto_f:
	if ( i == -0x1 )
		goto label_cond_27;
	cachedSigners = this->signerCache->get(i);
	cachedSigners->checkCast("std::vector<java::security::CodeSigner>");
	//    .local v0, "cachedSigners":[Ljava/security/CodeSigner;
	if ( !(sun::security::util::SignatureFileVerifier::matches(cachedSigners, oldSigners, newSigners)) )  
		goto label_cond_24;
	signers->put(name, cachedSigners);
	return;
	// 2480    .line 665
label_cond_24:
	i = ( i + -0x1);
	goto label_goto_f;
	// 2486    .line 673
	// 2487    .end local v0    # "cachedSigners":[Ljava/security/CodeSigner;
label_cond_27:
	if ( oldSigners )     
		goto label_cond_33;
	cachedSigners = newSigners;
	//    .restart local v0    # "cachedSigners":[Ljava/security/CodeSigner;
label_goto_2a:
	this->signerCache->add(cachedSigners);
	signers->put(name, cachedSigners);
	return;
	// 2507    .line 677
	// 2508    .end local v0    # "cachedSigners":[Ljava/security/CodeSigner;
label_cond_33:
	cachedSigners = std::make_shared<std::vector<std::vector<java::security::CodeSigner>>>((oldSigners->size() +  newSigners->size()));
	//    .restart local v0    # "cachedSigners":[Ljava/security/CodeSigner;
	java::lang::System::arraycopy(oldSigners, cVar0, cachedSigners, cVar0, oldSigners->size());
	java::lang::System::arraycopy(newSigners, cVar0, cachedSigners, oldSigners->size(), newSigners->size());
	goto label_goto_2a;

}


