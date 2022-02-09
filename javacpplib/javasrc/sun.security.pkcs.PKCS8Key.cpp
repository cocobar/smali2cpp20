// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS8Key.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.InstantiationException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.math.BigInteger.h"
#include "java.security.InvalidKeyException.h"
#include "java.security.Key.h"
#include "java.security.KeyFactory.h"
#include "java.security.KeyRep_S_Type.h"
#include "java.security.KeyRep.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.PrivateKey.h"
#include "java.security.Provider.h"
#include "java.security.Security.h"
#include "java.security.spec.InvalidKeySpecException.h"
#include "java.security.spec.PKCS8EncodedKeySpec.h"
#include "sun.security.pkcs.PKCS8Key.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AlgorithmId.h"

static sun::security::pkcs::PKCS8Key::serialVersionUID = -0x353f5f37736abd94L;
static sun::security::pkcs::PKCS8Key::version;
// .method static constructor <clinit>()V
void sun::security::pkcs::PKCS8Key::static_cinit()
{
	
	sun::security::pkcs::PKCS8Key::version = java::math::BigInteger::ZERO;
	return;

}
// .method public constructor <init>()V
sun::security::pkcs::PKCS8Key::PKCS8Key()
{
	
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private constructor <init>(Lsun/security/x509/AlgorithmId;[B)V
sun::security::pkcs::PKCS8Key::PKCS8Key(std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<unsigned char[]> key)
{
	
	//    .param p1, "algid"    # Lsun/security/x509/AlgorithmId;
	//    .param p2, "key"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 052        value = {
	// 053            Ljava/security/InvalidKeyException;
	// 054        }
	// 055    .end annotation
	// 059    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->algid = algid;
	this->key = key;
	this->encode();
	return;

}
// .method static buildPKCS8Key(Lsun/security/x509/AlgorithmId;[B)Ljava/security/PrivateKey;
std::shared_ptr<java::security::PrivateKey> sun::security::pkcs::PKCS8Key::buildPKCS8Key(std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<unsigned char[]> key)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> pkcs8EncodedKeyStream;
	std::shared_ptr<java::security::spec::PKCS8EncodedKeySpec> pkcs8KeySpec;
	std::shared_ptr<sun::security::pkcs::PKCS8Key> result;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::security::Provider> sunProvider;
	std::shared_ptr<java::lang::InstantiationException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> classname;
	std::shared_ptr<java::lang::InstantiationException> cVar2;
	int keyClass;
	std::shared_ptr<java::lang::ClassLoader> cl;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Class> keyClass;
	std::shared_ptr<sun::security::pkcs::PKCS8Key> inst;
	std::shared_ptr<sun::security::pkcs::PKCS8Key> cVar3;
	auto keyClass;
	
	//    .param p0, "algid"    # Lsun/security/x509/AlgorithmId;
	//    .param p1, "key"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 079        value = {
	// 080            Ljava/io/IOException;,
	// 081            Ljava/security/InvalidKeyException;
	// 082        }
	// 083    .end annotation
	pkcs8EncodedKeyStream = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v12, "pkcs8EncodedKeyStream":Lsun/security/util/DerOutputStream;
	sun::security::pkcs::PKCS8Key::encode(pkcs8EncodedKeyStream, algid, key);
	pkcs8KeySpec = std::make_shared<java::security::spec::PKCS8EncodedKeySpec>(pkcs8EncodedKeyStream->toByteArray());
	//    .local v13, "pkcs8KeySpec":Ljava/security/spec/PKCS8EncodedKeySpec;
	try {
	//label_try_start_17:
	//    .local v11, "keyFac":Ljava/security/KeyFactory;
	//label_try_end_22:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	catch (java::security::spec::InvalidKeySpecException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b7;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_17 .. :try_end_22} :catch_24
	//    .catch Ljava/security/spec/InvalidKeySpecException; {:try_start_17 .. :try_end_22} :catch_b7
	return java::security::KeyFactory::getInstance(algid->getName())->generatePrivate(pkcs8KeySpec);
	// 132    .line 187
	// 133    .end local v11    # "keyFac":Ljava/security/KeyFactory;
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_25:
	//    .local v3, "classname":Ljava/lang/String;
	try {
	//label_try_start_28:
	sunProvider = java::security::Security::getProvider(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUN")));
	//    .local v15, "sunProvider":Ljava/security/Provider;
	if ( sunProvider )     
		goto label_cond_46;
	cVar0 = std::make_shared<java::lang::InstantiationException>();
	// throw
	throw cVar0;
	// 160    :try_end_37
	// 161    .catch Ljava/lang/ClassNotFoundException; {:try_start_28 .. :try_end_37} :catch_37
	// 162    .catch Ljava/lang/InstantiationException; {:try_start_28 .. :try_end_37} :catch_6a
	// 163    .catch Ljava/lang/IllegalAccessException; {:try_start_28 .. :try_end_37} :catch_9a
	// 165    .line 233
	// 166    .end local v15    # "sunProvider":Ljava/security/Provider;
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_38:
label_goto_38:
	result = std::make_shared<sun::security::pkcs::PKCS8Key>();
	//    .local v14, "result":Lsun/security/pkcs/PKCS8Key;
	result->algid = algid;
	result->key = key;
	return result;
	// 191    .line 205
	// 192    .end local v14    # "result":Lsun/security/pkcs/PKCS8Key;
	// 193    .restart local v15    # "sunProvider":Ljava/security/Provider;
label_cond_46:
	try {
	//label_try_start_46:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	classname = sunProvider->getProperty(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PrivateKey.PKCS#8.")))->append(algid->getName())->toString());
	if ( classname )     
		goto label_cond_6c;
	cVar2 = std::make_shared<java::lang::InstantiationException>();
	// throw
	throw cVar2;
	// 233    :try_end_6a
	// 234    .catch Ljava/lang/ClassNotFoundException; {:try_start_46 .. :try_end_6a} :catch_37
	// 235    .catch Ljava/lang/InstantiationException; {:try_start_46 .. :try_end_6a} :catch_6a
	// 236    .catch Ljava/lang/IllegalAccessException; {:try_start_46 .. :try_end_6a} :catch_9a
	// 238    .line 234
	// 239    .end local v15    # "sunProvider":Ljava/security/Provider;
label_catch_6a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "e":Ljava/lang/InstantiationException;
	goto label_goto_38;
	// 246    .line 211
	// 247    .end local v6    # "e":Ljava/lang/InstantiationException;
	// 248    .restart local v15    # "sunProvider":Ljava/security/Provider;
label_cond_6c:
	keyClass = 0x0;
	//    .local v10, "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	try {
	//label_try_start_6d:
	//label_try_end_70:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8e;
	}
	catch (java::lang::InstantiationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6a;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_6d .. :try_end_70} :catch_8e
	//    .catch Ljava/lang/InstantiationException; {:try_start_6d .. :try_end_70} :catch_6a
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_6d .. :try_end_70} :catch_9a
	keyClass = java::lang::Class::forName(classname);
	//    .end local v10    # "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_71:
label_goto_71:
	//    .local v9, "inst":Ljava/lang/Object;
	if ( !(keyClass) )  
		goto label_cond_78;
	try {
	//label_try_start_74:
	inst = keyClass->newInstance();
	//    .end local v9    # "inst":Ljava/lang/Object;
label_cond_78:
	if ( !(0x0->instanceOf("sun::security::pkcs::PKCS8Key")) )  
		goto label_cond_38;
	cVar3 = inst;
	cVar3->checkCast("sun::security::pkcs::PKCS8Key");
	result = cVar3;
	//    .restart local v14    # "result":Lsun/security/pkcs/PKCS8Key;
	result->algid = algid;
	result->key = key;
	result->parseKeyBits();
	return result;
	// 312    .line 214
	// 313    .end local v14    # "result":Lsun/security/pkcs/PKCS8Key;
	// 314    .restart local v10    # "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_catch_8e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/lang/ClassNotFoundException;
	cl = java::lang::ClassLoader::getSystemClassLoader({const[class].FS-Param});
	//    .local v2, "cl":Ljava/lang/ClassLoader;
	if ( !(cl) )  
		goto label_cond_71;
	//label_try_end_98:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	catch (java::lang::InstantiationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6a;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_74 .. :try_end_98} :catch_37
	//    .catch Ljava/lang/InstantiationException; {:try_start_74 .. :try_end_98} :catch_6a
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_74 .. :try_end_98} :catch_9a
	keyClass = cl->loadClass(classname);
	//    .local v10, "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	goto label_goto_71;
	// 340    .line 235
	// 341    .end local v2    # "cl":Ljava/lang/ClassLoader;
	// 342    .end local v4    # "e":Ljava/lang/ClassNotFoundException;
	// 343    .end local v10    # "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 344    .end local v15    # "sunProvider":Ljava/security/Provider;
label_catch_9a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "e":Ljava/lang/IllegalAccessException;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::io::IOException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" [internal error]")))->toString());
	// throw
	throw cVar4;
	// 376    .line 189
	// 377    .end local v3    # "classname":Ljava/lang/String;
	// 378    .end local v5    # "e":Ljava/lang/IllegalAccessException;
