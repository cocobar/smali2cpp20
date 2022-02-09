// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\AVA.smali
#include "java2ctype.h"
#include "java.io.ByteArrayOutputStream.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.io.Reader.h"
#include "java.lang.Boolean.h"
#include "java.lang.Byte.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.AccessController.h"
#include "java.text.Normalizer_S_Form.h"
#include "java.text.Normalizer.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "sun.security.action.GetBooleanAction.h"
#include "sun.security.pkcs.PKCS9Attribute.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AVA.h"
#include "sun.security.x509.AVAKeyword.h"
#include "sun.security.x509.X500Name.h"

static sun::security::x509::AVA::DEFAULT = 0x1;
static sun::security::x509::AVA::PRESERVE_OLD_DC_ENCODING;
static sun::security::x509::AVA::RFC1779 = 0x2;
static sun::security::x509::AVA::RFC2253 = 0x3;
static sun::security::x509::AVA::debug;
static sun::security::x509::AVA::escapedDefault = std::make_shared<java::lang::String>(",+<>;\"");
static sun::security::x509::AVA::hexDigits = std::make_shared<java::lang::String>("0123456789ABCDEF");
static sun::security::x509::AVA::specialChars1779 = std::make_shared<java::lang::String>(",=\n+<>#;\\\"");
static sun::security::x509::AVA::specialChars2253 = std::make_shared<java::lang::String>(",=+<>#;\\\"");
static sun::security::x509::AVA::specialCharsDefault = std::make_shared<java::lang::String>(",=\n+<>#;\\\" ");
// .method static constructor <clinit>()V
void sun::security::x509::AVA::static_cinit()
{
	
	std::shared_ptr<sun::security::action::GetBooleanAction> cVar0;
	std::shared_ptr<java::lang::Boolean> cVar1;
	
	sun::security::x509::AVA::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\t[AVA]")));
	cVar0 = std::make_shared<sun::security::action::GetBooleanAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("com.sun.security.preserveOldDCEncoding")));
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::lang::Boolean");
	sun::security::x509::AVA::PRESERVE_OLD_DC_ENCODING = cVar1->booleanValue();
	return;

}
// .method constructor <init>(Ljava/io/Reader;)V
sun::security::x509::AVA::AVA(std::shared_ptr<java::io::Reader> in)
{
	
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 083        value = {
	// 084            Ljava/io/IOException;
	// 085        }
	// 086    .end annotation
	sun::security::x509::AVA::(in, 0x1);
	return;

}
// .method constructor <init>(Ljava/io/Reader;I)V
sun::security::x509::AVA::AVA(std::shared_ptr<java::io::Reader> in,int format)
{
	
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .param p2, "format"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 103        value = {
	// 104            Ljava/io/IOException;
	// 105        }
	// 106    .end annotation
	sun::security::x509::AVA::(in, format, java::util::Collections::emptyMap({const[class].FS-Param}));
	return;

}
// .method constructor <init>(Ljava/io/Reader;ILjava/util/Map;)V
sun::security::x509::AVA::AVA(std::shared_ptr<java::io::Reader> in,int format,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> temp;
	int c;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<sun::security::util::DerValue> cVar3;
	
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .param p2, "format"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 125        value = {
	// 126            "(",
	// 127            "Ljava/io/Reader;",
	// 128            "I",
	// 129            "Ljava/util/Map",
	// 130            "<",
	// 131            "Ljava/lang/String;",
	// 132            "Ljava/lang/String;",
	// 133            ">;)V"
	// 134        }
	// 135    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 138        value = {
	// 139            Ljava/io/IOException;
	// 140        }
	// 141    .end annotation
	//    .local p3, "keywordMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	cVar0 = 0x20;
	cVar1 = 0x3;
	// 150    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	temp = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "temp":Ljava/lang/StringBuilder;
label_goto_b:
	c = sun::security::x509::AVA::readChar(in, std::make_shared<java::lang::String>(std::make_shared<char[]>("Incorrect AVA format")));
	//    .local v0, "c":I
	if ( c != 0x3d )
		goto label_cond_35;
	this->oid = sun::security::x509::AVAKeyword::getOID(temp->toString(), format, keywordMap);
	temp->setLength(0x0);
	if ( format != cVar1 )
		goto label_cond_3a;
	c = in->read();
	if ( c != cVar0 )
		goto label_cond_44;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incorrect AVA RFC2253 format - leading space must be escaped")));
	// throw
	throw cVar2;
	// 208    .line 186
label_cond_35:
	temp->append((char)(c));
	goto label_goto_b;
	// 216    .line 207
label_cond_3a:
	c = in->read();
	if ( c == cVar0 )
		goto label_cond_3a;
	if ( c == 0xa )
		goto label_cond_3a;
label_cond_44:
	if ( c != -0x1 )
		goto label_cond_52;
	cVar3 = std::make_shared<sun::security::util::DerValue>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	this->value = cVar3;
	return;
	// 247    .line 216
label_cond_52:
	if ( c != 0x23 )
		goto label_cond_5d;
	this->value = sun::security::x509::AVA::parseHexString(in, format);
label_goto_5c:
	return;
	// 264    .line 218
label_cond_5d:
	if ( c != 0x22 )
		goto label_cond_6a;
	if ( format == cVar1 )
		goto label_cond_6a;
	this->value = this->parseQuotedString(in, temp);
	goto label_goto_5c;
	// 281    .line 221
label_cond_6a:
	this->value = this->parseString(in, c, format, temp);
	goto label_goto_5c;

}
// .method constructor <init>(Ljava/io/Reader;Ljava/util/Map;)V
sun::security::x509::AVA::AVA(std::shared_ptr<java::io::Reader> in,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap)
{
	
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 296        value = {
	// 297            "(",
	// 298            "Ljava/io/Reader;",
	// 299            "Ljava/util/Map",
	// 300            "<",
	// 301            "Ljava/lang/String;",
	// 302            "Ljava/lang/String;",
	// 303            ">;)V"
	// 304        }
	// 305    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 308        value = {
	// 309            Ljava/io/IOException;
	// 310        }
	// 311    .end annotation
	//    .local p2, "keywordMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	sun::security::x509::AVA::(in, 0x1, keywordMap);
	return;

}
// .method constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::AVA::AVA(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 328        value = {
	// 329            Ljava/io/IOException;
	// 330        }
	// 331    .end annotation
	sun::security::x509::AVA::(in->getDerValue());
	return;

}
// .method constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::AVA::AVA(std::shared_ptr<sun::security::util::DerValue> derval)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "derval"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 349        value = {
	// 350            Ljava/io/IOException;
	// 351        }
	// 352    .end annotation
	// 356    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( derval->tag == 0x30 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AVA not a sequence")));
	// throw
	throw cVar0;
	// 374    .line 624
label_cond_12:
	this->oid = sun::security::x509::X500Name::intern(derval->data->getOID());
	this->value = derval->data->getDerValue();
	if ( !(derval->data->available()) )  
		goto label_cond_4e;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AVA, extra bytes = ")))->append(derval->data->available())->toString());
	// throw
	throw cVar1;
	// 439    .line 631
label_cond_4e:
	return;

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;Lsun/security/util/DerValue;)V
sun::security::x509::AVA::AVA(std::shared_ptr<sun::security::util::ObjectIdentifier> type,std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "type"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "val"    # Lsun/security/util/DerValue;
	// 451    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(type) )  
		goto label_cond_7;
	if ( val )     
		goto label_cond_d;
label_cond_7:
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 466    .line 121
label_cond_d:
	this->oid = type;
	this->value = val;
	return;

}
// .method private static getEmbeddedHexPair(ILjava/io/Reader;)Ljava/lang/Byte;
std::shared_ptr<java::lang::Byte> sun::security::x509::AVA::getEmbeddedHexPair(int c1,std::shared_ptr<java::io::Reader> in)
{
	
	int cVar0;
	int c2;
	std::shared_ptr<java::lang::Byte> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .param p0, "c1"    # I
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 482        value = {
	// 483            Ljava/io/IOException;
	// 484        }
	// 485    .end annotation
	cVar0 = 0x10;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789ABCDEF"))->indexOf(java::lang::Character::toUpperCase((char)(c1))) < 0 ) 
		goto label_cond_42;
	c2 = sun::security::x509::AVA::readChar(in, std::make_shared<java::lang::String>(std::make_shared<char[]>("unexpected EOF - escaped hex value must include two valid digits")));
	//    .local v0, "c2":I
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789ABCDEF"))->indexOf(java::lang::Character::toUpperCase((char)(c2))) < 0 ) 
		goto label_cond_39;
	//    .local v1, "hi":I
	//    .local v2, "lo":I
	cVar1 = std::make_shared<java::lang::Byte>((unsigned char)((( java::lang::Character::digit((char)(c1), cVar0) << 0x4) +  java::lang::Character::digit((char)(c2), cVar0))));
	return cVar1;
	// 557    .line 544
	// 558    .end local v1    # "hi":I
	// 559    .end local v2    # "lo":I
label_cond_39:
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("escaped hex value must include two valid digits")));
	// throw
	throw cVar2;
	// 571    .line 548
	// 572    .end local v0    # "c2":I
label_cond_42:
	return 0x0;

}
// .method private static getEmbeddedHexString(Ljava/util/List;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::getEmbeddedHexString(std::shared_ptr<java::util::List<java::lang::Byte>> hexList)
{
	
	int n;
	std::shared<std::vector<unsigned char[]>> hexBytes;
	int i;
	std::shared_ptr<java::lang::Byte> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 582        value = {
	// 583            "(",
	// 584            "Ljava/util/List",
	// 585            "<",
	// 586            "Ljava/lang/Byte;",
	// 587            ">;)",
	// 588            "Ljava/lang/String;"
	// 589        }
	// 590    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 593        value = {
	// 594            Ljava/io/IOException;
	// 595        }
	// 596    .end annotation
	//    .local p0, "hexList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Byte;>;"
	n = hexList->size();
	//    .local v2, "n":I
	hexBytes = std::make_shared<std::vector<unsigned char[]>>(n);
	//    .local v0, "hexBytes":[B
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= n )
		goto label_cond_18;
	cVar0 = hexList->get(i);
	cVar0->checkCast("java::lang::Byte");
	hexBytes[i] = cVar0->byteValue();
	i = ( i + 0x1);
	goto label_goto_7;
	// 635    .line 558
label_cond_18:
	cVar1 = std::make_shared<java::lang::String>(hexBytes, std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	return cVar1;

}
// .method private static isDerString(Lsun/security/util/DerValue;Z)Z
bool sun::security::x509::AVA::isDerString(std::shared_ptr<sun::security::util::DerValue> value,bool canonical)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p0, "value"    # Lsun/security/util/DerValue;
	//    .param p1, "canonical"    # Z
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( !(canonical) )  
		goto label_cond_b;
	// switch
	{
	auto item = ( value->tag );
	if (item == 0xc) goto label_sswitch_a;
	if (item == 0x13) goto label_sswitch_a;
	}
	return cVar1;
	// 667    .line 1034
label_sswitch_a:
	return cVar0;
	// 671    .line 1039
label_cond_b:
	// switch
	{
	auto item = ( value->tag );
	if (item == 0xc) goto label_sswitch_11;
	if (item == 0x13) goto label_sswitch_11;
	if (item == 0x14) goto label_sswitch_11;
	if (item == 0x16) goto label_sswitch_11;
	if (item == 0x1b) goto label_sswitch_11;
	if (item == 0x1e) goto label_sswitch_11;
	}
	return cVar1;
	// 680    .line 1046
label_sswitch_11:
	return cVar0;
	// 684    .line 1031
	// 685    :sswitch_data_12
	// 686    .sparse-switch
	// 687        0xc -> :sswitch_a
	// 688        0x13 -> :sswitch_a
	// 689    .end sparse-switch
	// 691    .line 1039
	// 692    :sswitch_data_1c
	// 693    .sparse-switch
	// 694        0xc -> :sswitch_11
	// 695        0x13 -> :sswitch_11
	// 696        0x14 -> :sswitch_11
	// 697        0x16 -> :sswitch_11
	// 698        0x1b -> :sswitch_11
	// 699        0x1e -> :sswitch_11
	// 700    .end sparse-switch

}
// .method private static isTerminator(II)Z
bool sun::security::x509::AVA::isTerminator(int ch,int format)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p0, "ch"    # I
	//    .param p1, "format"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	// switch
	{
	auto item = ( ch );
	if (item == -0x1) goto label_sswitch_6;
	if (item == 0x2b) goto label_sswitch_6;
	if (item == 0x2c) goto label_sswitch_6;
	if (item == 0x3b) goto label_sswitch_7;
	}
	return cVar1;
	// 719    .line 566
label_sswitch_6:
	return cVar0;
	// 723    .line 568
label_sswitch_7:
	if ( format == 0x3 )
		goto label_cond_b;
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = cVar1;
	goto label_goto_a;
	// 737    .line 562
	// 738    nop
	// 740    :sswitch_data_e
	// 741    .sparse-switch
	// 742        -0x1 -> :sswitch_6
	// 743        0x2b -> :sswitch_6
	// 744        0x2c -> :sswitch_6
	// 745        0x3b -> :sswitch_7
	// 746    .end sparse-switch

}
// .method private static parseHexString(Ljava/io/Reader;I)Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::x509::AVA::parseHexString(std::shared_ptr<java::io::Reader> in,int format)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::io::ByteArrayOutputStream> baos;
	int cNdx;
	int c;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::io::IOException> cVar8;
	std::shared_ptr<sun::security::util::DerValue> cVar9;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	int cVal;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	int b;
	
	//    .param p0, "in"    # Ljava/io/Reader;
	//    .param p1, "format"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 754        value = {
	// 755            Ljava/io/IOException;
	// 756        }
	// 757    .end annotation
	cVar0 = 0x20;
	cVar1 = 0xa;
	cVar2 = 0x1;
	baos = std::make_shared<java::io::ByteArrayOutputStream>();
	//    .local v1, "baos":Ljava/io/ByteArrayOutputStream;
	//    .local v0, "b":B
	cNdx = 0x0;
	//    .end local v0    # "b":B
	//    .local v3, "cNdx":I
