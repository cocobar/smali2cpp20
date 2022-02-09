#ifndef __java_io_OutputStreamWriter__
#define __java_io_OutputStreamWriter__
// H L:\smali2cpp20\x64\Release\out\java\io\OutputStreamWriter.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.io.Writer.h"
#include "java.lang.String.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.charset.CharsetEncoder.h"
#include "sun.nio.cs.StreamEncoder.h"

namespace java::io{
class OutputStreamWriter : public java::io::Writer {
protected:
private:
	std::shared_ptr<sun::nio::cs::StreamEncoder> se;
public:
	OutputStreamWriter(std::shared_ptr<java::io::OutputStream> out);
	OutputStreamWriter(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<java::lang::String> charsetName);
	OutputStreamWriter(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<java::nio::charset::Charset> cs);
	OutputStreamWriter(std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<java::nio::charset::CharsetEncoder> enc);
	void virtual close();
	void virtual flush();
	void virtual flushBuffer();
	std::shared_ptr<java::lang::String> virtual getEncoding();
	void virtual write(int c);
	void virtual write(std::shared_ptr<java::lang::String> str,int off,int len);
	void virtual write(std::shared_ptr<char[]> cbuf,int off,int len);
public:
	virtual ~OutputStreamWriter(){
	}

}; // class OutputStreamWriter
}; // namespace java::io

#endif //__java_io_OutputStreamWriter__

