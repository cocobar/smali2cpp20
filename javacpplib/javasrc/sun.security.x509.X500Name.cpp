// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X500Name.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.InternalError.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.Field.h"
#include "java.security.AccessController.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AVA.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.RDN.h"
#include "sun.security.x509.X500Name_S_1.h"
#include "sun.security.x509.X500Name.h"

static sun::security::x509::X500Name::DNQUALIFIER_DATA;
static sun::security::x509::X500Name::DNQUALIFIER_OID;
static sun::security::x509::X500Name::DOMAIN_COMPONENT_DATA;
static sun::security::x509::X500Name::DOMAIN_COMPONENT_OID;
static sun::security::x509::X500Name::GENERATIONQUALIFIER_DATA;
static sun::security::x509::X500Name::GENERATIONQUALIFIER_OID;
static sun::security::x509::X500Name::GIVENNAME_DATA;
static sun::security::x509::X500Name::GIVENNAME_OID;
static sun::security::x509::X500Name::INITIALS_DATA;
static sun::security::x509::X500Name::INITIALS_OID;
static sun::security::x509::X500Name::SERIALNUMBER_DATA;
static sun::security::x509::X500Name::SERIALNUMBER_OID;
static sun::security::x509::X500Name::SURNAME_DATA;
static sun::security::x509::X500Name::SURNAME_OID;
static sun::security::x509::X500Name::commonName_data;
static sun::security::x509::X500Name::commonName_oid;
static sun::security::x509::X500Name::countryName_data;
static sun::security::x509::X500Name::countryName_oid;
static sun::security::x509::X500Name::internedOIDs;
static sun::security::x509::X500Name::ipAddress_data;
static sun::security::x509::X500Name::ipAddress_oid;
static sun::security::x509::X500Name::localityName_data;
static sun::security::x509::X500Name::localityName_oid;
static sun::security::x509::X500Name::orgName_data;
static sun::security::x509::X500Name::orgName_oid;
static sun::security::x509::X500Name::orgUnitName_data;
static sun::security::x509::X500Name::orgUnitName_oid;
static sun::security::x509::X500Name::principalConstructor;
static sun::security::x509::X500Name::principalField;
static sun::security::x509::X500Name::stateName_data;
static sun::security::x509::X500Name::stateName_oid;
static sun::security::x509::X500Name::streetAddress_data;
static sun::security::x509::X500Name::streetAddress_oid;
static sun::security::x509::X500Name::title_data;
static sun::security::x509::X500Name::title_oid;
static sun::security::x509::X500Name::userid_data;
static sun::security::x509::X500Name::userid_oid;
// .method static constructor <clinit>()V
void sun::security::x509::X500Name::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::util::HashMap> cVar5;
	std::shared<std::vector<int[]>> cVar6;
	std::shared<std::vector<int[]>> cVar7;
	std::shared<std::vector<int[]>> cVar8;
	std::shared_ptr<sun::security::x509::X500Name_S_1> pa;
	std::shared_ptr<java::lang::InternalError> cVar10;
	std::shared_ptr<std::vector<java::lang::Object>> result;
	std::shared_ptr<java::lang::reflect::Constructor> constr;
	std::shared_ptr<java::lang::reflect::Field> cVar9;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0xb;
	cVar1 = 0x7;
	cVar2 = 0x2;
	cVar3 = 0x5;
	cVar4 = 0x4;
	cVar5 = std::make_shared<java::util::HashMap>();
	sun::security::x509::X500Name::internedOIDs = cVar5;
	?;
	sun::security::x509::X500Name::commonName_data = ?;
	?;
	sun::security::x509::X500Name::SURNAME_DATA = ?;
	?;
	sun::security::x509::X500Name::SERIALNUMBER_DATA = ?;
	?;
	sun::security::x509::X500Name::countryName_data = ?;
	?;
	sun::security::x509::X500Name::localityName_data = ?;
	?;
	sun::security::x509::X500Name::stateName_data = ?;
	?;
	sun::security::x509::X500Name::streetAddress_data = ?;
	?;
	sun::security::x509::X500Name::orgName_data = ?;
	?;
	sun::security::x509::X500Name::orgUnitName_data = ?;
	?;
	sun::security::x509::X500Name::title_data = ?;
	?;
	sun::security::x509::X500Name::GIVENNAME_DATA = ?;
	?;
	sun::security::x509::X500Name::INITIALS_DATA = ?;
	?;
	sun::security::x509::X500Name::GENERATIONQUALIFIER_DATA = ?;
	?;
	sun::security::x509::X500Name::DNQUALIFIER_DATA = ?;
	cVar6 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::security::x509::X500Name::ipAddress_data = cVar6;
	cVar7 = std::make_shared<std::vector<int[]>>(cVar1);
	?;
	sun::security::x509::X500Name::DOMAIN_COMPONENT_DATA = cVar7;
	cVar8 = std::make_shared<std::vector<int[]>>(cVar1);
	?;
	sun::security::x509::X500Name::userid_data = cVar8;
	sun::security::x509::X500Name::commonName_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::commonName_data));
	sun::security::x509::X500Name::SERIALNUMBER_OID = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::SERIALNUMBER_DATA));
	sun::security::x509::X500Name::countryName_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::countryName_data));
	sun::security::x509::X500Name::localityName_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::localityName_data));
	sun::security::x509::X500Name::orgName_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::orgName_data));
	sun::security::x509::X500Name::orgUnitName_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::orgUnitName_data));
	sun::security::x509::X500Name::stateName_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::stateName_data));
	sun::security::x509::X500Name::streetAddress_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::streetAddress_data));
	sun::security::x509::X500Name::title_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::title_data));
	sun::security::x509::X500Name::DNQUALIFIER_OID = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::DNQUALIFIER_DATA));
	sun::security::x509::X500Name::SURNAME_OID = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::SURNAME_DATA));
	sun::security::x509::X500Name::GIVENNAME_OID = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::GIVENNAME_DATA));
	sun::security::x509::X500Name::INITIALS_OID = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::INITIALS_DATA));
	sun::security::x509::X500Name::GENERATIONQUALIFIER_OID = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::GENERATIONQUALIFIER_DATA));
	sun::security::x509::X500Name::ipAddress_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::ipAddress_data));
	sun::security::x509::X500Name::DOMAIN_COMPONENT_OID = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::DOMAIN_COMPONENT_DATA));
	sun::security::x509::X500Name::userid_oid = sun::security::x509::X500Name::intern(sun::security::util::ObjectIdentifier::newInternal(sun::security::x509::X500Name::userid_data));
	pa = std::make_shared<sun::security::x509::X500Name_S_1>();
	//    .local v2, "pa":Ljava/security/PrivilegedExceptionAction;, "Ljava/security/PrivilegedExceptionAction<[Ljava/lang/Object;>;"
	try {
	//label_try_start_159:
	result = java::security::AccessController::doPrivileged(pa);
	result->checkCast("std::vector<java::lang::Object>");
	//    .local v3, "result":[Ljava/lang/Object;
	constr = result[0x0];
	constr->checkCast("java::lang::reflect::Constructor");
	//    .local v0, "constr":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<Ljavax/security/auth/x500/X500Principal;>;"
	sun::security::x509::X500Name::principalConstructor = constr;
	cVar9 = result[0x1];
	cVar9->checkCast("java::lang::reflect::Field");
	sun::security::x509::X500Name::principalField = cVar9;
	//label_try_end_16d:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16e;
	}
	//    .catch Ljava/lang/Exception; {:try_start_159 .. :try_end_16d} :catch_16e
	return;
	// 578    .line 1424
	// 579    .end local v0    # "constr":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<Ljavax/security/auth/x500/X500Principal;>;"
	// 580    .end local v3    # "result":[Ljava/lang/Object;
