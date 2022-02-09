// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$PluralSelectorContext.smali
#include "java2ctype.h"
#include "android.icu.text.MessageFormat_S_PluralSelectorContext.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Double.h"
#include "java.lang.Number.h"
#include "java.lang.String.h"

// .method private constructor <init>(ILjava/lang/String;Ljava/lang/Number;D)V
android::icu::text::MessageFormat_S_PluralSelectorContext::MessageFormat_S_PluralSelectorContext(int start,std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Number> num,double off)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "name"    # Ljava/lang/String;
	//    .param p3, "num"    # Ljava/lang/Number;
	//    .param p4, "off"    # D
	// 045    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->startIndex = start;
	this->argName = name;
	if ( (off < 0x0) )     
		goto label_cond_12;
	this->number = num;
label_goto_f:
	this->offset = off;
	return;
	// 070    .line 2007
label_cond_12:
	this->number = java::lang::Double::valueOf(( num->doubleValue() - off));
	goto label_goto_f;

}
// .method synthetic constructor <init>(ILjava/lang/String;Ljava/lang/Number;DLandroid/icu/text/MessageFormat$PluralSelectorContext;)V
android::icu::text::MessageFormat_S_PluralSelectorContext::MessageFormat_S_PluralSelectorContext(int start,std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Number> num,double off,std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorContext> _this4)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "name"    # Ljava/lang/String;
	//    .param p3, "num"    # Ljava/lang/Number;
	//    .param p4, "off"    # D
	//    .param p6, "-this4"    # Landroid/icu/text/MessageFormat$PluralSelectorContext;
	android::icu::text::MessageFormat_S_PluralSelectorContext::(start, name, num, off);
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessageFormat_S_PluralSelectorContext::toString()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PluralSelectorContext being formatted, rather than its number")));
	// throw
	throw cVar0;

}


