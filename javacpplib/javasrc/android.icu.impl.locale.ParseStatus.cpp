// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\ParseStatus.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.ParseStatus.h"
#include "java.lang.String.h"

// .method public constructor <init>()V
android::icu::impl::locale::ParseStatus::ParseStatus()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_parseLength = 0x0;
	this->_errorIndex = -0x1;
	this->_errorMsg = 0x0;
	return;

}
// .method public getErrorIndex()I
int android::icu::impl::locale::ParseStatus::getErrorIndex()
{
	
	return this->_errorIndex;

}
// .method public getErrorMessage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::ParseStatus::getErrorMessage()
{
	
	return this->_errorMsg;

}
// .method public getParseLength()I
int android::icu::impl::locale::ParseStatus::getParseLength()
{
	
	return this->_parseLength;

}
// .method public isError()Z
bool android::icu::impl::locale::ParseStatus::isError()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->_errorIndex < 0 ) 
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public reset()V
void android::icu::impl::locale::ParseStatus::reset()
{
	
	this->_parseLength = 0x0;
	this->_errorIndex = -0x1;
	this->_errorMsg = 0x0;
	return;

}


