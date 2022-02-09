// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralSubtree.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralSubtree.h"

static sun::security::x509::GeneralSubtree::MIN_DEFAULT = 0x0;
static sun::security::x509::GeneralSubtree::TAG_MAX = 0x1t;
static sun::security::x509::GeneralSubtree::TAG_MIN;
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::GeneralSubtree::GeneralSubtree(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	unsigned char cVar0;
	bool cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<sun::security::x509::GeneralName> cVar5;
	std::shared_ptr<sun::security::util::DerValue> opt;
	std::shared_ptr<java::io::IOException> cVar6;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 029        value = {
	// 030            Ljava/io/IOException;
	// 031        }
	// 032    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = -0x1;
	cVar3 = 0x0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->minimum = cVar3;
	this->maximum = cVar2;
	this->myhash = cVar2;
	if ( val->tag == 0x30 )
		goto label_cond_1c;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for GeneralSubtree.")));
	// throw
	throw cVar4;
	// 071    .line 78
label_cond_1c:
	cVar5 = std::make_shared<sun::security::x509::GeneralName>(val->data->getDerValue(), cVar1);
	this->name = cVar5;
label_goto_29:
	if ( !(val->data->available()) )  
		goto label_cond_70;
	opt = val->data->getDerValue();
	//    .local v0, "opt":Lsun/security/util/DerValue;
	if ( !(opt->isContextSpecific(cVar3)) )  
		goto label_cond_4f;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_4f;
	opt->resetTag(cVar0);
	this->minimum = opt->getInteger();
	goto label_goto_29;
	// 130    .line 90
label_cond_4f:
	if ( !(opt->isContextSpecific(cVar1)) )  
		goto label_cond_67;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_67;
	opt->resetTag(cVar0);
	this->maximum = opt->getInteger();
	goto label_goto_29;
	// 158    .line 94
label_cond_67:
	cVar6 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of GeneralSubtree.")));
	// throw
	throw cVar6;
	// 168    .line 96
	// 169    .end local v0    # "opt":Lsun/security/util/DerValue;
label_cond_70:
	return;

}
// .method public constructor <init>(Lsun/security/x509/GeneralName;II)V
sun::security::x509::GeneralSubtree::GeneralSubtree(std::shared_ptr<sun::security::x509::GeneralName> name,int min,int max)
{
	
	int cVar0;
	
	//    .param p1, "name"    # Lsun/security/x509/GeneralName;
	//    .param p2, "min"    # I
	//    .param p3, "max"    # I
	cVar0 = -0x1;
	// 184    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->minimum = 0x0;
	this->maximum = cVar0;
	this->myhash = cVar0;
	this->name = name;
	this->minimum = min;
	this->maximum = max;
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::GeneralSubtree::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	unsigned char cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 216        value = {
	// 217            Ljava/io/IOException;
	// 218        }
	// 219    .end annotation
	cVar0 = -0x80;
	cVar1 = 0x0;
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "seq":Lsun/security/util/DerOutputStream;
	this->name->encode(seq);
	if ( !(this->minimum) )  
		goto label_cond_22;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	tmp->putInteger(this->minimum);
	seq->writeImplicit(sun::security::util::DerValue::createTag(cVar0, cVar1, cVar1), tmp);
	//    .end local v1    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_22:
	if ( this->maximum == -0x1 )
		goto label_cond_39;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v1    # "tmp":Lsun/security/util/DerOutputStream;
	tmp->putInteger(this->maximum);
	seq->writeImplicit(sun::security::util::DerValue::createTag(cVar0, cVar1, 0x1), tmp);
	//    .end local v1    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_39:
	out->write(0x30, seq);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::GeneralSubtree::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<sun::security::x509::GeneralSubtree> otherGS;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( other->instanceOf("sun::security::x509::GeneralSubtree") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	otherGS = other;
	otherGS->checkCast("sun::security::x509::GeneralSubtree");
	//    .local v0, "otherGS":Lsun/security/x509/GeneralSubtree;
	if ( this->name )     
		goto label_cond_12;
	if ( !(otherGS->name) )  
		goto label_cond_1d;
	return cVar0;
	// 336    .line 156
label_cond_12:
	if ( this->name->equals(otherGS->name) )     
		goto label_cond_1d;
	return cVar0;
	// 351    .line 159
label_cond_1d:
	if ( this->minimum == otherGS->minimum )
		goto label_cond_24;
	return cVar0;
	// 362    .line 161
label_cond_24:
	if ( this->maximum == otherGS->maximum )
		goto label_cond_2b;
	return cVar0;
	// 373    .line 163
label_cond_2b:
	return 0x1;

}
// .method public getMaximum()I
int sun::security::x509::GeneralSubtree::getMaximum()
{
	
	return this->maximum;

}
// .method public getMinimum()I
int sun::security::x509::GeneralSubtree::getMinimum()
{
	
	return this->minimum;

}
// .method public getName()Lsun/security/x509/GeneralName;
std::shared_ptr<sun::security::x509::GeneralName> sun::security::x509::GeneralSubtree::getName()
{
	
	return this->name;

}
// .method public hashCode()I
int sun::security::x509::GeneralSubtree::hashCode()
{
	
	int cVar0;
	
	cVar0 = -0x1;
	if ( this->myhash != cVar0 )
		goto label_cond_34;
	this->myhash = 0x11;
	if ( !(this->name) )  
		goto label_cond_1a;
	this->myhash = (( this->myhash * 0x25) +  this->name->hashCode());
label_cond_1a:
	if ( !(this->minimum) )  
		goto label_cond_27;
	this->myhash = (( this->myhash * 0x25) +  this->minimum);
label_cond_27:
	if ( this->maximum == cVar0 )
		goto label_cond_34;
	this->myhash = (( this->myhash * 0x25) +  this->maximum);
label_cond_34:
	return this->myhash;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::GeneralSubtree::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( this->name )     
		goto label_cond_56;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_13:
	s = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n   GeneralSubtree: [\n    GeneralName: ")))->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n    Minimum: ")))->append(this->minimum)->toString();
	//    .local v0, "s":Ljava/lang/String;
	if ( this->maximum != -0x1 )
		goto label_cond_5d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	s = cVar2->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\t    Maximum: undefined")))->toString();
label_goto_41:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	s = cVar3->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("    ]\n")))->toString();
	return s;
	// 585    .line 131
	// 586    .end local v0    # "s":Ljava/lang/String;
label_cond_56:
	cVar1 = this->name->toString();
	goto label_goto_13;
	// 596    .line 136
	// 597    .restart local v0    # "s":Ljava/lang/String;
label_cond_5d:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	s = cVar5->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\t    Maximum: ")))->append(this->maximum)->toString();
	goto label_goto_41;

}


