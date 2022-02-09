#ifndef __com_sun_nio_file_ExtendedOpenOption__
#define __com_sun_nio_file_ExtendedOpenOption__
// H L:\smali2cpp20\x64\Release\out\com\sun\nio\file\ExtendedOpenOption.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "java.nio.file.OpenOption.h"

namespace com::sun::nio::file{
class ExtendedOpenOption : public java::lang::Enum<com::sun::nio::file::ExtendedOpenOption>, public java::nio::file::OpenOption {
protected:
private:
	static std::shared_ptr<std::vector<com::sun::nio::file::ExtendedOpenOption>> _S_VALUES;
	ExtendedOpenOption(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> NOSHARE_DELETE;
	static std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> NOSHARE_READ;
	static std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> NOSHARE_WRITE;
	static void static_cinit();
	static std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			com::sun::nio::file::ExtendedOpenOption::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ExtendedOpenOption(){
	}

}; // class ExtendedOpenOption
}; // namespace com::sun::nio::file

#endif //__com_sun_nio_file_ExtendedOpenOption__

