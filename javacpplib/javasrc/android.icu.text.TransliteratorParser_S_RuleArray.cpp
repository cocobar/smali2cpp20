// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser$RuleArray.smali
#include "java2ctype.h"
#include "android.icu.text.TransliteratorParser_S_RuleArray.h"
#include "android.icu.text.TransliteratorParser_S_RuleBody.h"
#include "java.lang.String.h"

// .method public constructor <init>([Ljava/lang/String;)V
android::icu::text::TransliteratorParser_S_RuleArray::TransliteratorParser_S_RuleArray(std::shared_ptr<std::vector<java::lang::String>> array)
{
	
	//    .param p1, "array"    # [Ljava/lang/String;
	android::icu::text::TransliteratorParser_S_RuleBody::(0x0);
	this->array = array;
	this->i = 0x0;
	return;

}
// .method public handleNextLine()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliteratorParser_S_RuleArray::handleNextLine()
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	if ( this->i >= this->array->size() )
		goto label_cond_12;
	cVar0 = this->i;
	this->i = ( cVar0 + 0x1);
	cVar1 = this->array[cVar0];
label_goto_11:
	return cVar1;
label_cond_12:
	cVar1 = 0x0;
	goto label_goto_11;

}
// .method public reset()V
void android::icu::text::TransliteratorParser_S_RuleArray::reset()
{
	
	this->i = 0x0;
	return;

}


