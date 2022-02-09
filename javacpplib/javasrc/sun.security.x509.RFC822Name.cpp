// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\RFC822Name.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Locale.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.RFC822Name.h"

// .method public constructor <init>(Ljava/lang/String;)V
sun::security::x509::RFC822Name::RFC822Name(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 018        value = {
	// 019            Ljava/io/IOException;
	// 020        }
	// 021    .end annotation
	// 025    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->parseName(name);
	this->name = name;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::RFC822Name::RFC822Name(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 041        value = {
	// 042            Ljava/io/IOException;
	// 043        }
	// 044    .end annotation
	// 048    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = derValue->getIA5String();
	this->parseName(this->name);
	return;

}
// .method public constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::RFC822Name::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> inName;
	std::shared_ptr<java::lang::Object> thisName;
	
	//    .param p1, "inputName"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 072        value = {
	// 073            Ljava/lang/UnsupportedOperationException;
	// 074        }
	// 075    .end annotation
	cVar0 = -0x1;
	cVar1 = 0x40;
	if ( inputName )     
		goto label_cond_7;
	//    .end local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
	//    .local v0, "constraintType":I
label_goto_6:
	return constraintType;
	// 094    .line 187
	// 095    .end local v0    # "constraintType":I
	// 096    .restart local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
label_cond_7:
	if ( inputName->getType() == 0x1 )
		goto label_cond_10;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 112    .line 192
	// 113    .end local v0    # "constraintType":I
label_cond_10:
	inputName->checkCast("sun::security::x509::RFC822Name");
	//    .end local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
	inName = inputName->getName()->toLowerCase(java::util::Locale::ENGLISH);
	//    .local v1, "inName":Ljava/lang/String;
	thisName = this->name->toLowerCase(java::util::Locale::ENGLISH);
	//    .local v4, "thisName":Ljava/lang/String;
	if ( !(inName->equals(thisName)) )  
		goto label_cond_2c;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 152    .line 196
	// 153    .end local v0    # "constraintType":I
label_cond_2c:
	if ( !(thisName->endsWith(inName)) )  
		goto label_cond_55;
	if ( inName->indexOf(cVar1) == cVar0 )
		goto label_cond_3a;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 174    .line 200
	// 175    .end local v0    # "constraintType":I
label_cond_3a:
	if ( !(inName->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))) )  
		goto label_cond_45;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 191    .line 203
	// 192    .end local v0    # "constraintType":I
label_cond_45:
	//    .local v2, "inNdx":I
	if ( thisName->charAt(( thisName->lastIndexOf(inName) + -0x1)) != cVar1 )
		goto label_cond_53;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 214    .line 207
	// 215    .end local v0    # "constraintType":I
label_cond_53:
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 222    .line 210
	// 223    .end local v0    # "constraintType":I
	// 224    .end local v2    # "inNdx":I
label_cond_55:
	if ( !(inName->endsWith(thisName)) )  
		goto label_cond_7e;
	if ( thisName->indexOf(cVar1) == cVar0 )
		goto label_cond_63;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 245    .line 214
	// 246    .end local v0    # "constraintType":I
label_cond_63:
	if ( !(thisName->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))) )  
		goto label_cond_6e;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 262    .line 217
	// 263    .end local v0    # "constraintType":I
label_cond_6e:
	//    .local v3, "ndx":I
	if ( inName->charAt(( inName->lastIndexOf(thisName) + -0x1)) != cVar1 )
		goto label_cond_7c;
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 285    .line 221
	// 286    .end local v0    # "constraintType":I
label_cond_7c:
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;
	// 293    .line 225
	// 294    .end local v0    # "constraintType":I
	// 295    .end local v3    # "ndx":I
label_cond_7e:
	//    .restart local v0    # "constraintType":I
	goto label_goto_6;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::RFC822Name::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 307        value = {
	// 308            Ljava/io/IOException;
	// 309        }
	// 310    .end annotation
	out->putIA5String(this->name);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::RFC822Name::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::x509::RFC822Name> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 335    .line 140
label_cond_4:
	if ( obj->instanceOf("sun::security::x509::RFC822Name") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::RFC822Name");
	//    .local v0, "other":Lsun/security/x509/RFC822Name;
	return this->name->equalsIgnoreCase(other->name);

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::RFC822Name::getName()
{
	
	return this->name;

}
// .method public getType()I
int sun::security::x509::RFC822Name::getType()
{
	
	return 0x1;

}
// .method public hashCode()I
int sun::security::x509::RFC822Name::hashCode()
{
	
	return this->name->toUpperCase(java::util::Locale::ENGLISH)->hashCode();

}
// .method public parseName(Ljava/lang/String;)V
void sun::security::x509::RFC822Name::parseName(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::String> domain;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 409        value = {
	// 410            Ljava/io/IOException;
	// 411        }
	// 412    .end annotation
	if ( !(name) )  
		goto label_cond_8;
	if ( name->length() )     
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC822Name may not be null or empty")));
	// throw
	throw cVar0;
	// 434    .line 86
label_cond_11:
	domain = name->substring(( name->indexOf(0x40) + 0x1));
	//    .local v0, "domain":Ljava/lang/String;
	if ( domain->length() )     
		goto label_cond_2c;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC822Name may not end with @")));
	// throw
	throw cVar1;
	// 465    .line 92
label_cond_2c:
	if ( !(domain->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))) )  
		goto label_cond_45;
	if ( domain->length() != 0x1 )
		goto label_cond_45;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC822Name domain may not be just .")));
	// throw
	throw cVar2;
	// 493    .line 97
label_cond_45:
	return;

}
// .method public subtreeDepth()I
int sun::security::x509::RFC822Name::subtreeDepth()
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> subtree;
	int i;
	int atNdx;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 501        value = {
	// 502            Ljava/lang/UnsupportedOperationException;
	// 503        }
	// 504    .end annotation
	cVar0 = 0x2e;
	subtree = this->name;
	//    .local v2, "subtree":Ljava/lang/String;
	i = 0x1;
	//    .local v1, "i":I
	atNdx = subtree->lastIndexOf(0x40);
	//    .local v0, "atNdx":I
	if ( atNdx < 0 ) 
		goto label_cond_15;
	i = 0x2;
	subtree = subtree->substring(( atNdx + 0x1));
label_cond_15:
label_goto_15:
	if ( subtree->lastIndexOf(cVar0) < 0 ) 
		goto label_cond_26;
	subtree = subtree->substring(0x0, subtree->lastIndexOf(cVar0));
	i = ( i + 0x1);
	goto label_goto_15;
	// 563    .line 254
label_cond_26:
	return i;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::RFC822Name::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC822Name: ")))->append(this->name)->toString();

}


