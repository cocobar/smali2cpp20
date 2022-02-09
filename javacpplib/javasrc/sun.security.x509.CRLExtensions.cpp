// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CRLExtensions.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.security.cert.CRLException.h"
#include "java.security.cert.CertificateException.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.Map.h"
#include "java.util.TreeMap.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CRLExtensions.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.OIDMap.h"
#include "sun.security.x509.X509AttributeName.h"

static sun::security::x509::CRLExtensions::PARAMS;
// .method static constructor <clinit>()V
void sun::security::x509::CRLExtensions::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x2);
	cVar0[0x0] = java::lang::Boolean();
	cVar0[0x1] = java::lang::Object();
	sun::security::x509::CRLExtensions::PARAMS = cVar0;
	return;

}
// .method public constructor <init>()V
sun::security::x509::CRLExtensions::CRLExtensions()
{
	
	std::shared_ptr<java::util::TreeMap> cVar0;
	
	// 059    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::TreeMap>();
	this->map = java::util::Collections::synchronizedMap(cVar0);
	this->unsupportedCritExt = 0x0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::CRLExtensions::CRLExtensions(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	std::shared_ptr<java::util::TreeMap> cVar0;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 086        value = {
	// 087            Ljava/security/cert/CRLException;
	// 088        }
	// 089    .end annotation
	// 093    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::TreeMap>();
	this->map = java::util::Collections::synchronizedMap(cVar0);
	this->unsupportedCritExt = 0x0;
	this->init(in);
	return;

}
// .method private init(Lsun/security/util/DerInputStream;)V
void sun::security::x509::CRLExtensions::init(std::shared_ptr<sun::security::util::DerInputStream> derStrm)
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	unsigned char nextByte;
	auto exts;
	int i;
	std::shared_ptr<sun::security::x509::Extension> ext;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "derStrm"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 123        value = {
	// 124            Ljava/security/cert/CRLException;
	// 125        }
	// 126    .end annotation
	//    .local v5, "str":Lsun/security/util/DerInputStream;
	try {
	//label_try_start_1:
	nextByte = (unsigned char)(derStrm->peekByte());
	//    .local v4, "nextByte":B
	if ( ( nextByte & 0xc0) != 0x80 )
		goto label_cond_16;
	if ( ( nextByte & 0x1f) )     
		goto label_cond_16;
	//    .local v6, "val":Lsun/security/util/DerValue;
	//    .end local v6    # "val":Lsun/security/util/DerValue;
label_cond_16:
	exts = derStrm->getSequence(0x5);
	//    .local v2, "exts":[Lsun/security/util/DerValue;
	i = 0x0;
	//    .local v3, "i":I
label_goto_1c:
	if ( i >= exts->size() )
		goto label_cond_4b;
	ext = std::make_shared<sun::security::x509::Extension>(exts[i]);
	//    .local v1, "ext":Lsun/security/x509/Extension;
	this->parseExtension(ext);
	//label_try_end_29:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_29} :catch_2c
	i = ( i + 0x1);
	goto label_goto_1c;
	// 200    .line 104
	// 201    .end local v1    # "ext":Lsun/security/x509/Extension;
	// 202    .end local v2    # "exts":[Lsun/security/util/DerValue;
	// 203    .end local v3    # "i":I
	// 204    .end local v4    # "nextByte":B
label_catch_2c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<java::security::cert::CRLException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parsing error: ")))->append(getCatchExcetionFromList->toString())->toString());
	// throw
	throw cVar0;
	// 238    .line 107
	// 239    .end local v0    # "e":Ljava/io/IOException;
	// 240    .restart local v2    # "exts":[Lsun/security/util/DerValue;
	// 241    .restart local v3    # "i":I
	// 242    .restart local v4    # "nextByte":B
label_cond_4b:
	return;

}
// .method private parseExtension(Lsun/security/x509/Extension;)V
void sun::security::x509::CRLExtensions::parseExtension(std::shared_ptr<sun::security::x509::Extension> ext)
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar1;
	std::shared_ptr<java::security::cert::CRLException> cVar3;
	std::shared_ptr<java::lang::Class> extClass;
	std::shared_ptr<java::security::cert::CRLException> cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> passed;
	std::shared_ptr<sun::security::x509::CertAttrSet> crlExt;
	std::shared_ptr<java::security::cert::CRLException> cVar2;
	
	//    .param p1, "ext"    # Lsun/security/x509/Extension;
	//    .annotation system Ldalvik/annotation/Throws;
	// 251        value = {
	// 252            Ljava/security/cert/CRLException;
	// 253        }
	// 254    .end annotation
	try {
	//label_try_start_0:
	extClass = sun::security::x509::OIDMap::getClass(ext->getExtensionId());
	//    .local v3, "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( extClass )     
		goto label_cond_3c;
	if ( !(ext->isCritical()) )  
		goto label_cond_13;
	this->unsupportedCritExt = 0x1;
label_cond_13:
	if ( !(this->map->put(ext->getExtensionId()->toString(), ext)) )  
		goto label_cond_3b;
	cVar0 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate extensions not allowed")));
	// throw
	throw cVar0;
	// 309    :try_end_2c
	// 310    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_2c} :catch_2c
	// 311    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_2c} :catch_74
	// 313    .line 129
	// 314    .end local v3    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_catch_2c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "invk":Ljava/lang/reflect/InvocationTargetException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::security::cert::CRLException>(getCatchExcetionFromList->getTargetException()->getMessage());
	// throw
	throw cVar1;
	// 334    .line 120
	// 335    .end local v4    # "invk":Ljava/lang/reflect/InvocationTargetException;
	// 336    .restart local v3    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_3b:
	return;
	// 340    .line 122
label_cond_3c:
	try {
	//label_try_start_3c:
	//    .local v0, "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	passed = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	passed[0x0] = java::lang::Boolean::valueOf(ext->isCritical());
	passed[0x1] = ext->getExtensionValue();
	//    .local v5, "passed":[Ljava/lang/Object;
	crlExt = extClass->getConstructor(sun::security::x509::CRLExtensions::PARAMS)->newInstance(passed);
	crlExt->checkCast("sun::security::x509::CertAttrSet");
	//    .local v1, "crlExt":Lsun/security/x509/CertAttrSet;, "Lsun/security/x509/CertAttrSet<*>;"
	crlExt->checkCast("sun::security::x509::Extension");
	//    .end local v1    # "crlExt":Lsun/security/x509/CertAttrSet;, "Lsun/security/x509/CertAttrSet<*>;"
	if ( !(this->map->put(crlExt->getName(), crlExt)) )  
		goto label_cond_7f;
	cVar2 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate extensions not allowed")));
	// throw
	throw cVar2;
	// 409    :try_end_74
	// 410    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_3c .. :try_end_74} :catch_2c
	// 411    .catch Ljava/lang/Exception; {:try_start_3c .. :try_end_74} :catch_74
	// 413    .line 131
	// 414    .end local v0    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	// 415    .end local v3    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 416    .end local v5    # "passed":[Ljava/lang/Object;
label_catch_74:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/Exception;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar3 = std::make_shared<java::security::cert::CRLException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar3;
	// 432    .line 134
	// 433    .end local v2    # "e":Ljava/lang/Exception;
	// 434    .restart local v0    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	// 435    .restart local v3    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 436    .restart local v5    # "passed":[Ljava/lang/Object;
label_cond_7f:
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CRLExtensions::_delete_(std::shared_ptr<java::lang::String> alias)
{
	
	//    .param p1, "alias"    # Ljava/lang/String;
	this->map->remove(alias);
	return;

}
// .method public encode(Ljava/io/OutputStream;Z)V
void sun::security::x509::CRLExtensions::encode(std::shared_ptr<java::io::OutputStream> out,bool isExplicit)
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::security::cert::CRLException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<sun::security::util::DerOutputStream> extOut;
	auto objs;
	int i;
	std::shared_ptr<sun::security::x509::CertAttrSet> cVar0;
	std::shared_ptr<sun::security::x509::Extension> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::cert::CRLException> cVar4;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "isExplicit"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 462        value = {
	// 463            Ljava/security/cert/CRLException;
	// 464        }
	// 465    .end annotation
	try {
	//label_try_start_0:
	extOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "extOut":Lsun/security/util/DerOutputStream;
	//    .local v0, "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	objs = this->map->values()->toArray();
	//    .local v5, "objs":[Ljava/lang/Object;
	i = 0x0;
	//    .local v4, "i":I
label_goto_10:
	if ( i >= objs->size() )
		goto label_cond_78;
	if ( !(objs[i]->instanceOf("sun::security::x509::CertAttrSet")) )  
		goto label_cond_23;
	cVar0 = objs[i];
	cVar0->checkCast("sun::security::x509::CertAttrSet");
	cVar0->encode(extOut);
label_goto_20:
	i = ( i + 0x1);
	goto label_goto_10;
	// 518    .line 154
label_cond_23:
	if ( !(objs[i]->instanceOf("sun::security::x509::Extension")) )  
		goto label_cond_50;
	cVar1 = objs[i];
	cVar1->checkCast("sun::security::x509::Extension");
	cVar1->encode(extOut);
	//label_try_end_30:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_59;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_30} :catch_31
	//    .catch Ljava/security/cert/CertificateException; {:try_start_0 .. :try_end_30} :catch_59
	goto label_goto_20;
	// 538    .line 171
	// 539    .end local v0    # "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	// 540    .end local v3    # "extOut":Lsun/security/util/DerOutputStream;
	// 541    .end local v4    # "i":I
	// 542    .end local v5    # "objs":[Ljava/lang/Object;
label_catch_31:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar2 = std::make_shared<java::security::cert::CRLException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Encoding error: ")))->append(getCatchExcetionFromList->toString())->toString());
	// throw
	throw cVar2;
	// 576    .line 157
	// 577    .end local v1    # "e":Ljava/io/IOException;
	// 578    .restart local v0    # "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	// 579    .restart local v3    # "extOut":Lsun/security/util/DerOutputStream;
	// 580    .restart local v4    # "i":I
	// 581    .restart local v5    # "objs":[Ljava/lang/Object;
label_cond_50:
	try {
	//label_try_start_50:
	cVar4 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal extension object")));
	// throw
	throw cVar4;
	// 591    :try_end_59
	// 592    .catch Ljava/io/IOException; {:try_start_50 .. :try_end_59} :catch_31
	// 593    .catch Ljava/security/cert/CertificateException; {:try_start_50 .. :try_end_59} :catch_59
	// 595    .line 173
	// 596    .end local v0    # "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	// 597    .end local v3    # "extOut":Lsun/security/util/DerOutputStream;
	// 598    .end local v4    # "i":I
	// 599    .end local v5    # "objs":[Ljava/lang/Object;
label_catch_59:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/security/cert/CertificateException;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar5 = std::make_shared<java::security::cert::CRLException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Encoding error: ")))->append(getCatchExcetionFromList->toString())->toString());
	// throw
	throw cVar5;
	// 633    .line 160
	// 634    .end local v2    # "e":Ljava/security/cert/CertificateException;
	// 635    .restart local v0    # "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	// 636    .restart local v3    # "extOut":Lsun/security/util/DerOutputStream;
	// 637    .restart local v4    # "i":I
	// 638    .restart local v5    # "objs":[Ljava/lang/Object;
label_cond_78:
	try {
	//label_try_start_78:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v6, "seq":Lsun/security/util/DerOutputStream;
	seq->write(0x30, extOut);
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v7, "tmp":Lsun/security/util/DerOutputStream;
	if ( !(isExplicit) )  
		goto label_cond_9c;
	tmp->write(sun::security::util::DerValue::createTag(-0x80, 0x1, 0x0), seq);
label_goto_94:
	out->write(tmp->toByteArray());
	//label_try_end_9b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_59;
	}
	//    .catch Ljava/io/IOException; {:try_start_78 .. :try_end_9b} :catch_31
	//    .catch Ljava/security/cert/CertificateException; {:try_start_78 .. :try_end_9b} :catch_59
	return;
	// 689    .line 168
label_cond_9c:
	tmp = seq;
	goto label_goto_94;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::CRLExtensions::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	auto objs;
	int len;
	std::shared_ptr<java::lang::Object> key;
	int i;
	std::shared_ptr<sun::security::x509::CertAttrSet> cVar2;
	std::shared_ptr<sun::security::x509::Extension> otherExt;
	std::shared_ptr<sun::security::x509::Extension> thisExt;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 711    .line 252
label_cond_5:
	if ( other->instanceOf("sun::security::x509::CRLExtensions") )     
		goto label_cond_a;
	return cVar1;
	// 720    .line 255
label_cond_a:
	other->checkCast("sun::security::x509::CRLExtensions");
	//    .end local p1    # "other":Ljava/lang/Object;
	//    .local v4, "otherC":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	objs = other->getAllExtensions()->toArray();
	//    .local v3, "objs":[Ljava/lang/Object;
	len = objs->size();
	//    .local v2, "len":I
	if ( len == this->map->size() )
		goto label_cond_1e;
	return cVar1;
	// 752    .line 263
label_cond_1e:
	key = 0x0;
	//    .local v1, "key":Ljava/lang/String;
	i = 0x0;
	//    .end local v1    # "key":Ljava/lang/String;
	//    .local v0, "i":I
label_goto_20:
	if ( i >= len )
		goto label_cond_53;
	if ( !(objs[i]->instanceOf("sun::security::x509::CertAttrSet")) )  
		goto label_cond_30;
	cVar2 = objs[i];
	cVar2->checkCast("sun::security::x509::CertAttrSet");
	key = cVar2->getName();
label_cond_30:
	otherExt = objs[i];
	otherExt->checkCast("sun::security::x509::Extension");
	//    .local v5, "otherExt":Lsun/security/x509/Extension;
	if ( key )     
		goto label_cond_3e;
label_cond_3e:
	thisExt = this->map->get(key);
	thisExt->checkCast("sun::security::x509::Extension");
	//    .local v6, "thisExt":Lsun/security/x509/Extension;
	if ( thisExt )     
		goto label_cond_49;
	return cVar1;
	// 817    .line 273
label_cond_49:
	if ( thisExt->equals(otherExt) )     
		goto label_cond_50;
	return cVar1;
	// 828    .line 264
label_cond_50:
	i = ( i + 0x1);
	goto label_goto_20;
	// 834    .line 276
	// 835    .end local v5    # "otherExt":Lsun/security/x509/Extension;
	// 836    .end local v6    # "thisExt":Lsun/security/x509/Extension;
label_cond_53:
	return cVar0;

}
// .method public get(Ljava/lang/String;)Lsun/security/x509/Extension;
std::shared_ptr<sun::security::x509::Extension> sun::security::x509::CRLExtensions::get(std::shared_ptr<java::lang::String> alias)
{
	
	std::shared_ptr<sun::security::x509::X509AttributeName> attr;
	std::shared_ptr<sun::security::x509::Extension> cVar0;
	
	//    .param p1, "alias"    # Ljava/lang/String;
	attr = std::make_shared<sun::security::x509::X509AttributeName>(alias);
	//    .local v0, "attr":Lsun/security/x509/X509AttributeName;
	//    .local v1, "id":Ljava/lang/String;
	if ( !(attr->getPrefix()->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509")))) )  
		goto label_cond_28;
	//    .local v2, "index":I
	//    .end local v2    # "index":I
	//    .local v3, "name":Ljava/lang/String;
label_goto_1f:
	cVar0 = this->map->get(name);
	cVar0->checkCast("sun::security::x509::Extension");
	return cVar0;
	// 896    .line 191
	// 897    .end local v3    # "name":Ljava/lang/String;
label_cond_28:
	//    .restart local v3    # "name":Ljava/lang/String;
	goto label_goto_1f;

}
// .method public getAllExtensions()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<sun::security::x509::Extension>> sun::security::x509::CRLExtensions::getAllExtensions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 908        value = {
	// 909            "()",
	// 910            "Ljava/util/Collection",
	// 911            "<",
	// 912            "Lsun/security/x509/Extension;",
	// 913            ">;"
	// 914        }
	// 915    .end annotation
	return this->map->values();

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<sun::security::x509::Extension>> sun::security::x509::CRLExtensions::getElements()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 931        value = {
	// 932            "()",
	// 933            "Ljava/util/Enumeration",
	// 934            "<",
	// 935            "Lsun/security/x509/Extension;",
	// 936            ">;"
	// 937        }
	// 938    .end annotation
	return java::util::Collections::enumeration(this->map->values());

}
// .method public hasUnsupportedCriticalExtension()Z
bool sun::security::x509::CRLExtensions::hasUnsupportedCriticalExtension()
{
	
	return this->unsupportedCritExt;

}
// .method public hashCode()I
int sun::security::x509::CRLExtensions::hashCode()
{
	
	return this->map->hashCode();

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CRLExtensions::set(std::shared_ptr<java::lang::String> alias,std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "alias"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	obj->checkCast("sun::security::x509::Extension");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->map->put(alias, obj);
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CRLExtensions::toString()
{
	
	return this->map->toString();

}


