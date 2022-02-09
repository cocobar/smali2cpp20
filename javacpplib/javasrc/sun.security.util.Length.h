#ifndef __sun_security_util_Length__
#define __sun_security_util_Length__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\Length.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace sun::security::util{
class Length : public java::lang::Object {
protected:
private:
public:
	int length() = 0;
	Length(){ };
	virtual ~Length(){ };

}; // class Length
}; // namespace sun::security::util

#endif //__sun_security_util_Length__

