#ifndef __java_io_BufferedReader_S_1__
#define __java_io_BufferedReader_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\BufferedReader$1.smali
#include "java2ctype.h"
#include "java.io.BufferedReader.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"

namespace java::io{
class BufferedReader_S_1 : public java::util::Iterator<java::lang::String> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> nextLine;
	std::shared_ptr<java::io::BufferedReader> this_S_0;
	BufferedReader_S_1(std::shared_ptr<java::io::BufferedReader> this_S_0);
	bool virtual hasNext();
	std::shared_ptr<java::lang::String> virtual next();
public:
	virtual ~BufferedReader_S_1(){
	}

}; // class BufferedReader_S_1
}; // namespace java::io

#endif //__java_io_BufferedReader_S_1__