label_catch_16e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	cVar10 = std::make_shared<java::lang::InternalError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not obtain X500Principal access")), getCatchExcetionFromList);
	// throw
	throw cVar10;
	// 594    .line 1164
	// 595    :array_178
	// 596    .array-data 4
	// 597        0x1
	// 598        0x3
	// 599        0x6
	// 600        0x1
	// 601        0x4
	// 602        0x1
	// 603        0x2a
	// 604        0x2
	// 605        0xb
	// 606        0x2
	// 607        0x1
	// 608    .end array-data
	// 610    .line 1166
	// 611    :array_192
	// 612    .array-data 4
	// 613        0x0
	// 614        0x9
	// 615        0x926
	// 616        0x124f92c
	// 617        0x64
	// 618        0x1
	// 619        0x19
	// 620    .end array-data
	// 622    .line 1168
	// 623    :array_1a4
	// 624    .array-data 4
	// 625        0x0
	// 626        0x9
	// 627        0x926
	// 628        0x124f92c
	// 629        0x64
	// 630        0x1
	// 631        0x1
	// 632    .end array-data

}
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::x509::X500Name::X500Name(std::shared_ptr<java::lang::String> dname)
{
	
	//    .param p1, "dname"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 639        value = {
	// 640            Ljava/io/IOException;
	// 641        }
	// 642    .end annotation
	sun::security::x509::X500Name::(dname, java::util::Collections::emptyMap({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::security::x509::X500Name::X500Name(std::shared_ptr<java::lang::String> dname,std::shared_ptr<java::lang::String> format)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "dname"    # Ljava/lang/String;
	//    .param p2, "format"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 661        value = {
	// 662            Ljava/io/IOException;
	// 663        }
	// 664    .end annotation
	// 668    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( dname )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Name must not be null")));
	// throw
	throw cVar0;
	// 682    .line 181
label_cond_e:
	if ( !(format->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC2253")))) )  
		goto label_cond_1b;
	this->parseRFC2253DN(dname);
label_goto_1a:
	return;
	// 699    .line 183
label_cond_1b:
	if ( !(format->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("DEFAULT")))) )  
		goto label_cond_2c;
	this->parseDN(dname, java::util::Collections::emptyMap({const[class].FS-Param}));
	goto label_goto_1a;
	// 718    .line 186
label_cond_2c:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported format ")))->append(format)->toString());
	// throw
	throw cVar1;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
sun::security::x509::X500Name::X500Name(std::shared_ptr<java::lang::String> commonName,std::shared_ptr<java::lang::String> organizationUnit,std::shared_ptr<java::lang::String> organizationName,std::shared_ptr<java::lang::String> country)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<sun::security::x509::RDN> cVar4;
	std::shared_ptr<sun::security::x509::AVA> cVar5;
	std::shared_ptr<sun::security::util::DerValue> cVar6;
	std::shared_ptr<sun::security::x509::RDN> cVar7;
	std::shared_ptr<sun::security::x509::AVA> cVar8;
	std::shared_ptr<sun::security::util::DerValue> cVar9;
	std::shared_ptr<sun::security::x509::RDN> cVar10;
	std::shared_ptr<sun::security::x509::AVA> cVar11;
	std::shared_ptr<sun::security::util::DerValue> cVar12;
	std::shared_ptr<sun::security::x509::RDN> cVar13;
	std::shared_ptr<sun::security::x509::AVA> cVar14;
	std::shared_ptr<sun::security::util::DerValue> cVar15;
	
	//    .param p1, "commonName"    # Ljava/lang/String;
	//    .param p2, "organizationUnit"    # Ljava/lang/String;
	//    .param p3, "organizationName"    # Ljava/lang/String;
	//    .param p4, "country"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 752        value = {
	// 753            Ljava/io/IOException;
	// 754        }
	// 755    .end annotation
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	// 767    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->names = std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(0x4);
	cVar4 = std::make_shared<sun::security::x509::RDN>(cVar2);
	this->names[cVar0] = cVar4;
	cVar6 = std::make_shared<sun::security::util::DerValue>(commonName);
	cVar5 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::commonName_oid, cVar6);
	this->names[cVar0]->assertion[cVar3] = cVar5;
	cVar7 = std::make_shared<sun::security::x509::RDN>(cVar2);
	this->names[cVar1] = cVar7;
	cVar9 = std::make_shared<sun::security::util::DerValue>(organizationUnit);
	cVar8 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::orgUnitName_oid, cVar9);
	this->names[cVar1]->assertion[cVar3] = cVar8;
	cVar10 = std::make_shared<sun::security::x509::RDN>(cVar2);
	this->names[cVar2] = cVar10;
	cVar12 = std::make_shared<sun::security::util::DerValue>(organizationName);
	cVar11 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::orgName_oid, cVar12);
	this->names[cVar2]->assertion[cVar3] = cVar11;
	cVar13 = std::make_shared<sun::security::x509::RDN>(cVar2);
	this->names[cVar3] = cVar13;
	cVar15 = std::make_shared<sun::security::util::DerValue>(country);
	cVar14 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::countryName_oid, cVar15);
	this->names[cVar3]->assertion[cVar3] = cVar14;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
sun::security::x509::X500Name::X500Name(std::shared_ptr<java::lang::String> commonName,std::shared_ptr<java::lang::String> organizationUnit,std::shared_ptr<java::lang::String> organizationName,std::shared_ptr<java::lang::String> localityName,std::shared_ptr<java::lang::String> stateName,std::shared_ptr<java::lang::String> country)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<sun::security::x509::RDN> cVar5;
	std::shared_ptr<sun::security::x509::AVA> cVar6;
	std::shared_ptr<sun::security::util::DerValue> cVar7;
	std::shared_ptr<sun::security::x509::RDN> cVar8;
	std::shared_ptr<sun::security::x509::AVA> cVar9;
	std::shared_ptr<sun::security::util::DerValue> cVar10;
	std::shared_ptr<sun::security::x509::RDN> cVar11;
	std::shared_ptr<sun::security::x509::AVA> cVar12;
	std::shared_ptr<sun::security::util::DerValue> cVar13;
	std::shared_ptr<sun::security::x509::RDN> cVar14;
	std::shared_ptr<sun::security::x509::AVA> cVar15;
	std::shared_ptr<sun::security::util::DerValue> cVar16;
	std::shared_ptr<sun::security::x509::RDN> cVar17;
	std::shared_ptr<sun::security::x509::AVA> cVar18;
	std::shared_ptr<sun::security::util::DerValue> cVar19;
	std::shared_ptr<sun::security::x509::RDN> cVar20;
	std::shared_ptr<sun::security::x509::AVA> cVar21;
	std::shared_ptr<sun::security::util::DerValue> cVar22;
	
	//    .param p1, "commonName"    # Ljava/lang/String;
	//    .param p2, "organizationUnit"    # Ljava/lang/String;
	//    .param p3, "organizationName"    # Ljava/lang/String;
	//    .param p4, "localityName"    # Ljava/lang/String;
	//    .param p5, "stateName"    # Ljava/lang/String;
	//    .param p6, "country"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 909        value = {
	// 910            Ljava/io/IOException;
	// 911        }
	// 912    .end annotation
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	// 926    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->names = std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(0x6);
	cVar5 = std::make_shared<sun::security::x509::RDN>(cVar3);
	this->names[0x5] = cVar5;
	cVar7 = std::make_shared<sun::security::util::DerValue>(commonName);
	cVar6 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::commonName_oid, cVar7);
	this->names[0x5]->assertion[cVar4] = cVar6;
	cVar8 = std::make_shared<sun::security::x509::RDN>(cVar3);
	this->names[cVar0] = cVar8;
	cVar10 = std::make_shared<sun::security::util::DerValue>(organizationUnit);
	cVar9 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::orgUnitName_oid, cVar10);
	this->names[cVar0]->assertion[cVar4] = cVar9;
	cVar11 = std::make_shared<sun::security::x509::RDN>(cVar3);
	this->names[cVar1] = cVar11;
	cVar13 = std::make_shared<sun::security::util::DerValue>(organizationName);
	cVar12 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::orgName_oid, cVar13);
	this->names[cVar1]->assertion[cVar4] = cVar12;
	cVar14 = std::make_shared<sun::security::x509::RDN>(cVar3);
	this->names[cVar2] = cVar14;
	cVar16 = std::make_shared<sun::security::util::DerValue>(localityName);
	cVar15 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::localityName_oid, cVar16);
	this->names[cVar2]->assertion[cVar4] = cVar15;
	cVar17 = std::make_shared<sun::security::x509::RDN>(cVar3);
	this->names[cVar3] = cVar17;
	cVar19 = std::make_shared<sun::security::util::DerValue>(stateName);
	cVar18 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::stateName_oid, cVar19);
	this->names[cVar3]->assertion[cVar4] = cVar18;
	cVar20 = std::make_shared<sun::security::x509::RDN>(cVar3);
	this->names[cVar4] = cVar20;
	cVar22 = std::make_shared<sun::security::util::DerValue>(country);
	cVar21 = std::make_shared<sun::security::x509::AVA>(sun::security::x509::X500Name::countryName_oid, cVar22);
	this->names[cVar4]->assertion[cVar4] = cVar21;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/util/Map;)V
