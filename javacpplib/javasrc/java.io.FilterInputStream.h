#ifndef __java_io_FilterInputStream__
#define __java_io_FilterInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\FilterInputStream.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"

namespace java::io{
class FilterInputStream : public java::io::InputStream {
protected:
	std::shared_ptr<java::io::InputStream> in;
	FilterInputStream(std::shared_ptr<java::io::InputStream> in);
private:
public:
	int virtual available();
	void virtual close();
	void virtual mark(int readlimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b);
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual reset();
	long long virtual skip(long long n);
public:
	virtual ~FilterInputStream(){
	}

}; // class FilterInputStream
}; // namespace java::io

#endif //__java_io_FilterInputStream__

