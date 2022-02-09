#ifndef __com_sun_nio_file_SensitivityWatchEventModifier__
#define __com_sun_nio_file_SensitivityWatchEventModifier__
// H L:\smali2cpp20\x64\Release\out\com\sun\nio\file\SensitivityWatchEventModifier.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "java.nio.file.WatchEvent_S_Modifier.h"

namespace com::sun::nio::file{
class SensitivityWatchEventModifier : public java::lang::Enum<com::sun::nio::file::SensitivityWatchEventModifier>, public java::nio::file::WatchEvent_S_Modifier {
protected:
private:
	static std::shared_ptr<std::vector<com::sun::nio::file::SensitivityWatchEventModifier>> _S_VALUES;
	int sensitivity;
	SensitivityWatchEventModifier(std::shared_ptr<java::lang::String> var0,int var1,int sensitivity);
public:
	static std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> HIGH;
	static std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> LOW;
	static std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> MEDIUM;
	static void static_cinit();
	static std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<com::sun::nio::file::SensitivityWatchEventModifier> values();
	int virtual sensitivityValueInSeconds();
private:
	class static_init_class {
	public:
		static_init_class(){
			com::sun::nio::file::SensitivityWatchEventModifier::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SensitivityWatchEventModifier(){
	}

}; // class SensitivityWatchEventModifier
}; // namespace com::sun::nio::file

#endif //__com_sun_nio_file_SensitivityWatchEventModifier__

