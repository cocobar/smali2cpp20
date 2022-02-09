// CPP L:\smali2cpp20\x64\Release\out\java\io\Console$1.smali
#include "java2ctype.h"
#include "java.io.Console_S_1.h"
#include "java.io.Console.h"
#include "java.io.PrintWriter.h"
#include "java.io.Writer.h"

// .method constructor <init>(Ljava/io/Console;Ljava/io/Writer;Z)V
java::io::Console_S_1::Console_S_1(std::shared_ptr<java::io::Console> this_S_0,std::shared_ptr<java::io::Writer> _S_anonymous0,bool _S_anonymous1)
{
	
	//    .param p1, "this$0"    # Ljava/io/Console;
	//    .param p2, "$anonymous0"    # Ljava/io/Writer;
	//    .param p3, "$anonymous1"    # Z
	this->this_S_0 = this_S_0;
	java::io::PrintWriter::(_S_anonymous0, _S_anonymous1);
	return;

}
// .method public close()V
void java::io::Console_S_1::close()
{
	
	return;

}