label_goto_c:
	c = in->read();
	//    .local v2, "c":I
	if ( !(sun::security::x509::AVA::isTerminator(c, format)) )  
		goto label_cond_21;
label_cond_16:
	if ( cNdx )     
		goto label_cond_8a;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AVA parse, zero hex digits")));
	// throw
	throw cVar3;
	// 808    .line 273
label_cond_21:
	if ( c == cVar0 )
		goto label_cond_25;
	if ( c != cVar1 )
		goto label_cond_4f;
label_cond_25:
label_goto_25:
	if ( c == cVar0 )
		goto label_cond_44;
	if ( c == cVar1 )
		goto label_cond_44;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::io::IOException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AVA parse, invalid hex digit: ")))->append((char)(c))->toString());
	// throw
	throw cVar4;
	// 848    .line 278
label_cond_44:
	c = in->read();
	if ( sun::security::x509::AVA::isTerminator(c, format) )     
		goto label_cond_16;
	goto label_goto_25;
	// 863    .line 283
label_cond_4f:
	cVal = std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789ABCDEF"))->indexOf(java::lang::Character::toUpperCase((char)(c)));
	//    .local v4, "cVal":I
	if ( cVal != -0x1 )
		goto label_cond_79;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::io::IOException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AVA parse, invalid hex digit: ")))->append((char)(c))->toString());
	// throw
	throw cVar6;
	// 912    .line 290
