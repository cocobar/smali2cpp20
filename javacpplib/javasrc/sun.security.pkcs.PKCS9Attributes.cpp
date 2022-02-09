// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS9Attributes.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collection.h"
#include "java.util.Hashtable.h"
#include "sun.security.pkcs.PKCS9Attribute.h"
#include "sun.security.pkcs.PKCS9Attributes.h"
#include "sun.security.pkcs.ParsingException.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::pkcs::PKCS9Attributes::PKCS9Attributes(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 041        value = {
	// 042            Ljava/io/IOException;
	// 043        }
	// 044    .end annotation
	sun::security::pkcs::PKCS9Attributes::(in, 0x0);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;Z)V
sun::security::pkcs::PKCS9Attributes::PKCS9Attributes(std::shared_ptr<sun::security::util::DerInputStream> in,bool ignoreUnsupportedAttributes)
{
	
	std::shared_ptr<java::util::Hashtable> cVar0;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .param p2, "ignoreUnsupportedAttributes"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 061        value = {
	// 062            Ljava/io/IOException;
	// 063        }
	// 064    .end annotation
	// 068    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::Hashtable>(0x3);
	this->attributes = cVar0;
	this->ignoreUnsupportedAttributes = 0x0;
	this->ignoreUnsupportedAttributes = ignoreUnsupportedAttributes;
	this->derEncoding = this->decode(in);
	this->permittedAttributes = 0x0;
	return;

}
// .method public constructor <init>([Lsun/security/pkcs/PKCS9Attribute;)V
sun::security::pkcs::PKCS9Attributes::PKCS9Attributes(std::shared_ptr<std::vector<sun::security::pkcs::PKCS9Attribute>> attribs)
{
	
	std::shared_ptr<java::util::Hashtable> cVar0;
	int i;
	std::shared_ptr<java::lang::Object> oid;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "attribs"    # [Lsun/security/pkcs/PKCS9Attribute;
	//    .annotation system Ldalvik/annotation/Throws;
	// 108        value = {
	// 109            Ljava/lang/IllegalArgumentException;,
	// 110            Ljava/io/IOException;
	// 111        }
	// 112    .end annotation
	// 116    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::Hashtable>(0x3);
	this->attributes = cVar0;
	this->ignoreUnsupportedAttributes = 0x0;
	i = 0x0;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= attribs->size() )
		goto label_cond_58;
	oid = attribs[i]->getOID();
	//    .local v1, "oid":Lsun/security/util/ObjectIdentifier;
	if ( !(this->attributes->containsKey(oid)) )  
		goto label_cond_4e;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCSAttribute ")))->append(attribs[i]->getOID())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" duplicated while constructing ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9Attributes.")))->toString());
	// throw
	throw cVar1;
	// 208    .line 168
label_cond_4e:
	this->attributes->put(oid, attribs[i]);
	i = ( i + 0x1);
	goto label_goto_f;
	// 221    .line 170
	// 222    .end local v1    # "oid":Lsun/security/util/ObjectIdentifier;
label_cond_58:
	this->derEncoding = this->generateDerEncoding();
	this->permittedAttributes = 0x0;
	return;

}
// .method public constructor <init>([Lsun/security/util/ObjectIdentifier;Lsun/security/util/DerInputStream;)V
sun::security::pkcs::PKCS9Attributes::PKCS9Attributes(std::shared_ptr<std::vector<sun::security::util::ObjectIdentifier>> permittedAttributes,std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	std::shared_ptr<java::util::Hashtable> cVar0;
	std::shared_ptr<java::util::Hashtable> cVar1;
	int i;
	
	//    .param p1, "permittedAttributes"    # [Lsun/security/util/ObjectIdentifier;
	//    .param p2, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 244        value = {
	// 245            Ljava/io/IOException;
	// 246        }
	// 247    .end annotation
	// 253    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::Hashtable>(0x3);
	this->attributes = cVar0;
	this->ignoreUnsupportedAttributes = 0x0;
	if ( !(permittedAttributes) )  
		goto label_cond_29;
	cVar1 = std::make_shared<java::util::Hashtable>(permittedAttributes->size());
	this->permittedAttributes = cVar1;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1a:
	if ( i >= permittedAttributes->size() )
		goto label_cond_2b;
	this->permittedAttributes->put(permittedAttributes[i], permittedAttributes[i]);
	i = ( i + 0x1);
	goto label_goto_1a;
	// 310    .line 95
	// 311    .end local v0    # "i":I
label_cond_29:
	this->permittedAttributes = 0x0;
label_cond_2b:
	this->derEncoding = this->decode(in);
	return;

}
// .method static castToDerEncoder([Ljava/lang/Object;)[Lsun/security/util/DerEncoder;
std::shared_ptr<sun::security::util::DerEncoder> sun::security::pkcs::PKCS9Attributes::castToDerEncoder(std::shared_ptr<std::vector<java::lang::Object>> objs)
{
	
	std::shared<std::vector<std::vector<sun::security::util::DerEncoder>>> encoders;
	int i;
	std::shared_ptr<sun::security::util::DerEncoder> cVar0;
	
	//    .param p0, "objs"    # [Ljava/lang/Object;
	encoders = std::make_shared<std::vector<std::vector<sun::security::util::DerEncoder>>>(objs->size());
	//    .local v0, "encoders":[Lsun/security/util/DerEncoder;
	i = 0x0;
	//    .local v1, "i":I
label_goto_4:
	if ( i >= encoders->size() )
		goto label_cond_10;
	cVar0 = objs[i];
	cVar0->checkCast("sun::security::util::DerEncoder");
	encoders[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_4;
	// 359    .line 363
label_cond_10:
	return encoders;

}
// .method private decode(Lsun/security/util/DerInputStream;)[B
unsigned char sun::security::pkcs::PKCS9Attributes::decode(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	std::shared_ptr<unsigned char[]> derEncoding;
	std::shared_ptr<sun::security::util::DerInputStream> derIn;
	auto derVals;
	int i;
	std::shared_ptr<sun::security::pkcs::PKCS9Attribute> attrib;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> oid;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 368        value = {
	// 369            Ljava/io/IOException;
	// 370        }
	// 371    .end annotation
	//    .local v8, "val":Lsun/security/util/DerValue;
	derEncoding = in->getDerValue()->toByteArray();
	//    .local v1, "derEncoding":[B
	derEncoding[0x0] = 0x31;
	derIn = std::make_shared<sun::security::util::DerInputStream>(derEncoding);
	//    .local v2, "derIn":Lsun/security/util/DerInputStream;
	derVals = derIn->getSet(0x3, 0x1);
	//    .local v3, "derVals":[Lsun/security/util/DerValue;
	//    .local v7, "reuseEncoding":Z
	i = 0x0;
	//    .local v5, "i":I
label_goto_1a:
	if ( i >= derVals->size() )
		goto label_cond_89;
	try {
	//label_try_start_1d:
	attrib = std::make_shared<sun::security::pkcs::PKCS9Attribute>(derVals[i]);
	//label_try_end_24:
	}
	catch (sun::security::pkcs::ParsingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a;
	}
	//    .catch Lsun/security/pkcs/ParsingException; {:try_start_1d .. :try_end_24} :catch_4a
	//    .local v0, "attrib":Lsun/security/pkcs/PKCS9Attribute;
	oid = attrib->getOID();
	//    .local v6, "oid":Lsun/security/util/ObjectIdentifier;
	if ( !(this->attributes->get(oid)) )  
		goto label_cond_54;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate PKCS9 attribute: ")))->append(oid)->toString());
	// throw
	throw cVar0;
	// 473    .line 206
	// 474    .end local v0    # "attrib":Lsun/security/pkcs/PKCS9Attribute;
	// 475    .end local v6    # "oid":Lsun/security/util/ObjectIdentifier;
label_catch_4a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Lsun/security/pkcs/ParsingException;
	if ( !(this->ignoreUnsupportedAttributes) )  
		goto label_cond_53;
	0x0;
	//    .end local v4    # "e":Lsun/security/pkcs/ParsingException;
label_goto_50:
	i = ( i + 0x1);
	goto label_goto_1a;
	// 495    .line 211
	// 496    .restart local v4    # "e":Lsun/security/pkcs/ParsingException;
label_cond_53:
	// throw
	throw;
	// 500    .line 219
	// 501    .end local v4    # "e":Lsun/security/pkcs/ParsingException;
	// 502    .restart local v0    # "attrib":Lsun/security/pkcs/PKCS9Attribute;
	// 503    .restart local v6    # "oid":Lsun/security/util/ObjectIdentifier;
label_cond_54:
	if ( !(this->permittedAttributes) )  
		goto label_cond_83;
	if ( !(( this->permittedAttributes->containsKey(oid) ^ 0x1)) )  
		goto label_cond_83;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::io::IOException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute ")))->append(oid)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not permitted in this attribute set")))->toString());
	// throw
	throw cVar2;
	// 554    .line 224
