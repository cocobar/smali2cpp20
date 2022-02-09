#ifndef __java_io_SyncFailedException__
#define __java_io_SyncFailedException__
// H L:\smali2cpp20\x64\Release\out\java\io\SyncFailedException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

namespace java::io{
class SyncFailedException : public java::io::IOException {
protected:
private:
	static long long serialVersionUID;
public:
	SyncFailedException(std::shared_ptr<java::lang::String> desc);
public:
	virtual ~SyncFailedException(){
	}

}; // class SyncFailedException
}; // namespace java::io

#endif //__java_io_SyncFailedException__

