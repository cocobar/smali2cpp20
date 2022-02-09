// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\RDN.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.StringReader.h"
#include "java.lang.CharSequence.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.StringJoiner.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AVA.h"
#include "sun.security.x509.AVAComparator.h"
#include "sun.security.x509.RDN.h"
#include "sun.security.x509.X500Name.h"

// .method constructor <init>(I)V
sun::security::x509::RDN::RDN(int i)
{
	
	//    .param p1, "i"    # I
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->assertion = std::make_shared<std::vector<std::vector<sun::security::x509::AVA>>>(i);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::x509::RDN::RDN(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 043        value = {
	// 044            Ljava/io/IOException;
	// 045        }
	// 046    .end annotation
	sun::security::x509::RDN::(name, java::util::Collections::emptyMap({const[class].FS-Param}));
	return;

}
// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::security::x509::RDN::RDN(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> format)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "format"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 065        value = {
	// 066            Ljava/io/IOException;
	// 067        }
	// 068    .end annotation
	sun::security::x509::RDN::(name, format, java::util::Collections::emptyMap({const[class].FS-Param}));
	return;

}
// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
sun::security::x509::RDN::RDN(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> format,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int avaOffset;
	std::shared_ptr<java::util::ArrayList> avaVec;
	int nextPlus;
	std::shared_ptr<java::lang::String> avaString;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<sun::security::x509::AVA> ava;
	std::shared_ptr<java::io::StringReader> cVar6;
	std::shared_ptr<java::io::IOException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::io::StringReader> cVar9;
	std::shared_ptr<std::vector<sun::security::x509::AVA>> cVar10;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "format"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 087        value = {
	// 088            "(",
	// 089            "Ljava/lang/String;",
	// 090            "Ljava/lang/String;",
	// 091            "Ljava/util/Map",
	// 092            "<",
	// 093            "Ljava/lang/String;",
	// 094            "Ljava/lang/String;",
	// 095            ">;)V"
	// 096        }
	// 097    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 100        value = {
	// 101            Ljava/io/IOException;
	// 102        }
	// 103    .end annotation
	//    .local p3, "keywordMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	cVar0 = 0x2b;
	cVar1 = 0x3;
	// 112    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( format->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC2253"))) )     
		goto label_cond_29;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::io::IOException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported format ")))->append(format)->toString());
	// throw
	throw cVar2;
	// 148    .line 186
label_cond_29:
	0x0;
	//    .local v5, "searchOffset":I
	avaOffset = 0x0;
	//    .local v1, "avaOffset":I
	avaVec = std::make_shared<java::util::ArrayList>(cVar1);
	//    .local v3, "avaVec":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AVA;>;"
	nextPlus = name->indexOf(cVar0);
	//    .local v4, "nextPlus":I
label_goto_34:
	if ( nextPlus < 0 ) 
		goto label_cond_83;
	if ( nextPlus <= 0 )
		goto label_cond_7c;
	if ( name->charAt(( nextPlus + -0x1)) == 0x5c )
		goto label_cond_7c;
	avaString = name->substring(avaOffset, nextPlus);
	//    .local v2, "avaString":Ljava/lang/String;
	if ( avaString->length() )     
		goto label_cond_6d;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::io::IOException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("empty AVA in RDN \")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar4;
	// 230    .line 208
label_cond_6d:
	cVar6 = std::make_shared<java::io::StringReader>(avaString);
	ava = std::make_shared<sun::security::x509::AVA>(cVar6, cVar1, keywordMap);
	//    .local v0, "ava":Lsun/security/x509/AVA;
	avaVec->add(ava);
	avaOffset = ( nextPlus + 0x1);
	//    .end local v0    # "ava":Lsun/security/x509/AVA;
	//    .end local v2    # "avaString":Ljava/lang/String;
label_cond_7c:
	nextPlus = name->indexOf(cVar0, ( nextPlus + 0x1));
	goto label_goto_34;
	// 262    .line 220
label_cond_83:
	avaString = name->substring(avaOffset);
	//    .restart local v2    # "avaString":Ljava/lang/String;
	if ( avaString->length() )     
		goto label_cond_ae;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::io::IOException>(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("empty AVA in RDN \")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar7;
	// 307    .line 224
label_cond_ae:
	cVar9 = std::make_shared<java::io::StringReader>(avaString);
	ava = std::make_shared<sun::security::x509::AVA>(cVar9, cVar1, keywordMap);
	//    .restart local v0    # "ava":Lsun/security/x509/AVA;
	avaVec->add(ava);
	cVar10 = avaVec->toArray(std::make_shared<std::vector<std::vector<sun::security::x509::AVA>>>(avaVec->size()));
	cVar10->checkCast("std::vector<sun::security::x509::AVA>");
	this->assertion = cVar10;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/util/Map;)V
sun::security::x509::RDN::RDN(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap)
{
	
	int cVar0;
	int quoteCount;
	int avaOffset;
	std::shared_ptr<java::util::ArrayList> avaVec;
	int nextPlus;
	std::shared_ptr<java::lang::String> avaString;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::x509::AVA> ava;
	std::shared_ptr<java::io::StringReader> cVar3;
	int searchOffset;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::io::StringReader> cVar6;
	std::shared_ptr<std::vector<sun::security::x509::AVA>> cVar7;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 344        value = {
	// 345            "(",
	// 346            "Ljava/lang/String;",
	// 347            "Ljava/util/Map",
	// 348            "<",
	// 349            "Ljava/lang/String;",
	// 350            "Ljava/lang/String;",
	// 351            ">;)V"
	// 352        }
	// 353    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 356        value = {
	// 357            Ljava/io/IOException;
	// 358        }
	// 359    .end annotation
	//    .local p2, "keywordMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	cVar0 = 0x2b;
	// 366    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	quoteCount = 0x0;
	//    .local v5, "quoteCount":I
	//    .local v6, "searchOffset":I
	avaOffset = 0x0;
	//    .local v1, "avaOffset":I
	avaVec = std::make_shared<java::util::ArrayList>(0x3);
	//    .local v3, "avaVec":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AVA;>;"
	nextPlus = name->indexOf(cVar0);
	//    .local v4, "nextPlus":I
label_goto_12:
	if ( nextPlus < 0 ) 
		goto label_cond_6a;
	quoteCount = (quoteCount +  sun::security::x509::X500Name::countQuotes(name, searchOffset, nextPlus));
	if ( nextPlus <= 0 )
		goto label_cond_63;
	if ( name->charAt(( nextPlus + -0x1)) == 0x5c )
		goto label_cond_63;
	if ( quoteCount == 0x1 )
		goto label_cond_63;
	avaString = name->substring(avaOffset, nextPlus);
	//    .local v2, "avaString":Ljava/lang/String;
	if ( avaString->length() )     
		goto label_cond_53;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("empty AVA in RDN \")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar1;
	// 467    .line 130
label_cond_53:
	cVar3 = std::make_shared<java::io::StringReader>(avaString);
	ava = std::make_shared<sun::security::x509::AVA>(cVar3, keywordMap);
	//    .local v0, "ava":Lsun/security/x509/AVA;
	avaVec->add(ava);
	avaOffset = ( nextPlus + 0x1);
	quoteCount = 0x0;
	//    .end local v0    # "ava":Lsun/security/x509/AVA;
	//    .end local v2    # "avaString":Ljava/lang/String;
label_cond_63:
	searchOffset = ( nextPlus + 0x1);
	nextPlus = name->indexOf(cVar0, searchOffset);
	goto label_goto_12;
	// 500    .line 144
label_cond_6a:
	avaString = name->substring(avaOffset);
	//    .restart local v2    # "avaString":Ljava/lang/String;
	if ( avaString->length() )     
		goto label_cond_95;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::io::IOException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("empty AVA in RDN \")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar4;
	// 545    .line 148
label_cond_95:
	cVar6 = std::make_shared<java::io::StringReader>(avaString);
	ava = std::make_shared<sun::security::x509::AVA>(cVar6, keywordMap);
	//    .restart local v0    # "ava":Lsun/security/x509/AVA;
	avaVec->add(ava);
	cVar7 = avaVec->toArray(std::make_shared<std::vector<std::vector<sun::security::x509::AVA>>>(avaVec->size()));
	cVar7->checkCast("std::vector<sun::security::x509::AVA>");
	this->assertion = cVar7;
	return;

}
// .method constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::RDN::RDN(std::shared_ptr<sun::security::util::DerValue> rdn)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::security::util::DerInputStream> dis;
	auto avaset;
	int i;
	std::shared_ptr<sun::security::x509::AVA> cVar1;
	
	//    .param p1, "rdn"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 582        value = {
	// 583            Ljava/io/IOException;
	// 584        }
	// 585    .end annotation
	// 589    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( rdn->tag == 0x31 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("X500 RDN")));
	// throw
	throw cVar0;
	// 607    .line 241
label_cond_12:
	dis = std::make_shared<sun::security::util::DerInputStream>(rdn->toByteArray());
	//    .local v1, "dis":Lsun/security/util/DerInputStream;
	avaset = dis->getSet(0x5);
	//    .local v0, "avaset":[Lsun/security/util/DerValue;
	this->assertion = std::make_shared<std::vector<std::vector<sun::security::x509::AVA>>>(avaset->size());
	i = 0x0;
	//    .local v2, "i":I
label_goto_26:
	if ( i >= avaset->size() )
		goto label_cond_37;
	cVar1 = std::make_shared<sun::security::x509::AVA>(avaset[i]);
	this->assertion[i] = cVar1;
	i = ( i + 0x1);
	goto label_goto_26;
	// 658    .line 248
label_cond_37:
	return;

}
// .method public constructor <init>(Lsun/security/x509/AVA;)V
sun::security::x509::RDN::RDN(std::shared_ptr<sun::security::x509::AVA> ava)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared<std::vector<std::vector<sun::security::x509::AVA>>> cVar1;
	
	//    .param p1, "ava"    # Lsun/security/x509/AVA;
	// 669    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( ava )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 681    .line 262
label_cond_b:
	cVar1 = std::make_shared<std::vector<std::vector<sun::security::x509::AVA>>>(0x1);
	cVar1[0x0] = ava;
	this->assertion = cVar1;
	return;

}
// .method public constructor <init>([Lsun/security/x509/AVA;)V
sun::security::x509::RDN::RDN(std::shared_ptr<std::vector<sun::security::x509::AVA>> avas)
{
	
	std::shared_ptr<std::vector<sun::security::x509::AVA>> cVar0;
	int i;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .param p1, "avas"    # [Lsun/security/x509/AVA;
	// 703    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = avas->clone();
	cVar0->checkCast("std::vector<sun::security::x509::AVA>");
	this->assertion = cVar0;
	i = 0x0;
	//    .local v0, "i":I
label_goto_c:
	if ( i >= this->assertion->size() )
		goto label_cond_20;
	if ( this->assertion[i] )     
		goto label_cond_1d;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 739    .line 267
label_cond_1d:
	i = ( i + 0x1);
	goto label_goto_c;
	// 745    .line 272
label_cond_20:
	return;

}
// .method private toRFC2253StringInternal(ZLjava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::RDN::toRFC2253StringInternal(bool canonical,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<std::vector<sun::security::x509::AVA>> toOutput;
	std::shared_ptr<java::util::StringJoiner> sj;
	int cVar3;
	std::shared_ptr<sun::security::x509::AVA> ava;
	std::shared_ptr<java::lang::CharSequence> cVar4;
	
	//    .param p1, "canonical"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 754        value = {
	// 755            "(Z",
	// 756            "Ljava/util/Map",
	// 757            "<",
	// 758            "Ljava/lang/String;",
	// 759            "Ljava/lang/String;",
	// 760            ">;)",
	// 761            "Ljava/lang/String;"
	// 762        }
	// 763    .end annotation
	//    .local p2, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	cVar0 = 0x0;
	if ( this->assertion->size() != 0x1 )
		goto label_cond_1b;
	if ( !(canonical) )  
		goto label_cond_12;
	cVar1 = this->assertion[cVar0]->toRFC2253CanonicalString();
label_goto_11:
	return cVar1;
	// 792    .line 445
label_cond_12:
	cVar1 = this->assertion[cVar0]->toRFC2253String(oidMap);
	goto label_goto_11;
	// 804    .line 448
label_cond_1b:
	//    .local v2, "toOutput":[Lsun/security/x509/AVA;
	if ( !(canonical) )  
		goto label_cond_2e;
	toOutput = this->assertion->clone();
	//    .end local v2    # "toOutput":[Lsun/security/x509/AVA;
	toOutput->checkCast("std::vector<sun::security::x509::AVA>");
	//    .restart local v2    # "toOutput":[Lsun/security/x509/AVA;
	java::util::Arrays::sort(toOutput, sun::security::x509::AVAComparator::getInstance(toOutput, sun::security::x509::AVAComparator::getInstance({const[class].FS-Param})));
label_cond_2e:
	sj = std::make_shared<java::util::StringJoiner>(std::make_shared<java::lang::String>(std::make_shared<char[]>("+")));
	//    .local v1, "sj":Ljava/util/StringJoiner;
	cVar3 = cVar0;
label_goto_38:
	if ( cVar3 >= this->assertion->size() )
		goto label_cond_4e;
	ava = toOutput[cVar3];
	//    .local v0, "ava":Lsun/security/x509/AVA;
	if ( !(canonical) )  
		goto label_cond_49;
	cVar4 = ava->toRFC2253CanonicalString();
label_goto_42:
	sj->add(cVar4);
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_38;
	// 867    .line 458
label_cond_49:
	cVar4 = ava->toRFC2253String(oidMap);
	goto label_goto_42;
	// 875    .line 460
	// 876    .end local v0    # "ava":Lsun/security/x509/AVA;
label_cond_4e:
	return sj->toString();

}
// .method public avas()Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::AVA>> sun::security::x509::RDN::avas()
{
	
	std::shared_ptr<java::util::List> list;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 890        value = {
	// 891            "()",
	// 892            "Ljava/util/List",
	// 893            "<",
	// 894            "Lsun/security/x509/AVA;",
	// 895            ">;"
	// 896        }
	// 897    .end annotation
	list = this->avaList;
	//    .local v0, "list":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AVA;>;"
	if ( list )     
		goto label_cond_10;
	list = java::util::Collections::unmodifiableList(java::util::Arrays::asList(this->assertion));
	this->avaList = list;
label_cond_10:
	return list;

}
// .method encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::RDN::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 930        value = {
	// 931            Ljava/io/IOException;
	// 932        }
	// 933    .end annotation
	out->putOrderedSetOf(0x31, this->assertion);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::RDN::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::x509::RDN> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x0;
	cVar1 = 0x1;
	if ( this != obj )
		goto label_cond_5;
	return cVar1;
	// 962    .line 297
label_cond_5:
	if ( obj->instanceOf("sun::security::x509::RDN") )     
		goto label_cond_a;
	return cVar0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::RDN");
	//    .local v0, "other":Lsun/security/x509/RDN;
	if ( this->assertion->size() == other->assertion->size() )
		goto label_cond_16;
	return cVar0;
	// 992    .line 304
label_cond_16:
	//    .local v2, "thisCanon":Ljava/lang/String;
	//    .local v1, "otherCanon":Ljava/lang/String;
	return this->toRFC2253String(cVar1)->equals(other->toRFC2253String(cVar1));

}
// .method findAttribute(Lsun/security/util/ObjectIdentifier;)Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::x509::RDN::findAttribute(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	int i;
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= this->assertion->size() )
		goto label_cond_1c;
	if ( !(this->assertion[i]->oid->equals(oid)) )  
		goto label_cond_19;
	return this->assertion[i]->value;
	// 1051    .line 326
label_cond_19:
	i = ( i + 0x1);
	goto label_goto_1;
	// 1057    .line 331
label_cond_1c:
	return 0x0;

}
// .method public hashCode()I
int sun::security::x509::RDN::hashCode()
{
	
	return this->toRFC2253String(0x1)->hashCode();

}
// .method public size()I
int sun::security::x509::RDN::size()
{
	
	return this->assertion->size();

}
// .method public toRFC1779String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::RDN::toRFC1779String()
{
	
	return this->toRFC1779String(java::util::Collections::emptyMap({const[class].FS-Param}));

}
// .method public toRFC1779String(Ljava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::RDN::toRFC1779String(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1113        value = {
	// 1114            "(",
	// 1115            "Ljava/util/Map",
	// 1116            "<",
	// 1117            "Ljava/lang/String;",
	// 1118            "Ljava/lang/String;",
	// 1119            ">;)",
	// 1120            "Ljava/lang/String;"
	// 1121        }
	// 1122    .end annotation
	//    .local p1, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( this->assertion->size() != 0x1 )
		goto label_cond_10;
	return this->assertion[0x0]->toRFC1779String(oidMap);
	// 1148    .line 382
label_cond_10:
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_16:
	if ( i >= this->assertion->size() )
		goto label_cond_31;
	if ( !(i) )  
		goto label_cond_23;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" + ")));
