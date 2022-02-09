// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\AVAKeyword.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "sun.security.pkcs.PKCS9Attribute.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AVAKeyword.h"
#include "sun.security.x509.X500Name.h"

static sun::security::x509::AVAKeyword::keywordMap;
static sun::security::x509::AVAKeyword::oidMap;
// .method static constructor <clinit>()V
void sun::security::x509::AVAKeyword::static_cinit()
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<java::util::HashMap>();
	sun::security::x509::AVAKeyword::oidMap = cVar2;
	cVar3 = std::make_shared<java::util::HashMap>();
	sun::security::x509::AVAKeyword::keywordMap = cVar3;
	var6 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("CN")), sun::security::x509::X500Name::commonName_oid, cVar0, cVar0);
	var10 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("C")), sun::security::x509::X500Name::countryName_oid, cVar0, cVar0);
	var14 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("L")), sun::security::x509::X500Name::localityName_oid, cVar0, cVar0);
	var18 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("S")), sun::security::x509::X500Name::stateName_oid, cVar1, cVar1);
	var22 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("ST")), sun::security::x509::X500Name::stateName_oid, cVar0, cVar0);
	var26 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("O")), sun::security::x509::X500Name::orgName_oid, cVar0, cVar0);
	var30 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("OU")), sun::security::x509::X500Name::orgUnitName_oid, cVar0, cVar0);
	var34 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("T")), sun::security::x509::X500Name::title_oid, cVar1, cVar1);
	var38 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("IP")), sun::security::x509::X500Name::ipAddress_oid, cVar1, cVar1);
	var42 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("STREET")), sun::security::x509::X500Name::streetAddress_oid, cVar0, cVar0);
	var46 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("DC")), sun::security::x509::X500Name::DOMAIN_COMPONENT_OID, cVar1, cVar0);
	var50 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("DNQUALIFIER")), sun::security::x509::X500Name::DNQUALIFIER_OID, cVar1, cVar1);
	var54 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("DNQ")), sun::security::x509::X500Name::DNQUALIFIER_OID, cVar1, cVar1);
	var58 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("SURNAME")), sun::security::x509::X500Name::SURNAME_OID, cVar1, cVar1);
	var62 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("GIVENNAME")), sun::security::x509::X500Name::GIVENNAME_OID, cVar1, cVar1);
	var66 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("INITIALS")), sun::security::x509::X500Name::INITIALS_OID, cVar1, cVar1);
	var70 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("GENERATION")), sun::security::x509::X500Name::GENERATIONQUALIFIER_OID, cVar1, cVar1);
	var74 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("EMAIL")), sun::security::pkcs::PKCS9Attribute::EMAIL_ADDRESS_OID, cVar1, cVar1);
	var78 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("EMAILADDRESS")), sun::security::pkcs::PKCS9Attribute::EMAIL_ADDRESS_OID, cVar1, cVar1);
	var82 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("UID")), sun::security::x509::X500Name::userid_oid, cVar1, cVar0);
	var86 = new sun::security::x509::AVAKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("SERIALNUMBER")), sun::security::x509::X500Name::SERIALNUMBER_OID, cVar1, cVar1);
	return;

}
// .method private constructor <init>(Ljava/lang/String;Lsun/security/util/ObjectIdentifier;ZZ)V
sun::security::x509::AVAKeyword::AVAKeyword(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<sun::security::util::ObjectIdentifier> oid,bool rfc1779Compliant,bool rfc2253Compliant)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p3, "rfc1779Compliant"    # Z
	//    .param p4, "rfc2253Compliant"    # Z
	// 267    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->keyword = keyword;
	this->oid = oid;
	this->rfc1779Compliant = rfc1779Compliant;
	this->rfc2253Compliant = rfc2253Compliant;
	sun::security::x509::AVAKeyword::oidMap->put(oid, this);
	sun::security::x509::AVAKeyword::keywordMap->put(keyword, this);
	return;

}
// .method static getKeyword(Lsun/security/util/ObjectIdentifier;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVAKeyword::getKeyword(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,int standard)
{
	
	//    .param p0, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p1, "standard"    # I
	return sun::security::x509::AVAKeyword::getKeyword(oid, standard, java::util::Collections::emptyMap(oid, standard, java::util::Collections::emptyMap(oid, standard, java::util::Collections::emptyMap({const[class].FS-Param}))));

}
// .method static getKeyword(Lsun/security/util/ObjectIdentifier;ILjava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AVAKeyword::getKeyword(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,int standard,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> extraOidMap)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<java::lang::Object> oidString;
	std::shared_ptr<java::lang::String> keywordString;
	std::shared_ptr<sun::security::x509::AVAKeyword> ak;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	int c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	
	//    .param p0, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p1, "standard"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 319        value = {
	// 320            "(",
	// 321            "Lsun/security/util/ObjectIdentifier;",
	// 322            "I",
	// 323            "Ljava/util/Map",
	// 324            "<",
	// 325            "Ljava/lang/String;",
	// 326            "Ljava/lang/String;",
	// 327            ">;)",
	// 328            "Ljava/lang/String;"
	// 329        }
	// 330    .end annotation
	//    .local p2, "extraOidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	cVar0 = 0x7a;
	cVar1 = 0x61;
	cVar2 = 0x5a;
	cVar3 = 0x41;
	oidString = oid->toString();
	//    .local v4, "oidString":Ljava/lang/String;
	keywordString = extraOidMap->get(oidString);
	keywordString->checkCast("java::lang::String");
	//    .local v3, "keywordString":Ljava/lang/String;
	if ( keywordString )     
		goto label_cond_28;
	ak = sun::security::x509::AVAKeyword::oidMap->get(oid);
	ak->checkCast("sun::security::x509::AVAKeyword");
	//    .local v0, "ak":Lsun/security/x509/AVAKeyword;
	if ( !(ak) )  
		goto label_cond_7c;
	if ( !(ak->isCompliant(standard)) )  
		goto label_cond_7c;
	return ak->keyword;
	// 385    .line 1311
	// 386    .end local v0    # "ak":Lsun/security/x509/AVAKeyword;
