#ifndef __sun_security_provider_certpath_SunCertPathBuilderException__
#define __sun_security_provider_certpath_SunCertPathBuilderException__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\SunCertPathBuilderException.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.CertPathBuilderException.h"
#include "sun.security.provider.certpath.AdjacencyList.h"

namespace sun::security::provider::certpath{
class SunCertPathBuilderException : public java::security::cert::CertPathBuilderException {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<sun::security::provider::certpath::AdjacencyList> adjList;
public:
	SunCertPathBuilderException();
	SunCertPathBuilderException(std::shared_ptr<java::lang::String> msg);
	SunCertPathBuilderException(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> cause);
	SunCertPathBuilderException(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> cause,std::shared_ptr<sun::security::provider::certpath::AdjacencyList> adjList);
	SunCertPathBuilderException(std::shared_ptr<java::lang::String> msg,std::shared_ptr<sun::security::provider::certpath::AdjacencyList> adjList);
	SunCertPathBuilderException(std::shared_ptr<java::lang::Throwable> cause);
	std::shared_ptr<sun::security::provider::certpath::AdjacencyList> virtual getAdjacencyList();
public:
	virtual ~SunCertPathBuilderException(){
	}

}; // class SunCertPathBuilderException
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_SunCertPathBuilderException__

