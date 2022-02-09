// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CRLDistributionPointsExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CRLDistributionPointsExtension.h"
#include "sun.security.x509.DistributionPoint.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::CRLDistributionPointsExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.CRLDistributionPoints");
static sun::security::x509::CRLDistributionPointsExtension::NAME = std::make_shared<java::lang::String>("CRLDistributionPoints");
static sun::security::x509::CRLDistributionPointsExtension::POINTS = std::make_shared<java::lang::String>("points");
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::CRLDistributionPointsExtension::CRLDistributionPointsExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 050        value = {
	// 051            Ljava/io/IOException;
	// 052        }
	// 053    .end annotation
	sun::security::x509::CRLDistributionPointsExtension::(sun::security::x509::PKIXExtensions::CRLDistributionPoints_Id, critical, value, std::make_shared<java::lang::String>(std::make_shared<char[]>("CRLDistributionPoints")));
	return;

}
// .method public constructor <init>(Ljava/util/List;)V
sun::security::x509::CRLDistributionPointsExtension::CRLDistributionPointsExtension(std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> distributionPoints)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 070        value = {
	// 071            "(",
	// 072            "Ljava/util/List",
	// 073            "<",
	// 074            "Lsun/security/x509/DistributionPoint;",
	// 075            ">;)V"
	// 076        }
	// 077    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 080        value = {
	// 081            Ljava/io/IOException;
	// 082        }
	// 083    .end annotation
	//    .local p1, "distributionPoints":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	sun::security::x509::CRLDistributionPointsExtension::(0x0, distributionPoints);
	return;

}
// .method protected constructor <init>(Lsun/security/util/ObjectIdentifier;Ljava/lang/Boolean;Ljava/lang/Object;Ljava/lang/String;)V
sun::security::x509::CRLDistributionPointsExtension::CRLDistributionPointsExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value,std::shared_ptr<java::lang::String> extensionName)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::ArrayList> cVar3;
	std::shared_ptr<sun::security::x509::DistributionPoint> point;
	
	//    .param p1, "extensionId"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "critical"    # Ljava/lang/Boolean;
	//    .param p3, "value"    # Ljava/lang/Object;
	//    .param p4, "extensionName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 103        value = {
	// 104            Ljava/io/IOException;
	// 105        }
	// 106    .end annotation
	// 110    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = extensionId;
	this->critical = critical->booleanValue();
	if ( value->instanceOf("unsigned char[]") )     
		goto label_cond_18;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal argument type")));
	// throw
	throw cVar0;
	// 136    .line 174
label_cond_18:
	value->checkCast("unsigned char[]");
	//    .end local p3    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v2, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_4a;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for ")))->append(extensionName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" extension.")))->toString());
	// throw
	throw cVar1;
	// 191    .line 180
label_cond_4a:
	cVar3 = std::make_shared<java::util::ArrayList>();
	this->distributionPoints = cVar3;
label_goto_51:
	if ( !(val->data->available()) )  
		goto label_cond_6a;
	//    .local v1, "seq":Lsun/security/util/DerValue;
	point = std::make_shared<sun::security::x509::DistributionPoint>(val->data->getDerValue());
	//    .local v0, "point":Lsun/security/x509/DistributionPoint;
	this->distributionPoints->add(point);
	goto label_goto_51;
	// 230    .line 186
	// 231    .end local v0    # "point":Lsun/security/x509/DistributionPoint;
	// 232    .end local v1    # "seq":Lsun/security/util/DerValue;
