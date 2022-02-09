// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\URIName.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.net.URI.h"
#include "java.net.URISyntaxException.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.DNSName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.IPAddressName.h"
#include "sun.security.x509.URIName.h"

// .method public constructor <init>(Ljava/lang/String;)V
sun::security::x509::URIName::URIName(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::net::URI> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<sun::security::x509::IPAddressName> cVar5;
	std::shared_ptr<java::io::IOException> cVar10;
	std::shared_ptr<java::lang::StringBuilder> cVar11;
	std::shared_ptr<sun::security::x509::IPAddressName> cVar9;
	std::shared_ptr<sun::security::x509::DNSName> cVar8;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 024        value = {
	// 025            Ljava/io/IOException;
	// 026        }
	// 027    .end annotation
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<java::net::URI>(name);
	this->uri = cVar0;
	//label_try_end_a:
	}
	catch (java::net::URISyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/net/URISyntaxException; {:try_start_3 .. :try_end_a} :catch_2c
	if ( this->uri->getScheme() )     
		goto label_cond_47;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("URI name must include scheme:")))->append(name)->toString());
	// throw
	throw cVar1;
	// 077    .line 108
label_catch_2c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "use":Ljava/net/URISyntaxException;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::io::IOException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid URI name:")))->append(name)->toString(), getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 107    .line 115
	// 108    .end local v3    # "use":Ljava/net/URISyntaxException;
