#ifndef __java_io_BufferedWriter__
#define __java_io_BufferedWriter__
// H L:\smali2cpp20\x64\Release\out\java\io\BufferedWriter.smali
#include "java2ctype.h"
#include "java.io.Writer.h"
#include "java.lang.String.h"

namespace java::io{
class BufferedWriter : public java::io::Writer {
protected:
private:
	static int defaultCharBufferSize;
	std::shared_ptr<char[]> cb;
	std::shared_ptr<java::lang::String> lineSeparator;
	int nChars;
	int nextChar;
	std::shared_ptr<java::io::Writer> out;
	void virtual ensureOpen();
	int virtual min(int a,int b);
public:
	static void static_cinit();
	BufferedWriter(std::shared_ptr<java::io::Writer> out);
	BufferedWriter(std::shared_ptr<java::io::Writer> out,int sz);
	void virtual close();
	void virtual flush();
	void virtual flushBuffer();
	void virtual newLine();
	void virtual write(int c);
	void virtual write(std::shared_ptr<java::lang::String> s,int off,int len);
	void virtual write(std::shared_ptr<char[]> cbuf,int off,int len);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::BufferedWriter::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BufferedWriter(){
	}

}; // class BufferedWriter
}; // namespace java::io

#endif //__java_io_BufferedWriter__

