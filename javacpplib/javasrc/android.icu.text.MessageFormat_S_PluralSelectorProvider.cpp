// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$PluralSelectorProvider.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.MessageFormat_S_PluralSelectorContext.h"
#include "android.icu.text.MessageFormat_S_PluralSelectorProvider.h"
#include "android.icu.text.MessageFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Integer.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.Format.h"
#include "java.util.Map.h"

static android::icu::text::MessageFormat_S_PluralSelectorProvider::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::MessageFormat_S_PluralSelectorProvider::static_cinit()
{
	
	android::icu::text::MessageFormat_S_PluralSelectorProvider::_assertionsDisabled = ( android::icu::text::MessageFormat_S_PluralSelectorProvider()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Landroid/icu/text/MessageFormat;Landroid/icu/text/PluralRules$PluralType;)V
android::icu::text::MessageFormat_S_PluralSelectorProvider::MessageFormat_S_PluralSelectorProvider(std::shared_ptr<android::icu::text::MessageFormat> mf,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type)
{
	
	//    .param p1, "mf"    # Landroid/icu/text/MessageFormat;
	//    .param p2, "type"    # Landroid/icu/text/PluralRules$PluralType;
	// 058    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->msgFormat = mf;
	this->type = type;
	return;

}
// .method public select(Ljava/lang/Object;D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessageFormat_S_PluralSelectorProvider::select(std::shared_ptr<java::lang::Object> ctx,double number)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorContext> context;
	std::shared_ptr<java::text::Format> cVar1;
	int cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::text::Format> cVar5;
	
	//    .param p1, "ctx"    # Ljava/lang/Object;
	//    .param p2, "number"    # D
	cVar0 = 0x1;
	if ( this->rules )     
		goto label_cond_14;
	this->rules = android::icu::text::PluralRules::forLocale(android::icu::text::MessageFormat::-get1(this->msgFormat), this->type);
label_cond_14:
	context = ctx;
	context->checkCast("android::icu::text::MessageFormat_S_PluralSelectorContext");
	//    .local v0, "context":Landroid/icu/text/MessageFormat$PluralSelectorContext;
	//    .local v2, "otherIndex":I
	context->numberArgIndex = android::icu::text::MessageFormat::-wrap1(this->msgFormat, android::icu::text::MessageFormat::-wrap2(this->msgFormat, context->startIndex), context->argName);
	if ( context->numberArgIndex <= 0 )
		goto label_cond_49;
	if ( !(android::icu::text::MessageFormat::-get0(this->msgFormat)) )  
		goto label_cond_49;
	cVar1 = android::icu::text::MessageFormat::-get0(this->msgFormat)->get(java::lang::Integer::valueOf(context->numberArgIndex));
	cVar1->checkCast("java::text::Format");
	context->formatter = cVar1;
label_cond_49:
	if ( context->formatter )     
		goto label_cond_57;
	context->formatter = android::icu::text::MessageFormat::-wrap0(this->msgFormat);
	context->forReplaceNumber = cVar0;
label_cond_57:
	if ( android::icu::text::MessageFormat_S_PluralSelectorProvider::_assertionsDisabled )     
		goto label_cond_70;
	if ( (context->number->doubleValue() < number) )     
		goto label_cond_6e;
	cVar2 = cVar0;
label_goto_66:
	if ( cVar2 )     
		goto label_cond_70;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
label_cond_6e:
	cVar2 = 0x0;
	goto label_goto_66;
	// 214    .line 2065
label_cond_70:
	context->numberString = context->formatter->format(context->number);
	if ( !(context->formatter->instanceOf("android::icu::text::DecimalFormat")) )  
		goto label_cond_8f;
	cVar5 = context->formatter;
	cVar5->checkCast("android::icu::text::DecimalFormat");
	//    .local v1, "dec":Landroid/icu/text/PluralRules$FixedDecimal;
	return this->rules->select(cVar5->getFixedDecimal(number));
	// 252    .line 2070
	// 253    .end local v1    # "dec":Landroid/icu/text/PluralRules$FixedDecimal;
label_cond_8f:
	return this->rules->select(number);

}


