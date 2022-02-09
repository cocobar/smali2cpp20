// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\IPAddressName.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.net.InetAddress.h"
#include "java.util.Arrays.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.IPAddressName.h"

static sun::security::x509::IPAddressName::MASKSIZE = 0x10;
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::x509::IPAddressName::IPAddressName(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 026        value = {
	// 027            Ljava/io/IOException;
	// 028        }
	// 029    .end annotation
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(name) )  
		goto label_cond_c;
	if ( name->length() )     
		goto label_cond_15;
label_cond_c:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("IPAddress cannot be null or empty")));
	// throw
	throw cVar0;
	// 056    .line 131
label_cond_15:
	if ( name->charAt(( name->length() + -0x1)) != 0x2f )
		goto label_cond_3d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid IPAddress: ")))->append(name)->toString());
	// throw
	throw cVar1;
	// 097    .line 135
label_cond_3d:
	if ( name->indexOf(0x3a) < 0 ) 
		goto label_cond_4b;
	this->parseIPv6(name);
	this->isIPv4 = 0x0;
label_goto_4a:
	return;
	// 117    .line 141
label_cond_4b:
	if ( name->indexOf(0x2e) < 0 ) 
		goto label_cond_5a;
	this->parseIPv4(name);
	this->isIPv4 = 0x1;
	goto label_goto_4a;
	// 137    .line 146
