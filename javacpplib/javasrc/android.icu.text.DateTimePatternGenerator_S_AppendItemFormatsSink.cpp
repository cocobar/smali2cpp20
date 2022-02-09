// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$AppendItemFormatsSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateTimePatternGenerator_S_AppendItemFormatsSink.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "java.lang.AssertionError.h"
#include "java.lang.String.h"

static android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink::static_cinit()
{
	
	android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink::_assertionsDisabled = ( android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>(Landroid/icu/text/DateTimePatternGenerator;)V
android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink::DateTimePatternGenerator_S_AppendItemFormatsSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/DateTimePatternGenerator;
	this->this_S_0 = this_S_0;
	// 054    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/DateTimePatternGenerator;Landroid/icu/text/DateTimePatternGenerator$AppendItemFormatsSink;)V
android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink::DateTimePatternGenerator_S_AppendItemFormatsSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/DateTimePatternGenerator;
	//    .param p2, "-this1"    # Landroid/icu/text/DateTimePatternGenerator$AppendItemFormatsSink;
	android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink::(this_S_0);
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	int field;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v2, "itemsTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_30;
	field = android::icu::text::DateTimePatternGenerator::getAppendFormatNumber(key);
	//    .local v0, "field":I
	if ( android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink::_assertionsDisabled )     
		goto label_cond_1c;
	if ( field != -0x1 )
		goto label_cond_1c;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 117    .line 204
label_cond_1c:
	if ( this->this_S_0->getAppendItemFormat(field) )     
		goto label_cond_2d;
	this->this_S_0->setAppendItemFormat(field, value->toString());
label_cond_2d:
	i = ( i + 0x1);
	goto label_goto_5;
	// 142    .line 208
	// 143    .end local v0    # "field":I
label_cond_30:
	return;

}


