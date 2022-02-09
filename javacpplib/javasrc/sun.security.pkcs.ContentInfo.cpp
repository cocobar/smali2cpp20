// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\ContentInfo.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.security.pkcs.ContentInfo.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

static sun::security::pkcs::ContentInfo::DATA_OID;
static sun::security::pkcs::ContentInfo::DIGESTED_DATA_OID;
static sun::security::pkcs::ContentInfo::ENCRYPTED_DATA_OID;
static sun::security::pkcs::ContentInfo::ENVELOPED_DATA_OID;
static sun::security::pkcs::ContentInfo::NETSCAPE_CERT_SEQUENCE_OID;
static sun::security::pkcs::ContentInfo::OLD_DATA;
static sun::security::pkcs::ContentInfo::OLD_DATA_OID;
static sun::security::pkcs::ContentInfo::OLD_SDATA;
static sun::security::pkcs::ContentInfo::OLD_SIGNED_DATA_OID;
static sun::security::pkcs::ContentInfo::PKCS7_OID;
static sun::security::pkcs::ContentInfo::SIGNED_AND_ENVELOPED_DATA_OID;
static sun::security::pkcs::ContentInfo::SIGNED_DATA_OID;
static sun::security::pkcs::ContentInfo::TIMESTAMP_TOKEN_INFO_OID;
static sun::security::pkcs::ContentInfo::crdata;
static sun::security::pkcs::ContentInfo::data;
static sun::security::pkcs::ContentInfo::ddata;
static sun::security::pkcs::ContentInfo::edata;
static sun::security::pkcs::ContentInfo::nsdata;
static sun::security::pkcs::ContentInfo::pkcs7;
static sun::security::pkcs::ContentInfo::sdata;
static sun::security::pkcs::ContentInfo::sedata;
static sun::security::pkcs::ContentInfo::tstInfo;
// .method static constructor <clinit>()V
void sun::security::pkcs::ContentInfo::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<int[]>> cVar1;
	std::shared<std::vector<int[]>> cVar2;
	std::shared<std::vector<int[]>> cVar3;
	std::shared<std::vector<int[]>> cVar4;
	std::shared<std::vector<int[]>> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	std::shared<std::vector<int[]>> cVar8;
	std::shared<std::vector<int[]>> cVar9;
	std::shared<std::vector<int[]>> cVar10;
	std::shared<std::vector<int[]>> cVar11;
	
	cVar0 = 0x7;
	cVar1 = std::make_shared<std::vector<int[]>>(0x6);
	?;
	sun::security::pkcs::ContentInfo::pkcs7 = cVar1;
	cVar2 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::ContentInfo::data = cVar2;
	cVar3 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::ContentInfo::sdata = cVar3;
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::ContentInfo::edata = cVar4;
	cVar5 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::ContentInfo::sedata = cVar5;
	cVar6 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::ContentInfo::ddata = cVar6;
	cVar7 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::ContentInfo::crdata = cVar7;
	cVar8 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::ContentInfo::nsdata = cVar8;
	cVar9 = std::make_shared<std::vector<int[]>>(0x9);
	?;
	sun::security::pkcs::ContentInfo::tstInfo = cVar9;
	cVar10 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::ContentInfo::OLD_SDATA = cVar10;
	cVar11 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::pkcs::ContentInfo::OLD_DATA = cVar11;
	sun::security::pkcs::ContentInfo::PKCS7_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::pkcs7);
	sun::security::pkcs::ContentInfo::DATA_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::data);
	sun::security::pkcs::ContentInfo::SIGNED_DATA_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::sdata);
	sun::security::pkcs::ContentInfo::ENVELOPED_DATA_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::edata);
	sun::security::pkcs::ContentInfo::SIGNED_AND_ENVELOPED_DATA_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::sedata);
	sun::security::pkcs::ContentInfo::DIGESTED_DATA_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::ddata);
	sun::security::pkcs::ContentInfo::ENCRYPTED_DATA_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::crdata);
	sun::security::pkcs::ContentInfo::OLD_SIGNED_DATA_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::OLD_SDATA);
	sun::security::pkcs::ContentInfo::OLD_DATA_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::OLD_DATA);
	sun::security::pkcs::ContentInfo::NETSCAPE_CERT_SEQUENCE_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::nsdata);
	sun::security::pkcs::ContentInfo::TIMESTAMP_TOKEN_INFO_OID = sun::security::util::ObjectIdentifier::newInternal(sun::security::pkcs::ContentInfo::tstInfo);
	return;
	// 248    .line 41
	// 249    :array_aa
	// 250    .array-data 4
	// 251        0x1
	// 252        0x2
	// 253        0x348
	// 254        0x1bb8d
	// 255        0x1
	// 256        0x7
	// 257    .end array-data
	// 259    .line 42
	// 260    :array_ba
	// 261    .array-data 4
	// 262        0x1
	// 263        0x2
	// 264        0x348
	// 265        0x1bb8d
	// 266        0x1
	// 267        0x7
	// 268        0x1
	// 269    .end array-data
	// 271    .line 43
	// 272    :array_cc
	// 273    .array-data 4
	// 274        0x1
	// 275        0x2
	// 276        0x348
	// 277        0x1bb8d
	// 278        0x1
	// 279        0x7
	// 280        0x2
	// 281    .end array-data
	// 283    .line 44
	// 284    :array_de
	// 285    .array-data 4
	// 286        0x1
	// 287        0x2
	// 288        0x348
	// 289        0x1bb8d
	// 290        0x1
	// 291        0x7
	// 292        0x3
	// 293    .end array-data
	// 295    .line 45
	// 296    :array_f0
	// 297    .array-data 4
	// 298        0x1
	// 299        0x2
	// 300        0x348
	// 301        0x1bb8d
	// 302        0x1
	// 303        0x7
	// 304        0x4
	// 305    .end array-data
	// 307    .line 46
	// 308    :array_102
	// 309    .array-data 4
	// 310        0x1
	// 311        0x2
	// 312        0x348
	// 313        0x1bb8d
	// 314        0x1
	// 315        0x7
	// 316        0x5
	// 317    .end array-data
	// 319    .line 47
	// 320    :array_114
	// 321    .array-data 4
	// 322        0x1
	// 323        0x2
	// 324        0x348
	// 325        0x1bb8d
	// 326        0x1
	// 327        0x7
	// 328        0x6
	// 329    .end array-data
	// 331    .line 48
	// 332    :array_126
	// 333    .array-data 4
	// 334        0x2
	// 335        0x10
	// 336        0x348
	// 337        0x1
	// 338        0x1bc42
	// 339        0x2
	// 340        0x5
	// 341    .end array-data
	// 343    .line 50
	// 344    :array_138
	// 345    .array-data 4
	// 346        0x1
	// 347        0x2
	// 348        0x348
	// 349        0x1bb8d
	// 350        0x1
	// 351        0x9
	// 352        0x10
	// 353        0x1
	// 354        0x4
	// 355    .end array-data
	// 357    .line 52
	// 358    :array_14e
	// 359    .array-data 4
	// 360        0x1
	// 361        0x2
	// 362        0x348
	// 363        0x10fdcd
	// 364        0x1
	// 365        0x7
	// 366        0x2
	// 367    .end array-data
	// 369    .line 53
	// 370    :array_160
	// 371    .array-data 4
	// 372        0x1
	// 373        0x2
	// 374        0x348
	// 375        0x10fdcd
	// 376        0x1
	// 377        0x7
	// 378        0x1
	// 379    .end array-data

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::pkcs::ContentInfo::ContentInfo(std::shared_ptr<sun::security::util::DerInputStream> derin)
{
	
	//    .param p1, "derin"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 386        value = {
	// 387            Ljava/io/IOException;,
	// 388            Lsun/security/pkcs/ParsingException;
	// 389        }
	// 390    .end annotation
	sun::security::pkcs::ContentInfo::(derin, 0x0);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;Z)V
