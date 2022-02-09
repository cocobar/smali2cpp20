#ifndef __java_io_Writer__
#define __java_io_Writer__
// H L:\smali2cpp20\x64\Release\out\java\io\Writer.smali
#include "java2ctype.h"
#include "java.io.Closeable.h"
#include "java.io.Flushable.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class Writer : public java::lang::Appendable, public java::io::Closeable, public java::io::Flushable {
protected:
	std::shared_ptr<java::lang::Object> lock;
	Writer();
	Writer(std::shared_ptr<java::lang::Object> lock);
private:
	static int WRITE_BUFFER_SIZE;
	std::shared_ptr<char[]> writeBuffer;
public:
	std::shared_ptr<java::io::Writer> virtual append(char c);
	std::shared_ptr<java::io::Writer> virtual append(std::shared_ptr<java::lang::CharSequence> csq);
	std::shared_ptr<java::io::Writer> virtual append(std::shared_ptr<java::lang::CharSequence> csq,int start,int end);
	void close();
	void flush();
	void virtual write(int c);
	void virtual write(std::shared_ptr<java::lang::String> str);
	void virtual write(std::shared_ptr<java::lang::String> str,int off,int len);
	void virtual write(std::shared_ptr<char[]> cbuf);
	void write(std::shared_ptr<char[]> var0,int var1,int var2);
public:
	virtual ~Writer(){
	}

}; // class Writer
}; // namespace java::io

#endif //__java_io_Writer__