sun::security::x509::X500Name::X500Name(std::shared_ptr<java::lang::String> dname,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap)
{
	
	//    .param p1, "dname"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1127        value = {
	// 1128            "(",
	// 1129            "Ljava/lang/String;",
	// 1130            "Ljava/util/Map",
	// 1131            "<",
	// 1132            "Ljava/lang/String;",
	// 1133            "Ljava/lang/String;",
	// 1134            ">;)V"
	// 1135        }
	// 1136    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1139        value = {
	// 1140            Ljava/io/IOException;
	// 1141        }
	// 1142    .end annotation
	//    .local p2, "keywordMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 1147    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->parseDN(dname, keywordMap);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::X500Name::X500Name(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1160        value = {
	// 1161            Ljava/io/IOException;
	// 1162        }
	// 1163    .end annotation
	// 1167    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->parseDER(in);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::X500Name::X500Name(std::shared_ptr<sun::security::util::DerValue> value)
{
	
	//    .param p1, "value"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1180        value = {
	// 1181            Ljava/io/IOException;
	// 1182        }
	// 1183    .end annotation
	sun::security::x509::X500Name::(value->toDerInputStream());
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::X500Name::X500Name(std::shared_ptr<unsigned char[]> name)
{
	
	std::shared_ptr<sun::security::util::DerInputStream> in;
	
	//    .param p1, "name"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 1201        value = {
	// 1202            Ljava/io/IOException;
	// 1203        }
	// 1204    .end annotation
	// 1208    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	in = std::make_shared<sun::security::util::DerInputStream>(name);
	//    .local v0, "in":Lsun/security/util/DerInputStream;
	this->parseDER(in);
	return;

}
// .method public constructor <init>([Lsun/security/x509/RDN;)V
sun::security::x509::X500Name::X500Name(std::shared_ptr<std::vector<sun::security::x509::RDN>> rdnArray)
{
	
	std::shared_ptr<std::vector<sun::security::x509::RDN>> cVar0;
	int i;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "rdnArray"    # [Lsun/security/x509/RDN;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1227        value = {
	// 1228            Ljava/io/IOException;
	// 1229        }
	// 1230    .end annotation
	// 1234    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( rdnArray )     
		goto label_cond_b;
	this->names = std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(0x0);
label_cond_a:
	return;
	// 1250    .line 279
label_cond_b:
	cVar0 = rdnArray->clone();
	cVar0->checkCast("std::vector<sun::security::x509::RDN>");
	this->names = cVar0;
	i = 0x0;
	//    .local v0, "i":I
label_goto_14:
	if ( i >= this->names->size() )
		goto label_cond_a;
	if ( this->names[i] )     
		goto label_cond_28;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot create an X500Name")));
	// throw
	throw cVar1;
	// 1287    .line 280
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_14;

}
// .method public static asX500Name(Ljavax/security/auth/x500/X500Principal;)Lsun/security/x509/X500Name;
std::shared_ptr<sun::security::x509::X500Name> sun::security::x509::X500Name::asX500Name(std::shared_ptr<javax::security::auth::x500::X500Principal> p)
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	std::shared_ptr<sun::security::x509::X500Name> name;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "p"    # Ljavax/security/auth/x500/X500Principal;
	try {
	//label_try_start_0:
	name = sun::security::x509::X500Name::principalField->get(p);
	name->checkCast("sun::security::x509::X500Name");
	//    .local v1, "name":Lsun/security/x509/X500Name;
	name->x500Principal = p;
	//label_try_end_a:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_a} :catch_b
	return name;
	// 1318    .line 1457
	// 1319    .end local v1    # "name":Lsun/security/x509/X500Name;
label_catch_b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected exception")), getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method private checkNoNewLinesNorTabsAtBeginningOfDN(Ljava/lang/String;)V
void sun::security::x509::X500Name::checkNoNewLinesNorTabsAtBeginningOfDN(std::shared_ptr<java::lang::String> input)
{
	
	int i;
	int c;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "input"    # Ljava/lang/String;
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= input->length() )
		goto label_cond_23;
	c = input->charAt(i);
	//    .local v0, "c":C
	if ( c == 0x20 )
		goto label_cond_20;
	if ( c == 0x9 )
		goto label_cond_17;
	if ( c != 0xa )
		goto label_cond_23;
label_cond_17:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DN cannot start with newline nor tab")));
	// throw
	throw cVar0;
	// 1380    .line 955
label_cond_20:
	i = ( i + 0x1);
	goto label_goto_1;
	// 1386    .line 964
	// 1387    .end local v0    # "c":C
label_cond_23:
	return;

}
// .method static countQuotes(Ljava/lang/String;II)I
int sun::security::x509::X500Name::countQuotes(std::shared_ptr<java::lang::String> string,int from,int to)
{
	
	int count;
	int escape;
	int i;
	
	//    .param p0, "string"    # Ljava/lang/String;
	//    .param p1, "from"    # I
	//    .param p2, "to"    # I
	count = 0x0;
	//    .local v0, "count":I
	escape = 0x0;
	//    .local v1, "escape":I
	i = from;
	//    .local v2, "i":I
label_goto_3:
	if ( i >= to )
		goto label_cond_22;
	if ( string->charAt(i) != 0x22 )
		goto label_cond_13;
	if ( ( escape % 0x2) )     
		goto label_cond_13;
	count = ( count + 0x1);
label_cond_13:
	if ( string->charAt(i) != 0x5c )
		goto label_cond_20;
	escape = ( escape + 0x1);
label_goto_1d:
	i = ( i + 0x1);
	goto label_goto_3;
	// 1448    .line 1031
label_cond_20:
	escape = 0x0;
	goto label_goto_1d;
	// 1454    .line 1035
label_cond_22:
	return count;

}
// .method private static escaped(IILjava/lang/String;)Z
bool sun::security::x509::X500Name::escaped(int rdnEnd,int searchOffset,std::shared_ptr<java::lang::String> dnString)
{
	
	bool cVar0;
	int cVar1;
	bool cVar2;
	int count;
	int cVar3;
	
	//    .param p0, "rdnEnd"    # I
	//    .param p1, "searchOffset"    # I
	//    .param p2, "dnString"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = 0x5c;
	cVar2 = 0x1;
	if ( rdnEnd != cVar2 )
		goto label_cond_f;
	if ( dnString->charAt(( rdnEnd + -0x1)) != cVar1 )
		goto label_cond_f;
	return cVar2;
	// 1486    .line 1048
label_cond_f:
	if ( rdnEnd <= cVar2 )
		goto label_cond_22;
	if ( dnString->charAt(( rdnEnd + -0x1)) != cVar1 )
		goto label_cond_22;
	if ( dnString->charAt(( rdnEnd + -0x2)) == cVar1 )
		goto label_cond_22;
	return cVar2;
	// 1510    .line 1056
label_cond_22:
	if ( rdnEnd <= cVar2 )
		goto label_cond_4b;
	if ( dnString->charAt(( rdnEnd + -0x1)) != cVar1 )
		goto label_cond_4b;
	if ( dnString->charAt(( rdnEnd + -0x2)) != cVar1 )
		goto label_cond_4b;
	count = 0x0;
	//    .local v0, "count":I
	cVar3 = ( rdnEnd + -0x1);
label_goto_37:
	if ( cVar3 <  searchOffset )
		goto label_cond_44;
	if ( dnString->charAt(cVar3) != cVar1 )
		goto label_cond_41;
	count = ( count + 0x1);
label_cond_41:
	cVar3 = ( cVar3 + -0x1);
	goto label_goto_37;
	// 1558    .line 1072
label_cond_44:
	if ( !(( count % 0x2)) )  
		goto label_cond_49;
label_goto_48:
	return cVar2;
label_cond_49:
	cVar2 = cVar0;
	goto label_goto_48;
	// 1572    .line 1075
	// 1573    .end local v0    # "count":I
label_cond_4b:
	return cVar0;

}
// .method private findAttribute(Lsun/security/util/ObjectIdentifier;)Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::x509::X500Name::findAttribute(std::shared_ptr<sun::security::util::ObjectIdentifier> attribute)
{
	
	int i;
	std::shared_ptr<sun::security::util::DerValue> value;
	
	//    .param p1, "attribute"    # Lsun/security/util/ObjectIdentifier;
	if ( !(this->names) )  
		goto label_cond_19;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= this->names->size() )
		goto label_cond_19;
	value = this->names[i]->findAttribute(attribute);
	//    .local v1, "value":Lsun/security/util/DerValue;
	if ( !(value) )  
		goto label_cond_16;
	return value;
	// 1617    .line 748
label_cond_16:
	i = ( i + 0x1);
	goto label_goto_6;
	// 1623    .line 755
	// 1624    .end local v0    # "i":I
	// 1625    .end local v1    # "value":Lsun/security/util/DerValue;
label_cond_19:
	return 0x0;

}
// .method private generateDN()V
void sun::security::x509::X500Name::generateDN()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	
	if ( this->names->size() != 0x1 )
		goto label_cond_12;
	this->dn = this->names[0x0]->toString();
	return;
	// 1659    .line 1092
label_cond_12:
	sb = std::make_shared<java::lang::StringBuilder>(0x30);
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	if ( !(this->names) )  
		goto label_cond_3f;
	i = ( this->names->size() + -0x1);
	//    .local v0, "i":I
label_goto_22:
	if ( i < 0 ) 
		goto label_cond_3f;
	if ( i == ( this->names->size() + -0x1) )
		goto label_cond_31;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_31:
	sb->append(this->names[i]->toString());
	i = ( i + -0x1);
	goto label_goto_22;
	// 1715    .line 1101
	// 1716    .end local v0    # "i":I
label_cond_3f:
	this->dn = sb->toString();
	return;

}
// .method private generateRFC1779DN(Ljava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::generateRFC1779DN(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1731        value = {
	// 1732            "(",
	// 1733            "Ljava/util/Map",
	// 1734            "<",
	// 1735            "Ljava/lang/String;",
	// 1736            "Ljava/lang/String;",
	// 1737            ">;)",
	// 1738            "Ljava/lang/String;"
	// 1739        }
	// 1740    .end annotation
	//    .local p1, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( this->names->size() != 0x1 )
		goto label_cond_10;
	return this->names[0x0]->toRFC1779String(oidMap);
	// 1766    .line 1118
