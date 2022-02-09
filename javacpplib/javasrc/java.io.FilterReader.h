#ifndef __java_io_FilterReader__
#define __java_io_FilterReader__
// H L:\smali2cpp20\x64\Release\out\java\io\FilterReader.smali
#include "java2ctype.h"
#include "java.io.Reader.h"

namespace java::io{
class FilterReader : public java::io::Reader {
protected:
	std::shared_ptr<java::io::Reader> in;
	FilterReader(std::shared_ptr<java::io::Reader> in);
private:
public:
	void virtual close();
	void virtual mark(int readAheadLimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<char[]> cbuf,int off,int len);
	bool virtual ready();
	void virtual reset();
	long long virtual skip(long long n);
public:
	virtual ~FilterReader(){
	}

}; // class FilterReader
}; // namespace java::io

#endif //__java_io_FilterReader__

