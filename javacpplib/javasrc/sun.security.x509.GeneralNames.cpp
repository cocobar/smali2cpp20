// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralNames.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNames.h"

// .method public constructor <init>()V
sun::security::x509::GeneralNames::GeneralNames()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	// 025    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->names = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::GeneralNames::GeneralNames(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<sun::security::x509::GeneralName> name;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 042        value = {
	// 043            Ljava/io/IOException;
	// 044        }
	// 045    .end annotation
	// 049    invoke-direct {p0}, Lsun/security/x509/GeneralNames;-><init>()V
	if ( derVal->tag == 0x30 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for GeneralNames.")));
	// throw
	throw cVar0;
	// 067    .line 60
label_cond_12:
	if ( derVal->data->available() )     
		goto label_cond_23;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No data available in passed DER encoded value.")));
	// throw
	throw cVar1;
	// 086    .line 65
label_cond_23:
label_goto_23:
	if ( !(derVal->data->available()) )  
		goto label_cond_3a;
	//    .local v0, "encName":Lsun/security/util/DerValue;
	name = std::make_shared<sun::security::x509::GeneralName>(derVal->data->getDerValue());
	//    .local v1, "name":Lsun/security/x509/GeneralName;
	this->add(name);
	goto label_goto_23;
	// 116    .line 71
	// 117    .end local v0    # "encName":Lsun/security/util/DerValue;
	// 118    .end local v1    # "name":Lsun/security/x509/GeneralName;
label_cond_3a:
	return;

}
// .method public add(Lsun/security/x509/GeneralName;)Lsun/security/x509/GeneralNames;
std::shared_ptr<sun::security::x509::GeneralNames> sun::security::x509::GeneralNames::add(std::shared_ptr<sun::security::x509::GeneralName> name)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "name"    # Lsun/security/x509/GeneralName;
	if ( name )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 140    .line 84
label_cond_8:
	this->names->add(name);
	return this;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::GeneralNames::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> temp;
	std::shared_ptr<java::util::Iterator> gn_S_iterator;
	std::shared_ptr<sun::security::x509::GeneralName> gn;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 154        value = {
	// 155            Ljava/io/IOException;
	// 156        }
	// 157    .end annotation
	if ( !(this->isEmpty()) )  
		goto label_cond_7;
	return;
	// 170    .line 119
label_cond_7:
	temp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "temp":Lsun/security/util/DerOutputStream;
	gn_S_iterator = this->names->iterator();
	//    .local v1, "gn$iterator":Ljava/util/Iterator;
label_goto_12:
	if ( !(gn_S_iterator->hasNext()) )  
		goto label_cond_22;
	gn = gn_S_iterator->next();
	gn->checkCast("sun::security::x509::GeneralName");
	//    .local v0, "gn":Lsun/security/x509/GeneralName;
	gn->encode(temp);
	goto label_goto_12;
	// 204    .line 123
	// 205    .end local v0    # "gn":Lsun/security/x509/GeneralName;
label_cond_22:
	out->write(0x30, temp);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::GeneralNames::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::x509::GeneralNames> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 228    .line 135
label_cond_4:
	if ( obj->instanceOf("sun::security::x509::GeneralNames") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::GeneralNames");
	//    .local v0, "other":Lsun/security/x509/GeneralNames;
	return this->names->equals(other->names);

}
// .method public get(I)Lsun/security/x509/GeneralName;
std::shared_ptr<sun::security::x509::GeneralName> sun::security::x509::GeneralNames::get(int index)
{
	
	std::shared_ptr<sun::security::x509::GeneralName> cVar0;
	
	//    .param p1, "index"    # I
	cVar0 = this->names->get(index);
	cVar0->checkCast("sun::security::x509::GeneralName");
	return cVar0;

}
// .method public hashCode()I
int sun::security::x509::GeneralNames::hashCode()
{
	
	return this->names->hashCode();

}
// .method public isEmpty()Z
bool sun::security::x509::GeneralNames::isEmpty()
{
	
	return this->names->isEmpty();

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<sun::security::x509::GeneralName>> sun::security::x509::GeneralNames::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 306        value = {
	// 307            "()",
	// 308            "Ljava/util/Iterator",
	// 309            "<",
	// 310            "Lsun/security/x509/GeneralName;",
	// 311            ">;"
	// 312        }
	// 313    .end annotation
	return this->names->iterator();

}
// .method public names()Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::GeneralName>> sun::security::x509::GeneralNames::names()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 329        value = {
	// 330            "()",
	// 331            "Ljava/util/List",
	// 332            "<",
	// 333            "Lsun/security/x509/GeneralName;",
	// 334            ">;"
	// 335        }
	// 336    .end annotation
	return this->names;

}
// .method public size()I
int sun::security::x509::GeneralNames::size()
{
	
	return this->names->size();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::GeneralNames::toString()
{
	
	return this->names->toString();

}


