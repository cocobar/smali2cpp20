#ifndef __java_io_BufferedInputStream__
#define __java_io_BufferedInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\BufferedInputStream.smali
#include "java2ctype.h"
#include "java.io.FilterInputStream.h"
#include "java.io.InputStream.h"
#include "java.util.concurrent.atomic.AtomicReferenceFieldUpdater.h"

namespace java::io{
class BufferedInputStream : public java::io::FilterInputStream {
protected:
	std::shared_ptr<unsigned char[]> buf;
	int count;
	int marklimit;
	int markpos;
	int pos;
private:
	static int DEFAULT_BUFFER_SIZE;
	static int MAX_BUFFER_SIZE;
	static std::shared_ptr<java::util::concurrent::atomic::AtomicReferenceFieldUpdater<java::io::BufferedInputStream,unsigned char[]>> bufUpdater;
	void virtual fill();
	unsigned char virtual getBufIfOpen();
	std::shared_ptr<java::io::InputStream> virtual getInIfOpen();
	int virtual read1(std::shared_ptr<unsigned char[]> b,int off,int len);
public:
	static void static_cinit();
	BufferedInputStream(std::shared_ptr<java::io::InputStream> in);
	BufferedInputStream(std::shared_ptr<java::io::InputStream> in,int size);
	int virtual available();
	void virtual close();
	void virtual mark(int readlimit);
	bool virtual markSupported();
	int virtual read();
	int virtual read(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual reset();
	long long virtual skip(long long n);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::BufferedInputStream::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BufferedInputStream(){
	}

}; // class BufferedInputStream
}; // namespace java::io

#endif //__java_io_BufferedInputStream__

