#ifndef __sun_util_logging_PlatformLogger__
#define __sun_util_logging_PlatformLogger__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.lang.ref.WeakReference.h"
#include "java.util.Map.h"
#include "sun.util.logging.PlatformLogger_S_JavaLoggerProxy.h"
#include "sun.util.logging.PlatformLogger_S_Level.h"
#include "sun.util.logging.PlatformLogger_S_LoggerProxy.h"

namespace sun::util::logging{
class PlatformLogger : public java::lang::Object {
protected:
private:
	static int ALL;
	static int CONFIG;
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> DEFAULT_LEVEL;
	static int FINE;
	static int FINER;
	static int FINEST;
	static int INFO;
	static int OFF;
	static int SEVERE;
	static int WARNING;
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::ref::WeakReference<sun::util::logging::PlatformLogger>>> loggers;
	static bool loggingEnabled;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_JavaLoggerProxy> javaLoggerProxy;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_LoggerProxy> loggerProxy;
	PlatformLogger(std::shared_ptr<java::lang::String> name);
	void virtual redirectToJavaLoggerProxy();
public:
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> _get0();
	static void static_cinit();
	static std::shared_ptr<sun::util::logging::PlatformLogger> getLogger(std::shared_ptr<java::lang::String> name);
	static void redirectPlatformLoggers();
	void virtual config(std::shared_ptr<java::lang::String> msg);
	void virtual config(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t);
	void virtual config(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
	void virtual fine(std::shared_ptr<java::lang::String> msg);
	void virtual fine(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t);
	void virtual fine(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
	void virtual finer(std::shared_ptr<java::lang::String> msg);
	void virtual finer(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t);
	void virtual finer(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
	void virtual finest(std::shared_ptr<java::lang::String> msg);
	void virtual finest(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t);
	void virtual finest(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
	std::shared_ptr<java::lang::String> virtual getName();
	void virtual info(std::shared_ptr<java::lang::String> msg);
	void virtual info(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t);
	void virtual info(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
	bool virtual isEnabled();
	bool virtual isLoggable(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level);
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> virtual level();
	void virtual setLevel(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> newLevel);
	void virtual severe(std::shared_ptr<java::lang::String> msg);
	void virtual severe(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t);
	void virtual severe(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
	void virtual warning(std::shared_ptr<java::lang::String> msg);
	void virtual warning(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t);
	void virtual warning(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::logging::PlatformLogger::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PlatformLogger(){
	}

}; // class PlatformLogger
}; // namespace sun::util::logging

#endif //__sun_util_logging_PlatformLogger__