label_cond_23:
	sb->append(this->assertion[i]->toRFC1779String(oidMap));
	i = ( i + 0x1);
	goto label_goto_16;
	// 1191    .line 389
label_cond_31:
	return sb->toString();

}
// .method public toRFC2253String()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::RDN::toRFC2253String()
{
	
	return this->toRFC2253StringInternal(0x0, java::util::Collections::emptyMap({const[class].FS-Param}));

}
// .method public toRFC2253String(Ljava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::RDN::toRFC2253String(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1222        value = {
	// 1223            "(",
	// 1224            "Ljava/util/Map",
	// 1225            "<",
	// 1226            "Ljava/lang/String;",
	// 1227            "Ljava/lang/String;",
	// 1228            ">;)",
	// 1229            "Ljava/lang/String;"
	// 1230        }
	// 1231    .end annotation
	//    .local p1, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	return this->toRFC2253StringInternal(0x0, oidMap);

}
// .method public toRFC2253String(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::RDN::toRFC2253String(bool canonical)
{
	
	std::shared_ptr<java::lang::String> c;
	
	//    .param p1, "canonical"    # Z
	if ( canonical )     
		goto label_cond_c;
	return this->toRFC2253StringInternal(0x0, java::util::Collections::emptyMap({const[class].FS-Param}));
	// 1267    .line 421
label_cond_c:
	c = this->canonicalString;
	//    .local v0, "c":Ljava/lang/String;
	if ( c )     
		goto label_cond_1b;
	c = this->toRFC2253StringInternal(0x1, java::util::Collections::emptyMap({const[class].FS-Param}));
	this->canonicalString = c;
label_cond_1b:
	return c;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::RDN::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	
	if ( this->assertion->size() != 0x1 )
		goto label_cond_10;
	return this->assertion[0x0]->toString();
	// 1321    .line 354
label_cond_10:
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_16:
	if ( i >= this->assertion->size() )
		goto label_cond_31;
	if ( !(i) )  
		goto label_cond_23;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" + ")));
label_cond_23:
	sb->append(this->assertion[i]->toString());
	i = ( i + 0x1);
	goto label_goto_16;
	// 1364    .line 361
label_cond_31:
	return sb->toString();

}


