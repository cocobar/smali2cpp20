// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$AppendItemNamesSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateTimePatternGenerator_S_AppendItemNamesSink.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "java.lang.String.h"

// .method private constructor <init>(Landroid/icu/text/DateTimePatternGenerator;)V
android::icu::text::DateTimePatternGenerator_S_AppendItemNamesSink::DateTimePatternGenerator_S_AppendItemNamesSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/DateTimePatternGenerator;
	this->this_S_0 = this_S_0;
	// 030    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/DateTimePatternGenerator;Landroid/icu/text/DateTimePatternGenerator$AppendItemNamesSink;)V
android::icu::text::DateTimePatternGenerator_S_AppendItemNamesSink::DateTimePatternGenerator_S_AppendItemNamesSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_AppendItemNamesSink> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/DateTimePatternGenerator;
	//    .param p2, "-this1"    # Landroid/icu/text/DateTimePatternGenerator$AppendItemNamesSink;
	android::icu::text::DateTimePatternGenerator_S_AppendItemNamesSink::(this_S_0);
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::DateTimePatternGenerator_S_AppendItemNamesSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	int field;
	int j;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v3, "itemsTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v2, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_3e;
	field = android::icu::text::DateTimePatternGenerator::-wrap2(key);
	//    .local v1, "field":I
	if ( field != -0x1 )
		goto label_cond_15;
label_cond_12:
label_goto_12:
	i = ( i + 0x1);
	goto label_goto_5;
	// 090    .line 218
label_cond_15:
	//    .local v0, "detailsTable":Landroid/icu/impl/UResource$Table;
	j = 0x0;
	//    .local v4, "j":I
label_goto_1a:
	if ( !(value->getTable()->getKeyAndValue(j, key, value)) )  
		goto label_cond_12;
	if ( key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("dn"))) )     
		goto label_cond_2c;
	j = ( j + 0x1);
	goto label_goto_1a;
	// 122    .line 221
label_cond_2c:
	if ( this->this_S_0->getAppendItemName(field) )     
		goto label_cond_12;
	this->this_S_0->setAppendItemName(field, value->toString());
	goto label_goto_12;
	// 143    .line 227
	// 144    .end local v0    # "detailsTable":Landroid/icu/impl/UResource$Table;
	// 145    .end local v1    # "field":I
	// 146    .end local v4    # "j":I
label_cond_3e:
	return;

}


