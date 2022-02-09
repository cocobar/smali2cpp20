#ifndef __sun_security_pkcs_ParsingException__
#define __sun_security_pkcs_ParsingException__
// H L:\smali2cpp20\x64\Release\out\sun\security\pkcs\ParsingException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

namespace sun::security::pkcs{
class ParsingException : public java::io::IOException {
protected:
private:
	static long long serialVersionUID;
public:
	ParsingException();
	ParsingException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~ParsingException(){
	}

}; // class ParsingException
}; // namespace sun::security::pkcs

#endif //__sun_security_pkcs_ParsingException__

