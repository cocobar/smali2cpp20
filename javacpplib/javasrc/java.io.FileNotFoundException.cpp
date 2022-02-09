// CPP L:\smali2cpp20\x64\Release\out\java\io\FileNotFoundException.smali
#include "java2ctype.h"
#include "java.io.FileNotFoundException.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static java::io::FileNotFoundException::serialVersionUID = -0xc75d4291fde951cL;
// .method public constructor <init>()V
java::io::FileNotFoundException::FileNotFoundException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/IOException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::FileNotFoundException::FileNotFoundException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::io::IOException::(s);
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
java::io::FileNotFoundException::FileNotFoundException(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> reason)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .param p2, "reason"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( reason )     
		goto label_cond_1a;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_e:
	java::io::IOException::(cVar0->append(path)->append(cVar1)->toString());
	return;
	// 069    .line 79
label_cond_1a:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (")))->append(reason)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString();
	goto label_goto_e;

}


