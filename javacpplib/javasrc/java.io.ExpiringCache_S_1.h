#ifndef __java_io_ExpiringCache_S_1__
#define __java_io_ExpiringCache_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\ExpiringCache$1.smali
#include "java2ctype.h"
#include "java.io.ExpiringCache_S_Entry.h"
#include "java.io.ExpiringCache.h"
#include "java.lang.String.h"
#include "java.util.LinkedHashMap.h"
#include "java.util.Map_S_Entry.h"

namespace java::io{
class ExpiringCache_S_1 : public java::util::LinkedHashMap<java::lang::String,java::io::ExpiringCache_S_Entry> {
protected:
	bool virtual removeEldestEntry(std::shared_ptr<java::util::Map_S_Entry<java::lang::String,java::io::ExpiringCache_S_Entry>> eldest);
private:
public:
	std::shared_ptr<java::io::ExpiringCache> this_S_0;
	ExpiringCache_S_1(std::shared_ptr<java::io::ExpiringCache> this_S_0);
public:
	virtual ~ExpiringCache_S_1(){
	}

}; // class ExpiringCache_S_1
}; // namespace java::io

#endif //__java_io_ExpiringCache_S_1__

