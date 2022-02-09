#ifndef __sun_util_logging_LoggingProxy__
#define __sun_util_logging_LoggingProxy__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\LoggingProxy.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.util.List.h"

namespace sun::util::logging{
class LoggingProxy : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::Object> getLevel(std::shared_ptr<java::lang::Object> var0) = 0;
	std::shared_ptr<java::lang::String> getLevelName(std::shared_ptr<java::lang::Object> var0) = 0;
	int getLevelValue(std::shared_ptr<java::lang::Object> var0) = 0;
	std::shared_ptr<java::lang::Object> getLogger(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> getLoggerLevel(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::util::List<java::lang::String>> getLoggerNames();
	std::shared_ptr<java::lang::String> getParentLoggerName(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> getProperty(std::shared_ptr<java::lang::String> var0) = 0;
	bool isLoggable(std::shared_ptr<java::lang::Object> var0,std::shared_ptr<java::lang::Object> var1) = 0;
	void log(std::shared_ptr<java::lang::Object> var0,std::shared_ptr<java::lang::Object> var1,std::shared_ptr<java::lang::String> var2) = 0;
	void log(std::shared_ptr<java::lang::Object> var0,std::shared_ptr<java::lang::Object> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<java::lang::Throwable> var3) = 0;
	void log(std::shared_ptr<java::lang::Object> var0,std::shared_ptr<java::lang::Object> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<std::vector<java::lang::Object>> var3) = 0;
	std::shared_ptr<java::lang::Object> parseLevel(std::shared_ptr<java::lang::String> var0) = 0;
	void setLevel(std::shared_ptr<java::lang::Object> var0,std::shared_ptr<java::lang::Object> var1) = 0;
	void setLoggerLevel(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1) = 0;
	LoggingProxy(){ };
	virtual ~LoggingProxy(){ };

}; // class LoggingProxy
}; // namespace sun::util::logging

#endif //__sun_util_logging_LoggingProxy__

