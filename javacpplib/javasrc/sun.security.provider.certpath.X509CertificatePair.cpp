// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\X509CertificatePair.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.GeneralSecurityException.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertificateEncodingException.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.X509Certificate.h"
#include "java.security.interfaces.DSAParams.h"
#include "java.security.interfaces.DSAPublicKey.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.X509Factory.h"
#include "sun.security.provider.certpath.X509CertificatePair.h"
#include "sun.security.util.Cache_S_EqualByteArray.h"
#include "sun.security.util.Cache.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::X509CertificatePair::TAG_FORWARD = 0x0t;
static sun::security::provider::certpath::X509CertificatePair::TAG_REVERSE = 0x1t;
static sun::security::provider::certpath::X509CertificatePair::cache;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::X509CertificatePair::static_cinit()
{
	
	sun::security::provider::certpath::X509CertificatePair::cache = sun::security::util::Cache::newSoftMemoryCache(0x2ee);
	return;

}
// .method public constructor <init>()V
sun::security::provider::certpath::X509CertificatePair::X509CertificatePair()
{
	
	// 056    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/security/cert/X509Certificate;Ljava/security/cert/X509Certificate;)V
sun::security::provider::certpath::X509CertificatePair::X509CertificatePair(std::shared_ptr<java::security::cert::X509Certificate> forward,std::shared_ptr<java::security::cert::X509Certificate> reverse)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	
	//    .param p1, "forward"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "reverse"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 066        value = {
	// 067            Ljava/security/cert/CertificateException;
	// 068        }
	// 069    .end annotation
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( forward )     
		goto label_cond_10;
	if ( reverse )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("at least one of certificate pair must be non-null")));
	// throw
	throw cVar0;
	// 089    .line 107
