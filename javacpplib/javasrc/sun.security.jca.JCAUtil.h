#ifndef __sun_security_jca_JCAUtil__
#define __sun_security_jca_JCAUtil__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\JCAUtil.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.SecureRandom.h"

namespace sun::security::jca{
class JCAUtil : public java::lang::Object {
protected:
private:
	static int ARRAY_SIZE;
	JCAUtil();
public:
	static std::shared_ptr<java::security::SecureRandom> getSecureRandom();
	static int getTempArraySize(int totalSize);
public:
	virtual ~JCAUtil(){
	}

}; // class JCAUtil
}; // namespace sun::security::jca

#endif //__sun_security_jca_JCAUtil__

