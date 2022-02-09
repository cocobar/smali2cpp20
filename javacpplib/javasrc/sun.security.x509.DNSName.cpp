// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\DNSName.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Locale.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.DNSName.h"
#include "sun.security.x509.GeneralNameInterface.h"

static sun::security::x509::DNSName::alpha = std::make_shared<java::lang::String>("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
static sun::security::x509::DNSName::alphaDigitsAndHyphen = std::make_shared<java::lang::String>("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-");
static sun::security::x509::DNSName::digitsAndHyphen = std::make_shared<java::lang::String>("0123456789-");
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::x509::DNSName::DNSName(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	int startIndex;
	int endIndex;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	int nonStartIndex;
	std::shared_ptr<java::io::IOException> cVar6;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 026        value = {
	// 027            Ljava/io/IOException;
	// 028        }
	// 029    .end annotation
	cVar0 = 0x2e;
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(name) )  
		goto label_cond_e;
	if ( name->length() )     
		goto label_cond_17;
label_cond_e:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DNS name must not be null")));
	// throw
	throw cVar1;
	// 058    .line 77
label_cond_17:
	if ( name->indexOf(0x20) == -0x1 )
		goto label_cond_29;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DNS names or NameConstraints with blank components are not permitted")));
	// throw
	throw cVar2;
	// 079    .line 79
label_cond_29:
	if ( name->charAt(0x0) == cVar0 )
		goto label_cond_3b;
	if ( name->charAt(( name->length() + -0x1)) != cVar0 )
		goto label_cond_44;
label_cond_3b:
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DNS names or NameConstraints may not begin or end with a .")));
	// throw
	throw cVar3;
	// 109    .line 84
label_cond_44:
	startIndex = 0x0;
	//    .local v2, "startIndex":I
label_goto_45:
	if ( startIndex >= name->length() )
		goto label_cond_99;
	endIndex = name->indexOf(cVar0, startIndex);
	//    .local v0, "endIndex":I
	if ( endIndex >= 0 )
		goto label_cond_55;
	endIndex = name->length();
label_cond_55:
	if ( (endIndex - startIndex) >= 0x1 )
		goto label_cond_63;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DNSName SubjectAltNames with empty components are not permitted")));
	// throw
	throw cVar4;
	// 152    .line 93
label_cond_63:
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"))->indexOf(name->charAt(startIndex)) >= 0 )
		goto label_cond_79;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DNSName components must begin with a letter")));
	// throw
	throw cVar5;
	// 175    .line 96
label_cond_79:
	nonStartIndex = ( startIndex + 0x1);
	//    .local v1, "nonStartIndex":I
label_goto_7b:
	if ( nonStartIndex >= endIndex )
		goto label_cond_96;
	//    .local v3, "x":C
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-"))->indexOf(name->charAt(nonStartIndex)) >= 0 )
		goto label_cond_93;
	cVar6 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DNSName components must consist of letters, digits, and hyphens")));
	// throw
	throw cVar6;
	// 207    .line 96
label_cond_93:
	nonStartIndex = ( nonStartIndex + 0x1);
	goto label_goto_7b;
	// 213    .line 84
	// 214    .end local v3    # "x":C
label_cond_96:
	startIndex = ( endIndex + 0x1);
	goto label_goto_45;
	// 220    .line 102
	// 221    .end local v0    # "endIndex":I
	// 222    .end local v1    # "nonStartIndex":I
label_cond_99:
	this->name = name;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::DNSName::DNSName(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 234        value = {
	// 235            Ljava/io/IOException;
	// 236        }
	// 237    .end annotation
	// 241    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = derValue->getIA5String();
	return;

}
// .method public constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::DNSName::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> inName;
	std::shared_ptr<java::lang::Object> thisName;
	
	//    .param p1, "inputName"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 260        value = {
	// 261            Ljava/lang/UnsupportedOperationException;
	// 262        }
	// 263    .end annotation
	cVar0 = 0x2e;
	if ( inputName )     
		goto label_cond_6;
	//    .end local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
	//    .local v0, "constraintType":I
label_goto_5:
	return constraintType;
	// 280    .line 199
	// 281    .end local v0    # "constraintType":I
	// 282    .restart local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
label_cond_6:
	if ( inputName->getType() == 0x2 )
		goto label_cond_f;
	//    .restart local v0    # "constraintType":I
	goto label_goto_5;
	// 298    .line 203
	// 299    .end local v0    # "constraintType":I
label_cond_f:
	inputName->checkCast("sun::security::x509::DNSName");
	//    .end local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
	inName = inputName->getName()->toLowerCase(java::util::Locale::ENGLISH);
	//    .local v1, "inName":Ljava/lang/String;
	thisName = this->name->toLowerCase(java::util::Locale::ENGLISH);
	//    .local v4, "thisName":Ljava/lang/String;
	if ( !(inName->equals(thisName)) )  
		goto label_cond_2b;
	//    .restart local v0    # "constraintType":I
	goto label_goto_5;
	// 338    .line 207
	// 339    .end local v0    # "constraintType":I
label_cond_2b:
	if ( !(thisName->endsWith(inName)) )  
		goto label_cond_41;
	//    .local v2, "inNdx":I
	if ( thisName->charAt(( thisName->lastIndexOf(inName) + -0x1)) != cVar0 )
		goto label_cond_3f;
	//    .restart local v0    # "constraintType":I
	goto label_goto_5;
	// 368    .line 212
	// 369    .end local v0    # "constraintType":I
label_cond_3f:
	//    .restart local v0    # "constraintType":I
	goto label_goto_5;
	// 376    .line 213
	// 377    .end local v0    # "constraintType":I
	// 378    .end local v2    # "inNdx":I
label_cond_41:
	if ( !(inName->endsWith(thisName)) )  
		goto label_cond_57;
	//    .local v3, "ndx":I
	if ( inName->charAt(( inName->lastIndexOf(thisName) + -0x1)) != cVar0 )
		goto label_cond_55;
	//    .restart local v0    # "constraintType":I
	goto label_goto_5;
	// 407    .line 218
	// 408    .end local v0    # "constraintType":I
label_cond_55:
	//    .restart local v0    # "constraintType":I
	goto label_goto_5;
	// 415    .line 220
	// 416    .end local v0    # "constraintType":I
	// 417    .end local v3    # "ndx":I
label_cond_57:
	//    .restart local v0    # "constraintType":I
	goto label_goto_5;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::DNSName::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 429        value = {
	// 430            Ljava/io/IOException;
	// 431        }
	// 432    .end annotation
	out->putIA5String(this->name);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::DNSName::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::x509::DNSName> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 457    .line 146
label_cond_4:
	if ( obj->instanceOf("sun::security::x509::DNSName") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::DNSName");
	//    .local v0, "other":Lsun/security/x509/DNSName;
	return this->name->equalsIgnoreCase(other->name);

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::DNSName::getName()
{
	
	return this->name;

}
// .method public getType()I
int sun::security::x509::DNSName::getType()
{
	
	return 0x2;

}
// .method public hashCode()I
int sun::security::x509::DNSName::hashCode()
{
	
	return this->name->toUpperCase(java::util::Locale::ENGLISH)->hashCode();

}
// .method public subtreeDepth()I
int sun::security::x509::DNSName::subtreeDepth()
{
	
	int cVar0;
	int sum;
	int i;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 530        value = {
	// 531            Ljava/lang/UnsupportedOperationException;
	// 532        }
	// 533    .end annotation
	cVar0 = 0x2e;
	sum = 0x1;
	//    .local v1, "sum":I
	i = this->name->indexOf(cVar0);
	//    .local v0, "i":I
label_goto_9:
	if ( i < 0 ) 
		goto label_cond_16;
	sum = ( sum + 0x1);
	i = this->name->indexOf(cVar0, ( i + 0x1));
	goto label_goto_9;
	// 567    .line 243
label_cond_16:
	return sum;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::DNSName::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DNSName: ")))->append(this->name)->toString();

}


