// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$UnitDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat_S_MeasureFormatData.h"
#include "android.icu.text.MeasureFormat_S_UnitDataSink.h"
#include "android.icu.util.ICUException.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.EnumMap.h"
#include "java.util.Map.h"

// .method constructor <init>(Landroid/icu/text/MeasureFormat$MeasureFormatData;)V
android::icu::text::MeasureFormat_S_UnitDataSink::MeasureFormat_S_UnitDataSink(std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> outputData)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "outputData"    # Landroid/icu/text/MeasureFormat$MeasureFormatData;
	// 038    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->sb = cVar0;
	this->cacheData = outputData;
	return;

}
// .method static widthFromAlias(Landroid/icu/impl/UResource$Value;)Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::MeasureFormat_S_UnitDataSink::widthFromAlias(std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p0, "value"    # Landroid/icu/impl/UResource$Value;
	s = value->getAliasString();
	//    .local v0, "s":Ljava/lang/String;
	if ( !(s->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("/LOCALE/units")))) )  
		goto label_cond_40;
	if ( s->length() != 0xd )
		goto label_cond_18;
	return android::icu::text::MeasureFormat_S_FormatWidth::WIDE;
	// 088    .line 914
label_cond_18:
	if ( s->length() != 0x12 )
		goto label_cond_2c;
	if ( !(s->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("Short")))) )  
		goto label_cond_2c;
	return android::icu::text::MeasureFormat_S_FormatWidth::SHORT;
	// 111    .line 916
label_cond_2c:
	if ( s->length() != 0x13 )
		goto label_cond_40;
	if ( !(s->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("Narrow")))) )  
		goto label_cond_40;
	return android::icu::text::MeasureFormat_S_FormatWidth::NARROW;
	// 134    .line 920
label_cond_40:
	return 0x0;

}
// .method static widthFromKey(Landroid/icu/impl/UResource$Key;)Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::MeasureFormat_S_UnitDataSink::widthFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	int cVar0;
	
	//    .param p0, "key"    # Landroid/icu/impl/UResource$Key;
	cVar0 = 0x5;
	if ( !(key->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("units")))) )  
		goto label_cond_2b;
	if ( key->length() != cVar0 )
		goto label_cond_13;
	return android::icu::text::MeasureFormat_S_FormatWidth::WIDE;
	// 169    .line 899
label_cond_13:
	if ( !(key->regionMatches(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("Short")))) )  
		goto label_cond_1f;
	return android::icu::text::MeasureFormat_S_FormatWidth::SHORT;
	// 184    .line 901
label_cond_1f:
	if ( !(key->regionMatches(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("Narrow")))) )  
		goto label_cond_2b;
	return android::icu::text::MeasureFormat_S_FormatWidth::NARROW;
	// 199    .line 905
label_cond_2b:
	return 0x0;

}
// .method consumeAlias(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::MeasureFormat_S_UnitDataSink::consumeAlias(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> sourceWidth;
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> targetWidth;
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::util::ICUException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	sourceWidth = android::icu::text::MeasureFormat_S_UnitDataSink::widthFromKey(key);
	//    .local v0, "sourceWidth":Landroid/icu/text/MeasureFormat$FormatWidth;
	if ( sourceWidth )     
		goto label_cond_7;
	return;
	// 226    .line 872
label_cond_7:
	targetWidth = android::icu::text::MeasureFormat_S_UnitDataSink::widthFromAlias(value);
	//    .local v1, "targetWidth":Landroid/icu/text/MeasureFormat$FormatWidth;
	if ( targetWidth )     
		goto label_cond_36;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::util::ICUException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Units data fallback from ")))->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" to unknown ")))->append(value->getAliasString())->toString());
	// throw
	throw cVar0;
	// 279    .line 879
label_cond_36:
	if ( !(this->cacheData->widthFallback[targetWidth->ordinal()]) )  
		goto label_cond_72;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::util::ICUException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Units data fallback from ")))->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" to ")))->append(value->getAliasString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" which falls back to something else")))->toString());
	// throw
	throw cVar2;
	// 344    .line 883
