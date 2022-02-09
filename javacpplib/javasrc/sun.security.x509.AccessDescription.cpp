// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\AccessDescription.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AccessDescription.h"
#include "sun.security.x509.GeneralName.h"

static sun::security::x509::AccessDescription::Ad_CAISSUERS_Id;
static sun::security::x509::AccessDescription::Ad_CAREPOSITORY_Id;
static sun::security::x509::AccessDescription::Ad_OCSP_Id;
static sun::security::x509::AccessDescription::Ad_TIMESTAMPING_Id;
// .method static constructor <clinit>()V
void sun::security::x509::AccessDescription::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<int[]>> cVar1;
	std::shared<std::vector<int[]>> cVar2;
	std::shared<std::vector<int[]>> cVar3;
	std::shared<std::vector<int[]>> cVar4;
	
	cVar0 = 0x9;
	cVar1 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::AccessDescription::Ad_OCSP_Id = sun::security::util::ObjectIdentifier::newInternal(cVar1);
	cVar2 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::AccessDescription::Ad_CAISSUERS_Id = sun::security::util::ObjectIdentifier::newInternal(cVar2);
	cVar3 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::AccessDescription::Ad_TIMESTAMPING_Id = sun::security::util::ObjectIdentifier::newInternal(cVar3);
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::AccessDescription::Ad_CAREPOSITORY_Id = sun::security::util::ObjectIdentifier::newInternal(cVar4);
	return;
	// 082    .line 45
	// 083    nop
	// 085    :array_30
	// 086    .array-data 4
	// 087        0x1
	// 088        0x3
	// 089        0x6
	// 090        0x1
	// 091        0x5
	// 092        0x5
	// 093        0x7
	// 094        0x30
	// 095        0x1
	// 096    .end array-data
	// 098    .line 48
	// 099    :array_46
	// 100    .array-data 4
	// 101        0x1
	// 102        0x3
	// 103        0x6
	// 104        0x1
	// 105        0x5
	// 106        0x5
	// 107        0x7
	// 108        0x30
	// 109        0x2
	// 110    .end array-data
	// 112    .line 51
	// 113    :array_5c
	// 114    .array-data 4
	// 115        0x1
	// 116        0x3
	// 117        0x6
	// 118        0x1
	// 119        0x5
	// 120        0x5
	// 121        0x7
	// 122        0x30
	// 123        0x3
	// 124    .end array-data
	// 126    .line 54
	// 127    :array_72
	// 128    .array-data 4
	// 129        0x1
	// 130        0x3
	// 131        0x6
	// 132        0x1
	// 133        0x5
	// 134        0x5
	// 135        0x7
	// 136        0x30
	// 137        0x5
	// 138    .end array-data

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::AccessDescription::AccessDescription(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	std::shared_ptr<sun::security::util::DerInputStream> derIn;
	std::shared_ptr<sun::security::x509::GeneralName> cVar0;
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 145        value = {
	// 146            Ljava/io/IOException;
	// 147        }
	// 148    .end annotation
	// 152    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->myhash = -0x1;
	derIn = derValue->getData();
	//    .local v0, "derIn":Lsun/security/util/DerInputStream;
	this->accessMethod = derIn->getOID();
	cVar0 = std::make_shared<sun::security::x509::GeneralName>(derIn->getDerValue());
	this->accessLocation = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;Lsun/security/x509/GeneralName;)V
sun::security::x509::AccessDescription::AccessDescription(std::shared_ptr<sun::security::util::ObjectIdentifier> accessMethod,std::shared_ptr<sun::security::x509::GeneralName> accessLocation)
{
	
	//    .param p1, "accessMethod"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "accessLocation"    # Lsun/security/x509/GeneralName;
	// 194    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->myhash = -0x1;
	this->accessMethod = accessMethod;
	this->accessLocation = accessLocation;
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::AccessDescription::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 217        value = {
	// 218            Ljava/io/IOException;
	// 219        }
	// 220    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	tmp->putOID(this->accessMethod);
	this->accessLocation->encode(tmp);
	out->write(0x30, tmp);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::AccessDescription::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<sun::security::x509::AccessDescription> that;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj) )  
		goto label_cond_9;
	if ( !(( obj->instanceOf("sun::security::x509::AccessDescription") ^ 0x1)) )  
		goto label_cond_a;
label_cond_9:
	return cVar1;
label_cond_a:
	that = obj;
	that->checkCast("sun::security::x509::AccessDescription");
	//    .local v0, "that":Lsun/security/x509/AccessDescription;
	if ( this != that )
		goto label_cond_11;
	return 0x1;
	// 283    .line 98
label_cond_11:
	if ( !(this->accessMethod->equals(that->getAccessMethod())) )  
		goto label_cond_27;
	cVar1 = this->accessLocation->equals(that->getAccessLocation());
label_cond_27:
	return cVar1;

}
// .method public getAccessLocation()Lsun/security/x509/GeneralName;
std::shared_ptr<sun::security::x509::GeneralName> sun::security::x509::AccessDescription::getAccessLocation()
{
	
	return this->accessLocation;

}
// .method public getAccessMethod()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::AccessDescription::getAccessMethod()
{
	
	return this->accessMethod;

}
// .method public hashCode()I
int sun::security::x509::AccessDescription::hashCode()
{
	
	if ( this->myhash != -0x1 )
		goto label_cond_14;
	this->myhash = (this->accessMethod->hashCode() +  this->accessLocation->hashCode());
label_cond_14:
	return this->myhash;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AccessDescription::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	0x0;
	//    .local v0, "method":Ljava/lang/String;
	if ( !(this->accessMethod->equals(sun::security::x509::AccessDescription::Ad_CAISSUERS_Id)) )  
		goto label_cond_3b;
	//    .local v0, "method":Ljava/lang/String;
label_goto_e:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n   accessMethod: ")))->append(method)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n   accessLocation: ")))->append(this->accessLocation->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	// 441    .line 106
	// 442    .local v0, "method":Ljava/lang/String;
label_cond_3b:
	if ( !(this->accessMethod->equals(sun::security::x509::AccessDescription::Ad_CAREPOSITORY_Id)) )  
		goto label_cond_49;
	//    .local v0, "method":Ljava/lang/String;
	goto label_goto_e;
	// 460    .line 108
	// 461    .local v0, "method":Ljava/lang/String;
label_cond_49:
	if ( !(this->accessMethod->equals(sun::security::x509::AccessDescription::Ad_TIMESTAMPING_Id)) )  
		goto label_cond_57;
	//    .local v0, "method":Ljava/lang/String;
	goto label_goto_e;
	// 479    .line 110
	// 480    .local v0, "method":Ljava/lang/String;
label_cond_57:
	if ( !(this->accessMethod->equals(sun::security::x509::AccessDescription::Ad_OCSP_Id)) )  
		goto label_cond_65;
	//    .local v0, "method":Ljava/lang/String;
	goto label_goto_e;
	// 498    .line 113
	// 499    .local v0, "method":Ljava/lang/String;
label_cond_65:
	//    .local v0, "method":Ljava/lang/String;
	goto label_goto_e;

}


