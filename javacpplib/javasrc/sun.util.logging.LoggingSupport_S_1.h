#ifndef __sun_util_logging_LoggingSupport_S_1__
#define __sun_util_logging_LoggingSupport_S_1__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\LoggingSupport$1.smali
#include "java2ctype.h"
#include "java.security.PrivilegedAction.h"
#include "sun.util.logging.LoggingProxy.h"

namespace sun::util::logging{
class LoggingSupport_S_1 : public java::security::PrivilegedAction<sun::util::logging::LoggingProxy> {
protected:
private:
public:
	LoggingSupport_S_1();
	std::shared_ptr<sun::util::logging::LoggingProxy> virtual run();
public:
	virtual ~LoggingSupport_S_1(){
	}

}; // class LoggingSupport_S_1
}; // namespace sun::util::logging

#endif //__sun_util_logging_LoggingSupport_S_1__