label_catch_b7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v8, "e":Ljava/security/spec/InvalidKeySpecException;
	goto label_goto_25;

}
// .method static encode(Lsun/security/util/DerOutputStream;Lsun/security/x509/AlgorithmId;[B)V
void sun::security::pkcs::PKCS8Key::encode(std::shared_ptr<sun::security::util::DerOutputStream> out,std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<unsigned char[]> key)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p0, "out"    # Lsun/security/util/DerOutputStream;
	//    .param p1, "algid"    # Lsun/security/x509/AlgorithmId;
	//    .param p2, "key"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 392        value = {
	// 393            Ljava/io/IOException;
	// 394        }
	// 395    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	tmp->putInteger(sun::security::pkcs::PKCS8Key::version);
	algid->encode(tmp);
	tmp->putOctetString(key);
	out->write(0x30, tmp);
	return;

}
// .method public static parse(Lsun/security/util/DerValue;)Lsun/security/pkcs/PKCS8Key;
std::shared_ptr<sun::security::pkcs::PKCS8Key> sun::security::pkcs::PKCS8Key::parse(std::shared_ptr<sun::security::util::DerValue> in)
{
	
	std::shared_ptr<sun::security::pkcs::PKCS8Key> key;
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p0, "in"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 428        value = {
	// 429            Ljava/io/IOException;
	// 430        }
	// 431    .end annotation
	key = sun::security::pkcs::PKCS8Key::parseKey(in);
	//    .local v0, "key":Ljava/security/PrivateKey;
	if ( !(key->instanceOf("sun::security::pkcs::PKCS8Key")) )  
		goto label_cond_b;
	key->checkCast("sun::security::pkcs::PKCS8Key");
	//    .end local v0    # "key":Ljava/security/PrivateKey;
	return key;
	// 451    .line 98
	// 452    .restart local v0    # "key":Ljava/security/PrivateKey;
label_cond_b:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Provider did not return PKCS8Key")));
	// throw
	throw cVar0;

}
// .method public static parseKey(Lsun/security/util/DerValue;)Ljava/security/PrivateKey;
std::shared_ptr<java::security::PrivateKey> sun::security::pkcs::PKCS8Key::parseKey(std::shared_ptr<sun::security::util::DerValue> in)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::Object> parsedVersion;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::io::IOException> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::IOException> cVar3;
	
	//    .param p0, "in"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 467        value = {
	// 468            Ljava/io/IOException;
	// 469        }
	// 470    .end annotation
	if ( in->tag == 0x30 )
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("corrupt private key")));
	// throw
	throw cVar0;
	// 489    .line 123
