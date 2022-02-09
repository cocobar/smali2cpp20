// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelDateTimeDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_AbsoluteUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Direction.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelDateTimeDataSink.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Style.h"
#include "android.icu.text.RelativeDateTimeFormatter.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.CharSequence.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.reflect.Array.h"
#include "java.util.EnumMap.h"

static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::_android_icu_text_RelativeDateTimeFormatter_S_StyleSwitchesValues;
// .method private static synthetic -getandroid-icu-text-RelativeDateTimeFormatter$StyleSwitchesValues()[I
int android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::_getandroid_icu_text_RelativeDateTimeFormatter_S_StyleSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::_android_icu_text_RelativeDateTimeFormatter_S_StyleSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::_android_icu_text_RelativeDateTimeFormatter_S_StyleSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::RelativeDateTimeFormatter_S_Style::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_Style::LONG->ordinal()] = 0x3;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_30
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_Style::NARROW->ordinal()] = 0x1;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_2e
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::RelativeDateTimeFormatter_S_Style::SHORT->ordinal()] = 0x2;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_2c
label_goto_29:
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::_android_icu_text_RelativeDateTimeFormatter_S_StyleSwitchesValues = cVar0;
	return cVar0;
label_catch_2c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_30:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method constructor <init>()V
android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::RelativeDateTimeFormatter_S_RelDateTimeDataSink()
{
	
	std::shared_ptr<java::util::EnumMap> cVar0;
	std::shared_ptr<java::util::EnumMap> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	// 159    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	cVar0 = std::make_shared<java::util::EnumMap>(android::icu::text::RelativeDateTimeFormatter_S_Style());
	this->qualitativeUnitMap = cVar0;
	cVar1 = std::make_shared<java::util::EnumMap>(android::icu::text::RelativeDateTimeFormatter_S_Style());
	this->styleRelUnitPatterns = cVar1;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	this->sb = cVar2;
	return;

}
// .method private handleAlias(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::handleAlias(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> sourceStyle;
	std::shared_ptr<java::lang::Object> targetStyle;
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::util::ICUException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	sourceStyle = this->styleFromKey(key);
	//    .local v1, "sourceStyle":Landroid/icu/text/RelativeDateTimeFormatter$Style;
	//    .local v0, "limit":I
	//    .local v3, "unit":Landroid/icu/text/RelativeDateTimeFormatter$RelDateTimeDataSink$DateTimeUnit;
	if ( !(android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::-wrap0(key->substring(0x0, (key->length() - android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::styleSuffixLength(sourceStyle))))) )  
		goto label_cond_88;
	targetStyle = this->styleFromAlias(value);
	//    .local v2, "targetStyle":Landroid/icu/text/RelativeDateTimeFormatter$Style;
	if ( sourceStyle != targetStyle )
		goto label_cond_40;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::util::ICUException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid style fallback from ")))->append(sourceStyle)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" to itself")))->toString());
	// throw
	throw cVar0;
	// 272    .line 1113
label_cond_40:
	if ( android::icu::text::RelativeDateTimeFormatter::-get0({const[class].FS-Param})[sourceStyle->ordinal()] )     
		goto label_cond_57;
	android::icu::text::RelativeDateTimeFormatter::-get0({const[class].FS-Param})[sourceStyle->ordinal()] = targetStyle;
label_cond_56:
	return;
	// 301    .line 1115
label_cond_57:
	if ( android::icu::text::RelativeDateTimeFormatter::-get0({const[class].FS-Param})[sourceStyle->ordinal()] == targetStyle )
		goto label_cond_56;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::util::ICUException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Inconsistent style fallback for style ")))->append(sourceStyle)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" to ")))->append(targetStyle)->toString());
	// throw
	throw cVar2;
	// 352    .line 1121
	// 353    .end local v2    # "targetStyle":Landroid/icu/text/RelativeDateTimeFormatter$Style;
label_cond_88:
	return;

}
// .method private handlePlainDirection(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::handlePlainDirection(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> absUnit;
	std::shared_ptr<java::util::EnumMap> unitMap;
	std::shared_ptr<java::util::EnumMap> dirMap;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	absUnit = this->unit->absUnit;
	//    .local v0, "absUnit":Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
	if ( absUnit )     
		goto label_cond_7;
	return;
	// 376    .line 1068
