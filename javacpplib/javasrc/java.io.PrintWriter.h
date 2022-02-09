#ifndef __java_io_PrintWriter__
#define __java_io_PrintWriter__
// H L:\smali2cpp20\x64\Release\out\java\io\PrintWriter.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.io.OutputStream.h"
#include "java.io.PrintStream.h"
#include "java.io.Writer.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.charset.Charset.h"
#include "java.util.Formatter.h"
#include "java.util.Locale.h"

namespace java::io{
class PrintWriter : public java::io::Writer {
protected:
	std::shared_ptr<java::io::Writer> out;
	void virtual clearError();
	void virtual setError();
private:
	bool autoFlush;
	std::shared_ptr<java::util::Formatter> formatter;
	std::shared_ptr<java::lang::String> lineSeparator;
	std::shared_ptr<java::io::PrintStream> psOut;
	bool trouble;
	PrintWriter(std::shared_ptr<java::nio::charset::Charset> charset,std::shared_ptr<java::io::File> file);
	void virtual ensureOpen();
	void virtual newLine();
	static std::shared_ptr<java::nio::charset::Charset> toCharset(std::shared_ptr<java::lang::String> csn);
public:
	PrintWriter(std::shared_ptr<java::io::File> file);
	PrintWriter(std::shared_ptr<java::io::File> file,std::shared_ptr<java::lang::String> csn);
	PrintWriter(std::shared_ptr<java::io::OutputStream> out);
	PrintWriter(std::shared_ptr<java::io::OutputStream> out,bool autoFlush);
	PrintWriter(std::shared_ptr<java::io::Writer> out);
	PrintWriter(std::shared_ptr<java::io::Writer> out,bool autoFlush);
	PrintWriter(std::shared_ptr<java::lang::String> fileName);
	PrintWriter(std::shared_ptr<java::lang::String> fileName,std::shared_ptr<java::lang::String> csn);
	std::shared_ptr<java::io::PrintWriter> virtual append(char c);
	std::shared_ptr<java::io::PrintWriter> virtual append(std::shared_ptr<java::lang::CharSequence> csq);
	std::shared_ptr<java::io::PrintWriter> virtual append(std::shared_ptr<java::lang::CharSequence> csq,int start,int end);
	bool virtual checkError();
	void virtual close();
	void virtual flush();
	std::shared_ptr<java::io::PrintWriter> virtual format(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args);
	std::shared_ptr<java::io::PrintWriter> virtual format(std::shared_ptr<java::util::Locale> l,std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args);
	void virtual print(char c);
	void virtual print(double d);
	void virtual print(float f);
	void virtual print(int i);
	void virtual print(long long l);
	void virtual print(std::shared_ptr<java::lang::Object> obj);
	void virtual print(std::shared_ptr<java::lang::String> cVar0);
	void virtual print(bool b);
	void virtual print(std::shared_ptr<char[]> s);
	std::shared_ptr<java::io::PrintWriter> virtual printf(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args);
	std::shared_ptr<java::io::PrintWriter> virtual printf(std::shared_ptr<java::util::Locale> l,std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> args);
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
	void virtual write(int c);
	void virtual write(std::shared_ptr<java::lang::String> s);
	void virtual write(std::shared_ptr<java::lang::String> s,int off,int len);
	void virtual write(std::shared_ptr<char[]> buf);
	void virtual write(std::shared_ptr<char[]> buf,int off,int len);
public:
	virtual ~PrintWriter(){
	}

}; // class PrintWriter
}; // namespace java::io

#endif //__java_io_PrintWriter__

