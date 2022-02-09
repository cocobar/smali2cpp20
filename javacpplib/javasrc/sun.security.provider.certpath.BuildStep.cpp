// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\BuildStep.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.X509Certificate.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.BuildStep.h"
#include "sun.security.provider.certpath.Vertex.h"

static sun::security::provider::certpath::BuildStep::BACK = 0x2;
static sun::security::provider::certpath::BuildStep::FAIL = 0x4;
static sun::security::provider::certpath::BuildStep::FOLLOW = 0x3;
static sun::security::provider::certpath::BuildStep::POSSIBLE = 0x1;
static sun::security::provider::certpath::BuildStep::SUCCEED = 0x5;
// .method public constructor <init>(Lsun/security/provider/certpath/Vertex;I)V
sun::security::provider::certpath::BuildStep::BuildStep(std::shared_ptr<sun::security::provider::certpath::Vertex> vtx,int res)
{
	
	//    .param p1, "vtx"    # Lsun/security/provider/certpath/Vertex;
	//    .param p2, "res"    # I
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->vertex = vtx;
	if ( !(this->vertex) )  
		goto label_cond_19;
	this->cert = this->vertex->getCertificate();
	// throw
	this->throwable = this->vertex->getThrowable();
label_cond_19:
	this->result = res;
	return;

}
// .method public fullToString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::BuildStep::fullToString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->resultToString(this->getResult()))->append(this->vertex->toString())->toString();

}
// .method public getCertificate()Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::provider::certpath::BuildStep::getCertificate()
{
	
	return this->cert;

}
// .method public getIssuerName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::BuildStep::getIssuerName()
{
	
	return this->getIssuerName(0x0);

}
// .method public getIssuerName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::BuildStep::getIssuerName(std::shared_ptr<java::lang::String> defaultName)
{
	
	std::shared_ptr<java::lang::String> defaultName;
	
	//    .param p1, "defaultName"    # Ljava/lang/String;
	if ( this->cert )     
		goto label_cond_5;
	//    .end local p1    # "defaultName":Ljava/lang/String;
label_goto_4:
	return defaultName;
	// 150    .line 133
	// 151    .restart local p1    # "defaultName":Ljava/lang/String;
label_cond_5:
	defaultName = this->cert->getIssuerX500Principal()->toString();
	goto label_goto_4;

}
// .method public getResult()I
int sun::security::provider::certpath::BuildStep::getResult()
{
	
	return this->result;

}
// .method public getSubjectName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::BuildStep::getSubjectName()
{
	
	return this->getSubjectName(0x0);

}
// .method public getSubjectName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::BuildStep::getSubjectName(std::shared_ptr<java::lang::String> defaultName)
{
	
	std::shared_ptr<java::lang::String> defaultName;
	
	//    .param p1, "defaultName"    # Ljava/lang/String;
	if ( this->cert )     
		goto label_cond_5;
	//    .end local p1    # "defaultName":Ljava/lang/String;
label_goto_4:
	return defaultName;
	// 204    .line 160
	// 205    .restart local p1    # "defaultName":Ljava/lang/String;
label_cond_5:
	defaultName = this->cert->getSubjectX500Principal()->toString();
	goto label_goto_4;

}
// .method public getThrowable()Ljava/lang/Throwable;
std::shared_ptr<java::lang::Throwable> sun::security::provider::certpath::BuildStep::getThrowable()
{
	
	// throw
	
	return this->throwable;

}
// .method public getVertex()Lsun/security/provider/certpath/Vertex;
std::shared_ptr<sun::security::provider::certpath::Vertex> sun::security::provider::certpath::BuildStep::getVertex()
{
	
	return this->vertex;

}
// .method public resultToString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::BuildStep::resultToString(int res)
{
	
	std::shared_ptr<java::lang::String> resultString;
	
	//    .param p1, "res"    # I
	resultString = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v0, "resultString":Ljava/lang/String;
	// switch
	{
	auto item = ( res );
	if (item == 1) goto label_pswitch_a;
	if (item == 2) goto label_pswitch_e;
	if (item == 3) goto label_pswitch_12;
	if (item == 4) goto label_pswitch_16;
	if (item == 5) goto label_pswitch_1a;
	}
	resultString = std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal error: Invalid step result value.\n"));
label_goto_9:
	return resultString;
	// 259    .line 193
label_pswitch_a:
	resultString = std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate to be tried.\n"));
	goto label_goto_9;
	// 265    .line 196
label_pswitch_e:
	resultString = std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate backed out since path does not satisfy build requirements.\n"));
	goto label_goto_9;
	// 271    .line 200
label_pswitch_12:
	resultString = std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate satisfies conditions.\n"));
	goto label_goto_9;
	// 277    .line 203
label_pswitch_16:
	resultString = std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate backed out since path does not satisfy conditions.\n"));
	goto label_goto_9;
	// 283    .line 207
label_pswitch_1a:
	resultString = std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate satisfies conditions.\n"));
	goto label_goto_9;
	// 289    .line 191
	// 290    :pswitch_data_1e
	// 291    .packed-switch 0x1
	// 292        :pswitch_a
	// 293        :pswitch_e
	// 294        :pswitch_12
	// 295        :pswitch_16
	// 296        :pswitch_1a
	// 297    .end packed-switch

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::BuildStep::toString()
{
	
	std::shared_ptr<java::lang::String> out;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	out = std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal Error\n"));
	//    .local v0, "out":Ljava/lang/String;
	// switch
	{
	auto item = ( this->result );
	if (item == 1) goto label_pswitch_2a;
	if (item == 2) goto label_pswitch_c;
	if (item == 3) goto label_pswitch_2a;
	if (item == 4) goto label_pswitch_c;
	if (item == 5) goto label_pswitch_2a;
	}
	out = std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal Error: Invalid step result\n"));
label_goto_b:
	return out;
	// 320    .line 227
label_pswitch_c:
	out = this->resultToString(this->result);
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	// throw
	
	out = cVar0->append(out)->append(this->vertex->throwableToString())->toString();
	goto label_goto_b;
	// 353    .line 233
label_pswitch_2a:
	out = this->resultToString(this->result);
	goto label_goto_b;
	// 363    .line 224
	// 364    nop
	// 366    :pswitch_data_32
	// 367    .packed-switch 0x1
	// 368        :pswitch_2a
	// 369        :pswitch_c
	// 370        :pswitch_2a
	// 371        :pswitch_c
	// 372        :pswitch_2a
	// 373    .end packed-switch

}
// .method public verboseToString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::BuildStep::verboseToString()
{
	
	std::shared_ptr<java::lang::String> out;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	out = this->resultToString(this->getResult());
	//    .local v0, "out":Ljava/lang/String;
	// switch
	{
	auto item = ( this->result );
	if (item == 1) goto label_pswitch_d;
	if (item == 2) goto label_pswitch_2c;
	if (item == 3) goto label_pswitch_44;
	if (item == 4) goto label_pswitch_2c;
	if (item == 5) goto label_pswitch_44;
	}
label_goto_d:
label_pswitch_d:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	out = cVar0->append(out)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate contains:\n")))->append(this->vertex->certToString())->toString();
	return out;
	// 429    .line 253
label_pswitch_2c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	// throw
	
	out = cVar1->append(out)->append(this->vertex->throwableToString())->toString();
	goto label_goto_d;
	// 455    .line 257
label_pswitch_44:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	out = cVar2->append(out)->append(this->vertex->moreToString())->toString();
	goto label_goto_d;
	// 481    .line 250
	// 482    :pswitch_data_5c
	// 483    .packed-switch 0x1
	// 484        :pswitch_d
	// 485        :pswitch_2c
	// 486        :pswitch_44
	// 487        :pswitch_2c
	// 488        :pswitch_44
	// 489    .end packed-switch

}


