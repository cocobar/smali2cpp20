// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificateExtensions.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.io.PrintStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.security.cert.CertificateException.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.CertificateExtensions.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.OIDMap.h"
#include "sun.security.x509.UnparseableExtension.h"

static sun::security::x509::CertificateExtensions::IDENT = std::make_shared<java::lang::String>("x509.info.extensions");
static sun::security::x509::CertificateExtensions::NAME = std::make_shared<java::lang::String>("extensions");
static sun::security::x509::CertificateExtensions::PARAMS;
static sun::security::x509::CertificateExtensions::debug;
// .method static constructor <clinit>()V
void sun::security::x509::CertificateExtensions::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar0;
	
	sun::security::x509::CertificateExtensions::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509")));
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x2);
	cVar0[0x0] = java::lang::Boolean();
	cVar0[0x1] = java::lang::Object();
	sun::security::x509::CertificateExtensions::PARAMS = cVar0;
	return;

}
// .method public constructor <init>()V
sun::security::x509::CertificateExtensions::CertificateExtensions()
{
	
	std::shared_ptr<java::util::TreeMap> cVar0;
	
	// 101    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::TreeMap>();
	this->map = java::util::Collections::synchronizedMap(cVar0);
	this->unsupportedCritExt = 0x0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::CertificateExtensions::CertificateExtensions(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	std::shared_ptr<java::util::TreeMap> cVar0;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 128        value = {
	// 129            Ljava/io/IOException;
	// 130        }
	// 131    .end annotation
	// 135    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::TreeMap>();
	this->map = java::util::Collections::synchronizedMap(cVar0);
	this->unsupportedCritExt = 0x0;
	this->init(in);
	return;

}
// .method private init(Lsun/security/util/DerInputStream;)V
void sun::security::x509::CertificateExtensions::init(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	auto exts;
	int i;
	std::shared_ptr<sun::security::x509::Extension> ext;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 165        value = {
	// 166            Ljava/io/IOException;
	// 167        }
	// 168    .end annotation
	exts = in->getSequence(0x5);
	//    .local v1, "exts":[Lsun/security/util/DerValue;
	i = 0x0;
	//    .local v2, "i":I
label_goto_6:
	if ( i >= exts->size() )
		goto label_cond_16;
	ext = std::make_shared<sun::security::x509::Extension>(exts[i]);
	//    .local v0, "ext":Lsun/security/x509/Extension;
	this->parseExtension(ext);
	i = ( i + 0x1);
	goto label_goto_6;
	// 204    .line 90
	// 205    .end local v0    # "ext":Lsun/security/x509/Extension;
label_cond_16:
	return;

}
// .method private parseExtension(Lsun/security/x509/Extension;)V
void sun::security::x509::CertificateExtensions::parseExtension(std::shared_ptr<sun::security::x509::Extension> ext)
{
	
	std::shared_ptr<java::lang::Throwable> e;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<sun::security::x509::UnparseableExtension> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<sun::misc::HexDumpEncoder> h;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<java::lang::Class> extClass;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> passed;
	std::shared_ptr<sun::security::x509::CertAttrSet> certExt;
	std::shared_ptr<java::io::IOException> cVar4;
	
	//    .param p1, "ext"    # Lsun/security/x509/Extension;
	//    .annotation system Ldalvik/annotation/Throws;
	// 214        value = {
	// 215            Ljava/io/IOException;
	// 216        }
	// 217    .end annotation
	try {
	//label_try_start_0:
	extClass = sun::security::x509::OIDMap::getClass(ext->getExtensionId());
	//    .local v5, "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( extClass )     
		goto label_cond_88;
	if ( !(ext->isCritical()) )  
		goto label_cond_13;
	this->unsupportedCritExt = 0x1;
label_cond_13:
	if ( this->map->put(ext->getExtensionId()->toString(), ext) )     
		goto label_cond_24;
	return;
	// 267    .line 105
label_cond_24:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate extensions not allowed")));
	// throw
	throw cVar0;
	// 276    :try_end_2d
	// 277    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_2d} :catch_2d
	// 278    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_2d} :catch_c0
	// 279    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_2d} :catch_c2
	// 281    .line 117
	// 282    .end local v5    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_catch_2d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v7, "invk":Ljava/lang/reflect/InvocationTargetException;
	tryCatchExcetionList.pop_back();
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/lang/Throwable;
	if ( ext->isCritical() )     
		goto label_cond_c9;
	if ( this->unparseableExtensions )     
		goto label_cond_43;
	cVar1 = std::make_shared<java::util::TreeMap>();
	this->unparseableExtensions = cVar1;
label_cond_43:
	cVar2 = std::make_shared<sun::security::x509::UnparseableExtension>(ext, e);
	this->unparseableExtensions->put(ext->getExtensionId()->toString(), cVar2);
	if ( !(sun::security::x509::CertificateExtensions::debug) )  
		goto label_cond_87;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::x509::CertificateExtensions::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error parsing extension: ")))->append(ext)->toString());
	e->printStackTrace();
	h = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v6, "h":Lsun/misc/HexDumpEncoder;
	java::lang::System::err->println(h->encodeBuffer(ext->getExtensionValue()));
	//    .end local v6    # "h":Lsun/misc/HexDumpEncoder;
label_cond_87:
	return;
	// 387    .line 108
	// 388    .end local v4    # "e":Ljava/lang/Throwable;
	// 389    .end local v7    # "invk":Ljava/lang/reflect/InvocationTargetException;
	// 390    .restart local v5    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_88:
	try {
	//label_try_start_88:
	//    .local v1, "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	passed = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	passed[0x0] = java::lang::Boolean::valueOf(ext->isCritical());
	passed[0x1] = ext->getExtensionValue();
	//    .local v8, "passed":[Ljava/lang/Object;
	certExt = extClass->getConstructor(sun::security::x509::CertificateExtensions::PARAMS)->newInstance(passed);
	certExt->checkCast("sun::security::x509::CertAttrSet");
	//    .local v0, "certExt":Lsun/security/x509/CertAttrSet;, "Lsun/security/x509/CertAttrSet<*>;"
	certExt->checkCast("sun::security::x509::Extension");
	//    .end local v0    # "certExt":Lsun/security/x509/CertAttrSet;, "Lsun/security/x509/CertAttrSet<*>;"
	if ( !(this->map->put(certExt->getName(), certExt)) )  
		goto label_cond_d6;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate extensions not allowed")));
	// throw
	throw cVar4;
	// 459    :try_end_c0
	// 460    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_88 .. :try_end_c0} :catch_2d
	// 461    .catch Ljava/io/IOException; {:try_start_88 .. :try_end_c0} :catch_c0
	// 462    .catch Ljava/lang/Exception; {:try_start_88 .. :try_end_c0} :catch_c2
	// 464    .line 139
	// 465    .end local v1    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	// 466    .end local v5    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 467    .end local v8    # "passed":[Ljava/lang/Object;
label_catch_c0:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	// throw
	throw;
	// 475    .line 141
	// 476    .end local v2    # "e":Ljava/io/IOException;
label_catch_c2:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/lang/Exception;
	cVar5 = std::make_shared<java::io::IOException>(getCatchExcetionFromList);
	// throw
	throw cVar5;
	// 488    .line 134
	// 489    .end local v3    # "e":Ljava/lang/Exception;
	// 490    .restart local v4    # "e":Ljava/lang/Throwable;
	// 491    .restart local v7    # "invk":Ljava/lang/reflect/InvocationTargetException;
label_cond_c9:
	if ( !(e->instanceOf("java::io::IOException")) )  
		goto label_cond_d0;
	e->checkCast("java::io::IOException");
	//    .end local v4    # "e":Ljava/lang/Throwable;
	// throw
	throw e;
	// 503    .line 137
	// 504    .restart local v4    # "e":Ljava/lang/Throwable;
label_cond_d0:
	cVar6 = std::make_shared<java::io::IOException>(e);
	// throw
	throw cVar6;
	// 512    .line 144
	// 513    .end local v4    # "e":Ljava/lang/Throwable;
	// 514    .end local v7    # "invk":Ljava/lang/reflect/InvocationTargetException;
	// 515    .restart local v1    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	// 516    .restart local v5    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 517    .restart local v8    # "passed":[Ljava/lang/Object;
label_cond_d6:
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CertificateExtensions::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 528        value = {
	// 529            Ljava/io/IOException;
	// 530        }
	// 531    .end annotation
	//    .local v0, "obj":Ljava/lang/Object;
	if ( this->map->get(name) )     
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No extension found with name ")))->append(name)->toString());
	// throw
	throw cVar0;
	// 570    .line 239
label_cond_22:
	this->map->remove(name);
	return;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CertificateExtensions::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 584        value = {
	// 585            Ljava/security/cert/CertificateException;,
	// 586            Ljava/io/IOException;
	// 587        }
	// 588    .end annotation
	this->encode(out, 0x0);
	return;

}
// .method public encode(Ljava/io/OutputStream;Z)V
void sun::security::x509::CertificateExtensions::encode(std::shared_ptr<java::io::OutputStream> out,bool isCertReq)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> extOut;
	auto objs;
	int i;
	std::shared_ptr<sun::security::x509::CertAttrSet> cVar0;
	std::shared_ptr<sun::security::x509::Extension> cVar1;
	std::shared_ptr<java::security::cert::CertificateException> cVar2;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "isCertReq"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 605        value = {
	// 606            Ljava/security/cert/CertificateException;,
	// 607            Ljava/io/IOException;
	// 608        }
	// 609    .end annotation
	extOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "extOut":Lsun/security/util/DerOutputStream;
	//    .local v0, "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	objs = this->map->values()->toArray();
	//    .local v3, "objs":[Ljava/lang/Object;
	i = 0x0;
	//    .local v2, "i":I
label_goto_10:
	if ( i >= objs->size() )
		goto label_cond_3a;
	if ( !(objs[i]->instanceOf("sun::security::x509::CertAttrSet")) )  
		goto label_cond_23;
	cVar0 = objs[i];
	cVar0->checkCast("sun::security::x509::CertAttrSet");
	cVar0->encode(extOut);
label_goto_20:
	i = ( i + 0x1);
	goto label_goto_10;
	// 661    .line 176
label_cond_23:
	if ( !(objs[i]->instanceOf("sun::security::x509::Extension")) )  
		goto label_cond_31;
	cVar1 = objs[i];
	cVar1->checkCast("sun::security::x509::Extension");
	cVar1->encode(extOut);
	goto label_goto_20;
	// 678    .line 179
label_cond_31:
	cVar2 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal extension object")));
	// throw
	throw cVar2;
	// 688    .line 182
label_cond_3a:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v4, "seq":Lsun/security/util/DerOutputStream;
	seq->write(0x30, extOut);
	if ( isCertReq )     
		goto label_cond_5e;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v5, "tmp":Lsun/security/util/DerOutputStream;
	tmp->write(sun::security::util::DerValue::createTag(-0x80, 0x1, 0x3), seq);
label_goto_56:
	out->write(tmp->toByteArray());
	return;
	// 733    .line 191
	// 734    .end local v5    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_5e:
	//    .restart local v5    # "tmp":Lsun/security/util/DerOutputStream;
	goto label_goto_56;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::CertificateExtensions::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<sun::security::x509::CertificateExtensions> cVar1;
	auto objs;
	int len;
	std::shared_ptr<java::lang::Object> key;
	int i;
	std::shared_ptr<sun::security::x509::CertAttrSet> cVar2;
	std::shared_ptr<sun::security::x509::Extension> otherExt;
	std::shared_ptr<sun::security::x509::Extension> thisExt;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return 0x1;
	// 757    .line 304
label_cond_5:
	if ( other->instanceOf("sun::security::x509::CertificateExtensions") )     
		goto label_cond_a;
	return cVar0;
label_cond_a:
	cVar1 = other;
	cVar1->checkCast("sun::security::x509::CertificateExtensions");
	//    .local v4, "otherC":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	objs = cVar1->getAllExtensions()->toArray();
	//    .local v3, "objs":[Ljava/lang/Object;
	len = objs->size();
	//    .local v2, "len":I
	if ( len == this->map->size() )
		goto label_cond_1f;
	return cVar0;
	// 799    .line 315
label_cond_1f:
	key = 0x0;
	//    .local v1, "key":Ljava/lang/String;
	i = 0x0;
	//    .end local v1    # "key":Ljava/lang/String;
	//    .local v0, "i":I
label_goto_21:
	if ( i >= len )
		goto label_cond_54;
	if ( !(objs[i]->instanceOf("sun::security::x509::CertAttrSet")) )  
		goto label_cond_31;
	cVar2 = objs[i];
	cVar2->checkCast("sun::security::x509::CertAttrSet");
	key = cVar2->getName();
label_cond_31:
	otherExt = objs[i];
	otherExt->checkCast("sun::security::x509::Extension");
	//    .local v5, "otherExt":Lsun/security/x509/Extension;
	if ( key )     
		goto label_cond_3f;
label_cond_3f:
	thisExt = this->map->get(key);
	thisExt->checkCast("sun::security::x509::Extension");
	//    .local v6, "thisExt":Lsun/security/x509/Extension;
	if ( thisExt )     
		goto label_cond_4a;
	return cVar0;
	// 864    .line 325
label_cond_4a:
	if ( thisExt->equals(otherExt) )     
		goto label_cond_51;
	return cVar0;
	// 875    .line 316
label_cond_51:
	i = ( i + 0x1);
	goto label_goto_21;
	// 881    .line 328
	// 882    .end local v5    # "otherExt":Lsun/security/x509/Extension;
	// 883    .end local v6    # "thisExt":Lsun/security/x509/Extension;
label_cond_54:
	other->checkCast("sun::security::x509::CertificateExtensions");
	//    .end local p1    # "other":Ljava/lang/Object;
	return this->getUnparseableExtensions()->equals(other->getUnparseableExtensions());

}
// .method public get(Ljava/lang/String;)Lsun/security/x509/Extension;
std::shared_ptr<sun::security::x509::Extension> sun::security::x509::CertificateExtensions::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::x509::Extension> obj;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 927        value = {
	// 928            Ljava/io/IOException;
	// 929        }
	// 930    .end annotation
	obj = this->map->get(name);
	obj->checkCast("sun::security::x509::Extension");
	//    .local v0, "obj":Lsun/security/x509/Extension;
	if ( obj )     
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No extension found with name ")))->append(name)->toString());
	// throw
	throw cVar0;
	// 971    .line 220
label_cond_24:
	return obj;

}
// .method public getAllExtensions()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<sun::security::x509::Extension>> sun::security::x509::CertificateExtensions::getAllExtensions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 979        value = {
	// 980            "()",
	// 981            "Ljava/util/Collection",
	// 982            "<",
	// 983            "Lsun/security/x509/Extension;",
	// 984            ">;"
	// 985        }
	// 986    .end annotation
	return this->map->values();

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<sun::security::x509::Extension>> sun::security::x509::CertificateExtensions::getElements()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1002        value = {
	// 1003            "()",
	// 1004            "Ljava/util/Enumeration",
	// 1005            "<",
	// 1006            "Lsun/security/x509/Extension;",
	// 1007            ">;"
	// 1008        }
	// 1009    .end annotation
	return java::util::Collections::enumeration(this->map->values());

}
// .method getExtension(Ljava/lang/String;)Lsun/security/x509/Extension;
std::shared_ptr<sun::security::x509::Extension> sun::security::x509::CertificateExtensions::getExtension(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::x509::Extension> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = this->map->get(name);
	cVar0->checkCast("sun::security::x509::Extension");
	return cVar0;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateExtensions::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("extensions"));

}
// .method public getNameByOid(Lsun/security/util/ObjectIdentifier;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateExtensions::getNameByOid(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	std::shared_ptr<java::util::Iterator> name_S_iterator;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<sun::security::x509::Extension> cVar0;
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1057        value = {
	// 1058            Ljava/io/IOException;
	// 1059        }
	// 1060    .end annotation
	name_S_iterator = this->map->keySet()->iterator();
	//    .local v1, "name$iterator":Ljava/util/Iterator;
label_cond_a:
	if ( !(name_S_iterator->hasNext()) )  
		goto label_cond_29;
	name = name_S_iterator->next();
	name->checkCast("java::lang::String");
	//    .local v0, "name":Ljava/lang/String;
	cVar0 = this->map->get(name);
	cVar0->checkCast("sun::security::x509::Extension");
	if ( !(cVar0->getExtensionId()->equals(oid)) )  
		goto label_cond_a;
	return name;
	// 1111    .line 248
	// 1112    .end local v0    # "name":Ljava/lang/String;
label_cond_29:
	return 0x0;

}
// .method public getUnparseableExtensions()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,sun::security::x509::Extension>> sun::security::x509::CertificateExtensions::getUnparseableExtensions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1122        value = {
	// 1123            "()",
	// 1124            "Ljava/util/Map",
	// 1125            "<",
	// 1126            "Ljava/lang/String;",
	// 1127            "Lsun/security/x509/Extension;",
	// 1128            ">;"
	// 1129        }
	// 1130    .end annotation
	if ( this->unparseableExtensions )     
		goto label_cond_9;
	return java::util::Collections::emptyMap({const[class].FS-Param});
	// 1145    .line 271
label_cond_9:
	return this->unparseableExtensions;

}
// .method public hasUnsupportedCriticalExtension()Z
bool sun::security::x509::CertificateExtensions::hasUnsupportedCriticalExtension()
{
	
	return this->unsupportedCritExt;

}
// .method public hashCode()I
int sun::security::x509::CertificateExtensions::hashCode()
{
	
	return (this->map->hashCode() +  this->getUnparseableExtensions()->hashCode());

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CertificateExtensions::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1191        value = {
	// 1192            Ljava/io/IOException;
	// 1193        }
	// 1194    .end annotation
	if ( !(obj->instanceOf("sun::security::x509::Extension")) )  
		goto label_cond_c;
	obj->checkCast("sun::security::x509::Extension");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->map->put(name, obj);
	return;
	// 1213    .line 206
	// 1214    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown extension type.")));
	// throw
	throw cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificateExtensions::toString()
{
	
	return this->map->toString();

}