label_cond_7:
	unitMap = this->qualitativeUnitMap->get(this->style);
	unitMap->checkCast("java::util::EnumMap");
	//    .local v2, "unitMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	if ( unitMap )     
		goto label_cond_21;
	//    .end local v2    # "unitMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	unitMap = std::make_shared<java::util::EnumMap>(android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit());
	//    .restart local v2    # "unitMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	this->qualitativeUnitMap->put(this->style, unitMap);
label_cond_21:
	dirMap = unitMap->get(absUnit);
	dirMap->checkCast("java::util::EnumMap");
	//    .local v1, "dirMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	if ( dirMap )     
		goto label_cond_33;
	//    .end local v1    # "dirMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	dirMap = std::make_shared<java::util::EnumMap>(android::icu::text::RelativeDateTimeFormatter_S_Direction());
	//    .restart local v1    # "dirMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	unitMap->put(absUnit, dirMap);
label_cond_33:
	if ( dirMap->get(android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN) )     
		goto label_cond_44;
	dirMap->put(android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN, value->toString());
label_cond_44:
	return;

}
// .method private styleFromAlias(Landroid/icu/impl/UResource$Value;)Landroid/icu/text/RelativeDateTimeFormatter$Style;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::styleFromAlias(std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "value"    # Landroid/icu/impl/UResource$Value;
	s = value->getAliasString();
	//    .local v0, "s":Ljava/lang/String;
	if ( !(s->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-short")))) )  
		goto label_cond_10;
	return android::icu::text::RelativeDateTimeFormatter_S_Style::SHORT;
	// 481    .line 953
label_cond_10:
	if ( !(s->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-narrow")))) )  
		goto label_cond_1c;
	return android::icu::text::RelativeDateTimeFormatter_S_Style::NARROW;
	// 496    .line 956
label_cond_1c:
	return android::icu::text::RelativeDateTimeFormatter_S_Style::LONG;

}
// .method private styleFromKey(Landroid/icu/impl/UResource$Key;)Landroid/icu/text/RelativeDateTimeFormatter$Style;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::styleFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	if ( !(key->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-short")))) )  
		goto label_cond_c;
	return android::icu::text::RelativeDateTimeFormatter_S_Style::SHORT;
	// 522    .line 942
label_cond_c:
	if ( !(key->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-narrow")))) )  
		goto label_cond_18;
	return android::icu::text::RelativeDateTimeFormatter_S_Style::NARROW;
	// 537    .line 945
label_cond_18:
	return android::icu::text::RelativeDateTimeFormatter_S_Style::LONG;

}
// .method private static styleSuffixLength(Landroid/icu/text/RelativeDateTimeFormatter$Style;)I
int android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::styleSuffixLength(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style)
{
	
	//    .param p0, "style"    # Landroid/icu/text/RelativeDateTimeFormatter$Style;
	// switch
	{
	auto item = ( android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::-getandroid-icu-text-RelativeDateTimeFormatter$StyleSwitchesValues({const[class].FS-Param})[style->ordinal()] );
	if (item == 1) goto label_pswitch_11;
	if (item == 2) goto label_pswitch_f;
	}
	return 0x0;
	// 567    .line 962
label_pswitch_f:
	return 0x6;
	// 573    .line 963
label_pswitch_11:
	return 0x7;
	// 579    .line 961
	// 580    nop
	// 582    :pswitch_data_14
	// 583    .packed-switch 0x1
	// 584        :pswitch_11
	// 585        :pswitch_f
	// 586    .end packed-switch

}
// .method public consumeTableRelative(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::consumeTableRelative(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int i;
	std::shared_ptr<java::util::EnumMap> absMap;
	std::shared_ptr<java::util::EnumMap> unitStrings;
	std::shared_ptr<java::lang::Object> keyDirection;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> absUnit;
	std::shared_ptr<java::util::EnumMap> dirMap;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .local v6, "unitTypesTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v3, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_92;
	if ( value->getType() )     
		goto label_cond_53;
	//    .local v7, "valueString":Ljava/lang/String;
	absMap = this->qualitativeUnitMap->get(this->style);
	absMap->checkCast("java::util::EnumMap");
	//    .local v0, "absMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	if ( this->unit->relUnit != android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::SECONDS )
		goto label_cond_56;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("0")))) )  
		goto label_cond_56;
	unitStrings = absMap->get(android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::NOW);
	unitStrings->checkCast("java::util::EnumMap");
	//    .local v5, "unitStrings":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	if ( unitStrings )     
		goto label_cond_46;
	//    .end local v5    # "unitStrings":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	unitStrings = std::make_shared<java::util::EnumMap>(android::icu::text::RelativeDateTimeFormatter_S_Direction());
	//    .restart local v5    # "unitStrings":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	absMap->put(android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::NOW, unitStrings);
