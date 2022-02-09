// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit$CurrencyNumericCodeSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.util.MeasureUnit_S_CurrencyNumericCodeSink.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
android::icu::util::MeasureUnit_S_CurrencyNumericCodeSink::MeasureUnit_S_CurrencyNumericCodeSink()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/MeasureUnit$CurrencyNumericCodeSink;)V
android::icu::util::MeasureUnit_S_CurrencyNumericCodeSink::MeasureUnit_S_CurrencyNumericCodeSink(std::shared_ptr<android::icu::util::MeasureUnit_S_CurrencyNumericCodeSink> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/util/MeasureUnit$CurrencyNumericCodeSink;
	// 033    invoke-direct {p0}, Landroid/icu/util/MeasureUnit$CurrencyNumericCodeSink;-><init>()V
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::util::MeasureUnit_S_CurrencyNumericCodeSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i1;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v0, "codesTable":Landroid/icu/impl/UResource$Table;
	i1 = 0x0;
	//    .local v1, "i1":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i1, key, value)) )  
		goto label_cond_18;
	android::icu::util::MeasureUnit::internalGetInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")), key->toString());
	i1 = ( i1 + 0x1);
	goto label_goto_5;
	// 078    .line 277
label_cond_18:
	return;

}


