// CPP L:\smali2cpp20\x64\Release\out\java\io\File$TempDirectory.smali
#include "java2ctype.h"
#include "java.io.File_S_TempDirectory.h"
#include "java.io.File.h"
#include "java.io.IOException.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"

// .method private constructor <init>()V
java::io::File_S_TempDirectory::File_S_TempDirectory()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static generateFile(Ljava/lang/String;Ljava/lang/String;Ljava/io/File;)Ljava/io/File;
std::shared_ptr<java::io::File> java::io::File_S_TempDirectory::generateFile(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::io::File> dir)
{
	
	long long n;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::io::File> f;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p0, "prefix"    # Ljava/lang/String;
	//    .param p1, "suffix"    # Ljava/lang/String;
	//    .param p2, "dir"    # Ljava/io/File;
	//    .annotation system Ldalvik/annotation/Throws;
	// 034        value = {
	// 035            Ljava/io/IOException;
	// 036        }
	// 037    .end annotation
	n = java::lang::Math::randomLongInternal({const[class].FS-Param});
	//    .local v2, "n":J
	if ( (n > -0x8000000000000000L) )     
		goto label_cond_49;
	n = 0x0;
label_goto_c:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	name = cVar0->append(prefix)->append(java::lang::Long::toString(n))->append(suffix)->toString();
	//    .local v1, "name":Ljava/lang/String;
	f = std::make_shared<java::io::File>(dir, name);
	//    .local v0, "f":Ljava/io/File;
	if ( !(name->equals(f->getName())) )  
		goto label_cond_3a;
	if ( !(f->isInvalid()) )  
		goto label_cond_68;
label_cond_3a:
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_4e;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to create temporary file")));
	// throw
	throw cVar1;
	// 123    .line 1883
	// 124    .end local v0    # "f":Ljava/io/File;
	// 125    .end local v1    # "name":Ljava/lang/String;
label_cond_49:
	n = java::lang::Math::abs(n);
	goto label_goto_c;
	// 133    .line 1896
	// 134    .restart local v0    # "f":Ljava/io/File;
	// 135    .restart local v1    # "name":Ljava/lang/String;
label_cond_4e:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::io::IOException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to create temporary file, ")))->append(f)->toString());
	// throw
	throw cVar2;
	// 161    .line 1898
label_cond_68:
	return f;

}


