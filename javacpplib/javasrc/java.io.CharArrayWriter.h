#ifndef __java_io_CharArrayWriter__
#define __java_io_CharArrayWriter__
// H L:\smali2cpp20\x64\Release\out\java\io\CharArrayWriter.smali
#include "java2ctype.h"
#include "java.io.Writer.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"

namespace java::io{
class CharArrayWriter : public java::io::Writer {
protected:
	std::shared_ptr<char[]> buf;
	int count;
private:
public:
	CharArrayWriter();
	CharArrayWriter(int initialSize);
	std::shared_ptr<java::io::CharArrayWriter> virtual append(char c);
	std::shared_ptr<java::io::CharArrayWriter> virtual append(std::shared_ptr<java::lang::CharSequence> csq);
	std::shared_ptr<java::io::CharArrayWriter> virtual append(std::shared_ptr<java::lang::CharSequence> cVar0,int start,int end);
	void virtual close();
	void virtual flush();
	void virtual reset();
	int virtual size();
	char virtual toCharArray();
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual write(int c);
	void virtual write(std::shared_ptr<java::lang::String> str,int off,int len);
	void virtual write(std::shared_ptr<char[]> c,int off,int len);
	void virtual writeTo(std::shared_ptr<java::io::Writer> out);
public:
	virtual ~CharArrayWriter(){
	}

}; // class CharArrayWriter
}; // namespace java::io

#endif //__java_io_CharArrayWriter__

