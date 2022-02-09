#ifndef __dalvik_system_DalvikLogHandler__
#define __dalvik_system_DalvikLogHandler__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DalvikLogHandler.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.logging.Level.h"
#include "java.util.logging.Logger.h"

namespace dalvik::system{
class DalvikLogHandler : public java::lang::Object {
protected:
private:
public:
	void publish(std::shared_ptr<java::util::logging::Logger> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::util::logging::Level> var2,std::shared_ptr<java::lang::String> var3) = 0;
	DalvikLogHandler(){ };
	virtual ~DalvikLogHandler(){ };

}; // class DalvikLogHandler
}; // namespace dalvik::system

#endif //__dalvik_system_DalvikLogHandler__

