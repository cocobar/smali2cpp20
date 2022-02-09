// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit$MeasureUnitSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.util.MeasureUnit_S_MeasureUnitSink.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
android::icu::util::MeasureUnit_S_MeasureUnitSink::MeasureUnit_S_MeasureUnitSink()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/MeasureUnit$MeasureUnitSink;)V
android::icu::util::MeasureUnit_S_MeasureUnitSink::MeasureUnit_S_MeasureUnitSink(std::shared_ptr<android::icu::util::MeasureUnit_S_MeasureUnitSink> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/util/MeasureUnit$MeasureUnitSink;
	// 033    invoke-direct {p0}, Landroid/icu/util/MeasureUnit$MeasureUnitSink;-><init>()V
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::util::MeasureUnit_S_MeasureUnitSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i2;
	int i3;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v5, "unitTypesTable":Landroid/icu/impl/UResource$Table;
	i2 = 0x0;
	//    .local v0, "i2":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i2, key, value)) )  
		goto label_cond_30;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("compound")))) )  
		goto label_cond_17;
label_cond_14:
	i2 = ( i2 + 0x1);
	goto label_goto_5;
	// 079    .line 257
label_cond_17:
	//    .local v4, "unitType":Ljava/lang/String;
	//    .local v3, "unitNamesTable":Landroid/icu/impl/UResource$Table;
	i3 = 0x0;
	//    .local v1, "i3":I
label_goto_20:
	if ( !(value->getTable()->getKeyAndValue(i3, key, value)) )  
		goto label_cond_14;
	//    .local v2, "unitName":Ljava/lang/String;
	android::icu::util::MeasureUnit::internalGetInstance(key->toString(), key->toString());
	i3 = ( i3 + 0x1);
	goto label_goto_20;
	// 117    .line 264
	// 118    .end local v1    # "i3":I
	// 119    .end local v2    # "unitName":Ljava/lang/String;
	// 120    .end local v3    # "unitNamesTable":Landroid/icu/impl/UResource$Table;
	// 121    .end local v4    # "unitType":Ljava/lang/String;
label_cond_30:
	return;

}


