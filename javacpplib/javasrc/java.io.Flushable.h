#ifndef __java_io_Flushable__
#define __java_io_Flushable__
// H L:\smali2cpp20\x64\Release\out\java\io\Flushable.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace java::io{
class Flushable : public java::lang::Object {
protected:
private:
public:
	void flush();
	Flushable(){ };
	virtual ~Flushable(){ };

}; // class Flushable
}; // namespace java::io

#endif //__java_io_Flushable__