label_cond_79:
	if ( ( cNdx % 0x2) != cVar2 )
		goto label_cond_88;
	b = (unsigned char)((( b * 0x10) +  (unsigned char)(cVal)));
	//    .local v0, "b":B
	baos->write(b);
label_goto_85:
	cNdx = ( cNdx + 0x1);
	goto label_goto_c;
	// 937    .line 294
	// 938    .end local v0    # "b":B
label_cond_88:
	(unsigned char)(cVal);
	//    .restart local v0    # "b":B
	goto label_goto_85;
	// 945    .line 305
	// 946    .end local v0    # "b":B
	// 947    .end local v4    # "cVal":I
label_cond_8a:
	if ( ( cNdx % 0x2) != cVar2 )
		goto label_cond_97;
	cVar8 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AVA parse, odd number of hex digits")));
	// throw
	throw cVar8;
	// 962    .line 309
label_cond_97:
	cVar9 = std::make_shared<sun::security::util::DerValue>(baos->toByteArray());
	return cVar9;

}
// .method private parseQuotedString(Ljava/io/Reader;Ljava/lang/StringBuilder;)Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::x509::AVA::parseQuotedString(std::shared_ptr<java::io::Reader> in,std::shared_ptr<java::lang::StringBuilder> temp)
{
	
	int c;
	std::shared_ptr<java::util::ArrayList> embeddedHex;
	int cVar0;
	std::shared_ptr<java::lang::Object> hexByte;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<sun::security::util::DerValue> cVar4;
	std::shared_ptr<sun::security::util::DerValue> cVar5;
	std::shared_ptr<sun::security::util::DerValue> cVar6;
	
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .param p2, "temp"    # Ljava/lang/StringBuilder;
	//    .annotation system Ldalvik/annotation/Throws;
	// 980        value = {
	// 981            Ljava/io/IOException;
	// 982        }
	// 983    .end annotation
	c = sun::security::x509::AVA::readChar(in, std::make_shared<java::lang::String>(std::make_shared<char[]>("Quoted string did not end in quote")));
	//    .local v0, "c":I
	embeddedHex = std::make_shared<java::util::ArrayList>();
	//    .local v1, "embeddedHex":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Byte;>;"
	cVar0 = 0x1;
label_goto_d:
	if ( c == 0x22 )
		goto label_cond_73;
	if ( c != 0x5c )
		goto label_cond_51;
	c = sun::security::x509::AVA::readChar(in, std::make_shared<java::lang::String>(std::make_shared<char[]>("Quoted string did not end in quote")));
	0x0;
	//    .local v2, "hexByte":Ljava/lang/Byte;
	hexByte = sun::security::x509::AVA::getEmbeddedHexPair(c, in);
	//    .local v2, "hexByte":Ljava/lang/Byte;
	if ( !(hexByte) )  
		goto label_cond_2c;
	cVar0 = 0x0;
	//    .local v4, "isPrintableString":Z
	embeddedHex->add(hexByte);
	c = in->read();
	goto label_goto_d;
	// 1047    .line 342
	// 1048    .end local v4    # "isPrintableString":Z
label_cond_2c:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",=\n+<>#;\\\"))->indexOf((char)(c)) >= 0 )
		goto label_cond_51;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid escaped character in AVA: ")))->append((char)(c))->toString());
	// throw
	throw cVar1;
	// 1091    .line 350
	// 1092    .end local v2    # "hexByte":Ljava/lang/Byte;
label_cond_51:
	if ( embeddedHex->size() <= 0 )
		goto label_cond_61;
	//    .local v3, "hexString":Ljava/lang/String;
	temp->append(sun::security::x509::AVA::getEmbeddedHexString(embeddedHex));
	embeddedHex->clear();
	//    .end local v3    # "hexString":Ljava/lang/String;
label_cond_61:
	cVar0 = (cVar0 &  sun::security::util::DerValue::isPrintableStringChar((char)(c)));
	//    .local v4, "isPrintableString":Z
	temp->append((char)(c));
	c = sun::security::x509::AVA::readChar(in, std::make_shared<java::lang::String>(std::make_shared<char[]>("Quoted string did not end in quote")));
	goto label_goto_d;
	// 1138    .line 363
	// 1139    .end local v4    # "isPrintableString":Z
label_cond_73:
	if ( embeddedHex->size() <= 0 )
		goto label_cond_83;
	//    .restart local v3    # "hexString":Ljava/lang/String;
	temp->append(sun::security::x509::AVA::getEmbeddedHexString(embeddedHex));
	embeddedHex->clear();
	//    .end local v3    # "hexString":Ljava/lang/String;
label_cond_83:
	c = in->read();
	if ( c == 0xa )
		goto label_cond_83;
	if ( c == 0x20 )
		goto label_cond_83;
	if ( c == -0x1 )
		goto label_cond_9b;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AVA had characters other than whitespace after terminating quote")));
	// throw
	throw cVar3;
	// 1189    .line 379
label_cond_9b:
	if ( this->oid->equals(sun::security::pkcs::PKCS9Attribute::EMAIL_ADDRESS_OID) )     
		goto label_cond_b3;
	if ( !(this->oid->equals(sun::security::x509::X500Name::DOMAIN_COMPONENT_OID)) )  
		goto label_cond_bf;
	if ( sun::security::x509::AVA::PRESERVE_OLD_DC_ENCODING )     
		goto label_cond_bf;
label_cond_b3:
	cVar4 = std::make_shared<sun::security::util::DerValue>(0x16, temp->toString());
	return cVar4;
	// 1233    .line 387
label_cond_bf:
	if ( !(cVar0) )  
		goto label_cond_cb;
	cVar5 = std::make_shared<sun::security::util::DerValue>(temp->toString());
	return cVar5;
	// 1248    .line 392
label_cond_cb:
	cVar6 = std::make_shared<sun::security::util::DerValue>(0xc, temp->toString());
	return cVar6;

}
// .method private parseString(Ljava/io/Reader;IILjava/lang/StringBuilder;)Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::x509::AVA::parseString(std::shared_ptr<java::io::Reader> in,int c,int format,std::shared_ptr<java::lang::StringBuilder> temp)
{
	
	std::shared_ptr<java::util::ArrayList> embeddedHex;
	int leadingChar;
	int spaceCount;
	int c;
	std::shared_ptr<java::lang::Object> hexByte;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<sun::security::util::DerValue> cVar12;
	std::shared_ptr<sun::security::util::DerValue> cVar13;
	std::shared_ptr<sun::security::util::DerValue> cVar14;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	int i;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<java::io::IOException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::io::IOException> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	
	//    .param p1, "in"    # Ljava/io/Reader;
	//    .param p2, "c"    # I
	//    .param p3, "format"    # I
	//    .param p4, "temp"    # Ljava/lang/StringBuilder;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1272        value = {
	// 1273            Ljava/io/IOException;
	// 1274        }
	// 1275    .end annotation
	embeddedHex = std::make_shared<java::util::ArrayList>();
	//    .local v0, "embeddedHex":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Byte;>;"
	//    .local v5, "isPrintableString":Z
	0x0;
	//    .local v1, "escape":Z
	leadingChar = 0x1;
	//    .local v6, "leadingChar":Z
	spaceCount = 0x0;
	//    .end local v5    # "isPrintableString":Z
	//    .local v7, "spaceCount":I
label_cond_9:
	0x0;
	if ( c != 0x5c )
		goto label_cond_c0;
	c = sun::security::x509::AVA::readChar(in, std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid trailing backslash")));
	0x0;
	//    .local v2, "hexByte":Ljava/lang/Byte;
	hexByte = sun::security::x509::AVA::getEmbeddedHexPair(c, in);
	//    .local v2, "hexByte":Ljava/lang/Byte;
	if ( !(hexByte) )  
		goto label_cond_3a;
	//    .restart local v5    # "isPrintableString":Z
	embeddedHex->add(hexByte);
	c = in->read();
	0x0;
	//    .end local v2    # "hexByte":Ljava/lang/Byte;
	//    .end local v5    # "isPrintableString":Z
label_goto_26:
	if ( !(sun::security::x509::AVA::isTerminator(c, format)) )  
		goto label_cond_9;
	if ( format != 0x3 )
		goto label_cond_134;
	if ( spaceCount <= 0 )
		goto label_cond_134;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incorrect AVA RFC2253 format - trailing space must be escaped")));
	// throw
	throw cVar2;
	// 1373    .line 429
	// 1374    .restart local v2    # "hexByte":Ljava/lang/Byte;
label_cond_3a:
	if ( format != 0x1 )
		goto label_cond_6a;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",=\n+<>#;\\\"))->indexOf((char)(c)) != -0x1 )
		goto label_cond_6a;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::io::IOException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid escaped character in AVA: \'")))->append((char)(c))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString());
	// throw
	throw cVar3;
	// 1432    .line 434
label_cond_6a:
	if ( format != 0x3 )
		goto label_cond_f0;
	if ( c != 0x20 )
		goto label_cond_84;
	if ( leadingChar )     
		goto label_cond_f0;
	if ( !(( sun::security::x509::AVA::trailingSpace(in) ^ 0x1)) )  
		goto label_cond_f0;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid escaped space character in AVA.  Only a leading or trailing space character can be escaped.")));
	// throw
	throw cVar5;
	// 1465    .line 443
label_cond_84:
	if ( c != 0x23 )
		goto label_cond_93;
	if ( leadingChar )     
		goto label_cond_f0;
	cVar6 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid escaped \'#\' character in AVA.  Only a leading \'#\' can be escaped.")));
	// throw
	throw cVar6;
	// 1485    .line 450
label_cond_93:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",=+<>#;\\\"))->indexOf((char)(c)) != -0x1 )
		goto label_cond_f0;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::io::IOException>(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid escaped character in AVA: \'")))->append((char)(c))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString());
	// throw
	throw cVar7;
	// 1538    .line 458
	// 1539    .end local v2    # "hexByte":Ljava/lang/Byte;
label_cond_c0:
	if ( format != 0x3 )
		goto label_cond_f0;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",=+<>#;\\\"))->indexOf((char)(c)) == -0x1 )
		goto label_cond_f0;
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	cVar9 = std::make_shared<java::io::IOException>(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Character \'")))->append((char)(c))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' in AVA appears without escape")))->toString());
	// throw
	throw cVar9;
	// 1595    .line 476
label_cond_f0:
	if ( embeddedHex->size() <= 0 )
		goto label_cond_10d;
	i = 0x0;
	//    .local v4, "i":I
label_goto_f7:
	if ( i >= spaceCount )
		goto label_cond_102;
	temp->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	i = ( i + 0x1);
	goto label_goto_f7;
	// 1620    .line 481
label_cond_102:
	spaceCount = 0x0;
	//    .local v3, "hexString":Ljava/lang/String;
	temp->append(sun::security::x509::AVA::getEmbeddedHexString(embeddedHex));
	embeddedHex->clear();
	//    .end local v3    # "hexString":Ljava/lang/String;
	//    .end local v4    # "i":I
label_cond_10d:
	//    .local v5, "isPrintableString":Z
	if ( c != 0x20 )
		goto label_cond_122;
	if ( 0x1 )     
		goto label_cond_122;
	spaceCount = ( spaceCount + 0x1);
label_goto_11b:
	c = in->read();
	leadingChar = 0x0;
	goto label_goto_26;
	// 1670    .line 496
label_cond_122:
	i = 0x0;
	//    .restart local v4    # "i":I
label_goto_123:
	if ( i >= spaceCount )
		goto label_cond_12e;
	temp->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	i = ( i + 0x1);
	goto label_goto_123;
	// 1688    .line 499
label_cond_12e:
	spaceCount = 0x0;
	temp->append((char)(c));
	goto label_goto_11b;
	// 1699    .line 512
	// 1700    .end local v4    # "i":I
	// 1701    .end local v5    # "isPrintableString":Z
label_cond_134:
	if ( embeddedHex->size() <= 0 )
		goto label_cond_144;
	//    .restart local v3    # "hexString":Ljava/lang/String;
	temp->append(sun::security::x509::AVA::getEmbeddedHexString(embeddedHex));
	embeddedHex->clear();
	//    .end local v3    # "hexString":Ljava/lang/String;
label_cond_144:
	if ( this->oid->equals(sun::security::pkcs::PKCS9Attribute::EMAIL_ADDRESS_OID) )     
		goto label_cond_15c;
	if ( !(this->oid->equals(sun::security::x509::X500Name::DOMAIN_COMPONENT_OID)) )  
		goto label_cond_168;
	if ( sun::security::x509::AVA::PRESERVE_OLD_DC_ENCODING )     
		goto label_cond_168;
label_cond_15c:
	cVar12 = std::make_shared<sun::security::util::DerValue>(0x16, temp->toString());
	return cVar12;
	// 1764    .line 525
label_cond_168:
	if ( !(0x0) )  
		goto label_cond_174;
	cVar13 = std::make_shared<sun::security::util::DerValue>(temp->toString());
	return cVar13;
	// 1779    .line 528
label_cond_174:
	cVar14 = std::make_shared<sun::security::util::DerValue>(0xc, temp->toString());
	return cVar14;

}
// .method private static readChar(Ljava/io/Reader;Ljava/lang/String;)I
int sun::security::x509::AVA::readChar(std::shared_ptr<java::io::Reader> in,std::shared_ptr<java::lang::String> errMsg)
{
	
	int c;
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p0, "in"    # Ljava/io/Reader;
	//    .param p1, "errMsg"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1799        value = {
	// 1800            Ljava/io/IOException;
	// 1801        }
	// 1802    .end annotation
	c = in->read();
	//    .local v0, "c":I
	if ( c != -0x1 )
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(errMsg);
	// throw
	throw cVar0;
	// 1823    .line 579
label_cond_d:
	return c;

}
// .method private toKeyword(ILjava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::toKeyword(int format,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	//    .param p1, "format"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 1832        value = {
	// 1833            "(I",
	// 1834            "Ljava/util/Map",
	// 1835            "<",
	// 1836            "Ljava/lang/String;",
	// 1837            "Ljava/lang/String;",
	// 1838            ">;)",
	// 1839            "Ljava/lang/String;"
	// 1840        }
	// 1841    .end annotation
	//    .local p2, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	return sun::security::x509::AVAKeyword::getKeyword(this->oid, format, oidMap);

}
// .method private toKeywordValueString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::toKeywordValueString(std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::lang::StringBuilder> retval;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::String> valStr;
	auto data;
	int i;
	int quoteNeeded;
	std::shared_ptr<java::lang::StringBuilder> sbuffer;
	int previousWhite;
	int length;
	int alreadyQuoted;
	char c;
	std::vector<std::any> tryCatchExcetionList;
	auto valueBytes;
	int j;
	int trailChar;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	retval = std::make_shared<java::lang::StringBuilder>(0x28);
	//    .local v13, "retval":Ljava/lang/StringBuilder;
	retval->append(keyword);
	retval->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	try {
	//label_try_start_16:
	valStr = this->value->getAsString();
	//    .local v16, "valStr":Ljava/lang/String;
	if ( valStr )     
		goto label_cond_60;
	data = this->value->toByteArray();
	//    .local v4, "data":[B
	retval->append(0x23);
	i = 0x0;
	//    .local v8, "i":I
label_goto_34:
	if ( i >= data->size() )
		goto label_cond_1ae;
	retval->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789ABCDEF"))->charAt(( _shri(data[i],0x4) & 0xf)));
	retval->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789ABCDEF"))->charAt(( data[i] & 0xf)));
	i = ( i + 0x1);
	goto label_goto_34;
	// 1967    .line 1088
	// 1968    .end local v4    # "data":[B
	// 1969    .end local v8    # "i":I
label_cond_60:
	quoteNeeded = 0x0;
	//    .local v12, "quoteNeeded":Z
	sbuffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v14, "sbuffer":Ljava/lang/StringBuilder;
	previousWhite = 0x0;
	//    .local v11, "previousWhite":Z
	std::make_shared<java::lang::String>(std::make_shared<char[]>(",+=\n<>#;\\\"));
	//    .local v6, "escapees":Ljava/lang/String;
	length = valStr->length();
	//    .local v10, "length":I
	if ( length <= 0x1 )
		goto label_cond_b4;
	if ( valStr->charAt(0x0) != 0x22 )
		goto label_cond_b4;
	if ( valStr->charAt(( length + -0x1)) != 0x22 )
		goto label_cond_b2;
	alreadyQuoted = 0x1;
	//    .local v2, "alreadyQuoted":Z
label_goto_99:
	i = 0x0;
	//    .restart local v8    # "i":I
label_goto_9a:
	if ( i >= length )
		goto label_cond_174;
	c = valStr->charAt(i);
	//    .local v3, "c":C
	if ( !(alreadyQuoted) )  
		goto label_cond_b6;
	if ( !(i) )  
		goto label_cond_ac;
	if ( i != ( length + -0x1) )
		goto label_cond_b6;
label_cond_ac:
	sbuffer->append(c);
label_cond_af:
label_goto_af:
	i = ( i + 0x1);
	goto label_goto_9a;
	// 2079    .line 1101
	// 2080    .end local v2    # "alreadyQuoted":Z
	// 2081    .end local v3    # "c":C
	// 2082    .end local v8    # "i":I
label_cond_b2:
	//    .restart local v2    # "alreadyQuoted":Z
	goto label_goto_99;
	// 2089    .line 1100
	// 2090    .end local v2    # "alreadyQuoted":Z
label_cond_b4:
	//    .restart local v2    # "alreadyQuoted":Z
	goto label_goto_99;
	// 2097    .line 1109
	// 2098    .restart local v3    # "c":C
	// 2099    .restart local v8    # "i":I
label_cond_b6:
	if ( sun::security::util::DerValue::isPrintableStringChar(c) )     
		goto label_cond_c7;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",+=\n<>#;\\\"))->indexOf(c) < 0 ) 
		goto label_cond_119;
label_cond_c7:
	if ( quoteNeeded )     
		goto label_cond_d8;
	if ( i )     
		goto label_cond_106;
	if ( c == 0x20 )
		goto label_cond_d7;
	if ( c != 0xa )
		goto label_cond_106;
label_cond_d7:
label_goto_d7:
	quoteNeeded = 0x1;
label_cond_d8:
	if ( c == 0x20 )
		goto label_cond_112;
	if ( c == 0xa )
		goto label_cond_112;
	if ( c == 0x22 )
		goto label_cond_f0;
	if ( c != 0x5c )
		goto label_cond_f7;
label_cond_f0:
	sbuffer->append(0x5c);
label_cond_f7:
	0x0;
label_goto_f8:
	sbuffer->append(c);
	//label_try_end_fb:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_fc;
	}
	//    .catch Ljava/io/IOException; {:try_start_16 .. :try_end_fb} :catch_fc
	goto label_goto_af;
	// 2189    .line 1179
	// 2190    .end local v2    # "alreadyQuoted":Z
	// 2191    .end local v3    # "c":C
	// 2192    .end local v6    # "escapees":Ljava/lang/String;
	// 2193    .end local v8    # "i":I
	// 2194    .end local v10    # "length":I
	// 2195    .end local v11    # "previousWhite":Z
	// 2196    .end local v12    # "quoteNeeded":Z
	// 2197    .end local v14    # "sbuffer":Ljava/lang/StringBuilder;
	// 2198    .end local v16    # "valStr":Ljava/lang/String;
label_catch_fc:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER Value conversion")));
	// throw
	throw cVar0;
	// 2212    .line 1115
	// 2213    .end local v5    # "e":Ljava/io/IOException;
	// 2214    .restart local v2    # "alreadyQuoted":Z
	// 2215    .restart local v3    # "c":C
	// 2216    .restart local v6    # "escapees":Ljava/lang/String;
	// 2217    .restart local v8    # "i":I
	// 2218    .restart local v10    # "length":I
	// 2219    .restart local v11    # "previousWhite":Z
	// 2220    .restart local v12    # "quoteNeeded":Z
	// 2221    .restart local v14    # "sbuffer":Ljava/lang/StringBuilder;
	// 2222    .restart local v16    # "valStr":Ljava/lang/String;
label_cond_106:
	try {
	//label_try_start_106:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",+=\n<>#;\\\"))->indexOf(c) < 0 ) 
		goto label_cond_d8;
	goto label_goto_d7;
	// 2237    .line 1127
label_cond_112:
	if ( quoteNeeded )     
		goto label_cond_117;
	if ( !(previousWhite) )  
		goto label_cond_117;
	quoteNeeded = 0x1;
label_cond_117:
	previousWhite = 0x1;
	goto label_goto_f8;
	// 2252    .line 1135
label_cond_119:
	if ( !(sun::security::x509::AVA::debug) )  
		goto label_cond_16e;
	if ( !(sun::security::util::Debug::isOn(std::make_shared<java::lang::String>(std::make_shared<char[]>("ava")))) )  
		goto label_cond_16e;
	0x0;
	valueBytes = java::lang::Character::toString(c)->getBytes(std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	//    .local v17, "valueBytes":[B
	j = 0x0;
	//    .local v9, "j":I
label_goto_133:
	if ( j >= valueBytes->size() )
		goto label_cond_af;
	sbuffer->append(0x5c);
	//    .local v7, "hexChar":C
	sbuffer->append(java::lang::Character::toUpperCase(java::lang::Character::forDigit(( _ushri(valueBytes[j],0x4) & 0xf), 0x10)));
	sbuffer->append(java::lang::Character::toUpperCase(java::lang::Character::forDigit(( valueBytes[j] & 0xf), 0x10)));
	j = ( j + 0x1);
	goto label_goto_133;
	// 2353    .line 1158
	// 2354    .end local v7    # "hexChar":C
	// 2355    .end local v9    # "j":I
	// 2356    .end local v17    # "valueBytes":[B
label_cond_16e:
	0x0;
	sbuffer->append(c);
	goto label_goto_af;
	// 2365    .line 1164
	// 2366    .end local v3    # "c":C
label_cond_174:
	if ( sbuffer->length() <= 0 )
		goto label_cond_193;
	trailChar = sbuffer->charAt(( sbuffer->length() + -0x1));
	//    .local v15, "trailChar":C
	if ( trailChar == 0x20 )
		goto label_cond_192;
	if ( trailChar != 0xa )
		goto label_cond_193;
label_cond_192:
	quoteNeeded = 0x1;
	//    .end local v15    # "trailChar":C
label_cond_193:
	if ( alreadyQuoted )     
		goto label_cond_1b3;
	if ( !(quoteNeeded) )  
		goto label_cond_1b3;
	retval->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(sbuffer->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")));
	//label_try_end_1ae:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_fc;
	}
	//    .catch Ljava/io/IOException; {:try_start_106 .. :try_end_1ae} :catch_fc
	//    .end local v2    # "alreadyQuoted":Z
	//    .end local v6    # "escapees":Ljava/lang/String;
	//    .end local v10    # "length":I
	//    .end local v11    # "previousWhite":Z
	//    .end local v12    # "quoteNeeded":Z
	//    .end local v14    # "sbuffer":Ljava/lang/StringBuilder;
label_cond_1ae:
label_goto_1ae:
	return retval->toString();
	// 2450    .line 1176
	// 2451    .restart local v2    # "alreadyQuoted":Z
	// 2452    .restart local v6    # "escapees":Ljava/lang/String;
	// 2453    .restart local v10    # "length":I
	// 2454    .restart local v11    # "previousWhite":Z
	// 2455    .restart local v12    # "quoteNeeded":Z
	// 2456    .restart local v14    # "sbuffer":Ljava/lang/StringBuilder;
label_cond_1b3:
	try {
	//label_try_start_1b3:
	retval->append(sbuffer->toString());
	//label_try_end_1bc:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_fc;
	}
	//    .catch Ljava/io/IOException; {:try_start_1b3 .. :try_end_1bc} :catch_fc
	goto label_goto_1ae;

}
// .method private static trailingSpace(Ljava/io/Reader;)Z
bool sun::security::x509::AVA::trailingSpace(std::shared_ptr<java::io::Reader> in)
{
	
	int cVar0;
	int trailing;
	int nextChar;
	bool trailing;
	
	//    .param p0, "in"    # Ljava/io/Reader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2476        value = {
	// 2477            Ljava/io/IOException;
	// 2478        }
	// 2479    .end annotation
	cVar0 = 0x20;
	trailing = 0x0;
	//    .local v2, "trailing":Z
	if ( in->markSupported() )     
		goto label_cond_b;
	return 0x1;
	// 2500    .line 593
label_cond_b:
	in->mark(0x270f);
label_cond_10:
	nextChar = in->read();
	//    .local v1, "nextChar":I
	if ( nextChar != -0x1 )
		goto label_cond_1c;
	trailing = 0x1;
label_goto_18:
	in->reset();
	return trailing;
	// 2528    .line 599
label_cond_1c:
	if ( nextChar == cVar0 )
		goto label_cond_10;
	if ( nextChar != 0x5c )
		goto label_cond_2a;
	//    .local v0, "followingChar":I
	if ( in->read() == cVar0 )
		goto label_cond_10;
	trailing = 0x0;
	goto label_goto_18;
	// 2552    .line 608
	// 2553    .end local v0    # "followingChar":I
label_cond_2a:
	trailing = 0x0;
	goto label_goto_18;

}
// .method public derEncode(Ljava/io/OutputStream;)V
void sun::security::x509::AVA::derEncode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp2;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2567        value = {
	// 2568            Ljava/io/IOException;
	// 2569        }
	// 2570    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	tmp2 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp2":Lsun/security/util/DerOutputStream;
	tmp->putOID(this->oid);
	this->value->encode(tmp);
	tmp2->write(0x30, tmp);
	out->write(tmp2->toByteArray());
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::AVA::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2615        value = {
	// 2616            Ljava/io/IOException;
	// 2617        }
	// 2618    .end annotation
	this->derEncode(out);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::AVA::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::x509::AVA> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 2641    .line 641
label_cond_4:
	if ( obj->instanceOf("sun::security::x509::AVA") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::AVA");
	//    .local v0, "other":Lsun/security/x509/AVA;
	return this->toRFC2253CanonicalString()->equals(other->toRFC2253CanonicalString());

}
// .method public getDerValue()Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::x509::AVA::getDerValue()
{
	
	return this->value;

}
// .method public getObjectIdentifier()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::AVA::getObjectIdentifier()
{
	
	return this->oid;

}
// .method public getValueString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::getValueString()
{
	
	std::shared_ptr<java::lang::Object> e;
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	
	try {
	//label_try_start_0:
	s = this->value->getAsString();
	//    .local v1, "s":Ljava/lang/String;
	if ( s )     
		goto label_cond_2c;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AVA string is null")));
	// throw
	throw cVar0;
	// 2721    :try_end_11
	// 2722    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_11} :catch_11
	// 2724    .line 252
	// 2725    .end local v1    # "s":Ljava/lang/String;
label_catch_11:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::RuntimeException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AVA error: ")))->append(e)->toString(), e);
	// throw
	throw cVar1;
	// 2755    .line 251
	// 2756    .end local v0    # "e":Ljava/io/IOException;
	// 2757    .restart local v1    # "s":Ljava/lang/String;
label_cond_2c:
	return s;

}
// .method hasRFC2253Keyword()Z
bool sun::security::x509::AVA::hasRFC2253Keyword()
{
	
	return sun::security::x509::AVAKeyword::hasKeyword(this->oid, 0x3);

}
// .method public hashCode()I
int sun::security::x509::AVA::hashCode()
{
	
	return this->toRFC2253CanonicalString()->hashCode();

}
// .method public toRFC1779String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::toRFC1779String()
{
	
	return this->toRFC1779String(java::util::Collections::emptyMap({const[class].FS-Param}));

}
// .method public toRFC1779String(Ljava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::toRFC1779String(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2813        value = {
	// 2814            "(",
	// 2815            "Ljava/util/Map",
	// 2816            "<",
	// 2817            "Ljava/lang/String;",
	// 2818            "Ljava/lang/String;",
	// 2819            ">;)",
	// 2820            "Ljava/lang/String;"
	// 2821        }
	// 2822    .end annotation
	//    .local p1, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	return this->toKeywordValueString(this->toKeyword(0x2, oidMap));

}
// .method public toRFC2253CanonicalString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::toRFC2253CanonicalString()
{
	
	std::shared_ptr<java::lang::StringBuilder> typeAndValue;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	auto data;
	int j;
	unsigned char b;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::String> valStr;
	std::shared_ptr<java::lang::StringBuilder> sbuffer;
	int previousWhite;
	int i;
	char c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	auto valueBytes;
	
	typeAndValue = std::make_shared<java::lang::StringBuilder>(0x28);
	//    .local v10, "typeAndValue":Ljava/lang/StringBuilder;
	typeAndValue->append(this->toKeyword(0x3, java::util::Collections::emptyMap({const[class].FS-Param})));
	typeAndValue->append(0x3d);
	if ( typeAndValue->charAt(0x0) <  0x30 )
		goto label_cond_57;
	if ( typeAndValue->charAt(0x0) >  0x39 )
		goto label_cond_57;
label_cond_2a:
	0x0;
	//    .local v3, "data":[B
	try {
	//label_try_start_2b:
	//label_try_end_30:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b2;
	}
	//    .catch Ljava/io/IOException; {:try_start_2b .. :try_end_30} :catch_b2
	data = this->value->toByteArray();
	//    .local v3, "data":[B
	typeAndValue->append(0x23);
	j = 0x0;
	//    .local v7, "j":I
label_goto_37:
	if ( j >= data->size() )
		goto label_cond_139;
	b = data[j];
	//    .local v0, "b":B
	typeAndValue->append(java::lang::Character::forDigit(( _ushri(b,0x4) & 0xf), 0x10));
	typeAndValue->append(java::lang::Character::forDigit(( b & 0xf), 0x10));
	j = ( j + 0x1);
	goto label_goto_37;
	// 2955    .line 908
	// 2956    .end local v0    # "b":B
	// 2957    .end local v3    # "data":[B
	// 2958    .end local v7    # "j":I
label_cond_57:
	if ( sun::security::x509::AVA::isDerString(this->value, 0x1) )     
		goto label_cond_68;
	if ( this->value->tag != 0x14 )
		goto label_cond_2a;
label_cond_68:
	0x0;
	//    .local v11, "valStr":Ljava/lang/String;
	try {
	//label_try_start_69:
	//    .end local v11    # "valStr":Ljava/lang/String;
	valStr = std::make_shared<java::lang::String>(this->value->getDataBytes(), std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	//label_try_end_77:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_bc;
	}
	//    .catch Ljava/io/IOException; {:try_start_69 .. :try_end_77} :catch_bc
	//    .local v11, "valStr":Ljava/lang/String;
	std::make_shared<java::lang::String>(std::make_shared<char[]>(",+<>;\"));
	//    .local v4, "escapees":Ljava/lang/String;
	sbuffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v9, "sbuffer":Ljava/lang/StringBuilder;
	previousWhite = 0x0;
	//    .local v8, "previousWhite":Z
	i = 0x0;
	//    .local v5, "i":I
label_goto_81:
	if ( i >= valStr->length() )
		goto label_cond_12e;
	c = valStr->charAt(i);
	//    .local v1, "c":C
	if ( sun::security::util::DerValue::isPrintableStringChar(c) )     
		goto label_cond_9a;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",+<>;\"))->indexOf(c) < 0 ) 
		goto label_cond_c6;
label_cond_9a:
	if ( i )     
		goto label_cond_10e;
	if ( c != 0x23 )
		goto label_cond_10e;
label_goto_a0:
	sbuffer->append(0x5c);
label_cond_a5:
	if ( java::lang::Character::isWhitespace(c) )     
		goto label_cond_118;
	0x0;
	sbuffer->append(c);
label_cond_af:
label_goto_af:
	i = ( i + 0x1);
	goto label_goto_81;
	// 3083    .line 913
	// 3084    .end local v1    # "c":C
	// 3085    .end local v4    # "escapees":Ljava/lang/String;
	// 3086    .end local v5    # "i":I
	// 3087    .end local v8    # "previousWhite":Z
	// 3088    .end local v9    # "sbuffer":Ljava/lang/StringBuilder;
	// 3089    .end local v11    # "valStr":Ljava/lang/String;
	// 3090    .local v3, "data":[B
label_catch_b2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "ie":Ljava/io/IOException;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER Value conversion")));
	// throw
	throw cVar0;
	// 3104    .line 934
	// 3105    .end local v3    # "data":[B
	// 3106    .end local v6    # "ie":Ljava/io/IOException;
label_catch_bc:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v6    # "ie":Ljava/io/IOException;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER Value conversion")));
	// throw
	throw cVar1;
	// 3120    .line 965
	// 3121    .end local v6    # "ie":Ljava/io/IOException;
	// 3122    .restart local v1    # "c":C
	// 3123    .restart local v4    # "escapees":Ljava/lang/String;
	// 3124    .restart local v5    # "i":I
	// 3125    .restart local v8    # "previousWhite":Z
	// 3126    .restart local v9    # "sbuffer":Ljava/lang/StringBuilder;
	// 3127    .restart local v11    # "valStr":Ljava/lang/String;
label_cond_c6:
	if ( i )     
		goto label_cond_cc;
	if ( c == 0x23 )
		goto label_cond_9a;
label_cond_cc:
	if ( !(sun::security::x509::AVA::debug) )  
		goto label_cond_129;
	if ( !(sun::security::util::Debug::isOn(std::make_shared<java::lang::String>(std::make_shared<char[]>("ava")))) )  
		goto label_cond_129;
	0x0;
	0x0;
	//    .local v12, "valueBytes":[B
	try {
	//label_try_start_db:
	//label_try_end_e5:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11f;
	}
	//    .catch Ljava/io/IOException; {:try_start_db .. :try_end_e5} :catch_11f
	valueBytes = java::lang::Character::toString(c)->getBytes(std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	//    .local v12, "valueBytes":[B
	j = 0x0;
	//    .restart local v7    # "j":I
label_goto_e7:
	if ( j >= valueBytes->size() )
		goto label_cond_af;
	sbuffer->append(0x5c);
	sbuffer->append(java::lang::Character::forDigit(( _ushri(valueBytes[j],0x4) & 0xf), 0x10));
	sbuffer->append(java::lang::Character::forDigit(( valueBytes[j] & 0xf), 0x10));
	j = ( j + 0x1);
	goto label_goto_e7;
	// 3220    .line 968
	// 3221    .end local v7    # "j":I
	// 3222    .end local v12    # "valueBytes":[B
label_cond_10e:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",+<>;\"))->indexOf(c) < 0 ) 
		goto label_cond_a5;
	goto label_goto_a0;
	// 3234    .line 977
label_cond_118:
	if ( previousWhite )     
		goto label_cond_af;
	previousWhite = 0x1;
	sbuffer->append(c);
	goto label_goto_af;
	// 3246    .line 997
	// 3247    .local v12, "valueBytes":[B
label_catch_11f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v6    # "ie":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER Value conversion")));
	// throw
	throw cVar2;
	// 3263    .line 1012
	// 3264    .end local v6    # "ie":Ljava/io/IOException;
	// 3265    .end local v12    # "valueBytes":[B
label_cond_129:
	0x0;
	sbuffer->append(c);
	goto label_goto_af;
	// 3274    .line 1018
	// 3275    .end local v1    # "c":C
label_cond_12e:
	typeAndValue->append(sbuffer->toString()->trim());
	//    .end local v4    # "escapees":Ljava/lang/String;
	//    .end local v5    # "i":I
	//    .end local v8    # "previousWhite":Z
	//    .end local v9    # "sbuffer":Ljava/lang/StringBuilder;
	//    .end local v11    # "valStr":Ljava/lang/String;
label_cond_139:
	//    .local v2, "canon":Ljava/lang/String;
	return java::text::Normalizer::normalize(typeAndValue->toString()->toUpperCase(java::util::Locale::US)->toLowerCase(java::util::Locale::US), java::text::Normalizer_S_Form::NFKD);

}
// .method public toRFC2253String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::toRFC2253String()
{
	
	return this->toRFC2253String(java::util::Collections::emptyMap({const[class].FS-Param}));

}
// .method public toRFC2253String(Ljava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::toRFC2253String(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	std::shared_ptr<java::lang::StringBuilder> typeAndValue;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	auto data;
	int j;
	unsigned char b;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::String> valStr;
	std::shared_ptr<java::lang::StringBuilder> sbuffer;
	int i;
	char c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	auto valueBytes;
	auto chars;
	int lead;
	int trail;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3341        value = {
	// 3342            "(",
	// 3343            "Ljava/util/Map",
	// 3344            "<",
	// 3345            "Ljava/lang/String;",
	// 3346            "Ljava/lang/String;",
	// 3347            ">;)",
	// 3348            "Ljava/lang/String;"
	// 3349        }
	// 3350    .end annotation
	//    .local p1, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	typeAndValue = std::make_shared<java::lang::StringBuilder>(0x64);
	//    .local v15, "typeAndValue":Ljava/lang/StringBuilder;
	typeAndValue->append(this->toKeyword(0x3, oidMap));
	typeAndValue->append(0x3d);
	if ( typeAndValue->charAt(0x0) <  0x30 )
		goto label_cond_7c;
	if ( typeAndValue->charAt(0x0) >  0x39 )
		goto label_cond_7c;
label_cond_41:
	0x0;
	//    .local v6, "data":[B
	try {
	//label_try_start_42:
	//label_try_end_4b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e6;
	}
	//    .catch Ljava/io/IOException; {:try_start_42 .. :try_end_4b} :catch_e6
	data = this->value->toByteArray();
	//    .local v6, "data":[B
	typeAndValue->append(0x23);
	j = 0x0;
	//    .local v11, "j":I
label_goto_54:
	if ( j >= data->size() )
		goto label_cond_1d8;
	b = data[j];
	//    .local v3, "b":B
	typeAndValue->append(java::lang::Character::forDigit(( _ushri(b,0x4) & 0xf), 0x10));
	typeAndValue->append(java::lang::Character::forDigit(( b & 0xf), 0x10));
	j = ( j + 0x1);
	goto label_goto_54;
	// 3498    .line 753
	// 3499    .end local v3    # "b":B
	// 3500    .end local v6    # "data":[B
	// 3501    .end local v11    # "j":I
label_cond_7c:
	if ( ( sun::security::x509::AVA::isDerString(this->value, 0x0) ^ 0x1) )     
		goto label_cond_41;
	0x0;
	//    .local v16, "valStr":Ljava/lang/String;
	try {
	//label_try_start_8e:
	//    .end local v16    # "valStr":Ljava/lang/String;
	var73 = valStr(this->value->getDataBytes(), std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	//label_try_end_a6:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f0;
	}
	//    .catch Ljava/io/IOException; {:try_start_8e .. :try_end_a6} :catch_f0
	//    .local v16, "valStr":Ljava/lang/String;
	std::make_shared<java::lang::String>(std::make_shared<char[]>(",=+<>#;\"));
	//    .local v7, "escapees":Ljava/lang/String;
	sbuffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v13, "sbuffer":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v9, "i":I
label_goto_af:
	if ( i >= valStr->length() )
		goto label_cond_16a;
	c = valStr->charAt(i);
	//    .local v4, "c":C
	if ( sun::security::util::DerValue::isPrintableStringChar(c) )     
		goto label_cond_ce;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",=+<>#;\"))->indexOf(c) < 0 ) 
		goto label_cond_fa;
label_cond_ce:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>(",=+<>#;\"))->indexOf(c) < 0 ) 
		goto label_cond_e0;
	sbuffer->append(0x5c);
label_cond_e0:
	sbuffer->append(c);
label_cond_e3:
label_goto_e3:
	i = ( i + 0x1);
	goto label_goto_af;
	// 3631    .line 758
	// 3632    .end local v4    # "c":C
	// 3633    .end local v7    # "escapees":Ljava/lang/String;
	// 3634    .end local v9    # "i":I
	// 3635    .end local v13    # "sbuffer":Ljava/lang/StringBuilder;
	// 3636    .end local v16    # "valStr":Ljava/lang/String;
	// 3637    .local v6, "data":[B
label_catch_e6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v10, "ie":Ljava/io/IOException;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER Value conversion")));
	// throw
	throw cVar0;
	// 3651    .line 779
	// 3652    .end local v6    # "data":[B
	// 3653    .end local v10    # "ie":Ljava/io/IOException;
label_catch_f0:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v10    # "ie":Ljava/io/IOException;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER Value conversion")));
	// throw
	throw cVar1;
	// 3667    .line 822
	// 3668    .end local v10    # "ie":Ljava/io/IOException;
	// 3669    .restart local v4    # "c":C
	// 3670    .restart local v7    # "escapees":Ljava/lang/String;
	// 3671    .restart local v9    # "i":I
	// 3672    .restart local v13    # "sbuffer":Ljava/lang/StringBuilder;
	// 3673    .restart local v16    # "valStr":Ljava/lang/String;
label_cond_fa:
	if ( c )     
		goto label_cond_105;
	sbuffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\00")));
	goto label_goto_e3;
	// 3686    .line 826
label_cond_105:
	if ( !(sun::security::x509::AVA::debug) )  
		goto label_cond_165;
	if ( !(sun::security::util::Debug::isOn(std::make_shared<java::lang::String>(std::make_shared<char[]>("ava")))) )  
		goto label_cond_165;
	0x0;
	//    .local v17, "valueBytes":[B
	try {
	//label_try_start_114:
	//label_try_end_11e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15b;
	}
	//    .catch Ljava/io/IOException; {:try_start_114 .. :try_end_11e} :catch_15b
	valueBytes = java::lang::Character::toString(c)->getBytes(std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF8")));
	//    .local v17, "valueBytes":[B
	j = 0x0;
	//    .restart local v11    # "j":I
label_goto_120:
	if ( j >= valueBytes->size() )
		goto label_cond_e3;
	sbuffer->append(0x5c);
	//    .local v8, "hexChar":C
	sbuffer->append(java::lang::Character::toUpperCase(java::lang::Character::forDigit(( _ushri(valueBytes[j],0x4) & 0xf), 0x10)));
	sbuffer->append(java::lang::Character::toUpperCase(java::lang::Character::forDigit(( valueBytes[j] & 0xf), 0x10)));
	j = ( j + 0x1);
	goto label_goto_120;
	// 3791    .line 833
	// 3792    .end local v8    # "hexChar":C
	// 3793    .end local v11    # "j":I
	// 3794    .local v17, "valueBytes":[B
label_catch_15b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v10    # "ie":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER Value conversion")));
	// throw
	throw cVar2;
	// 3810    .line 849
	// 3811    .end local v10    # "ie":Ljava/io/IOException;
	// 3812    .end local v17    # "valueBytes":[B
label_cond_165:
	sbuffer->append(c);
	goto label_goto_e3;
	// 3818    .line 853
	// 3819    .end local v4    # "c":C
label_cond_16a:
	chars = sbuffer->toString()->toCharArray();
	//    .local v5, "chars":[C
	//    .end local v13    # "sbuffer":Ljava/lang/StringBuilder;
	sbuffer = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v13    # "sbuffer":Ljava/lang/StringBuilder;
	lead = 0x0;
	//    .local v12, "lead":I
label_goto_178:
	if ( lead >= chars->size() )
		goto label_cond_193;
	if ( chars[lead] == 0x20 )
		goto label_cond_1c9;
	if ( chars[lead] == 0xd )
		goto label_cond_1c9;
label_cond_193:
	trail = ( chars->size() + -0x1);
	//    .local v14, "trail":I
label_goto_198:
	if ( trail < 0 ) 
		goto label_cond_1ae;
	if ( chars[trail] == 0x20 )
		goto label_cond_1cc;
	if ( chars[trail] == 0xd )
		goto label_cond_1cc;
label_cond_1ae:
	i = 0x0;
label_goto_1af:
	if ( i >= chars->size() )
		goto label_cond_1cf;
	//    .restart local v4    # "c":C
	if ( i <  lead )
		goto label_cond_1bc;
	if ( i <= trail )
		goto label_cond_1c3;
label_cond_1bc:
	sbuffer->append(0x5c);
label_cond_1c3:
	sbuffer->append(chars[i]);
	i = ( i + 0x1);
	goto label_goto_1af;
	// 3943    .line 858
	// 3944    .end local v4    # "c":C
	// 3945    .end local v14    # "trail":I
label_cond_1c9:
	lead = ( lead + 0x1);
	goto label_goto_178;
	// 3951    .line 864
	// 3952    .restart local v14    # "trail":I
label_cond_1cc:
	trail = ( trail + -0x1);
	goto label_goto_198;
	// 3958    .line 878
label_cond_1cf:
	typeAndValue->append(sbuffer->toString());
	//    .end local v5    # "chars":[C
	//    .end local v7    # "escapees":Ljava/lang/String;
	//    .end local v9    # "i":I
	//    .end local v12    # "lead":I
	//    .end local v13    # "sbuffer":Ljava/lang/StringBuilder;
	//    .end local v14    # "trail":I
	//    .end local v16    # "valStr":Ljava/lang/String;
label_cond_1d8:
	return typeAndValue->toString();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVA::toString()
{
	
	return this->toKeywordValueString(this->toKeyword(0x1, java::util::Collections::emptyMap({const[class].FS-Param})));

}


