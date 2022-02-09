// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleSyntaxException.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.LocaleSyntaxException.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"

static android::icu::impl::locale::LocaleSyntaxException::serialVersionUID = 0x1L;
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::locale::LocaleSyntaxException::LocaleSyntaxException(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	android::icu::impl::locale::LocaleSyntaxException::(msg, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;I)V
android::icu::impl::locale::LocaleSyntaxException::LocaleSyntaxException(std::shared_ptr<java::lang::String> msg,int errorIndex)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "errorIndex"    # I
	java::lang::Exception::(msg);
	this->_index = -0x1;
	this->_index = errorIndex;
	return;

}
// .method public getErrorIndex()I
int android::icu::impl::locale::LocaleSyntaxException::getErrorIndex()
{
	
	return this->_index;

}


