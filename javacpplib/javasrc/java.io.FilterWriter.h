#ifndef __java_io_FilterWriter__
#define __java_io_FilterWriter__
// H L:\smali2cpp20\x64\Release\out\java\io\FilterWriter.smali
#include "java2ctype.h"
#include "java.io.Writer.h"
#include "java.lang.String.h"

namespace java::io{
class FilterWriter : public java::io::Writer {
protected:
	std::shared_ptr<java::io::Writer> out;
	FilterWriter(std::shared_ptr<java::io::Writer> out);
private:
public:
	void virtual close();
	void virtual flush();
	void virtual write(int c);
	void virtual write(std::shared_ptr<java::lang::String> str,int off,int len);
	void virtual write(std::shared_ptr<char[]> cbuf,int off,int len);
public:
	virtual ~FilterWriter(){
	}

}; // class FilterWriter
}; // namespace java::io

#endif //__java_io_FilterWriter__

