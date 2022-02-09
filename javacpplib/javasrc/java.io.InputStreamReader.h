#ifndef __java_io_InputStreamReader__
#define __java_io_InputStreamReader__
// H L:\smali2cpp20\x64\Release\out\java\io\InputStreamReader.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.Reader.h"
#include "java.lang.String.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.charset.CharsetDecoder.h"
#include "sun.nio.cs.StreamDecoder.h"

namespace java::io{
class InputStreamReader : public java::io::Reader {
protected:
private:
	std::shared_ptr<sun::nio::cs::StreamDecoder> sd;
public:
	InputStreamReader(std::shared_ptr<java::io::InputStream> in);
	InputStreamReader(std::shared_ptr<java::io::InputStream> in,std::shared_ptr<java::lang::String> charsetName);
	InputStreamReader(std::shared_ptr<java::io::InputStream> in,std::shared_ptr<java::nio::charset::Charset> cs);
	InputStreamReader(std::shared_ptr<java::io::InputStream> in,std::shared_ptr<java::nio::charset::CharsetDecoder> dec);
	void virtual close();
	std::shared_ptr<java::lang::String> virtual getEncoding();
	int virtual read();
	int virtual read(std::shared_ptr<char[]> cbuf,int offset,int length);
	bool virtual ready();
public:
	virtual ~InputStreamReader(){
	}

}; // class InputStreamReader
}; // namespace java::io

#endif //__java_io_InputStreamReader__

