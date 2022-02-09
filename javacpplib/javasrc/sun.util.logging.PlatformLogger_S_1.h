#ifndef __sun_util_logging_PlatformLogger_S_1__
#define __sun_util_logging_PlatformLogger_S_1__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$1.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.security.PrivilegedAction.h"

namespace sun::util::logging{
class PlatformLogger_S_1 : public java::security::PrivilegedAction<java::lang::Boolean> {
protected:
private:
public:
	PlatformLogger_S_1();
	std::shared_ptr<java::lang::Boolean> virtual run();
public:
	virtual ~PlatformLogger_S_1(){
	}

}; // class PlatformLogger_S_1
}; // namespace sun::util::logging

#endif //__sun_util_logging_PlatformLogger_S_1__