label_cond_5a:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::io::IOException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid IPAddress: ")))->append(name)->toString());
	// throw
	throw cVar3;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::IPAddressName::IPAddressName(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 168        value = {
	// 169            Ljava/io/IOException;
	// 170        }
	// 171    .end annotation
	sun::security::x509::IPAddressName::(derValue->getOctetString());
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::IPAddressName::IPAddressName(std::shared_ptr<unsigned char[]> address)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "address"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 189        value = {
	// 190            Ljava/io/IOException;
	// 191        }
	// 192    .end annotation
	// 196    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( address->size() == 0x4 )
		goto label_cond_c;
	if ( address->size() != 0x8 )
		goto label_cond_12;
label_cond_c:
	this->isIPv4 = 0x1;
label_goto_f:
	this->address = address;
	return;
	// 224    .line 99
label_cond_12:
	if ( address->size() == 0x10 )
		goto label_cond_1c;
	if ( address->size() != 0x20 )
		goto label_cond_20;
label_cond_1c:
	this->isIPv4 = 0x0;
	goto label_goto_f;
	// 246    .line 102
label_cond_20:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid IPAddressName")));
	// throw
	throw cVar0;

}
// .method private parseIPv4(Ljava/lang/String;)V
void sun::security::x509::IPAddressName::parseIPv4(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	int cVar1;
	int slashNdx;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 261        value = {
	// 262            Ljava/io/IOException;
	// 263        }
	// 264    .end annotation
	cVar0 = 0x4;
	cVar1 = 0x0;
	slashNdx = name->indexOf(0x2f);
	//    .local v2, "slashNdx":I
	if ( slashNdx != -0x1 )
		goto label_cond_16;
	this->address = java::net::InetAddress::getByName(name)->getAddress();
label_goto_15:
	return;
	// 299    .line 163
label_cond_16:
	this->address = std::make_shared<std::vector<unsigned char[]>>(0x8);
	//    .local v1, "mask":[B
	//    .local v0, "host":[B
	java::lang::System::arraycopy(java::net::InetAddress::getByName(name->substring(cVar1, slashNdx))->getAddress(), cVar1, this->address, cVar1, cVar0);
	java::lang::System::arraycopy(java::net::InetAddress::getByName(name->substring(( slashNdx + 0x1)))->getAddress(), cVar1, this->address, cVar0, cVar0);
	goto label_goto_15;

}
// .method private parseIPv6(Ljava/lang/String;)V
void sun::security::x509::IPAddressName::parseIPv6(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int slashNdx;
	int prefixLen;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<sun::security::util::BitArray> bitArray;
	int i;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 356        value = {
	// 357            Ljava/io/IOException;
	// 358        }
	// 359    .end annotation
	cVar0 = 0x80;
	cVar1 = 0x10;
	cVar2 = 0x0;
	slashNdx = name->indexOf(0x2f);
	//    .local v5, "slashNdx":I
	if ( slashNdx != -0x1 )
		goto label_cond_19;
	this->address = java::net::InetAddress::getByName(name)->getAddress();
label_cond_18:
	return;
	// 396    .line 193
label_cond_19:
	this->address = std::make_shared<std::vector<unsigned char[]>>(0x20);
	//    .local v0, "base":[B
	java::lang::System::arraycopy(java::net::InetAddress::getByName(name->substring(cVar2, slashNdx))->getAddress(), cVar2, this->address, cVar2, cVar1);
	prefixLen = java::lang::Integer::parseInt(name->substring(( slashNdx + 0x1)));
	//    .local v4, "prefixLen":I
	if ( prefixLen < 0 ) 
		goto label_cond_3e;
	if ( prefixLen <= cVar0 )
		goto label_cond_5f;
label_cond_3e:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::io::IOException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IPv6Address prefix length (")))->append(prefixLen)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") in out of valid range [0,128]")))->toString());
	// throw
	throw cVar3;
	// 475    .line 206
label_cond_5f:
	bitArray = std::make_shared<sun::security::util::BitArray>(cVar0);
	//    .local v1, "bitArray":Lsun/security/util/BitArray;
	i = 0x0;
	//    .local v2, "i":I
label_goto_65:
	if ( i >= prefixLen )
		goto label_cond_6e;
	bitArray->set(i, 0x1);
	i = ( i + 0x1);
	goto label_goto_65;
	// 499    .line 211
label_cond_6e:
	//    .local v3, "maskArray":[B
	i = 0x0;
label_goto_73:
	if ( i >= cVar1 )
		goto label_cond_18;
	this->address[( i + 0x10)] = bitArray->toByteArray()[i];
	i = ( i + 0x1);
	goto label_goto_73;

}
// .method public constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::IPAddressName::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<sun::security::x509::IPAddressName> cVar3;
	std::shared_ptr<sun::security::x509::IPAddressName> otherName;
	std::shared_ptr<unsigned char[]> otherAddress;
	int thisEmpty;
	int otherEmpty;
	int maskOffset;
	int i;
	
	//    .param p1, "inputName"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 533        value = {
	// 534            Ljava/lang/UnsupportedOperationException;
	// 535        }
	// 536    .end annotation
	cVar0 = 0x4;
	cVar1 = 0x20;
	cVar2 = 0x8;
	if ( inputName )     
		goto label_cond_9;
	//    .local v0, "constraintType":I
label_goto_8:
	return constraintType;
	// 556    .line 399
	// 557    .end local v0    # "constraintType":I
label_cond_9:
	if ( inputName->getType() == 0x7 )
		goto label_cond_12;
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 573    .end local v0    # "constraintType":I
label_cond_12:
	cVar3 = inputName;
	cVar3->checkCast("sun::security::x509::IPAddressName");
	if ( !(cVar3->equals(this)) )  
		goto label_cond_1d;
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 592    .end local v0    # "constraintType":I
label_cond_1d:
	otherName = inputName;
	otherName->checkCast("sun::security::x509::IPAddressName");
	//    .local v5, "otherName":Lsun/security/x509/IPAddressName;
	otherAddress = otherName->address;
	//    .local v3, "otherAddress":[B
	if ( otherAddress->size() != cVar0 )
		goto label_cond_2c;
	if ( this->address->size() != cVar0 )
		goto label_cond_2c;
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 621    .line 409
	// 622    .end local v0    # "constraintType":I
label_cond_2c:
	if ( otherAddress->size() != cVar2 )
		goto label_cond_b7;
	if ( this->address->size() != cVar2 )
		goto label_cond_b7;
label_cond_34:
	//    .local v6, "otherSubsetOfThis":Z
	//    .local v8, "thisSubsetOfOther":Z
	thisEmpty = 0x0;
	//    .local v7, "thisEmpty":Z
	otherEmpty = 0x0;
	//    .local v4, "otherEmpty":Z
	maskOffset = ( this->address->size() / 0x2);
	//    .local v2, "maskOffset":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_3e:
	if ( i >= maskOffset )
		goto label_cond_dd;
	if ( (unsigned char)((this->address[i] &  this->address[(i + maskOffset)])) == this->address[i] )
		goto label_cond_53;
	0x1;
label_cond_53:
	if ( (unsigned char)((otherAddress[i] &  otherAddress[(i + maskOffset)])) == otherAddress[i] )
		goto label_cond_60;
	0x1;
label_cond_60:
	if ( (unsigned char)((this->address[(i + maskOffset)] &  otherAddress[(i + maskOffset)])) != this->address[(i + maskOffset)] )
		goto label_cond_8c;
	if ( (unsigned char)((this->address[i] &  this->address[(i + maskOffset)])) == (unsigned char)((otherAddress[i] &  this->address[(i + maskOffset)])) )
		goto label_cond_8d;
label_cond_8c:
	0x0;
label_cond_8d:
	if ( (unsigned char)((otherAddress[(i + maskOffset)] &  this->address[(i + maskOffset)])) != otherAddress[(i + maskOffset)] )
		goto label_cond_b3;
	if ( (unsigned char)((otherAddress[i] &  otherAddress[(i + maskOffset)])) == (unsigned char)((this->address[i] &  otherAddress[(i + maskOffset)])) )
		goto label_cond_b4;
label_cond_b3:
	0x0;
label_cond_b4:
	i = ( i + 0x1);
	goto label_goto_3e;
	// 823    .line 410
	// 824    .end local v1    # "i":I
	// 825    .end local v2    # "maskOffset":I
	// 826    .end local v4    # "otherEmpty":Z
	// 827    .end local v6    # "otherSubsetOfThis":Z
	// 828    .end local v7    # "thisEmpty":Z
	// 829    .end local v8    # "thisSubsetOfOther":Z
label_cond_b7:
	if ( otherAddress->size() != cVar1 )
		goto label_cond_bf;
	if ( this->address->size() == cVar1 )
		goto label_cond_34;
label_cond_bf:
	if ( otherAddress->size() == cVar2 )
		goto label_cond_c5;
	if ( otherAddress->size() != cVar1 )
		goto label_cond_103;
label_cond_c5:
	i = 0x0;
	//    .restart local v1    # "i":I
	maskOffset = ( otherAddress->size() / 0x2);
	//    .restart local v2    # "maskOffset":I
label_goto_c9:
	if ( i >= maskOffset )
		goto label_cond_d8;
	if ( (this->address[i] &  otherAddress[(i + maskOffset)]) == otherAddress[i] )
		goto label_cond_fd;
label_cond_d8:
	if ( i != maskOffset )
		goto label_cond_100;
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 891    .line 432
	// 892    .end local v0    # "constraintType":I
	// 893    .restart local v4    # "otherEmpty":Z
	// 894    .restart local v6    # "otherSubsetOfThis":Z
	// 895    .restart local v7    # "thisEmpty":Z
	// 896    .restart local v8    # "thisSubsetOfOther":Z
label_cond_dd:
	if ( thisEmpty )     
		goto label_cond_e1;
	if ( !(otherEmpty) )  
		goto label_cond_f0;
label_cond_e1:
	if ( !(thisEmpty) )  
		goto label_cond_e8;
	if ( !(otherEmpty) )  
		goto label_cond_e8;
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 914    .line 435
	// 915    .end local v0    # "constraintType":I
label_cond_e8:
	if ( !(thisEmpty) )  
		goto label_cond_ed;
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 925    .line 438
	// 926    .end local v0    # "constraintType":I
label_cond_ed:
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 933    .line 439
	// 934    .end local v0    # "constraintType":I
label_cond_f0:
	if ( !(0x1) )  
		goto label_cond_f5;
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 944    .line 441
	// 945    .end local v0    # "constraintType":I
label_cond_f5:
	if ( !(0x1) )  
		goto label_cond_fa;
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 955    .line 444
	// 956    .end local v0    # "constraintType":I
label_cond_fa:
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 963    .line 449
	// 964    .end local v0    # "constraintType":I
	// 965    .end local v4    # "otherEmpty":Z
	// 966    .end local v6    # "otherSubsetOfThis":Z
	// 967    .end local v7    # "thisEmpty":Z
	// 968    .end local v8    # "thisSubsetOfOther":Z
label_cond_fd:
	i = ( i + 0x1);
	goto label_goto_c9;
	// 974    .line 458
label_cond_100:
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 981    .line 459
	// 982    .end local v0    # "constraintType":I
	// 983    .end local v1    # "i":I
	// 984    .end local v2    # "maskOffset":I
label_cond_103:
	if ( this->address->size() == cVar2 )
		goto label_cond_10d;
	if ( this->address->size() != cVar1 )
		goto label_cond_12f;
label_cond_10d:
	i = 0x0;
	//    .restart local v1    # "i":I
	maskOffset = ( this->address->size() / 0x2);
	//    .restart local v2    # "maskOffset":I
label_goto_113:
	if ( i >= maskOffset )
		goto label_cond_124;
	if ( (otherAddress[i] &  this->address[(i + maskOffset)]) == this->address[i] )
		goto label_cond_129;
label_cond_124:
	if ( i != maskOffset )
		goto label_cond_12c;
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 1042    .line 463
	// 1043    .end local v0    # "constraintType":I
label_cond_129:
	i = ( i + 0x1);
	goto label_goto_113;
	// 1049    .line 471
label_cond_12c:
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;
	// 1056    .line 473
	// 1057    .end local v0    # "constraintType":I
	// 1058    .end local v1    # "i":I
	// 1059    .end local v2    # "maskOffset":I
label_cond_12f:
	//    .restart local v0    # "constraintType":I
	goto label_goto_8;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::IPAddressName::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1071        value = {
	// 1072            Ljava/io/IOException;
	// 1073        }
	// 1074    .end annotation
	out->putOctetString(this->address);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::IPAddressName::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::x509::IPAddressName> otherName;
	std::shared_ptr<unsigned char[]> other;
	int maskLen;
	int i;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 1101    .line 319
label_cond_5:
	if ( obj->instanceOf("sun::security::x509::IPAddressName") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	otherName = obj;
	otherName->checkCast("sun::security::x509::IPAddressName");
	//    .local v5, "otherName":Lsun/security/x509/IPAddressName;
	other = otherName->address;
	//    .local v4, "other":[B
	if ( other->size() == this->address->size() )
		goto label_cond_16;
	return cVar1;
	// 1133    .line 328
label_cond_16:
	if ( this->address->size() == 0x8 )
		goto label_cond_24;
	if ( this->address->size() != 0x20 )
		goto label_cond_59;
label_cond_24:
	maskLen = ( this->address->size() / 0x2);
	//    .local v1, "maskLen":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_2a:
	if ( i >= maskLen )
		goto label_cond_46;
	//    .local v3, "maskedThis":B
	//    .local v2, "maskedOther":B
	if ( (unsigned char)((this->address[i] &  this->address[(i + maskLen)])) == (unsigned char)((other[i] &  other[(i + maskLen)])) )
		goto label_cond_43;
	return cVar1;
	// 1201    .line 332
label_cond_43:
	i = ( i + 0x1);
	goto label_goto_2a;
	// 1207    .line 340
	// 1208    .end local v2    # "maskedOther":B
	// 1209    .end local v3    # "maskedThis":B
label_cond_46:
	i = maskLen;
label_goto_47:
	if ( i >= this->address->size() )
		goto label_cond_58;
	if ( this->address[i] == other[i] )
		goto label_cond_55;
	return cVar1;
	// 1232    .line 340
label_cond_55:
	i = ( i + 0x1);
	goto label_goto_47;
	// 1238    .line 343
label_cond_58:
	return cVar0;
	// 1242    .line 347
	// 1243    .end local v0    # "i":I
	// 1244    .end local v1    # "maskLen":I
label_cond_59:
	return java::util::Arrays::equals(other, this->address);

}
// .method public getBytes()[B
unsigned char sun::security::x509::IPAddressName::getBytes()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	cVar0 = this->address->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::IPAddressName::getName()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<unsigned char[]>> host;
	std::shared<std::vector<unsigned char[]>> mask;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared<std::vector<unsigned char[]>> maskBytes;
	int i;
	std::shared_ptr<sun::security::util::BitArray> ba;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::io::IOException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1274        value = {
	// 1275            Ljava/io/IOException;
	// 1276        }
	// 1277    .end annotation
	cVar0 = 0x20;
	cVar1 = 0x80;
	cVar2 = 0x10;
	cVar3 = 0x4;
	cVar4 = 0x0;
	if ( !(this->name) )  
		goto label_cond_f;
	return this->name;
	// 1300    .line 260
label_cond_f:
	if ( !(this->isIPv4) )  
		goto label_cond_59;
	host = std::make_shared<std::vector<unsigned char[]>>(cVar3);
	//    .local v1, "host":[B
	java::lang::System::arraycopy(this->address, cVar4, host, cVar4, cVar3);
	this->name = java::net::InetAddress::getByAddress(host)->getHostAddress();
	if ( this->address->size() != 0x8 )
		goto label_cond_56;
	mask = std::make_shared<std::vector<unsigned char[]>>(cVar3);
	//    .local v3, "mask":[B
	java::lang::System::arraycopy(this->address, cVar3, mask, cVar4, cVar3);
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	this->name = cVar5->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(java::net::InetAddress::getByAddress(mask)->getHostAddress())->toString();
	//    .end local v3    # "mask":[B
label_cond_56:
	return this->name;
	// 1388    .line 273
	// 1389    .end local v1    # "host":[B
label_cond_59:
	host = std::make_shared<std::vector<unsigned char[]>>(cVar2);
	//    .restart local v1    # "host":[B
	java::lang::System::arraycopy(this->address, cVar4, host, cVar4, cVar2);
	this->name = java::net::InetAddress::getByAddress(host)->getHostAddress();
	if ( this->address->size() != cVar0 )
		goto label_cond_56;
	maskBytes = std::make_shared<std::vector<unsigned char[]>>(cVar2);
	//    .local v4, "maskBytes":[B
	i = 0x10;
	//    .local v2, "i":I
label_goto_73:
	if ( i >= cVar0 )
		goto label_cond_80;
	maskBytes[( i + -0x10)] = this->address[i];
	i = ( i + 0x1);
	goto label_goto_73;
	// 1442    .line 283
label_cond_80:
	ba = std::make_shared<sun::security::util::BitArray>(cVar1, maskBytes);
	//    .local v0, "ba":Lsun/security/util/BitArray;
	i = 0x0;
label_goto_86:
	if ( i >= cVar1 )
		goto label_cond_8e;
	if ( ba->get(i) )     
		goto label_cond_d3;
label_cond_8e:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	this->name = cVar6->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(i)->toString();
label_goto_aa:
	if ( i >= cVar1 )
		goto label_cond_56;
	if ( !(ba->get(i)) )  
		goto label_cond_d6;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::io::IOException>(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid IPv6 subdomain - set bit ")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not contiguous")))->toString());
	// throw
	throw cVar7;
	// 1535    .line 286
label_cond_d3:
	i = ( i + 0x1);
	goto label_goto_86;
	// 1541    .line 292
label_cond_d6:
	i = ( i + 0x1);
	goto label_goto_aa;

}
// .method public getType()I
int sun::security::x509::IPAddressName::getType()
{
	
	return 0x7;

}
// .method public hashCode()I
int sun::security::x509::IPAddressName::hashCode()
{
	
	int retval;
	int i;
	
	retval = 0x0;
	//    .local v1, "retval":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->address->size() )
		goto label_cond_10;
	retval = (retval +  (this->address[i] *  i));
	i = ( i + 0x1);
	goto label_goto_2;
	// 1591    .line 362
label_cond_10:
	return retval;

}
// .method public subtreeDepth()I
int sun::security::x509::IPAddressName::subtreeDepth()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1599        value = {
	// 1600            Ljava/lang/UnsupportedOperationException;
	// 1601        }
	// 1602    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("subtreeDepth() not defined for IPAddressName")));
	// throw
	throw cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::IPAddressName::toString()
{
	
	std::shared_ptr<sun::misc::HexDumpEncoder> enc;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_17:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_17} :catch_19
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IPAddress: ")))->append(this->getName())->toString();
	// 1649    .line 242
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ioe":Ljava/io/IOException;
	enc = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v0, "enc":Lsun/misc/HexDumpEncoder;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IPAddress: ")))->append(enc->encodeBuffer(this->address))->toString();

}


