#ifndef __java_io_Console__
#define __java_io_Console__
// H L:\smali2cpp20\x64\Release\out\java\io\Console.smali
#include "java2ctype.h"
#include "java.io.Flushable.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.io.PrintWriter.h"
#include "java.io.Reader.h"
#include "java.io.Writer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.charset.Charset.h"
#include "java.util.Formatter.h"

namespace java::io{
class Console : public java::io::Flushable {
protected:
private:
	static std::shared_ptr<java::io::Console> cons;
	static bool echoOff;
	std::shared_ptr<java::nio::charset::Charset> cs;
	std::shared_ptr<java::util::Formatter> formatter;
	std::shared_ptr<java::io::Writer> out;
	std::shared_ptr<java::io::PrintWriter> pw;
	std::shared_ptr<char[]> rcb;
	std::shared_ptr<java::lang::Object> readLock;
	std::shared_ptr<java::io::Reader> reader;
	std::shared_ptr<java::lang::Object> writeLock;
	Console();
	Console(std::shared_ptr<java::io::InputStream> inStream,std::shared_ptr<java::io::OutputStream> outStream);
	static bool echo(bool var0);
	static std::shared_ptr<java::lang::String> encoding() = 0;
	char virtual grow();
	static bool istty() = 0;
	char virtual readline(bool zeroOut);
public:
	static bool _assertionsDisabled;
	static char _get0(std::shared_ptr<java::io::Console> _this);
	static std::shared_ptr<java::lang::Object> _get1(std::shared_ptr<java::io::Console> _this);
	static char _wrap0(std::shared_ptr<java::io::Console> _this);
	static void static_cinit();
	static std::shared_ptr<java::io::Console> console();
	void virtual flush();
	std::shared_ptr<java::io::Console> virtual format(std::shared_ptr<java::lang::String> fmt,std::shared_ptr<std::vector<java::lang::Object>> args);
	std::shared_ptr<java::io::Console> virtual printf(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args);
	std::shared_ptr<java::lang::String> virtual readLine();
	std::shared_ptr<java::lang::String> virtual readLine(std::shared_ptr<java::lang::String> fmt,std::shared_ptr<std::vector<java::lang::Object>> args);
	char virtual readPassword();
	char virtual readPassword(std::shared_ptr<java::lang::String> fmt,std::shared_ptr<std::vector<java::lang::Object>> args);
	std::shared_ptr<java::io::Reader> virtual reader();
	std::shared_ptr<java::io::PrintWriter> virtual writer();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::Console::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Console(){
	}

}; // class Console
}; // namespace java::io

#endif //__java_io_Console__

