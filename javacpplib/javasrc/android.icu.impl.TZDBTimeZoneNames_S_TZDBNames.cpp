// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TZDBTimeZoneNames$TZDBNames.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNames.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.String.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues;
static android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::EMPTY_TZDBNAMES;
static android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::KEYS;
// .method private static synthetic -getandroid-icu-text-TimeZoneNames$NameTypeSwitchesValues()[I
int android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::_getandroid_icu_text_TimeZoneNames_S_NameTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::TimeZoneNames_S_NameType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION->ordinal()] = 0x3;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_5c
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT->ordinal()] = 0x4;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_5a
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC->ordinal()] = 0x5;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_58;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_58
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD->ordinal()] = 0x6;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_56;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_56
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT->ordinal()] = 0x1;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_54;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_54
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC->ordinal()] = 0x7;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_52;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_52
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD->ordinal()] = 0x2;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_50;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_50
label_goto_4d:
	android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_50:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_52:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_54:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_56:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_58:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_5a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_5c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::static_cinit()
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> cVar1;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar2;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames>(cVar0, cVar0);
	android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::EMPTY_TZDBNAMES = cVar1;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x2);
	cVar2[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ss"));
	cVar2[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sd"));
	android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::KEYS = cVar2;
	return;

}
// .method private constructor <init>([Ljava/lang/String;[Ljava/lang/String;)V
android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::TZDBTimeZoneNames_S_TZDBNames(std::shared_ptr<std::vector<java::lang::String>> names,std::shared_ptr<std::vector<java::lang::String>> parseRegions)
{
	
	//    .param p1, "names"    # [Ljava/lang/String;
	//    .param p2, "parseRegions"    # [Ljava/lang/String;
	// 233    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_names = names;
	this->_parseRegions = parseRegions;
	return;

}
// .method static getInstance(Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;)Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::getInstance(std::shared_ptr<android::icu::impl::ICUResourceBundle> zoneStrings,std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> table;
	std::vector<std::any> tryCatchExcetionList;
	std::shared<std::vector<std::vector<java::lang::String>>> names;
	int i;
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> regionsRes;
	std::shared<std::vector<std::vector<java::lang::String>>> parseRegions;
	
	//    .param p0, "zoneStrings"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p1, "key"    # Ljava/lang/String;
	if ( !(zoneStrings) )  
		goto label_cond_5;
	if ( key )     
		goto label_cond_8;
label_cond_5:
	return android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::EMPTY_TZDBNAMES;
	// 264    .line 154
label_cond_8:
	if ( !(key->length()) )  
		goto label_cond_5;
	0x0;
	//    .local v6, "table":Landroid/icu/impl/ICUResourceBundle;
	try {
	//label_try_start_f:
	table = zoneStrings->get(key);
	//    .end local v6    # "table":Landroid/icu/impl/ICUResourceBundle;
	table->checkCast("android::icu::impl::ICUResourceBundle");
	//label_try_end_15:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2d;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_f .. :try_end_15} :catch_2d
	//    .local v6, "table":Landroid/icu/impl/ICUResourceBundle;
	//    .local v2, "isEmpty":Z
	names = std::make_shared<std::vector<std::vector<java::lang::String>>>(android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::KEYS->size());
	//    .local v3, "names":[Ljava/lang/String;
	i = 0x0;
	//    .local v1, "i":I
label_goto_1c:
	if ( i >= names->size() )
		goto label_cond_35;
	try {
	//label_try_start_1f:
	names[i] = table->getString(android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::KEYS[i]);
	//label_try_end_29:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_1f .. :try_end_29} :catch_31
	0x0;
label_goto_2a:
	i = ( i + 0x1);
	goto label_goto_1c;
	// 332    .line 161
	// 333    .end local v1    # "i":I
	// 334    .end local v2    # "isEmpty":Z
	// 335    .end local v3    # "names":[Ljava/lang/String;
	// 336    .end local v6    # "table":Landroid/icu/impl/ICUResourceBundle;
label_catch_2d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	return android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::EMPTY_TZDBNAMES;
	// 346    .line 171
	// 347    .end local v0    # "e":Ljava/util/MissingResourceException;
	// 348    .restart local v1    # "i":I
	// 349    .restart local v2    # "isEmpty":Z
	// 350    .restart local v3    # "names":[Ljava/lang/String;
	// 351    .restart local v6    # "table":Landroid/icu/impl/ICUResourceBundle;
label_catch_31:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/util/MissingResourceException;
	names[i] = 0x0;
	goto label_goto_2a;
	// 361    .line 176
	// 362    .end local v0    # "e":Ljava/util/MissingResourceException;
label_cond_35:
	if ( !(0x1) )  
		goto label_cond_3a;
	return android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::EMPTY_TZDBNAMES;
	// 371    .line 180
label_cond_3a:
	//    .local v4, "parseRegions":[Ljava/lang/String;
	try {
	//label_try_start_3b:
	regionsRes = table->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("parseRegions")));
	regionsRes->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v5, "regionsRes":Landroid/icu/impl/ICUResourceBundle;
	if ( regionsRes->getType() )     
		goto label_cond_5a;
	parseRegions = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	//    .local v4, "parseRegions":[Ljava/lang/String;
	parseRegions[0x0] = regionsRes->getString();
	//label_try_end_54:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_67;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_3b .. :try_end_54} :catch_67
	//    .end local v4    # "parseRegions":[Ljava/lang/String;
	//    .end local v5    # "regionsRes":Landroid/icu/impl/ICUResourceBundle;
label_cond_54:
label_goto_54:
	cVar0 = std::make_shared<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames>(names, parseRegions);
	return cVar0;
	// 422    .line 186
	// 423    .local v4, "parseRegions":[Ljava/lang/String;
	// 424    .restart local v5    # "regionsRes":Landroid/icu/impl/ICUResourceBundle;
label_cond_5a:
	try {
	//label_try_start_5a:
	if ( regionsRes->getType() != 0x8 )
		goto label_cond_54;
	//label_try_end_65:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_67;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_5a .. :try_end_65} :catch_67
	//    .local v4, "parseRegions":[Ljava/lang/String;
	goto label_goto_54;
	// 445    .line 189
	// 446    .end local v4    # "parseRegions":[Ljava/lang/String;
	// 447    .end local v5    # "regionsRes":Landroid/icu/impl/ICUResourceBundle;
label_catch_67:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/util/MissingResourceException;
	goto label_goto_54;

}
// .method getName(Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::getName(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type)
{
	
	//    .param p1, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	if ( this->_names )     
		goto label_cond_6;
	return 0x0;
	// 472    .line 200
label_cond_6:
	//    .local v0, "name":Ljava/lang/String;
	// switch
	{
	auto item = ( android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::-getandroid-icu-text-TimeZoneNames$NameTypeSwitchesValues({const[class].FS-Param})[type->ordinal()] );
	if (item == 1) goto label_pswitch_1b;
	if (item == 2) goto label_pswitch_15;
	}
	//    .end local v0    # "name":Ljava/lang/String;
label_goto_14:
	return name;
	// 495    .line 203
	// 496    .restart local v0    # "name":Ljava/lang/String;
label_pswitch_15:
	//    .local v0, "name":Ljava/lang/String;
	goto label_goto_14;
	// 507    .line 206
	// 508    .local v0, "name":Ljava/lang/String;
label_pswitch_1b:
	//    .local v0, "name":Ljava/lang/String;
	goto label_goto_14;
	// 519    .line 201
	// 520    nop
	// 522    :pswitch_data_22
	// 523    .packed-switch 0x1
	// 524        :pswitch_1b
	// 525        :pswitch_15
	// 526    .end packed-switch

}
// .method getParseRegions()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::getParseRegions()
{
	
	return this->_parseRegions;

}


