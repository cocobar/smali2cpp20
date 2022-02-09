#ifndef __sun_util_logging_LoggingSupport__
#define __sun_util_logging_LoggingSupport__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\LoggingSupport.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.util.List.h"
#include "sun.util.logging.LoggingProxy.h"

namespace sun::util::logging{
class LoggingSupport : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> DEFAULT_FORMAT;
	static std::shared_ptr<java::lang::String> FORMAT_PROP_KEY;
	static std::shared_ptr<sun::util::logging::LoggingProxy> proxy;
	LoggingSupport();
	static void ensureAvailable();
public:
	static void static_cinit();
	static std::shared_ptr<java::lang::Object> getLevel(std::shared_ptr<java::lang::Object> logger);
	static std::shared_ptr<java::lang::String> getLevelName(std::shared_ptr<java::lang::Object> level);
	static int getLevelValue(std::shared_ptr<java::lang::Object> level);
	static std::shared_ptr<java::lang::Object> getLogger(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::lang::String> getLoggerLevel(std::shared_ptr<java::lang::String> loggerName);
	static std::shared_ptr<java::util::List<java::lang::String>> getLoggerNames();
	static std::shared_ptr<java::lang::String> getParentLoggerName(std::shared_ptr<java::lang::String> loggerName);
	static std::shared_ptr<java::lang::String> getSimpleFormat();
	static std::shared_ptr<java::lang::String> getSimpleFormat(bool useProxy);
	static bool isAvailable();
	static bool isLoggable(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> level);
	static void log(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> level,std::shared_ptr<java::lang::String> msg);
	static void log(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t);
	static void log(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
	static std::shared_ptr<java::lang::Object> parseLevel(std::shared_ptr<java::lang::String> levelName);
	static void setLevel(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> newLevel);
	static void setLoggerLevel(std::shared_ptr<java::lang::String> loggerName,std::shared_ptr<java::lang::String> levelName);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::logging::LoggingSupport::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LoggingSupport(){
	}

}; // class LoggingSupport
}; // namespace sun::util::logging

#endif //__sun_util_logging_LoggingSupport__