label_cond_10:
	sb = std::make_shared<java::lang::StringBuilder>(0x30);
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	if ( !(this->names) )  
		goto label_cond_3d;
	i = ( this->names->size() + -0x1);
	//    .local v0, "i":I
label_goto_20:
	if ( i < 0 ) 
		goto label_cond_3d;
	if ( i == ( this->names->size() + -0x1) )
		goto label_cond_2f;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_2f:
	sb->append(this->names[i]->toRFC1779String(oidMap));
	i = ( i + -0x1);
	goto label_goto_20;
	// 1822    .line 1127
	// 1823    .end local v0    # "i":I
label_cond_3d:
	return sb->toString();

}
// .method private generateRFC2253DN(Ljava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::generateRFC2253DN(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	std::shared_ptr<java::lang::StringBuilder> fullname;
	int i;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1835        value = {
	// 1836            "(",
	// 1837            "Ljava/util/Map",
	// 1838            "<",
	// 1839            "Ljava/lang/String;",
	// 1840            "Ljava/lang/String;",
	// 1841            ">;)",
	// 1842            "Ljava/lang/String;"
	// 1843        }
	// 1844    .end annotation
	//    .local p1, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( this->names->size() )     
		goto label_cond_9;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 1860    .line 692
label_cond_9:
	fullname = std::make_shared<java::lang::StringBuilder>(0x30);
	//    .local v0, "fullname":Ljava/lang/StringBuilder;
	i = ( this->names->size() + -0x1);
	//    .local v1, "i":I
label_goto_15:
	if ( i < 0 ) 
		goto label_cond_31;
	if ( i >= ( this->names->size() + -0x1) )
		goto label_cond_23;
	fullname->append(0x2c);
label_cond_23:
	fullname->append(this->names[i]->toRFC2253String(oidMap));
	i = ( i + -0x1);
	goto label_goto_15;
	// 1911    .line 699
label_cond_31:
	return fullname->toString();

}
// .method private getString(Lsun/security/util/DerValue;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getString(std::shared_ptr<sun::security::util::DerValue> attribute)
{
	
	std::shared_ptr<java::lang::String> value;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "attribute"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1924        value = {
	// 1925            Ljava/io/IOException;
	// 1926        }
	// 1927    .end annotation
	if ( attribute )     
		goto label_cond_4;
	return 0x0;
	// 1938    .line 428
label_cond_4:
	value = attribute->getAsString();
	//    .local v0, "value":Ljava/lang/String;
	if ( value )     
		goto label_cond_26;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("not a DER string encoding, ")))->append(attribute->tag)->toString());
	// throw
	throw cVar0;
	// 1977    .line 434
label_cond_26:
	return value;

}
// .method static intern(Lsun/security/util/ObjectIdentifier;)Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::X500Name::intern(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	std::shared_ptr<sun::security::util::ObjectIdentifier> interned;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	
	//    .param p0, "oid"    # Lsun/security/util/ObjectIdentifier;
	interned = sun::security::x509::X500Name::internedOIDs->putIfAbsent(oid, oid);
	interned->checkCast("sun::security::util::ObjectIdentifier");
	//    .local v0, "interned":Lsun/security/util/ObjectIdentifier;
	if ( interned )     
		goto label_cond_b;
	//    .end local p0    # "oid":Lsun/security/util/ObjectIdentifier;
