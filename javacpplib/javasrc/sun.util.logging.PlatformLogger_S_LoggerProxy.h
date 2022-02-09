#ifndef __sun_util_logging_PlatformLogger_S_LoggerProxy__
#define __sun_util_logging_PlatformLogger_S_LoggerProxy__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$LoggerProxy.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "sun.util.logging.PlatformLogger_S_Level.h"

namespace sun::util::logging{
class PlatformLogger_S_LoggerProxy : public java::lang::Object {
protected:
	PlatformLogger_S_LoggerProxy(std::shared_ptr<java::lang::String> name);
private:
public:
	std::shared_ptr<java::lang::String> name;
	void doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> var0,std::shared_ptr<java::lang::String> var1) = 0;
	void doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::Throwable> var2) = 0;
	void doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<std::vector<java::lang::Object>> var2) = 0;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> getLevel() = 0;
	bool isEnabled() = 0;
	bool isLoggable(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> var0) = 0;
	void setLevel(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> var0) = 0;
public:
	virtual ~PlatformLogger_S_LoggerProxy(){
	}

}; // class PlatformLogger_S_LoggerProxy
}; // namespace sun::util::logging

#endif //__sun_util_logging_PlatformLogger_S_LoggerProxy__

