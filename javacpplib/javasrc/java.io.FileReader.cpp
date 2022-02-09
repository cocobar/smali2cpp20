// CPP L:\smali2cpp20\x64\Release\out\java\io\FileReader.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.io.FileInputStream.h"
#include "java.io.FileReader.h"
#include "java.io.InputStreamReader.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/io/File;)V
java::io::FileReader::FileReader(std::shared_ptr<java::io::File> file)
{
	
	std::shared_ptr<java::io::FileInputStream> cVar0;
	
	//    .param p1, "file"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 011        value = {
	// 012            Ljava/io/FileNotFoundException;
	// 013        }
	// 014    .end annotation
	cVar0 = std::make_shared<java::io::FileInputStream>(file);
	java::io::InputStreamReader::(cVar0);
	return;

}
// .method public constructor <init>(Ljava/io/FileDescriptor;)V
java::io::FileReader::FileReader(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	std::shared_ptr<java::io::FileInputStream> cVar0;
	
	//    .param p1, "fd"    # Ljava/io/FileDescriptor;
	cVar0 = std::make_shared<java::io::FileInputStream>(fd);
	java::io::InputStreamReader::(cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::FileReader::FileReader(std::shared_ptr<java::lang::String> fileName)
{
	
	std::shared_ptr<java::io::FileInputStream> cVar0;
	
	//    .param p1, "fileName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 048        value = {
	// 049            Ljava/io/FileNotFoundException;
	// 050        }
	// 051    .end annotation
	cVar0 = std::make_shared<java::io::FileInputStream>(fileName);
	java::io::InputStreamReader::(cVar0);
	return;

}