label_goto_a:
	return oid;
	// 2004    .restart local p0    # "oid":Lsun/security/util/ObjectIdentifier;
label_cond_b:
	oid = interned;
	goto label_goto_a;

}
// .method private isWithinSubtree(Lsun/security/x509/X500Name;)Z
bool sun::security::x509::X500Name::isWithinSubtree(std::shared_ptr<sun::security::x509::X500Name> other)
{
	
	bool cVar0;
	bool cVar1;
	int i;
	
	//    .param p1, "other"    # Lsun/security/x509/X500Name;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 2026    .line 1312
label_cond_5:
	if ( other )     
		goto label_cond_8;
	return cVar1;
	// 2033    .line 1315
label_cond_8:
	if ( other->names->size() )     
		goto label_cond_e;
	return cVar0;
	// 2044    .line 1318
label_cond_e:
	if ( this->names->size() )     
		goto label_cond_14;
	return cVar1;
	// 2055    .line 1321
label_cond_14:
	if ( this->names->size() >= other->names->size() )
		goto label_cond_1d;
	return cVar1;
	// 2070    .line 1324
label_cond_1d:
	i = 0x0;
	//    .local v0, "i":I
label_goto_1e:
	if ( i >= other->names->size() )
		goto label_cond_35;
	if ( this->names[i]->equals(other->names[i]) )     
		goto label_cond_32;
	return cVar1;
	// 2100    .line 1324
label_cond_32:
	i = ( i + 0x1);
	goto label_goto_1e;
	// 2106    .line 1329
label_cond_35:
	return cVar0;

}
// .method private parseDER(Lsun/security/util/DerInputStream;)V
void sun::security::x509::X500Name::parseDER(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	int nameseq;
	std::shared_ptr<unsigned char[]> derBytes;
	int i;
	std::shared_ptr<sun::security::x509::RDN> cVar1;
	std::shared_ptr<sun::security::util::DerValue> derVal;
	std::shared_ptr<sun::security::util::DerInputStream> cVar0;
	auto nameseq;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2115        value = {
	// 2116            Ljava/io/IOException;
	// 2117        }
	// 2118    .end annotation
	nameseq = 0x0;
	//    .local v4, "nameseq":[Lsun/security/util/DerValue;
	derBytes = in->toByteArray();
	//    .local v0, "derBytes":[B
	try {
	//label_try_start_7:
	//label_try_end_a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_13;
	}
	//    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_a} :catch_13
	nameseq = in->getSequence(0x5);
	//    .end local v4    # "nameseq":[Lsun/security/util/DerValue;
label_goto_b:
	if ( nameseq )     
		goto label_cond_2d;
	this->names = std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(0x0);
label_cond_12:
	return;
	// 2159    .line 787
	// 2160    .restart local v4    # "nameseq":[Lsun/security/util/DerValue;
label_catch_13:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "ioe":Ljava/io/IOException;
	if ( derBytes )     
		goto label_cond_18;
	nameseq = 0x0;
	goto label_goto_b;
	// 2173    .line 791
label_cond_18:
	derVal = std::make_shared<sun::security::util::DerValue>(0x30, derBytes);
	//    .local v1, "derVal":Lsun/security/util/DerValue;
	cVar0 = std::make_shared<sun::security::util::DerInputStream>(derVal->toByteArray());
	nameseq = cVar0->getSequence(0x5);
	//    .local v4, "nameseq":[Lsun/security/util/DerValue;
	goto label_goto_b;
	// 2199    .line 801
	// 2200    .end local v1    # "derVal":Lsun/security/util/DerValue;
	// 2201    .end local v3    # "ioe":Ljava/io/IOException;
	// 2202    .end local v4    # "nameseq":[Lsun/security/util/DerValue;
label_cond_2d:
	this->names = std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(nameseq->size());
	i = 0x0;
	//    .local v2, "i":I
label_goto_33:
	if ( i >= nameseq->size() )
		goto label_cond_12;
	cVar1 = std::make_shared<sun::security::x509::RDN>(nameseq[i]);
	this->names[i] = cVar1;
	i = ( i + 0x1);
	goto label_goto_33;

}
// .method private parseDN(Ljava/lang/String;Ljava/util/Map;)V
void sun::security::x509::X500Name::parseDN(std::shared_ptr<java::lang::String> input,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap)
{
	
	std::shared_ptr<java::util::ArrayList> dnVector;
	int dnOffset;
	int quoteCount;
	int searchOffset;
	int nextComma;
	int nextSemiColon;
	int rdnEnd;
	std::shared_ptr<sun::security::x509::RDN> rdn;
	std::shared_ptr<std::vector<sun::security::x509::RDN>> cVar0;
	
	//    .param p1, "input"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2240        value = {
	// 2241            "(",
	// 2242            "Ljava/lang/String;",
	// 2243            "Ljava/util/Map",
	// 2244            "<",
	// 2245            "Ljava/lang/String;",
	// 2246            "Ljava/lang/String;",
	// 2247            ">;)V"
	// 2248        }
	// 2249    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 2252        value = {
	// 2253            Ljava/io/IOException;
	// 2254        }
	// 2255    .end annotation
	//    .local p2, "keywordMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(input) )  
		goto label_cond_8;
	if ( input->length() )     
		goto label_cond_e;
label_cond_8:
	this->names = std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(0x0);
	return;
	// 2279    .line 880
label_cond_e:
	this->checkNoNewLinesNorTabsAtBeginningOfDN(input);
	dnVector = std::make_shared<java::util::ArrayList>();
	//    .local v2, "dnVector":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/RDN;>;"
	dnOffset = 0x0;
	//    .local v0, "dnOffset":I
	quoteCount = 0x0;
	//    .local v5, "quoteCount":I
	input;
	//    .local v1, "dnString":Ljava/lang/String;
	searchOffset = 0x0;
	//    .local v9, "searchOffset":I
	nextComma = input->indexOf(0x2c);
	//    .local v3, "nextComma":I
	nextSemiColon = input->indexOf(0x3b);
	//    .local v4, "nextSemiColon":I
label_goto_26:
	if ( nextComma >= 0 )
		goto label_cond_2a;
	if ( nextSemiColon < 0 ) 
		goto label_cond_66;
label_cond_2a:
	if ( nextSemiColon >= 0 )
		goto label_cond_5d;
	rdnEnd = nextComma;
	//    .local v7, "rdnEnd":I
label_goto_2d:
	quoteCount = (quoteCount +  sun::security::x509::X500Name::countQuotes(input, searchOffset, rdnEnd));
	if ( rdnEnd < 0 ) 
		goto label_cond_4e;
	if ( quoteCount == 0x1 )
		goto label_cond_4e;
	if ( !(( sun::security::x509::X500Name::escaped(rdnEnd, searchOffset, input) ^ 0x1)) )  
		goto label_cond_4e;
	//    .local v8, "rdnString":Ljava/lang/String;
	rdn = std::make_shared<sun::security::x509::RDN>(input->substring(dnOffset, rdnEnd), keywordMap);
	//    .local v6, "rdn":Lsun/security/x509/RDN;
	dnVector->add(rdn);
	dnOffset = ( rdnEnd + 0x1);
	quoteCount = 0x0;
	//    .end local v6    # "rdn":Lsun/security/x509/RDN;
	//    .end local v8    # "rdnString":Ljava/lang/String;
label_cond_4e:
	searchOffset = ( rdnEnd + 0x1);
	nextComma = input->indexOf(0x2c, searchOffset);
	nextSemiColon = input->indexOf(0x3b, searchOffset);
	goto label_goto_26;
	// 2403    .line 897
	// 2404    .end local v7    # "rdnEnd":I
label_cond_5d:
	if ( nextComma >= 0 )
		goto label_cond_61;
	rdnEnd = nextSemiColon;
	//    .restart local v7    # "rdnEnd":I
	goto label_goto_2d;
	// 2414    .line 900
	// 2415    .end local v7    # "rdnEnd":I
label_cond_61:
	rdnEnd = java::lang::Math::min(nextComma, nextSemiColon);
	//    .restart local v7    # "rdnEnd":I
	goto label_goto_2d;
	// 2424    .line 936
	// 2425    .end local v7    # "rdnEnd":I
label_cond_66:
	//    .restart local v8    # "rdnString":Ljava/lang/String;
	rdn = std::make_shared<sun::security::x509::RDN>(input->substring(dnOffset), keywordMap);
	//    .restart local v6    # "rdn":Lsun/security/x509/RDN;
	dnVector->add(rdn);
	java::util::Collections::reverse(dnVector);
	cVar0 = dnVector->toArray(std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(dnVector->size()));
	cVar0->checkCast("std::vector<sun::security::x509::RDN>");
	this->names = cVar0;
	return;

}
// .method private parseRFC2253DN(Ljava/lang/String;)V
void sun::security::x509::X500Name::parseRFC2253DN(std::shared_ptr<java::lang::String> dnString)
{
	
	int cVar0;
	std::shared_ptr<java::util::ArrayList> dnVector;
	int dnOffset;
	int rdnEnd;
	std::shared_ptr<sun::security::x509::RDN> rdn;
	int searchOffset;
	std::shared_ptr<std::vector<sun::security::x509::RDN>> cVar1;
	
	//    .param p1, "dnString"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2467        value = {
	// 2468            Ljava/io/IOException;
	// 2469        }
	// 2470    .end annotation
	cVar0 = 0x2c;
	if ( dnString->length() )     
		goto label_cond_e;
	this->names = std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(0x0);
	return;
	// 2492    .line 973
label_cond_e:
	dnVector = std::make_shared<java::util::ArrayList>();
	//    .local v1, "dnVector":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/RDN;>;"
	dnOffset = 0x0;
	//    .local v0, "dnOffset":I
	//    .local v5, "searchOffset":I
	rdnEnd = dnString->indexOf(cVar0);
	//    .local v3, "rdnEnd":I
label_goto_19:
	if ( rdnEnd < 0 ) 
		goto label_cond_3d;
	if ( rdnEnd <= 0 )
		goto label_cond_36;
	if ( !(( sun::security::x509::X500Name::escaped(rdnEnd, searchOffset, dnString) ^ 0x1)) )  
		goto label_cond_36;
	//    .local v4, "rdnString":Ljava/lang/String;
	rdn = std::make_shared<sun::security::x509::RDN>(dnString->substring(dnOffset, rdnEnd), std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC2253")));
	//    .local v2, "rdn":Lsun/security/x509/RDN;
	dnVector->add(rdn);
	dnOffset = ( rdnEnd + 0x1);
	//    .end local v2    # "rdn":Lsun/security/x509/RDN;
	//    .end local v4    # "rdnString":Ljava/lang/String;
label_cond_36:
	searchOffset = ( rdnEnd + 0x1);
	rdnEnd = dnString->indexOf(cVar0, searchOffset);
	goto label_goto_19;
	// 2561    .line 1006
label_cond_3d:
	//    .restart local v4    # "rdnString":Ljava/lang/String;
	rdn = std::make_shared<sun::security::x509::RDN>(dnString->substring(dnOffset), std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC2253")));
	//    .restart local v2    # "rdn":Lsun/security/x509/RDN;
	dnVector->add(rdn);
	java::util::Collections::reverse(dnVector);
	cVar1 = dnVector->toArray(std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(dnVector->size()));
	cVar1->checkCast("std::vector<sun::security::x509::RDN>");
	this->names = cVar1;
	return;

}
// .method public allAvas()Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::AVA>> sun::security::x509::X500Name::allAvas()
{
	
	std::shared_ptr<java::util::List> list;
	std::shared_ptr<java::util::ArrayList> list;
	int i;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2606        value = {
	// 2607            "()",
	// 2608            "Ljava/util/List",
	// 2609            "<",
	// 2610            "Lsun/security/x509/AVA;",
	// 2611            ">;"
	// 2612        }
	// 2613    .end annotation
	list = this->allAvaList;
	//    .local v1, "list":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AVA;>;"
	if ( list )     
		goto label_cond_23;
	//    .end local v1    # "list":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AVA;>;"
	list = std::make_shared<java::util::ArrayList>();
	//    .restart local v1    # "list":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/AVA;>;"
	i = 0x0;
	//    .local v0, "i":I
label_goto_a:
	if ( i >= this->names->size() )
		goto label_cond_1d;
	list->addAll(this->names[i]->avas());
	i = ( i + 0x1);
	goto label_goto_a;
	// 2657    .line 350
label_cond_1d:
	list = java::util::Collections::unmodifiableList(list);
	this->allAvaList = list;
	//    .end local v0    # "i":I
label_cond_23:
	return list;

}
// .method public asX500Principal()Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X500Name::asX500Principal()
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared<std::vector<std::vector<java::lang::Object>>> args;
	std::shared_ptr<javax::security::auth::x500::X500Principal> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( this->x500Principal )     
		goto label_cond_14;
	try {
	//label_try_start_5:
	args = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	args[0x0] = this;
	//    .local v0, "args":[Ljava/lang/Object;
	cVar0 = sun::security::x509::X500Name::principalConstructor->newInstance(args);
	cVar0->checkCast("javax::security::auth::x500::X500Principal");
	this->x500Principal = cVar0;
	//label_try_end_14:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17;
	}
	//    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_14} :catch_17
	//    .end local v0    # "args":[Ljava/lang/Object;
label_cond_14:
	return this->x500Principal;
	// 2712    .line 1440
label_catch_17:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected exception")), getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public avaSize()I
int sun::security::x509::X500Name::avaSize()
{
	
	return this->allAvas()->size();

}
// .method public commonAncestor(Lsun/security/x509/X500Name;)Lsun/security/x509/X500Name;
std::shared_ptr<sun::security::x509::X500Name> sun::security::x509::X500Name::commonAncestor(std::shared_ptr<sun::security::x509::X500Name> other)
{
	
	std::shared_ptr<sun::security::x509::X500Name> cVar0;
	int otherLen;
	int thisLen;
	int i;
	std::shared<std::vector<std::vector<sun::security::x509::RDN>>> ancestor;
	int j;
	std::shared_ptr<sun::security::x509::X500Name> commonAncestor;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "other"    # Lsun/security/x509/X500Name;
	cVar0 = 0x0;
	if ( other )     
		goto label_cond_4;
	return cVar0;
	// 2756    .line 1355
label_cond_4:
	otherLen = other->names->size();
	//    .local v6, "otherLen":I
	thisLen = this->names->size();
	//    .local v7, "thisLen":I
	if ( !(thisLen) )  
		goto label_cond_e;
	if ( otherLen )     
		goto label_cond_f;
label_cond_e:
	return cVar0;
	// 2778    .line 1360
label_cond_f:
	if ( thisLen >= otherLen )
		goto label_cond_26;
	//    .local v5, "minLen":I
label_goto_12:
	i = 0x0;
	//    .local v2, "i":I
label_goto_13:
	if ( i >= minLen )
		goto label_cond_2b;
	if ( this->names[i]->equals(other->names[i]) )     
		goto label_cond_28;
	if ( i )     
		goto label_cond_2b;
	return cVar0;
	// 2815    .line 1360
	// 2816    .end local v2    # "i":I
	// 2817    .end local v5    # "minLen":I
label_cond_26:
	//    .restart local v5    # "minLen":I
	goto label_goto_12;
	// 2824    .line 1365
	// 2825    .restart local v2    # "i":I
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_13;
	// 2831    .line 1376
label_cond_2b:
	ancestor = std::make_shared<std::vector<std::vector<sun::security::x509::RDN>>>(i);
	//    .local v0, "ancestor":[Lsun/security/x509/RDN;
	j = 0x0;
	//    .local v4, "j":I
label_goto_2e:
	if ( j >= i )
		goto label_cond_39;
	ancestor[j] = this->names[j];
	j = ( j + 0x1);
	goto label_goto_2e;
	// 2855    .line 1381
label_cond_39:
	0x0;
	//    .local v1, "commonAncestor":Lsun/security/x509/X500Name;
	try {
	//label_try_start_3a:
	//    .end local v1    # "commonAncestor":Lsun/security/x509/X500Name;
	commonAncestor = std::make_shared<sun::security::x509::X500Name>(ancestor);
	//label_try_end_3f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_40;
	}
	//    .catch Ljava/io/IOException; {:try_start_3a .. :try_end_3f} :catch_40
	//    .local v1, "commonAncestor":Lsun/security/x509/X500Name;
	return commonAncestor;
	// 2873    .line 1384
	// 2874    .end local v1    # "commonAncestor":Lsun/security/x509/X500Name;
label_catch_40:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "ioe":Ljava/io/IOException;
	return cVar0;

}
// .method public constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::X500Name::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName)
{
	
	std::shared_ptr<sun::security::x509::X500Name> inputX500;
	
	//    .param p1, "inputName"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2887        value = {
	// 2888            Ljava/lang/UnsupportedOperationException;
	// 2889        }
	// 2890    .end annotation
	if ( inputName )     
		goto label_cond_4;
	//    .local v0, "constraintType":I
label_goto_3:
	return constraintType;
	// 2904    .line 1280
	// 2905    .end local v0    # "constraintType":I
label_cond_4:
	if ( inputName->getType() == 0x4 )
		goto label_cond_d;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 2921    .end local v0    # "constraintType":I
label_cond_d:
	inputX500 = inputName;
	inputX500->checkCast("sun::security::x509::X500Name");
	//    .local v1, "inputX500":Lsun/security/x509/X500Name;
	if ( !(inputX500->equals(this)) )  
		goto label_cond_18;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 2942    .line 1286
	// 2943    .end local v0    # "constraintType":I
label_cond_18:
	if ( inputX500->names->size() )     
		goto label_cond_1f;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 2957    .line 1288
	// 2958    .end local v0    # "constraintType":I
label_cond_1f:
	if ( this->names->size() )     
		goto label_cond_26;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 2972    .line 1290
	// 2973    .end local v0    # "constraintType":I
label_cond_26:
	if ( !(inputX500->isWithinSubtree(this)) )  
		goto label_cond_2e;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 2987    .line 1292
	// 2988    .end local v0    # "constraintType":I
label_cond_2e:
	if ( !(this->isWithinSubtree(inputX500)) )  
		goto label_cond_36;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 3002    .line 1295
	// 3003    .end local v0    # "constraintType":I
label_cond_36:
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;

}
// .method public emit(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::X500Name::emit(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3015        value = {
	// 3016            Ljava/io/IOException;
	// 3017        }
	// 3018    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3021    .end annotation
	this->encode(out);
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::X500Name::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	int i;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3035        value = {
	// 3036            Ljava/io/IOException;
	// 3037        }
	// 3038    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= this->names->size() )
		goto label_cond_15;
	this->names[i]->encode(tmp);
	i = ( i + 0x1);
	goto label_goto_6;
	// 3070    .line 829
label_cond_15:
	out->write(0x30, tmp);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::X500Name::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	std::shared_ptr<sun::security::x509::X500Name> other;
	int n;
	int i;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 3095    .line 395
label_cond_5:
	if ( obj->instanceOf("sun::security::x509::X500Name") )     
		goto label_cond_a;
	return cVar0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::X500Name");
	//    .local v2, "other":Lsun/security/x509/X500Name;
	if ( !(this->canonicalDn) )  
		goto label_cond_1e;
	if ( !(other->canonicalDn) )  
		goto label_cond_1e;
	return this->canonicalDn->equals(other->canonicalDn);
	// 3131    .line 404
label_cond_1e:
	n = this->names->size();
	//    .local v1, "n":I
	if ( n == other->names->size() )
		goto label_cond_27;
	return cVar0;
	// 3148    .line 408
label_cond_27:
	i = 0x0;
	//    .local v0, "i":I
label_goto_28:
	if ( i >= n )
		goto label_cond_3e;
	//    .local v4, "r1":Lsun/security/x509/RDN;
	//    .local v5, "r2":Lsun/security/x509/RDN;
	if ( this->names[i]->assertion->size() == other->names[i]->assertion->size() )
		goto label_cond_3b;
	return cVar0;
	// 3182    .line 408
label_cond_3b:
	i = ( i + 0x1);
	goto label_goto_28;
	// 3188    .line 416
	// 3189    .end local v4    # "r1":Lsun/security/x509/RDN;
	// 3190    .end local v5    # "r2":Lsun/security/x509/RDN;
label_cond_3e:
	//    .local v6, "thisCanonical":Ljava/lang/String;
	//    .local v3, "otherCanonical":Ljava/lang/String;
	return this->getRFC2253CanonicalName()->equals(other->getRFC2253CanonicalName());

}
// .method public findMostSpecificAttribute(Lsun/security/util/ObjectIdentifier;)Lsun/security/util/DerValue;
std::shared_ptr<sun::security::util::DerValue> sun::security::x509::X500Name::findMostSpecificAttribute(std::shared_ptr<sun::security::util::ObjectIdentifier> attribute)
{
	
	int i;
	std::shared_ptr<sun::security::util::DerValue> value;
	
	//    .param p1, "attribute"    # Lsun/security/util/ObjectIdentifier;
	if ( !(this->names) )  
		goto label_cond_1a;
	i = ( this->names->size() + -0x1);
	//    .local v0, "i":I
label_goto_a:
	if ( i < 0 ) 
		goto label_cond_1a;
	value = this->names[i]->findAttribute(attribute);
	//    .local v1, "value":Lsun/security/util/DerValue;
	if ( !(value) )  
		goto label_cond_17;
	return value;
	// 3250    .line 764
label_cond_17:
	i = ( i + -0x1);
	goto label_goto_a;
	// 3256    .line 771
	// 3257    .end local v0    # "i":I
	// 3258    .end local v1    # "value":Lsun/security/util/DerValue;
label_cond_1a:
	return 0x0;

}
// .method public getCommonName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getCommonName()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3266        value = {
	// 3267            Ljava/io/IOException;
	// 3268        }
	// 3269    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::commonName_oid));

}
// .method public getCountry()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getCountry()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3291        value = {
	// 3292            Ljava/io/IOException;
	// 3293        }
	// 3294    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::countryName_oid));

}
// .method public getDNQualifier()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getDNQualifier()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3316        value = {
	// 3317            Ljava/io/IOException;
	// 3318        }
	// 3319    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::DNQUALIFIER_OID));

}
// .method public getDomain()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getDomain()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3341        value = {
	// 3342            Ljava/io/IOException;
	// 3343        }
	// 3344    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::DOMAIN_COMPONENT_OID));

}
// .method public getEncoded()[B
unsigned char sun::security::x509::X500Name::getEncoded()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3366        value = {
	// 3367            Ljava/io/IOException;
	// 3368        }
	// 3369    .end annotation
	cVar0 = this->getEncodedInternal()->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public getEncodedInternal()[B
unsigned char sun::security::x509::X500Name::getEncodedInternal()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	int i;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3389        value = {
	// 3390            Ljava/io/IOException;
	// 3391        }
	// 3392    .end annotation
	if ( this->encoded )     
		goto label_cond_29;
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "out":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= this->names->size() )
		goto label_cond_1e;
	this->names[i]->encode(tmp);
	i = ( i + 0x1);
	goto label_goto_f;
	// 3435    .line 844
label_cond_1e:
	out->write(0x30, tmp);
	this->encoded = out->toByteArray();
	//    .end local v0    # "i":I
	//    .end local v1    # "out":Lsun/security/util/DerOutputStream;
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_29:
	return this->encoded;

}
// .method public getGeneration()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getGeneration()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3461        value = {
	// 3462            Ljava/io/IOException;
	// 3463        }
	// 3464    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::GENERATIONQUALIFIER_OID));

}
// .method public getGivenName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getGivenName()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3486        value = {
	// 3487            Ljava/io/IOException;
	// 3488        }
	// 3489    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::GIVENNAME_OID));

}
// .method public getIP()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getIP()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3511        value = {
	// 3512            Ljava/io/IOException;
	// 3513        }
	// 3514    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::ipAddress_oid));

}
// .method public getInitials()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getInitials()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3536        value = {
	// 3537            Ljava/io/IOException;
	// 3538        }
	// 3539    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::INITIALS_OID));

}
// .method public getLocality()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getLocality()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3561        value = {
	// 3562            Ljava/io/IOException;
	// 3563        }
	// 3564    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::localityName_oid));

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getName()
{
	
	return this->toString();

}
// .method public getOrganization()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getOrganization()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3598        value = {
	// 3599            Ljava/io/IOException;
	// 3600        }
	// 3601    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::orgName_oid));

}
// .method public getOrganizationalUnit()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getOrganizationalUnit()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3623        value = {
	// 3624            Ljava/io/IOException;
	// 3625        }
	// 3626    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::orgUnitName_oid));

}
// .method public getRFC1779Name()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getRFC1779Name()
{
	
	return this->getRFC1779Name(java::util::Collections::emptyMap({const[class].FS-Param}));

}
// .method public getRFC1779Name(Ljava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getRFC1779Name(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3664        value = {
	// 3665            "(",
	// 3666            "Ljava/util/Map",
	// 3667            "<",
	// 3668            "Ljava/lang/String;",
	// 3669            "Ljava/lang/String;",
	// 3670            ">;)",
	// 3671            "Ljava/lang/String;"
	// 3672        }
	// 3673    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 3676        value = {
	// 3677            Ljava/lang/IllegalArgumentException;
	// 3678        }
	// 3679    .end annotation
	//    .local p1, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(oidMap->isEmpty()) )  
		goto label_cond_16;
	if ( !(this->rfc1779Dn) )  
		goto label_cond_d;
	return this->rfc1779Dn;
	// 3700    .line 639
