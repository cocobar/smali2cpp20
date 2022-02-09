// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\ParseStatus.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.util.locale.ParseStatus.h"

// .method public constructor <init>()V
sun::util::locale::ParseStatus::ParseStatus()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->reset();
	return;

}
// .method public getErrorIndex()I
int sun::util::locale::ParseStatus::getErrorIndex()
{
	
	return this->errorIndex;

}
// .method public getErrorMessage()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::ParseStatus::getErrorMessage()
{
	
	return this->errorMsg;

}
// .method public getParseLength()I
int sun::util::locale::ParseStatus::getParseLength()
{
	
	return this->parseLength;

}
// .method public isError()Z
bool sun::util::locale::ParseStatus::isError()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->errorIndex < 0 ) 
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public reset()V
void sun::util::locale::ParseStatus::reset()
{
	
	this->parseLength = 0x0;
	this->errorIndex = -0x1;
	this->errorMsg = 0x0;
	return;

}


