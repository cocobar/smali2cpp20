// CPP L:\smali2cpp20\x64\Release\out\java\io\FileDescriptor$1.smali
#include "java2ctype.h"
#include "java.io.FileDescriptor_S_1.h"
#include "java.io.FileDescriptor.h"
#include "java.lang.UnsupportedOperationException.h"

// .method constructor <init>()V
java::io::FileDescriptor_S_1::FileDescriptor_S_1()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public get(Ljava/io/FileDescriptor;)I
int java::io::FileDescriptor_S_1::get(std::shared_ptr<java::io::FileDescriptor> obj)
{
	
	//    .param p1, "obj"    # Ljava/io/FileDescriptor;
	return java::io::FileDescriptor::-get0(obj);

}
// .method public getHandle(Ljava/io/FileDescriptor;)J
long long java::io::FileDescriptor_S_1::getHandle(std::shared_ptr<java::io::FileDescriptor> obj)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "obj"    # Ljava/io/FileDescriptor;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method public set(Ljava/io/FileDescriptor;I)V
void java::io::FileDescriptor_S_1::set(std::shared_ptr<java::io::FileDescriptor> obj,int fd)
{
	
	//    .param p1, "obj"    # Ljava/io/FileDescriptor;
	//    .param p2, "fd"    # I
	java::io::FileDescriptor::-set0(obj, fd);
	return;

}
// .method public setHandle(Ljava/io/FileDescriptor;J)V
void java::io::FileDescriptor_S_1::setHandle(std::shared_ptr<java::io::FileDescriptor> obj,long long handle)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "obj"    # Ljava/io/FileDescriptor;
	//    .param p2, "handle"    # J
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}