label_cond_d:
	this->rfc1779Dn = this->generateRFC1779DN(oidMap);
	return this->rfc1779Dn;
	// 3713    .line 643
label_cond_16:
	return this->generateRFC1779DN(oidMap);

}
// .method public getRFC2253CanonicalName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getRFC2253CanonicalName()
{
	
	std::shared_ptr<java::lang::StringBuilder> fullname;
	int i;
	
	if ( !(this->canonicalDn) )  
		goto label_cond_7;
	return this->canonicalDn;
	// 3736    .line 711
label_cond_7:
	if ( this->names->size() )     
		goto label_cond_14;
	this->canonicalDn = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	return this->canonicalDn;
	// 3754    .line 725
label_cond_14:
	fullname = std::make_shared<java::lang::StringBuilder>(0x30);
	//    .local v0, "fullname":Ljava/lang/StringBuilder;
	i = ( this->names->size() + -0x1);
	//    .local v1, "i":I
label_goto_20:
	if ( i < 0 ) 
		goto label_cond_3d;
	if ( i >= ( this->names->size() + -0x1) )
		goto label_cond_2e;
	fullname->append(0x2c);
label_cond_2e:
	fullname->append(this->names[i]->toRFC2253String(0x1));
	i = ( i + -0x1);
	goto label_goto_20;
	// 3807    .line 732
label_cond_3d:
	this->canonicalDn = fullname->toString();
	return this->canonicalDn;

}
// .method public getRFC2253Name()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getRFC2253Name()
{
	
	return this->getRFC2253Name(java::util::Collections::emptyMap({const[class].FS-Param}));

}
// .method public getRFC2253Name(Ljava/util/Map;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getRFC2253Name(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3840        value = {
	// 3841            "(",
	// 3842            "Ljava/util/Map",
	// 3843            "<",
	// 3844            "Ljava/lang/String;",
	// 3845            "Ljava/lang/String;",
	// 3846            ">;)",
	// 3847            "Ljava/lang/String;"
	// 3848        }
	// 3849    .end annotation
	//    .local p1, "oidMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(oidMap->isEmpty()) )  
		goto label_cond_16;
	if ( !(this->rfc2253Dn) )  
		goto label_cond_d;
	return this->rfc2253Dn;
	// 3870    .line 667