label_cond_47:
	this->host = this->uri->getHost();
	if ( !(this->host) )  
		goto label_cond_74;
	if ( this->host->charAt(0x0) != 0x5b )
		goto label_cond_90;
	//    .local v2, "ipV6Host":Ljava/lang/String;
	try {
	//label_try_start_6d:
	cVar5 = std::make_shared<sun::security::x509::IPAddressName>(this->host->substring(0x1, ( this->host->length() + -0x1)));
	this->hostIP = cVar5;
	//label_try_end_74:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	//    .catch Ljava/io/IOException; {:try_start_6d .. :try_end_74} :catch_75
	//    .end local v2    # "ipV6Host":Ljava/lang/String;
label_cond_74:
label_goto_74:
	return;
	// 170    .line 126
	// 171    .restart local v2    # "ipV6Host":Ljava/lang/String;
label_catch_75:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/io/IOException;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::io::IOException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid URI name (host portion is not a valid IPv6 address):")))->append(name)->toString());
	// throw
	throw cVar6;
	// 201    .line 132
	// 202    .end local v0    # "ioe":Ljava/io/IOException;
	// 203    .end local v2    # "ipV6Host":Ljava/lang/String;
label_cond_90:
	try {
	//label_try_start_90:
	cVar8 = std::make_shared<sun::security::x509::DNSName>(this->host);
	this->hostDNS = cVar8;
	//label_try_end_99:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9a;
	}
	//    .catch Ljava/io/IOException; {:try_start_90 .. :try_end_99} :catch_9a
	goto label_goto_74;
	// 218    .line 133
label_catch_9a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "ioe":Ljava/io/IOException;
	try {
	//label_try_start_9b:
	cVar9 = std::make_shared<sun::security::x509::IPAddressName>(this->host);
	this->hostIP = cVar9;
	//label_try_end_a4:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a5;
	}
	//    .catch Ljava/lang/Exception; {:try_start_9b .. :try_end_a4} :catch_a5
	goto label_goto_74;
	// 237    .line 138
label_catch_a5:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ioe2":Ljava/lang/Exception;
	cVar11 = std::make_shared<java::lang::StringBuilder>();
	cVar10 = std::make_shared<java::io::IOException>(cVar11->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid URI name (host portion is not a valid DNS name, IPv4 address, or IPv6 address):")))->append(name)->toString());
	// throw
	throw cVar10;

}
// .method constructor <init>(Ljava/net/URI;Ljava/lang/String;Lsun/security/x509/DNSName;)V
sun::security::x509::URIName::URIName(std::shared_ptr<java::net::URI> uri,std::shared_ptr<java::lang::String> host,std::shared_ptr<sun::security::x509::DNSName> hostDNS)
{
	
	//    .param p1, "uri"    # Ljava/net/URI;
	//    .param p2, "host"    # Ljava/lang/String;
	//    .param p3, "hostDNS"    # Lsun/security/x509/DNSName;
	// 276    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->uri = uri;
	this->host = host;
	this->hostDNS = hostDNS;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::URIName::URIName(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 295        value = {
	// 296            Ljava/io/IOException;
	// 297        }
	// 298    .end annotation
	sun::security::x509::URIName::(derValue->getIA5String());
	return;

}
// .method public static nameConstraint(Lsun/security/util/DerValue;)Lsun/security/x509/URIName;
std::shared_ptr<sun::security::x509::URIName> sun::security::x509::URIName::nameConstraint(std::shared_ptr<sun::security::util::DerValue> value)
{
	
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::net::URI> uri;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::String> host;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<sun::security::x509::DNSName> hostDNS;
	std::shared_ptr<sun::security::x509::URIName> cVar0;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p0, "value"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 316        value = {
	// 317            Ljava/io/IOException;
	// 318        }
	// 319    .end annotation
	name = value->getIA5String();
	//    .local v3, "name":Ljava/lang/String;
	try {
	//label_try_start_4:
	uri = std::make_shared<java::net::URI>(name);
	//label_try_end_9:
	}
	catch (java::net::URISyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/net/URISyntaxException; {:try_start_4 .. :try_end_9} :catch_2c
	//    .local v4, "uri":Ljava/net/URI;
	if ( uri->getScheme() )     
		goto label_cond_68;
	host = uri->getSchemeSpecificPart();
	//    .local v0, "host":Ljava/lang/String;
	try {
	//label_try_start_13:
	if ( !(host->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))) )  
		goto label_cond_47;
	hostDNS = std::make_shared<sun::security::x509::DNSName>(host->substring(0x1));
	//    .local v1, "hostDNS":Lsun/security/x509/DNSName;
label_goto_26:
	cVar0 = std::make_shared<sun::security::x509::URIName>(uri, host, hostDNS);
	//label_try_end_2b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4d;
	}
	//    .catch Ljava/io/IOException; {:try_start_13 .. :try_end_2b} :catch_4d
	return cVar0;
	// 382    .line 161
	// 383    .end local v0    # "host":Ljava/lang/String;
	// 384    .end local v1    # "hostDNS":Lsun/security/x509/DNSName;
	// 385    .end local v4    # "uri":Ljava/net/URI;
label_catch_2c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v5, "use":Ljava/net/URISyntaxException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid URI name constraint:")))->append(name)->toString(), getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 415    .line 171
	// 416    .end local v5    # "use":Ljava/net/URISyntaxException;
	// 417    .restart local v0    # "host":Ljava/lang/String;
	// 418    .restart local v4    # "uri":Ljava/net/URI;
label_cond_47:
	try {
	//label_try_start_47:
	hostDNS = std::make_shared<sun::security::x509::DNSName>(host);
	//label_try_end_4c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4d;
	}
	//    .catch Ljava/io/IOException; {:try_start_47 .. :try_end_4c} :catch_4d
	//    .restart local v1    # "hostDNS":Lsun/security/x509/DNSName;
	goto label_goto_26;
	// 430    .line 174
	// 431    .end local v1    # "hostDNS":Lsun/security/x509/DNSName;
label_catch_4d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "ioe":Ljava/io/IOException;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::io::IOException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid URI name constraint:")))->append(name)->toString(), getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 461    .line 178
	// 462    .end local v0    # "host":Ljava/lang/String;
	// 463    .end local v2    # "ioe":Ljava/io/IOException;
label_cond_68:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::io::IOException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid URI name constraint (should not include scheme):")))->append(name)->toString());
	// throw
	throw cVar5;

}
// .method public constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::URIName::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName)
{
	
	int cVar0;
	int cVar1;
	int constraintType;
	std::shared_ptr<sun::security::x509::URIName> cVar2;
	std::shared_ptr<java::lang::String> otherHost;
	std::shared_ptr<sun::security::x509::DNSName> otherHostObject;
	int thisDomain;
	int otherDomain;
	std::shared_ptr<sun::security::x509::DNSName> otherDNS;
	
	//    .param p1, "inputName"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 496        value = {
	// 497            Ljava/lang/UnsupportedOperationException;
	// 498        }
	// 499    .end annotation
	cVar0 = 0x2e;
	cVar1 = 0x0;
	if ( inputName )     
		goto label_cond_7;
	constraintType = -0x1;
	//    .end local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
	//    .local v0, "constraintType":I
label_cond_6:
label_goto_6:
	return constraintType;
	// 519    .line 322
	// 520    .end local v0    # "constraintType":I
	// 521    .restart local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
label_cond_7:
	if ( inputName->getType() == 0x6 )
		goto label_cond_10;
	constraintType = -0x1;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 537    .end local v0    # "constraintType":I
label_cond_10:
	cVar2 = inputName;
	cVar2->checkCast("sun::security::x509::URIName");
	otherHost = cVar2->getHost();
	//    .local v3, "otherHost":Ljava/lang/String;
	if ( !(otherHost->equalsIgnoreCase(this->host)) )  
		goto label_cond_21;
	constraintType = 0x0;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 564    .line 335
	// 565    .end local v0    # "constraintType":I
label_cond_21:
	inputName->checkCast("sun::security::x509::URIName");
	//    .end local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
	otherHostObject = inputName->getHostObject();
	//    .local v4, "otherHostObject":Ljava/lang/Object;
	if ( !(this->hostDNS) )  
		goto label_cond_31;
	if ( !(( otherHostObject->instanceOf("sun::security::x509::DNSName") ^ 0x1)) )  
		goto label_cond_33;
label_cond_31:
	constraintType = 0x3;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 595    .line 343
	// 596    .end local v0    # "constraintType":I
label_cond_33:
	if ( this->host->charAt(cVar1) != cVar0 )
		goto label_cond_61;
	thisDomain = 0x1;
	//    .local v5, "thisDomain":Z
label_goto_3c:
	if ( otherHost->charAt(cVar1) != cVar0 )
		goto label_cond_63;
	otherDomain = 0x1;
	//    .local v2, "otherDomain":Z
label_goto_43:
	otherDNS = otherHostObject;
	otherDNS->checkCast("sun::security::x509::DNSName");
	//    .local v1, "otherDNS":Lsun/security/x509/DNSName;
	constraintType = this->hostDNS->constrains(otherDNS);
	//    .restart local v0    # "constraintType":I
	if ( thisDomain )     
		goto label_cond_59;
	if ( !(( otherDomain ^ 0x1)) )  
		goto label_cond_59;
	if ( constraintType == 0x2 )
		goto label_cond_58;
	if ( constraintType != 0x1 )
		goto label_cond_59;
label_cond_58:
	constraintType = 0x3;
label_cond_59:
	if ( thisDomain == otherDomain )
		goto label_cond_6;
	if ( constraintType )     
		goto label_cond_6;
	if ( !(thisDomain) )  
		goto label_cond_65;
	constraintType = 0x2;
	goto label_goto_6;
	// 671    .line 343
	// 672    .end local v0    # "constraintType":I
	// 673    .end local v1    # "otherDNS":Lsun/security/x509/DNSName;
	// 674    .end local v2    # "otherDomain":Z
	// 675    .end local v5    # "thisDomain":Z
label_cond_61:
	thisDomain = 0x0;
	//    .restart local v5    # "thisDomain":Z
	goto label_goto_3c;
	// 682    .line 344
label_cond_63:
	//    .restart local v2    # "otherDomain":Z
	goto label_goto_43;
	// 689    .line 366
	// 690    .restart local v0    # "constraintType":I
	// 691    .restart local v1    # "otherDNS":Lsun/security/x509/DNSName;
label_cond_65:
	constraintType = 0x1;
	goto label_goto_6;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::URIName::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 702        value = {
	// 703            Ljava/io/IOException;
	// 704        }
	// 705    .end annotation
	out->putIA5String(this->uri->toASCIIString());
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::URIName::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::x509::URIName> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 734    .line 223
label_cond_4:
	if ( obj->instanceOf("sun::security::x509::URIName") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::URIName");
	//    .local v0, "other":Lsun/security/x509/URIName;
	return this->uri->equals(other->getURI());

}
// .method public getHost()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::URIName::getHost()
{
	
	return this->host;

}
// .method public getHostObject()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::URIName::getHostObject()
{
	
	if ( !(this->hostIP) )  
		goto label_cond_7;
	return this->hostIP;
	// 790    .line 275
label_cond_7:
	return this->hostDNS;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::URIName::getName()
{
	
	return this->uri->toString();

}
// .method public getScheme()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::URIName::getScheme()
{
	
	return this->uri->getScheme();

}
// .method public getType()I
int sun::security::x509::URIName::getType()
{
	
	return 0x6;

}
// .method public getURI()Ljava/net/URI;
std::shared_ptr<java::net::URI> sun::security::x509::URIName::getURI()
{
	
	return this->uri;

}
// .method public hashCode()I
int sun::security::x509::URIName::hashCode()
{
	
	return this->uri->hashCode();

}
// .method public subtreeDepth()I
int sun::security::x509::URIName::subtreeDepth()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<sun::security::x509::DNSName> dnsName;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 862        value = {
	// 863            Ljava/lang/UnsupportedOperationException;
	// 864        }
	// 865    .end annotation
	0x0;
	//    .local v0, "dnsName":Lsun/security/x509/DNSName;
	try {
	//label_try_start_1:
	//    .end local v0    # "dnsName":Lsun/security/x509/DNSName;
	dnsName = std::make_shared<sun::security::x509::DNSName>(this->host);
	//label_try_end_8:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_8} :catch_d
	//    .local v0, "dnsName":Lsun/security/x509/DNSName;
	return dnsName->subtreeDepth();
	// 891    .line 387
	// 892    .end local v0    # "dnsName":Lsun/security/x509/DNSName;
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "ioe":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::URIName::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("URIName: ")))->append(this->uri->toString())->toString();

}