label_cond_f:
	parsedVersion = in->data->getBigInteger();
	//    .local v2, "parsedVersion":Ljava/math/BigInteger;
	if ( sun::security::pkcs::PKCS8Key::version->equals(parsedVersion) )     
		goto label_cond_4c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("version mismatch: (supported: ")))->append(sun::security::util::Debug::toHexString(sun::security::pkcs::PKCS8Key::version))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", parsed: ")))->append(sun::security::util::Debug::toHexString(parsedVersion))->toString());
	// throw
	throw cVar1;
	// 558    .line 131
label_cond_4c:
	//    .local v0, "algorithm":Lsun/security/x509/AlgorithmId;
	try {
	//label_try_start_56:
	//label_try_end_5f:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_71;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_56 .. :try_end_5f} :catch_71
	//    .local v3, "privKey":Ljava/security/PrivateKey;
	if ( !(in->data->available()) )  
		goto label_cond_7b;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("excess private key")));
	// throw
	throw cVar3;
	// 604    .line 136
	// 605    .end local v3    # "privKey":Ljava/security/PrivateKey;
label_catch_71:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/InvalidKeyException;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("corrupt private key")));
	// throw
	throw cVar4;
	// 619    .line 142
	// 620    .end local v1    # "e":Ljava/security/InvalidKeyException;
	// 621    .restart local v3    # "privKey":Ljava/security/PrivateKey;