label_cond_46:
	if ( unitStrings->get(android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN) )     
		goto label_cond_53;
	unitStrings->put(android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN, value->getString());
	//    .end local v0    # "absMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	//    .end local v5    # "unitStrings":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	//    .end local v7    # "valueString":Ljava/lang/String;
label_cond_53:
label_goto_53:
	i = ( i + 0x1);
	goto label_goto_5;
	// 709    .line 990
	// 710    .restart local v0    # "absMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	// 711    .restart local v7    # "valueString":Ljava/lang/String;
label_cond_56:
	keyDirection = android::icu::text::RelativeDateTimeFormatter::-wrap0(key);
	//    .local v4, "keyDirection":Landroid/icu/text/RelativeDateTimeFormatter$Direction;
	if ( !(keyDirection) )  
		goto label_cond_53;
	absUnit = this->unit->absUnit;
	//    .local v1, "absUnit":Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
	if ( !(absUnit) )  
		goto label_cond_53;
	if ( absMap )     
		goto label_cond_72;
	//    .end local v0    # "absMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	absMap = std::make_shared<java::util::EnumMap>(android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit());
	//    .restart local v0    # "absMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	this->qualitativeUnitMap->put(this->style, absMap);
label_cond_72:
	dirMap = absMap->get(absUnit);
	dirMap->checkCast("java::util::EnumMap");
	//    .local v2, "dirMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	if ( dirMap )     
		goto label_cond_84;
	//    .end local v2    # "dirMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	dirMap = std::make_shared<java::util::EnumMap>(android::icu::text::RelativeDateTimeFormatter_S_Direction());
	//    .restart local v2    # "dirMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	absMap->put(absUnit, dirMap);
label_cond_84:
	if ( dirMap->get(keyDirection) )     
		goto label_cond_53;
	dirMap->put(keyDirection, value->getString());
	goto label_goto_53;
	// 790    .line 1014
	// 791    .end local v0    # "absMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;"
	// 792    .end local v1    # "absUnit":Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
	// 793    .end local v2    # "dirMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;"
	// 794    .end local v4    # "keyDirection":Landroid/icu/text/RelativeDateTimeFormatter$Direction;
	// 795    .end local v7    # "valueString":Ljava/lang/String;
label_cond_92:
	return;

}
// .method public consumeTableRelativeTime(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::consumeTableRelativeTime(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int i;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	if ( this->unit->relUnit )     
		goto label_cond_7;
	return;
	// 816    .line 1021
label_cond_7:
	//    .local v1, "unitTypesTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_c:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_31;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("past")))) )  
		goto label_cond_24;
	this->pastFutureIndex = 0x0;
label_goto_1e:
	this->consumeTimeDetail(key, value);
label_cond_21:
	i = ( i + 0x1);
	goto label_goto_c;
	// 858    .line 1025
label_cond_24:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("future")))) )  
		goto label_cond_21;
	this->pastFutureIndex = 0x1;
	goto label_goto_1e;
	// 875    .line 1033
