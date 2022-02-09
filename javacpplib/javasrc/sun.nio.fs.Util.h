#ifndef __sun_nio_fs_Util__
#define __sun_nio_fs_Util__
// H L:\smali2cpp20\x64\Release\out\sun\nio\fs\Util.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.file.LinkOption.h"
#include "java.util.Set.h"

namespace sun::nio::fs{
class Util : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::nio::charset::Charset> jnuEncoding;
	Util();
public:
	static void static_cinit();
	static bool followLinks(std::shared_ptr<std::vector<java::nio::file::LinkOption>> options);
	static std::shared_ptr<java::nio::charset::Charset> jnuEncoding();
	static std::shared_ptr<java::util::Set<E>> newSet(std::shared_ptr<java::util::Set<E>> other,std::shared_ptr<std::vector<E>> elements);
	static std::shared_ptr<java::util::Set<E>> newSet(std::shared_ptr<std::vector<E>> elements);
	static std::shared_ptr<java::lang::String> split(std::shared_ptr<java::lang::String> s,char c);
	static unsigned char toBytes(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> toString(std::shared_ptr<unsigned char[]> bytes);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::nio::fs::Util::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Util(){
	}

}; // class Util
}; // namespace sun::nio::fs

#endif //__sun_nio_fs_Util__