label_cond_28:
	if ( keywordString->length() )     
		goto label_cond_37;
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("keyword cannot be empty")));
	// throw
	throw cVar4;
	// 403    .line 1314
label_cond_37:
	keywordString = keywordString->trim();
	c = keywordString->charAt(0x0);
	//    .local v1, "c":C
	if ( c <  cVar3 )
		goto label_cond_43;
	if ( c <= cVar0 )
		goto label_cond_4c;
label_cond_43:
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("keyword does not start with letter")));
	// throw
	throw cVar5;
	// 432    .line 1316
label_cond_4c:
	if ( c <= cVar2 )
		goto label_cond_50;
	if ( c <  cVar1 )
		goto label_cond_43;
label_cond_50:
	i = 0x1;
	//    .local v2, "i":I
label_goto_51:
	if ( i >= keywordString->length() )
		goto label_cond_7b;
	c = keywordString->charAt(i);
	if ( c <  cVar3 )
		goto label_cond_5f;
	if ( c <= cVar0 )
		goto label_cond_74;
label_cond_5f:
	if ( c <  0x30 )
		goto label_cond_67;
	if ( c <= 0x39 )
		goto label_cond_78;
label_cond_67:
	if ( c == 0x5f )
		goto label_cond_78;
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("keyword character is not a letter, digit, or underscore")));
	// throw
	throw cVar6;
	// 486    .line 1322
label_cond_74:
	if ( c <= cVar2 )
		goto label_cond_78;
	if ( c <  cVar1 )
		goto label_cond_5f;
label_cond_78:
	i = ( i + 0x1);
	goto label_goto_51;
	// 498    .line 1328
label_cond_7b:
	return keywordString;
	// 502    .line 1331
	// 503    .end local v1    # "c":C
	// 504    .end local v2    # "i":I
	// 505    .restart local v0    # "ak":Lsun/security/x509/AVAKeyword;
label_cond_7c:
	if ( standard != 0x3 )
		goto label_cond_80;
	return oidString;
	// 514    .line 1334