label_cond_6a:
	this->extensionName = extensionName;
	return;

}
// .method protected constructor <init>(Lsun/security/util/ObjectIdentifier;ZLjava/util/List;Ljava/lang/String;)V
sun::security::x509::CRLDistributionPointsExtension::CRLDistributionPointsExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool isCritical,std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> distributionPoints,std::shared_ptr<java::lang::String> extensionName)
{
	
	//    .param p1, "extensionId"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "isCritical"    # Z
	//    .param p4, "extensionName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 246        value = {
	// 247            "(",
	// 248            "Lsun/security/util/ObjectIdentifier;",
	// 249            "Z",
	// 250            "Ljava/util/List",
	// 251            "<",
	// 252            "Lsun/security/x509/DistributionPoint;",
	// 253            ">;",
	// 254            "Ljava/lang/String;",
	// 255            ")V"
	// 256        }
	// 257    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 260        value = {
	// 261            Ljava/io/IOException;
	// 262        }
	// 263    .end annotation
	//    .local p3, "distributionPoints":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	// 268    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = extensionId;
	this->critical = isCritical;
	this->distributionPoints = distributionPoints;
	this->encodeThis();
	this->extensionName = extensionName;
	return;

}
// .method public constructor <init>(ZLjava/util/List;)V
sun::security::x509::CRLDistributionPointsExtension::CRLDistributionPointsExtension(bool isCritical,std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> distributionPoints)
{
	
	//    .param p1, "isCritical"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 293        value = {
	// 294            "(Z",
	// 295            "Ljava/util/List",
	// 296            "<",
	// 297            "Lsun/security/x509/DistributionPoint;",
	// 298            ">;)V"
	// 299        }
	// 300    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 303        value = {
	// 304            Ljava/io/IOException;
	// 305        }
	// 306    .end annotation
	//    .local p2, "distributionPoints":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	sun::security::x509::CRLDistributionPointsExtension::(sun::security::x509::PKIXExtensions::CRLDistributionPoints_Id, isCritical, distributionPoints, std::make_shared<java::lang::String>(std::make_shared<char[]>("CRLDistributionPoints")));
	return;

}
// .method private encodeThis()V
void sun::security::x509::CRLDistributionPointsExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> pnts;
	std::shared_ptr<java::util::Iterator> point_S_iterator;
	std::shared_ptr<sun::security::x509::DistributionPoint> point;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 326        value = {
	// 327            Ljava/io/IOException;
	// 328        }
	// 329    .end annotation
	if ( !(this->distributionPoints->isEmpty()) )  
		goto label_cond_c;
	this->extensionValue = 0x0;
label_goto_b:
	return;
	// 350    .line 284
label_cond_c:
	pnts = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "pnts":Lsun/security/util/DerOutputStream;
	point_S_iterator = this->distributionPoints->iterator();
	//    .local v2, "point$iterator":Ljava/util/Iterator;
label_goto_17:
	if ( !(point_S_iterator->hasNext()) )  
		goto label_cond_27;
	point = point_S_iterator->next();
	point->checkCast("sun::security::x509::DistributionPoint");
	//    .local v1, "point":Lsun/security/x509/DistributionPoint;
	point->encode(pnts);
	goto label_goto_17;
	// 384    .line 288
	// 385    .end local v1    # "point":Lsun/security/x509/DistributionPoint;
label_cond_27:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "seq":Lsun/security/util/DerOutputStream;
	seq->write(0x30, pnts);
	this->extensionValue = seq->toByteArray();
	goto label_goto_b;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::CRLDistributionPointsExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 413        value = {
	// 414            Ljava/io/IOException;
	// 415        }
	// 416    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("points")))) )  
		goto label_cond_13;
	this->distributionPoints = java::util::Collections::emptyList({const[class].FS-Param});
	this->encodeThis();
	return;
	// 442    .line 262
label_cond_13:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:")))->append(this->extensionName)->append(0x2e)->toString());
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::CRLDistributionPointsExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 505        value = {
	// 506            Ljava/io/IOException;
	// 507        }
	// 508    .end annotation
	this->encode(out, sun::security::x509::PKIXExtensions::CRLDistributionPoints_Id, 0x0);
	return;

}
// .method protected encode(Ljava/io/OutputStream;Lsun/security/util/ObjectIdentifier;Z)V
void sun::security::x509::CRLDistributionPointsExtension::encode(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool isCritical)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .param p2, "extensionId"    # Lsun/security/util/ObjectIdentifier;
	//    .param p3, "isCritical"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 528        value = {
	// 529            Ljava/io/IOException;
	// 530        }
	// 531    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_10;
	this->extensionId = extensionId;
	this->critical = isCritical;
	this->encodeThis();
label_cond_10:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> sun::security::x509::CRLDistributionPointsExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 591        value = {
	// 592            "(",
	// 593            "Ljava/lang/String;",
	// 594            ")",
	// 595            "Ljava/util/List",
	// 596            "<",
	// 597            "Lsun/security/x509/DistributionPoint;",
	// 598            ">;"
	// 599        }
	// 600    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 603        value = {
	// 604            Ljava/io/IOException;
	// 605        }
	// 606    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("points")))) )  
		goto label_cond_c;
	return this->distributionPoints;
	// 623    .line 248
label_cond_c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:")))->append(this->extensionName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))->toString());
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::CRLDistributionPointsExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 685        value = {
	// 686            "()",
	// 687            "Ljava/util/Enumeration",
	// 688            "<",
	// 689            "Ljava/lang/String;",
	// 690            ">;"
	// 691        }
	// 692    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("points")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CRLDistributionPointsExtension::getName()
{
	
	return this->extensionName;

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::CRLDistributionPointsExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 729        value = {
	// 730            Ljava/io/IOException;
	// 731        }
	// 732    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("points")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("java::util::List") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type List.")));
	// throw
	throw cVar0;
	// 758    .line 232
label_cond_16:
	obj->checkCast("java::util::List");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->distributionPoints = obj;
	this->encodeThis();
	return;
	// 771    .line 234
	// 772    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:")))->append(this->extensionName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))->toString());
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CRLDistributionPointsExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->toString())->append(this->extensionName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" [\n  ")))->append(this->distributionPoints)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();

}


