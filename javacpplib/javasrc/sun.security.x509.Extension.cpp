// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\Extension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Arrays.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.Extension.h"

static sun::security::x509::Extension::hashMagic = 0x1f;
// .method public constructor <init>()V
sun::security::x509::Extension::Extension()
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	
	cVar0 = 0x0;
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->extensionId = cVar0;
	this->critical = 0x0;
	this->extensionValue = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::Extension::Extension(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	unsigned char val;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 050        value = {
	// 051            Ljava/io/IOException;
	// 052        }
	// 053    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 061    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->extensionId = cVar0;
	this->critical = cVar1;
	this->extensionValue = cVar0;
	in = derVal->toDerInputStream();
	//    .local v0, "in":Lsun/security/util/DerInputStream;
	this->extensionId = in->getOID();
	val = in->getDerValue();
	//    .local v1, "val":Lsun/security/util/DerValue;
	if ( val->tag != 0x1 )
		goto label_cond_2f;
	this->critical = val->getBoolean();
	this->extensionValue = in->getDerValue()->getOctetString();
label_goto_2e:
	return;
	// 121    .line 91
label_cond_2f:
	this->critical = cVar1;
	this->extensionValue = val->getOctetString();
	goto label_goto_2e;

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;Z[B)V
sun::security::x509::Extension::Extension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool critical,std::shared_ptr<unsigned char[]> extensionValue)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	std::shared_ptr<sun::security::util::DerValue> inDerVal;
	
	//    .param p1, "extensionId"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "critical"    # Z
	//    .param p3, "extensionValue"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 141        value = {
	// 142            Ljava/io/IOException;
	// 143        }
	// 144    .end annotation
	cVar0 = 0x0;
	// 150    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->extensionId = cVar0;
	this->critical = 0x0;
	this->extensionValue = cVar0;
	this->extensionId = extensionId;
	this->critical = critical;
	inDerVal = std::make_shared<sun::security::util::DerValue>(extensionValue);
	//    .local v0, "inDerVal":Lsun/security/util/DerValue;
	this->extensionValue = inDerVal->getOctetString();
	return;

}
// .method public constructor <init>(Lsun/security/x509/Extension;)V
sun::security::x509::Extension::Extension(std::shared_ptr<sun::security::x509::Extension> ext)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	
	//    .param p1, "ext"    # Lsun/security/x509/Extension;
	cVar0 = 0x0;
	// 194    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->extensionId = cVar0;
	this->critical = 0x0;
	this->extensionValue = cVar0;
	this->extensionId = ext->extensionId;
	this->critical = ext->critical;
	this->extensionValue = ext->extensionValue;
	return;

}
// .method public static newExtension(Lsun/security/util/ObjectIdentifier;Z[B)Lsun/security/x509/Extension;
std::shared_ptr<sun::security::x509::Extension> sun::security::x509::Extension::newExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> extensionId,bool critical,std::shared_ptr<unsigned char[]> rawExtensionValue)
{
	
	std::shared_ptr<sun::security::x509::Extension> ext;
	
	//    .param p0, "extensionId"    # Lsun/security/util/ObjectIdentifier;
	//    .param p1, "critical"    # Z
	//    .param p2, "rawExtensionValue"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 232        value = {
	// 233            Ljava/io/IOException;
	// 234        }
	// 235    .end annotation
	ext = std::make_shared<sun::security::x509::Extension>();
	//    .local v0, "ext":Lsun/security/x509/Extension;
	ext->extensionId = extensionId;
	ext->critical = critical;
	ext->extensionValue = rawExtensionValue;
	return ext;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::Extension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<sun::security::util::DerOutputStream> dos1;
	std::shared_ptr<sun::security::util::DerOutputStream> dos2;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 263        value = {
	// 264            Ljava/io/IOException;
	// 265        }
	// 266    .end annotation
	if ( out )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 279    .line 149
label_cond_8:
	dos1 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "dos1":Lsun/security/util/DerOutputStream;
	dos2 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "dos2":Lsun/security/util/DerOutputStream;
	dos1->putOID(this->extensionId);
	if ( !(this->critical) )  
		goto label_cond_20;
	dos1->putBoolean(this->critical);
label_cond_20:
	dos1->putOctetString(this->extensionValue);
	dos2->write(0x30, dos1);
	out->write(dos2->toByteArray());
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::Extension::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> dos;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 333        value = {
	// 334            Ljava/io/IOException;
	// 335        }
	// 336    .end annotation
	if ( this->extensionId )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null OID to encode for the extension!")));
	// throw
	throw cVar0;
	// 353    .line 172
label_cond_d:
	if ( this->extensionValue )     
		goto label_cond_1a;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No value to encode for the extension!")));
	// throw
	throw cVar1;
	// 368    .line 175
label_cond_1a:
	dos = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "dos":Lsun/security/util/DerOutputStream;
	dos->putOID(this->extensionId);
	if ( !(this->critical) )  
		goto label_cond_2d;
	dos->putBoolean(this->critical);
label_cond_2d:
	dos->putOctetString(this->extensionValue);
	out->write(0x30, dos);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::Extension::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<sun::security::x509::Extension> otherExt;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return 0x1;
	// 420    .line 267
label_cond_5:
	if ( other->instanceOf("sun::security::x509::Extension") )     
		goto label_cond_a;
	return cVar0;
label_cond_a:
	otherExt = other;
	otherExt->checkCast("sun::security::x509::Extension");
	//    .local v0, "otherExt":Lsun/security/x509/Extension;
	if ( this->critical == otherExt->critical )
		goto label_cond_14;
	return cVar0;
	// 446    .line 272
label_cond_14:
	if ( this->extensionId->equals(otherExt->extensionId) )     
		goto label_cond_1f;
	return cVar0;
	// 461    .line 274
label_cond_1f:
	return java::util::Arrays::equals(this->extensionValue, otherExt->extensionValue);

}
// .method public getExtensionId()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::Extension::getExtensionId()
{
	
	return this->extensionId;

}
// .method public getExtensionValue()[B
unsigned char sun::security::x509::Extension::getExtensionValue()
{
	
	return this->extensionValue;

}
// .method public getId()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::Extension::getId()
{
	
	return this->extensionId->toString();

}
// .method public getValue()[B
unsigned char sun::security::x509::Extension::getValue()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	cVar0 = this->extensionValue->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public hashCode()I
int sun::security::x509::Extension::hashCode()
{
	
	int h;
	std::shared_ptr<unsigned char[]> val;
	int len;
	int cVar0;
	
	h = 0x0;
	//    .local v0, "h":I
	if ( !(this->extensionValue) )  
		goto label_cond_13;
	val = this->extensionValue;
	//    .local v3, "val":[B
	//    .local v1, "len":I
	len = val->size();
	//    .end local v1    # "len":I
	//    .local v2, "len":I
label_goto_9:
	if ( len <= 0 )
		goto label_cond_13;
	len = ( len + -0x1);
	//    .end local v2    # "len":I
	//    .restart local v1    # "len":I
	h = (h +  (val[len] *  len));
	len = len;
	//    .end local v1    # "len":I
	//    .restart local v2    # "len":I
	goto label_goto_9;
	// 570    .line 247
	// 571    .end local v2    # "len":I
	// 572    .end local v3    # "val":[B
label_cond_13:
	h = (( h * 0x1f) + this->extensionId->hashCode());
	if ( !(this->critical) )  
		goto label_cond_28;
	cVar0 = 0x4cf;
label_goto_25:
	h = (( h * 0x1f) + cVar0);
	return h;
	// 599    .line 248
label_cond_28:
	cVar0 = 0x4d5;
	goto label_goto_25;

}
// .method public isCritical()Z
bool sun::security::x509::Extension::isCritical()
{
	
	return this->critical;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::Extension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	s = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ObjectId: ")))->append(this->extensionId->toString())->toString();
	//    .local v0, "s":Ljava/lang/String;
	if ( !(this->critical) )  
		goto label_cond_33;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	s = cVar1->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" Criticality=true\n")))->toString();
label_goto_32:
	return s;
	// 674    .line 226
label_cond_33:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	s = cVar2->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" Criticality=false\n")))->toString();
	goto label_goto_32;

}


