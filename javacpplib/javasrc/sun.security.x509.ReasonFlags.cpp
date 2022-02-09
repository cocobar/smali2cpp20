// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\ReasonFlags.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.ReasonFlags.h"

static sun::security::x509::ReasonFlags::AA_COMPROMISE = std::make_shared<java::lang::String>("aa_compromise");
static sun::security::x509::ReasonFlags::AFFILIATION_CHANGED = std::make_shared<java::lang::String>("affiliation_changed");
static sun::security::x509::ReasonFlags::CA_COMPROMISE = std::make_shared<java::lang::String>("ca_compromise");
static sun::security::x509::ReasonFlags::CERTIFICATE_HOLD = std::make_shared<java::lang::String>("certificate_hold");
static sun::security::x509::ReasonFlags::CESSATION_OF_OPERATION = std::make_shared<java::lang::String>("cessation_of_operation");
static sun::security::x509::ReasonFlags::KEY_COMPROMISE = std::make_shared<java::lang::String>("key_compromise");
static sun::security::x509::ReasonFlags::NAMES;
static sun::security::x509::ReasonFlags::PRIVILEGE_WITHDRAWN = std::make_shared<java::lang::String>("privilege_withdrawn");
static sun::security::x509::ReasonFlags::SUPERSEDED = std::make_shared<java::lang::String>("superseded");
static sun::security::x509::ReasonFlags::UNUSED = std::make_shared<java::lang::String>("unused");
// .method static constructor <clinit>()V
void sun::security::x509::ReasonFlags::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x9);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("unused"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("key_compromise"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ca_compromise"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("affiliation_changed"));
	cVar0[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("superseded"));
	cVar0[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cessation_of_operation"));
	cVar0[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("certificate_hold"));
	cVar0[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("privilege_withdrawn"));
	cVar0[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("aa_compromise"));
	sun::security::x509::ReasonFlags::NAMES = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/BitArray;)V
sun::security::x509::ReasonFlags::ReasonFlags(std::shared_ptr<sun::security::util::BitArray> reasons)
{
	
	//    .param p1, "reasons"    # Lsun/security/util/BitArray;
	// 118    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->bitString = reasons->toBooleanArray();
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::ReasonFlags::ReasonFlags(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 135        value = {
	// 136            Ljava/io/IOException;
	// 137        }
	// 138    .end annotation
	// 142    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "derVal":Lsun/security/util/DerValue;
	this->bitString = in->getDerValue()->getUnalignedBitString(0x1)->toBooleanArray();
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::ReasonFlags::ReasonFlags(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 171        value = {
	// 172            Ljava/io/IOException;
	// 173        }
	// 174    .end annotation
	// 178    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->bitString = derVal->getUnalignedBitString(0x1)->toBooleanArray();
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::ReasonFlags::ReasonFlags(std::shared_ptr<unsigned char[]> reasons)
{
	
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	
	//    .param p1, "reasons"    # [B
	// 203    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::util::BitArray>(( reasons->size() * 0x8), reasons);
	this->bitString = cVar0->toBooleanArray();
	return;

}
// .method public constructor <init>([Z)V
sun::security::x509::ReasonFlags::ReasonFlags(std::shared_ptr<bool[]> reasons)
{
	
	//    .param p1, "reasons"    # [Z
	// 230    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->bitString = reasons;
	return;

}
// .method private isSet(I)Z
bool sun::security::x509::ReasonFlags::isSet(int position)
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
// .method private static name2Index(Ljava/lang/String;)I
int sun::security::x509::ReasonFlags::name2Index(std::shared_ptr<java::lang::String> name)
{
	
	int i;
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 270        value = {
	// 271            Ljava/io/IOException;
	// 272        }
	// 273    .end annotation
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= sun::security::x509::ReasonFlags::NAMES->size() )
		goto label_cond_14;
	if ( !(sun::security::x509::ReasonFlags::NAMES[i]->equalsIgnoreCase(name)) )  
		goto label_cond_11;
	return i;
	// 301    .line 85
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_1;
	// 307    .line 90
label_cond_14:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name not recognized by ReasonFlags")));
	// throw
	throw cVar0;

}
// .method private set(IZ)V
void sun::security::x509::ReasonFlags::set(int position,bool val)
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
void sun::security::x509::ReasonFlags::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 368        value = {
	// 369            Ljava/io/IOException;
	// 370        }
	// 371    .end annotation
	this->set(name, java::lang::Boolean::FALSE);
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::ReasonFlags::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 387        value = {
	// 388            Ljava/io/IOException;
	// 389        }
	// 390    .end annotation
	cVar0 = std::make_shared<sun::security::util::BitArray>(this->bitString);
	out->putTruncatedUnalignedBitString(cVar0);
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::ReasonFlags::get(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 410        value = {
	// 411            Ljava/io/IOException;
	// 412        }
	// 413    .end annotation
	return java::lang::Boolean::valueOf(this->isSet(sun::security::x509::ReasonFlags::name2Index(name)));

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::ReasonFlags::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	int i;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 435        value = {
	// 436            "()",
	// 437            "Ljava/util/Enumeration",
	// 438            "<",
	// 439            "Ljava/lang/String;",
	// 440            ">;"
	// 441        }
	// 442    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	i = 0x0;
	//    .local v1, "i":I
label_goto_6:
	if ( i >= sun::security::x509::ReasonFlags::NAMES->size() )
		goto label_cond_15;
	elements->addElement(sun::security::x509::ReasonFlags::NAMES[i]);
	i = ( i + 0x1);
	goto label_goto_6;
	// 474    .line 256
label_cond_15:
	return elements->elements();

}
// .method public getFlags()[Z
bool sun::security::x509::ReasonFlags::getFlags()
{
	
	return this->bitString;

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::ReasonFlags::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 498        value = {
	// 499            Ljava/io/IOException;
	// 500        }
	// 501    .end annotation
	if ( obj->instanceOf("java::lang::Boolean") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must be of type Boolean.")));
	// throw
	throw cVar0;
	// 518    .line 181
label_cond_d:
	obj->checkCast("java::lang::Boolean");
	//    .end local p2    # "obj":Ljava/lang/Object;
	//    .local v0, "val":Z
	this->set(sun::security::x509::ReasonFlags::name2Index(name), obj->booleanValue());
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::ReasonFlags::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Reason Flags [\n")));
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	if ( !(this->isSet(0x0)) )  
		goto label_cond_15;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Unused\n")));
label_cond_15:
	if ( !(this->isSet(0x1)) )  
		goto label_cond_22;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Key Compromise\n")));
label_cond_22:
	if ( !(this->isSet(0x2)) )  
		goto label_cond_2f;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  CA Compromise\n")));
label_cond_2f:
	if ( !(this->isSet(0x3)) )  
		goto label_cond_3c;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Affiliation_Changed\n")));
label_cond_3c:
	if ( !(this->isSet(0x4)) )  
		goto label_cond_49;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Superseded\n")));
label_cond_49:
	if ( !(this->isSet(0x5)) )  
		goto label_cond_56;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Cessation Of Operation\n")));
label_cond_56:
	if ( !(this->isSet(0x6)) )  
		goto label_cond_63;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Certificate Hold\n")));
label_cond_63:
	if ( !(this->isSet(0x7)) )  
		goto label_cond_70;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Privilege Withdrawn\n")));
label_cond_70:
	if ( !(this->isSet(0x8)) )  
		goto label_cond_7e;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  AA Compromise\n")));
label_cond_7e:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")));
	return sb->toString();

}


