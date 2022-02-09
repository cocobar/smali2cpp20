// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\ExtendedKeyUsageExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Vector.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.ExtendedKeyUsageExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::ExtendedKeyUsageExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.ExtendedKeyUsage");
static sun::security::x509::ExtendedKeyUsageExtension::NAME = std::make_shared<java::lang::String>("ExtendedKeyUsage");
static sun::security::x509::ExtendedKeyUsageExtension::OCSPSigningOidData;
static sun::security::x509::ExtendedKeyUsageExtension::USAGES = std::make_shared<java::lang::String>("usages");
static sun::security::x509::ExtendedKeyUsageExtension::anyExtendedKeyUsageOidData;
static sun::security::x509::ExtendedKeyUsageExtension::clientAuthOidData;
static sun::security::x509::ExtendedKeyUsageExtension::codeSigningOidData;
static sun::security::x509::ExtendedKeyUsageExtension::emailProtectionOidData;
static sun::security::x509::ExtendedKeyUsageExtension::ipsecEndSystemOidData;
static sun::security::x509::ExtendedKeyUsageExtension::ipsecTunnelOidData;
static sun::security::x509::ExtendedKeyUsageExtension::ipsecUserOidData;
static sun::security::x509::ExtendedKeyUsageExtension::map;
static sun::security::x509::ExtendedKeyUsageExtension::serverAuthOidData;
static sun::security::x509::ExtendedKeyUsageExtension::timeStampingOidData;
// .method static constructor <clinit>()V
void sun::security::x509::ExtendedKeyUsageExtension::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared<std::vector<int[]>> cVar2;
	std::shared<std::vector<int[]>> cVar3;
	std::shared<std::vector<int[]>> cVar4;
	std::shared<std::vector<int[]>> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	std::shared<std::vector<int[]>> cVar8;
	std::shared<std::vector<int[]>> cVar9;
	std::shared<std::vector<int[]>> cVar10;
	
	cVar0 = 0x9;
	cVar1 = std::make_shared<java::util::HashMap>();
	sun::security::x509::ExtendedKeyUsageExtension::map = cVar1;
	?;
	sun::security::x509::ExtendedKeyUsageExtension::anyExtendedKeyUsageOidData = ?;
	cVar2 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::ExtendedKeyUsageExtension::serverAuthOidData = cVar2;
	cVar3 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::ExtendedKeyUsageExtension::clientAuthOidData = cVar3;
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::ExtendedKeyUsageExtension::codeSigningOidData = cVar4;
	cVar5 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::ExtendedKeyUsageExtension::emailProtectionOidData = cVar5;
	cVar6 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::ExtendedKeyUsageExtension::ipsecEndSystemOidData = cVar6;
	cVar7 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::ExtendedKeyUsageExtension::ipsecTunnelOidData = cVar7;
	cVar8 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::ExtendedKeyUsageExtension::ipsecUserOidData = cVar8;
	cVar9 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::ExtendedKeyUsageExtension::timeStampingOidData = cVar9;
	cVar10 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::ExtendedKeyUsageExtension::OCSPSigningOidData = cVar10;
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::anyExtendedKeyUsageOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("anyExtendedKeyUsage")));
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::serverAuthOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("serverAuth")));
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::clientAuthOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("clientAuth")));
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::codeSigningOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("codeSigning")));
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::emailProtectionOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("emailProtection")));
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::ipsecEndSystemOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("ipsecEndSystem")));
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::ipsecTunnelOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("ipsecTunnel")));
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::ipsecUserOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("ipsecUser")));
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::timeStampingOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("timeStamping")));
	sun::security::x509::ExtendedKeyUsageExtension::map->put(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::ExtendedKeyUsageExtension::OCSPSigningOidData), std::make_shared<java::lang::String>(std::make_shared<char[]>("OCSPSigning")));
	return;
	// 302    .line 103
	// 303    :array_e2
	// 304    .array-data 4
	// 305        0x1
	// 306        0x3
	// 307        0x6
	// 308        0x1
	// 309        0x5
	// 310        0x5
	// 311        0x7
	// 312        0x3
	// 313        0x1
	// 314    .end array-data
	// 316    .line 104
	// 317    :array_f8
	// 318    .array-data 4
	// 319        0x1
	// 320        0x3
	// 321        0x6
	// 322        0x1
	// 323        0x5
	// 324        0x5
	// 325        0x7
	// 326        0x3
	// 327        0x2
	// 328    .end array-data
	// 330    .line 105
	// 331    :array_10e
	// 332    .array-data 4
	// 333        0x1
	// 334        0x3
	// 335        0x6
	// 336        0x1
	// 337        0x5
	// 338        0x5
	// 339        0x7
	// 340        0x3
	// 341        0x3
	// 342    .end array-data
	// 344    .line 106
	// 345    :array_124
	// 346    .array-data 4
	// 347        0x1
	// 348        0x3
	// 349        0x6
	// 350        0x1
	// 351        0x5
	// 352        0x5
	// 353        0x7
	// 354        0x3
	// 355        0x4
	// 356    .end array-data
	// 358    .line 107
	// 359    :array_13a
	// 360    .array-data 4
	// 361        0x1
	// 362        0x3
	// 363        0x6
	// 364        0x1
	// 365        0x5
	// 366        0x5
	// 367        0x7
	// 368        0x3
	// 369        0x5
	// 370    .end array-data
	// 372    .line 108
	// 373    :array_150
	// 374    .array-data 4
	// 375        0x1
	// 376        0x3
	// 377        0x6
	// 378        0x1
	// 379        0x5
	// 380        0x5
	// 381        0x7
	// 382        0x3
	// 383        0x6
	// 384    .end array-data
	// 386    .line 109
	// 387    :array_166
	// 388    .array-data 4
	// 389        0x1
	// 390        0x3
	// 391        0x6
	// 392        0x1
	// 393        0x5
	// 394        0x5
	// 395        0x7
	// 396        0x3
	// 397        0x7
	// 398    .end array-data
	// 400    .line 110
	// 401    :array_17c
	// 402    .array-data 4
	// 403        0x1
	// 404        0x3
	// 405        0x6
	// 406        0x1
	// 407        0x5
	// 408        0x5
	// 409        0x7
	// 410        0x3
	// 411        0x8
	// 412    .end array-data
	// 414    .line 111
	// 415    :array_192
	// 416    .array-data 4
	// 417        0x1
	// 418        0x3
	// 419        0x6
	// 420        0x1
	// 421        0x5
	// 422        0x5
	// 423        0x7
	// 424        0x3
	// 425        0x9
	// 426    .end array-data

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::ExtendedKeyUsageExtension::ExtendedKeyUsageExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::util::Vector> cVar1;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 434        value = {
	// 435            Ljava/io/IOException;
	// 436        }
	// 437    .end annotation
	// 441    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::ExtendedKeyUsage_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v2, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_27;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for ExtendedKeyUsageExtension.")));
	// throw
	throw cVar0;
	// 485    .line 192
label_cond_27:
	cVar1 = std::make_shared<java::util::Vector>();
	this->keyUsages = cVar1;
label_goto_2e:
	if ( !(val->data->available()) )  
		goto label_cond_46;
	//    .local v0, "seq":Lsun/security/util/DerValue;
	//    .local v1, "usage":Lsun/security/util/ObjectIdentifier;
	this->keyUsages->addElement(val->data->getDerValue()->getOID());
	goto label_goto_2e;
	// 524    .line 198
	// 525    .end local v0    # "seq":Lsun/security/util/DerValue;
	// 526    .end local v1    # "usage":Lsun/security/util/ObjectIdentifier;
label_cond_46:
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/util/Vector;)V
sun::security::x509::ExtendedKeyUsageExtension::ExtendedKeyUsageExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::util::Vector<sun::security::util::ObjectIdentifier>> keyUsages)
{
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .annotation system Ldalvik/annotation/Signature;
	// 535        value = {
	// 536            "(",
	// 537            "Ljava/lang/Boolean;",
	// 538            "Ljava/util/Vector",
	// 539            "<",
	// 540            "Lsun/security/util/ObjectIdentifier;",
	// 541            ">;)V"
	// 542        }
	// 543    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 546        value = {
	// 547            Ljava/io/IOException;
	// 548        }
	// 549    .end annotation
	//    .local p2, "keyUsages":Ljava/util/Vector;, "Ljava/util/Vector<Lsun/security/util/ObjectIdentifier;>;"
	// 554    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->keyUsages = keyUsages;
	this->extensionId = sun::security::x509::PKIXExtensions::ExtendedKeyUsage_Id;
	this->critical = critical->booleanValue();
	this->encodeThis();
	return;

}
// .method public constructor <init>(Ljava/util/Vector;)V
sun::security::x509::ExtendedKeyUsageExtension::ExtendedKeyUsageExtension(std::shared_ptr<java::util::Vector<sun::security::util::ObjectIdentifier>> keyUsages)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 581        value = {
	// 582            "(",
	// 583            "Ljava/util/Vector",
	// 584            "<",
	// 585            "Lsun/security/util/ObjectIdentifier;",
	// 586            ">;)V"
	// 587        }
	// 588    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 591        value = {
	// 592            Ljava/io/IOException;
	// 593        }
	// 594    .end annotation
	//    .local p1, "keyUsages":Ljava/util/Vector;, "Ljava/util/Vector<Lsun/security/util/ObjectIdentifier;>;"
	sun::security::x509::ExtendedKeyUsageExtension::(java::lang::Boolean::FALSE, keyUsages);
	return;

}
// .method private encodeThis()V
void sun::security::x509::ExtendedKeyUsageExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> os;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	int i;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 610        value = {
	// 611            Ljava/io/IOException;
	// 612        }
	// 613    .end annotation
	if ( !(this->keyUsages) )  
		goto label_cond_d;
	if ( !(this->keyUsages->isEmpty()) )  
		goto label_cond_10;
label_cond_d:
	this->extensionValue = 0x0;
	return;
	// 638    .line 137
label_cond_10:
	os = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "os":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1b:
	if ( i >= this->keyUsages->size() )
		goto label_cond_31;
	cVar0 = this->keyUsages->elementAt(i);
	cVar0->checkCast("sun::security::util::ObjectIdentifier");
	tmp->putOID(cVar0);
	i = ( i + 0x1);
	goto label_goto_1b;
	// 680    .line 144
label_cond_31:
	os->write(0x30, tmp);
	this->extensionValue = os->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::ExtendedKeyUsageExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 703        value = {
	// 704            Ljava/io/IOException;
	// 705        }
	// 706    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("usages")))) )  
		goto label_cond_10;
	this->keyUsages = 0x0;
	this->encodeThis();
	return;
	// 729    .line 280
label_cond_10:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:ExtendedKeyUsageExtension.")))->toString());
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::ExtendedKeyUsageExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 776        value = {
	// 777            Ljava/io/IOException;
	// 778        }
	// 779    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::ExtendedKeyUsage_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/util/Vector;
std::shared_ptr<java::util::Vector<sun::security::util::ObjectIdentifier>> sun::security::x509::ExtendedKeyUsageExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 843        value = {
	// 844            "(",
	// 845            "Ljava/lang/String;",
	// 846            ")",
	// 847            "Ljava/util/Vector",
	// 848            "<",
	// 849            "Lsun/security/util/ObjectIdentifier;",
	// 850            ">;"
	// 851        }
	// 852    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 855        value = {
	// 856            Ljava/io/IOException;
	// 857        }
	// 858    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("usages")))) )  
		goto label_cond_c;
	return this->keyUsages;
	// 875    .line 267
label_cond_c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:ExtendedKeyUsageExtension.")))->toString());
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::ExtendedKeyUsageExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 921        value = {
	// 922            "()",
	// 923            "Ljava/util/Enumeration",
	// 924            "<",
	// 925            "Ljava/lang/String;",
	// 926            ">;"
	// 927        }
	// 928    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("usages")));
	return elements->elements();

}
// .method public getExtendedKeyUsage()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::security::x509::ExtendedKeyUsageExtension::getExtendedKeyUsage()
{
	
	std::shared_ptr<java::util::ArrayList> al;
	std::shared_ptr<java::util::Iterator> oid_S_iterator;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 953        value = {
	// 954            "()",
	// 955            "Ljava/util/List",
	// 956            "<",
	// 957            "Ljava/lang/String;",
	// 958            ">;"
	// 959        }
	// 960    .end annotation
	al = std::make_shared<java::util::ArrayList>(this->keyUsages->size());
	//    .local v0, "al":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	oid_S_iterator = this->keyUsages->iterator();
	//    .local v2, "oid$iterator":Ljava/util/Iterator;
label_goto_11:
	if ( !(oid_S_iterator->hasNext()) )  
		goto label_cond_25;
	oid = oid_S_iterator->next();
	oid->checkCast("sun::security::util::ObjectIdentifier");
	//    .local v1, "oid":Lsun/security/util/ObjectIdentifier;
	al->add(oid->toString());
	goto label_goto_11;
	// 1006    .line 310
	// 1007    .end local v1    # "oid":Lsun/security/util/ObjectIdentifier;
label_cond_25:
	return al;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::ExtendedKeyUsageExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("ExtendedKeyUsage"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::ExtendedKeyUsageExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1027        value = {
	// 1028            Ljava/io/IOException;
	// 1029        }
	// 1030    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("usages")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("java::util::Vector") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type Vector.")));
	// throw
	throw cVar0;
	// 1056    .line 250
label_cond_16:
	obj->checkCast("java::util::Vector");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->keyUsages = obj;
	this->encodeThis();
	return;
	// 1069    .line 252
	// 1070    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:ExtendedKeyUsageExtension.")))->toString());
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::ExtendedKeyUsageExtension::toString()
{
	
	std::shared_ptr<java::lang::String> usage;
	int first;
	std::shared_ptr<java::util::Iterator> oid_S_iterator;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	if ( this->keyUsages )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 1126    .line 205
label_cond_8:
	usage = std::make_shared<java::lang::String>(std::make_shared<char[]>("  "));
	//    .local v4, "usage":Ljava/lang/String;
	first = 0x1;
	//    .local v0, "first":Z
	oid_S_iterator = this->keyUsages->iterator();
	//    .local v2, "oid$iterator":Ljava/util/Iterator;
label_goto_12:
	if ( !(oid_S_iterator->hasNext()) )  
		goto label_cond_67;
	oid = oid_S_iterator->next();
	oid->checkCast("sun::security::util::ObjectIdentifier");
	//    .local v1, "oid":Lsun/security/util/ObjectIdentifier;
	if ( first )     
		goto label_cond_34;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	usage = cVar0->append(usage)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  ")))->toString();
label_cond_34:
	result = sun::security::x509::ExtendedKeyUsageExtension::map->get(oid);
	result->checkCast("java::lang::String");
	//    .local v3, "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_51;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	usage = cVar1->append(usage)->append(result)->toString();
label_goto_4f:
	first = 0x0;
	goto label_goto_12;
	// 1216    .line 216
label_cond_51:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	usage = cVar2->append(usage)->append(oid->toString())->toString();
	goto label_goto_4f;
	// 1240    .line 220
	// 1241    .end local v1    # "oid":Lsun/security/util/ObjectIdentifier;
	// 1242    .end local v3    # "result":Ljava/lang/String;
label_cond_67:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	return cVar3->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ExtendedKeyUsages [\n")))->append(usage)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n]\n")))->toString();

}


