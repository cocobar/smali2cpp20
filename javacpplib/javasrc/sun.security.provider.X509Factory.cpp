// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\X509Factory.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.provider.X509Factory.h"
#include "sun.security.util.Cache_S_EqualByteArray.h"
#include "sun.security.util.Cache.h"
#include "sun.security.x509.X509CRLImpl.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::X509Factory::ENC_MAX_LENGTH = 0x400000;
static sun::security::provider::X509Factory::certCache;
static sun::security::provider::X509Factory::crlCache;
// .method static constructor <clinit>()V
void sun::security::provider::X509Factory::static_cinit()
{
	
	int cVar0;
	
	cVar0 = 0x2ee;
	sun::security::provider::X509Factory::certCache = sun::security::util::Cache::newSoftMemoryCache(cVar0);
	sun::security::provider::X509Factory::crlCache = sun::security::util::Cache::newSoftMemoryCache(cVar0);
	return;

}
// .method public constructor <init>()V
sun::security::provider::X509Factory::X509Factory()
{
	
	// 066    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static declared-synchronized addToCache(Lsun/security/util/Cache;[BLjava/lang/Object;)V
template <typename V>
void sun::security::provider::X509Factory::addToCache(std::shared_ptr<sun::security::util::Cache<java::lang::Object,V>> cache,std::shared_ptr<unsigned char[]> encoding,std::shared_ptr<V> value)
{
	
	std::shared_ptr<sun::security::provider::X509Factory> cVar0;
	std::shared_ptr<sun::security::util::Cache_S_EqualByteArray> key;
	
	//    .param p1, "encoding"    # [B
	//    .annotation system Ldalvik/annotation/Signature;
	// 075        value = {
	// 076            "<V:",
	// 077            "Ljava/lang/Object;",
	// 078            ">(",
	// 079            "Lsun/security/util/Cache",
	// 080            "<",
	// 081            "Ljava/lang/Object;",
	// 082            "TV;>;[BTV;)V"
	// 083        }
	// 084    .end annotation
	//    .local p0, "cache":Lsun/security/util/Cache;, "Lsun/security/util/Cache<Ljava/lang/Object;TV;>;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	cVar0 = sun::security::provider::X509Factory();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_14;
	}
	//    .catchall {:try_start_3 .. :try_end_4} :catchall_14
	if ( encoding->size() <= 0x400000 )
		goto label_cond_a;
	cVar0->monitor_exit();
	return;
	// 108    .line 230
label_cond_a:
	try {
	//label_try_start_a:
	key = std::make_shared<sun::security::util::Cache_S_EqualByteArray>(encoding);
	//    .local v0, "key":Ljava/lang/Object;
	cache->put(key, value);
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_14;
	}
	//    .catchall {:try_start_a .. :try_end_12} :catchall_14
	cVar0->monitor_exit();
	return;
	// 126    .end local v0    # "key":Ljava/lang/Object;
label_catchall_14:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private static declared-synchronized getFromCache(Lsun/security/util/Cache;[B)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::security::provider::X509Factory::getFromCache(std::shared_ptr<sun::security::util::Cache<K,V>> cache,std::shared_ptr<unsigned char[]> encoding)
{
	
	std::shared_ptr<sun::security::provider::X509Factory> cVar0;
	std::shared_ptr<sun::security::util::Cache_S_EqualByteArray> key;
	
	//    .param p1, "encoding"    # [B
	//    .annotation system Ldalvik/annotation/Signature;
	// 139        value = {
	// 140            "<K:",
	// 141            "Ljava/lang/Object;",
	// 142            "V:",
	// 143            "Ljava/lang/Object;",
	// 144            ">(",
	// 145            "Lsun/security/util/Cache",
	// 146            "<TK;TV;>;[B)TV;"
	// 147        }
	// 148    .end annotation
	//    .local p0, "cache":Lsun/security/util/Cache;, "Lsun/security/util/Cache<TK;TV;>;"
	cVar0 = sun::security::provider::X509Factory();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	key = std::make_shared<sun::security::util::Cache_S_EqualByteArray>(encoding);
	//    .local v0, "key":Ljava/lang/Object;
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_e;
	}
	//    .catchall {:try_start_3 .. :try_end_b} :catchall_e
	cVar0->monitor_exit();
	return cache->get(key);
	// 174    .end local v0    # "key":Ljava/lang/Object;
label_catchall_e:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static declared-synchronized intern(Ljava/security/cert/X509CRL;)Lsun/security/x509/X509CRLImpl;
std::shared_ptr<sun::security::x509::X509CRLImpl> sun::security::provider::X509Factory::intern(std::shared_ptr<java::security::cert::X509CRL> c)
{
	
	std::shared_ptr<sun::security::provider::X509Factory> cVar0;
	bool isImpl;
	std::shared_ptr<sun::security::x509::X509CRLImpl> cVar1;
	std::shared_ptr<unsigned char[]> encoding;
	std::shared_ptr<sun::security::x509::X509CRLImpl> newC;
	std::shared_ptr<sun::security::x509::X509CRLImpl> cVar2;
	std::shared_ptr<java::lang::Object> newC;
	
	//    .param p0, "c"    # Ljava/security/cert/X509CRL;
	//    .annotation system Ldalvik/annotation/Throws;
	// 187        value = {
	// 188            Ljava/security/cert/CRLException;
	// 189        }
	// 190    .end annotation
	cVar0 = sun::security::provider::X509Factory();
	cVar0->monitor_enter();
	if ( c )     
		goto label_cond_8;
	cVar0->monitor_exit();
	return 0x0;
	// 207    .line 192
label_cond_8:
	try {
	//label_try_start_8:
	isImpl = c->instanceOf("sun::security::x509::X509CRLImpl");
	//    .local v2, "isImpl":Z
	if ( !(isImpl) )  
		goto label_cond_20;
	cVar1 = c;
	cVar1->checkCast("sun::security::x509::X509CRLImpl");
	encoding = cVar1->getEncodedInternal();
	//    .local v1, "encoding":[B
label_goto_14:
	newC = sun::security::provider::X509Factory::getFromCache(sun::security::provider::X509Factory::crlCache, encoding);
	newC->checkCast("sun::security::x509::X509CRLImpl");
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_8 .. :try_end_1c} :catchall_3c
	//    .local v3, "newC":Lsun/security/x509/X509CRLImpl;
	if ( !(newC) )  
		goto label_cond_25;
	cVar0->monitor_exit();
	return newC;
	// 249    .line 197
	// 250    .end local v1    # "encoding":[B
	// 251    .end local v3    # "newC":Lsun/security/x509/X509CRLImpl;
label_cond_20:
	try {
	//label_try_start_20:
	encoding = c->getEncoded();
	//    .restart local v1    # "encoding":[B
	goto label_goto_14;
	// 261    .line 203
	// 262    .restart local v3    # "newC":Lsun/security/x509/X509CRLImpl;
label_cond_25:
	if ( !(isImpl) )  
		goto label_cond_32;
	cVar2 = c;
	cVar2->checkCast("sun::security::x509::X509CRLImpl");
	newC = cVar2;
label_goto_2b:
	sun::security::provider::X509Factory::addToCache(sun::security::provider::X509Factory::crlCache, encoding, newC);
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_20 .. :try_end_30} :catchall_3c
	cVar0->monitor_exit();
	return newC;
	// 286    .line 206
label_cond_32:
	try {
	//label_try_start_32:
	//    .end local v3    # "newC":Lsun/security/x509/X509CRLImpl;
	newC = std::make_shared<sun::security::x509::X509CRLImpl>(encoding);
	//    .restart local v3    # "newC":Lsun/security/x509/X509CRLImpl;
	//label_try_end_3a:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_32 .. :try_end_3a} :catchall_3c
	encoding = newC->getEncodedInternal();
	goto label_goto_2b;
	// 304    .end local v1    # "encoding":[B
	// 305    .end local v2    # "isImpl":Z
	// 306    .end local v3    # "newC":Lsun/security/x509/X509CRLImpl;
label_catchall_3c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static declared-synchronized intern(Ljava/security/cert/X509Certificate;)Lsun/security/x509/X509CertImpl;
std::shared_ptr<sun::security::x509::X509CertImpl> sun::security::provider::X509Factory::intern(std::shared_ptr<java::security::cert::X509Certificate> c)
{
	
	std::shared_ptr<sun::security::provider::X509Factory> cVar0;
	bool isImpl;
	std::shared_ptr<sun::security::x509::X509CertImpl> cVar1;
	std::shared_ptr<unsigned char[]> encoding;
	std::shared_ptr<sun::security::x509::X509CertImpl> newC;
	std::shared_ptr<sun::security::x509::X509CertImpl> cVar2;
	std::shared_ptr<java::lang::Object> newC;
	
	//    .param p0, "c"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 319        value = {
	// 320            Ljava/security/cert/CertificateException;
	// 321        }
	// 322    .end annotation
	cVar0 = sun::security::provider::X509Factory();
	cVar0->monitor_enter();
	if ( c )     
		goto label_cond_8;
	cVar0->monitor_exit();
	return 0x0;
	// 339    .line 156
label_cond_8:
	try {
	//label_try_start_8:
	isImpl = c->instanceOf("sun::security::x509::X509CertImpl");
	//    .local v2, "isImpl":Z
	if ( !(isImpl) )  
		goto label_cond_20;
	cVar1 = c;
	cVar1->checkCast("sun::security::x509::X509CertImpl");
	encoding = cVar1->getEncodedInternal();
	//    .local v1, "encoding":[B
label_goto_14:
	newC = sun::security::provider::X509Factory::getFromCache(sun::security::provider::X509Factory::certCache, encoding);
	newC->checkCast("sun::security::x509::X509CertImpl");
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_8 .. :try_end_1c} :catchall_3c
	//    .local v3, "newC":Lsun/security/x509/X509CertImpl;
	if ( !(newC) )  
		goto label_cond_25;
	cVar0->monitor_exit();
	return newC;
	// 381    .line 161
	// 382    .end local v1    # "encoding":[B
	// 383    .end local v3    # "newC":Lsun/security/x509/X509CertImpl;
label_cond_20:
	try {
	//label_try_start_20:
	encoding = c->getEncoded();
	//    .restart local v1    # "encoding":[B
	goto label_goto_14;
	// 393    .line 167
	// 394    .restart local v3    # "newC":Lsun/security/x509/X509CertImpl;
label_cond_25:
	if ( !(isImpl) )  
		goto label_cond_32;
	cVar2 = c;
	cVar2->checkCast("sun::security::x509::X509CertImpl");
	newC = cVar2;
label_goto_2b:
	sun::security::provider::X509Factory::addToCache(sun::security::provider::X509Factory::certCache, encoding, newC);
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_20 .. :try_end_30} :catchall_3c
	cVar0->monitor_exit();
	return newC;
	// 418    .line 170
label_cond_32:
	try {
	//label_try_start_32:
	//    .end local v3    # "newC":Lsun/security/x509/X509CertImpl;
	newC = std::make_shared<sun::security::x509::X509CertImpl>(encoding);
	//    .restart local v3    # "newC":Lsun/security/x509/X509CertImpl;
	//label_try_end_3a:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_32 .. :try_end_3a} :catchall_3c
	encoding = newC->getEncodedInternal();
	goto label_goto_2b;
	// 436    .end local v1    # "encoding":[B
	// 437    .end local v2    # "isImpl":Z
	// 438    .end local v3    # "newC":Lsun/security/x509/X509CertImpl;
label_catchall_3c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}


