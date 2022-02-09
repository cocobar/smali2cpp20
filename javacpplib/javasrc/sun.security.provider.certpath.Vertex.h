#ifndef __sun_security_provider_certpath_Vertex__
#define __sun_security_provider_certpath_Vertex__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\Vertex.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class Vertex : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	int index;
	std::shared_ptr<java::lang::Throwable> throwable;
public:
	static void static_cinit();
	Vertex(std::shared_ptr<java::security::cert::X509Certificate> cert);
	std::shared_ptr<java::lang::String> virtual certToString();
	std::shared_ptr<java::security::cert::X509Certificate> virtual getCertificate();
	int virtual getIndex();
	std::shared_ptr<java::lang::Throwable> virtual getThrowable();
	std::shared_ptr<java::lang::String> virtual indexToString();
	std::shared_ptr<java::lang::String> virtual moreToString();
	void virtual setIndex(int ndx);
	void virtual setThrowable(std::shared_ptr<java::lang::Throwable> throwable);
	std::shared_ptr<java::lang::String> virtual throwableToString();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::Vertex::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Vertex(){
	}

}; // class Vertex
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_Vertex__

