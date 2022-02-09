// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\URICertStore$URICertStoreParameters.smali
#include "java2ctype.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.InternalError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.URI.h"
#include "sun.security.provider.certpath.URICertStore_S_URICertStoreParameters.h"

// .method static synthetic -get0(Lsun/security/provider/certpath/URICertStore$URICertStoreParameters;)Ljava/net/URI;
std::shared_ptr<java::net::URI> sun::security::provider::certpath::URICertStore_S_URICertStoreParameters::_get0(std::shared_ptr<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters> _this)
{
	
	//    .param p0, "-this"    # Lsun/security/provider/certpath/URICertStore$URICertStoreParameters;
	return _this->uri;

}
// .method constructor <init>(Ljava/net/URI;)V
sun::security::provider::certpath::URICertStore_S_URICertStoreParameters::URICertStore_S_URICertStoreParameters(std::shared_ptr<java::net::URI> uri)
{
	
	//    .param p1, "uri"    # Ljava/net/URI;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hashCode = 0x0;
	this->uri = uri;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::provider::certpath::URICertStore_S_URICertStoreParameters::clone()
{
	
	std::shared_ptr<java::lang::CloneNotSupportedException> e;
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_3} :catch_5
	return this->clone();
	// 073    .line 475
label_catch_5:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<java::lang::InternalError>(e->toString(), e);
	// throw
	throw cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::provider::certpath::URICertStore_S_URICertStoreParameters::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters> params;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( obj->instanceOf("sun::security::provider::certpath::URICertStore_S_URICertStoreParameters") )     
		goto label_cond_6;
	return 0x0;
label_cond_6:
	params = obj;
	params->checkCast("sun::security::provider::certpath::URICertStore_S_URICertStoreParameters");
	//    .local v0, "params":Lsun/security/provider/certpath/URICertStore$URICertStoreParameters;
	return this->uri->equals(params->uri);

}
// .method public hashCode()I
int sun::security::provider::certpath::URICertStore_S_URICertStoreParameters::hashCode()
{
	
	if ( this->hashCode )     
		goto label_cond_10;
	0x11;
	//    .local v0, "result":I
	this->hashCode = ( this->uri->hashCode() + 0x275);
	//    .end local v0    # "result":I
label_cond_10:
	return this->hashCode;

}


