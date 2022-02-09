#ifndef __java_io_StreamTokenizer__
#define __java_io_StreamTokenizer__
// H L:\smali2cpp20\x64\Release\out\java\io\StreamTokenizer.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.io.Reader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class StreamTokenizer : public java::lang::Object {
protected:
private:
	static unsigned char CT_ALPHA;
	static unsigned char CT_COMMENT;
	static unsigned char CT_DIGIT;
	static unsigned char CT_QUOTE;
	static unsigned char CT_WHITESPACE;
	static int NEED_CHAR;
	static int SKIP_LF;
	static int TT_NOTHING;
	int LINENO;
	std::shared_ptr<char[]> buf;
	std::shared_ptr<unsigned char[]> ctype;
	bool eolIsSignificantP;
	bool forceLower;
	std::shared_ptr<java::io::InputStream> input;
	int peekc;
	bool pushedBack;
	std::shared_ptr<java::io::Reader> reader;
	bool slashSlashCommentsP;
	bool slashStarCommentsP;
	StreamTokenizer();
	int virtual read();
public:
	static int TT_EOF;
	static int TT_EOL;
	static int TT_NUMBER;
	static int TT_WORD;
	double nval;
	std::shared_ptr<java::lang::String> sval;
	int ttype;
	StreamTokenizer(std::shared_ptr<java::io::InputStream> is);
	StreamTokenizer(std::shared_ptr<java::io::Reader> r);
	void virtual commentChar(int ch);
	void virtual eolIsSignificant(bool flag);
	int virtual lineno();
	void virtual lowerCaseMode(bool fl);
	int virtual nextToken();
	void virtual ordinaryChar(int ch);
	void virtual ordinaryChars(int low,int cVar1);
	void virtual parseNumbers();
	void virtual pushBack();
	void virtual quoteChar(int ch);
	void virtual resetSyntax();
	void virtual slashSlashComments(bool flag);
	void virtual slashStarComments(bool flag);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual whitespaceChars(int low,int cVar1);
	void virtual wordChars(int low,int cVar1);
public:
	virtual ~StreamTokenizer(){
	}

}; // class StreamTokenizer
}; // namespace java::io

#endif //__java_io_StreamTokenizer__

