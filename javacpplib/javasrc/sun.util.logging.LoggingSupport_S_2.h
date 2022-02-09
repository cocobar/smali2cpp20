#ifndef __sun_util_logging_LoggingSupport_S_2__
#define __sun_util_logging_LoggingSupport_S_2__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\LoggingSupport$2.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace sun::util::logging{
class LoggingSupport_S_2 : public java::security::PrivilegedAction<java::lang::String> {
protected:
private:
public:
	LoggingSupport_S_2();
	std::shared_ptr<java::lang::String> virtual run();
public:
	virtual ~LoggingSupport_S_2(){
	}

}; // class LoggingSupport_S_2
}; // namespace sun::util::logging

#endif //__sun_util_logging_LoggingSupport_S_2__

