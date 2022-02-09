// CPP L:\smali2cpp20\x64\Release\out\java\lang\ArrayIndexOutOfBoundsException.smali
#include "java2ctype.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static java::lang::ArrayIndexOutOfBoundsException::serialVersionUID = -0x47000adea8815bbcL;
// .method public constructor <init>()V
java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/IndexOutOfBoundsException;-><init>()V
	return;

}
// .method public constructor <init>(I)V
java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(int index)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "index"    # I
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::IndexOutOfBoundsException::(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Array index out of range: ")))->append(index)->toString());
	return;

}
// .method public constructor <init>(II)V
java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(int sourceLength,int index)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "sourceLength"    # I
	//    .param p2, "index"    # I
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::IndexOutOfBoundsException::(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("length=")))->append(sourceLength)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; index=")))->append(index)->toString());
	return;

}
// .method public constructor <init>(III)V
java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(int sourceLength,int offset,int count)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "sourceLength"    # I
	//    .param p2, "offset"    # I
	//    .param p3, "count"    # I
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::IndexOutOfBoundsException::(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("length=")))->append(sourceLength)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; regionStart=")))->append(offset)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; regionLength=")))->append(count)->toString());
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::ArrayIndexOutOfBoundsException::ArrayIndexOutOfBoundsException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::IndexOutOfBoundsException::(s);
	return;

}


