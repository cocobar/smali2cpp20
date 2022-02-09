// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X509Key.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.InstantiationException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.InvalidKeyException.h"
#include "java.security.Key.h"
#include "java.security.KeyFactory.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.Provider.h"
#include "java.security.PublicKey.h"
#include "java.security.Security.h"
#include "java.security.spec.InvalidKeySpecException.h"
#include "java.security.spec.X509EncodedKeySpec.h"
#include "java.util.Arrays.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.X509Key.h"

static sun::security::x509::X509Key::serialVersionUID = -0x4a5fe2419b658d5aL;
// .method public constructor <init>()V
sun::security::x509::X509Key::X509Key()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	cVar0 = 0x0;
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->key = cVar0;
	this->unusedBits = 0x0;
	this->bitStringKey = cVar0;
	return;

}
// .method private constructor <init>(Lsun/security/x509/AlgorithmId;Lsun/security/util/BitArray;)V
sun::security::x509::X509Key::X509Key(std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<sun::security::util::BitArray> key)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .param p1, "algid"    # Lsun/security/x509/AlgorithmId;
	//    .param p2, "key"    # Lsun/security/util/BitArray;
	//    .annotation system Ldalvik/annotation/Throws;
	// 061        value = {
	// 062            Ljava/security/InvalidKeyException;
	// 063        }
	// 064    .end annotation
	cVar0 = 0x0;
	// 070    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->key = cVar0;
	this->unusedBits = 0x0;
	this->bitStringKey = cVar0;
	this->algid = algid;
	this->setKey(key);
	this->encode();
	return;

}
// .method static buildX509Key(Lsun/security/x509/AlgorithmId;Lsun/security/util/BitArray;)Ljava/security/PublicKey;
std::shared_ptr<java::security::PublicKey> sun::security::x509::X509Key::buildX509Key(std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<sun::security::util::BitArray> key)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> x509EncodedKeyStream;
	std::shared_ptr<java::security::spec::X509EncodedKeySpec> x509KeySpec;
	std::shared_ptr<sun::security::x509::X509Key> result;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::security::Provider> sunProvider;
	std::shared_ptr<java::lang::InstantiationException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> classname;
	std::shared_ptr<java::lang::InstantiationException> cVar3;
	int keyClass;
	std::shared_ptr<java::lang::ClassLoader> cl;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Class> keyClass;
	std::shared_ptr<sun::security::x509::X509Key> inst;
	std::shared_ptr<sun::security::x509::X509Key> cVar4;
	auto keyClass;
	std::shared_ptr<java::security::spec::InvalidKeySpecException> e;
	std::shared_ptr<java::security::InvalidKeyException> cVar0;
	
	//    .param p0, "algid"    # Lsun/security/x509/AlgorithmId;
	//    .param p1, "key"    # Lsun/security/util/BitArray;
	//    .annotation system Ldalvik/annotation/Throws;
	// 101        value = {
	// 102            Ljava/io/IOException;,
	// 103            Ljava/security/InvalidKeyException;
	// 104        }
	// 105    .end annotation
	x509EncodedKeyStream = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v14, "x509EncodedKeyStream":Lsun/security/util/DerOutputStream;
	sun::security::x509::X509Key::encode(x509EncodedKeyStream, algid, key);
	x509KeySpec = std::make_shared<java::security::spec::X509EncodedKeySpec>(x509EncodedKeyStream->toByteArray());
	//    .local v15, "x509KeySpec":Ljava/security/spec/X509EncodedKeySpec;
	try {
	//label_try_start_15:
	//    .local v11, "keyFac":Ljava/security/KeyFactory;
	//label_try_end_20:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	catch (java::security::spec::InvalidKeySpecException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_22;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_15 .. :try_end_20} :catch_31
	//    .catch Ljava/security/spec/InvalidKeySpecException; {:try_start_15 .. :try_end_20} :catch_22
	return java::security::KeyFactory::getInstance(algid->getName())->generatePublic(x509KeySpec);
	// 152    .line 226
	// 153    .end local v11    # "keyFac":Ljava/security/KeyFactory;
label_catch_22:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v8, "e":Ljava/security/spec/InvalidKeySpecException;
	var21 = cVar0(e->getMessage(), e);
	// throw
	throw cVar0;
	// 173    .line 224
	// 174    .end local v8    # "e":Ljava/security/spec/InvalidKeySpecException;
label_catch_31:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v7, "e":Ljava/security/NoSuchAlgorithmException;
	//    .local v3, "classname":Ljava/lang/String;
	try {
	//label_try_start_35:
	sunProvider = java::security::Security::getProvider(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUN")));
	//    .local v13, "sunProvider":Ljava/security/Provider;
	if ( sunProvider )     
		goto label_cond_4f;
	cVar1 = std::make_shared<java::lang::InstantiationException>();
	// throw
	throw cVar1;
	// 201    :try_end_44
	// 202    .catch Ljava/lang/ClassNotFoundException; {:try_start_35 .. :try_end_44} :catch_44
	// 203    .catch Ljava/lang/InstantiationException; {:try_start_35 .. :try_end_44} :catch_75
	// 204    .catch Ljava/lang/IllegalAccessException; {:try_start_35 .. :try_end_44} :catch_a6
	// 206    .line 270
	// 207    .end local v13    # "sunProvider":Ljava/security/Provider;
label_catch_44:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_45:
label_goto_45:
	result = std::make_shared<sun::security::x509::X509Key>(algid, key);
	//    .local v12, "result":Lsun/security/x509/X509Key;
	return result;
	// 226    .line 242
	// 227    .end local v12    # "result":Lsun/security/x509/X509Key;
	// 228    .restart local v13    # "sunProvider":Ljava/security/Provider;
label_cond_4f:
	try {
	//label_try_start_4f:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	classname = sunProvider->getProperty(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PublicKey.X.509.")))->append(algid->getName())->toString());
	if ( classname )     
		goto label_cond_77;
	cVar3 = std::make_shared<java::lang::InstantiationException>();
	// throw
	throw cVar3;
	// 270    :try_end_75
	// 271    .catch Ljava/lang/ClassNotFoundException; {:try_start_4f .. :try_end_75} :catch_44
	// 272    .catch Ljava/lang/InstantiationException; {:try_start_4f .. :try_end_75} :catch_75
	// 273    .catch Ljava/lang/IllegalAccessException; {:try_start_4f .. :try_end_75} :catch_a6
	// 275    .line 271
	// 276    .end local v13    # "sunProvider":Ljava/security/Provider;
label_catch_75:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "e":Ljava/lang/InstantiationException;
	goto label_goto_45;
	// 283    .line 248
	// 284    .end local v6    # "e":Ljava/lang/InstantiationException;
	// 285    .restart local v13    # "sunProvider":Ljava/security/Provider;
label_cond_77:
	keyClass = 0x0;
	//    .local v10, "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	try {
	//label_try_start_78:
	//label_try_end_7b:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	catch (java::lang::InstantiationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a6;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_78 .. :try_end_7b} :catch_9a
	//    .catch Ljava/lang/InstantiationException; {:try_start_78 .. :try_end_7b} :catch_75
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_78 .. :try_end_7b} :catch_a6
	keyClass = java::lang::Class::forName(classname);
	//    .end local v10    # "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_7c:
label_goto_7c:
	//    .local v9, "inst":Ljava/lang/Object;
	if ( !(keyClass) )  
		goto label_cond_83;
	try {
	//label_try_start_7f:
	inst = keyClass->newInstance();
	//    .end local v9    # "inst":Ljava/lang/Object;
label_cond_83:
	if ( !(0x0->instanceOf("sun::security::x509::X509Key")) )  
		goto label_cond_45;
	cVar4 = inst;
	cVar4->checkCast("sun::security::x509::X509Key");
	result = cVar4;
	//    .restart local v12    # "result":Lsun/security/x509/X509Key;
	result->algid = algid;
	result->setKey(key);
	result->parseKeyBits();
	return result;
	// 349    .line 251
	// 350    .end local v12    # "result":Lsun/security/x509/X509Key;
	// 351    .restart local v10    # "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_catch_9a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/lang/ClassNotFoundException;
	cl = java::lang::ClassLoader::getSystemClassLoader({const[class].FS-Param});
	//    .local v2, "cl":Ljava/lang/ClassLoader;
	if ( !(cl) )  
		goto label_cond_7c;
	//label_try_end_a4:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_44;
	}
	catch (java::lang::InstantiationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a6;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_7f .. :try_end_a4} :catch_44
	//    .catch Ljava/lang/InstantiationException; {:try_start_7f .. :try_end_a4} :catch_75
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_7f .. :try_end_a4} :catch_a6
	keyClass = cl->loadClass(classname);
	//    .local v10, "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	goto label_goto_7c;
	// 377    .line 272
	// 378    .end local v2    # "cl":Ljava/lang/ClassLoader;
	// 379    .end local v4    # "e":Ljava/lang/ClassNotFoundException;
	// 380    .end local v10    # "keyClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 381    .end local v13    # "sunProvider":Ljava/security/Provider;
label_catch_a6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "e":Ljava/lang/IllegalAccessException;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::io::IOException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" [internal error]")))->toString());
	// throw
	throw cVar5;

}
// .method static encode(Lsun/security/util/DerOutputStream;Lsun/security/x509/AlgorithmId;Lsun/security/util/BitArray;)V
void sun::security::x509::X509Key::encode(std::shared_ptr<sun::security::util::DerOutputStream> out,std::shared_ptr<sun::security::x509::AlgorithmId> algid,std::shared_ptr<sun::security::util::BitArray> key)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p0, "out"    # Lsun/security/util/DerOutputStream;
	//    .param p1, "algid"    # Lsun/security/x509/AlgorithmId;
	//    .param p2, "key"    # Lsun/security/util/BitArray;
	//    .annotation system Ldalvik/annotation/Throws;
	// 420        value = {
	// 421            Ljava/io/IOException;
	// 422        }
	// 423    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	algid->encode(tmp);
	tmp->putUnalignedBitString(key);
	out->write(0x30, tmp);
	return;

}
// .method public static parse(Lsun/security/util/DerValue;)Ljava/security/PublicKey;
std::shared_ptr<java::security::PublicKey> sun::security::x509::X509Key::parse(std::shared_ptr<sun::security::util::DerValue> in)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::security::InvalidKeyException> e;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p0, "in"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 451        value = {
	// 452            Ljava/io/IOException;
	// 453        }
	// 454    .end annotation
	if ( in->tag == 0x30 )
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("corrupt subject key")));
	// throw
	throw cVar0;
	// 473    .line 168
