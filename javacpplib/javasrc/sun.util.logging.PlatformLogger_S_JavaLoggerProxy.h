#ifndef __sun_util_logging_PlatformLogger_S_JavaLoggerProxy__
#define __sun_util_logging_PlatformLogger_S_JavaLoggerProxy__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$JavaLoggerProxy.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "sun.util.logging.PlatformLogger_S_Level.h"
#include "sun.util.logging.PlatformLogger_S_LoggerProxy.h"

namespace sun::util::logging{
class PlatformLogger_S_JavaLoggerProxy : public sun::util::logging::PlatformLogger_S_LoggerProxy {
protected:
private:
	std::shared_ptr<java::lang::Object> javaLogger;
public:
	static void static_cinit();
	PlatformLogger_S_JavaLoggerProxy(std::shared_ptr<java::lang::String> name);
	PlatformLogger_S_JavaLoggerProxy(std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level);
	void virtual doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg);
	void virtual doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t);
	void virtual doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> virtual getLevel();
	bool virtual isEnabled();
	bool virtual isLoggable(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level);
	void virtual setLevel(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::logging::PlatformLogger_S_JavaLoggerProxy::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PlatformLogger_S_JavaLoggerProxy(){
	}

}; // class PlatformLogger_S_JavaLoggerProxy
}; // namespace sun::util::logging

#endif //__sun_util_logging_PlatformLogger_S_JavaLoggerProxy__

