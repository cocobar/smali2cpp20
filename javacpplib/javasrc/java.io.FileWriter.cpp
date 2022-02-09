// CPP L:\smali2cpp20\x64\Release\out\java\io\FileWriter.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.io.FileOutputStream.h"
#include "java.io.FileWriter.h"
#include "java.io.OutputStreamWriter.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/io/File;)V
java::io::FileWriter::FileWriter(std::shared_ptr<java::io::File> file)
{
	
	std::shared_ptr<java::io::FileOutputStream> cVar0;
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 011        value = {
	// 012            Ljava/io/IOException;
	// 013        }
	// 014    .end annotation
	cVar0 = std::make_shared<java::io::FileOutputStream>(file);
	java::io::OutputStreamWriter::(cVar0);
	return;

}
// .method public constructor <init>(Ljava/io/File;Z)V
java::io::FileWriter::FileWriter(std::shared_ptr<java::io::File> file,bool append)
{
	
	std::shared_ptr<java::io::FileOutputStream> cVar0;
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .param p2, "append"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 033        value = {
	// 034            Ljava/io/IOException;
	// 035        }
	// 036    .end annotation
	cVar0 = std::make_shared<java::io::FileOutputStream>(file, append);
	java::io::OutputStreamWriter::(cVar0);
	return;

}
// .method public constructor <init>(Ljava/io/FileDescriptor;)V
java::io::FileWriter::FileWriter(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	std::shared_ptr<java::io::FileOutputStream> cVar0;
	
	//    .param p1, "fd"    # Ljava/io/FileDescriptor;
	cVar0 = std::make_shared<java::io::FileOutputStream>(fd);
	java::io::OutputStreamWriter::(cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::FileWriter::FileWriter(std::shared_ptr<java::lang::String> fileName)
{
	
	std::shared_ptr<java::io::FileOutputStream> cVar0;
	
	//    .param p1, "fileName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 070        value = {
	// 071            Ljava/io/IOException;
	// 072        }
	// 073    .end annotation
	cVar0 = std::make_shared<java::io::FileOutputStream>(fileName);
	java::io::OutputStreamWriter::(cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Z)V
java::io::FileWriter::FileWriter(std::shared_ptr<java::lang::String> fileName,bool append)
{
	
	std::shared_ptr<java::io::FileOutputStream> cVar0;
	
	//    .param p1, "fileName"    # Ljava/lang/String;
	//    .param p2, "append"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 092        value = {
	// 093            Ljava/io/IOException;
	// 094        }
	// 095    .end annotation
	cVar0 = std::make_shared<java::io::FileOutputStream>(fileName, append);
	java::io::OutputStreamWriter::(cVar0);
	return;

}


