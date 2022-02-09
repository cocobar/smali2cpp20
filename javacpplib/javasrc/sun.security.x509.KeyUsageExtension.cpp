// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\KeyUsageExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.KeyUsageExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::KeyUsageExtension::CRL_SIGN = std::make_shared<java::lang::String>("crl_sign");
static sun::security::x509::KeyUsageExtension::DATA_ENCIPHERMENT = std::make_shared<java::lang::String>("data_encipherment");
static sun::security::x509::KeyUsageExtension::DECIPHER_ONLY = std::make_shared<java::lang::String>("decipher_only");
static sun::security::x509::KeyUsageExtension::DIGITAL_SIGNATURE = std::make_shared<java::lang::String>("digital_signature");
static sun::security::x509::KeyUsageExtension::ENCIPHER_ONLY = std::make_shared<java::lang::String>("encipher_only");
static sun::security::x509::KeyUsageExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.KeyUsage");
static sun::security::x509::KeyUsageExtension::KEY_AGREEMENT = std::make_shared<java::lang::String>("key_agreement");
static sun::security::x509::KeyUsageExtension::KEY_CERTSIGN = std::make_shared<java::lang::String>("key_certsign");
static sun::security::x509::KeyUsageExtension::KEY_ENCIPHERMENT = std::make_shared<java::lang::String>("key_encipherment");
static sun::security::x509::KeyUsageExtension::NAME = std::make_shared<java::lang::String>("KeyUsage");
static sun::security::x509::KeyUsageExtension::NON_REPUDIATION = std::make_shared<java::lang::String>("non_repudiation");
// .method public constructor <init>()V
sun::security::x509::KeyUsageExtension::KeyUsageExtension()
{
	
	// 055    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::KeyUsage_Id;
	this->critical = 0x1;
	this->bitString = std::make_shared<std::vector<bool[]>>(0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::KeyUsageExtension::KeyUsageExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<unsigned char[]> extValue;
	std::shared_ptr<sun::security::util::DerValue> cVar0;
	std::shared_ptr<sun::security::util::DerValue> val;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 083        value = {
	// 084            Ljava/io/IOException;
	// 085        }
	// 086    .end annotation
	// 090    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->extensionId = sun::security::x509::PKIXExtensions::KeyUsage_Id;
	this->critical = critical->booleanValue();
	extValue = value;
	extValue->checkCast("unsigned char[]");
	//    .local v0, "extValue":[B
	if ( extValue[0x0] != 0x4 )
		goto label_cond_33;
	cVar0 = std::make_shared<sun::security::util::DerValue>(extValue);
	this->extensionValue = cVar0->getOctetString();
label_goto_21:
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v1, "val":Lsun/security/util/DerValue;
	this->bitString = val->getUnalignedBitString()->toBooleanArray();
	return;
	// 153    .line 170
	// 154    .end local v1    # "val":Lsun/security/util/DerValue;
label_cond_33:
	this->extensionValue = extValue;
	goto label_goto_21;

}
// .method public constructor <init>(Lsun/security/util/BitArray;)V
sun::security::x509::KeyUsageExtension::KeyUsageExtension(std::shared_ptr<sun::security::util::BitArray> bitString)
{
	
	//    .param p1, "bitString"    # Lsun/security/util/BitArray;
	//    .annotation system Ldalvik/annotation/Throws;
	// 165        value = {
	// 166            Ljava/io/IOException;
	// 167        }
	// 168    .end annotation
	// 172    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->bitString = bitString->toBooleanArray();
	this->extensionId = sun::security::x509::PKIXExtensions::KeyUsage_Id;
	this->critical = 0x1;
	this->encodeThis();
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::KeyUsageExtension::KeyUsageExtension(std::shared_ptr<unsigned char[]> bitString)
{
	
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	
	//    .param p1, "bitString"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 202        value = {
	// 203            Ljava/io/IOException;
	// 204        }
	// 205    .end annotation
	// 209    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	cVar0 = std::make_shared<sun::security::util::BitArray>(( bitString->size() * 0x8), bitString);
	this->bitString = cVar0->toBooleanArray();
	this->extensionId = sun::security::x509::PKIXExtensions::KeyUsage_Id;
	this->critical = 0x1;
	this->encodeThis();
	return;

}
// .method public constructor <init>([Z)V
sun::security::x509::KeyUsageExtension::KeyUsageExtension(std::shared_ptr<bool[]> bitString)
{
	
	//    .param p1, "bitString"    # [Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 248        value = {
	// 249            Ljava/io/IOException;
	// 250        }
	// 251    .end annotation
	// 255    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->bitString = bitString;
	this->extensionId = sun::security::x509::PKIXExtensions::KeyUsage_Id;
	this->critical = 0x1;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::KeyUsageExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> os;
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 280        value = {
	// 281            Ljava/io/IOException;
	// 282        }
	// 283    .end annotation
	os = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "os":Lsun/security/util/DerOutputStream;
	cVar0 = std::make_shared<sun::security::util::BitArray>(this->bitString);
	os->putTruncatedUnalignedBitString(cVar0);
	this->extensionValue = os->toByteArray();
	return;

}
// .method private isSet(I)Z
bool sun::security::x509::KeyUsageExtension::isSet(int position)
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
void sun::security::x509::KeyUsageExtension::set(int position,bool val)
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
void sun::security::x509::KeyUsageExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 389        value = {
	// 390            Ljava/io/IOException;
	// 391        }
	// 392    .end annotation
	cVar0 = 0x0;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital_signature")))) )  
		goto label_cond_11;
	this->set(cVar0, cVar0);
label_goto_d:
	this->encodeThis();
	return;
	// 416    .line 252
label_cond_11:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("non_repudiation")))) )  
		goto label_cond_1f;
	this->set(0x1, cVar0);
	goto label_goto_d;
	// 433    .line 254
label_cond_1f:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_encipherment")))) )  
		goto label_cond_2d;
	this->set(0x2, cVar0);
	goto label_goto_d;
	// 450    .line 256
label_cond_2d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("data_encipherment")))) )  
		goto label_cond_3b;
	this->set(0x3, cVar0);
	goto label_goto_d;
	// 467    .line 258