label_cond_f:
	//    .local v0, "algorithm":Lsun/security/x509/AlgorithmId;
	try {
	//label_try_start_19:
	//label_try_end_22:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_34;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_19 .. :try_end_22} :catch_34
	//    .local v2, "subjectKey":Ljava/security/PublicKey;
	if ( !(in->data->available()) )  
		goto label_cond_53;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("excess subject key")));
	// throw
	throw cVar1;
	// 520    .line 173
	// 521    .end local v2    # "subjectKey":Ljava/security/PublicKey;
label_catch_34:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/InvalidKeyException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::io::IOException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject key, ")))->append(e->getMessage())->toString(), e);
	// throw
	throw cVar2;
	// 555    .line 179
	// 556    .end local v1    # "e":Ljava/security/InvalidKeyException;
	// 557    .restart local v2    # "subjectKey":Ljava/security/PublicKey;
label_cond_53:
	return sun::security::x509::X509Key::buildX509Key(sun::security::x509::AlgorithmId::parse(in->data->getDerValue()), in->data->getUnalignedBitString());

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void sun::security::x509::X509Key::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	std::shared_ptr<java::security::InvalidKeyException> e;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 566        value = {
	// 567            Ljava/io/IOException;
	// 568        }
	// 569    .end annotation
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
	// 581    .line 421
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
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void sun::security::x509::X509Key::writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream)
{
	
	//    .param p1, "stream"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 625        value = {
	// 626            Ljava/io/IOException;
	// 627        }
	// 628    .end annotation
	stream->write(this->getEncoded());
	return;

}
// .method public decode(Ljava/io/InputStream;)V
void sun::security::x509::X509Key::decode(std::shared_ptr<java::io::InputStream> in)
{
	
	std::shared_ptr<java::security::InvalidKeyException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::security::InvalidKeyException> cVar0;
	std::shared_ptr<java::security::InvalidKeyException> cVar3;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 648        value = {
	// 649            Ljava/security/InvalidKeyException;
	// 650        }
	// 651    .end annotation
	try {
	//label_try_start_0:
	val = std::make_shared<sun::security::util::DerValue>(in);
	//    .local v1, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_33;
	cVar0 = std::make_shared<java::security::InvalidKeyException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid key format")));
	// throw
	throw cVar0;
	// 676    :try_end_14
	// 677    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_14} :catch_14
	// 679    .line 395
	// 680    .end local v1    # "val":Lsun/security/util/DerValue;
label_catch_14:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::security::InvalidKeyException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IOException: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar1;
	// 716    .line 389
	// 717    .end local v0    # "e":Ljava/io/IOException;
	// 718    .restart local v1    # "val":Lsun/security/util/DerValue;
label_cond_33:
	try {
	//label_try_start_33:
	this->algid = sun::security::x509::AlgorithmId::parse(val->data->getDerValue());
	this->setKey(val->data->getUnalignedBitString());
	this->parseKeyBits();
	if ( !(val->data->available()) )  
		goto label_cond_5c;
	cVar3 = std::make_shared<java::security::InvalidKeyException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("excess key data")));
	// throw
	throw cVar3;
	// 762    :try_end_5c
	// 763    .catch Ljava/io/IOException; {:try_start_33 .. :try_end_5c} :catch_14
	// 765    .line 400
label_cond_5c:
	return;

}
// .method public decode([B)V
void sun::security::x509::X509Key::decode(std::shared_ptr<unsigned char[]> encodedKey)
{
	
	std::shared_ptr<java::io::ByteArrayInputStream> cVar0;
	
	//    .param p1, "encodedKey"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 774        value = {
	// 775            Ljava/security/InvalidKeyException;
	// 776        }
	// 777    .end annotation
	cVar0 = std::make_shared<java::io::ByteArrayInputStream>(encodedKey);
	this->decode(cVar0);
	return;

}
// .method public final encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::X509Key::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 795        value = {
	// 796            Ljava/io/IOException;
	// 797        }
	// 798    .end annotation
	sun::security::x509::X509Key::encode(out, this->algid, this->getKey());
	return;

}
// .method public encode()[B
unsigned char sun::security::x509::X509Key::encode()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 817        value = {
	// 818            Ljava/security/InvalidKeyException;
	// 819        }
	// 820    .end annotation
	cVar0 = this->getEncodedInternal()->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::X509Key::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 852    .line 432
label_cond_5:
	if ( obj->instanceOf("java::security::Key") )     
		goto label_cond_a;
	return cVar0;
	// 861    .line 436
label_cond_a:
	try {
	//label_try_start_a:
	//    .local v2, "thisEncoded":[B
	if ( !(obj->instanceOf("sun::security::x509::X509Key")) )  
		goto label_cond_1d;
	obj->checkCast("sun::security::x509::X509Key");
	//    .end local p1    # "obj":Ljava/lang/Object;
	//    .local v1, "otherEncoded":[B
label_goto_18:
	return java::util::Arrays::equals(this->getEncodedInternal(), otherEncoded);
	// 891    .line 441
	// 892    .end local v1    # "otherEncoded":[B
	// 893    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_1d:
	obj->checkCast("java::security::Key");
	//    .end local p1    # "obj":Ljava/lang/Object;
	//label_try_end_22:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_a .. :try_end_22} :catch_24
	//    .restart local v1    # "otherEncoded":[B
	goto label_goto_18;
	// 907    .line 444
	// 908    .end local v1    # "otherEncoded":[B
	// 909    .end local v2    # "thisEncoded":[B
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/InvalidKeyException;
	return cVar0;

}
// .method public getAlgorithm()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509Key::getAlgorithm()
{
	
	return this->algid->getName();

}
// .method public getAlgorithmId()Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::x509::X509Key::getAlgorithmId()
{
	
	return this->algid;

}
// .method public getEncoded()[B
unsigned char sun::security::x509::X509Key::getEncoded()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	cVar0 = this->getEncodedInternal()->clone();
	cVar0->checkCast("unsigned char[]");
	//label_try_end_a:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_0 .. :try_end_a} :catch_b
	return cVar0;
	// 962    .line 309
label_catch_b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/InvalidKeyException;
	return 0x0;

}
// .method public getEncodedInternal()[B
unsigned char sun::security::x509::X509Key::getEncodedInternal()
{
	
	std::shared_ptr<unsigned char[]> encoded;
	std::shared_ptr<java::security::InvalidKeyException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 976        value = {
	// 977            Ljava/security/InvalidKeyException;
	// 978        }
	// 979    .end annotation
	encoded = this->encodedKey;
	//    .local v1, "encoded":[B
	if ( encoded )     
		goto label_cond_12;
	try {
	//label_try_start_4:
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "out":Lsun/security/util/DerOutputStream;
	this->encode(out);
	//label_try_end_f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_13;
	}
	//    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_f} :catch_13
	encoded = out->toByteArray();
	this->encodedKey = encoded;
	//    .end local v2    # "out":Lsun/security/util/DerOutputStream;
label_cond_12:
	return encoded;
	// 1014    .line 322
label_catch_13:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<java::security::InvalidKeyException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IOException : ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar0;

}
// .method public getFormat()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509Key::getFormat()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509"));

}
// .method protected getKey()Lsun/security/util/BitArray;
std::shared_ptr<sun::security::util::BitArray> sun::security::x509::X509Key::getKey()
{
	
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	std::shared_ptr<sun::security::util::BitArray> cVar1;
	
	cVar0 = std::make_shared<sun::security::util::BitArray>((( this->key->size() * 0x8) -  this->unusedBits), this->key);
	this->bitStringKey = cVar0;
	cVar1 = this->bitStringKey->clone();
	cVar1->checkCast("sun::security::util::BitArray");
	return cVar1;

}
// .method public hashCode()I
int sun::security::x509::X509Key::hashCode()
{
	
	auto b1;
	int r;
	int i;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	b1 = this->getEncodedInternal();
	//    .local v0, "b1":[B
	r = b1->size();
	//    .local v3, "r":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_6:
	if ( i >= b1->size() )
		goto label_cond_13;
	//label_try_end_b:
	}
	catch (java::security::InvalidKeyException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14;
	}
	//    .catch Ljava/security/InvalidKeyException; {:try_start_0 .. :try_end_b} :catch_14
	r = (r +  ( ( b1[i] & 0xff) * 0x25));
	i = ( i + 0x1);
	goto label_goto_6;
	// 1139    .line 460