label_cond_83:
	this->attributes->put(oid, attrib);
	goto label_goto_50;
	// 562    .line 226
	// 563    .end local v0    # "attrib":Lsun/security/pkcs/PKCS9Attribute;
	// 564    .end local v6    # "oid":Lsun/security/util/ObjectIdentifier;
label_cond_89:
	if ( !(0x1) )  
		goto label_cond_8c;
	//    .end local v1    # "derEncoding":[B
label_goto_8b:
	return derEncoding;
	// 572    .restart local v1    # "derEncoding":[B
label_cond_8c:
	derEncoding = this->generateDerEncoding();
	goto label_goto_8b;

}
// .method private generateDerEncoding()[B
unsigned char sun::security::pkcs::PKCS9Attributes::generateDerEncoding()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 584        value = {
	// 585            Ljava/io/IOException;
	// 586        }
	// 587    .end annotation
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "out":Lsun/security/util/DerOutputStream;
	//    .local v0, "attribVals":[Ljava/lang/Object;
	out->putOrderedSetOf(0x31, sun::security::pkcs::PKCS9Attributes::castToDerEncoder(this->attributes->values()->toArray()));
	return out->toByteArray();

}
// .method public encode(BLjava/io/OutputStream;)V
void sun::security::pkcs::PKCS9Attributes::encode(unsigned char tag,std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "tag"    # B
	//    .param p2, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 633        value = {
	// 634            Ljava/io/IOException;
	// 635        }
	// 636    .end annotation
	out->write(tag);
	out->write(this->derEncoding, 0x1, ( this->derEncoding->size() + -0x1));
	return;

}
// .method public getAttribute(Ljava/lang/String;)Lsun/security/pkcs/PKCS9Attribute;
std::shared_ptr<sun::security::pkcs::PKCS9Attribute> sun::security::pkcs::PKCS9Attributes::getAttribute(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::pkcs::PKCS9Attribute> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = this->attributes->get(sun::security::pkcs::PKCS9Attribute::getOID(name));
	cVar0->checkCast("sun::security::pkcs::PKCS9Attribute");
	return cVar0;

}
// .method public getAttribute(Lsun/security/util/ObjectIdentifier;)Lsun/security/pkcs/PKCS9Attribute;
std::shared_ptr<sun::security::pkcs::PKCS9Attribute> sun::security::pkcs::PKCS9Attributes::getAttribute(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	std::shared_ptr<sun::security::pkcs::PKCS9Attribute> cVar0;
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	cVar0 = this->attributes->get(oid);
	cVar0->checkCast("sun::security::pkcs::PKCS9Attribute");
	return cVar0;

}
// .method public getAttributeValue(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::pkcs::PKCS9Attributes::getAttributeValue(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 701        value = {
	// 702            Ljava/io/IOException;
	// 703        }
	// 704    .end annotation
	oid = sun::security::pkcs::PKCS9Attribute::getOID(name);
	//    .local v0, "oid":Lsun/security/util/ObjectIdentifier;
	if ( oid )     
		goto label_cond_27;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name ")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not recognized or not supported.")))->toString());
	// throw
	throw cVar0;
	// 749    .line 318