sun::security::pkcs::ContentInfo::ContentInfo(std::shared_ptr<sun::security::util::DerInputStream> derin,bool oldStyle)
{
	
	int cVar0;
	int cVar1;
	auto typeAndContent;
	std::shared_ptr<sun::security::util::DerInputStream> disType;
	std::shared_ptr<sun::security::util::DerInputStream> disTaggedContent;
	
	//    .param p1, "derin"    # Lsun/security/util/DerInputStream;
	//    .param p2, "oldStyle"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 407        value = {
	// 408            Ljava/io/IOException;,
	// 409            Lsun/security/pkcs/ParsingException;
	// 410        }
	// 411    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x1;
	// 419    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	typeAndContent = derin->getSequence(0x2);
	//    .local v5, "typeAndContent":[Lsun/security/util/DerValue;
	//    .local v4, "type":Lsun/security/util/DerValue;
	disType = std::make_shared<sun::security::util::DerInputStream>(typeAndContent[cVar0]->toByteArray());
	//    .local v2, "disType":Lsun/security/util/DerInputStream;
	this->contentType = disType->getOID();
	if ( !(oldStyle) )  
		goto label_cond_22;
	this->content = typeAndContent[cVar1];
label_cond_21:
label_goto_21:
	return;
	// 463    .line 147
label_cond_22:
	if ( typeAndContent->size() <= cVar1 )
		goto label_cond_21;
	//    .local v3, "taggedContent":Lsun/security/util/DerValue;
	disTaggedContent = std::make_shared<sun::security::util::DerInputStream>(typeAndContent[cVar1]->toByteArray());
	//    .local v1, "disTaggedContent":Lsun/security/util/DerInputStream;
	//    .local v0, "contents":[Lsun/security/util/DerValue;
	this->content = disTaggedContent->getSet(cVar1, cVar1)[cVar0];
	goto label_goto_21;

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;Lsun/security/util/DerValue;)V
sun::security::pkcs::ContentInfo::ContentInfo(std::shared_ptr<sun::security::util::ObjectIdentifier> contentType,std::shared_ptr<sun::security::util::DerValue> content)
{
	
	//    .param p1, "contentType"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "content"    # Lsun/security/util/DerValue;
	// 504    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->contentType = contentType;
	this->content = content;
	return;

}
// .method public constructor <init>([B)V
sun::security::pkcs::ContentInfo::ContentInfo(std::shared_ptr<unsigned char[]> bytes)
{
	
	std::shared_ptr<sun::security::util::DerValue> octetString;
	
	//    .param p1, "bytes"    # [B
	// 522    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	octetString = std::make_shared<sun::security::util::DerValue>(0x4, bytes);
	//    .local v0, "octetString":Lsun/security/util/DerValue;
	this->contentType = sun::security::pkcs::ContentInfo::DATA_OID;
	this->content = octetString;
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::pkcs::ContentInfo::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<sun::security::util::DerOutputStream> contentDerCode;
	std::shared_ptr<sun::security::util::DerValue> taggedContent;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 550        value = {
	// 551            Ljava/io/IOException;
	// 552        }
	// 553    .end annotation
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "seq":Lsun/security/util/DerOutputStream;
	seq->putOID(this->contentType);
	if ( !(this->content) )  
		goto label_cond_27;
	0x0;
	//    .local v2, "taggedContent":Lsun/security/util/DerValue;
	contentDerCode = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "contentDerCode":Lsun/security/util/DerOutputStream;
	this->content->encode(contentDerCode);
	//    .end local v2    # "taggedContent":Lsun/security/util/DerValue;
	taggedContent = std::make_shared<sun::security::util::DerValue>(-0x60, contentDerCode->toByteArray());
	//    .local v2, "taggedContent":Lsun/security/util/DerValue;
	seq->putDerValue(taggedContent);
	//    .end local v0    # "contentDerCode":Lsun/security/util/DerOutputStream;
	//    .end local v2    # "taggedContent":Lsun/security/util/DerValue;
label_cond_27:
	out->write(0x30, seq);
	return;

}
// .method public getContent()Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::pkcs::ContentInfo::getContent()
{
	
	return this->content;

}
// .method public getContentBytes()[B
unsigned char sun::security::pkcs::ContentInfo::getContentBytes()
{
	
	std::shared_ptr<sun::security::util::DerInputStream> dis;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 630        value = {
	// 631            Ljava/io/IOException;
	// 632        }
	// 633    .end annotation
	if ( this->content )     
		goto label_cond_6;
	return 0x0;
	// 646    .line 207
label_cond_6:
	dis = std::make_shared<sun::security::util::DerInputStream>(this->content->toByteArray());
	//    .local v0, "dis":Lsun/security/util/DerInputStream;
	return dis->getOctetString();

}
// .method public getContentType()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::pkcs::ContentInfo::getContentType()
{
	
	return this->contentType;

}
// .method public getData()[B
unsigned char sun::security::pkcs::ContentInfo::getData()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 680        value = {
	// 681            Ljava/io/IOException;
	// 682        }
	// 683    .end annotation
	if ( this->contentType->equals(sun::security::pkcs::ContentInfo::DATA_OID) )     
		goto label_cond_1f;
	if ( this->contentType->equals(sun::security::pkcs::ContentInfo::OLD_DATA_OID) )     
		goto label_cond_1f;
	if ( !(this->contentType->equals(sun::security::pkcs::ContentInfo::TIMESTAMP_TOKEN_INFO_OID)) )  
		goto label_cond_2b;
label_cond_1f:
	if ( this->content )     
		goto label_cond_24;
	return 0x0;
	// 732    .line 172
label_cond_24:
	return this->content->getOctetString();
	// 742    .line 174
label_cond_2b:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("content type is not DATA: ")))->append(this->contentType)->toString());
	// throw
	throw cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::ContentInfo::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .local v0, "out":Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Content Info Sequence\n\tContent type: ")))->append(this->contentType)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\tContent: ")))->append(this->content)->toString();

}


