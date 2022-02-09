#ifndef __java_io_BufferedReader__
#define __java_io_BufferedReader__
// H L:\smali2cpp20\x64\Release\out\java\io\BufferedReader.smali
#include "java2ctype.h"
#include "java.io.Reader.h"
#include "java.lang.String.h"
#include "java.util.stream.Stream.h"

namespace java::io{
class BufferedReader : public java::io::Reader {
protected:
private:
	static int INVALIDATED;
	static int UNMARKED;
	static int defaultCharBufferSize;
	static int defaultExpectedLineLength;
	std::shared_ptr<char[]> cb;
	std::shared_ptr<java::io::Reader> in;
	int markedChar;
	bool markedSkipLF;
	int nChars;
	int nextChar;
	int readAheadLimit;
	bool skipLF;
	void virtual ensureOpen();
	void virtual fill();
	int virtual read1(std::shared_ptr<char[]> cbuf,int off,int len);
public:
	static void static_cinit();
	BufferedReader(std::shared_ptr<java::io::Reader> in);
	BufferedReader(std::shared_ptr<java::io::Reader> in,int sz);
	void virtual close();
	std::shared_ptr<java::util::stream::Stream<java::lang::String>> virtual lines();
	void virtual mark(int readAheadLimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<char[]> cbuf,int off,int len);
	std::shared_ptr<java::lang::String> virtual readLine();
	std::shared_ptr<java::lang::String> virtual readLine(bool ignoreLF);
	bool virtual ready();
	void virtual reset();
	long long virtual skip(long long n);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::BufferedReader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BufferedReader(){
	}

}; // class BufferedReader
}; // namespace java::io

#endif //__java_io_BufferedReader__

