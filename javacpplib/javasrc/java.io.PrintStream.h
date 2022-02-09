#ifndef __java_io_PrintStream__
#define __java_io_PrintStream__
// H L:\smali2cpp20\x64\Release\out\java\io\PrintStream.smali
#include "java2ctype.h"
#include "java.io.BufferedWriter.h"
#include "java.io.Closeable.h"
#include "java.io.File.h"
#include "java.io.FilterOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.io.OutputStreamWriter.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.charset.Charset.h"
#include "java.util.Formatter.h"
#include "java.util.Locale.h"

namespace java::io{
class PrintStream : public java::io::FilterOutputStream, public java::lang::Appendable, public java::io::Closeable {
protected:
	void virtual clearError();
	void virtual setError();
private:
	bool autoFlush;
	std::shared_ptr<java::io::OutputStreamWriter> charOut;
	std::shared_ptr<java::nio::charset::Charset> charset;
	bool closing;
	std::shared_ptr<java::util::Formatter> formatter;
	std::shared_ptr<java::io::BufferedWriter> textOut;
	bool trouble;
	PrintStream(bool autoFlush,std::shared_ptr<java::io::OutputStream> out);
	PrintStream(bool autoFlush,std::shared_ptr<java::io::OutputStream> out,std::shared_ptr<java::nio::charset::Charset> charset);
	PrintStream(bool autoFlush,std::shared_ptr<java::nio::charset::Charset> charset,std::shared_ptr<java::io::OutputStream> out);
	void virtual ensureOpen();
	std::shared_ptr<java::io::BufferedWriter> virtual getTextOut();
	void virtual newLine();
	static std::shared_ptr<T> requireNonNull(std::shared_ptr<T> obj,std::shared_ptr<java::lang::String> message);
	static std::shared_ptr<java::nio::charset::Charset> toCharset(std::shared_ptr<java::lang::String> csn);
	void virtual write(std::shared_ptr<java::lang::String> s);
	void virtual write(std::shared_ptr<char[]> buf);
public:
	PrintStream(std::shared_ptr<java::io::File> file);
	PrintStream(std::shared_ptr<java::io::File> file,std::shared_ptr<java::lang::String> csn);
	PrintStream(std::shared_ptr<java::io::OutputStream> out);
	PrintStream(std::shared_ptr<java::io::OutputStream> out,bool autoFlush);
	PrintStream(std::shared_ptr<java::io::OutputStream> out,bool autoFlush,std::shared_ptr<java::lang::String> encoding);
	PrintStream(std::shared_ptr<java::lang::String> fileName);
	PrintStream(std::shared_ptr<java::lang::String> fileName,std::shared_ptr<java::lang::String> csn);
	std::shared_ptr<java::io::PrintStream> virtual append(char c);
	std::shared_ptr<java::io::PrintStream> virtual append(std::shared_ptr<java::lang::CharSequence> csq);
	std::shared_ptr<java::io::PrintStream> virtual append(std::shared_ptr<java::lang::CharSequence> csq,int start,int end);
	bool virtual checkError();
	void virtual close();
	void virtual flush();
	std::shared_ptr<java::io::PrintStream> virtual format(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args);
	std::shared_ptr<java::io::PrintStream> virtual format(std::shared_ptr<java::util::Locale> l,std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args);
	void virtual print(char c);
	void virtual print(double d);
	void virtual print(float f);
	void virtual print(int i);
	void virtual print(long long l);
	void virtual print(std::shared_ptr<java::lang::Object> obj);
	void virtual print(std::shared_ptr<java::lang::String> cVar0);
	void virtual print(bool b);
	void virtual print(std::shared_ptr<char[]> s);
	std::shared_ptr<java::io::PrintStream> virtual printf(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args);
	std::shared_ptr<java::io::PrintStream> virtual printf(std::shared_ptr<java::util::Locale> l,std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args);
	void virtual println();
	void virtual println(char x);
	void virtual println(double x);
	void virtual println(float x);
	void virtual println(int x);
	void virtual println(long long x);
	void virtual println(std::shared_ptr<java::lang::Object> x);
	void virtual println(std::shared_ptr<java::lang::String> x);
	void virtual println(bool x);
	void virtual println(std::shared_ptr<char[]> x);
	void virtual write(int b);
	void virtual write(std::shared_ptr<unsigned char[]> buf,int off,int len);
public:
	virtual ~PrintStream(){
	}

}; // class PrintStream
}; // namespace java::io

#endif //__java_io_PrintStream__