label_cond_72:
	this->cacheData->widthFallback[sourceWidth->ordinal()] = targetWidth;
	return;

}
// .method consumeCompoundPattern(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::MeasureFormat_S_UnitDataSink::consumeCompoundPattern(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int cVar0;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	cVar0 = 0x2;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("per")))) )  
		goto label_cond_1d;
	this->cacheData->styleToPerPattern->put(this->width, android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(value->getString(), this->sb, cVar0, cVar0));
label_cond_1d:
	return;

}
// .method consumePattern(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::MeasureFormat_S_UnitDataSink::consumePattern(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("dnam")))) )  
		goto label_cond_d;
	this->setDnamIfAbsent(value);
label_goto_c:
	return;
	// 426    .line 789
label_cond_d:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("per")))) )  
		goto label_cond_1d;
	this->setFormatterIfAbsent(android::icu::text::MeasureFormat_S_MeasureFormatData::PER_UNIT_INDEX, value, 0x1);
	goto label_goto_c;
	// 445    .line 796
label_cond_1d:
	this->setFormatterIfAbsent(android::icu::impl::StandardPlural::indexFromString(key), value, 0x0);
	goto label_goto_c;

}
// .method consumeSubtypeTable(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::MeasureFormat_S_UnitDataSink::consumeSubtypeTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int i;
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	this->unit = android::icu::util::MeasureUnit::internalGetInstance(this->type, key->toString());
	this->patterns = 0x0;
	if ( value->getType() )     
		goto label_cond_20;
	this->setFormatterIfAbsent(android::icu::impl::StandardPlural::OTHER->ordinal(), value, 0x0);
label_cond_1f:
	return;
	// 504    .line 812
label_cond_20:
	if ( value->getType() != 0x2 )
		goto label_cond_38;
	//    .local v1, "patternTableTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_2c:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_1f;
	this->consumePattern(key, value);
	i = ( i + 0x1);
	goto label_goto_2c;
	// 539    .line 819
	// 540    .end local v0    # "i":I
	// 541    .end local v1    # "patternTableTable":Landroid/icu/impl/UResource$Table;
label_cond_38:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::util::ICUException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Data for unit \'")))->append(this->unit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' is in an unknown format")))->toString());
	// throw
	throw cVar0;

}
// .method public consumeTable(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::MeasureFormat_S_UnitDataSink::consumeTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> cVar0;
	int i;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	cVar0 = android::icu::text::MeasureFormat_S_UnitDataSink::widthFromKey(key);
	this->width = cVar0;
	if ( !(cVar0) )  
		goto label_cond_19;
	//    .local v1, "unitTypesTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_19;
	this->consumeUnitTypesTable(key, value);
	i = ( i + 0x1);
	goto label_goto_d;
	// 616    .line 893
	// 617    .end local v0    # "i":I
	// 618    .end local v1    # "unitTypesTable":Landroid/icu/impl/UResource$Table;
label_cond_19:
	return;

}
// .method consumeUnitTypesTable(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::MeasureFormat_S_UnitDataSink::consumeUnitTypesTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int i;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")))) )  
		goto label_cond_a;
label_cond_9:
	return;
	// 642    .line 843
label_cond_a:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("compound")))) )  
		goto label_cond_2e;
	if ( this->cacheData->hasPerFormatter(this->width) )     
		goto label_cond_9;
	//    .local v0, "compoundTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v1, "i":I
label_goto_22:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_9;
	this->consumeCompoundPattern(key, value);
	i = ( i + 0x1);
	goto label_goto_22;
	// 688    .line 851
	// 689    .end local v0    # "compoundTable":Landroid/icu/impl/UResource$Table;
	// 690    .end local v1    # "i":I
label_cond_2e:
	this->type = key->toString();
	//    .local v2, "subtypeTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_39:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_9;
	this->consumeSubtypeTable(key, value);
	i = ( i + 0x1);
	goto label_goto_39;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::MeasureFormat_S_UnitDataSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v1, "widthsTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_1c;
	if ( value->getType() != 0x3 )
		goto label_cond_18;
	this->consumeAlias(key, value);
