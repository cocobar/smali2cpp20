// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\SunCertPathBuilderException.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.CertPathBuilderException.h"
#include "sun.security.provider.certpath.AdjacencyList.h"
#include "sun.security.provider.certpath.SunCertPathBuilderException.h"

static sun::security::provider::certpath::SunCertPathBuilderException::serialVersionUID = -0x6c71ede928a01845L;
// .method public constructor <init>()V
sun::security::provider::certpath::SunCertPathBuilderException::SunCertPathBuilderException()
{
	
	// 020    invoke-direct {p0}, Ljava/security/cert/CertPathBuilderException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::provider::certpath::SunCertPathBuilderException::SunCertPathBuilderException(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	java::security::cert::CertPathBuilderException::(msg);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
sun::security::provider::certpath::SunCertPathBuilderException::SunCertPathBuilderException(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::security::cert::CertPathBuilderException::(msg, cause);
	return;

}
// .method constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;Lsun/security/provider/certpath/AdjacencyList;)V
sun::security::provider::certpath::SunCertPathBuilderException::SunCertPathBuilderException(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> cause,std::shared_ptr<sun::security::provider::certpath::AdjacencyList> adjList)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	//    .param p3, "adjList"    # Lsun/security/provider/certpath/AdjacencyList;
	sun::security::provider::certpath::SunCertPathBuilderException::(msg, cause);
	this->adjList = adjList;
	return;

}
// .method constructor <init>(Ljava/lang/String;Lsun/security/provider/certpath/AdjacencyList;)V
sun::security::provider::certpath::SunCertPathBuilderException::SunCertPathBuilderException(std::shared_ptr<java::lang::String> msg,std::shared_ptr<sun::security::provider::certpath::AdjacencyList> adjList)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "adjList"    # Lsun/security/provider/certpath/AdjacencyList;
	sun::security::provider::certpath::SunCertPathBuilderException::(msg);
	this->adjList = adjList;
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
sun::security::provider::certpath::SunCertPathBuilderException::SunCertPathBuilderException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::security::cert::CertPathBuilderException::(cause);
	return;

}
// .method public getAdjacencyList()Lsun/security/provider/certpath/AdjacencyList;
std::shared_ptr<sun::security::provider::certpath::AdjacencyList> sun::security::provider::certpath::SunCertPathBuilderException::getAdjacencyList()
{
	
	return this->adjList;

}


