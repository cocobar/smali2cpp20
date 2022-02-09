// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\NetscapeCertTypeExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Enumeration.h"
#include "java.util.Vector.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.KeyUsageExtension.h"
#include "sun.security.x509.NetscapeCertTypeExtension_S_MapEntry.h"
#include "sun.security.x509.NetscapeCertTypeExtension.h"

static sun::security::x509::NetscapeCertTypeExtension::CertType_data;
static sun::security::x509::NetscapeCertTypeExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.NetscapeCertType");
static sun::security::x509::NetscapeCertTypeExtension::NAME = std::make_shared<java::lang::String>("NetscapeCertType");
static sun::security::x509::NetscapeCertTypeExtension::NetscapeCertType_Id = nullptr;
static sun::security::x509::NetscapeCertTypeExtension::OBJECT_SIGNING = std::make_shared<java::lang::String>("object_signing");
static sun::security::x509::NetscapeCertTypeExtension::OBJECT_SIGNING_CA = std::make_shared<java::lang::String>("object_signing_ca");
static sun::security::x509::NetscapeCertTypeExtension::SSL_CA = std::make_shared<java::lang::String>("ssl_ca");
static sun::security::x509::NetscapeCertTypeExtension::SSL_CLIENT = std::make_shared<java::lang::String>("ssl_client");
static sun::security::x509::NetscapeCertTypeExtension::SSL_SERVER = std::make_shared<java::lang::String>("ssl_server");
static sun::security::x509::NetscapeCertTypeExtension::S_MIME = std::make_shared<java::lang::String>("s_mime");
static sun::security::x509::NetscapeCertTypeExtension::S_MIME_CA = std::make_shared<java::lang::String>("s_mime_ca");
static sun::security::x509::NetscapeCertTypeExtension::mAttributeNames;
static sun::security::x509::NetscapeCertTypeExtension::mMapData;
// .method static constructor <clinit>()V
void sun::security::x509::NetscapeCertTypeExtension::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<int[]>> cVar5;
	std::shared<std::vector<std::vector<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>>> cVar7;
	std::shared_ptr<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry> cVar8;
	std::shared_ptr<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry> cVar9;
	std::shared_ptr<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry> cVar10;
	std::shared_ptr<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry> cVar11;
	std::shared_ptr<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry> cVar12;
	std::shared_ptr<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry> cVar13;
	std::shared_ptr<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry> cVar14;
	std::shared_ptr<java::util::Vector> cVar15;
	std::shared_ptr<std::vector<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>> cVar16;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar6;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x7;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<int[]>>(cVar3);
	?;
	sun::security::x509::NetscapeCertTypeExtension::CertType_data = cVar5;
	try {
	//label_try_start_c:
	cVar6 = std::make_shared<sun::security::util::ObjectIdentifier>(sun::security::x509::NetscapeCertTypeExtension::CertType_data);
	sun::security::x509::NetscapeCertTypeExtension::NetscapeCertType_Id = cVar6;
	//label_try_end_15:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7d;
	}
	//    .catch Ljava/io/IOException; {:try_start_c .. :try_end_15} :catch_7d
	//    .local v1, "ioe":Ljava/io/IOException;
