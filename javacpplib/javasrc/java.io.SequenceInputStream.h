#ifndef __java_io_SequenceInputStream__
#define __java_io_SequenceInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\SequenceInputStream.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.util.Enumeration.h"

namespace java::io{
class SequenceInputStream : public java::io::InputStream {
protected:
private:
public:
	std::shared_ptr<java::util::Enumeration<java::io::InputStream>> e;
	std::shared_ptr<java::io::InputStream> in;
	SequenceInputStream(std::shared_ptr<java::io::InputStream> s1,std::shared_ptr<java::io::InputStream> s2);
	SequenceInputStream(std::shared_ptr<java::util::Enumeration<java::io::InputStream>> e);
	int virtual available();
	void virtual close();
	void virtual nextStream();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
public:
	virtual ~SequenceInputStream(){
	}

}; // class SequenceInputStream
}; // namespace java::io

#endif //__java_io_SequenceInputStream__

