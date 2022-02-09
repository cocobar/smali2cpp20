#ifndef __com_sun_nio_file_ExtendedWatchEventModifier__
#define __com_sun_nio_file_ExtendedWatchEventModifier__
// H L:\smali2cpp20\x64\Release\out\com\sun\nio\file\ExtendedWatchEventModifier.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "java.nio.file.WatchEvent_S_Modifier.h"

namespace com::sun::nio::file{
class ExtendedWatchEventModifier : public java::lang::Enum<com::sun::nio::file::ExtendedWatchEventModifier>, public java::nio::file::WatchEvent_S_Modifier {
protected:
private:
	static std::shared_ptr<std::vector<com::sun::nio::file::ExtendedWatchEventModifier>> _S_VALUES;
	ExtendedWatchEventModifier(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<com::sun::nio::file::ExtendedWatchEventModifier> FILE_TREE;
	static void static_cinit();
	static std::shared_ptr<com::sun::nio::file::ExtendedWatchEventModifier> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<com::sun::nio::file::ExtendedWatchEventModifier> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			com::sun::nio::file::ExtendedWatchEventModifier::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ExtendedWatchEventModifier(){
	}

}; // class ExtendedWatchEventModifier
}; // namespace com::sun::nio::file

#endif //__com_sun_nio_file_ExtendedWatchEventModifier__

