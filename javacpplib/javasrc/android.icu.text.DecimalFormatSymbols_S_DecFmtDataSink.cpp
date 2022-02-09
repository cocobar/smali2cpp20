// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormatSymbols$DecFmtDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DecimalFormatSymbols_S_DecFmtDataSink.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"

// .method public constructor <init>([Ljava/lang/String;)V
android::icu::text::DecimalFormatSymbols_S_DecFmtDataSink::DecimalFormatSymbols_S_DecFmtDataSink(std::shared_ptr<std::vector<java::lang::String>> numberElements)
{
	
	//    .param p1, "numberElements"    # [Ljava/lang/String;
	// 028    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	this->numberElements = numberElements;
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::DecimalFormatSymbols_S_DecFmtDataSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int j;
	int i;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v2, "symbolsTable":Landroid/icu/impl/UResource$Table;
	j = 0x0;
	//    .local v1, "j":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(j, key, value)) )  
		goto label_cond_33;
	i = 0x0;
	//    .local v0, "i":I
label_goto_c:
	if ( i >= android::icu::text::DecimalFormatSymbols::-get0({const[class].FS-Param})->size() )
		goto label_cond_2d;
	if ( !(key->contentEquals(android::icu::text::DecimalFormatSymbols::-get0({const[class].FS-Param})[i])) )  
		goto label_cond_30;
	if ( this->numberElements[i] )     
		goto label_cond_2d;
	this->numberElements[i] = value->toString();
label_cond_2d:
	j = ( j + 0x1);
	goto label_goto_5;
	// 111    .line 1185
label_cond_30:
	i = ( i + 0x1);
	goto label_goto_c;
	// 117    .line 1194
	// 118    .end local v0    # "i":I
label_cond_33:
	return;

}


