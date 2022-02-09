#ifndef __java_io_StringWriter__
#define __java_io_StringWriter__
// H L:\smali2cpp20\x64\Release\out\java\io\StringWriter.smali
#include "java2ctype.h"
#include "java.io.Writer.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace java::io{
class StringWriter : public java::io::Writer {
protected:
private:
	std::shared_ptr<java::lang::StringBuffer> buf;
public:
	StringWriter();
	StringWriter(int initialSize);
	std::shared_ptr<java::io::StringWriter> virtual append(char c);
	std::shared_ptr<java::io::StringWriter> virtual append(std::shared_ptr<java::lang::CharSequence> csq);
	std::shared_ptr<java::io::StringWriter> virtual append(std::shared_ptr<java::lang::CharSequence> csq,int start,int end);
	void virtual close();
	void virtual flush();
	std::shared_ptr<java::lang::StringBuffer> virtual getBuffer();
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual write(int c);
	void virtual write(std::shared_ptr<java::lang::String> str);
	void virtual write(std::shared_ptr<java::lang::String> str,int off,int len);
	void virtual write(std::shared_ptr<char[]> cbuf,int off,int len);
public:
	virtual ~StringWriter(){
	}

}; // class StringWriter
}; // namespace java::io

#endif //__java_io_StringWriter__