label_cond_7b:
	return sun::security::pkcs::PKCS8Key::buildPKCS8Key(sun::security::x509::AlgorithmId::parse(in->data->getDerValue()), in->data->getOctetString());

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void sun::security::pkcs::PKCS8Key::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	std::shared_ptr<java::security::InvalidKeyException> e;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 630        value = {
	// 631            Ljava/io/IOException;
	// 632        }
	// 633    .end annotation
	try {
	//label_try_start_0:
	this->decode(stream);
	//label_try_end_3:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_0 .. :try_end_3} :catch_4
	return;
	// 645    .line 376
label_catch_4:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/InvalidKeyException;
	e->printStackTrace();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("deserialized key is invalid: ")))->append(e->getMessage())->toString());
	// throw
	throw cVar0;

}
// .method public decode(Ljava/io/InputStream;)V
void sun::security::pkcs::PKCS8Key::decode(std::shared_ptr<java::io::InputStream> in)
{
	
	std::shared_ptr<java::security::InvalidKeyException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::security::InvalidKeyException> cVar0;
	std::shared_ptr<java::math::BigInteger> version;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 691        value = {
	// 692            Ljava/security/InvalidKeyException;
	// 693        }
	// 694    .end annotation
	try {
	//label_try_start_0:
	val = std::make_shared<sun::security::util::DerValue>(in);
	//    .local v1, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_33;
	cVar0 = std::make_shared<java::security::InvalidKeyException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid key format")));
	// throw
	throw cVar0;
	// 719    :try_end_14
	// 720    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_14} :catch_14
	// 722    .line 348
	// 723    .end local v1    # "val":Lsun/security/util/DerValue;
label_catch_14:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::security::InvalidKeyException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IOException : ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar1;
	// 759    .line 333
	// 760    .end local v0    # "e":Ljava/io/IOException;
	// 761    .restart local v1    # "val":Lsun/security/util/DerValue;
label_cond_33:
	try {
	//label_try_start_33:
	version = val->data->getBigInteger();
	//    .local v2, "version":Ljava/math/BigInteger;
	if ( version->equals(sun::security::pkcs::PKCS8Key::version) )     
		goto label_cond_70;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::io::IOException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("version mismatch: (supported: ")))->append(sun::security::util::Debug::toHexString(sun::security::pkcs::PKCS8Key::version))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", parsed: ")))->append(sun::security::util::Debug::toHexString(version))->toString());
	// throw
	throw cVar3;
	// 831    .line 340