label_cond_27:
	return this->getAttributeValue(oid);

}
// .method public getAttributeValue(Lsun/security/util/ObjectIdentifier;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::pkcs::PKCS9Attributes::getAttributeValue(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .annotation system Ldalvik/annotation/Throws;
	// 762        value = {
	// 763            Ljava/io/IOException;
	// 764        }
	// 765    .end annotation
	try {
	//label_try_start_0:
	//label_try_end_7:
	}
	catch (java::lang::NullPointerException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9;
	}
	//    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_7} :catch_9
	//    .local v1, "value":Ljava/lang/Object;
	return this->getAttribute(oid)->getValue();
	// 784    .line 302
	// 785    .end local v1    # "value":Ljava/lang/Object;
label_catch_9:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/NullPointerException;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No value found for attribute ")))->append(oid)->toString());
	// throw
	throw cVar0;

}
// .method public getAttributes()[Lsun/security/pkcs/PKCS9Attribute;
std::shared_ptr<sun::security::pkcs::PKCS9Attribute> sun::security::pkcs::PKCS9Attributes::getAttributes()
{
	
	std::shared<std::vector<std::vector<sun::security::pkcs::PKCS9Attribute>>> attribs;
	int j;
	int i;
	
	attribs = std::make_shared<std::vector<std::vector<sun::security::pkcs::PKCS9Attribute>>>(this->attributes->size());
	//    .local v0, "attribs":[Lsun/security/pkcs/PKCS9Attribute;
	j = 0x0;
	//    .local v2, "j":I
	i = 0x1;
	//    .local v1, "i":I
label_goto_a:
	if ( i >= sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS->size() )
		goto label_cond_25;
	if ( j >= attribs->size() )
		goto label_cond_25;
	attribs[j] = this->getAttribute(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[i]);
	if ( !(attribs[j]) )  
		goto label_cond_22;
	j = ( j + 0x1);
label_cond_22:
	i = ( i + 0x1);
	goto label_goto_a;
	// 875    .line 291
label_cond_25:
	return attribs;

}
// .method public getDerEncoding()[B
unsigned char sun::security::pkcs::PKCS9Attributes::getDerEncoding()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 883        value = {
	// 884            Ljava/io/IOException;
	// 885        }
	// 886    .end annotation
	cVar0 = this->derEncoding->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS9Attributes::toString()
{
	
	std::shared_ptr<java::lang::StringBuffer> buf;
	int first;
	int i;
	std::shared_ptr<sun::security::pkcs::PKCS9Attribute> value;
	
	buf = std::make_shared<java::lang::StringBuffer>(0xc8);
	//    .local v0, "buf":Ljava/lang/StringBuffer;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PKCS9 Attributes: [\n\t")));
	first = 0x1;
	//    .local v1, "first":Z
	i = 0x1;
	//    .local v2, "i":I
label_goto_f:
	if ( i >= sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS->size() )
		goto label_cond_33;
	value = this->getAttribute(sun::security::pkcs::PKCS9Attribute::PKCS9_OIDS[i]);
	//    .local v3, "value":Lsun/security/pkcs/PKCS9Attribute;
	if ( value )     
		goto label_cond_21;
label_goto_1e:
	i = ( i + 0x1);
	goto label_goto_f;
	// 952    .line 339
label_cond_21:
	if ( !(first) )  
		goto label_cond_2c;
	first = 0x0;
label_goto_24:
	buf->append(value->toString());
	goto label_goto_1e;
	// 969    .line 342
label_cond_2c:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";\n\t")));
	goto label_goto_24;
	// 977    .line 347
	// 978    .end local v3    # "value":Lsun/security/pkcs/PKCS9Attribute;
label_cond_33:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\t] (end PKCS9 Attributes)")));
	return buf->toString();

}


