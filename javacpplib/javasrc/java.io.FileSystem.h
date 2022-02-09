#ifndef __java_io_FileSystem__
#define __java_io_FileSystem__
// H L:\smali2cpp20\x64\Release\out\java\io\FileSystem.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class FileSystem : public java::lang::Object {
protected:
private:
	static bool getBooleanProperty(std::shared_ptr<java::lang::String> prop,bool defaultVal);
public:
	static int ACCESS_EXECUTE;
	static int ACCESS_OK;
	static int ACCESS_READ;
	static int ACCESS_WRITE;
	static int BA_DIRECTORY;
	static int BA_EXISTS;
	static int BA_HIDDEN;
	static int BA_REGULAR;
	static int SPACE_FREE;
	static int SPACE_TOTAL;
	static int SPACE_USABLE;
	static bool useCanonCaches;
	static bool useCanonPrefixCache;
	static void static_cinit();
	FileSystem();
	std::shared_ptr<java::lang::String> canonicalize(std::shared_ptr<java::lang::String> var0);
	bool checkAccess(std::shared_ptr<java::io::File> var0,int var1) = 0;
	int compare(std::shared_ptr<java::io::File> var0,std::shared_ptr<java::io::File> var1) = 0;
	bool createDirectory(std::shared_ptr<java::io::File> var0) = 0;
	bool createFileExclusively(std::shared_ptr<java::lang::String> var0);
	bool _delete_(std::shared_ptr<java::io::File> var0) = 0;
	std::shared_ptr<java::lang::String> fromURIPath(std::shared_ptr<java::lang::String> var0) = 0;
	int getBooleanAttributes(std::shared_ptr<java::io::File> var0) = 0;
	std::shared_ptr<java::lang::String> getDefaultParent() = 0;
	long long getLastModifiedTime(std::shared_ptr<java::io::File> var0) = 0;
	long long getLength(std::shared_ptr<java::io::File> var0) = 0;
	char getPathSeparator() = 0;
	char getSeparator() = 0;
	long long getSpace(std::shared_ptr<java::io::File> var0,int var1) = 0;
	int hashCode(std::shared_ptr<java::io::File> var0) = 0;
	bool isAbsolute(std::shared_ptr<java::io::File> var0) = 0;
	std::shared_ptr<java::lang::String> list(std::shared_ptr<java::io::File> var0) = 0;
	std::shared_ptr<java::io::File> listRoots() = 0;
	std::shared_ptr<java::lang::String> normalize(std::shared_ptr<java::lang::String> var0) = 0;
	int prefixLength(std::shared_ptr<java::lang::String> var0) = 0;
	bool rename(std::shared_ptr<java::io::File> var0,std::shared_ptr<java::io::File> var1) = 0;
	std::shared_ptr<java::lang::String> resolve(std::shared_ptr<java::io::File> var0) = 0;
	std::shared_ptr<java::lang::String> resolve(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1) = 0;
	bool setLastModifiedTime(std::shared_ptr<java::io::File> var0,long long var1) = 0;
	bool setPermission(std::shared_ptr<java::io::File> var0,int var1,bool var2,bool var3) = 0;
	bool setReadOnly(std::shared_ptr<java::io::File> var0) = 0;
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::FileSystem::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~FileSystem(){
	}

}; // class FileSystem
}; // namespace java::io

#endif //__java_io_FileSystem__

