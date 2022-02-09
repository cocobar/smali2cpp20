#ifndef __java_io_FilterOutputStream__
#define __java_io_FilterOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\FilterOutputStream.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"

namespace java::io{
class FilterOutputStream : public java::io::OutputStream {
protected:
	std::shared_ptr<java::io::OutputStream> out;
private:
public:
	FilterOutputStream(std::shared_ptr<java::io::OutputStream> out);
	void virtual close();
	void virtual flush();
	void virtual write(int b);
	void virtual write(std::shared_ptr<unsigned char[]> b);
	void virtual write(std::shared_ptr<unsigned char[]> b,int off,int len);
public:
	virtual ~FilterOutputStream(){
	}

}; // class FilterOutputStream
}; // namespace java::io

#endif //__java_io_FilterOutputStream__

