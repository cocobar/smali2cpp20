// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$DayPeriodAllowedHoursSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateTimePatternGenerator_S_DayPeriodAllowedHoursSink.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

// .method private constructor <init>(Ljava/util/HashMap;)V
android::icu::text::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink(std::shared_ptr<java::util::HashMap<java::lang::String,std::vector<java::lang::String>>> tempMap)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 036        value = {
	// 037            "(",
	// 038            "Ljava/util/HashMap",
	// 039            "<",
	// 040            "Ljava/lang/String;",
	// 041            "[",
	// 042            "Ljava/lang/String;",
	// 043            ">;)V"
	// 044        }
	// 045    .end annotation
	//    .local p1, "tempMap":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;[Ljava/lang/String;>;"
	// 050    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	this->tempMap = tempMap;
	return;

}
// .method synthetic constructor <init>(Ljava/util/HashMap;Landroid/icu/text/DateTimePatternGenerator$DayPeriodAllowedHoursSink;)V
android::icu::text::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink(std::shared_ptr<java::util::HashMap> tempMap,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink> _this1)
{
	
	//    .param p1, "tempMap"    # Ljava/util/HashMap;
	//    .param p2, "-this1"    # Landroid/icu/text/DateTimePatternGenerator$DayPeriodAllowedHoursSink;
	android::icu::text::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink::(tempMap);
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	int j;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v4, "timeData":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_32;
	//    .local v3, "regionOrLocale":Ljava/lang/String;
	//    .local v0, "formatList":Landroid/icu/impl/UResource$Table;
	j = 0x0;
	//    .local v2, "j":I
label_goto_14:
	if ( !(value->getTable()->getKeyAndValue(j, key, value)) )  
		goto label_cond_2f;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("allowed")))) )  
		goto label_cond_2c;
	this->tempMap->put(key->toString(), value->getStringArrayOrStringAsArray());
label_cond_2c:
	j = ( j + 0x1);
	goto label_goto_14;
	// 143    .line 360
label_cond_2f:
	i = ( i + 0x1);
	goto label_goto_5;
	// 149    .line 369
	// 150    .end local v0    # "formatList":Landroid/icu/impl/UResource$Table;
	// 151    .end local v2    # "j":I
	// 152    .end local v3    # "regionOrLocale":Ljava/lang/String;
label_cond_32:
	return;

}