label_cond_13:
	return r;
	// 1143    .line 461
	// 1144    .end local v0    # "b1":[B
	// 1145    .end local v2    # "i":I
	// 1146    .end local v3    # "r":I
label_catch_14:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/InvalidKeyException;
	return 0x0;

}
// .method protected parseKeyBits()V
void sun::security::x509::X509Key::parseKeyBits()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1160        value = {
	// 1161            Ljava/io/IOException;,
	// 1162            Ljava/security/InvalidKeyException;
	// 1163        }
	// 1164    .end annotation
	this->encode();
	return;

}
// .method protected setKey(Lsun/security/util/BitArray;)V
void sun::security::x509::X509Key::setKey(std::shared_ptr<sun::security::util::BitArray> key)
{
	
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	int remaining;
	int cVar1;
	
	//    .param p1, "key"    # Lsun/security/util/BitArray;
	cVar0 = key->clone();
	cVar0->checkCast("sun::security::util::BitArray");
	this->bitStringKey = cVar0;
	this->key = key->toByteArray();
	remaining = ( key->length() % 0x8);
	//    .local v0, "remaining":I
	if ( remaining )     
		goto label_cond_1b;
	cVar1 = 0x0;
label_goto_18:
	this->unusedBits = cVar1;
	return;
	// 1217    .line 123
label_cond_1b:
	cVar1 = ( remaining - 0x8);
	goto label_goto_18;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509Key::toString()
{
	
	std::shared_ptr<sun::misc::HexDumpEncoder> encoder;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	encoder = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v0, "encoder":Lsun/misc/HexDumpEncoder;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithm = ")))->append(this->algid->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", unparsed keybits = \n")))->append(encoder->encodeBuffer(this->key))->toString();

}


