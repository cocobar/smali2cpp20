// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\IllformedLocaleException.smali
#include "java2ctype.h"
#include "android.icu.util.IllformedLocaleException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::util::IllformedLocaleException::serialVersionUID = 0x1L;
// .method public constructor <init>()V
android::icu::util::IllformedLocaleException::IllformedLocaleException()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	this->_errIdx = -0x1;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::IllformedLocaleException::IllformedLocaleException(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	java::lang::RuntimeException::(message);
	this->_errIdx = -0x1;
	return;

}
// .method public constructor <init>(Ljava/lang/String;I)V
android::icu::util::IllformedLocaleException::IllformedLocaleException(std::shared_ptr<java::lang::String> message,int errorIndex)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "errorIndex"    # I
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( errorIndex >= 0 )
		goto label_cond_1f;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_e:
	java::lang::RuntimeException::(cVar0->append(message)->append(cVar1)->toString());
	this->_errIdx = -0x1;
	this->_errIdx = errorIndex;
	return;
	// 089    .line 54
label_cond_1f:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" [at index ")))->append(errorIndex)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();
	goto label_goto_e;

}
// .method public getErrorIndex()I
int android::icu::util::IllformedLocaleException::getErrorIndex()
{
	
	return this->_errIdx;

}


