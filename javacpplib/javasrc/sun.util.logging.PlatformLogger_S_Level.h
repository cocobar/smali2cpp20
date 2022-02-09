#ifndef __sun_util_logging_PlatformLogger_S_Level__
#define __sun_util_logging_PlatformLogger_S_Level__
// H L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$Level.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::util::logging{
class PlatformLogger_S_Level : public java::lang::Enum<sun::util::logging::PlatformLogger_S_Level> {
protected:
private:
	static std::shared_ptr<std::vector<sun::util::logging::PlatformLogger_S_Level>> _S_VALUES;
	static std::shared_ptr<int[]> LEVEL_VALUES;
	PlatformLogger_S_Level(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> ALL;
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> CONFIG;
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> FINE;
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> FINER;
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> FINEST;
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> INFO;
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> OFF;
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> SEVERE;
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> WARNING;
	std::shared_ptr<java::lang::Object> javaLevel;
	static void static_cinit();
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> valueOf(int level);
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> values();
	int virtual intValue();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::logging::PlatformLogger_S_Level::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PlatformLogger_S_Level(){
	}

}; // class PlatformLogger_S_Level
}; // namespace sun::util::logging

#endif //__sun_util_logging_PlatformLogger_S_Level__

