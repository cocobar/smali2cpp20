#ifndef __java_io_UnixFileSystem__
#define __java_io_UnixFileSystem__
// H L:\smali2cpp20\x64\Release\out\java\io\UnixFileSystem.smali
#include "java2ctype.h"
#include "java.io.ExpiringCache.h"
#include "java.io.File.h"
#include "java.io.FileSystem.h"
#include "java.lang.String.h"

namespace java::io{
class UnixFileSystem : public java::io::FileSystem {
protected:
private:
	std::shared_ptr<java::io::ExpiringCache> cache;
	char colon;
	std::shared_ptr<java::lang::String> javaHome;
	std::shared_ptr<java::io::ExpiringCache> javaHomePrefixCache;
	char slash;
	std::shared_ptr<java::lang::String> virtual canonicalize0(std::shared_ptr<java::lang::String> var0);
	bool virtual checkAccess0(std::shared_ptr<java::io::File> var0,int var1) = 0;
	bool virtual createDirectory0(std::shared_ptr<java::io::File> var0) = 0;
	bool virtual createFileExclusively0(std::shared_ptr<java::lang::String> var0);
	bool virtual delete0(std::shared_ptr<java::io::File> var0) = 0;
	int virtual getBooleanAttributes0(std::shared_ptr<java::lang::String> var0) = 0;
	long long virtual getLastModifiedTime0(std::shared_ptr<java::io::File> var0) = 0;
	long long virtual getLength0(std::shared_ptr<java::io::File> var0) = 0;
	long long virtual getSpace0(std::shared_ptr<java::io::File> var0,int var1) = 0;
	static void initIDs() = 0;
	std::shared_ptr<java::lang::String> virtual list0(std::shared_ptr<java::io::File> var0) = 0;
	bool virtual rename0(std::shared_ptr<java::io::File> var0,std::shared_ptr<java::io::File> var1) = 0;
	bool virtual setLastModifiedTime0(std::shared_ptr<java::io::File> var0,long long var1) = 0;
	bool virtual setPermission0(std::shared_ptr<java::io::File> var0,int var1,bool var2,bool var3) = 0;
	bool virtual setReadOnly0(std::shared_ptr<java::io::File> var0) = 0;
public:
	static void static_cinit();
	UnixFileSystem();
	static std::shared_ptr<java::lang::String> parentOrNull(std::shared_ptr<java::lang::String> path);
	std::shared_ptr<java::lang::String> virtual canonicalize(std::shared_ptr<java::lang::String> path);
	bool virtual checkAccess(std::shared_ptr<java::io::File> f,int access);
	int virtual compare(std::shared_ptr<java::io::File> f1,std::shared_ptr<java::io::File> f2);
	bool virtual createDirectory(std::shared_ptr<java::io::File> f);
	bool virtual createFileExclusively(std::shared_ptr<java::lang::String> path);
	bool virtual _delete_(std::shared_ptr<java::io::File> f);
	std::shared_ptr<java::lang::String> virtual fromURIPath(std::shared_ptr<java::lang::String> path);
	int virtual getBooleanAttributes(std::shared_ptr<java::io::File> f);
	std::shared_ptr<java::lang::String> virtual getDefaultParent();
	long long virtual getLastModifiedTime(std::shared_ptr<java::io::File> f);
	long long virtual getLength(std::shared_ptr<java::io::File> f);
	char virtual getPathSeparator();
	char virtual getSeparator();
	long long virtual getSpace(std::shared_ptr<java::io::File> f,int t);
	int virtual hashCode(std::shared_ptr<java::io::File> f);
	bool virtual isAbsolute(std::shared_ptr<java::io::File> f);
	std::shared_ptr<java::lang::String> virtual list(std::shared_ptr<java::io::File> f);
	std::shared_ptr<java::io::File> virtual listRoots();
	std::shared_ptr<java::lang::String> virtual normalize(std::shared_ptr<java::lang::String> cVar1);
	int virtual prefixLength(std::shared_ptr<java::lang::String> pathname);
	bool virtual rename(std::shared_ptr<java::io::File> f1,std::shared_ptr<java::io::File> f2);
	std::shared_ptr<java::lang::String> virtual resolve(std::shared_ptr<java::io::File> f);
	std::shared_ptr<java::lang::String> virtual resolve(std::shared_ptr<java::lang::String> parent,std::shared_ptr<java::lang::String> child);
	bool virtual setLastModifiedTime(std::shared_ptr<java::io::File> f,long long time);
	bool virtual setPermission(std::shared_ptr<java::io::File> f,int access,bool enable,bool owneronly);
	bool virtual setReadOnly(std::shared_ptr<java::io::File> f);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::UnixFileSystem::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnixFileSystem(){
	}

}; // class UnixFileSystem
}; // namespace java::io

#endif //__java_io_UnixFileSystem__

