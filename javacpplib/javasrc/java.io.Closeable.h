#ifndef __java_io_Closeable__
#define __java_io_Closeable__
// H L:\smali2cpp20\x64\Release\out\java\io\Closeable.smali
#include "java2ctype.h"
#include "java.lang.AutoCloseable.h"

namespace java::io{
class Closeable : public java::lang::AutoCloseable {
protected:
private:
public:
	void close();
	Closeable(){ };
	virtual ~Closeable(){ };

}; // class Closeable
}; // namespace java::io

#endif //__java_io_Closeable__