label_cond_3b:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_agreement")))) )  
		goto label_cond_49;
	this->set(0x4, cVar0);
	goto label_goto_d;
	// 484    .line 260
label_cond_49:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_certsign")))) )  
		goto label_cond_57;
	this->set(0x5, cVar0);
	goto label_goto_d;
	// 501    .line 262
label_cond_57:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("crl_sign")))) )  
		goto label_cond_65;
	this->set(0x6, cVar0);
	goto label_goto_d;
	// 518    .line 264
label_cond_65:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("encipher_only")))) )  
		goto label_cond_73;
	this->set(0x7, cVar0);
	goto label_goto_d;
	// 535    .line 266
label_cond_73:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("decipher_only")))) )  
		goto label_cond_82;
	this->set(0x8, cVar0);
	goto label_goto_d;
	// 552    .line 269
label_cond_82:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:KeyUsage.")));
	// throw
	throw cVar1;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::KeyUsageExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 567        value = {
	// 568            Ljava/io/IOException;
	// 569        }
	// 570    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::KeyUsage_Id;
	this->critical = 0x1;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> sun::security::x509::KeyUsageExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 616        value = {
	// 617            Ljava/io/IOException;
	// 618        }
	// 619    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital_signature")))) )  
		goto label_cond_13;
	return java::lang::Boolean::valueOf(this->isSet(0x0));
	// 644    .line 224
label_cond_13:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("non_repudiation")))) )  
		goto label_cond_26;
	return java::lang::Boolean::valueOf(this->isSet(0x1));
	// 667    .line 226
label_cond_26:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_encipherment")))) )  
		goto label_cond_39;
	return java::lang::Boolean::valueOf(this->isSet(0x2));
	// 690    .line 228
label_cond_39:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("data_encipherment")))) )  
		goto label_cond_4c;
	return java::lang::Boolean::valueOf(this->isSet(0x3));
	// 713    .line 230
label_cond_4c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_agreement")))) )  
		goto label_cond_5f;
	return java::lang::Boolean::valueOf(this->isSet(0x4));
	// 736    .line 232
label_cond_5f:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_certsign")))) )  
		goto label_cond_72;
	return java::lang::Boolean::valueOf(this->isSet(0x5));
	// 759    .line 234
label_cond_72:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("crl_sign")))) )  
		goto label_cond_85;
	return java::lang::Boolean::valueOf(this->isSet(0x6));
	// 782    .line 236
label_cond_85:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("encipher_only")))) )  
		goto label_cond_98;
	return java::lang::Boolean::valueOf(this->isSet(0x7));
	// 805    .line 238
