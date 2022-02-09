// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X509AttributeName.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.X509AttributeName.h"

static sun::security::x509::X509AttributeName::SEPARATOR = '.';
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::x509::X509AttributeName::X509AttributeName(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	int i;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 027    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->prefix = cVar0;
	this->suffix = cVar0;
	i = name->indexOf(0x2e);
	//    .local v0, "i":I
	if ( i >= 0 )
		goto label_cond_14;
	this->prefix = name;
label_goto_13:
	return;
	// 053    .line 53
label_cond_14:
	this->prefix = name->substring(0x0, i);
	this->suffix = name->substring(( i + 0x1));
	goto label_goto_13;

}
// .method public getPrefix()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509AttributeName::getPrefix()
{
	
	return this->prefix;

}
// .method public getSuffix()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509AttributeName::getSuffix()
{
	
	return this->suffix;

}


