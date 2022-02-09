#ifndef __sun_util_logging_PlatformLogger_S_DefaultLoggerProxy__
#define __sun_util_logging_PlatformLogger_S_DefaultLoggerProxy__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$DefaultLoggerProxy.smali
#include "java2ctype.h"
#include "java.io.PrintStream.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.util.Date.h"
#include "sun.util.logging.PlatformLogger_S_Level.h"
#include "sun.util.logging.PlatformLogger_S_LoggerProxy.h"

namespace sun::util::logging{
class PlatformLogger_S_DefaultLoggerProxy : public sun::util::logging::PlatformLogger_S_LoggerProxy {
protected:
private:
	static std::shared_ptr<java::lang::String> formatString;
	std::shared_ptr<java::util::Date> date;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> virtual deriveEffectiveLevel(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar0);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> thrown);
	std::shared_ptr<java::lang::String> virtual formatMessage(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> parameters);
	std::shared_ptr<java::lang::String> virtual getCallerInfo();
	static std::shared_ptr<java::io::PrintStream> outputStream();
public:
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> effectiveLevel;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level;
	static void static_cinit();
	PlatformLogger_S_DefaultLoggerProxy(std::shared_ptr<java::lang::String> name);
	void virtual doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg);
	void virtual doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> thrown);
	void virtual doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> virtual getLevel();
	bool virtual isEnabled();
	bool virtual isLoggable(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level);
	void virtual setLevel(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> newLevel);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PlatformLogger_S_DefaultLoggerProxy(){
	}

}; // class PlatformLogger_S_DefaultLoggerProxy
}; // namespace sun::util::logging

#endif //__sun_util_logging_PlatformLogger_S_DefaultLoggerProxy__