label_goto_15:
	cVar7 = std::make_shared<std::vector<std::vector<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>>>(cVar3);
	cVar8 = std::make_shared<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ssl_client")), cVar4);
	cVar7[cVar4] = cVar8;
	cVar9 = std::make_shared<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ssl_server")), cVar2);
	cVar7[cVar2] = cVar9;
	cVar10 = std::make_shared<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>(std::make_shared<java::lang::String>(std::make_shared<char[]>("s_mime")), cVar1);
	cVar7[cVar1] = cVar10;
	cVar11 = std::make_shared<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>(std::make_shared<java::lang::String>(std::make_shared<char[]>("object_signing")), cVar0);
	cVar7[cVar0] = cVar11;
	cVar12 = std::make_shared<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ssl_ca")), 0x5);
	cVar7[0x4] = cVar12;
	cVar13 = std::make_shared<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>(std::make_shared<java::lang::String>(std::make_shared<char[]>("s_mime_ca")), 0x6);
	cVar7[0x5] = cVar13;
	cVar14 = std::make_shared<sun::security::x509::NetscapeCertTypeExtension_S_MapEntry>(std::make_shared<java::lang::String>(std::make_shared<char[]>("object_signing_ca")), cVar3);
	cVar7[0x6] = cVar14;
	sun::security::x509::NetscapeCertTypeExtension::mMapData = cVar7;
	cVar15 = std::make_shared<java::util::Vector>();
	sun::security::x509::NetscapeCertTypeExtension::mAttributeNames = cVar15;
	cVar16 = sun::security::x509::NetscapeCertTypeExtension::mMapData;
	//    .end local v1    # "ioe":Ljava/io/IOException;
label_goto_6e:
	if ( cVar4 >= cVar16->size() )
		goto label_cond_7c;
	//    .local v0, "entry":Lsun/security/x509/NetscapeCertTypeExtension$MapEntry;
	sun::security::x509::NetscapeCertTypeExtension::mAttributeNames->add(cVar16[cVar4]->mName);
	cVar4 = ( cVar4 + 0x1);
	goto label_goto_6e;
	// 214    .line 51
	// 215    .end local v0    # "entry":Lsun/security/x509/NetscapeCertTypeExtension$MapEntry;
label_cond_7c:
	return;
	// 219    .line 82
