#ifndef __java_io_File__
#define __java_io_File__
// H L:\smali2cpp20\x64\Release\out\java\io\File.smali
#include "java2ctype.h"
#include "java.io.File_S_PathStatus.h"
#include "java.io.FileFilter.h"
#include "java.io.FileSystem.h"
#include "java.io.FilenameFilter.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.URI.h"
#include "java.net.URL.h"
#include "java.nio.file.Path.h"
#include "sun.misc.Unsafe.h"

namespace java::io{
class File : public java::io::Serializable, public java::lang::Comparable<java::io::File> {
protected:
private:
	static long long PATH_OFFSET;
	static long long PREFIX_LENGTH_OFFSET;
	static std::shared_ptr<sun::misc::Unsafe> UNSAFE;
	static std::shared_ptr<java::io::FileSystem> fs;
	static long long serialVersionUID;
	std::shared_ptr<java::nio::file::Path> filePath;
	std::shared_ptr<java::lang::String> path;
	int prefixLength;
	std::shared_ptr<java::io::File_S_PathStatus> status;
	File(std::shared_ptr<java::lang::String> pathname,int prefixLength);
	File(std::shared_ptr<java::lang::String> child,std::shared_ptr<java::io::File> parent);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> s);
	static std::shared_ptr<java::lang::String> slashify(std::shared_ptr<java::lang::String> path,bool isDirectory);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> s);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<java::lang::String> pathSeparator;
	static char pathSeparatorChar;
	static std::shared_ptr<java::lang::String> separator;
	static char separatorChar;
	static void static_cinit();
	File(std::shared_ptr<java::io::File> parent,std::shared_ptr<java::lang::String> child);
	File(std::shared_ptr<java::lang::String> pathname);
	File(std::shared_ptr<java::lang::String> parent,std::shared_ptr<java::lang::String> child);
	File(std::shared_ptr<java::net::URI> uri);
	static std::shared_ptr<java::io::File> createTempFile(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> suffix);
	static std::shared_ptr<java::io::File> createTempFile(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> cVar1,std::shared_ptr<java::io::File> directory);
	static std::shared_ptr<java::io::File> listRoots();
	bool virtual canExecute();
	bool virtual canRead();
	bool virtual canWrite();
	int virtual compareTo(std::shared_ptr<java::io::File> pathname);
	bool virtual createNewFile();
	bool virtual _delete_();
	void virtual deleteOnExit();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	bool virtual exists();
	std::shared_ptr<java::io::File> virtual getAbsoluteFile();
	std::shared_ptr<java::lang::String> virtual getAbsolutePath();
	std::shared_ptr<java::io::File> virtual getCanonicalFile();
	std::shared_ptr<java::lang::String> virtual getCanonicalPath();
	long long virtual getFreeSpace();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::lang::String> virtual getParent();
	std::shared_ptr<java::io::File> virtual getParentFile();
	std::shared_ptr<java::lang::String> virtual getPath();
	int virtual getPrefixLength();
	long long virtual getTotalSpace();
	long long virtual getUsableSpace();
	int virtual hashCode();
	bool virtual isAbsolute();
	bool virtual isDirectory();
	bool virtual isFile();
	bool virtual isHidden();
	bool virtual isInvalid();
	long long virtual lastModified();
	long long virtual length();
	std::shared_ptr<java::lang::String> virtual list();
	std::shared_ptr<java::lang::String> virtual list(std::shared_ptr<java::io::FilenameFilter> filter);
	std::shared_ptr<java::io::File> virtual listFiles();
	std::shared_ptr<java::io::File> virtual listFiles(std::shared_ptr<java::io::FileFilter> filter);
	std::shared_ptr<java::io::File> virtual listFiles(std::shared_ptr<java::io::FilenameFilter> filter);
	bool virtual mkdir();
	bool virtual mkdirs();
	bool virtual renameTo(std::shared_ptr<java::io::File> dest);
	bool virtual setExecutable(bool executable);
	bool virtual setExecutable(bool executable,bool ownerOnly);
	bool virtual setLastModified(long long time);
	bool virtual setReadOnly();
	bool virtual setReadable(bool readable);
	bool virtual setReadable(bool readable,bool ownerOnly);
	bool virtual setWritable(bool writable);
	bool virtual setWritable(bool writable,bool ownerOnly);
	std::shared_ptr<java::nio::file::Path> virtual toPath();
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<java::net::URI> virtual toURI();
	std::shared_ptr<java::net::URL> virtual toURL();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::File::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~File(){
	}

}; // class File
}; // namespace java::io

#endif //__java_io_File__

