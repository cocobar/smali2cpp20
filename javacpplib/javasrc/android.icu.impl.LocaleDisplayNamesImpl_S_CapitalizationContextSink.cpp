// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$CapitalizationContextSink.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_CapitalizationContextSink.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_CapitalizationContextUsage.h"
#include "android.icu.impl.LocaleDisplayNamesImpl.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DisplayContext.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

// .method private constructor <init>(Landroid/icu/impl/LocaleDisplayNamesImpl;)V
android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextSink::LocaleDisplayNamesImpl_S_CapitalizationContextSink(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/LocaleDisplayNamesImpl;
	this->this_S_0 = this_S_0;
	// 032    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	this->hasCapitalizationUsage = 0x0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/LocaleDisplayNamesImpl;Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextSink;)V
android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextSink::LocaleDisplayNamesImpl_S_CapitalizationContextSink(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> this_S_0,std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextSink> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/LocaleDisplayNamesImpl;
	//    .param p2, "-this1"    # Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextSink;
	android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextSink::(this_S_0);
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	bool cVar0;
	int i;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> usage;
	auto intVector;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	cVar0 = 0x1;
	//    .local v0, "contextsTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_48;
	usage = android::icu::impl::LocaleDisplayNamesImpl::-get2({const[class].FS-Param})->get(key->toString());
	usage->checkCast("android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage");
	//    .local v4, "usage":Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextUsage;
	if ( usage )     
		goto label_cond_20;
label_cond_1d:
label_goto_1d:
	i = ( i + 0x1);
	goto label_goto_7;
	// 110    .line 117
label_cond_20:
	intVector = value->getIntVector();
	//    .local v2, "intVector":[I
	if ( intVector->size() <  0x2 )
		goto label_cond_1d;
	if ( android::icu::impl::LocaleDisplayNamesImpl::-get0(this->this_S_0) != android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_45;
	//    .local v3, "titlecaseInt":I
label_goto_34:
	if ( !(titlecaseInt) )  
		goto label_cond_1d;
	android::icu::impl::LocaleDisplayNamesImpl::-get1(this->this_S_0)[usage->ordinal()] = cVar0;
	this->hasCapitalizationUsage = cVar0;
	goto label_goto_1d;
	// 161    .line 121
	// 162    .end local v3    # "titlecaseInt":I
label_cond_45:
	//    .restart local v3    # "titlecaseInt":I
	goto label_goto_34;
	// 169    .line 127
	// 170    .end local v2    # "intVector":[I
	// 171    .end local v3    # "titlecaseInt":I
	// 172    .end local v4    # "usage":Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextUsage;
label_cond_48:
	return;

}


