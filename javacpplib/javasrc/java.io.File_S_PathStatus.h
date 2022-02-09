#ifndef __java_io_File_S_PathStatus__
#define __java_io_File_S_PathStatus__
// H L:\smali2cpp20\x64\Release\out\java\io\File$PathStatus.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace java::io{
class File_S_PathStatus : public java::lang::Enum<java::io::File_S_PathStatus> {
protected:
private:
	static std::shared_ptr<std::vector<java::io::File_S_PathStatus>> _S_VALUES;
	File_S_PathStatus(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<java::io::File_S_PathStatus> CHECKED;
	static std::shared_ptr<java::io::File_S_PathStatus> INVALID;
	static void static_cinit();
	static std::shared_ptr<java::io::File_S_PathStatus> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::io::File_S_PathStatus> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::File_S_PathStatus::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~File_S_PathStatus(){
	}

}; // class File_S_PathStatus
}; // namespace java::io

#endif //__java_io_File_S_PathStatus__