label_cond_31:
	return;

}
// .method public consumeTimeDetail(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::consumeTimeDetail(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::util::EnumMap> unitPatterns;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> patterns;
	std::shared<std::vector<int[]>> cVar3;
	int i;
	int pluralIndex;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	//    .local v4, "unitTypesTable":Landroid/icu/impl/UResource$Table;
	unitPatterns = this->styleRelUnitPatterns->get(this->style);
	unitPatterns->checkCast("java::util::EnumMap");
	//    .local v3, "unitPatterns":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;[[Ljava/lang/String;>;"
	if ( unitPatterns )     
		goto label_cond_21;
	//    .end local v3    # "unitPatterns":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;[[Ljava/lang/String;>;"
	unitPatterns = std::make_shared<java::util::EnumMap>(android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit());
	//    .restart local v3    # "unitPatterns":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;[[Ljava/lang/String;>;"
	this->styleRelUnitPatterns->put(this->style, unitPatterns);
label_cond_21:
	patterns = unitPatterns->get(this->unit->relUnit);
	patterns->checkCast("std::vector<std::vector<java::lang::String>>");
	//    .local v1, "patterns":[[Ljava/lang/String;
	if ( patterns )     
		goto label_cond_44;
	cVar3 = std::make_shared<std::vector<int[]>>(cVar0);
	cVar3[cVar2] = cVar0;
	cVar3[cVar1] = android::icu::impl::StandardPlural::COUNT;
	patterns = java::lang::reflect::Array::newInstance(java::lang::String(), cVar3);
	//    .end local v1    # "patterns":[[Ljava/lang/String;
	patterns->checkCast("std::vector<std::vector<java::lang::String>>");
	//    .restart local v1    # "patterns":[[Ljava/lang/String;
	unitPatterns->put(this->unit->relUnit, patterns);
label_cond_44:
	i = 0x0;
	//    .local v0, "i":I
label_goto_45:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_74;
	if ( value->getType() )     
		goto label_cond_71;
	pluralIndex = android::icu::impl::StandardPlural::indexFromString(key->toString());
	//    .local v2, "pluralIndex":I
	if ( patterns[this->pastFutureIndex][pluralIndex] )     
		goto label_cond_71;
	patterns[this->pastFutureIndex][pluralIndex] = android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(value->getString(), this->sb, cVar2, cVar1);
	//    .end local v2    # "pluralIndex":I
label_cond_71:
	i = ( i + 0x1);
	goto label_goto_45;
	// 1036    .line 1060
label_cond_74:
	return;

}
// .method public consumeTimeUnit(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::consumeTimeUnit(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int i;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .local v1, "unitTypesTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_40;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("dn")))) )  
		goto label_cond_1d;
	if ( value->getType() )     
		goto label_cond_1d;
	this->handlePlainDirection(key, value);
label_cond_1d:
	if ( value->getType() != 0x2 )
		goto label_cond_30;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("relative")))) )  
		goto label_cond_33;
	this->consumeTableRelative(key, value);
label_cond_30:
label_goto_30:
	i = ( i + 0x1);
	goto label_goto_5;
	// 1111    .line 1093
label_cond_33:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("relativeTime")))) )  
		goto label_cond_30;
	this->consumeTableRelativeTime(key, value);
	goto label_goto_30;
	// 1126    .line 1098
label_cond_40:
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int cVar0;
	int i;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	cVar0 = 0x3;
	if ( value->getType() != cVar0 )
		goto label_cond_8;
	return;
	// 1150    .line 1130
label_cond_8:
	//    .local v2, "table":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_44;
	if ( value->getType() != cVar0 )
		goto label_cond_1f;
	this->handleAlias(key, value, noFallback);
label_cond_1c:
label_goto_1c:
	i = ( i + 0x1);
	goto label_goto_d;
	// 1185    .line 1137
label_cond_1f:
	this->style = this->styleFromKey(key);
	//    .local v1, "limit":I
	this->unit = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::-wrap0(key->substring(0x0, (key->length() - android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink::styleSuffixLength(this->style))));
	if ( !(this->unit) )  
		goto label_cond_1c;
	this->consumeTimeUnit(key, value);
	goto label_goto_1c;
	// 1230    .line 1146
	// 1231    .end local v1    # "limit":I
label_cond_44:
	return;

}