label_goto_15:
	i = ( i + 0x1);
	goto label_goto_5;
	// 766    .line 931
label_cond_18:
	this->consumeTable(key, value);
	goto label_goto_15;
	// 772    .line 934
label_cond_1c:
	return;

}
// .method setDnamIfAbsent(Landroid/icu/impl/UResource$Value;)V
void android::icu::text::MeasureFormat_S_UnitDataSink::setDnamIfAbsent(std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<java::util::EnumMap> styleToDnam;
	
	//    .param p1, "value"    # Landroid/icu/impl/UResource$Value;
	styleToDnam = this->cacheData->unitToStyleToDnam->get(this->unit);
	styleToDnam->checkCast("java::util::EnumMap");
	//    .local v0, "styleToDnam":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/MeasureFormat$FormatWidth;Ljava/lang/String;>;"
	if ( styleToDnam )     
		goto label_cond_1e;
	//    .end local v0    # "styleToDnam":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/MeasureFormat$FormatWidth;Ljava/lang/String;>;"
	styleToDnam = std::make_shared<java::util::EnumMap>(android::icu::text::MeasureFormat_S_FormatWidth());
	//    .restart local v0    # "styleToDnam":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/MeasureFormat$FormatWidth;Ljava/lang/String;>;"
	this->cacheData->unitToStyleToDnam->put(this->unit, styleToDnam);
label_cond_1e:
	if ( styleToDnam->get(this->width) )     
		goto label_cond_2f;
	styleToDnam->put(this->width, value->getString());
label_cond_2f:
	return;

}
// .method setFormatterIfAbsent(ILandroid/icu/impl/UResource$Value;I)V
void android::icu::text::MeasureFormat_S_UnitDataSink::setFormatterIfAbsent(int index,std::shared_ptr<android::icu::impl::UResource_S_Value> value,int minPlaceholders)
{
	
	std::shared_ptr<java::util::EnumMap> styleToPatterns;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "index"    # I
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "minPlaceholders"    # I
	if ( this->patterns )     
		goto label_cond_33;
	styleToPatterns = this->cacheData->unitToStyleToPatterns->get(this->unit);
	styleToPatterns->checkCast("java::util::EnumMap");
	//    .local v0, "styleToPatterns":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/MeasureFormat$FormatWidth;[Ljava/lang/String;>;"
	if ( styleToPatterns )     
		goto label_cond_49;
	//    .end local v0    # "styleToPatterns":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/MeasureFormat$FormatWidth;[Ljava/lang/String;>;"
	styleToPatterns = std::make_shared<java::util::EnumMap>(android::icu::text::MeasureFormat_S_FormatWidth());
	//    .restart local v0    # "styleToPatterns":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/MeasureFormat$FormatWidth;[Ljava/lang/String;>;"
	this->cacheData->unitToStyleToPatterns->put(this->unit, styleToPatterns);
label_goto_22:
	if ( this->patterns )     
		goto label_cond_33;
	this->patterns = std::make_shared<std::vector<std::vector<java::lang::String>>>(android::icu::text::MeasureFormat_S_MeasureFormatData::PATTERN_COUNT);
	styleToPatterns->put(this->width, this->patterns);
	//    .end local v0    # "styleToPatterns":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/MeasureFormat$FormatWidth;[Ljava/lang/String;>;"
label_cond_33:
	if ( this->patterns[index] )     
		goto label_cond_48;
	this->patterns[index] = android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(value->getString(), this->sb, minPlaceholders, 0x1);
label_cond_48:
	return;
	// 940    .line 757
	// 941    .restart local v0    # "styleToPatterns":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/MeasureFormat$FormatWidth;[Ljava/lang/String;>;"
label_cond_49:
	cVar0 = styleToPatterns->get(this->width);
	cVar0->checkCast("std::vector<java::lang::String>");
	this->patterns = cVar0;
	goto label_goto_22;

}