label_cond_d:
	this->rfc2253Dn = this->generateRFC2253DN(oidMap);
	return this->rfc2253Dn;
	// 3883    .line 671
label_cond_16:
	return this->generateRFC2253DN(oidMap);

}
// .method public getState()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getState()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3895        value = {
	// 3896            Ljava/io/IOException;
	// 3897        }
	// 3898    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::stateName_oid));

}
// .method public getSurname()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::getSurname()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3920        value = {
	// 3921            Ljava/io/IOException;
	// 3922        }
	// 3923    .end annotation
	//    .local v0, "attr":Lsun/security/util/DerValue;
	return this->getString(this->findAttribute(sun::security::x509::X500Name::SURNAME_OID));

}
// .method public getType()I
int sun::security::x509::X500Name::getType()
{
	
	return 0x4;

}
// .method public hashCode()I
int sun::security::x509::X500Name::hashCode()
{
	
	return this->getRFC2253CanonicalName()->hashCode();

}
// .method public isEmpty()Z
bool sun::security::x509::X500Name::isEmpty()
{
	
	int i;
	
	//    .local v1, "n":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= this->names->size() )
		goto label_cond_14;
	if ( !(this->names[i]->assertion->size()) )  
		goto label_cond_11;
	return 0x0;
	// 4001    .line 370
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_5;
	// 4007    .line 375
label_cond_14:
	return 0x1;

}
// .method public rdns()Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::RDN>> sun::security::x509::X500Name::rdns()
{
	
	std::shared_ptr<java::util::List> list;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4017        value = {
	// 4018            "()",
	// 4019            "Ljava/util/List",
	// 4020            "<",
	// 4021            "Lsun/security/x509/RDN;",
	// 4022            ">;"
	// 4023        }
	// 4024    .end annotation
	list = this->rdnList;
	//    .local v0, "list":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/RDN;>;"
	if ( list )     
		goto label_cond_10;
	list = java::util::Collections::unmodifiableList(java::util::Arrays::asList(this->names));
	this->rdnList = list;
label_cond_10:
	return list;

}
// .method public size()I
int sun::security::x509::X500Name::size()
{
	
	return this->names->size();

}
// .method public subtreeDepth()I
int sun::security::x509::X500Name::subtreeDepth()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4068        value = {
	// 4069            Ljava/lang/UnsupportedOperationException;
	// 4070        }
	// 4071    .end annotation
	return this->names->size();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X500Name::toString()
{
	
	if ( this->dn )     
		goto label_cond_7;
	this->generateDN();
label_cond_7:
	return this->dn;

}


