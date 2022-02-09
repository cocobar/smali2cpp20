// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralFormat$PluralSelectorAdapter.smali
#include "java2ctype.h"
#include "android.icu.text.PluralFormat_S_PluralSelectorAdapter.h"
#include "android.icu.text.PluralFormat.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::text::PluralFormat_S_PluralSelectorAdapter::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::PluralFormat_S_PluralSelectorAdapter::static_cinit()
{
	
	android::icu::text::PluralFormat_S_PluralSelectorAdapter::_assertionsDisabled = ( android::icu::text::PluralFormat_S_PluralSelectorAdapter()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>(Landroid/icu/text/PluralFormat;)V
android::icu::text::PluralFormat_S_PluralSelectorAdapter::PluralFormat_S_PluralSelectorAdapter(std::shared_ptr<android::icu::text::PluralFormat> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/PluralFormat;
	this->this_S_0 = this_S_0;
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/PluralFormat;Landroid/icu/text/PluralFormat$PluralSelectorAdapter;)V
android::icu::text::PluralFormat_S_PluralSelectorAdapter::PluralFormat_S_PluralSelectorAdapter(std::shared_ptr<android::icu::text::PluralFormat> this_S_0,std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/PluralFormat;
	//    .param p2, "-this1"    # Landroid/icu/text/PluralFormat$PluralSelectorAdapter;
	android::icu::text::PluralFormat_S_PluralSelectorAdapter::(this_S_0);
	return;

}
// .method public select(Ljava/lang/Object;D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralFormat_S_PluralSelectorAdapter::select(std::shared_ptr<java::lang::Object> context,double cVar0)
{
	
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> dec;
	double cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "context"    # Ljava/lang/Object;
	//    .param p2, "number"    # D
	dec = context;
	dec->checkCast("android::icu::text::PluralRules_S_FixedDecimal");
	//    .local v0, "dec":Landroid/icu/text/PluralRules$FixedDecimal;
	if ( android::icu::text::PluralFormat_S_PluralSelectorAdapter::_assertionsDisabled )     
		goto label_cond_1d;
	if ( !(dec->isNegative) )  
		goto label_cond_e;
	cVar0 = (0.0 - cVar0);
	//    .end local p2    # "number":D
label_cond_e:
	if ( (dec->source < cVar0) )     
		goto label_cond_1b;
	cVar1 = 0x1;
label_goto_13:
	if ( cVar1 )     
		goto label_cond_1d;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
label_cond_1b:
	cVar1 = 0x0;
	goto label_goto_13;
	// 122    .line 544
label_cond_1d:
	return android::icu::text::PluralFormat::-get0(this->this_S_0)->select(dec);

}