label_cond_80:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	return cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OID.")))->append(oidString)->toString();

}
// .method static getOID(Ljava/lang/String;ILjava/util/Map;)Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::AVAKeyword::getOID(std::shared_ptr<java::lang::String> keyword,int standard,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> extraKeywordMap)
{
	
	std::shared_ptr<java::lang::String> cVar5;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> oidString;
	std::shared_ptr<sun::security::x509::AVAKeyword> ak;
	int ch;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar8;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar4;
	std::shared_ptr<java::lang::Object> cVar5;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "standard"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 542        value = {
	// 543            "(",
	// 544            "Ljava/lang/String;",
	// 545            "I",
	// 546            "Ljava/util/Map",
	// 547            "<",
	// 548            "Ljava/lang/String;",
	// 549            "Ljava/lang/String;",
	// 550            ">;)",
	// 551            "Lsun/security/util/ObjectIdentifier;"
	// 552        }
	// 553    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 556        value = {
	// 557            Ljava/io/IOException;
	// 558        }
	// 559    .end annotation
	//    .local p2, "extraKeywordMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	cVar5 = keyword->toUpperCase(java::util::Locale::ENGLISH);
	if ( standard != 0x3 )
		goto label_cond_3d;
	if ( cVar5->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(" "))) )     
		goto label_cond_1c;
	if ( !(cVar5->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))) )  
		goto label_cond_41;
label_cond_1c:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid leading or trailing space in keyword \")))->append(cVar5)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar1;
	// 628    .line 1250
label_cond_3d:
	cVar5 = cVar5->trim();
label_cond_41:
	oidString = extraKeywordMap->get(cVar5);
	oidString->checkCast("java::lang::String");
	//    .local v3, "oidString":Ljava/lang/String;
	if ( oidString )     
		goto label_cond_5c;
	ak = sun::security::x509::AVAKeyword::keywordMap->get(cVar5);
	ak->checkCast("sun::security::x509::AVAKeyword");
	//    .local v0, "ak":Lsun/security/x509/AVAKeyword;
	if ( !(ak) )  
		goto label_cond_62;
	if ( !(ak->isCompliant(standard)) )  
		goto label_cond_62;
	return ak->oid;
	// 670    .line 1262
	// 671    .end local v0    # "ak":Lsun/security/x509/AVAKeyword;
label_cond_5c:
	cVar4 = std::make_shared<sun::security::util::ObjectIdentifier>(oidString);
	return cVar4;
	// 679    .line 1266
	// 680    .restart local v0    # "ak":Lsun/security/x509/AVAKeyword;
label_cond_62:
	if ( standard != 0x1 )
		goto label_cond_73;
	if ( !(cVar5->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("OID.")))) )  
		goto label_cond_73;
	cVar5 = cVar5->substring(0x4);
label_cond_73:
	//    .local v2, "number":Z
	if ( !(cVar5->length()) )  
		goto label_cond_87;
	ch = cVar5->charAt(0x0);
	//    .local v1, "ch":C
	if ( ch <  0x30 )
		goto label_cond_87;
	if ( ch >  0x39 )
		goto label_cond_87;
	//    .end local v1    # "ch":C
label_cond_87:
	if ( 0x0 )     
		goto label_cond_aa;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::io::IOException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid keyword \")))->append(cVar5)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar6;
	// 767    .line 1280
label_cond_aa:
	cVar8 = std::make_shared<sun::security::util::ObjectIdentifier>(cVar5);
	return cVar8;

}
// .method static hasKeyword(Lsun/security/util/ObjectIdentifier;I)Z
bool sun::security::x509::AVAKeyword::hasKeyword(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,int standard)
{
	
	std::shared_ptr<sun::security::x509::AVAKeyword> ak;
	
	//    .param p0, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p1, "standard"    # I
	ak = sun::security::x509::AVAKeyword::oidMap->get(oid);
	ak->checkCast("sun::security::x509::AVAKeyword");
	//    .local v0, "ak":Lsun/security/x509/AVAKeyword;
	if ( ak )     
		goto label_cond_c;
	return 0x0;
	// 800    .line 1346
label_cond_c:
	return ak->isCompliant(standard);

}
// .method private isCompliant(I)Z
bool sun::security::x509::AVAKeyword::isCompliant(int standard)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "standard"    # I
	// switch
	{
	auto item = ( standard );
	if (item == 1) goto label_pswitch_23;
	if (item == 2) goto label_pswitch_1d;
	if (item == 3) goto label_pswitch_20;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid standard ")))->append(standard)->toString());
	// throw
	throw cVar0;
	// 842    .line 1217
label_pswitch_1d:
	return this->rfc1779Compliant;
	// 848    .line 1219
label_pswitch_20:
	return this->rfc2253Compliant;
	// 854    .line 1221
label_pswitch_23:
	return 0x1;
	// 860    .line 1215
	// 861    nop
	// 863    :pswitch_data_26
	// 864    .packed-switch 0x1
	// 865        :pswitch_23
	// 866        :pswitch_1d
	// 867        :pswitch_20
	// 868    .end packed-switch

}


