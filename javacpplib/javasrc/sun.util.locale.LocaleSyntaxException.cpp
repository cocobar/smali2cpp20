// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleSyntaxException.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "sun.util.locale.LocaleSyntaxException.h"

static sun::util::locale::LocaleSyntaxException::serialVersionUID = 0x1L;
// .method public constructor <init>(Ljava/lang/String;)V
sun::util::locale::LocaleSyntaxException::LocaleSyntaxException(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	sun::util::locale::LocaleSyntaxException::(msg, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;I)V
sun::util::locale::LocaleSyntaxException::LocaleSyntaxException(std::shared_ptr<java::lang::String> msg,int errorIndex)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "errorIndex"    # I
	java::lang::Exception::(msg);
	this->index = -0x1;
	this->index = errorIndex;
	return;

}
// .method public getErrorIndex()I
int sun::util::locale::LocaleSyntaxException::getErrorIndex()
{
	
	return this->index;

}


