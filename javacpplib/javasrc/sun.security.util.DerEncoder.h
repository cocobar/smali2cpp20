#ifndef __sun_security_util_DerEncoder__
#define __sun_security_util_DerEncoder__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DerEncoder.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"

namespace sun::security::util{
class DerEncoder : public java::lang::Object {
protected:
private:
public:
	void derEncode(std::shared_ptr<java::io::OutputStream> var0);
	DerEncoder(){ };
	virtual ~DerEncoder(){ };

}; // class DerEncoder
}; // namespace sun::security::util

#endif //__sun_security_util_DerEncoder__