label_catch_7d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v1    # "ioe":Ljava/io/IOException;
	goto label_goto_15;
	// 226    .line 72
	// 227    nop
	// 229    :array_80
	// 230    .array-data 4
	// 231        0x2
	// 232        0x10
	// 233        0x348
	// 234        0x1
	// 235        0x1bc42
	// 236        0x1
	// 237        0x1
	// 238    .end array-data

}
// .method public constructor <init>()V
sun::security::x509::NetscapeCertTypeExtension::NetscapeCertTypeExtension()
{
	
	// 246    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::NetscapeCertTypeExtension::NetscapeCertType_Id;
	this->critical = 0x1;
	this->bitString = std::make_shared<std::vector<bool[]>>(0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::NetscapeCertTypeExtension::NetscapeCertTypeExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 274        value = {
	// 275            Ljava/io/IOException;
	// 276        }
	// 277    .end annotation
	// 281    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::NetscapeCertTypeExtension::NetscapeCertType_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v0, "val":Lsun/security/util/DerValue;
	this->bitString = val->getUnalignedBitString()->toBooleanArray();
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::NetscapeCertTypeExtension::NetscapeCertTypeExtension(std::shared_ptr<unsigned char[]> bitString)
{
	
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	
	//    .param p1, "bitString"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 328        value = {
	// 329            Ljava/io/IOException;
	// 330        }
	// 331    .end annotation
	// 335    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	cVar0 = std::make_shared<sun::security::util::BitArray>(( bitString->size() * 0x8), bitString);
	this->bitString = cVar0->toBooleanArray();
	this->extensionId = sun::security::x509::NetscapeCertTypeExtension::NetscapeCertType_Id;
	this->critical = 0x1;
	this->encodeThis();
	return;

}
// .method public constructor <init>([Z)V
sun::security::x509::NetscapeCertTypeExtension::NetscapeCertTypeExtension(std::shared_ptr<bool[]> bitString)
{
	
	//    .param p1, "bitString"    # [Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 374        value = {
	// 375            Ljava/io/IOException;
	// 376        }
	// 377    .end annotation
	// 381    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->bitString = bitString;
	this->extensionId = sun::security::x509::NetscapeCertTypeExtension::NetscapeCertType_Id;
	this->critical = 0x1;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::NetscapeCertTypeExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> os;
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 406        value = {
	// 407            Ljava/io/IOException;
	// 408        }
	// 409    .end annotation
	os = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "os":Lsun/security/util/DerOutputStream;
	cVar0 = std::make_shared<sun::security::util::BitArray>(this->bitString);
	os->putTruncatedUnalignedBitString(cVar0);
	this->extensionValue = os->toByteArray();
	return;

}
// .method private static getPosition(Ljava/lang/String;)I
int sun::security::x509::NetscapeCertTypeExtension::getPosition(std::shared_ptr<java::lang::String> name)
{
	
	int i;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 442        value = {
	// 443            Ljava/io/IOException;
	// 444        }
	// 445    .end annotation
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= sun::security::x509::NetscapeCertTypeExtension::mMapData->size() )
		goto label_cond_1c;
	if ( !(name->equalsIgnoreCase(sun::security::x509::NetscapeCertTypeExtension::mMapData[i]->mName)) )  
		goto label_cond_19;
	return sun::security::x509::NetscapeCertTypeExtension::mMapData[i]->mPosition;
	// 481    .line 118
label_cond_19:
	i = ( i + 0x1);
	goto label_goto_1;
	// 487    .line 122
label_cond_1c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by CertAttrSet:NetscapeCertType.")))->toString());
	// throw
	throw cVar0;

}
// .method private isSet(I)Z
bool sun::security::x509::NetscapeCertTypeExtension::isSet(int position)
{
	
	bool cVar0;
	
	//    .param p1, "position"    # I
	if ( position >= this->bitString->size() )
		goto label_cond_a;
	cVar0 = this->bitString[position];
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method private set(IZ)V
void sun::security::x509::NetscapeCertTypeExtension::set(int position,bool val)
{
	
	int cVar0;
	std::shared<std::vector<bool[]>> tmp;
	
	//    .param p1, "position"    # I
	//    .param p2, "val"    # Z
	cVar0 = 0x0;
	if ( position <  this->bitString->size() )
		goto label_cond_14;
	tmp = std::make_shared<std::vector<bool[]>>(( position + 0x1));
	//    .local v0, "tmp":[Z
	java::lang::System::arraycopy(this->bitString, cVar0, tmp, cVar0, this->bitString->size());
	this->bitString = tmp;
	//    .end local v0    # "tmp":[Z
label_cond_14:
	this->bitString[position] = val;
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::NetscapeCertTypeExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 599        value = {
	// 600            Ljava/io/IOException;
	// 601        }
	// 602    .end annotation
	this->set(sun::security::x509::NetscapeCertTypeExtension::getPosition(name), 0x0);
	this->encodeThis();
	return;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::NetscapeCertTypeExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 625        value = {
	// 626            Ljava/io/IOException;
	// 627        }
	// 628    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::NetscapeCertTypeExtension::NetscapeCertType_Id;
	this->critical = 0x1;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> sun::security::x509::NetscapeCertTypeExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 674        value = {
	// 675            Ljava/io/IOException;
	// 676        }
	// 677    .end annotation
	return java::lang::Boolean::valueOf(this->isSet(sun::security::x509::NetscapeCertTypeExtension::getPosition(name)));

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::NetscapeCertTypeExtension::getElements()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 717        value = {
	// 718            "()",
	// 719            "Ljava/util/Enumeration",
	// 720            "<",
	// 721            "Ljava/lang/String;",
	// 722            ">;"
	// 723        }
	// 724    .end annotation
	return sun::security::x509::NetscapeCertTypeExtension::mAttributeNames->elements();

}
// .method public getKeyUsageMappedBits()[Z
bool sun::security::x509::NetscapeCertTypeExtension::getKeyUsageMappedBits()
{
	
	std::shared_ptr<sun::security::x509::KeyUsageExtension> keyUsage;
	std::shared_ptr<java::lang::Boolean> val;
	std::vector<std::any> tryCatchExcetionList;
	
	keyUsage = std::make_shared<sun::security::x509::KeyUsageExtension>();
	//    .local v1, "keyUsage":Lsun/security/x509/KeyUsageExtension;
	val = java::lang::Boolean::TRUE;
	//    .local v2, "val":Ljava/lang/Boolean;
	try {
	//label_try_start_7:
	if ( this->isSet(sun::security::x509::NetscapeCertTypeExtension::getPosition(std::make_shared<java::lang::String>(std::make_shared<char[]>("ssl_client")))) )     
		goto label_cond_2e;
	if ( this->isSet(sun::security::x509::NetscapeCertTypeExtension::getPosition(std::make_shared<java::lang::String>(std::make_shared<char[]>("s_mime")))) )     
		goto label_cond_2e;
	if ( !(this->isSet(sun::security::x509::NetscapeCertTypeExtension::getPosition(std::make_shared<java::lang::String>(std::make_shared<char[]>("object_signing"))))) )  
		goto label_cond_34;
label_cond_2e:
	keyUsage->set(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital_signature")), val);
label_cond_34:
	if ( !(this->isSet(sun::security::x509::NetscapeCertTypeExtension::getPosition(std::make_shared<java::lang::String>(std::make_shared<char[]>("ssl_server"))))) )  
		goto label_cond_47;
	keyUsage->set(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_encipherment")), val);
label_cond_47:
	if ( this->isSet(sun::security::x509::NetscapeCertTypeExtension::getPosition(std::make_shared<java::lang::String>(std::make_shared<char[]>("ssl_ca")))) )     
		goto label_cond_6e;
	if ( this->isSet(sun::security::x509::NetscapeCertTypeExtension::getPosition(std::make_shared<java::lang::String>(std::make_shared<char[]>("s_mime_ca")))) )     
		goto label_cond_6e;
	if ( !(this->isSet(sun::security::x509::NetscapeCertTypeExtension::getPosition(std::make_shared<java::lang::String>(std::make_shared<char[]>("object_signing_ca"))))) )  
		goto label_cond_74;
label_cond_6e:
	keyUsage->set(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_certsign")), val);
	//label_try_end_74:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_79;
	}
	//    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_74} :catch_79
label_cond_74:
label_goto_74:
	return keyUsage->getBits();
	// 877    .line 326
label_catch_79:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	goto label_goto_74;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::NetscapeCertTypeExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("NetscapeCertType"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::NetscapeCertTypeExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 900        value = {
	// 901            Ljava/io/IOException;
	// 902        }
	// 903    .end annotation
	if ( obj->instanceOf("java::lang::Boolean") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type Boolean.")));
	// throw
	throw cVar0;
	// 920    .line 216
label_cond_d:
	obj->checkCast("java::lang::Boolean");
	//    .end local p2    # "obj":Ljava/lang/Object;
	//    .local v0, "val":Z
	this->set(sun::security::x509::NetscapeCertTypeExtension::getPosition(name), obj->booleanValue());
	this->encodeThis();
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::NetscapeCertTypeExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(this->toString());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NetscapeCertType [\n")));
	if ( !(this->isSet(0x0)) )  
		goto label_cond_1f;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   SSL client\n")));
label_cond_1f:
	if ( !(this->isSet(0x1)) )  
		goto label_cond_2c;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   SSL server\n")));
label_cond_2c:
	if ( !(this->isSet(0x2)) )  
		goto label_cond_39;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   S/MIME\n")));
label_cond_39:
	if ( !(this->isSet(0x3)) )  
		goto label_cond_46;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   Object Signing\n")));
label_cond_46:
	if ( !(this->isSet(0x5)) )  
		goto label_cond_53;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   SSL CA\n")));
label_cond_53:
	if ( !(this->isSet(0x6)) )  
		goto label_cond_60;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   S/MIME CA\n")));
label_cond_60:
	if ( !(this->isSet(0x7)) )  
		goto label_cond_6d;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   Object Signing CA")));
label_cond_6d:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")));
	return sb->toString();

}