label_cond_10:
	this->forward = forward;
	this->reverse = reverse;
	this->checkPair();
	return;

}
// .method private constructor <init>([B)V
sun::security::provider::certpath::X509CertificatePair::X509CertificatePair(std::shared_ptr<unsigned char[]> encoded)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	std::shared_ptr<sun::security::util::DerValue> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "encoded"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 107        value = {
	// 108            Ljava/security/cert/CertificateException;
	// 109        }
	// 110    .end annotation
	// 114    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<sun::security::util::DerValue>(encoded);
	this->parse(cVar0);
	this->encoded = encoded;
	//label_try_end_d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	//    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_d} :catch_11
	this->checkPair();
	return;
	// 135    .line 122
label_catch_11:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::security::cert::CertificateException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar1;

}
// .method private checkPair()V
void sun::security::provider::certpath::X509CertificatePair::checkPair()
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::security::cert::CertificateException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::security::interfaces::DSAPublicKey> pk;
	std::shared_ptr<java::security::interfaces::DSAPublicKey> cVar1;
	std::shared_ptr<java::security::interfaces::DSAPublicKey> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 155        value = {
	// 156            Ljava/security/cert/CertificateException;
	// 157        }
	// 158    .end annotation
	if ( !(this->forward) )  
		goto label_cond_8;
	if ( this->reverse )     
		goto label_cond_9;
label_cond_8:
	return;
	// 174    .line 304
label_cond_9:
	//    .local v3, "fwSubject":Ljavax/security/auth/x500/X500Principal;
	//    .local v2, "fwIssuer":Ljavax/security/auth/x500/X500Principal;
	//    .local v6, "rvSubject":Ljavax/security/auth/x500/X500Principal;
	//    .local v5, "rvIssuer":Ljavax/security/auth/x500/X500Principal;
	if ( !(this->forward->getIssuerX500Principal()->equals(this->reverse->getSubjectX500Principal())) )  
		goto label_cond_2f;
	if ( !(( this->reverse->getIssuerX500Principal()->equals(this->forward->getSubjectX500Principal()) ^ 0x1)) )  
		goto label_cond_38;
label_cond_2f:
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject and issuer names in forward and reverse certificates do not match")));
	// throw
	throw cVar0;
	// 232    .line 315
label_cond_38:
	try {
	//label_try_start_38:
	pk = this->reverse->getPublicKey();
	//    .local v4, "pk":Ljava/security/PublicKey;
	if ( !(pk->instanceOf("java::security::interfaces::DSAPublicKey")) )  
		goto label_cond_4c;
	cVar1 = pk;
	cVar1->checkCast("java::security::interfaces::DSAPublicKey");
	if ( !(cVar1->getParams()) )  
		goto label_cond_51;
label_cond_4c:
	this->forward->verify(pk);
label_cond_51:
	pk = this->forward->getPublicKey();
	if ( !(pk->instanceOf("java::security::interfaces::DSAPublicKey")) )  
		goto label_cond_65;
	cVar2 = pk;
	cVar2->checkCast("java::security::interfaces::DSAPublicKey");
	if ( !(cVar2->getParams()) )  
		goto label_cond_6a;
label_cond_65:
	this->reverse->verify(pk);
	//label_try_end_6a:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6b;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_38 .. :try_end_6a} :catch_6b
label_cond_6a:
	return;
	// 304    .line 325
	// 305    .end local v4    # "pk":Ljava/security/PublicKey;
label_catch_6b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/GeneralSecurityException;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar3 = std::make_shared<java::security::cert::CertificateException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid signature: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar3;

}
// .method public static declared-synchronized clearCache()V
void sun::security::provider::certpath::X509CertificatePair::clearCache()
{
	
	std::shared_ptr<sun::security::provider::certpath::X509CertificatePair> cVar0;
	
	cVar0 = sun::security::provider::certpath::X509CertificatePair();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	sun::security::provider::certpath::X509CertificatePair::cache->clear();
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_3 .. :try_end_8} :catchall_a
	cVar0->monitor_exit();
	return;
label_catchall_a:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private emit(Lsun/security/util/DerOutputStream;)V
void sun::security::provider::certpath::X509CertificatePair::emit(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	unsigned char cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> tagged;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerValue> cVar2;
	std::shared_ptr<sun::security::util::DerValue> cVar3;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 375        value = {
	// 376            Ljava/io/IOException;,
	// 377            Ljava/security/cert/CertificateEncodingException;
	// 378        }
	// 379    .end annotation
	cVar0 = -0x80;
	cVar1 = 0x1;
	tagged = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tagged":Lsun/security/util/DerOutputStream;
	if ( !(this->forward) )  
		goto label_cond_27;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	cVar2 = std::make_shared<sun::security::util::DerValue>(this->forward->getEncoded());
	tmp->putDerValue(cVar2);
	tagged->write(sun::security::util::DerValue::createTag(cVar0, cVar1, 0x0), tmp);
	//    .end local v1    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_27:
	if ( !(this->reverse) )  
		goto label_cond_45;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v1    # "tmp":Lsun/security/util/DerOutputStream;
	cVar3 = std::make_shared<sun::security::util::DerValue>(this->reverse->getEncoded());
	tmp->putDerValue(cVar3);
	tagged->write(sun::security::util::DerValue::createTag(cVar0, cVar1, cVar1), tmp);
	//    .end local v1    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_45:
	out->write(0x30, tagged);
	return;

}
// .method public static declared-synchronized generateCertificatePair([B)Lsun/security/provider/certpath/X509CertificatePair;
std::shared_ptr<sun::security::provider::certpath::X509CertificatePair> sun::security::provider::certpath::X509CertificatePair::generateCertificatePair(std::shared_ptr<unsigned char[]> encoded)
{
	
	std::shared_ptr<sun::security::provider::certpath::X509CertificatePair> cVar0;
	std::shared_ptr<sun::security::util::Cache_S_EqualByteArray> key;
	std::shared_ptr<sun::security::provider::certpath::X509CertificatePair> pair;
	
	//    .param p0, "encoded"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 474        value = {
	// 475            Ljava/security/cert/CertificateException;
	// 476        }
	// 477    .end annotation
	cVar0 = sun::security::provider::certpath::X509CertificatePair();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	key = std::make_shared<sun::security::util::Cache_S_EqualByteArray>(encoded);
	//    .local v0, "key":Ljava/lang/Object;
	pair = sun::security::provider::certpath::X509CertificatePair::cache->get(key);
	pair->checkCast("sun::security::provider::certpath::X509CertificatePair");
	//label_try_end_10:
	}
	catch (...){
		goto label_catchall_27;
	}
	//    .catchall {:try_start_3 .. :try_end_10} :catchall_27
	//    .local v1, "pair":Lsun/security/provider/certpath/X509CertificatePair;
	if ( !(pair) )  
		goto label_cond_14;
	cVar0->monitor_exit();
	return pair;
	// 511    .line 146
label_cond_14:
	try {
	//label_try_start_14:
	//    .end local v1    # "pair":Lsun/security/provider/certpath/X509CertificatePair;
	pair = std::make_shared<sun::security::provider::certpath::X509CertificatePair>(encoded);
	//    .restart local v1    # "pair":Lsun/security/provider/certpath/X509CertificatePair;
	//    .end local v0    # "key":Ljava/lang/Object;
	key = std::make_shared<sun::security::util::Cache_S_EqualByteArray>(pair->encoded);
	//    .restart local v0    # "key":Ljava/lang/Object;
	sun::security::provider::certpath::X509CertificatePair::cache->put(key, pair);
	//label_try_end_25:
	}
	catch (...){
		goto label_catchall_27;
	}
	//    .catchall {:try_start_14 .. :try_end_25} :catchall_27
	cVar0->monitor_exit();
	return pair;
	// 541    .end local v0    # "key":Ljava/lang/Object;
	// 542    .end local v1    # "pair":Lsun/security/provider/certpath/X509CertificatePair;
label_catchall_27:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private parse(Lsun/security/util/DerValue;)V
void sun::security::provider::certpath::X509CertificatePair::parse(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::security::util::DerInputStream> opt;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<sun::security::x509::X509CertImpl> cVar1;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<sun::security::x509::X509CertImpl> cVar5;
	std::shared_ptr<java::security::cert::CertificateException> cVar6;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 555        value = {
	// 556            Ljava/io/IOException;,
	// 557            Ljava/security/cert/CertificateException;
	// 558        }
	// 559    .end annotation
	if ( val->tag == 0x30 )
		goto label_cond_24;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Sequence tag missing for X509CertificatePair")));
	// throw
	throw cVar0;
	// 580    .line 241
	// 581    .local v0, "opt":Lsun/security/util/DerValue;
	// 582    .local v1, "tag":S
label_cond_f:
	cVar1 = std::make_shared<sun::security::x509::X509CertImpl>(opt->data->getDerValue()->toByteArray());
	this->forward = sun::security::provider::X509Factory::intern(cVar1);
	//    .end local v0    # "opt":Lsun/security/util/DerValue;
	//    .end local v1    # "tag":S
label_cond_24:
label_goto_24:
	if ( !(val->data) )  
		goto label_cond_90;
	if ( !(val->data->available()) )  
		goto label_cond_90;
	opt = val->data->getDerValue();
	//    .restart local v0    # "opt":Lsun/security/util/DerValue;
	//    .restart local v1    # "tag":S
	// switch
	{
	auto item = ( (short)((unsigned char)(( opt->tag & 0x1f))) );
	if (item == 0) goto label_pswitch_48;
	if (item == 1) goto label_pswitch_61;
	}
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of X509CertificatePair")));
	// throw
	throw cVar2;
	// 653    .line 236
label_pswitch_48:
	if ( !(opt->isContextSpecific()) )  
		goto label_cond_24;
	if ( !(opt->isConstructed()) )  
		goto label_cond_24;
	if ( !(this->forward) )  
		goto label_cond_f;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate forward certificate in X509CertificatePair")));
	// throw
	throw cVar3;
	// 681    .line 247
label_pswitch_61:
	if ( !(opt->isContextSpecific()) )  
		goto label_cond_24;
	if ( !(opt->isConstructed()) )  
		goto label_cond_24;
	if ( !(this->reverse) )  
		goto label_cond_7a;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate reverse certificate in X509CertificatePair")));
	// throw
	throw cVar4;
	// 709    .line 252
label_cond_7a:
	cVar5 = std::make_shared<sun::security::x509::X509CertImpl>(opt->data->getDerValue()->toByteArray());
	this->reverse = sun::security::provider::X509Factory::intern(cVar5);
	goto label_goto_24;
	// 735    .line 262
	// 736    .end local v0    # "opt":Lsun/security/util/DerValue;
	// 737    .end local v1    # "tag":S
label_cond_90:
	if ( this->forward )     
		goto label_cond_a1;
	if ( this->reverse )     
		goto label_cond_a1;
	cVar6 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("at least one of certificate pair must be non-null")));
	// throw
	throw cVar6;
	// 756    .line 266
label_cond_a1:
	return;
	// 760    .line 234
	// 761    :pswitch_data_a2
	// 762    .packed-switch 0x0
	// 763        :pswitch_48
	// 764        :pswitch_61
	// 765    .end packed-switch

}
// .method public getEncoded()[B
unsigned char sun::security::provider::certpath::X509CertificatePair::getEncoded()
{
	
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar0;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 773        value = {
	// 774            Ljava/security/cert/CertificateEncodingException;
	// 775        }
	// 776    .end annotation
	try {
	//label_try_start_0:
	if ( this->encoded )     
		goto label_cond_12;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	this->emit(tmp);
	this->encoded = tmp->toByteArray();
	//label_try_end_12:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_12} :catch_15
	//    .end local v1    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_12:
	return this->encoded;
	// 810    .line 199
label_catch_15:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<java::security::cert::CertificateEncodingException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar0;

}
// .method public getForward()Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::provider::certpath::X509CertificatePair::getForward()
{
	
	return this->forward;

}
// .method public getReverse()Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::provider::certpath::X509CertificatePair::getReverse()
{
	
	return this->reverse;

}
// .method public setForward(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::X509CertificatePair::setForward(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 851        value = {
	// 852            Ljava/security/cert/CertificateException;
	// 853        }
	// 854    .end annotation
	this->checkPair();
	this->forward = cert;
	return;

}
// .method public setReverse(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::X509CertificatePair::setReverse(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 871        value = {
	// 872            Ljava/security/cert/CertificateException;
	// 873        }
	// 874    .end annotation
	this->checkPair();
	this->reverse = cert;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::X509CertificatePair::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509 Certificate Pair: [\n")));
	if ( !(this->forward) )  
		goto label_cond_22;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Forward: ")))->append(this->forward)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_22:
	if ( !(this->reverse) )  
		goto label_cond_39;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Reverse: ")))->append(this->reverse)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_39:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")));
	return sb->toString();

}