label_cond_70:
	this->algid = sun::security::x509::AlgorithmId::parse(val->data->getDerValue());
	this->key = val->data->getOctetString();
	this->parseKeyBits();
	//label_try_end_8c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14;
	}
	//    .catch Ljava/io/IOException; {:try_start_33 .. :try_end_8c} :catch_14
	val->data->available();
	return;

}
// .method public decode([B)V
void sun::security::pkcs::PKCS8Key::decode(std::shared_ptr<unsigned char[]> encodedKey)
{
	
	std::shared_ptr<java::io::ByteArrayInputStream> cVar0;
	
	//    .param p1, "encodedKey"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 874        value = {
	// 875            Ljava/security/InvalidKeyException;
	// 876        }
	// 877    .end annotation
	cVar0 = std::make_shared<java::io::ByteArrayInputStream>(encodedKey);
	this->decode(cVar0);
	return;

}
// .method public final encode(Lsun/security/util/DerOutputStream;)V
void sun::security::pkcs::PKCS8Key::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 895        value = {
	// 896            Ljava/io/IOException;
	// 897        }
	// 898    .end annotation
	sun::security::pkcs::PKCS8Key::encode(out, this->algid, this->key);
	return;

}
// .method public encode()[B
unsigned char sun::security::pkcs::PKCS8Key::encode()
{
	
	std::shared_ptr<java::security::InvalidKeyException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 915        value = {
	// 916            Ljava/security/InvalidKeyException;
	// 917        }
	// 918    .end annotation
	if ( this->encodedKey )     
		goto label_cond_12;
	try {
	//label_try_start_4:
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "out":Lsun/security/util/DerOutputStream;
	this->encode(out);
	this->encodedKey = out->toByteArray();
	//label_try_end_12:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	//    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_12} :catch_1b
	//    .end local v1    # "out":Lsun/security/util/DerOutputStream;
label_cond_12:
	cVar0 = this->encodedKey->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;
	// 958    .line 299
label_catch_1b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::security::InvalidKeyException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IOException : ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar1;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::pkcs::PKCS8Key::equals(std::shared_ptr<java::lang::Object> object)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<unsigned char[]> b1;
	auto b2;
	int i;
	auto b1;
	
	//    .param p1, "object"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != object )
		goto label_cond_5;
	return cVar0;
	// 1010    .line 410
label_cond_5:
	if ( !(object->instanceOf("java::security::Key")) )  
		goto label_cond_2e;
	if ( !(this->encodedKey) )  
		goto label_cond_1a;
	b1 = this->encodedKey;
	//    .local v0, "b1":[B
label_goto_f:
	object->checkCast("java::security::Key");
	//    .end local p1    # "object":Ljava/lang/Object;
	b2 = object->getEncoded();
	//    .local v1, "b2":[B
	if ( b1->size() == b2->size() )
		goto label_cond_1f;
	return cVar1;
	// 1045    .line 417
	// 1046    .end local v0    # "b1":[B
	// 1047    .end local v1    # "b2":[B
	// 1048    .restart local p1    # "object":Ljava/lang/Object;
label_cond_1a:
	b1 = this->getEncoded();
	//    .restart local v0    # "b1":[B
	goto label_goto_f;
	// 1057    .line 427
	// 1058    .end local p1    # "object":Ljava/lang/Object;
	// 1059    .restart local v1    # "b2":[B
label_cond_1f:
	i = 0x0;
	//    .local v2, "i":I
label_goto_20:
	if ( i >= b1->size() )
		goto label_cond_2d;
	if ( b1[i] == b2[i] )
		goto label_cond_2a;
	return cVar1;
	// 1079    .line 427
label_cond_2a:
	i = ( i + 0x1);
	goto label_goto_20;
	// 1085    .line 432
label_cond_2d:
	return cVar0;
	// 1089    .line 435
	// 1090    .end local v0    # "b1":[B
	// 1091    .end local v1    # "b2":[B
	// 1092    .end local v2    # "i":I
	// 1093    .restart local p1    # "object":Ljava/lang/Object;
label_cond_2e:
	return cVar1;

}
// .method public getAlgorithm()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS8Key::getAlgorithm()
{
	
	return this->algid->getName();

}
// .method public getAlgorithmId()Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::pkcs::PKCS8Key::getAlgorithmId()
{
	
	return this->algid;

}
// .method public declared-synchronized getEncoded()[B
unsigned char sun::security::pkcs::PKCS8Key::getEncoded()
{
	
	std::shared_ptr<unsigned char[]> result;
	std::vector<std::any> tryCatchExcetionList;
	
	this->monitor_enter();
	result = 0x0;
	//    .local v1, "result":[B
	try {
	//label_try_start_2:
	//label_try_end_5:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8;
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_2 .. :try_end_5} :catch_8
	//    .catchall {:try_start_2 .. :try_end_5} :catchall_a
	result = this->encode();
	//    .end local v1    # "result":[B
label_goto_6:
	this->monitor_exit();
	return result;
	// 1148    .line 273
	// 1149    .restart local v1    # "result":[B
label_catch_8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/InvalidKeyException;
	goto label_goto_6;
	// 1156    .end local v0    # "e":Ljava/security/InvalidKeyException;
label_catchall_a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getFormat()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS8Key::getFormat()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS#8"));

}
// .method public hashCode()I
int sun::security::pkcs::PKCS8Key::hashCode()
{
	
	int retval;
	auto b1;
	int i;
	
	retval = 0x0;
	//    .local v2, "retval":I
	b1 = this->getEncoded();
	//    .local v0, "b1":[B
	i = 0x1;
	//    .local v1, "i":I
label_goto_6:
	if ( i >= b1->size() )
		goto label_cond_10;
	retval = (retval +  (b1[i] *  i));
	i = ( i + 0x1);
	goto label_goto_6;
	// 1210    .line 449
label_cond_10:
	return retval;

}
// .method protected parseKeyBits()V
void sun::security::pkcs::PKCS8Key::parseKeyBits()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1218        value = {
	// 1219            Ljava/io/IOException;,
	// 1220            Ljava/security/InvalidKeyException;
	// 1221        }
	// 1222    .end annotation
	this->encode();
	return;

}
// .method protected writeReplace()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::pkcs::PKCS8Key::writeReplace()
{
	
	std::shared_ptr<java::security::KeyRep> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1235        value = {
	// 1236            Ljava/io/ObjectStreamException;
	// 1237        }
	// 1238    .end annotation
	cVar0 = std::make_shared<java::security::KeyRep>(java::security::KeyRep_S_Type::PRIVATE, this->getAlgorithm(), this->getFormat(), this->getEncoded());
	return cVar0;

}


