#ifndef __java_io_Console_S_1__
#define __java_io_Console_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\Console$1.smali
#include "java2ctype.h"
#include "java.io.Console.h"
#include "java.io.PrintWriter.h"
#include "java.io.Writer.h"

namespace java::io{
class Console_S_1 : public java::io::PrintWriter {
protected:
private:
public:
	std::shared_ptr<java::io::Console> this_S_0;
	Console_S_1(std::shared_ptr<java::io::Console> this_S_0,std::shared_ptr<java::io::Writer> _S_anonymous0,bool _S_anonymous1);
	void virtual close();
public:
	virtual ~Console_S_1(){
	}

}; // class Console_S_1
}; // namespace java::io

#endif //__java_io_Console_S_1__

