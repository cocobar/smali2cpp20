#ifndef __com_sun_nio_file_ExtendedCopyOption__
#define __com_sun_nio_file_ExtendedCopyOption__
// H L:\smali2cpp20\x64\Release\out\com\sun\nio\file\ExtendedCopyOption.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "java.nio.file.CopyOption.h"

namespace com::sun::nio::file{
class ExtendedCopyOption : public java::lang::Enum<com::sun::nio::file::ExtendedCopyOption>, public java::nio::file::CopyOption {
protected:
private:
	static std::shared_ptr<std::vector<com::sun::nio::file::ExtendedCopyOption>> _S_VALUES;
	ExtendedCopyOption(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<com::sun::nio::file::ExtendedCopyOption> INTERRUPTIBLE;
	static void static_cinit();
	static std::shared_ptr<com::sun::nio::file::ExtendedCopyOption> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<com::sun::nio::file::ExtendedCopyOption> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			com::sun::nio::file::ExtendedCopyOption::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ExtendedCopyOption(){
	}

}; // class ExtendedCopyOption
}; // namespace com::sun::nio::file

#endif //__com_sun_nio_file_ExtendedCopyOption__

