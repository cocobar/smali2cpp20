// CPP L:\smali2cpp20\x64\Release\out\java\io\OptionalDataException.smali
#include "java2ctype.h"
#include "java.io.OptionalDataException.h"

static java::io::OptionalDataException::serialVersionUID = -0x6f2d38e4604bc55cL;
// .method constructor <init>(I)V
java::io::OptionalDataException::OptionalDataException(int len)
{
	
	//    .param p1, "len"    # I
	// 023    invoke-direct {p0}, Ljava/io/ObjectStreamException;-><init>()V
	this->eof = 0x0;
	this->length = len;
	return;

}
// .method constructor <init>(Z)V
java::io::OptionalDataException::OptionalDataException(bool end)
{
	
	//    .param p1, "end"    # Z
	// 043    invoke-direct {p0}, Ljava/io/ObjectStreamException;-><init>()V
	this->length = 0x0;
	this->eof = end;
	return;

}