label_cond_98:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("decipher_only")))) )  
		goto label_cond_ac;
	return java::lang::Boolean::valueOf(this->isSet(0x8));
	// 828    .line 241
label_cond_ac:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:KeyUsage.")));
	// throw
	throw cVar0;

}
// .method public getBits()[Z
bool sun::security::x509::KeyUsageExtension::getBits()
{
	
	std::shared_ptr<bool[]> cVar0;
	
	cVar0 = this->bitString->clone();
	cVar0->checkCast("bool[]");
	return cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::KeyUsageExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 876        value = {
	// 877            "()",
	// 878            "Ljava/util/Enumeration",
	// 879            "<",
	// 880            "Ljava/lang/String;",
	// 881            ">;"
	// 882        }
	// 883    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital_signature")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("non_repudiation")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_encipherment")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("data_encipherment")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_agreement")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_certsign")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("crl_sign")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("encipher_only")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("decipher_only")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::KeyUsageExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("KeyUsage"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::KeyUsageExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	bool val;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 960        value = {
	// 961            Ljava/io/IOException;
	// 962        }
	// 963    .end annotation
	if ( obj->instanceOf("java::lang::Boolean") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type Boolean.")));
	// throw
	throw cVar0;
	// 980    .line 192
label_cond_d:
	obj->checkCast("java::lang::Boolean");
	//    .end local p2    # "obj":Ljava/lang/Object;
	val = obj->booleanValue();
	//    .local v0, "val":Z
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("digital_signature")))) )  
		goto label_cond_24;
	this->set(0x0, val);
label_goto_20:
	this->encodeThis();
	return;
	// 1011    .line 195
label_cond_24:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("non_repudiation")))) )  
		goto label_cond_32;
	this->set(0x1, val);
	goto label_goto_20;
	// 1028    .line 197
label_cond_32:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_encipherment")))) )  
		goto label_cond_40;
	this->set(0x2, val);
	goto label_goto_20;
	// 1045    .line 199
label_cond_40:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("data_encipherment")))) )  
		goto label_cond_4e;
	this->set(0x3, val);
	goto label_goto_20;
	// 1062    .line 201
label_cond_4e:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_agreement")))) )  
		goto label_cond_5c;
	this->set(0x4, val);
	goto label_goto_20;
	// 1079    .line 203
label_cond_5c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_certsign")))) )  
		goto label_cond_6a;
	this->set(0x5, val);
	goto label_goto_20;
	// 1096    .line 205
label_cond_6a:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("crl_sign")))) )  
		goto label_cond_78;
	this->set(0x6, val);
	goto label_goto_20;
	// 1113    .line 207
label_cond_78:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("encipher_only")))) )  
		goto label_cond_86;
	this->set(0x7, val);
	goto label_goto_20;
	// 1130    .line 209
label_cond_86:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("decipher_only")))) )  
		goto label_cond_95;
	this->set(0x8, val);
	goto label_goto_20;
	// 1147    .line 212
label_cond_95:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:KeyUsage.")));
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::KeyUsageExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(this->toString());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("KeyUsage [\n")));
	if ( !(this->isSet(0x0)) )  
		goto label_cond_1f;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  DigitalSignature\n")));
label_cond_1f:
	if ( !(this->isSet(0x1)) )  
		goto label_cond_2c;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Non_repudiation\n")));
label_cond_2c:
	if ( !(this->isSet(0x2)) )  
		goto label_cond_39;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Key_Encipherment\n")));
label_cond_39:
	if ( !(this->isSet(0x3)) )  
		goto label_cond_46;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Data_Encipherment\n")));
label_cond_46:
	if ( !(this->isSet(0x4)) )  
		goto label_cond_53;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Key_Agreement\n")));
label_cond_53:
	if ( !(this->isSet(0x5)) )  
		goto label_cond_60;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Key_CertSign\n")));
label_cond_60:
	if ( !(this->isSet(0x6)) )  
		goto label_cond_6d;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Crl_Sign\n")));
label_cond_6d:
	if ( !(this->isSet(0x7)) )  
		goto label_cond_7a;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Encipher_Only\n")));
label_cond_7a:
	if ( !(this->isSet(0x8)) )  
		goto label_cond_88;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Decipher_Only\n")));
label_cond_88:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")));
	return sb->toString();

}


