#ifndef __java_io_ExpiringCache_S_1__
#define __java_io_ExpiringCache_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\ExpiringCache$1.smali
#include "java2ctype.h"
#include "java.io.ExpiringCache_S_Entry.hhh"
#include "java.lang.String.hhh"
#include "java.util.LinkedHashMap.hhh"

namespace java::io{
class ExpiringCache_S_1 : public java::util::LinkedHashMap<java::lang::String,java::io::ExpiringCache_S_Entry> {
public:
	ExpiringCache_S_1();
	virtual ~ExpiringCache_S_1();

}; // class ExpiringCache_S_1
}; // namespace java::io

#endif //__java_io_ExpiringCache_S_1__
