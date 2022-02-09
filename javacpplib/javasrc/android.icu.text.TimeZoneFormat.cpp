// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TZDBTimeZoneNames.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericMatchInfo.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "android.icu.impl.TimeZoneGenericNames.h"
#include "android.icu.impl.TimeZoneNamesImpl.h"
#include "android.icu.impl.ZoneMeta.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "android.icu.text.NumberingSystem.h"
#include "android.icu.text.TimeZoneFormat_S_GMTOffsetField.h"
#include "android.icu.text.TimeZoneFormat_S_GMTOffsetPatternType.h"
#include "android.icu.text.TimeZoneFormat_S_OffsetFields.h"
#include "android.icu.text.TimeZoneFormat_S_ParseOption.h"
#include "android.icu.text.TimeZoneFormat_S_Style.h"
#include "android.icu.text.TimeZoneFormat_S_TimeType.h"
#include "android.icu.text.TimeZoneFormat_S_TimeZoneFormatCache.h"
#include "android.icu.text.TimeZoneFormat.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "android.icu.util.TimeZone_S_SystemTimeZoneType.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.InvalidObjectException.h"
#include "java.io.ObjectInputStream_S_GetField.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream_S_PutField.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamField.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Boolean.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.text.AttributedString.h"
#include "java.text.FieldPosition.h"
#include "java.text.Format_S_Field.h"
#include "java.text.ParseException.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.BitSet.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"

static android::icu::text::TimeZoneFormat::_android_icu_text_TimeZoneFormat_S_StyleSwitchesValues = nullptr;
static android::icu::text::TimeZoneFormat::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues = nullptr;
static android::icu::text::TimeZoneFormat::_assertionsDisabled;
static android::icu::text::TimeZoneFormat::ALL_GENERIC_NAME_TYPES;
static android::icu::text::TimeZoneFormat::ALL_SIMPLE_NAME_TYPES;
static android::icu::text::TimeZoneFormat::ALT_GMT_STRINGS;
static android::icu::text::TimeZoneFormat::ASCII_DIGITS = std::make_shared<java::lang::String>("0123456789");
static android::icu::text::TimeZoneFormat::DEFAULT_GMT_DIGITS;
static android::icu::text::TimeZoneFormat::DEFAULT_GMT_OFFSET_SEP = ':';
static android::icu::text::TimeZoneFormat::DEFAULT_GMT_PATTERN = std::make_shared<java::lang::String>("GMT{0}");
static android::icu::text::TimeZoneFormat::DEFAULT_GMT_ZERO = std::make_shared<java::lang::String>("GMT");
static android::icu::text::TimeZoneFormat::ISO8601_UTC = std::make_shared<java::lang::String>("Z");
static android::icu::text::TimeZoneFormat::ISO_LOCAL_STYLE_FLAG = 0x100;
static android::icu::text::TimeZoneFormat::ISO_Z_STYLE_FLAG = 0x80;
static android::icu::text::TimeZoneFormat::MAX_OFFSET = 0x5265c00;
static android::icu::text::TimeZoneFormat::MAX_OFFSET_HOUR = 0x17;
static android::icu::text::TimeZoneFormat::MAX_OFFSET_MINUTE = 0x3b;
static android::icu::text::TimeZoneFormat::MAX_OFFSET_SECOND = 0x3b;
static android::icu::text::TimeZoneFormat::MILLIS_PER_HOUR = 0x36ee80;
static android::icu::text::TimeZoneFormat::MILLIS_PER_MINUTE = 0xea60;
static android::icu::text::TimeZoneFormat::MILLIS_PER_SECOND = 0x3e8;
static android::icu::text::TimeZoneFormat::PARSE_GMT_OFFSET_TYPES;
static android::icu::text::TimeZoneFormat::SHORT_ZONE_ID_TRIE = nullptr;
static android::icu::text::TimeZoneFormat::TZID_GMT = std::make_shared<java::lang::String>("Etc/GMT");
static android::icu::text::TimeZoneFormat::UNKNOWN_LOCATION = std::make_shared<java::lang::String>("Unknown");
static android::icu::text::TimeZoneFormat::UNKNOWN_OFFSET = 0x7fffffff;
static android::icu::text::TimeZoneFormat::UNKNOWN_SHORT_ZONE_ID = std::make_shared<java::lang::String>("unk");
static android::icu::text::TimeZoneFormat::UNKNOWN_ZONE_ID = std::make_shared<java::lang::String>("Etc/Unknown");
static android::icu::text::TimeZoneFormat::ZONE_ID_TRIE = nullptr;
static android::icu::text::TimeZoneFormat::_tzfCache = nullptr;
static android::icu::text::TimeZoneFormat::serialPersistentFields;
static android::icu::text::TimeZoneFormat::serialVersionUID = 0x1fa89ded0bc7456eL;
// .method private static synthetic -getandroid-icu-text-TimeZoneFormat$StyleSwitchesValues()[I
int android::icu::text::TimeZoneFormat::_getandroid_icu_text_TimeZoneFormat_S_StyleSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::TimeZoneFormat::_android_icu_text_TimeZoneFormat_S_StyleSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::TimeZoneFormat::_android_icu_text_TimeZoneFormat_S_StyleSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::TimeZoneFormat_S_Style::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::EXEMPLAR_LOCATION->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_100;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_100
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::GENERIC_LOCATION->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_fd;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_fd
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::GENERIC_LONG->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_fa;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_fa
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::GENERIC_SHORT->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f7;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_f7
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_FIXED->ordinal()] = 0x5;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f4;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_f4
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_FULL->ordinal()] = 0x6;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f1;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_f1
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_FIXED->ordinal()] = 0x7;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ee;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_ee
label_goto_4d:
	try {
	//label_try_start_4d:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_FULL->ordinal()] = 0x8;
	//label_try_end_57:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_eb;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_4d .. :try_end_57} :catch_eb
label_goto_57:
	try {
	//label_try_start_57:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_SHORT->ordinal()] = 0x9;
	//label_try_end_61:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e8;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_57 .. :try_end_61} :catch_e8
label_goto_61:
	try {
	//label_try_start_61:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_SHORT->ordinal()] = 0xa;
	//label_try_end_6b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e6;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_61 .. :try_end_6b} :catch_e6
label_goto_6b:
	try {
	//label_try_start_6b:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_FIXED->ordinal()] = 0xb;
	//label_try_end_75:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e4;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_6b .. :try_end_75} :catch_e4
label_goto_75:
	try {
	//label_try_start_75:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_FULL->ordinal()] = 0xc;
	//label_try_end_7f:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e2;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_75 .. :try_end_7f} :catch_e2
label_goto_7f:
	try {
	//label_try_start_7f:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_LOCAL_FIXED->ordinal()] = 0xd;
	//label_try_end_89:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e0;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_7f .. :try_end_89} :catch_e0
label_goto_89:
	try {
	//label_try_start_89:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_LOCAL_FULL->ordinal()] = 0xe;
	//label_try_end_93:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_de;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_89 .. :try_end_93} :catch_de
label_goto_93:
	try {
	//label_try_start_93:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT->ordinal()] = 0xf;
	//label_try_end_9d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_dc;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_93 .. :try_end_9d} :catch_dc
label_goto_9d:
	try {
	//label_try_start_9d:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT_SHORT->ordinal()] = 0x10;
	//label_try_end_a7:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_da;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_9d .. :try_end_a7} :catch_da
label_goto_a7:
	try {
	//label_try_start_a7:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_LONG->ordinal()] = 0x11;
	//label_try_end_b1:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d8;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_a7 .. :try_end_b1} :catch_d8
label_goto_b1:
	try {
	//label_try_start_b1:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_SHORT->ordinal()] = 0x12;
	//label_try_end_bb:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d6;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_b1 .. :try_end_bb} :catch_d6
label_goto_bb:
	try {
	//label_try_start_bb:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ZONE_ID->ordinal()] = 0x13;
	//label_try_end_c5:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d4;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_bb .. :try_end_c5} :catch_d4
label_goto_c5:
	try {
	//label_try_start_c5:
	cVar0[android::icu::text::TimeZoneFormat_S_Style::ZONE_ID_SHORT->ordinal()] = 0x14;
	//label_try_end_cf:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d2;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_c5 .. :try_end_cf} :catch_d2
label_goto_cf:
	android::icu::text::TimeZoneFormat::_android_icu_text_TimeZoneFormat_S_StyleSwitchesValues = cVar0;
	return cVar0;
label_catch_d2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_cf;
label_catch_d4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_c5;
label_catch_d6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_bb;
label_catch_d8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_b1;
label_catch_da:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_a7;
label_catch_dc:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_9d;
label_catch_de:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_93;
label_catch_e0:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_89;
label_catch_e2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_7f;
label_catch_e4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_75;
label_catch_e6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_6b;
label_catch_e8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_61;
label_catch_eb:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_57;
label_catch_ee:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_f1:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_f4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_f7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_fa:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_fd:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_100:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method private static synthetic -getandroid-icu-text-TimeZoneNames$NameTypeSwitchesValues()[I
int android::icu::text::TimeZoneFormat::_getandroid_icu_text_TimeZoneNames_S_NameTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::TimeZoneFormat::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::TimeZoneFormat::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::TimeZoneNames_S_NameType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION->ordinal()] = 0x19;
	//label_try_end_18:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5f;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_18} :catch_5f
label_goto_18:
	try {
	//label_try_start_18:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT->ordinal()] = 0x1;
	//label_try_end_21:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5d;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_18 .. :try_end_21} :catch_5d
label_goto_21:
	try {
	//label_try_start_21:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC->ordinal()] = 0x1a;
	//label_try_end_2b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5b;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_21 .. :try_end_2b} :catch_5b
label_goto_2b:
	try {
	//label_try_start_2b:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD->ordinal()] = 0x2;
	//label_try_end_34:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_59;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_2b .. :try_end_34} :catch_59
label_goto_34:
	try {
	//label_try_start_34:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT->ordinal()] = 0x3;
	//label_try_end_3d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_57;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_34 .. :try_end_3d} :catch_57
label_goto_3d:
	try {
	//label_try_start_3d:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC->ordinal()] = 0x1b;
	//label_try_end_47:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_55;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3d .. :try_end_47} :catch_55
label_goto_47:
	try {
	//label_try_start_47:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD->ordinal()] = 0x4;
	//label_try_end_50:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_53;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_47 .. :try_end_50} :catch_53
label_goto_50:
	android::icu::text::TimeZoneFormat::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_53:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_50;
label_catch_55:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_47;
label_catch_57:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3d;
label_catch_59:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_34;
label_catch_5b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_2b;
label_catch_5d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_21;
label_catch_5f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_18;

}
// .method static constructor <clinit>()V
void android::icu::text::TimeZoneFormat::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>>> cVar7;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeZoneFormatCache> cVar8;
	std::shared<std::vector<std::vector<java::io::ObjectStreamField>>> cVar9;
	std::shared_ptr<java::io::ObjectStreamField> cVar10;
	std::shared_ptr<java::io::ObjectStreamField> cVar11;
	std::shared_ptr<java::io::ObjectStreamField> cVar12;
	std::shared_ptr<java::io::ObjectStreamField> cVar13;
	std::shared_ptr<java::io::ObjectStreamField> cVar14;
	std::shared_ptr<java::io::ObjectStreamField> cVar15;
	std::shared_ptr<java::io::ObjectStreamField> cVar16;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	android::icu::text::TimeZoneFormat::_assertionsDisabled = ( android::icu::text::TimeZoneFormat()->desiredAssertionStatus() ^ 0x1);
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar5[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GMT"));
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("UTC"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("UT"));
	android::icu::text::TimeZoneFormat::ALT_GMT_STRINGS = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0xa);
	cVar6[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("0"));
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("1"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("2"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("3"));
	cVar6[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("4"));
	cVar6[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("5"));
	cVar6[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("6"));
	cVar6[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("7"));
	cVar6[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("8"));
	cVar6[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("9"));
	android::icu::text::TimeZoneFormat::DEFAULT_GMT_DIGITS = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>>>(0x6);
	cVar7[cVar4] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HMS;
	cVar7[cVar3] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HMS;
	cVar7[cVar2] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HM;
	cVar7[cVar1] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HM;
	cVar7[cVar0] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_H;
	cVar7[0x5] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_H;
	android::icu::text::TimeZoneFormat::PARSE_GMT_OFFSET_TYPES = cVar7;
	cVar8 = std::make_shared<android::icu::text::TimeZoneFormat_S_TimeZoneFormatCache>(0x0);
	android::icu::text::TimeZoneFormat::_tzfCache = cVar8;
	android::icu::text::TimeZoneFormat::ALL_SIMPLE_NAME_TYPES = java::util::EnumSet::of(android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD, android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT, android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD, android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT, android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION);
	android::icu::text::TimeZoneFormat::ALL_GENERIC_NAME_TYPES = java::util::EnumSet::of(android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LOCATION, android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG, android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT);
	cVar9 = std::make_shared<std::vector<std::vector<java::io::ObjectStreamField>>>(0x7);
	cVar10 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("_locale")), android::icu::util::ULocale());
	cVar9[cVar4] = cVar10;
	cVar11 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("_tznames")), android::icu::text::TimeZoneNames());
	cVar9[cVar3] = cVar11;
	cVar12 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtPattern")), java::lang::String());
	cVar9[cVar2] = cVar12;
	cVar13 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtOffsetPatterns")), std::vector<java::lang::String>());
	cVar9[cVar1] = cVar13;
	cVar14 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtOffsetDigits")), std::vector<java::lang::String>());
	cVar9[cVar0] = cVar14;
	cVar15 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtZeroFormat")), java::lang::String());
	cVar9[0x5] = cVar15;
	cVar16 = std::make_shared<java::io::ObjectStreamField>(std::make_shared<java::lang::String>(std::make_shared<char[]>("_parseAllStyles")), java::lang::Boolean::TYPE);
	cVar9[0x6] = cVar16;
	android::icu::text::TimeZoneFormat::serialPersistentFields = cVar9;
	return;

}
// .method protected constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::TimeZoneFormat::TimeZoneFormat(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> gmtPattern;
	std::shared_ptr<java::lang::String> hourFormats;
	std::shared<std::vector<std::vector<java::lang::String>>> gmtOffsetPatterns;
	auto hourPatterns;
	std::shared_ptr<android::icu::text::NumberingSystem> ns;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> patType;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::vector<std::any> tryCatchExcetionList;
	auto hourFormats;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x1;
	cVar1 = 0x0;
	// 1016    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->_locale = locale;
	this->_tznames = android::icu::text::TimeZoneNames::getInstance(locale);
	gmtPattern = 0x0;
	//    .local v3, "gmtPattern":Ljava/lang/String;
	hourFormats = 0x0;
	//    .local v4, "hourFormats":Ljava/lang/String;
	this->_gmtZeroFormat = std::make_shared<java::lang::String>(std::make_shared<char[]>("GMT"));
	try {
	//label_try_start_14:
	bundle = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/zone")), locale);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//label_try_end_1d:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_cb;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_14 .. :try_end_1d} :catch_cb
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	try {
	//label_try_start_1d:
	//label_try_end_23:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d4;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_1d .. :try_end_23} :catch_d4
	gmtPattern = bundle->getStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneStrings/gmtFormat")));
	//    .end local v3    # "gmtPattern":Ljava/lang/String;
label_goto_24:
	try {
	//label_try_start_24:
	//label_try_end_2a:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d1;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_24 .. :try_end_2a} :catch_d1
	hourFormats = bundle->getStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneStrings/hourFormat")));
	//    .end local v4    # "hourFormats":Ljava/lang/String;
label_goto_2b:
	try {
	//label_try_start_2b:
	this->_gmtZeroFormat = bundle->getStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneStrings/gmtZeroFormat")));
	//label_try_end_34:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ce;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_2b .. :try_end_34} :catch_ce
	//    .end local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
label_goto_34:
	if ( gmtPattern )     
		goto label_cond_39;
	gmtPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("GMT{0}"));
label_cond_39:
	this->initGMTPattern(gmtPattern);
	gmtOffsetPatterns = std::make_shared<std::vector<std::vector<java::lang::String>>>(android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::values({const[class].FS-Param})->size());
	//    .local v2, "gmtOffsetPatterns":[Ljava/lang/String;
	if ( !(hourFormats) )  
		goto label_cond_b5;
	hourPatterns = hourFormats->split(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")), 0x2);
	//    .local v5, "hourPatterns":[Ljava/lang/String;
	gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_H->ordinal()] = android::icu::text::TimeZoneFormat::truncateOffsetPattern(hourPatterns[cVar1]);
	gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HM->ordinal()] = hourPatterns[cVar1];
	gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HMS->ordinal()] = android::icu::text::TimeZoneFormat::expandOffsetPattern(hourPatterns[cVar1]);
	gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_H->ordinal()] = android::icu::text::TimeZoneFormat::truncateOffsetPattern(hourPatterns[cVar0]);
	gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HM->ordinal()] = hourPatterns[cVar0];
	gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HMS->ordinal()] = android::icu::text::TimeZoneFormat::expandOffsetPattern(hourPatterns[cVar0]);
	//    .end local v5    # "hourPatterns":[Ljava/lang/String;
label_cond_99:
	this->initGMTOffsetPatterns(gmtOffsetPatterns);
	this->_gmtOffsetDigits = android::icu::text::TimeZoneFormat::DEFAULT_GMT_DIGITS;
	ns = android::icu::text::NumberingSystem::getInstance(locale);
	//    .local v6, "ns":Landroid/icu/text/NumberingSystem;
	if ( ns->isAlgorithmic() )     
		goto label_cond_b4;
	this->_gmtOffsetDigits = android::icu::text::TimeZoneFormat::toCodePoints(ns->getDescription());
label_cond_b4:
	return;
	// 1246    .line 427
	// 1247    .end local v6    # "ns":Landroid/icu/text/NumberingSystem;
label_cond_b5:
	cVar2 = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::values({const[class].FS-Param});
label_goto_ba:
	if ( cVar1 >= cVar2->size() )
		goto label_cond_99;
	patType = cVar2[cVar1];
	//    .local v7, "patType":Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	gmtOffsetPatterns[patType->ordinal()] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::-wrap1(patType);
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_ba;
	// 1277    .line 408
	// 1278    .end local v2    # "gmtOffsetPatterns":[Ljava/lang/String;
	// 1279    .end local v7    # "patType":Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	// 1280    .restart local v3    # "gmtPattern":Ljava/lang/String;
	// 1281    .restart local v4    # "hourFormats":Ljava/lang/String;
label_catch_cb:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/util/MissingResourceException;
	goto label_goto_34;
	// 1288    .line 405
	// 1289    .end local v1    # "e":Ljava/util/MissingResourceException;
	// 1290    .end local v3    # "gmtPattern":Ljava/lang/String;
	// 1291    .end local v4    # "hourFormats":Ljava/lang/String;
	// 1292    .restart local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
label_catch_ce:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v1    # "e":Ljava/util/MissingResourceException;
	goto label_goto_34;
	// 1299    .line 400
	// 1300    .end local v1    # "e":Ljava/util/MissingResourceException;
	// 1301    .restart local v4    # "hourFormats":Ljava/lang/String;
label_catch_d1:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v1    # "e":Ljava/util/MissingResourceException;
	goto label_goto_2b;
	// 1308    .line 395
	// 1309    .end local v1    # "e":Ljava/util/MissingResourceException;
	// 1310    .restart local v3    # "gmtPattern":Ljava/lang/String;
label_catch_d4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v1    # "e":Ljava/util/MissingResourceException;
	goto label_goto_24;

}
// .method private appendOffsetDigits(Ljava/lang/StringBuilder;II)V
void android::icu::text::TimeZoneFormat::appendOffsetDigits(std::shared_ptr<java::lang::StringBuilder> buf,int n,int minDigits)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int numDigits;
	int i;
	
	//    .param p1, "buf"    # Ljava/lang/StringBuilder;
	//    .param p2, "n"    # I
	//    .param p3, "minDigits"    # I
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_11;
	if ( n < 0 ) 
		goto label_cond_b;
	if ( n <  0x3c )
		goto label_cond_11;
label_cond_b:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1345    .line 2095
label_cond_11:
	if ( n <  0xa )
		goto label_cond_25;
	numDigits = 0x2;
	//    .local v1, "numDigits":I
label_goto_16:
	i = 0x0;
	//    .local v0, "i":I
label_goto_17:
	if ( i >= (minDigits - numDigits) )
		goto label_cond_27;
	buf->append(this->_gmtOffsetDigits[0x0]);
	i = ( i + 0x1);
	goto label_goto_17;
	// 1376    .line 2095
	// 1377    .end local v0    # "i":I
	// 1378    .end local v1    # "numDigits":I
label_cond_25:
	numDigits = 0x1;
	//    .restart local v1    # "numDigits":I
	goto label_goto_16;
	// 1385    .line 2099
	// 1386    .restart local v0    # "i":I
label_cond_27:
	if ( numDigits != 0x2 )
		goto label_cond_33;
	buf->append(this->_gmtOffsetDigits[( n / 0xa)]);
label_cond_33:
	buf->append(this->_gmtOffsetDigits[( n % 0xa)]);
	return;

}
// .method private checkAbuttingHoursAndMinutes()V
void android::icu::text::TimeZoneFormat::checkAbuttingHoursAndMinutes()
{
	
	bool cVar0;
	std::shared_ptr<std::vector<std::vector<java::lang::Object>>> cVar1;
	int cVar2;
	auto items;
	int afterH;
	int cVar3;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetField> item;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetField> fld;
	
	cVar0 = 0x0;
	this->_abuttingOffsetHoursAndMinutes = cVar0;
	cVar1 = this->_gmtOffsetPatternItems;
	cVar2 = cVar0;
label_goto_7:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_31;
	items = cVar1[cVar2];
	//    .local v3, "items":[Ljava/lang/Object;
	afterH = 0x0;
	//    .local v0, "afterH":Z
	cVar3 = cVar0;
label_goto_e:
	if ( cVar3 >= items->size() )
		goto label_cond_2d;
	item = items[cVar3];
	//    .local v2, "item":Ljava/lang/Object;
	if ( !(item->instanceOf("android::icu::text::TimeZoneFormat_S_GMTOffsetField")) )  
		goto label_cond_2b;
	fld = item;
	fld->checkCast("android::icu::text::TimeZoneFormat_S_GMTOffsetField");
	//    .local v1, "fld":Landroid/icu/text/TimeZoneFormat$GMTOffsetField;
	if ( !(afterH) )  
		goto label_cond_21;
	this->_abuttingOffsetHoursAndMinutes = 0x1;
	//    .end local v1    # "fld":Landroid/icu/text/TimeZoneFormat$GMTOffsetField;
label_cond_1e:
label_goto_1e:
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_e;
	// 1479    .line 1899
	// 1480    .restart local v1    # "fld":Landroid/icu/text/TimeZoneFormat$GMTOffsetField;
label_cond_21:
	if ( fld->getType() != 0x48 )
		goto label_cond_1e;
	afterH = 0x1;
	goto label_goto_1e;
	// 1495    .line 1902
	// 1496    .end local v1    # "fld":Landroid/icu/text/TimeZoneFormat$GMTOffsetField;
label_cond_2b:
	if ( !(afterH) )  
		goto label_cond_1e;
	//    .end local v2    # "item":Ljava/lang/Object;
label_cond_2d:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_7;
	// 1509    .line 1907
	// 1510    .end local v0    # "afterH":Z
	// 1511    .end local v3    # "items":[Ljava/lang/Object;
label_cond_31:
	return;

}
// .method private static expandOffsetPattern(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::expandOffsetPattern(std::shared_ptr<java::lang::String> offsetHM)
{
	
	int cVar0;
	int idx_mm;
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	int idx_H;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "offsetHM"    # Ljava/lang/String;
	cVar0 = 0x0;
	idx_mm = offsetHM->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("mm")));
	//    .local v1, "idx_mm":I
	if ( idx_mm >= 0 )
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad time zone hour pattern data")));
	// throw
	throw cVar1;
	// 1543    .line 2053
label_cond_13:
	//    .local v2, "sep":Ljava/lang/String;
	idx_H = offsetHM->substring(cVar0, idx_mm)->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("H")));
	//    .local v0, "idx_H":I
	if ( idx_H < 0 ) 
		goto label_cond_29;
label_cond_29:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	return cVar2->append(offsetHM->substring(cVar0, ( idx_mm + 0x2)))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ss")))->append(offsetHM->substring(( idx_mm + 0x2)))->toString();

}
// .method private formatExemplarLocation(Landroid/icu/util/TimeZone;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::formatExemplarLocation(std::shared_ptr<android::icu::util::TimeZone> tz)
{
	
	std::shared_ptr<java::lang::String> location;
	
	//    .param p1, "tz"    # Landroid/icu/util/TimeZone;
	location = this->getTimeZoneNames()->getExemplarLocationName(android::icu::impl::ZoneMeta::getCanonicalCLDRID(tz));
	//    .local v0, "location":Ljava/lang/String;
	if ( location )     
		goto label_cond_1e;
	location = this->getTimeZoneNames()->getExemplarLocationName(std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/Unknown")));
	if ( location )     
		goto label_cond_1e;
label_cond_1e:
	return location;

}
// .method private formatOffsetISO8601(IZZZZ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::formatOffsetISO8601(int offset,bool isBasic,bool useUtcIndicator,bool isShort,bool ignoreSeconds)
{
	
	int absOffset;
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared<std::vector<int[]>> fields;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	int lastIdx;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int idx;
	
	//    .param p1, "offset"    # I
	//    .param p2, "isBasic"    # Z
	//    .param p3, "useUtcIndicator"    # Z
	//    .param p4, "isShort"    # Z
	//    .param p5, "ignoreSeconds"    # Z
	if ( offset >= 0 )
		goto label_cond_14;
	absOffset = (0 - offset);
	//    .local v0, "absOffset":I
label_goto_3:
	if ( !(useUtcIndicator) )  
		goto label_cond_16;
	if ( absOffset <  0x3e8 )
		goto label_cond_10;
	if ( !(ignoreSeconds) )  
		goto label_cond_16;
	if ( absOffset >= 0xea60 )
		goto label_cond_16;
label_cond_10:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("Z"));
	// 1692    .line 1641
	// 1693    .end local v0    # "absOffset":I
label_cond_14:
	absOffset = offset;
	//    .restart local v0    # "absOffset":I
	goto label_goto_3;
	// 1700    .line 1645
label_cond_16:
	if ( !(isShort) )  
		goto label_cond_40;
	//    .local v6, "minFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
label_goto_1a:
	if ( !(ignoreSeconds) )  
		goto label_cond_43;
	//    .local v5, "maxFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
label_goto_1e:
	if ( !(isBasic) )  
		goto label_cond_46;
	cVar0 = 0x0;
label_goto_21:
	if ( absOffset <  0x5265c00 )
		goto label_cond_4d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Offset out of range :")))->append(offset)->toString());
	// throw
	throw cVar1;
	// 1751    .line 1645
	// 1752    .end local v5    # "maxFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
	// 1753    .end local v6    # "minFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
label_cond_40:
	//    .restart local v6    # "minFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
	goto label_goto_1a;
	// 1760    .line 1646
label_cond_43:
	//    .restart local v5    # "maxFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
	goto label_goto_1e;
	// 1767    .line 1647
label_cond_46:
	java::lang::Character::valueOf(0x3a);
	//    .local v7, "sep":Ljava/lang/Character;
	goto label_goto_21;
	// 1778    .line 1656
	// 1779    .end local v7    # "sep":Ljava/lang/Character;
label_cond_4d:
	fields = std::make_shared<std::vector<int[]>>(0x3);
	//    .local v2, "fields":[I
	fields[0x0] = (absOffset / 0x36ee80);
	absOffset = (absOffset %  0x36ee80);
	fields[0x1] = (absOffset / 0xea60);
	fields[0x2] = ( (absOffset %  0xea60) / 0x3e8);
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_83;
	if ( fields[0x0] < 0 ) 
		goto label_cond_7d;
	if ( fields[0x0] <= 0x17 )
		goto label_cond_83;
label_cond_7d:
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 1847    .line 1664
label_cond_83:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_99;
	if ( fields[0x1] < 0 ) 
		goto label_cond_93;
	if ( fields[0x1] <= 0x3b )
		goto label_cond_99;
label_cond_93:
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 1874    .line 1665
label_cond_99:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_af;
	if ( fields[0x2] < 0 ) 
		goto label_cond_a9;
	if ( fields[0x2] <= 0x3b )
		goto label_cond_af;
label_cond_a9:
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 1901    .line 1667
label_cond_af:
	lastIdx = maxFields->ordinal();
	//    .local v4, "lastIdx":I
label_goto_b3:
	if ( lastIdx <= minFields->ordinal() )
		goto label_cond_bd;
	if ( !(fields[lastIdx]) )  
		goto label_cond_ef;
label_cond_bd:
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "buf":Ljava/lang/StringBuilder;
	//    .local v8, "sign":C
	if ( offset >= 0 )
		goto label_cond_cf;
	idx = 0x0;
	//    .local v3, "idx":I
label_goto_c7:
	if ( idx >  lastIdx )
		goto label_cond_cf;
	if ( !(fields[idx]) )  
		goto label_cond_f2;
	//    .end local v3    # "idx":I
label_cond_cf:
	buf->append(0x2b);
	idx = 0x0;
	//    .restart local v3    # "idx":I
label_goto_d3:
	if ( idx >  lastIdx )
		goto label_cond_f5;
	if ( !(cVar0) )  
		goto label_cond_dc;
	if ( !(idx) )  
		goto label_cond_dc;
	buf->append(cVar0);
label_cond_dc:
	if ( fields[idx] >= 0xa )
		goto label_cond_e7;
	buf->append(0x30);
label_cond_e7:
	buf->append(fields[idx]);
	idx = ( idx + 0x1);
	goto label_goto_d3;
	// 1994    .line 1672
	// 1995    .end local v1    # "buf":Ljava/lang/StringBuilder;
	// 1996    .end local v3    # "idx":I
	// 1997    .end local v8    # "sign":C
label_cond_ef:
	lastIdx = ( lastIdx + -0x1);
	goto label_goto_b3;
	// 2003    .line 1679
	// 2004    .restart local v1    # "buf":Ljava/lang/StringBuilder;
	// 2005    .restart local v3    # "idx":I
	// 2006    .restart local v8    # "sign":C
label_cond_f2:
	idx = ( idx + 0x1);
	goto label_goto_c7;
	// 2012    .line 1697
label_cond_f5:
	return buf->toString();

}
// .method private formatOffsetLocalizedGMT(IZ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::formatOffsetLocalizedGMT(int cVar4,bool isShort)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int cVar4;
	int offsetH;
	int cVar5;
	int offsetM;
	int cVar6;
	int offsetS;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	auto offsetPatternItems;
	int cVar9;
	std::shared_ptr<java::lang::String> item;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetField> field;
	int cVar11;
	
	//    .param p1, "offset"    # I
	//    .param p2, "isShort"    # Z
	cVar0 = 0x36ee80;
	cVar1 = 0xea60;
	cVar2 = 0x3b;
	cVar3 = 0x2;
	if ( cVar4 )     
		goto label_cond_f;
	return this->_gmtZeroFormat;
	// 2045    .line 1570
label_cond_f:
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	0x1;
	//    .local v7, "positive":Z
	if ( cVar4 >= 0 )
		goto label_cond_19;
	cVar4 = (0 - cVar4);
label_cond_19:
	offsetH = (cVar4 / cVar0);
	//    .local v3, "offsetH":I
	cVar5 = (cVar4 %  cVar0);
	offsetM = (cVar5 / cVar1);
	//    .local v4, "offsetM":I
	cVar6 = (cVar5 %  cVar1);
	offsetS = ( cVar6 / 0x3e8);
	//    .local v6, "offsetS":I
	if ( offsetH >  0x17 )
		goto label_cond_27;
	if ( offsetM <= cVar2 )
		goto label_cond_41;
label_cond_27:
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Offset out of range :")))->append(cVar6)->toString());
	// throw
	throw cVar7;
	// 2117    .line 1583
label_cond_41:
	if ( offsetS >  cVar2 )
		goto label_cond_27;
	if ( !(0x0) )  
		goto label_cond_85;
	if ( !(offsetS) )  
		goto label_cond_69;
	offsetPatternItems = this->_gmtOffsetPatternItems[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HMS->ordinal()];
	//    .local v5, "offsetPatternItems":[Ljava/lang/Object;
label_goto_51:
	buf->append(this->_gmtPatternPrefix);
	cVar9 = 0x0;
label_goto_58:
	if ( cVar9 >= offsetPatternItems->size() )
		goto label_cond_ce;
	item = offsetPatternItems[cVar9];
	//    .local v2, "item":Ljava/lang/Object;
	if ( !(item->instanceOf("java::lang::String")) )  
		goto label_cond_ae;
	item->checkCast("java::lang::String");
	//    .end local v2    # "item":Ljava/lang/Object;
	buf->append(item);
label_cond_65:
label_goto_65:
	cVar9 = ( cVar9 + 0x1);
	goto label_goto_58;
	// 2176    .line 1591
	// 2177    .end local v5    # "offsetPatternItems":[Ljava/lang/Object;
label_cond_69:
	if ( offsetM )     
		goto label_cond_6f;
	if ( !(( isShort ^ 0x1)) )  
		goto label_cond_7a;
label_cond_6f:
	//    .restart local v5    # "offsetPatternItems":[Ljava/lang/Object;
	goto label_goto_51;
	// 2200    .line 1594
	// 2201    .end local v5    # "offsetPatternItems":[Ljava/lang/Object;
label_cond_7a:
	//    .restart local v5    # "offsetPatternItems":[Ljava/lang/Object;
	goto label_goto_51;
	// 2216    .line 1597
	// 2217    .end local v5    # "offsetPatternItems":[Ljava/lang/Object;
label_cond_85:
	if ( !(offsetS) )  
		goto label_cond_92;
	//    .restart local v5    # "offsetPatternItems":[Ljava/lang/Object;
	goto label_goto_51;
	// 2235    .line 1599
	// 2236    .end local v5    # "offsetPatternItems":[Ljava/lang/Object;
label_cond_92:
	if ( offsetM )     
		goto label_cond_98;
	if ( !(( isShort ^ 0x1)) )  
		goto label_cond_a3;
label_cond_98:
	//    .restart local v5    # "offsetPatternItems":[Ljava/lang/Object;
	goto label_goto_51;
	// 2259    .line 1602
	// 2260    .end local v5    # "offsetPatternItems":[Ljava/lang/Object;
label_cond_a3:
	//    .restart local v5    # "offsetPatternItems":[Ljava/lang/Object;
	goto label_goto_51;
	// 2275    .line 1613
	// 2276    .restart local v2    # "item":Ljava/lang/Object;
label_cond_ae:
	if ( !(item->instanceOf("android::icu::text::TimeZoneFormat_S_GMTOffsetField")) )  
		goto label_cond_65;
	field = item;
	field->checkCast("android::icu::text::TimeZoneFormat_S_GMTOffsetField");
	//    .local v1, "field":Landroid/icu/text/TimeZoneFormat$GMTOffsetField;
	// switch
	{
	auto item = ( field->getType() );
	if (item == 0x48) goto label_sswitch_bd;
	if (item == 0x6d) goto label_sswitch_c6;
	if (item == 0x73) goto label_sswitch_ca;
	}
	goto label_goto_65;
	// 2297    .line 1618
label_sswitch_bd:
	if ( !(isShort) )  
		goto label_cond_c4;
	cVar11 = 0x1;
label_goto_c0:
	this->appendOffsetDigits(buf, offsetH, cVar11);
	goto label_goto_65;
label_cond_c4:
	cVar11 = cVar3;
	goto label_goto_c0;
	// 2313    .line 1621
label_sswitch_c6:
	this->appendOffsetDigits(buf, offsetM, cVar3);
	goto label_goto_65;
	// 2319    .line 1624
label_sswitch_ca:
	this->appendOffsetDigits(buf, offsetS, cVar3);
	goto label_goto_65;
	// 2325    .line 1629
	// 2326    .end local v1    # "field":Landroid/icu/text/TimeZoneFormat$GMTOffsetField;
	// 2327    .end local v2    # "item":Ljava/lang/Object;
label_cond_ce:
	buf->append(this->_gmtPatternSuffix);
	return buf->toString();
	// 2340    .line 1616
	// 2341    :sswitch_data_d8
	// 2342    .sparse-switch
	// 2343        0x48 -> :sswitch_bd
	// 2344        0x6d -> :sswitch_c6
	// 2345        0x73 -> :sswitch_ca
	// 2346    .end sparse-switch

}
// .method private formatSpecific(Landroid/icu/util/TimeZone;Landroid/icu/text/TimeZoneNames$NameType;Landroid/icu/text/TimeZoneNames$NameType;JLandroid/icu/util/Output;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::formatSpecific(std::shared_ptr<android::icu::util::TimeZone> tz,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> stdType,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> dstType,long long date,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> timeType)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::util::Date> cVar2;
	int isDaylight;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> cVar3;
	
	//    .param p1, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p2, "stdType"    # Landroid/icu/text/TimeZoneNames$NameType;
	//    .param p3, "dstType"    # Landroid/icu/text/TimeZoneNames$NameType;
	//    .param p4, "date"    # J
	//    .annotation system Ldalvik/annotation/Signature;
	// 2356        value = {
	// 2357            "(",
	// 2358            "Landroid/icu/util/TimeZone;",
	// 2359            "Landroid/icu/text/TimeZoneNames$NameType;",
	// 2360            "Landroid/icu/text/TimeZoneNames$NameType;",
	// 2361            "J",
	// 2362            "Landroid/icu/util/Output",
	// 2363            "<",
	// 2364            "Landroid/icu/text/TimeZoneFormat$TimeType;",
	// 2365            ">;)",
	// 2366            "Ljava/lang/String;"
	// 2367        }
	// 2368    .end annotation
	//    .local p6, "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_12;
	if ( stdType == android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD )
		goto label_cond_12;
	if ( stdType == android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD )
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2391    .line 1712
label_cond_12:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_24;
	if ( dstType == android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT )
		goto label_cond_24;
	if ( dstType == android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT )
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2411    .line 1714
label_cond_24:
	cVar2 = std::make_shared<java::util::Date>(date);
	isDaylight = tz->inDaylightTime(cVar2);
	//    .local v0, "isDaylight":Z
	if ( !(isDaylight) )  
		goto label_cond_46;
	name = this->getTimeZoneNames()->getDisplayName(android::icu::impl::ZoneMeta::getCanonicalCLDRID(tz), dstType, date);
	//    .local v1, "name":Ljava/lang/String;
label_goto_3b:
	if ( !(name) )  
		goto label_cond_45;
	if ( !(timeType) )  
		goto label_cond_45;
	if ( !(isDaylight) )  
		goto label_cond_53;
	cVar3 = android::icu::text::TimeZoneFormat_S_TimeType::DAYLIGHT;
label_goto_43:
	timeType->value = cVar3;
label_cond_45:
	return name;
	// 2457    .line 1717
	// 2458    .end local v1    # "name":Ljava/lang/String;
label_cond_46:
	name = this->getTimeZoneNames()->getDisplayName(android::icu::impl::ZoneMeta::getCanonicalCLDRID(tz), stdType, date);
	//    .restart local v1    # "name":Ljava/lang/String;
	goto label_goto_3b;
	// 2475    .line 1720
label_cond_53:
	cVar3 = android::icu::text::TimeZoneFormat_S_TimeType::STANDARD;
	goto label_goto_43;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<android::icu::text::TimeZoneFormat> cVar1;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	if ( locale )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale is null")));
	// throw
	throw cVar0;
	// 2499    .line 454
label_cond_b:
	cVar1 = android::icu::text::TimeZoneFormat::_tzfCache->getInstance(locale, locale);
	cVar1->checkCast("android::icu::text::TimeZoneFormat");
	return cVar1;

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::TimeZoneFormat::getInstance(android::icu::util::ULocale::forLocale(locale));

}
// .method private getTZDBTimeZoneNames()Landroid/icu/text/TimeZoneNames;
std::shared_ptr<android::icu::text::TimeZoneNames> android::icu::text::TimeZoneFormat::getTZDBTimeZoneNames()
{
	
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames> cVar0;
	
	if ( this->_tzdbNames )     
		goto label_cond_13;
	this->monitor_enter();
	try {
	//label_try_start_5:
	if ( this->_tzdbNames )     
		goto label_cond_12;
	cVar0 = std::make_shared<android::icu::impl::TZDBTimeZoneNames>(this->_locale);
	this->_tzdbNames = cVar0;
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_16;
	}
	//    .catchall {:try_start_5 .. :try_end_12} :catchall_16
label_cond_12:
	this->monitor_exit();
label_cond_13:
	return this->_tzdbNames;
	// 2567    .line 509
label_catchall_16:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private declared-synchronized getTargetRegion()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::getTargetRegion()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->_region )     
		goto label_cond_2e;
	this->_region = this->_locale->getCountry();
	if ( this->_region->length() )     
		goto label_cond_2e;
	//    .local v0, "tmp":Landroid/icu/util/ULocale;
	this->_region = android::icu::util::ULocale::addLikelySubtags(this->_locale)->getCountry();
	if ( this->_region->length() )     
		goto label_cond_2e;
	this->_region = std::make_shared<java::lang::String>(std::make_shared<char[]>("001"));
	//    .end local v0    # "tmp":Landroid/icu/util/ULocale;
label_cond_2e:
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_1 .. :try_end_30} :catchall_32
	this->monitor_exit();
	return this->_region;
label_catchall_32:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private getTimeType(Landroid/icu/text/TimeZoneNames$NameType;)Landroid/icu/text/TimeZoneFormat$TimeType;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> android::icu::text::TimeZoneFormat::getTimeType(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> nameType)
{
	
	//    .param p1, "nameType"    # Landroid/icu/text/TimeZoneNames$NameType;
	// switch
	{
	auto item = ( android::icu::text::TimeZoneFormat::-getandroid-icu-text-TimeZoneNames$NameTypeSwitchesValues({const[class].FS-Param})[nameType->ordinal()] );
	if (item == 1) goto label_pswitch_13;
	if (item == 2) goto label_pswitch_10;
	if (item == 3) goto label_pswitch_13;
	if (item == 4) goto label_pswitch_10;
	}
	return android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	// 2677    .line 1801
label_pswitch_10:
	return android::icu::text::TimeZoneFormat_S_TimeType::STANDARD;
	// 2683    .line 1805
label_pswitch_13:
	return android::icu::text::TimeZoneFormat_S_TimeType::DAYLIGHT;
	// 2689    .line 1798
	// 2690    :pswitch_data_16
	// 2691    .packed-switch 0x1
	// 2692        :pswitch_13
	// 2693        :pswitch_10
	// 2694        :pswitch_13
	// 2695        :pswitch_10
	// 2696    .end packed-switch

}
// .method private getTimeZoneForOffset(I)Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::text::TimeZoneFormat::getTimeZoneForOffset(int offset)
{
	
	//    .param p1, "offset"    # I
	if ( offset )     
		goto label_cond_a;
	return android::icu::util::TimeZone::getTimeZone(std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/GMT")));
	// 2716    .line 2115
label_cond_a:
	return android::icu::impl::ZoneMeta::getCustomTimeZone(offset);

}
// .method private getTimeZoneGenericNames()Landroid/icu/impl/TimeZoneGenericNames;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames> android::icu::text::TimeZoneFormat::getTimeZoneGenericNames()
{
	
	if ( this->_gnames )     
		goto label_cond_12;
	this->monitor_enter();
	try {
	//label_try_start_5:
	if ( this->_gnames )     
		goto label_cond_11;
	this->_gnames = android::icu::impl::TimeZoneGenericNames::getInstance(this->_locale);
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_15;
	}
	//    .catchall {:try_start_5 .. :try_end_11} :catchall_15
label_cond_11:
	this->monitor_exit();
label_cond_12:
	return this->_gnames;
	// 2763    .line 492
label_catchall_15:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private getTimeZoneID(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::getTimeZoneID(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<java::lang::String> mzID)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "mzID"    # Ljava/lang/String;
	//    .local v0, "id":Ljava/lang/String;
	if ( tzID )     
		goto label_cond_35;
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_f;
	if ( mzID )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2798    .line 1762
label_cond_f:
	id = this->_tznames->getReferenceZoneID(mzID, this->getTargetRegion());
	if ( id )     
		goto label_cond_35;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid mzID: ")))->append(mzID)->toString());
	// throw
	throw cVar1;
	// 2838    .line 1767
label_cond_35:
	return tzID;

}
// .method private initGMTOffsetPatterns([Ljava/lang/String;)V
void android::icu::text::TimeZoneFormat::initGMTOffsetPatterns(std::shared_ptr<std::vector<java::lang::String>> gmtOffsetPatterns)
{
	
	int cVar0;
	int size;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> gmtOffsetPatternItems;
	std::shared_ptr<java::lang::Object> cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> t;
	int idx;
	
	//    .param p1, "gmtOffsetPatterns"    # [Ljava/lang/String;
	cVar0 = 0x0;
	size = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::values({const[class].FS-Param})->size();
	//    .local v3, "size":I
	if ( gmtOffsetPatterns->size() >= size )
		goto label_cond_12;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Insufficient number of elements in gmtOffsetPatterns")));
	// throw
	throw cVar1;
	// 2872    .line 1875
label_cond_12:
	gmtOffsetPatternItems = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(size);
	//    .local v0, "gmtOffsetPatternItems":[[Ljava/lang/Object;
	cVar2 = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::values({const[class].FS-Param});
	cVar3 = cVar0;
label_goto_1a:
	if ( cVar3 >= cVar2->size() )
		goto label_cond_31;
	t = cVar2[cVar3];
	//    .local v4, "t":Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	idx = t->ordinal();
	//    .local v1, "idx":I
	//    .local v2, "parsedItems":[Ljava/lang/Object;
	gmtOffsetPatternItems[idx] = android::icu::text::TimeZoneFormat::parseOffsetPattern(gmtOffsetPatterns[idx], android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::-wrap2(t));
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_1a;
	// 2918    .line 1884
	// 2919    .end local v1    # "idx":I
	// 2920    .end local v2    # "parsedItems":[Ljava/lang/Object;
	// 2921    .end local v4    # "t":Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
label_cond_31:
	this->_gmtOffsetPatterns = std::make_shared<std::vector<std::vector<java::lang::String>>>(size);
	java::lang::System::arraycopy(gmtOffsetPatterns, cVar0, this->_gmtOffsetPatterns, cVar0, size);
	this->_gmtOffsetPatternItems = gmtOffsetPatternItems;
	this->checkAbuttingHoursAndMinutes();
	return;

}
// .method private initGMTPattern(Ljava/lang/String;)V
void android::icu::text::TimeZoneFormat::initGMTPattern(std::shared_ptr<java::lang::String> gmtPattern)
{
	
	int idx;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "gmtPattern"    # Ljava/lang/String;
	idx = gmtPattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0}")));
	//    .local v0, "idx":I
	if ( idx >= 0 )
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad localized GMT pattern: ")))->append(gmtPattern)->toString());
	// throw
	throw cVar0;
	// 2985    .line 1826
label_cond_24:
	this->_gmtPattern = gmtPattern;
	this->_gmtPatternPrefix = android::icu::text::TimeZoneFormat::unquote(gmtPattern->substring(0x0, idx));
	this->_gmtPatternSuffix = android::icu::text::TimeZoneFormat::unquote(gmtPattern->substring(( idx + 0x3)));
	return;

}
// .method private static parseAbuttingAsciiOffsetFields(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/TimeZoneFormat$OffsetFields;Landroid/icu/text/TimeZoneFormat$OffsetFields;Z)I
int android::icu::text::TimeZoneFormat::parseAbuttingAsciiOffsetFields(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> minFields,std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> maxFields,bool fixedHourWidth)
{
	
	int start;
	int cVar0;
	int minDigits;
	std::shared<std::vector<int[]>> digits;
	int numDigits;
	int idx;
	int digit;
	int hour;
	int min;
	int sec;
	int cVar2;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # Ljava/text/ParsePosition;
	//    .param p2, "minFields"    # Landroid/icu/text/TimeZoneFormat$OffsetFields;
	//    .param p3, "maxFields"    # Landroid/icu/text/TimeZoneFormat$OffsetFields;
	//    .param p4, "fixedHourWidth"    # Z
	start = pos->getIndex();
	//    .local v10, "start":I
	if ( !(fixedHourWidth) )  
		goto label_cond_42;
	cVar0 = 0x0;
label_goto_f:
	minDigits = (( ( minFields->ordinal() + 0x1) * 0x2) - cVar0);
	//    .local v7, "minDigits":I
	//    .local v5, "maxDigits":I
	digits = std::make_shared<std::vector<int[]>>(( ( maxFields->ordinal() + 0x1) * 0x2));
	//    .local v2, "digits":[I
	numDigits = 0x0;
	//    .local v8, "numDigits":I
	idx = start;
	//    .local v4, "idx":I
label_goto_1d:
	if ( numDigits >= digits->size() )
		goto label_cond_33;
	if ( idx >= text->length() )
		goto label_cond_33;
	digit = std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789"))->indexOf(text->charAt(idx));
	//    .local v1, "digit":I
	if ( digit >= 0 )
		goto label_cond_44;
	//    .end local v1    # "digit":I
label_cond_33:
	if ( !(fixedHourWidth) )  
		goto label_cond_3b;
	if ( !(( numDigits & 0x1)) )  
		goto label_cond_3b;
	numDigits = ( numDigits + -0x1);
label_cond_3b:
	if ( numDigits >= minDigits )
		goto label_cond_4b;
	pos->setErrorIndex(start);
	return 0x0;
	// 3122    .line 2750
	// 3123    .end local v2    # "digits":[I
	// 3124    .end local v4    # "idx":I
	// 3125    .end local v5    # "maxDigits":I
	// 3126    .end local v7    # "minDigits":I
	// 3127    .end local v8    # "numDigits":I
label_cond_42:
	cVar0 = 0x1;
	goto label_goto_f;
	// 3133    .line 2761
	// 3134    .restart local v1    # "digit":I
	// 3135    .restart local v2    # "digits":[I
	// 3136    .restart local v4    # "idx":I
	// 3137    .restart local v5    # "maxDigits":I
	// 3138    .restart local v7    # "minDigits":I
	// 3139    .restart local v8    # "numDigits":I
label_cond_44:
	digits[numDigits] = digit;
	numDigits = ( numDigits + 0x1);
	idx = ( idx + 0x1);
	goto label_goto_1d;
	// 3151    .line 2776
	// 3152    .end local v1    # "digit":I
label_cond_4b:
	hour = 0x0;
	//    .local v3, "hour":I
	min = 0x0;
	//    .local v6, "min":I
	sec = 0x0;
	//    .local v9, "sec":I
	//    .local v0, "bParsed":Z
label_goto_4f:
	if ( numDigits <  minDigits )
		goto label_cond_61;
	// switch
	{
	auto item = ( numDigits );
	if (item == 1) goto label_pswitch_68;
	if (item == 2) goto label_pswitch_6c;
	if (item == 3) goto label_pswitch_77;
	if (item == 4) goto label_pswitch_85;
	if (item == 5) goto label_pswitch_9a;
	if (item == 6) goto label_pswitch_b2;
	}
label_goto_54:
	if ( hour >  0x17 )
		goto label_cond_d1;
	if ( min >  0x3b )
		goto label_cond_d1;
	if ( sec >  0x3b )
		goto label_cond_d1;
label_cond_61:
	if ( 0x0 )     
		goto label_cond_dc;
	pos->setErrorIndex(start);
	return 0x0;
	// 3203    .line 2781
label_pswitch_68:
	hour = digits[0x0];
	goto label_goto_54;
	// 3211    .line 2784
label_pswitch_6c:
	hour = (( digits[0x0] * 0xa) + digits[0x1]);
	goto label_goto_54;
	// 3228    .line 2787
label_pswitch_77:
	hour = digits[0x0];
	(( digits[0x1] * 0xa) + digits[0x2]);
	goto label_goto_54;
	// 3250    .line 2791
label_pswitch_85:
	hour = (( digits[0x0] * 0xa) + digits[0x1]);
	(( digits[0x2] * 0xa) + digits[0x3]);
	goto label_goto_54;
	// 3280    .line 2795
label_pswitch_9a:
	hour = digits[0x0];
	(( digits[0x1] * 0xa) + digits[0x2]);
	(( digits[0x3] * 0xa) + digits[0x4]);
	goto label_goto_54;
	// 3315    .line 2800
label_pswitch_b2:
	hour = (( digits[0x0] * 0xa) + digits[0x1]);
	(( digits[0x2] * 0xa) + digits[0x3]);
	(( digits[0x4] * 0xa) + digits[0x5]);
	goto label_goto_54;
	// 3358    .line 2813
label_cond_d1:
	if ( !(fixedHourWidth) )  
		goto label_cond_da;
	cVar2 = 0x2;
label_goto_d4:
	numDigits = (numDigits -  cVar2);
	sec = 0x0;
	min = 0x0;
	hour = 0x0;
	goto label_goto_4f;
	// 3376    .line 2813
label_cond_da:
	cVar2 = 0x1;
	goto label_goto_d4;
	// 3382    .line 2821
label_cond_dc:
	pos->setIndex((start + numDigits));
	return ( (( (( hour * 0x3c) +  min) * 0x3c) +  sec) * 0x3e8);
	// 3401    .line 2779
	// 3402    :pswitch_data_ea
	// 3403    .packed-switch 0x1
	// 3404        :pswitch_68
	// 3405        :pswitch_6c
	// 3406        :pswitch_77
	// 3407        :pswitch_85
	// 3408        :pswitch_9a
	// 3409        :pswitch_b2
	// 3410    .end packed-switch

}
// .method private parseAbuttingOffsetFields(Ljava/lang/String;I[I)I
int android::icu::text::TimeZoneFormat::parseAbuttingOffsetFields(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<int[]> parsedLen)
{
	
	std::shared<std::vector<int[]>> digits;
	std::shared<std::vector<int[]>> parsed;
	int idx;
	std::shared<std::vector<int[]>> len;
	int numDigits;
	int i;
	int hour;
	int min;
	int sec;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "parsedLen"    # [I
	0x6;
	//    .local v0, "MAXDIGITS":I
	digits = std::make_shared<std::vector<int[]>>(0x6);
	//    .local v1, "digits":[I
	parsed = std::make_shared<std::vector<int[]>>(0x6);
	//    .local v9, "parsed":[I
	idx = start;
	//    .local v4, "idx":I
	len = std::make_shared<std::vector<int[]>>(0x1);
	len[0x0] = 0x0;
	//    .local v5, "len":[I
	numDigits = 0x0;
	//    .local v7, "numDigits":I
	i = 0x0;
	//    .local v3, "i":I
label_goto_11:
	if ( i >= 0x6 )
		goto label_cond_1e;
	digits[i] = this->parseSingleLocalizedDigit(text, idx, len);
	if ( digits[i] >= 0 )
		goto label_cond_26;
label_cond_1e:
	if ( numDigits )     
		goto label_cond_33;
	parsedLen[0x0] = 0x0;
	return 0x0;
	// 3493    .line 2506
label_cond_26:
	idx = (idx +  len[0x0]);
	parsed[i] = (idx - start);
	numDigits = ( numDigits + 0x1);
	i = ( i + 0x1);
	goto label_goto_11;
	// 3514    .line 2516
label_cond_33:
	//    .local v8, "offset":I
label_goto_34:
	if ( numDigits <= 0 )
		goto label_cond_6b;
	hour = 0x0;
	//    .local v2, "hour":I
	min = 0x0;
	//    .local v6, "min":I
	sec = 0x0;
	//    .local v10, "sec":I
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_48;
	if ( numDigits <= 0 )
		goto label_cond_42;
	if ( numDigits <= 0x6 )
		goto label_cond_48;
label_cond_42:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 3553    .line 2523
label_cond_48:
	// switch
	{
	auto item = ( numDigits );
	if (item == 1) goto label_pswitch_6c;
	if (item == 2) goto label_pswitch_70;
	if (item == 3) goto label_pswitch_7b;
	if (item == 4) goto label_pswitch_89;
	if (item == 5) goto label_pswitch_9e;
	if (item == 6) goto label_pswitch_b6;
	}
label_goto_4b:
	if ( hour >  0x17 )
		goto label_cond_d6;
	if ( min >  0x3b )
		goto label_cond_d6;
	if ( sec >  0x3b )
		goto label_cond_d6;
	parsedLen[0x0] = parsed[( numDigits + -0x1)];
	//    .end local v2    # "hour":I
	//    .end local v6    # "min":I
	//    .end local v10    # "sec":I
label_cond_6b:
	return 0x0;
	// 3602    .line 2525
	// 3603    .restart local v2    # "hour":I
	// 3604    .restart local v6    # "min":I
	// 3605    .restart local v10    # "sec":I
label_pswitch_6c:
	hour = digits[0x0];
	goto label_goto_4b;
	// 3613    .line 2528
label_pswitch_70:
	hour = (( digits[0x0] * 0xa) + digits[0x1]);
	goto label_goto_4b;
	// 3630    .line 2531
label_pswitch_7b:
	hour = digits[0x0];
	(( digits[0x1] * 0xa) + digits[0x2]);
	goto label_goto_4b;
	// 3652    .line 2535
label_pswitch_89:
	hour = (( digits[0x0] * 0xa) + digits[0x1]);
	(( digits[0x2] * 0xa) + digits[0x3]);
	goto label_goto_4b;
	// 3682    .line 2539
label_pswitch_9e:
	hour = digits[0x0];
	(( digits[0x1] * 0xa) + digits[0x2]);
	(( digits[0x3] * 0xa) + digits[0x4]);
	goto label_goto_4b;
	// 3717    .line 2544
label_pswitch_b6:
	hour = (( digits[0x0] * 0xa) + digits[0x1]);
	(( digits[0x2] * 0xa) + digits[0x3]);
	(( digits[0x4] * 0xa) + digits[0x5]);
	goto label_goto_4b;
	// 3760    .line 2555
label_cond_d6:
	numDigits = ( numDigits + -0x1);
	goto label_goto_34;
	// 3766    .line 2523
	// 3767    :pswitch_data_da
	// 3768    .packed-switch 0x1
	// 3769        :pswitch_6c
	// 3770        :pswitch_70
	// 3771        :pswitch_7b
	// 3772        :pswitch_89
	// 3773        :pswitch_9e
	// 3774        :pswitch_b6
	// 3775    .end packed-switch

}
// .method private static parseAsciiOffsetFields(Ljava/lang/String;Ljava/text/ParsePosition;CLandroid/icu/text/TimeZoneFormat$OffsetFields;Landroid/icu/text/TimeZoneFormat$OffsetFields;)I
int android::icu::text::TimeZoneFormat::parseAsciiOffsetFields(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,char sep,std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> minFields,std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> maxFields)
{
	
	int start;
	auto fieldVal;
	auto fieldLen;
	int idx;
	int fieldIdx;
	int c;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> parsedFields;
	int digit;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # Ljava/text/ParsePosition;
	//    .param p2, "sep"    # C
	//    .param p3, "minFields"    # Landroid/icu/text/TimeZoneFormat$OffsetFields;
	//    .param p4, "maxFields"    # Landroid/icu/text/TimeZoneFormat$OffsetFields;
	start = pos->getIndex();
	//    .local v9, "start":I
	?;
	fieldVal = ?;
	//    .local v4, "fieldVal":[I
	?;
	fieldLen = ?;
	//    .local v3, "fieldLen":[I
	idx = start;
	//    .local v5, "idx":I
	fieldIdx = 0x0;
	//    .local v2, "fieldIdx":I
label_goto_14:
	if ( idx >= text->length() )
		goto label_cond_2d;
	if ( fieldIdx >  maxFields->ordinal() )
		goto label_cond_2d;
	c = text->charAt(idx);
	//    .local v0, "c":C
	if ( c != sep )
		goto label_cond_54;
	if ( fieldIdx )     
		goto label_cond_4b;
	if ( fieldLen[0x0] )     
		goto label_cond_46;
	//    .end local v0    # "c":C
label_cond_2d:
	//    .local v6, "offset":I
	//    .local v8, "parsedLen":I
	parsedFields = 0x0;
	//    .local v7, "parsedFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
	if ( fieldLen[0x0] )     
		goto label_cond_77;
	//    .end local v7    # "parsedFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
label_cond_35:
label_goto_35:
	if ( !(parsedFields) )  
		goto label_cond_41;
	if ( parsedFields->ordinal() >= minFields->ordinal() )
		goto label_cond_d3;
label_cond_41:
	pos->setErrorIndex(start);
	return 0x0;
	// 3902    .line 2852
	// 3903    .end local v6    # "offset":I
	// 3904    .end local v8    # "parsedLen":I
	// 3905    .restart local v0    # "c":C
label_cond_46:
	fieldIdx = ( fieldIdx + 0x1);
label_cond_48:
label_goto_48:
	idx = ( idx + 0x1);
	goto label_goto_14;
	// 3916    .line 2854
label_cond_4b:
	if ( fieldLen[fieldIdx] != -0x1 )
		goto label_cond_2d;
	fieldLen[fieldIdx] = 0x0;
	goto label_goto_48;
	// 3931    .line 2861
label_cond_54:
	if ( fieldLen[fieldIdx] == -0x1 )
		goto label_cond_2d;
	digit = std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789"))->indexOf(c);
	//    .local v1, "digit":I
	if ( digit < 0 ) 
		goto label_cond_2d;
	fieldVal[fieldIdx] = (( fieldVal[fieldIdx] * 0xa) +  digit);
	fieldLen[fieldIdx] = ( fieldLen[fieldIdx] + 0x1);
	if ( fieldLen[fieldIdx] <  0x2 )
		goto label_cond_48;
	fieldIdx = ( fieldIdx + 0x1);
	goto label_goto_48;
	// 3978    .line 2886
	// 3979    .end local v0    # "c":C
	// 3980    .end local v1    # "digit":I
	// 3981    .restart local v6    # "offset":I
	// 3982    .restart local v7    # "parsedFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
	// 3983    .restart local v8    # "parsedLen":I
label_cond_77:
	if ( fieldVal[0x0] <= 0x17 )
		goto label_cond_8c;
	(( fieldVal[0x0] / 0xa) * 0x36ee80);
	parsedFields = android::icu::text::TimeZoneFormat_S_OffsetFields::H;
	//    .local v7, "parsedFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
	0x1;
	goto label_goto_35;
	// 4014    .line 2892
	// 4015    .local v7, "parsedFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
label_cond_8c:
	parsedFields = android::icu::text::TimeZoneFormat_S_OffsetFields::H;
	//    .local v7, "parsedFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
	if ( fieldLen[0x1] != 0x2 )
		goto label_cond_35;
	if ( fieldVal[0x1] >  0x3b )
		goto label_cond_35;
	parsedFields = android::icu::text::TimeZoneFormat_S_OffsetFields::HM;
	if ( fieldLen[0x2] != 0x2 )
		goto label_cond_35;
	if ( fieldVal[0x2] >  0x3b )
		goto label_cond_35;
	(((fieldVal[0x0] * 0x36ee80) +  (fieldVal[0x1] *  0xea60)) +  ( fieldVal[0x2] * 0x3e8));
	((fieldLen[0x0] +  ( fieldLen[0x1] + 0x1)) +  ( fieldLen[0x2] + 0x1));
	parsedFields = android::icu::text::TimeZoneFormat_S_OffsetFields::HMS;
	goto label_goto_35;
	// 4114    .line 2918
	// 4115    .end local v7    # "parsedFields":Landroid/icu/text/TimeZoneFormat$OffsetFields;
label_cond_d3:
	pos->setIndex((start + 0x0));
	return 0x0;

}
// .method private parseDefaultOffsetFields(Ljava/lang/String;IC[I)I
int android::icu::text::TimeZoneFormat::parseDefaultOffsetFields(std::shared_ptr<java::lang::String> text,int start,char separator,std::shared_ptr<int[]> parsedLen)
{
	
	int max;
	int idx;
	std::shared<std::vector<int[]>> len;
	int min;
	int sec;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "separator"    # C
	//    .param p4, "parsedLen"    # [I
	max = text->length();
	//    .local v11, "max":I
	idx = start;
	//    .local v10, "idx":I
	len = std::make_shared<std::vector<int[]>>(0x1);
	len[0x0] = 0x0;
	//    .local v8, "len":[I
	0x0;
	//    .local v9, "hour":I
	min = 0x0;
	//    .local v12, "min":I
	sec = 0x0;
	//    .local v13, "sec":I
	if ( len[0x0] )     
		goto label_cond_2c;
label_cond_22:
label_goto_22:
	if ( idx != start )
		goto label_cond_7a;
	parsedLen[0x0] = 0x0;
	return 0x0;
	// 4210    .line 2457
label_cond_2c:
	idx = (start + len[0x0]);
	if ( ( idx + 0x1) >= max )
		goto label_cond_22;
	if ( text->charAt(idx) != separator )
		goto label_cond_22;
	min = this->parseOffsetFieldWithLocalizedDigits(text, ( idx + 0x1), 0x2, 0x2, 0x0, 0x3b, len);
	if ( !(len[0x0]) )  
		goto label_cond_22;
	idx = (idx +  ( len[0x0] + 0x1));
	if ( ( idx + 0x1) >= max )
		goto label_cond_22;
	if ( text->charAt(idx) != separator )
		goto label_cond_22;
	sec = this->parseOffsetFieldWithLocalizedDigits(text, ( idx + 0x1), 0x2, 0x2, 0x0, 0x3b, len);
	if ( !(len[0x0]) )  
		goto label_cond_22;
	idx = (idx +  ( len[0x0] + 0x1));
	goto label_goto_22;
	// 4316    .line 2481
label_cond_7a:
	parsedLen[0x0] = (idx - start);
	return (((0x36ee80 *  this->parseOffsetFieldWithLocalizedDigits(text, start, 0x1, 0x2, 0x0, 0x17, len)) +  (0xea60 *  min)) +  ( sec * 0x3e8));

}
// .method private parseExemplarLocation(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::parseExemplarLocation(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	int startIdx;
	int parsedPos;
	std::shared_ptr<java::lang::String> tzID;
	std::shared_ptr<java::lang::Iterable> exemplarMatches;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> exemplarMatch;
	std::shared_ptr<java::util::Iterator> match_S_iterator;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> match;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	startIdx = pos->getIndex();
	//    .local v6, "startIdx":I
	parsedPos = -0x1;
	//    .local v5, "parsedPos":I
	tzID = 0x0;
	//    .local v7, "tzID":Ljava/lang/String;
	//    .local v4, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	exemplarMatches = this->_tznames->find(text, startIdx, java::util::EnumSet::of(android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION));
	//    .local v1, "exemplarMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	if ( !(exemplarMatches) )  
		goto label_cond_45;
	exemplarMatch = 0x0;
	//    .local v0, "exemplarMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	match_S_iterator = exemplarMatches->iterator();
	//    .end local v0    # "exemplarMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	//    .local v3, "match$iterator":Ljava/util/Iterator;
label_cond_19:
label_goto_19:
	if ( !(match_S_iterator->hasNext()) )  
		goto label_cond_34;
	match = match_S_iterator->next();
	match->checkCast("android::icu::text::TimeZoneNames_S_MatchInfo");
	//    .local v2, "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	if ( (match->matchLength() +  startIdx) <= parsedPos )
		goto label_cond_19;
	match;
	//    .local v0, "exemplarMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	parsedPos = (startIdx + match->matchLength());
	goto label_goto_19;
	// 4429    .line 3020
	// 4430    .end local v0    # "exemplarMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 4431    .end local v2    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
label_cond_34:
	if ( !(exemplarMatch) )  
		goto label_cond_45;
	tzID = this->getTimeZoneID(exemplarMatch->tzID(), exemplarMatch->mzID());
	//    .local v7, "tzID":Ljava/lang/String;
	pos->setIndex(parsedPos);
	//    .end local v3    # "match$iterator":Ljava/util/Iterator;
	//    .end local v7    # "tzID":Ljava/lang/String;
label_cond_45:
	if ( tzID )     
		goto label_cond_4a;
	pos->setErrorIndex(startIdx);
label_cond_4a:
	return tzID;

}
// .method private parseOffsetDefaultLocalizedGMT(Ljava/lang/String;I[I)I
int android::icu::text::TimeZoneFormat::parseOffsetDefaultLocalizedGMT(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<int[]> parsedLen)
{
	
	int idx;
	int offset;
	int parsed;
	int gmtLen;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> gmt;
	int len;
	int sign;
	int c;
	std::shared<std::vector<int[]>> lenWithSep;
	int offsetWithSep;
	std::shared<std::vector<int[]>> lenAbut;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "parsedLen"    # [I
	idx = start;
	//    .local v10, "idx":I
	offset = 0x0;
	//    .local v13, "offset":I
	parsed = 0x0;
	//    .local v16, "parsed":I
	gmtLen = 0x0;
	//    .local v9, "gmtLen":I
	cVar0 = android::icu::text::TimeZoneFormat::ALT_GMT_STRINGS;
	cVar1 = 0x0;
label_goto_10:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_29;
	gmt = cVar0[cVar1];
	//    .local v5, "gmt":Ljava/lang/String;
	len = gmt->length();
	//    .local v7, "len":I
	if ( !(text->regionMatches(0x1, start, gmt, 0x0, len)) )  
		goto label_cond_2f;
	gmtLen = len;
	//    .end local v5    # "gmt":Ljava/lang/String;
	//    .end local v7    # "len":I
label_cond_29:
	if ( gmtLen )     
		goto label_cond_34;
label_cond_2b:
label_goto_2b:
	parsedLen[0x0] = parsed;
	return offset;
	// 4552    .line 2381
	// 4553    .restart local v5    # "gmt":Ljava/lang/String;
	// 4554    .restart local v7    # "len":I
label_cond_2f:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_10;
	// 4562    .line 2391
	// 4563    .end local v5    # "gmt":Ljava/lang/String;
	// 4564    .end local v7    # "len":I
label_cond_34:
	idx = (start + gmtLen);
	if ( ( idx + 0x1) >= text->length() )
		goto label_cond_2b;
	sign = 0x1;
	//    .local v17, "sign":I
	c = text->charAt(idx);
	//    .local v8, "c":C
	if ( c != 0x2b )
		goto label_cond_72;
	sign = 0x1;
label_goto_4c:
	idx = ( idx + 0x1);
	lenWithSep = std::make_shared<std::vector<int[]>>(0x1);
	lenWithSep[0x0] = 0x0;
	//    .local v12, "lenWithSep":[I
	offsetWithSep = this->parseDefaultOffsetFields(text, idx, 0x3a, lenWithSep);
	//    .local v15, "offsetWithSep":I
	if ( lenWithSep[0x0] != (text->length() -  idx) )
		goto label_cond_79;
	offset = (offsetWithSep * sign);
	idx = (idx +  lenWithSep[0x0]);
label_goto_6f:
	parsed = (idx - start);
	goto label_goto_2b;
	// 4654    .line 2403
	// 4655    .end local v12    # "lenWithSep":[I
	// 4656    .end local v15    # "offsetWithSep":I
label_cond_72:
	if ( c != 0x2d )
		goto label_cond_2b;
	sign = -0x1;
	goto label_goto_4c;
	// 4667    .line 2420
	// 4668    .restart local v12    # "lenWithSep":[I
	// 4669    .restart local v15    # "offsetWithSep":I
label_cond_79:
	lenAbut = std::make_shared<std::vector<int[]>>(0x1);
	lenAbut[0x0] = 0x0;
	//    .local v11, "lenAbut":[I
	//    .local v14, "offsetAbut":I
	if ( lenWithSep[0x0] <= lenAbut[0x0] )
		goto label_cond_97;
	offset = (offsetWithSep * sign);
	idx = (idx +  lenWithSep[0x0]);
	goto label_goto_6f;
	// 4715    .line 2427
label_cond_97:
	offset = (this->parseAbuttingOffsetFields(text, idx, lenAbut) * sign);
	idx = (idx +  lenAbut[0x0]);
	goto label_goto_6f;

}
// .method private parseOffsetFieldWithLocalizedDigits(Ljava/lang/String;IIIII[I)I
int android::icu::text::TimeZoneFormat::parseOffsetFieldWithLocalizedDigits(std::shared_ptr<java::lang::String> text,int start,int minDigits,int maxDigits,int minVal,int maxVal,std::shared_ptr<int[]> parsedLen)
{
	
	int cVar0;
	int decVal;
	int numDigits;
	int idx;
	std::shared<std::vector<int[]>> digitLen;
	int digit;
	int tmpVal;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "minDigits"    # I
	//    .param p4, "maxDigits"    # I
	//    .param p5, "minVal"    # I
	//    .param p6, "maxVal"    # I
	//    .param p7, "parsedLen"    # [I
	cVar0 = 0x0;
	parsedLen[cVar0] = cVar0;
	decVal = 0x0;
	//    .local v0, "decVal":I
	numDigits = 0x0;
	//    .local v4, "numDigits":I
	idx = start;
	//    .local v3, "idx":I
	digitLen = std::make_shared<std::vector<int[]>>(0x1);
	digitLen[cVar0] = cVar0;
	//    .local v2, "digitLen":[I
label_goto_b:
	if ( idx >= text->length() )
		goto label_cond_19;
	if ( numDigits >= maxDigits )
		goto label_cond_19;
	digit = this->parseSingleLocalizedDigit(text, idx, digitLen);
	//    .local v1, "digit":I
	if ( digit >= 0 )
		goto label_cond_20;
	//    .end local v1    # "digit":I
label_cond_19:
	if ( numDigits <  minDigits )
		goto label_cond_1d;
	if ( decVal >= minVal )
		goto label_cond_2d;
label_cond_1d:
	decVal = -0x1;
	0x0;
label_goto_1f:
	return decVal;
	// 4802    .line 2588
	// 4803    .restart local v1    # "digit":I
label_cond_20:
	tmpVal = (( decVal * 0xa) + digit);
	//    .local v5, "tmpVal":I
	if ( tmpVal >  maxVal )
		goto label_cond_19;
	decVal = tmpVal;
	numDigits = ( numDigits + 0x1);
	idx = (idx +  digitLen[cVar0]);
	goto label_goto_b;
	// 4826    .line 2602
	// 4827    .end local v1    # "digit":I
	// 4828    .end local v5    # "tmpVal":I
label_cond_2d:
	parsedLen[cVar0] = (idx - start);
	goto label_goto_1f;

}
// .method private parseOffsetFields(Ljava/lang/String;IZ[I)I
int android::icu::text::TimeZoneFormat::parseOffsetFields(std::shared_ptr<java::lang::String> text,int start,bool isShort,std::shared_ptr<int[]> parsedLen)
{
	
	int outLen;
	std::shared_ptr<int[]> fields;
	std::shared_ptr<std::vector<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> gmtPatType;
	std::shared_ptr<std::vector<java::lang::Object>> items;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<std::vector<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>> cVar3;
	int cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	int tmpLen;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "isShort"    # Z
	//    .param p4, "parsedLen"    # [I
	outLen = 0x0;
	//    .local v13, "outLen":I
	//    .local v9, "offset":I
	0x1;
	//    .local v14, "sign":I
	if ( !(parsedLen) )  
		goto label_cond_f;
	if ( parsedLen->size() <  0x1 )
		goto label_cond_f;
	parsedLen[0x0] = 0x0;
label_cond_f:
	0x0;
	//    .local v12, "offsetS":I
	0x0;
	//    .local v11, "offsetM":I
	0x0;
	//    .local v10, "offsetH":I
	?;
	fields = ?;
	//    .local v7, "fields":[I
	cVar0 = android::icu::text::TimeZoneFormat::PARSE_GMT_OFFSET_TYPES;
	cVar1 = 0x0;
label_goto_23:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_5e;
	gmtPatType = cVar0[cVar1];
	//    .local v8, "gmtPatType":Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	items = this->_gmtOffsetPatternItems[gmtPatType->ordinal()];
	//    .local v5, "items":[Ljava/lang/Object;
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_41;
	if ( items )     
		goto label_cond_41;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 4946    .line 2259
label_cond_41:
	outLen = this->parseOffsetFieldsWithPattern(text, start, items, 0x0, fields);
	if ( outLen <= 0 )
		goto label_cond_93;
	if ( !(android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::-wrap0(gmtPatType)) )  
		goto label_cond_91;
	0x1;
label_goto_55:
	fields[0x0];
	fields[0x1];
	fields[0x2];
	//    .end local v5    # "items":[Ljava/lang/Object;
	//    .end local v8    # "gmtPatType":Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
label_cond_5e:
	if ( outLen <= 0 )
		goto label_cond_bb;
	if ( !(this->_abuttingOffsetHoursAndMinutes) )  
		goto label_cond_bb;
	//    .local v15, "tmpLen":I
	0x1;
	//    .local v16, "tmpSign":I
	cVar3 = android::icu::text::TimeZoneFormat::PARSE_GMT_OFFSET_TYPES;
	cVar4 = 0x0;
label_goto_73:
	if ( cVar4 >= cVar3->size() )
		goto label_cond_ad;
	gmtPatType = cVar3[cVar4];
	//    .restart local v8    # "gmtPatType":Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	items = this->_gmtOffsetPatternItems[gmtPatType->ordinal()];
	//    .restart local v5    # "items":[Ljava/lang/Object;
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_98;
	if ( items )     
		goto label_cond_98;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 5056    .line 2261
	// 5057    .end local v15    # "tmpLen":I
	// 5058    .end local v16    # "tmpSign":I
label_cond_91:
	-0x1;
	goto label_goto_55;
	// 5064    .line 2255
label_cond_93:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_23;
	// 5072    .line 2280
	// 5073    .restart local v15    # "tmpLen":I
	// 5074    .restart local v16    # "tmpSign":I
label_cond_98:
	tmpLen = this->parseOffsetFieldsWithPattern(text, start, items, 0x1, fields);
	if ( tmpLen <= 0 )
		goto label_cond_d6;
	if ( !(android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::-wrap0(gmtPatType)) )  
		goto label_cond_d3;
	//    .end local v5    # "items":[Ljava/lang/Object;
	//    .end local v8    # "gmtPatType":Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
label_cond_ad:
label_goto_ad:
	if ( 0x0 <= outLen )
		goto label_cond_bb;
	outLen = tmpLen;
	//    .end local v15    # "tmpLen":I
	//    .end local v16    # "tmpSign":I
label_cond_bb:
	if ( !(parsedLen) )  
		goto label_cond_c6;
	if ( parsedLen->size() <  0x1 )
		goto label_cond_c6;
	parsedLen[0x0] = outLen;
label_cond_c6:
	if ( outLen <= 0 )
		goto label_cond_d2;
label_cond_d2:
	return 0x0;
	// 5168    .line 2282
	// 5169    .restart local v5    # "items":[Ljava/lang/Object;
	// 5170    .restart local v8    # "gmtPatType":Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	// 5171    .restart local v15    # "tmpLen":I
	// 5172    .restart local v16    # "tmpSign":I
label_cond_d3:
	-0x1;
	goto label_goto_ad;
	// 5178    .line 2275
label_cond_d6:
	cVar4 = ( cVar4 + 0x1);
	goto label_goto_73;

}
// .method private parseOffsetFieldsWithPattern(Ljava/lang/String;I[Ljava/lang/Object;Z[I)I
int android::icu::text::TimeZoneFormat::parseOffsetFieldsWithPattern(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<std::vector<java::lang::Object>> patternItems,bool forceSingleHourDigit,std::shared_ptr<int[]> fields)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int failed;
	int offsetH;
	int idx;
	std::shared<std::vector<int[]>> tmpParsedLen;
	int i;
	std::shared_ptr<java::lang::String> patStr;
	int len;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetField> field;
	int fieldType;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "patternItems"    # [Ljava/lang/Object;
	//    .param p4, "forceSingleHourDigit"    # Z
	//    .param p5, "fields"    # [I
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_12;
	if ( !(fields) )  
		goto label_cond_c;
	if ( fields->size() >= 0x3 )
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 5218    .line 2319
label_cond_12:
	fields[0x2] = 0x0;
	fields[0x1] = 0x0;
	fields[0x0] = 0x0;
	failed = 0x0;
	//    .local v23, "failed":Z
	//    .local v29, "offsetS":I
	//    .local v28, "offsetM":I
	offsetH = 0x0;
	//    .local v27, "offsetH":I
	idx = start;
	//    .local v3, "idx":I
	tmpParsedLen = std::make_shared<std::vector<int[]>>(0x1);
	tmpParsedLen[0x0] = 0x0;
	//    .local v14, "tmpParsedLen":[I
	i = 0x0;
	//    .local v26, "i":I
label_goto_31:
	if ( i >= patternItems->size() )
		goto label_cond_52;
	if ( !(patternItems[i]->instanceOf("java::lang::String")) )  
		goto label_cond_5a;
	patStr = patternItems[i];
	patStr->checkCast("java::lang::String");
	//    .local v4, "patStr":Ljava/lang/String;
	len = patStr->length();
	//    .local v6, "len":I
	if ( text->regionMatches(0x1, idx, patStr, 0x0, len) )     
		goto label_cond_56;
	failed = 0x1;
	//    .end local v4    # "patStr":Ljava/lang/String;
	//    .end local v6    # "len":I
label_cond_52:
label_goto_52:
	if ( !(failed) )  
		goto label_cond_cd;
	return 0x0;
	// 5328    .line 2334
	// 5329    .restart local v4    # "patStr":Ljava/lang/String;
	// 5330    .restart local v6    # "len":I
label_cond_56:
	idx = (idx +  len);
	//    .end local v4    # "patStr":Ljava/lang/String;
	//    .end local v6    # "len":I
label_goto_57:
	i = ( i + 0x1);
	goto label_goto_31;
	// 5342    .line 2336
label_cond_5a:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_6a;
	if ( patternItems[i]->instanceOf("android::icu::text::TimeZoneFormat_S_GMTOffsetField") )     
		goto label_cond_6a;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 5360    .line 2337
label_cond_6a:
	field = patternItems[i];
	field->checkCast("android::icu::text::TimeZoneFormat_S_GMTOffsetField");
	//    .local v24, "field":Landroid/icu/text/TimeZoneFormat$GMTOffsetField;
	fieldType = field->getType();
	//    .local v25, "fieldType":C
	if ( fieldType != 0x48 )
		goto label_cond_92;
	if ( !(forceSingleHourDigit) )  
		goto label_cond_90;
	//    .local v11, "maxDigits":I
label_goto_7b:
	offsetH = this->parseOffsetFieldWithLocalizedDigits(text, idx, 0x1, maxDigits, 0x0, 0x17, tmpParsedLen);
	//    .end local v11    # "maxDigits":I
label_cond_88:
label_goto_88:
	if ( tmpParsedLen[0x0] )     
		goto label_cond_c8;
	failed = 0x1;
	goto label_goto_52;
	// 5420    .line 2340
label_cond_90:
	//    .restart local v11    # "maxDigits":I
	goto label_goto_7b;
	// 5427    .line 2342
	// 5428    .end local v11    # "maxDigits":I
label_cond_92:
	if ( fieldType != 0x6d )
		goto label_cond_ad;
	this->parseOffsetFieldWithLocalizedDigits(text, idx, 0x2, 0x2, 0x0, 0x3b, tmpParsedLen);
	goto label_goto_88;
	// 5459    .line 2344
label_cond_ad:
	if ( fieldType != 0x73 )
		goto label_cond_88;
	this->parseOffsetFieldWithLocalizedDigits(text, idx, 0x2, 0x2, 0x0, 0x3b, tmpParsedLen);
	goto label_goto_88;
	// 5490    .line 2352
label_cond_c8:
	idx = (idx +  tmpParsedLen[0x0]);
	goto label_goto_57;
	// 5500    .line 2360
	// 5501    .end local v24    # "field":Landroid/icu/text/TimeZoneFormat$GMTOffsetField;
	// 5502    .end local v25    # "fieldType":C
label_cond_cd:
	fields[0x0] = offsetH;
	fields[0x1] = 0x0;
	fields[0x2] = 0x0;
	return (idx - start);

}
// .method private static parseOffsetISO8601(Ljava/lang/String;Ljava/text/ParsePosition;ZLandroid/icu/util/Output;)I
int android::icu::text::TimeZoneFormat::parseOffsetISO8601(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,bool extendedOnly,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> hasDigitOffset)
{
	
	int cVar0;
	bool cVar1;
	int start;
	char firstChar;
	std::shared_ptr<java::text::ParsePosition> posOffset;
	std::shared_ptr<java::text::ParsePosition> posBasic;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # Ljava/text/ParsePosition;
	//    .param p2, "extendedOnly"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 5530        value = {
	// 5531            "(",
	// 5532            "Ljava/lang/String;",
	// 5533            "Ljava/text/ParsePosition;",
	// 5534            "Z",
	// 5535            "Landroid/icu/util/Output",
	// 5536            "<",
	// 5537            "Ljava/lang/Boolean;",
	// 5538            ">;)I"
	// 5539        }
	// 5540    .end annotation
	//    .local p3, "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	cVar0 = -0x1;
	cVar1 = 0x0;
	if ( !(hasDigitOffset) )  
		goto label_cond_a;
	hasDigitOffset->value = java::lang::Boolean::valueOf(cVar1);
label_cond_a:
	start = pos->getIndex();
	//    .local v5, "start":I
	if ( start <  text->length() )
		goto label_cond_18;
	pos->setErrorIndex(start);
	return cVar1;
	// 5578    .line 2690
label_cond_18:
	firstChar = text->charAt(start);
	//    .local v0, "firstChar":C
	if ( java::lang::Character::toUpperCase(firstChar) != std::make_shared<java::lang::String>(std::make_shared<char[]>("Z"))->charAt(cVar1) )
		goto label_cond_2f;
	pos->setIndex(( start + 0x1));
	return cVar1;
	// 5606    .line 2698
label_cond_2f:
	if ( firstChar != 0x2b )
		goto label_cond_88;
	//    .local v4, "sign":I
label_goto_34:
	posOffset = std::make_shared<java::text::ParsePosition>(( start + 0x1));
	//    .local v3, "posOffset":Ljava/text/ParsePosition;
	//    .local v1, "offset":I
	if ( posOffset->getErrorIndex() != cVar0 )
		goto label_cond_7e;
	if ( !(( extendedOnly ^ 0x1)) )  
		goto label_cond_7e;
	if ( (posOffset->getIndex() -  start) >  0x3 )
		goto label_cond_7e;
	posBasic = std::make_shared<java::text::ParsePosition>(( start + 0x1));
	//    .local v2, "posBasic":Ljava/text/ParsePosition;
	//    .local v6, "tmpOffset":I
	if ( posBasic->getErrorIndex() != cVar0 )
		goto label_cond_7e;
	if ( posBasic->getIndex() <= posOffset->getIndex() )
		goto label_cond_7e;
	posOffset->setIndex(posBasic->getIndex());
	//    .end local v2    # "posBasic":Ljava/text/ParsePosition;
	//    .end local v6    # "tmpOffset":I
label_cond_7e:
	if ( posOffset->getErrorIndex() == cVar0 )
		goto label_cond_92;
	pos->setErrorIndex(start);
	return cVar1;
	// 5719    .line 2700
	// 5720    .end local v1    # "offset":I
	// 5721    .end local v3    # "posOffset":Ljava/text/ParsePosition;
	// 5722    .end local v4    # "sign":I
label_cond_88:
	if ( firstChar != 0x2d )
		goto label_cond_8e;
	//    .restart local v4    # "sign":I
	goto label_goto_34;
	// 5734    .line 2704
	// 5735    .end local v4    # "sign":I
label_cond_8e:
	pos->setErrorIndex(start);
	return cVar1;
	// 5742    .line 2726
	// 5743    .restart local v1    # "offset":I
	// 5744    .restart local v3    # "posOffset":Ljava/text/ParsePosition;
	// 5745    .restart local v4    # "sign":I
label_cond_92:
	pos->setIndex(posOffset->getIndex());
	if ( !(hasDigitOffset) )  
		goto label_cond_a2;
	hasDigitOffset->value = java::lang::Boolean::valueOf(0x1);
label_cond_a2:
	return (sign * android::icu::text::TimeZoneFormat::parseAsciiOffsetFields(text, posOffset, 0x3a, android::icu::text::TimeZoneFormat_S_OffsetFields::H, android::icu::text::TimeZoneFormat_S_OffsetFields::HMS));

}
// .method private parseOffsetLocalizedGMT(Ljava/lang/String;Ljava/text/ParsePosition;ZLandroid/icu/util/Output;)I
int android::icu::text::TimeZoneFormat::parseOffsetLocalizedGMT(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,bool isShort,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> hasDigitOffset)
{
	
	bool cVar0;
	bool cVar1;
	int start;
	std::shared<std::vector<int[]>> parsedLength;
	std::shared_ptr<std::vector<java::lang::String>> cVar2;
	int cVar3;
	std::shared_ptr<java::lang::String> defGMTZero;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .param p3, "isShort"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 5778        value = {
	// 5779            "(",
	// 5780            "Ljava/lang/String;",
	// 5781            "Ljava/text/ParsePosition;",
	// 5782            "Z",
	// 5783            "Landroid/icu/util/Output",
	// 5784            "<",
	// 5785            "Ljava/lang/Boolean;",
	// 5786            ">;)I"
	// 5787        }
	// 5788    .end annotation
	//    .local p4, "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	cVar0 = 0x1;
	cVar1 = 0x0;
	start = pos->getIndex();
	//    .local v2, "start":I
	0x0;
	//    .local v6, "offset":I
	parsedLength = std::make_shared<std::vector<int[]>>(cVar0);
	parsedLength[cVar1] = cVar1;
	//    .local v7, "parsedLength":[I
	if ( !(hasDigitOffset) )  
		goto label_cond_13;
	hasDigitOffset->value = java::lang::Boolean::valueOf(cVar1);
label_cond_13:
	if ( parsedLength[cVar1] <= 0 )
		goto label_cond_2a;
	if ( !(hasDigitOffset) )  
		goto label_cond_23;
	hasDigitOffset->value = java::lang::Boolean::valueOf(cVar0);
label_cond_23:
	pos->setIndex((parsedLength[cVar1] +  start));
	return this->parseOffsetLocalizedGMTPattern(text, start, isShort, parsedLength);
	// 5854    .line 2159
label_cond_2a:
	if ( parsedLength[cVar1] <= 0 )
		goto label_cond_41;
	if ( !(hasDigitOffset) )  
		goto label_cond_3a;
	hasDigitOffset->value = java::lang::Boolean::valueOf(cVar0);
label_cond_3a:
	pos->setIndex((parsedLength[cVar1] +  start));
	return this->parseOffsetDefaultLocalizedGMT(text, start, parsedLength);
	// 5886    .line 2169
label_cond_41:
	if ( !(text->regionMatches(cVar0, start, this->_gmtZeroFormat, cVar1, this->_gmtZeroFormat->length())) )  
		goto label_cond_5b;
	pos->setIndex((this->_gmtZeroFormat->length() +  start));
	return cVar1;
	// 5918    .line 2175
label_cond_5b:
	cVar2 = android::icu::text::TimeZoneFormat::ALT_GMT_STRINGS;
	cVar3 = cVar1;
label_goto_5f:
	if ( cVar3 >= cVar2->size() )
		goto label_cond_7b;
	defGMTZero = cVar2[cVar3];
	//    .local v3, "defGMTZero":Ljava/lang/String;
	if ( !(text->regionMatches(cVar0, start, defGMTZero, cVar1, defGMTZero->length())) )  
		goto label_cond_77;
	pos->setIndex((defGMTZero->length() +  start));
	return cVar1;
	// 5957    .line 2175
label_cond_77:
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_5f;
	// 5965    .line 2183
	// 5966    .end local v3    # "defGMTZero":Ljava/lang/String;
label_cond_7b:
	pos->setErrorIndex(start);
	return cVar1;

}
// .method private parseOffsetLocalizedGMTPattern(Ljava/lang/String;IZ[I)I
int android::icu::text::TimeZoneFormat::parseOffsetLocalizedGMTPattern(std::shared_ptr<java::lang::String> text,int start,bool isShort,std::shared_ptr<int[]> parsedLen)
{
	
	bool cVar0;
	int cVar1;
	int offset;
	int parsed;
	int len;
	int cVar2;
	int idx;
	std::shared<std::vector<int[]>> offsetLen;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "isShort"    # Z
	//    .param p4, "parsedLen"    # [I
	cVar0 = 0x1;
	cVar1 = 0x0;
	//    .local v6, "idx":I
	offset = 0x0;
	//    .local v7, "offset":I
	parsed = 0x0;
	//    .local v9, "parsed":Z
	len = this->_gmtPatternPrefix->length();
	//    .local v5, "len":I
	if ( len <= 0 )
		goto label_cond_21;
	if ( !(( text->regionMatches(cVar0, start, this->_gmtPatternPrefix, cVar1, len) ^ 0x1)) )  
		goto label_cond_21;
	//    .end local v6    # "idx":I
	//    .local v2, "idx":I
label_cond_1a:
label_goto_1a:
	if ( !(parsed) )  
		goto label_cond_46;
	cVar2 = (start - start);
label_goto_1e:
	parsedLen[cVar1] = cVar2;
	return offset;
	// 6040    .line 2208
	// 6041    .end local v2    # "idx":I
	// 6042    .restart local v6    # "idx":I
label_cond_21:
	idx = (start + len);
	//    .end local v6    # "idx":I
	//    .restart local v2    # "idx":I
	offsetLen = std::make_shared<std::vector<int[]>>(cVar0);
	//    .local v8, "offsetLen":[I
	offset = this->parseOffsetFields(text, idx, cVar1, offsetLen);
	if ( !(offsetLen[cVar1]) )  
		goto label_cond_1a;
	idx = (idx +  offsetLen[cVar1]);
	len = this->_gmtPatternSuffix->length();
	if ( len <= 0 )
		goto label_cond_43;
	if ( ( text->regionMatches(cVar0, idx, this->_gmtPatternSuffix, cVar1, len) ^ 0x1) )     
		goto label_cond_1a;
label_cond_43:
	(idx +  len);
	parsed = 0x1;
	goto label_goto_1a;
	// 6098    .end local v8    # "offsetLen":[I
label_cond_46:
	cVar2 = cVar1;
	goto label_goto_1e;

}
// .method private static parseOffsetPattern(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TimeZoneFormat::parseOffsetPattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> letters)
{
	
	char cVar0;
	int cVar1;
	int isPrevQuote;
	int inQuote;
	std::shared_ptr<java::lang::StringBuilder> text;
	char itemType;
	int itemLength;
	int invalidPattern;
	std::shared_ptr<java::util::ArrayList> items;
	std::shared_ptr<java::util::BitSet> checkBits;
	int i;
	char ch;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetField> cVar2;
	std::shared_ptr<java::lang::IllegalStateException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetField> cVar7;
	int patFieldIdx;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetField> cVar5;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetField> cVar6;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .param p1, "letters"    # Ljava/lang/String;
	cVar0 = 0x27;
	cVar1 = 0x0;
	isPrevQuote = 0x0;
	//    .local v5, "isPrevQuote":Z
	inQuote = 0x0;
	//    .local v3, "inQuote":Z
	text = std::make_shared<java::lang::StringBuilder>();
	//    .local v10, "text":Ljava/lang/StringBuilder;
	itemType = 0x0;
	//    .local v7, "itemType":C
	itemLength = 0x1;
	//    .local v6, "itemLength":I
	invalidPattern = 0x0;
	//    .local v4, "invalidPattern":Z
	items = std::make_shared<java::util::ArrayList>();
	//    .local v8, "items":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	checkBits = std::make_shared<java::util::BitSet>(letters->length());
	//    .local v1, "checkBits":Ljava/util/BitSet;
	i = 0x0;
	//    .end local v3    # "inQuote":Z
	//    .end local v7    # "itemType":C
	//    .local v2, "i":I
label_goto_1c:
	if ( i >= pattern->length() )
		goto label_cond_47;
	ch = pattern->charAt(i);
	//    .local v0, "ch":C
	if ( ch != cVar0 )
		goto label_cond_81;
	if ( !(isPrevQuote) )  
		goto label_cond_33;
	text->append(cVar0);
	isPrevQuote = 0x0;
label_cond_2e:
label_goto_2e:
	inQuote = ( inQuote ^ 0x1);
label_goto_30:
	i = ( i + 0x1);
	goto label_goto_1c;
	// 6200    .line 1962
label_cond_33:
	isPrevQuote = 0x1;
	if ( !(itemType) )  
		goto label_cond_2e;
	if ( !(android::icu::text::TimeZoneFormat_S_GMTOffsetField::isValid(itemType, itemLength)) )  
		goto label_cond_46;
	cVar2 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetField>(itemType, itemLength);
	items->add(cVar2);
	itemType = 0x0;
	//    .restart local v7    # "itemType":C
	goto label_goto_2e;
	// 6227    .line 1967
	// 6228    .end local v7    # "itemType":C
label_cond_46:
	invalidPattern = 0x1;
	//    .end local v0    # "ch":C
label_cond_47:
label_goto_47:
	if ( invalidPattern )     
		goto label_cond_5b;
	if ( itemType )     
		goto label_cond_d5;
	if ( text->length() <= 0 )
		goto label_cond_5b;
	items->add(text->toString());
	text->setLength(cVar1);
label_cond_5b:
label_goto_5b:
	if ( invalidPattern )     
		goto label_cond_67;
	if ( checkBits->cardinality() == letters->length() )
		goto label_cond_e8;
label_cond_67:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalStateException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad localized GMT offset pattern: ")))->append(pattern)->toString());
	// throw
	throw cVar3;
	// 6299    .line 1975
	// 6300    .restart local v0    # "ch":C
label_cond_81:
	0x0;
	if ( !(inQuote) )  
		goto label_cond_88;
	text->append(ch);
	goto label_goto_30;
	// 6312    .line 1979
label_cond_88:
	patFieldIdx = letters->indexOf(ch);
	//    .local v9, "patFieldIdx":I
	if ( patFieldIdx < 0 ) 
		goto label_cond_bc;
	if ( ch != itemType )
		goto label_cond_93;
	itemLength = ( itemLength + 0x1);
	goto label_goto_30;
	// 6330    .line 1985
label_cond_93:
	if ( itemType )     
		goto label_cond_ab;
	if ( text->length() <= 0 )
		goto label_cond_a5;
	items->add(text->toString());
	text->setLength(cVar1);
label_cond_a5:
label_goto_a5:
	itemType = ch;
	//    .local v7, "itemType":C
	itemLength = 0x1;
	checkBits->set(patFieldIdx);
	goto label_goto_30;
	// 6365    .line 1991
	// 6366    .end local v7    # "itemType":C
label_cond_ab:
	if ( !(android::icu::text::TimeZoneFormat_S_GMTOffsetField::isValid(itemType, itemLength)) )  
		goto label_cond_ba;
	cVar5 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetField>(itemType, itemLength);
	items->add(cVar5);
	goto label_goto_a5;
	// 6383    .line 1994
label_cond_ba:
	invalidPattern = 0x1;
	goto label_goto_47;
	// 6390    .line 2004
label_cond_bc:
	if ( !(itemType) )  
		goto label_cond_cd;
	if ( !(android::icu::text::TimeZoneFormat_S_GMTOffsetField::isValid(itemType, itemLength)) )  
		goto label_cond_d2;
	cVar6 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetField>(itemType, itemLength);
	items->add(cVar6);
	itemType = 0x0;
label_cond_cd:
	text->append(ch);
	goto label_goto_30;
	// 6417    .line 2008
label_cond_d2:
	invalidPattern = 0x1;
	goto label_goto_47;
	// 6424    .line 2026
	// 6425    .end local v0    # "ch":C
	// 6426    .end local v9    # "patFieldIdx":I
label_cond_d5:
	if ( !(android::icu::text::TimeZoneFormat_S_GMTOffsetField::isValid(itemType, itemLength)) )  
		goto label_cond_e5;
	cVar7 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetField>(itemType, itemLength);
	items->add(cVar7);
	goto label_goto_5b;
	// 6443    .line 2029
label_cond_e5:
	invalidPattern = 0x1;
	goto label_goto_5b;
	// 6449    .line 2038
label_cond_e8:
	return items->toArray(std::make_shared<std::vector<std::vector<java::lang::Object>>>(items->size()));

}
// .method private static parseShortZoneID(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::parseShortZoneID(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::TimeZoneFormat> cVar1;
	std::shared_ptr<android::icu::impl::TextTrieMap> trie;
	std::shared_ptr<java::util::Iterator> id_S_iterator;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::lang::CharSequence> shortID;
	std::shared<std::vector<int[]>> matchLen;
	std::shared_ptr<java::util::Iterator> itr;
	std::shared_ptr<java::lang::String> resolvedID;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # Ljava/text/ParsePosition;
	cVar0 = 0x0;
	//    .local v5, "resolvedID":Ljava/lang/String;
	if ( android::icu::text::TimeZoneFormat::SHORT_ZONE_ID_TRIE )     
		goto label_cond_45;
	cVar1 = android::icu::text::TimeZoneFormat();
	cVar1->monitor_enter();
	try {
	//label_try_start_a:
	if ( android::icu::text::TimeZoneFormat::SHORT_ZONE_ID_TRIE )     
		goto label_cond_44;
	trie = std::make_shared<android::icu::impl::TextTrieMap>(0x1);
	//    .local v7, "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Ljava/lang/String;>;"
	//    .local v0, "canonicalIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	id_S_iterator = android::icu::util::TimeZone::getAvailableIDs(android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL, 0x0, 0x0)->iterator();
	//    .local v2, "id$iterator":Ljava/util/Iterator;
label_cond_20:
label_goto_20:
	if ( !(id_S_iterator->hasNext()) )  
		goto label_cond_39;
	id = id_S_iterator->next();
	id->checkCast("java::lang::String");
	//    .local v1, "id":Ljava/lang/String;
	shortID = android::icu::impl::ZoneMeta::getShortID(id);
	//    .local v6, "shortID":Ljava/lang/String;
	if ( !(shortID) )  
		goto label_cond_20;
	trie->put(shortID, id);
	//label_try_end_35:
	}
	catch (...){
		goto label_catchall_36;
	}
	//    .catchall {:try_start_a .. :try_end_35} :catchall_36
	goto label_goto_20;
	// 6551    .line 2969
	// 6552    .end local v0    # "canonicalIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 6553    .end local v1    # "id":Ljava/lang/String;
	// 6554    .end local v2    # "id$iterator":Ljava/util/Iterator;
	// 6555    .end local v6    # "shortID":Ljava/lang/String;
	// 6556    .end local v7    # "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Ljava/lang/String;>;"
label_catchall_36:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 6564    .line 2981
	// 6565    .restart local v0    # "canonicalIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 6566    .restart local v2    # "id$iterator":Ljava/util/Iterator;
	// 6567    .restart local v7    # "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Ljava/lang/String;>;"
label_cond_39:
	try {
	//label_try_start_39:
	trie->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("unk")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/Unknown")));
	android::icu::text::TimeZoneFormat::SHORT_ZONE_ID_TRIE = trie;
	//label_try_end_44:
	}
	catch (...){
		goto label_catchall_36;
	}
	//    .catchall {:try_start_39 .. :try_end_44} :catchall_36
	//    .end local v0    # "canonicalIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .end local v2    # "id$iterator":Ljava/util/Iterator;
	//    .end local v7    # "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Ljava/lang/String;>;"
label_cond_44:
	cVar1->monitor_exit();
label_cond_45:
	matchLen = std::make_shared<std::vector<int[]>>(0x1);
	matchLen[cVar0] = cVar0;
	//    .local v4, "matchLen":[I
	itr = android::icu::text::TimeZoneFormat::SHORT_ZONE_ID_TRIE->get(text, pos->getIndex(), matchLen);
	//    .local v3, "itr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	if ( !(itr) )  
		goto label_cond_66;
	resolvedID = itr->next();
	//    .end local v5    # "resolvedID":Ljava/lang/String;
	resolvedID->checkCast("java::lang::String");
	//    .local v5, "resolvedID":Ljava/lang/String;
	pos->setIndex((pos->getIndex() +  matchLen[cVar0]));
	//    .end local v5    # "resolvedID":Ljava/lang/String;
label_goto_65:
	return 0x0;
	// 6634    .line 2993
	// 6635    .local v5, "resolvedID":Ljava/lang/String;
label_cond_66:
	pos->setErrorIndex(pos->getIndex());
	goto label_goto_65;

}
// .method private parseSingleLocalizedDigit(Ljava/lang/String;I[I)I
int android::icu::text::TimeZoneFormat::parseSingleLocalizedDigit(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<int[]> len)
{
	
	int cVar0;
	int digit;
	int cp;
	int i;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "len"    # [I
	cVar0 = 0x0;
	digit = -0x1;
	//    .local v1, "digit":I
	len[cVar0] = cVar0;
	if ( start >= text->length() )
		goto label_cond_2d;
	cp = java::lang::Character::codePointAt(text, start);
	//    .local v0, "cp":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_f:
	if ( i >= this->_gmtOffsetDigits->size() )
		goto label_cond_1f;
	if ( cp != this->_gmtOffsetDigits[i]->codePointAt(cVar0) )
		goto label_cond_2e;
	digit = i;
label_cond_1f:
	if ( digit >= 0 )
		goto label_cond_25;
	digit = android::icu::lang::UCharacter::digit(cp);
label_cond_25:
	if ( digit < 0 ) 
		goto label_cond_2d;
	len[cVar0] = java::lang::Character::charCount(cp);
	//    .end local v0    # "cp":I
	//    .end local v2    # "i":I
label_cond_2d:
	return digit;
	// 6726    .line 2625
	// 6727    .restart local v0    # "cp":I
	// 6728    .restart local v2    # "i":I
label_cond_2e:
	i = ( i + 0x1);
	goto label_goto_f;

}
// .method private static parseZoneID(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::parseZoneID(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::TimeZoneFormat> cVar1;
	std::shared_ptr<android::icu::impl::TextTrieMap> trie;
	auto ids;
	int cVar2;
	std::shared_ptr<java::lang::CharSequence> id;
	std::shared<std::vector<int[]>> matchLen;
	std::shared_ptr<java::util::Iterator> itr;
	std::shared_ptr<java::lang::String> resolvedID;
	
	//    .param p0, "text"    # Ljava/lang/String;
	//    .param p1, "pos"    # Ljava/text/ParsePosition;
	cVar0 = 0x0;
	//    .local v4, "resolvedID":Ljava/lang/String;
	if ( android::icu::text::TimeZoneFormat::ZONE_ID_TRIE )     
		goto label_cond_27;
	cVar1 = android::icu::text::TimeZoneFormat();
	cVar1->monitor_enter();
	try {
	//label_try_start_a:
	if ( android::icu::text::TimeZoneFormat::ZONE_ID_TRIE )     
		goto label_cond_26;
	trie = std::make_shared<android::icu::impl::TextTrieMap>(0x1);
	//    .local v5, "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Ljava/lang/String;>;"
	ids = android::icu::util::TimeZone::getAvailableIDs({const[class].FS-Param});
	//    .local v1, "ids":[Ljava/lang/String;
	cVar2 = cVar0;
label_goto_1a:
	if ( cVar2 >= ids->size() )
		goto label_cond_24;
	id = ids[cVar2];
	//    .local v0, "id":Ljava/lang/String;
	trie->put(id, id);
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_1a;
	// 6798    .line 2939
	// 6799    .end local v0    # "id":Ljava/lang/String;
label_cond_24:
	android::icu::text::TimeZoneFormat::ZONE_ID_TRIE = trie;
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_48;
	}
	//    .catchall {:try_start_a .. :try_end_26} :catchall_48
	//    .end local v1    # "ids":[Ljava/lang/String;
	//    .end local v5    # "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Ljava/lang/String;>;"
label_cond_26:
	cVar1->monitor_exit();
label_cond_27:
	matchLen = std::make_shared<std::vector<int[]>>(0x1);
	matchLen[cVar0] = cVar0;
	//    .local v3, "matchLen":[I
	itr = android::icu::text::TimeZoneFormat::ZONE_ID_TRIE->get(text, pos->getIndex(), matchLen);
	//    .local v2, "itr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	if ( !(itr) )  
		goto label_cond_4b;
	resolvedID = itr->next();
	//    .end local v4    # "resolvedID":Ljava/lang/String;
	resolvedID->checkCast("java::lang::String");
	//    .local v4, "resolvedID":Ljava/lang/String;
	pos->setIndex((pos->getIndex() +  matchLen[cVar0]));
	//    .end local v4    # "resolvedID":Ljava/lang/String;
label_goto_47:
	return 0x0;
	// 6857    .line 2931
	// 6858    .end local v2    # "itr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	// 6859    .end local v3    # "matchLen":[I
	// 6860    .local v4, "resolvedID":Ljava/lang/String;
label_catchall_48:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 6868    .line 2955
	// 6869    .restart local v2    # "itr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	// 6870    .restart local v3    # "matchLen":[I
label_cond_4b:
	pos->setErrorIndex(pos->getIndex());
	goto label_goto_47;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::TimeZoneFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> ois)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::io::ObjectInputStream_S_GetField> fields;
	std::shared_ptr<android::icu::util::ULocale> cVar2;
	std::shared_ptr<java::io::InvalidObjectException> cVar3;
	std::shared_ptr<android::icu::text::TimeZoneNames> cVar4;
	std::shared_ptr<java::io::InvalidObjectException> cVar5;
	std::shared_ptr<java::lang::String> cVar6;
	std::shared_ptr<java::io::InvalidObjectException> cVar7;
	std::shared_ptr<std::vector<java::lang::String>> tmpGmtOffsetPatterns;
	std::shared_ptr<java::io::InvalidObjectException> cVar8;
	std::shared_ptr<java::io::InvalidObjectException> cVar9;
	int i;
	std::shared_ptr<std::vector<java::lang::String>> cVar10;
	std::shared_ptr<java::io::InvalidObjectException> cVar11;
	std::shared_ptr<java::io::InvalidObjectException> cVar12;
	std::shared_ptr<java::lang::String> cVar13;
	std::shared_ptr<java::io::InvalidObjectException> cVar14;
	std::shared_ptr<java::io::InvalidObjectException> cVar15;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> cVar16;
	
	//    .param p1, "ois"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 6885        value = {
	// 6886            Ljava/lang/ClassNotFoundException;,
	// 6887            Ljava/io/IOException;
	// 6888        }
	// 6889    .end annotation
	cVar0 = 0x4;
	cVar1 = 0x0;
	fields = ois->readFields();
	//    .local v0, "fields":Ljava/io/ObjectInputStream$GetField;
	cVar2 = fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("_locale")), cVar1);
	cVar2->checkCast("android::icu::util::ULocale");
	this->_locale = cVar2;
	if ( this->_locale )     
		goto label_cond_1e;
	cVar3 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing field: locale")));
	// throw
	throw cVar3;
	// 6927    .line 3107
label_cond_1e:
	cVar4 = fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("_tznames")), cVar1);
	cVar4->checkCast("android::icu::text::TimeZoneNames");
	this->_tznames = cVar4;
	if ( this->_tznames )     
		goto label_cond_36;
	cVar5 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing field: tznames")));
	// throw
	throw cVar5;
	// 6953    .line 3112
label_cond_36:
	cVar6 = fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtPattern")), cVar1);
	cVar6->checkCast("java::lang::String");
	this->_gmtPattern = cVar6;
	if ( this->_gmtPattern )     
		goto label_cond_4e;
	cVar7 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing field: gmtPattern")));
	// throw
	throw cVar7;
	// 6979    .line 3117
label_cond_4e:
	tmpGmtOffsetPatterns = fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtOffsetPatterns")), cVar1);
	tmpGmtOffsetPatterns->checkCast("std::vector<java::lang::String>");
	//    .local v2, "tmpGmtOffsetPatterns":[Ljava/lang/String;
	if ( tmpGmtOffsetPatterns )     
		goto label_cond_62;
	cVar8 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing field: gmtOffsetPatterns")));
	// throw
	throw cVar8;
	// 7002    .line 3120
label_cond_62:
	if ( tmpGmtOffsetPatterns->size() >= cVar0 )
		goto label_cond_6e;
	cVar9 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incompatible field: gmtOffsetPatterns")));
	// throw
	throw cVar9;
	// 7017    .line 3123
label_cond_6e:
	this->_gmtOffsetPatterns = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x6);
	if ( tmpGmtOffsetPatterns->size() != cVar0 )
		goto label_cond_ca;
	i = 0x0;
	//    .local v1, "i":I
label_goto_77:
	if ( i >= cVar0 )
		goto label_cond_82;
	this->_gmtOffsetPatterns[i] = tmpGmtOffsetPatterns[i];
	i = ( i + 0x1);
	goto label_goto_77;
	// 7049    .line 3128
label_cond_82:
	this->_gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_H->ordinal()] = android::icu::text::TimeZoneFormat::truncateOffsetPattern(this->_gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HM->ordinal()]);
	this->_gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_H->ordinal()] = android::icu::text::TimeZoneFormat::truncateOffsetPattern(this->_gmtOffsetPatterns[android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HM->ordinal()]);
	//    .end local v1    # "i":I
label_goto_b2:
	cVar10 = fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtOffsetDigits")), cVar1);
	cVar10->checkCast("std::vector<java::lang::String>");
	this->_gmtOffsetDigits = cVar10;
	if ( this->_gmtOffsetDigits )     
		goto label_cond_cd;
	cVar11 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing field: gmtOffsetDigits")));
	// throw
	throw cVar11;
	// 7127    .line 3131
label_cond_ca:
	this->_gmtOffsetPatterns = tmpGmtOffsetPatterns;
	goto label_goto_b2;
	// 7133    .line 3137
label_cond_cd:
	if ( this->_gmtOffsetDigits->size() == 0xa )
		goto label_cond_dd;
	cVar12 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incompatible field: gmtOffsetDigits")));
	// throw
	throw cVar12;
	// 7152    .line 3141
label_cond_dd:
	cVar13 = fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtZeroFormat")), cVar1);
	cVar13->checkCast("java::lang::String");
	this->_gmtZeroFormat = cVar13;
	if ( this->_gmtZeroFormat )     
		goto label_cond_f5;
	cVar14 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing field: gmtZeroFormat")));
	// throw
	throw cVar14;
	// 7178    .line 3146
label_cond_f5:
	this->_parseAllStyles = fields->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("_parseAllStyles")), 0x0);
	if ( !(fields->defaulted(std::make_shared<java::lang::String>(std::make_shared<char[]>("_parseAllStyles")))) )  
		goto label_cond_111;
	cVar15 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing field: parseAllStyles")));
	// throw
	throw cVar15;
	// 7208    .line 3166
label_cond_111:
	if ( !(this->_tznames->instanceOf("android::icu::impl::TimeZoneNamesImpl")) )  
		goto label_cond_12c;
	this->_tznames = android::icu::text::TimeZoneNames::getInstance(this->_locale);
	this->_gnames = cVar1;
label_goto_121:
	this->initGMTPattern(this->_gmtPattern);
	this->initGMTOffsetPatterns(this->_gmtOffsetPatterns);
	return;
	// 7242    .line 3172
label_cond_12c:
	cVar16 = std::make_shared<android::icu::impl::TimeZoneGenericNames>(this->_locale, this->_tznames);
	this->_gnames = cVar16;
	goto label_goto_121;

}
// .method private static toCodePoints(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::toCodePoints(std::shared_ptr<java::lang::String> str)
{
	
	int len;
	std::shared<std::vector<std::vector<java::lang::String>>> codePoints;
	int i;
	int offset;
	int codeLen;
	
	//    .param p0, "str"    # Ljava/lang/String;
	len = str->codePointCount(0x0, str->length());
	//    .local v4, "len":I
	codePoints = std::make_shared<std::vector<std::vector<java::lang::String>>>(len);
	//    .local v2, "codePoints":[Ljava/lang/String;
	i = 0x0;
	//    .local v3, "i":I
	offset = 0x0;
	//    .local v5, "offset":I
label_goto_d:
	if ( i >= len )
		goto label_cond_23;
	//    .local v0, "code":I
	codeLen = java::lang::Character::charCount(str->codePointAt(offset));
	//    .local v1, "codeLen":I
	codePoints[i] = str->substring(offset, (offset + codeLen));
	offset = (offset +  codeLen);
	i = ( i + 0x1);
	goto label_goto_d;
	// 7317    .line 2661
	// 7318    .end local v0    # "code":I
	// 7319    .end local v1    # "codeLen":I
label_cond_23:
	return codePoints;

}
// .method private static truncateOffsetPattern(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::truncateOffsetPattern(std::shared_ptr<java::lang::String> offsetHM)
{
	
	int cVar0;
	int idx_mm;
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	int idx_HH;
	int idx_H;
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	
	//    .param p0, "offsetHM"    # Ljava/lang/String;
	cVar0 = 0x0;
	idx_mm = offsetHM->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("mm")));
	//    .local v2, "idx_mm":I
	if ( idx_mm >= 0 )
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad time zone hour pattern data")));
	// throw
	throw cVar1;
	// 7351    .line 2073
label_cond_13:
	idx_HH = offsetHM->substring(cVar0, idx_mm)->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("HH")));
	//    .local v1, "idx_HH":I
	if ( idx_HH < 0 ) 
		goto label_cond_27;
	return offsetHM->substring(cVar0, ( idx_HH + 0x2));
	// 7376    .line 2077
label_cond_27:
	idx_H = offsetHM->substring(cVar0, idx_mm)->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("H")));
	//    .local v0, "idx_H":I
	if ( idx_H < 0 ) 
		goto label_cond_3b;
	return offsetHM->substring(cVar0, ( idx_H + 0x1));
	// 7401    .line 2081
label_cond_3b:
	cVar2 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad time zone hour pattern data")));
	// throw
	throw cVar2;

}
// .method private static unquote(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::unquote(std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int isPrevQuote;
	int inQuote;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int i;
	char c;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0x27;
	if ( s->indexOf(cVar0) >= 0 )
		goto label_cond_9;
	return s;
	// 7429    .line 1841
label_cond_9:
	isPrevQuote = 0x0;
	//    .local v4, "isPrevQuote":Z
	inQuote = 0x0;
	//    .local v3, "inQuote":Z
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .end local v3    # "inQuote":Z
	//    .local v2, "i":I
label_goto_11:
	if ( i >= s->length() )
		goto label_cond_2f;
	c = s->charAt(i);
	//    .local v1, "c":C
	if ( c != cVar0 )
		goto label_cond_2a;
	if ( !(isPrevQuote) )  
		goto label_cond_28;
	buf->append(c);
	isPrevQuote = 0x0;
label_goto_23:
	inQuote = ( inQuote ^ 0x1);
label_goto_25:
	i = ( i + 0x1);
	goto label_goto_11;
	// 7484    .line 1851
label_cond_28:
	isPrevQuote = 0x1;
	goto label_goto_23;
	// 7490    .line 1855
label_cond_2a:
	0x0;
	buf->append(c);
	goto label_goto_25;
	// 7499    .line 1859
	// 7500    .end local v1    # "c":C
label_cond_2f:
	return buf->toString();

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::text::TimeZoneFormat::writeObject(std::shared_ptr<java::io::ObjectOutputStream> oos)
{
	
	std::shared_ptr<java::io::ObjectOutputStream_S_PutField> fields;
	
	//    .param p1, "oos"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 7513        value = {
	// 7514            Ljava/io/IOException;
	// 7515        }
	// 7516    .end annotation
	fields = oos->putFields();
	//    .local v0, "fields":Ljava/io/ObjectOutputStream$PutField;
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("_locale")), this->_locale);
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("_tznames")), this->_tznames);
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtPattern")), this->_gmtPattern);
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtOffsetPatterns")), this->_gmtOffsetPatterns);
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtOffsetDigits")), this->_gmtOffsetDigits);
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("_gmtZeroFormat")), this->_gmtZeroFormat);
	fields->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("_parseAllStyles")), this->_parseAllStyles);
	oos->writeFields();
	return;

}
// .method public cloneAsThawed()Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::text::TimeZoneFormat> copy;
	
	copy = this->clone();
	copy->checkCast("android::icu::text::TimeZoneFormat");
	//    .local v0, "copy":Landroid/icu/text/TimeZoneFormat;
	copy->_frozen = 0x0;
	return copy;

}
// .method public final format(Landroid/icu/text/TimeZoneFormat$Style;Landroid/icu/util/TimeZone;J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::format(std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> style,std::shared_ptr<android::icu::util::TimeZone> tz,long long date)
{
	
	//    .param p1, "style"    # Landroid/icu/text/TimeZoneFormat$Style;
	//    .param p2, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p3, "date"    # J
	return this->format(style, tz, date, 0x0);

}
// .method public format(Landroid/icu/text/TimeZoneFormat$Style;Landroid/icu/util/TimeZone;JLandroid/icu/util/Output;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::format(std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> style,std::shared_ptr<android::icu::util::TimeZone> tz,long long date,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> timeType)
{
	
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<int[]> offsets;
	int offset;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "style"    # Landroid/icu/text/TimeZoneFormat$Style;
	//    .param p2, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p3, "date"    # J
	//    .annotation system Ldalvik/annotation/Signature;
	// 7647        value = {
	// 7648            "(",
	// 7649            "Landroid/icu/text/TimeZoneFormat$Style;",
	// 7650            "Landroid/icu/util/TimeZone;",
	// 7651            "J",
	// 7652            "Landroid/icu/util/Output",
	// 7653            "<",
	// 7654            "Landroid/icu/text/TimeZoneFormat$TimeType;",
	// 7655            ">;)",
	// 7656            "Ljava/lang/String;"
	// 7657        }
	// 7658    .end annotation
	//    .local p5, "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	result = 0x0;
	//    .local v12, "result":Ljava/lang/String;
	if ( !(timeType) )  
		goto label_cond_9;
	timeType->value = android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
label_cond_9:
	//    .local v9, "noOffsetFormatFallback":Z
	// switch
	{
	auto item = ( android::icu::text::TimeZoneFormat::-getandroid-icu-text-TimeZoneFormat$StyleSwitchesValues({const[class].FS-Param})[style->ordinal()] );
	if (item == 0x1) goto label_sswitch_9f;
	if (item == 0x2) goto label_sswitch_48;
	if (item == 0x3) goto label_sswitch_55;
	if (item == 0x4) goto label_sswitch_62;
	if (item == 0x11) goto label_sswitch_6f;
	if (item == 0x12) goto label_sswitch_7e;
	if (item == 0x13) goto label_sswitch_8d;
	if (item == 0x14) goto label_sswitch_93;
	}
	//    .end local v12    # "result":Ljava/lang/String;
label_goto_17:
	if ( result )     
		goto label_cond_b7;
	if ( !(( 0x0 ^ 0x1)) )  
		goto label_cond_b7;
	?;
	offsets = ?;
	//    .local v11, "offsets":[I
	tz->getOffset(date, 0x0, offsets);
	offset = (offsets[0x0] + offsets[0x1]);
	//    .local v10, "offset":I
	// switch
	{
	auto item = ( android::icu::text::TimeZoneFormat::-getandroid-icu-text-TimeZoneFormat$StyleSwitchesValues({const[class].FS-Param})[style->ordinal()] );
	if (item == 2) goto label_pswitch_a6;
	if (item == 3) goto label_pswitch_a6;
	if (item == 4) goto label_pswitch_c3;
	if (item == 5) goto label_pswitch_d8;
	if (item == 6) goto label_pswitch_e8;
	if (item == 7) goto label_pswitch_e0;
	if (item == 8) goto label_pswitch_f0;
	if (item == 9) goto label_pswitch_d0;
	if (item == 10) goto label_pswitch_c8;
	if (item == 11) goto label_pswitch_f8;
	if (item == 12) goto label_pswitch_108;
	if (item == 13) goto label_pswitch_100;
	if (item == 14) goto label_pswitch_110;
	if (item == 15) goto label_pswitch_a6;
	if (item == 16) goto label_pswitch_c3;
	if (item == 17) goto label_pswitch_a6;
	if (item == 18) goto label_pswitch_c3;
	}
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_aa;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 7756    .line 834
	// 7757    .end local v10    # "offset":I
	// 7758    .end local v11    # "offsets":[I
	// 7759    .restart local v12    # "result":Ljava/lang/String;
label_sswitch_48:
	result = this->getTimeZoneGenericNames()->getGenericLocationName(android::icu::impl::ZoneMeta::getCanonicalCLDRID(tz));
	//    .local v12, "result":Ljava/lang/String;
	goto label_goto_17;
	// 7776    .line 837
	// 7777    .local v12, "result":Ljava/lang/String;
label_sswitch_55:
	result = this->getTimeZoneGenericNames()->getDisplayName(tz, android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG, date);
	//    .local v12, "result":Ljava/lang/String;
	goto label_goto_17;
	// 7794    .line 840
	// 7795    .local v12, "result":Ljava/lang/String;
label_sswitch_62:
	result = this->getTimeZoneGenericNames()->getDisplayName(tz, android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT, date);
	//    .local v12, "result":Ljava/lang/String;
	goto label_goto_17;
	// 7812    .line 843
	// 7813    .local v12, "result":Ljava/lang/String;
label_sswitch_6f:
	result = this->formatSpecific(tz, android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD, android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT, date, timeType);
	//    .local v12, "result":Ljava/lang/String;
	goto label_goto_17;
	// 7834    .line 846
	// 7835    .local v12, "result":Ljava/lang/String;
label_sswitch_7e:
	result = this->formatSpecific(tz, android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD, android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT, date, timeType);
	//    .local v12, "result":Ljava/lang/String;
	goto label_goto_17;
	// 7856    .line 850
	// 7857    .local v12, "result":Ljava/lang/String;
label_sswitch_8d:
	result = tz->getID();
	//    .local v12, "result":Ljava/lang/String;
	0x1;
	goto label_goto_17;
	// 7870    .line 854
	// 7871    .local v12, "result":Ljava/lang/String;
label_sswitch_93:
	result = android::icu::impl::ZoneMeta::getShortID(tz);
	//    .local v12, "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_9c;
	result = std::make_shared<java::lang::String>(std::make_shared<char[]>("unk"));
label_cond_9c:
	0x1;
	goto label_goto_17;
	// 7891    .line 861
	// 7892    .local v12, "result":Ljava/lang/String;
label_sswitch_9f:
	result = this->formatExemplarLocation(tz);
	//    .local v12, "result":Ljava/lang/String;
	0x1;
	goto label_goto_17;
	// 7905    .line 880
	// 7906    .end local v12    # "result":Ljava/lang/String;
	// 7907    .restart local v10    # "offset":I
	// 7908    .restart local v11    # "offsets":[I
label_pswitch_a6:
	result = this->formatOffsetLocalizedGMT(offset);
label_cond_aa:
label_goto_aa:
	if ( !(timeType) )  
		goto label_cond_b7;
	if ( !(offsets[0x1]) )  
		goto label_cond_118;
	cVar1 = android::icu::text::TimeZoneFormat_S_TimeType::DAYLIGHT;
label_goto_b3:
	timeType->value = cVar1;
	//    .end local v10    # "offset":I
	//    .end local v11    # "offsets":[I
label_cond_b7:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_11b;
	if ( result )     
		goto label_cond_11b;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 7949    .line 886
	// 7950    .restart local v10    # "offset":I
	// 7951    .restart local v11    # "offsets":[I
label_pswitch_c3:
	result = this->formatOffsetShortLocalizedGMT(offset);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 7960    .line 890
	// 7961    .end local v12    # "result":Ljava/lang/String;
label_pswitch_c8:
	result = this->formatOffsetISO8601Basic(offset, 0x1, 0x1, 0x1);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 7976    .line 894
	// 7977    .end local v12    # "result":Ljava/lang/String;
label_pswitch_d0:
	result = this->formatOffsetISO8601Basic(offset, 0x0, 0x1, 0x1);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 7992    .line 898
	// 7993    .end local v12    # "result":Ljava/lang/String;
label_pswitch_d8:
	result = this->formatOffsetISO8601Basic(offset, 0x1, 0x0, 0x1);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 8008    .line 902
	// 8009    .end local v12    # "result":Ljava/lang/String;
label_pswitch_e0:
	result = this->formatOffsetISO8601Basic(offset, 0x0, 0x0, 0x1);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 8024    .line 906
	// 8025    .end local v12    # "result":Ljava/lang/String;
label_pswitch_e8:
	result = this->formatOffsetISO8601Basic(offset, 0x1, 0x0, 0x0);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 8040    .line 910
	// 8041    .end local v12    # "result":Ljava/lang/String;
label_pswitch_f0:
	result = this->formatOffsetISO8601Basic(offset, 0x0, 0x0, 0x0);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 8056    .line 914
	// 8057    .end local v12    # "result":Ljava/lang/String;
label_pswitch_f8:
	result = this->formatOffsetISO8601Extended(offset, 0x1, 0x0, 0x1);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 8072    .line 918
	// 8073    .end local v12    # "result":Ljava/lang/String;
label_pswitch_100:
	result = this->formatOffsetISO8601Extended(offset, 0x0, 0x0, 0x1);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 8088    .line 922
	// 8089    .end local v12    # "result":Ljava/lang/String;
label_pswitch_108:
	result = this->formatOffsetISO8601Extended(offset, 0x1, 0x0, 0x0);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 8104    .line 926
	// 8105    .end local v12    # "result":Ljava/lang/String;
label_pswitch_110:
	result = this->formatOffsetISO8601Extended(offset, 0x0, 0x0, 0x0);
	//    .restart local v12    # "result":Ljava/lang/String;
	goto label_goto_aa;
	// 8120    .line 937
	// 8121    .end local v12    # "result":Ljava/lang/String;
label_cond_118:
	cVar1 = android::icu::text::TimeZoneFormat_S_TimeType::STANDARD;
	goto label_goto_b3;
	// 8127    .line 943
	// 8128    .end local v10    # "offset":I
	// 8129    .end local v11    # "offsets":[I
label_cond_11b:
	return result;
	// 8133    .line 832
	// 8134    :sswitch_data_11c
	// 8135    .sparse-switch
	// 8136        0x1 -> :sswitch_9f
	// 8137        0x2 -> :sswitch_48
	// 8138        0x3 -> :sswitch_55
	// 8139        0x4 -> :sswitch_62
	// 8140        0x11 -> :sswitch_6f
	// 8141        0x12 -> :sswitch_7e
	// 8142        0x13 -> :sswitch_8d
	// 8143        0x14 -> :sswitch_93
	// 8144    .end sparse-switch
	// 8146    .line 875
	// 8147    :pswitch_data_13e
	// 8148    .packed-switch 0x2
	// 8149        :pswitch_a6
	// 8150        :pswitch_a6
	// 8151        :pswitch_c3
	// 8152        :pswitch_d8
	// 8153        :pswitch_e8
	// 8154        :pswitch_e0
	// 8155        :pswitch_f0
	// 8156        :pswitch_d0
	// 8157        :pswitch_c8
	// 8158        :pswitch_f8
	// 8159        :pswitch_108
	// 8160        :pswitch_100
	// 8161        :pswitch_110
	// 8162        :pswitch_a6
	// 8163        :pswitch_c3
	// 8164        :pswitch_a6
	// 8165        :pswitch_c3
	// 8166    .end packed-switch

}
// .method public format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::TimeZoneFormat::format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	long long date;
	std::shared_ptr<android::icu::util::TimeZone> tz;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<android::icu::util::Calendar> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	0x0;
	//    .local v3, "tz":Landroid/icu/util/TimeZone;
	date = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v0, "date":J
	if ( !(obj->instanceOf("android::icu::util::TimeZone")) )  
		goto label_cond_18;
	tz = obj;
	tz->checkCast("android::icu::util::TimeZone");
	//    .end local p1    # "obj":Ljava/lang/Object;
	//    .local v3, "tz":Landroid/icu/util/TimeZone;
label_goto_c:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_53;
	if ( tz )     
		goto label_cond_53;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 8212    .line 1516
	// 8213    .local v3, "tz":Landroid/icu/util/TimeZone;
	// 8214    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_18:
	if ( !(obj->instanceOf("android::icu::util::Calendar")) )  
		goto label_cond_2a;
	cVar1 = obj;
	cVar1->checkCast("android::icu::util::Calendar");
	//    .local v3, "tz":Landroid/icu/util/TimeZone;
	obj->checkCast("android::icu::util::Calendar");
	//    .end local p1    # "obj":Ljava/lang/Object;
	date = obj->getTimeInMillis();
	goto label_goto_c;
	// 8240    .line 1520
	// 8241    .local v3, "tz":Landroid/icu/util/TimeZone;
	// 8242    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_2a:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot format given Object (")))->append(obj->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") as a time zone")))->toString());
	// throw
	throw cVar2;
	// 8286    .line 1524
	// 8287    .end local p1    # "obj":Ljava/lang/Object;
	// 8288    .local v3, "tz":Landroid/icu/util/TimeZone;
label_cond_53:
	result = this->formatOffsetLocalizedGMT(tz->getOffset(date));
	//    .local v2, "result":Ljava/lang/String;
	toAppendTo->append(result);
	if ( pos->getFieldAttribute() == android::icu::text::DateFormat_S_Field::TIME_ZONE )
		goto label_cond_6e;
	if ( pos->getField() != 0x11 )
		goto label_cond_79;
label_cond_6e:
	pos->setBeginIndex(0x0);
	pos->setEndIndex(result->length());
label_cond_79:
	return toAppendTo;

}
// .method public final formatOffsetISO8601Basic(IZZZ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::formatOffsetISO8601Basic(int offset,bool useUtcIndicator,bool isShort,bool ignoreSeconds)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "useUtcIndicator"    # Z
	//    .param p3, "isShort"    # Z
	//    .param p4, "ignoreSeconds"    # Z
	return this->formatOffsetISO8601(offset, 0x1, useUtcIndicator, isShort, ignoreSeconds);

}
// .method public final formatOffsetISO8601Extended(IZZZ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::formatOffsetISO8601Extended(int offset,bool useUtcIndicator,bool isShort,bool ignoreSeconds)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "useUtcIndicator"    # Z
	//    .param p3, "isShort"    # Z
	//    .param p4, "ignoreSeconds"    # Z
	return this->formatOffsetISO8601(offset, 0x0, useUtcIndicator, isShort, ignoreSeconds);

}
// .method public formatOffsetLocalizedGMT(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::formatOffsetLocalizedGMT(int offset)
{
	
	//    .param p1, "offset"    # I
	return this->formatOffsetLocalizedGMT(offset, 0x0);

}
// .method public formatOffsetShortLocalizedGMT(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::formatOffsetShortLocalizedGMT(int offset)
{
	
	//    .param p1, "offset"    # I
	return this->formatOffsetLocalizedGMT(offset, 0x1);

}
// .method public formatToCharacterIterator(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;
std::shared_ptr<java::text::AttributedCharacterIterator> android::icu::text::TimeZoneFormat::formatToCharacterIterator(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::lang::StringBuffer> toAppendTo;
	std::shared_ptr<java::text::FieldPosition> pos;
	std::shared_ptr<java::text::AttributedString> as;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	toAppendTo = std::make_shared<java::lang::StringBuffer>();
	//    .local v2, "toAppendTo":Ljava/lang/StringBuffer;
	pos = std::make_shared<java::text::FieldPosition>(0x0);
	//    .local v1, "pos":Ljava/text/FieldPosition;
	as = std::make_shared<java::text::AttributedString>(this->format(obj, toAppendTo, pos)->toString());
	//    .local v0, "as":Ljava/text/AttributedString;
	as->addAttribute(android::icu::text::DateFormat_S_Field::TIME_ZONE, android::icu::text::DateFormat_S_Field::TIME_ZONE);
	return as->getIterator();

}
// .method public freeze()Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::freeze()
{
	
	this->_frozen = 0x1;
	return this;

}
// .method public getDefaultParseOptions()Ljava/util/EnumSet;
std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneFormat_S_ParseOption>> android::icu::text::TimeZoneFormat::getDefaultParseOptions()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 8501        value = {
	// 8502            "()",
	// 8503            "Ljava/util/EnumSet",
	// 8504            "<",
	// 8505            "Landroid/icu/text/TimeZoneFormat$ParseOption;",
	// 8506            ">;"
	// 8507        }
	// 8508    .end annotation
	if ( !(this->_parseAllStyles) )  
		goto label_cond_11;
	if ( !(this->_parseTZDBNames) )  
		goto label_cond_11;
	return java::util::EnumSet::of(android::icu::text::TimeZoneFormat_S_ParseOption::ALL_STYLES, android::icu::text::TimeZoneFormat_S_ParseOption::TZ_DATABASE_ABBREVIATIONS);
	// 8531    .line 696
label_cond_11:
	if ( !(this->_parseAllStyles) )  
		goto label_cond_1c;
	return java::util::EnumSet::of(android::icu::text::TimeZoneFormat_S_ParseOption::ALL_STYLES);
	// 8546    .line 698
label_cond_1c:
	if ( !(this->_parseTZDBNames) )  
		goto label_cond_27;
	return java::util::EnumSet::of(android::icu::text::TimeZoneFormat_S_ParseOption::TZ_DATABASE_ABBREVIATIONS);
	// 8561    .line 701
label_cond_27:
	return java::util::EnumSet::noneOf(android::icu::text::TimeZoneFormat_S_ParseOption());

}
// .method public getGMTOffsetDigits()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::getGMTOffsetDigits()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	int cVar1;
	
	buf = std::make_shared<java::lang::StringBuilder>(this->_gmtOffsetDigits->size());
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	cVar0 = this->_gmtOffsetDigits;
	cVar1 = 0x0;
label_goto_c:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_16;
	//    .local v1, "digit":Ljava/lang/String;
	buf->append(cVar0[cVar1]);
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_c;
	// 8607    .line 613
	// 8608    .end local v1    # "digit":Ljava/lang/String;
label_cond_16:
	return buf->toString();

}
// .method public getGMTOffsetPattern(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::getGMTOffsetPattern(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> type)
{
	
	//    .param p1, "type"    # Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	return this->_gmtOffsetPatterns[type->ordinal()];

}
// .method public getGMTPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::getGMTPattern()
{
	
	return this->_gmtPattern;

}
// .method public getGMTZeroFormat()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat::getGMTZeroFormat()
{
	
	return this->_gmtZeroFormat;

}
// .method public getTimeZoneNames()Landroid/icu/text/TimeZoneNames;
std::shared_ptr<android::icu::text::TimeZoneNames> android::icu::text::TimeZoneFormat::getTimeZoneNames()
{
	
	return this->_tznames;

}
// .method public isFrozen()Z
bool android::icu::text::TimeZoneFormat::isFrozen()
{
	
	return this->_frozen;

}
// .method public parse(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::text::TimeZoneFormat::parse(std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> style,std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> timeType)
{
	
	//    .param p1, "style"    # Landroid/icu/text/TimeZoneFormat$Style;
	//    .param p2, "text"    # Ljava/lang/String;
	//    .param p3, "pos"    # Ljava/text/ParsePosition;
	//    .annotation system Ldalvik/annotation/Signature;
	// 8680        value = {
	// 8681            "(",
	// 8682            "Landroid/icu/text/TimeZoneFormat$Style;",
	// 8683            "Ljava/lang/String;",
	// 8684            "Ljava/text/ParsePosition;",
	// 8685            "Landroid/icu/util/Output",
	// 8686            "<",
	// 8687            "Landroid/icu/text/TimeZoneFormat$TimeType;",
	// 8688            ">;)",
	// 8689            "Landroid/icu/util/TimeZone;"
	// 8690        }
	// 8691    .end annotation
	//    .local p4, "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	return this->parse(style, text, pos, 0x0, timeType);

}
// .method public parse(Landroid/icu/text/TimeZoneFormat$Style;Ljava/lang/String;Ljava/text/ParsePosition;Ljava/util/EnumSet;Landroid/icu/util/Output;)Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::text::TimeZoneFormat::parse(std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> style,std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneFormat_S_ParseOption>> options,std::shared_ptr<android::icu::util::Output<android::icu::text::TimeZoneFormat_S_TimeType>> timeType)
{
	
	std::shared_ptr<android::icu::util::Output> timeType;
	int startIdx;
	int maxPos;
	bool fallbackShortLocalizedGMT;
	int evaluated;
	std::shared_ptr<java::text::ParsePosition> tmpPos;
	int parsedPos;
	std::shared_ptr<android::icu::util::Output> hasDigitOffset;
	int offset;
	std::shared_ptr<java::lang::Boolean> cVar7;
	int parsedOffset;
	int parseTZDBAbbrev;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::Boolean> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::Boolean> cVar4;
	std::shared_ptr<java::lang::Boolean> cVar5;
	std::shared_ptr<java::lang::Iterable> specificMatches;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> specificMatch;
	int matchPos;
	std::shared_ptr<java::util::Iterator> match_S_iterator;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> match;
	std::shared_ptr<java::lang::Iterable> tzdbNameMatches;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> tzdbNameMatch;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> genericMatch;
	std::shared_ptr<java::lang::String> parsedID;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	std::shared_ptr<java::util::EnumSet> genericNameTypes;
	std::shared_ptr<java::lang::AssertionError> cVar13;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> bestGeneric;
	std::shared_ptr<java::lang::Boolean> cVar9;
	auto nameTypes;
	std::shared_ptr<java::lang::AssertionError> cVar11;
	std::shared_ptr<java::lang::AssertionError> cVar12;
	std::shared_ptr<java::lang::AssertionError> cVar10;
	
	//    .param p1, "style"    # Landroid/icu/text/TimeZoneFormat$Style;
	//    .param p2, "text"    # Ljava/lang/String;
	//    .param p3, "pos"    # Ljava/text/ParsePosition;
	//    .annotation system Ldalvik/annotation/Signature;
	// 8721        value = {
	// 8722            "(",
	// 8723            "Landroid/icu/text/TimeZoneFormat$Style;",
	// 8724            "Ljava/lang/String;",
	// 8725            "Ljava/text/ParsePosition;",
	// 8726            "Ljava/util/EnumSet",
	// 8727            "<",
	// 8728            "Landroid/icu/text/TimeZoneFormat$ParseOption;",
	// 8729            ">;",
	// 8730            "Landroid/icu/util/Output",
	// 8731            "<",
	// 8732            "Landroid/icu/text/TimeZoneFormat$TimeType;",
	// 8733            ">;)",
	// 8734            "Landroid/icu/util/TimeZone;"
	// 8735        }
	// 8736    .end annotation
	//    .local p4, "options":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneFormat$ParseOption;>;"
	//    .local p5, "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	if ( timeType )     
		goto label_cond_95;
	//    .end local p5    # "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
	var456 = timeType(android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN);
	//    .restart local p5    # "timeType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/text/TimeZoneFormat$TimeType;>;"
label_goto_d:
	startIdx = pos->getIndex();
	//    .local v27, "startIdx":I
	maxPos = text->length();
	//    .local v15, "maxPos":I
	if ( style == android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_LONG )
		goto label_cond_25;
	if ( style != android::icu::text::TimeZoneFormat_S_Style::GENERIC_LONG )
		goto label_cond_9f;
label_cond_25:
	//    .local v6, "fallbackLocalizedGMT":Z
label_goto_26:
	if ( style == android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_SHORT )
		goto label_cond_36;
	if ( style != android::icu::text::TimeZoneFormat_S_Style::GENERIC_SHORT )
		goto label_cond_aa;
label_cond_36:
	fallbackShortLocalizedGMT = 0x1;
	//    .local v7, "fallbackShortLocalizedGMT":Z
label_goto_37:
	evaluated = 0x0;
	//    .local v5, "evaluated":I
	var479 = tmpPos(startIdx);
	//    .local v28, "tmpPos":Ljava/text/ParsePosition;
	0x7fffffff;
	//    .local v21, "parsedOffset":I
	parsedPos = -0x1;
	//    .local v22, "parsedPos":I
	if ( fallbackLocalizedGMT )     
		goto label_cond_4a;
	if ( !(fallbackShortLocalizedGMT) )  
		goto label_cond_c6;
label_cond_4a:
	hasDigitOffset = std::make_shared<android::icu::util::Output>(java::lang::Boolean::valueOf(0x0));
	//    .local v10, "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	offset = this->parseOffsetLocalizedGMT(text, tmpPos, fallbackShortLocalizedGMT, hasDigitOffset);
	//    .local v17, "offset":I
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_b2;
	if ( tmpPos->getIndex() == maxPos )
		goto label_cond_81;
	cVar7 = hasDigitOffset->value;
	cVar7->checkCast("java::lang::Boolean");
	if ( !(cVar7->booleanValue()) )  
		goto label_cond_ac;
label_cond_81:
	pos->setIndex(tmpPos->getIndex());
	return this->getTimeZoneForOffset(offset);
	// 8925    .line 1014
	// 8926    .end local v5    # "evaluated":I
	// 8927    .end local v6    # "fallbackLocalizedGMT":Z
	// 8928    .end local v7    # "fallbackShortLocalizedGMT":Z
	// 8929    .end local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 8930    .end local v15    # "maxPos":I
	// 8931    .end local v17    # "offset":I
	// 8932    .end local v21    # "parsedOffset":I
	// 8933    .end local v22    # "parsedPos":I
	// 8934    .end local v27    # "startIdx":I
	// 8935    .end local v28    # "tmpPos":Ljava/text/ParsePosition;
label_cond_95:
	timeType->value = android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	goto label_goto_d;
	// 8947    .line 1023
	// 8948    .restart local v15    # "maxPos":I
	// 8949    .restart local v27    # "startIdx":I
label_cond_9f:
	if ( style == android::icu::text::TimeZoneFormat_S_Style::GENERIC_LOCATION )
		goto label_cond_25;
	//    .restart local v6    # "fallbackLocalizedGMT":Z
	goto label_goto_26;
	// 8964    .line 1025
label_cond_aa:
	//    .restart local v7    # "fallbackShortLocalizedGMT":Z
	goto label_goto_37;
	// 8971    .line 1046
	// 8972    .restart local v5    # "evaluated":I
	// 8973    .restart local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 8974    .restart local v17    # "offset":I
	// 8975    .restart local v21    # "parsedOffset":I
	// 8976    .restart local v22    # "parsedPos":I
	// 8977    .restart local v28    # "tmpPos":Ljava/text/ParsePosition;
label_cond_ac:
	parsedOffset = offset;
	parsedPos = tmpPos->getIndex();
label_cond_b2:
	evaluated = ( (android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT->flag | android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT_SHORT->flag) | 0x0);
	//    .end local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	//    .end local v17    # "offset":I
label_cond_c6:
	if ( options )     
		goto label_cond_100;
	parseTZDBAbbrev = this->getDefaultParseOptions()->contains(android::icu::text::TimeZoneFormat_S_ParseOption::TZ_DATABASE_ABBREVIATIONS);
	//    .local v19, "parseTZDBAbbrev":Z
label_goto_d2:
	// switch
	{
	auto item = ( android::icu::text::TimeZoneFormat::-getandroid-icu-text-TimeZoneFormat$StyleSwitchesValues({const[class].FS-Param})[style->ordinal()] );
	if (item == 1) goto label_pswitch_434;
	if (item == 2) goto label_pswitch_360;
	if (item == 3) goto label_pswitch_360;
	if (item == 4) goto label_pswitch_360;
	if (item == 5) goto label_pswitch_196;
	if (item == 6) goto label_pswitch_196;
	if (item == 7) goto label_pswitch_1d0;
	if (item == 8) goto label_pswitch_1d0;
	if (item == 9) goto label_pswitch_1d0;
	if (item == 10) goto label_pswitch_196;
	if (item == 11) goto label_pswitch_196;
	if (item == 12) goto label_pswitch_196;
	if (item == 13) goto label_pswitch_1d0;
	if (item == 14) goto label_pswitch_1d0;
	if (item == 15) goto label_pswitch_10b;
	if (item == 16) goto label_pswitch_150;
	if (item == 17) goto label_pswitch_225;
	if (item == 18) goto label_pswitch_225;
	if (item == 19) goto label_pswitch_3cc;
	if (item == 20) goto label_pswitch_400;
	}
label_cond_df:
label_goto_df:
	evaluated = (evaluated | style->flag);
	if ( parsedPos <= startIdx )
		goto label_cond_47a;
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_46a;
	if ( parsedOffset != 0x7fffffff )
		goto label_cond_46a;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 9077    .line 1057
	// 9078    .end local v19    # "parseTZDBAbbrev":Z
label_cond_100:
	options->contains(android::icu::text::TimeZoneFormat_S_ParseOption::TZ_DATABASE_ABBREVIATIONS);
	//    .restart local v19    # "parseTZDBAbbrev":Z
	goto label_goto_d2;
	// 9093    .line 1063
label_pswitch_10b:
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	//    .restart local v17    # "offset":I
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_145;
	pos->setIndex(tmpPos->getIndex());
	return this->getTimeZoneForOffset(this->parseOffsetLocalizedGMT(text, tmpPos));
	// 9157    .line 1073
label_cond_145:
	evaluated = (evaluated | android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT_SHORT->flag);
	goto label_goto_df;
	// 9172    .line 1078
	// 9173    .end local v17    # "offset":I
label_pswitch_150:
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	//    .restart local v17    # "offset":I
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_18a;
	pos->setIndex(tmpPos->getIndex());
	return this->getTimeZoneForOffset(this->parseOffsetShortLocalizedGMT(text, tmpPos));
	// 9237    .line 1088
label_cond_18a:
	evaluated = (evaluated | android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT->flag);
	goto label_goto_df;
	// 9252    .line 1098
	// 9253    .end local v17    # "offset":I
label_pswitch_196:
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	//    .restart local v17    # "offset":I
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_df;
	pos->setIndex(tmpPos->getIndex());
	return this->getTimeZoneForOffset(this->parseOffsetISO8601(text, tmpPos));
	// 9317    .line 1115
	// 9318    .end local v17    # "offset":I
label_pswitch_1d0:
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	hasDigitOffset = std::make_shared<android::icu::util::Output>(java::lang::Boolean::valueOf(0x0));
	//    .restart local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	//    .restart local v17    # "offset":I
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_df;
	cVar9 = hasDigitOffset->value;
	cVar9->checkCast("java::lang::Boolean");
	if ( !(cVar9->booleanValue()) )  
		goto label_cond_df;
	pos->setIndex(tmpPos->getIndex());
	return this->getTimeZoneForOffset(android::icu::text::TimeZoneFormat::parseOffsetISO8601(text, tmpPos, 0x0, hasDigitOffset));
	// 9410    .line 1132
	// 9411    .end local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 9412    .end local v17    # "offset":I
label_pswitch_225:
	0x0;
	//    .local v16, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	if ( style != android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_LONG )
		goto label_cond_272;
	nameTypes = java::util::EnumSet::of(android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD, android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT);
	//    .local v16, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
label_goto_237:
	specificMatches = this->_tznames->find(text, startIdx, nameTypes);
	//    .local v26, "specificMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	if ( !(specificMatches) )  
		goto label_cond_2bf;
	specificMatch = 0x0;
	//    .local v25, "specificMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	match_S_iterator = specificMatches->iterator();
	//    .end local v25    # "specificMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	//    .local v13, "match$iterator":Ljava/util/Iterator;
label_cond_251:
label_goto_251:
	if ( !(match_S_iterator->hasNext()) )  
		goto label_cond_28d;
	match = match_S_iterator->next();
	match->checkCast("android::icu::text::TimeZoneNames_S_MatchInfo");
	//    .local v12, "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	if ( (match->matchLength() + startIdx) <= parsedPos )
		goto label_cond_251;
	match;
	//    .local v25, "specificMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	parsedPos = (startIdx + match->matchLength());
	goto label_goto_251;
	// 9512    .line 1136
	// 9513    .end local v12    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 9514    .end local v13    # "match$iterator":Ljava/util/Iterator;
	// 9515    .end local v25    # "specificMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 9516    .end local v26    # "specificMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	// 9517    .local v16, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
label_cond_272:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_284;
	if ( style == android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_SHORT )
		goto label_cond_284;
	cVar10 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar10;
	// 9537    .line 1137
label_cond_284:
	//    .local v16, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	goto label_goto_237;
	// 9550    .line 1148
	// 9551    .restart local v13    # "match$iterator":Ljava/util/Iterator;
	// 9552    .restart local v26    # "specificMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
label_cond_28d:
	if ( !(specificMatch) )  
		goto label_cond_2bf;
	timeType->value = this->getTimeType(specificMatch->nameType());
	pos->setIndex(parsedPos);
	return android::icu::util::TimeZone::getTimeZone(this->getTimeZoneID(specificMatch->tzID(), specificMatch->mzID()));
	// 9607    .line 1155
	// 9608    .end local v13    # "match$iterator":Ljava/util/Iterator;
label_cond_2bf:
	if ( !(parseTZDBAbbrev) )  
		goto label_cond_df;
	if ( style != android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_SHORT )
		goto label_cond_df;
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_2df;
	if ( nameTypes->contains(android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD) )     
		goto label_cond_2df;
	cVar11 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar11;
	// 9643    .line 1157
label_cond_2df:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_2f5;
	if ( nameTypes->contains(android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT) )     
		goto label_cond_2f5;
	cVar12 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar12;
	// 9667    .line 1160
label_cond_2f5:
	tzdbNameMatches = this->getTZDBTimeZoneNames()->find(text, startIdx, nameTypes);
	//    .local v30, "tzdbNameMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	if ( !(tzdbNameMatches) )  
		goto label_cond_df;
	tzdbNameMatch = 0x0;
	//    .local v29, "tzdbNameMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	match_S_iterator = tzdbNameMatches->iterator();
	//    .end local v29    # "tzdbNameMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	//    .restart local v13    # "match$iterator":Ljava/util/Iterator;
label_cond_30d:
label_goto_30d:
	if ( !(match_S_iterator->hasNext()) )  
		goto label_cond_32e;
	match = match_S_iterator->next();
	match->checkCast("android::icu::text::TimeZoneNames_S_MatchInfo");
	//    .restart local v12    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	if ( (match->matchLength() + startIdx) <= parsedPos )
		goto label_cond_30d;
	match;
	//    .local v29, "tzdbNameMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	parsedPos = (startIdx + match->matchLength());
	goto label_goto_30d;
	// 9741    .line 1169
	// 9742    .end local v12    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 9743    .end local v29    # "tzdbNameMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
label_cond_32e:
	if ( !(tzdbNameMatch) )  
		goto label_cond_df;
	timeType->value = this->getTimeType(tzdbNameMatch->nameType());
	pos->setIndex(parsedPos);
	return android::icu::util::TimeZone::getTimeZone(this->getTimeZoneID(tzdbNameMatch->tzID(), tzdbNameMatch->mzID()));
	// 9798    .line 1182
	// 9799    .end local v13    # "match$iterator":Ljava/util/Iterator;
	// 9800    .end local v16    # "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	// 9801    .end local v26    # "specificMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	// 9802    .end local v30    # "tzdbNameMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
label_pswitch_360:
	genericNameTypes = 0x0;
	//    .local v9, "genericNameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
	// switch
	{
	auto item = ( android::icu::text::TimeZoneFormat::-getandroid-icu-text-TimeZoneFormat$StyleSwitchesValues({const[class].FS-Param})[style->ordinal()] );
	if (item == 2) goto label_pswitch_378;
	if (item == 3) goto label_pswitch_3ba;
	if (item == 4) goto label_pswitch_3c3;
	}
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_37e;
	cVar13 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar13;
	// 9831    .line 1185
label_pswitch_378:
	genericNameTypes = java::util::EnumSet::of(android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LOCATION);
	//    .end local v9    # "genericNameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
label_cond_37e:
label_goto_37e:
	bestGeneric = this->getTimeZoneGenericNames()->findBestMatch(text, startIdx, genericNameTypes);
	//    .local v4, "bestGeneric":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	if ( !(bestGeneric) )  
		goto label_cond_df;
	if ( (bestGeneric->matchLength() + startIdx) <= parsedPos )
		goto label_cond_df;
	timeType->value = bestGeneric->timeType();
	pos->setIndex((bestGeneric->matchLength() + startIdx));
	return android::icu::util::TimeZone::getTimeZone(bestGeneric->tzID());
	// 9908    .line 1188
	// 9909    .end local v4    # "bestGeneric":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	// 9910    .restart local v9    # "genericNameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
label_pswitch_3ba:
	genericNameTypes = java::util::EnumSet::of(android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG, android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LOCATION);
	//    .local v9, "genericNameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
	goto label_goto_37e;
	// 9923    .line 1191
	// 9924    .local v9, "genericNameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
label_pswitch_3c3:
	genericNameTypes = java::util::EnumSet::of(android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT, android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LOCATION);
	//    .local v9, "genericNameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
	goto label_goto_37e;
	// 9937    .line 1208
	// 9938    .end local v9    # "genericNameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
label_pswitch_3cc:
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	//    .local v11, "id":Ljava/lang/String;
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_df;
	pos->setIndex(tmpPos->getIndex());
	return android::icu::util::TimeZone::getTimeZone(android::icu::text::TimeZoneFormat::parseZoneID(text, tmpPos));
	// 9996    .line 1220
	// 9997    .end local v11    # "id":Ljava/lang/String;
label_pswitch_400:
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	//    .restart local v11    # "id":Ljava/lang/String;
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_df;
	pos->setIndex(tmpPos->getIndex());
	return android::icu::util::TimeZone::getTimeZone(android::icu::text::TimeZoneFormat::parseShortZoneID(text, tmpPos));
	// 10055    .line 1232
	// 10056    .end local v11    # "id":Ljava/lang/String;
label_pswitch_434:
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	//    .restart local v11    # "id":Ljava/lang/String;
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_df;
	pos->setIndex(tmpPos->getIndex());
	return android::icu::util::TimeZone::getTimeZone(this->parseExemplarLocation(text, tmpPos));
	// 10116    .line 1253
	// 10117    .end local v11    # "id":Ljava/lang/String;
label_cond_46a:
	pos->setIndex(parsedPos);
	return this->getTimeZoneForOffset(parsedOffset);
	// 10136    .line 1260
label_cond_47a:
	0x0;
	//    .local v20, "parsedID":Ljava/lang/String;
	android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	//    .local v24, "parsedTimeType":Landroid/icu/text/TimeZoneFormat$TimeType;
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_48a;
	if ( parsedPos < 0 ) 
		goto label_cond_48a;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 10158    .line 1263
label_cond_48a:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_49d;
	if ( parsedOffset == 0x7fffffff )
		goto label_cond_49d;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 10178    .line 1266
label_cond_49d:
	if ( parsedPos >= maxPos )
		goto label_cond_530;
	if ( !(( evaluated & 0x80)) )  
		goto label_cond_4ad;
	if ( ( evaluated & 0x100) )     
		goto label_cond_530;
label_cond_4ad:
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	hasDigitOffset = std::make_shared<android::icu::util::Output>(java::lang::Boolean::valueOf(0x0));
	//    .restart local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	offset = android::icu::text::TimeZoneFormat::parseOffsetISO8601(text, tmpPos, 0x0, hasDigitOffset);
	//    .restart local v17    # "offset":I
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_530;
	if ( tmpPos->getIndex() == maxPos )
		goto label_cond_4f6;
	cVar2 = hasDigitOffset->value;
	cVar2->checkCast("java::lang::Boolean");
	if ( !(cVar2->booleanValue()) )  
		goto label_cond_50a;
label_cond_4f6:
	pos->setIndex(tmpPos->getIndex());
	return this->getTimeZoneForOffset(offset);
	// 10299    .line 1281
label_cond_50a:
	if ( parsedPos >= tmpPos->getIndex() )
		goto label_cond_530;
	offset;
	0x0;
	android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	parsedPos = tmpPos->getIndex();
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_530;
	if ( parsedPos == ( startIdx + 0x1) )
		goto label_cond_530;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 10344    .line 1293
	// 10345    .end local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 10346    .end local v17    # "offset":I
label_cond_530:
	if ( parsedPos >= maxPos )
		goto label_cond_5b3;
	if ( (android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT->flag & evaluated) )     
		goto label_cond_5b3;
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	hasDigitOffset = std::make_shared<android::icu::util::Output>(java::lang::Boolean::valueOf(0x0));
	//    .restart local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	offset = this->parseOffsetLocalizedGMT(text, tmpPos, 0x0, hasDigitOffset);
	//    .restart local v17    # "offset":I
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_5b3;
	if ( tmpPos->getIndex() == maxPos )
		goto label_cond_58b;
	cVar4 = hasDigitOffset->value;
	cVar4->checkCast("java::lang::Boolean");
	if ( !(cVar4->booleanValue()) )  
		goto label_cond_59f;
label_cond_58b:
	pos->setIndex(tmpPos->getIndex());
	return this->getTimeZoneForOffset(offset);
	// 10468    .line 1306
label_cond_59f:
	if ( parsedPos >= tmpPos->getIndex() )
		goto label_cond_5b3;
	offset;
	0x0;
	android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	parsedPos = tmpPos->getIndex();
	//    .end local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	//    .end local v17    # "offset":I
label_cond_5b3:
	if ( parsedPos >= maxPos )
		goto label_cond_636;
	if ( (android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT_SHORT->flag & evaluated) )     
		goto label_cond_636;
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	hasDigitOffset = std::make_shared<android::icu::util::Output>(java::lang::Boolean::valueOf(0x0));
	//    .restart local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	offset = this->parseOffsetLocalizedGMT(text, tmpPos, 0x1, hasDigitOffset);
	//    .restart local v17    # "offset":I
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_636;
	if ( tmpPos->getIndex() == maxPos )
		goto label_cond_60e;
	cVar5 = hasDigitOffset->value;
	cVar5->checkCast("java::lang::Boolean");
	if ( !(cVar5->booleanValue()) )  
		goto label_cond_622;
label_cond_60e:
	pos->setIndex(tmpPos->getIndex());
	return this->getTimeZoneForOffset(offset);
	// 10618    .line 1328
label_cond_622:
	if ( parsedPos >= tmpPos->getIndex() )
		goto label_cond_636;
	offset;
	0x0;
	android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	parsedPos = tmpPos->getIndex();
	//    .end local v10    # "hasDigitOffset":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	//    .end local v17    # "offset":I
label_cond_636:
	if ( options )     
		goto label_cond_684;
	//    .local v18, "parseAllStyles":Z
label_goto_642:
	if ( !(parseAllStyles) )  
		goto label_cond_7f0;
	if ( parsedPos >= maxPos )
		goto label_cond_6b6;
	specificMatches = this->_tznames->find(text, startIdx, android::icu::text::TimeZoneFormat::ALL_SIMPLE_NAME_TYPES);
	//    .restart local v26    # "specificMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	specificMatch = 0x0;
	//    .local v25, "specificMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	matchPos = -0x1;
	//    .local v14, "matchPos":I
	if ( !(specificMatches) )  
		goto label_cond_68f;
	match_S_iterator = specificMatches->iterator();
	//    .end local v25    # "specificMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	//    .restart local v13    # "match$iterator":Ljava/util/Iterator;
label_cond_665:
label_goto_665:
	if ( !(match_S_iterator->hasNext()) )  
		goto label_cond_68f;
	match = match_S_iterator->next();
	match->checkCast("android::icu::text::TimeZoneNames_S_MatchInfo");
	//    .restart local v12    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	if ( (match->matchLength() + startIdx) <= matchPos )
		goto label_cond_665;
	match;
	//    .local v25, "specificMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	matchPos = (startIdx + match->matchLength());
	goto label_goto_665;
	// 10750    .line 1348
	// 10751    .end local v12    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 10752    .end local v13    # "match$iterator":Ljava/util/Iterator;
	// 10753    .end local v14    # "matchPos":I
	// 10754    .end local v18    # "parseAllStyles":Z
	// 10755    .end local v25    # "specificMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 10756    .end local v26    # "specificMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
label_cond_684:
	//    .restart local v18    # "parseAllStyles":Z
	goto label_goto_642;
	// 10771    .line 1364
	// 10772    .restart local v14    # "matchPos":I
	// 10773    .restart local v26    # "specificMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
label_cond_68f:
	if ( parsedPos >= matchPos )
		goto label_cond_6b6;
	parsedPos = matchPos;
	this->getTimeZoneID(specificMatch->tzID(), specificMatch->mzID());
	//    .local v20, "parsedID":Ljava/lang/String;
	this->getTimeType(specificMatch->nameType());
	0x7fffffff;
	//    .end local v14    # "matchPos":I
	//    .end local v20    # "parsedID":Ljava/lang/String;
	//    .end local v26    # "specificMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
label_cond_6b6:
	if ( !(parseTZDBAbbrev) )  
		goto label_cond_729;
	if ( parsedPos >= maxPos )
		goto label_cond_729;
	if ( (android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_SHORT->flag & evaluated) )     
		goto label_cond_729;
	tzdbNameMatches = this->getTZDBTimeZoneNames()->find(text, startIdx, android::icu::text::TimeZoneFormat::ALL_SIMPLE_NAME_TYPES);
	//    .restart local v30    # "tzdbNameMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	tzdbNameMatch = 0x0;
	//    .local v29, "tzdbNameMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	matchPos = -0x1;
	//    .restart local v14    # "matchPos":I
	if ( !(tzdbNameMatches) )  
		goto label_cond_729;
	match_S_iterator = tzdbNameMatches->iterator();
	//    .end local v29    # "tzdbNameMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	//    .restart local v13    # "match$iterator":Ljava/util/Iterator;
label_cond_6e3:
label_goto_6e3:
	if ( !(match_S_iterator->hasNext()) )  
		goto label_cond_702;
	match = match_S_iterator->next();
	match->checkCast("android::icu::text::TimeZoneNames_S_MatchInfo");
	//    .restart local v12    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	if ( (match->matchLength() + startIdx) <= matchPos )
		goto label_cond_6e3;
	match;
	//    .local v29, "tzdbNameMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	matchPos = (startIdx + match->matchLength());
	goto label_goto_6e3;
	// 10918    .line 1383
	// 10919    .end local v12    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 10920    .end local v29    # "tzdbNameMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
label_cond_702:
	if ( parsedPos >= matchPos )
		goto label_cond_729;
	parsedPos = matchPos;
	this->getTimeZoneID(tzdbNameMatch->tzID(), tzdbNameMatch->mzID());
	//    .restart local v20    # "parsedID":Ljava/lang/String;
	this->getTimeType(tzdbNameMatch->nameType());
	0x7fffffff;
	//    .end local v13    # "match$iterator":Ljava/util/Iterator;
	//    .end local v14    # "matchPos":I
	//    .end local v20    # "parsedID":Ljava/lang/String;
	//    .end local v30    # "tzdbNameMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
label_cond_729:
	if ( parsedPos >= maxPos )
		goto label_cond_75e;
	genericMatch = this->getTimeZoneGenericNames()->findBestMatch(text, startIdx, android::icu::text::TimeZoneFormat::ALL_GENERIC_NAME_TYPES);
	//    .local v8, "genericMatch":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	if ( !(genericMatch) )  
		goto label_cond_75e;
	if ( parsedPos >= (genericMatch->matchLength() + startIdx) )
		goto label_cond_75e;
	parsedPos = (startIdx + genericMatch->matchLength());
	genericMatch->tzID();
	//    .restart local v20    # "parsedID":Ljava/lang/String;
	genericMatch->timeType();
	0x7fffffff;
	//    .end local v8    # "genericMatch":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	//    .end local v20    # "parsedID":Ljava/lang/String;
label_cond_75e:
	if ( parsedPos >= maxPos )
		goto label_cond_7a7;
	if ( (android::icu::text::TimeZoneFormat_S_Style::ZONE_ID->flag & evaluated) )     
		goto label_cond_7a7;
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	//    .restart local v11    # "id":Ljava/lang/String;
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_7a7;
	if ( parsedPos >= tmpPos->getIndex() )
		goto label_cond_7a7;
	parsedPos = tmpPos->getIndex();
	android::icu::text::TimeZoneFormat::parseZoneID(text, tmpPos);
	//    .restart local v20    # "parsedID":Ljava/lang/String;
	android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	0x7fffffff;
	//    .end local v11    # "id":Ljava/lang/String;
	//    .end local v20    # "parsedID":Ljava/lang/String;
label_cond_7a7:
	if ( parsedPos >= maxPos )
		goto label_cond_7f0;
	if ( (android::icu::text::TimeZoneFormat_S_Style::ZONE_ID_SHORT->flag & evaluated) )     
		goto label_cond_7f0;
	tmpPos->setIndex(startIdx);
	tmpPos->setErrorIndex(-0x1);
	//    .restart local v11    # "id":Ljava/lang/String;
	if ( tmpPos->getErrorIndex() != -0x1 )
		goto label_cond_7f0;
	if ( parsedPos >= tmpPos->getIndex() )
		goto label_cond_7f0;
	parsedPos = tmpPos->getIndex();
	parsedID = android::icu::text::TimeZoneFormat::parseShortZoneID(text, tmpPos);
	//    .restart local v20    # "parsedID":Ljava/lang/String;
	parsedOffset = 0x7fffffff;
	//    .end local v11    # "id":Ljava/lang/String;
	//    .end local v20    # "parsedID":Ljava/lang/String;
label_cond_7f0:
	if ( parsedPos <= startIdx )
		goto label_cond_828;
	0x0;
	//    .local v23, "parsedTZ":Landroid/icu/util/TimeZone;
	if ( !(parsedID) )  
		goto label_cond_80c;
	//    .local v23, "parsedTZ":Landroid/icu/util/TimeZone;
label_goto_7fe:
	timeType->value = android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	pos->setIndex(parsedPos);
	return parsedTZ;
	// 11240    .line 1437
	// 11241    .local v23, "parsedTZ":Landroid/icu/util/TimeZone;
label_cond_80c:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_81f;
	if ( parsedOffset != 0x7fffffff )
		goto label_cond_81f;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 11261    .line 1438
label_cond_81f:
	//    .local v23, "parsedTZ":Landroid/icu/util/TimeZone;
	goto label_goto_7fe;
	// 11274    .line 1445
	// 11275    .end local v23    # "parsedTZ":Landroid/icu/util/TimeZone;
label_cond_828:
	pos->setErrorIndex(startIdx);
	return 0x0;
	// 11288    .line 1060
	// 11289    :pswitch_data_832
	// 11290    .packed-switch 0x1
	// 11291        :pswitch_434
	// 11292        :pswitch_360
	// 11293        :pswitch_360
	// 11294        :pswitch_360
	// 11295        :pswitch_196
	// 11296        :pswitch_196
	// 11297        :pswitch_1d0
	// 11298        :pswitch_1d0
	// 11299        :pswitch_1d0
	// 11300        :pswitch_196
	// 11301        :pswitch_196
	// 11302        :pswitch_196
	// 11303        :pswitch_1d0
	// 11304        :pswitch_1d0
	// 11305        :pswitch_10b
	// 11306        :pswitch_150
	// 11307        :pswitch_225
	// 11308        :pswitch_225
	// 11309        :pswitch_3cc
	// 11310        :pswitch_400
	// 11311    .end packed-switch
	// 11313    .line 1183
	// 11314    :pswitch_data_85e
	// 11315    .packed-switch 0x2
	// 11316        :pswitch_378
	// 11317        :pswitch_3ba
	// 11318        :pswitch_3c3
	// 11319    .end packed-switch

}
// .method public final parse(Ljava/lang/String;)Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::text::TimeZoneFormat::parse(std::shared_ptr<java::lang::String> text)
{
	
	int cVar0;
	std::shared_ptr<java::text::ParsePosition> pos;
	std::shared_ptr<android::icu::util::TimeZone> tz;
	std::shared_ptr<java::text::ParseException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 11326        value = {
	// 11327            Ljava/text/ParseException;
	// 11328        }
	// 11329    .end annotation
	cVar0 = 0x0;
	pos = std::make_shared<java::text::ParsePosition>(cVar0);
	//    .local v0, "pos":Ljava/text/ParsePosition;
	tz = this->parse(text, pos);
	//    .local v1, "tz":Landroid/icu/util/TimeZone;
	if ( pos->getErrorIndex() < 0 ) 
		goto label_cond_31;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::text::ParseException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unparseable time zone: \")))->append(text)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString(), cVar0);
	// throw
	throw cVar1;
	// 11384    .line 1502
label_cond_31:
	if ( android::icu::text::TimeZoneFormat::_assertionsDisabled )     
		goto label_cond_3d;
	if ( tz )     
		goto label_cond_3d;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 11398    .line 1503
label_cond_3d:
	return tz;

}
// .method public final parse(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::text::TimeZoneFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	return this->parse(android::icu::text::TimeZoneFormat_S_Style::GENERIC_LOCATION, text, pos, java::util::EnumSet::of(android::icu::text::TimeZoneFormat_S_ParseOption::ALL_STYLES), 0x0);

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TimeZoneFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	return this->parse(source, pos);

}
// .method public final parseOffsetISO8601(Ljava/lang/String;Ljava/text/ParsePosition;)I
int android::icu::text::TimeZoneFormat::parseOffsetISO8601(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	return android::icu::text::TimeZoneFormat::parseOffsetISO8601(text, pos, 0x0, 0x0);

}
// .method public parseOffsetLocalizedGMT(Ljava/lang/String;Ljava/text/ParsePosition;)I
int android::icu::text::TimeZoneFormat::parseOffsetLocalizedGMT(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	return this->parseOffsetLocalizedGMT(text, pos, 0x0, 0x0);

}
// .method public parseOffsetShortLocalizedGMT(Ljava/lang/String;Ljava/text/ParsePosition;)I
int android::icu::text::TimeZoneFormat::parseOffsetShortLocalizedGMT(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	return this->parseOffsetLocalizedGMT(text, pos, 0x1, 0x0);

}
// .method public setDefaultParseOptions(Ljava/util/EnumSet;)Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::setDefaultParseOptions(std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneFormat_S_ParseOption>> options)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 11504        value = {
	// 11505            "(",
	// 11506            "Ljava/util/EnumSet",
	// 11507            "<",
	// 11508            "Landroid/icu/text/TimeZoneFormat$ParseOption;",
	// 11509            ">;)",
	// 11510            "Landroid/icu/text/TimeZoneFormat;"
	// 11511        }
	// 11512    .end annotation
	//    .local p1, "options":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneFormat$ParseOption;>;"
	this->_parseAllStyles = options->contains(android::icu::text::TimeZoneFormat_S_ParseOption::ALL_STYLES);
	this->_parseTZDBNames = options->contains(android::icu::text::TimeZoneFormat_S_ParseOption::TZ_DATABASE_ABBREVIATIONS);
	return this;

}
// .method public setGMTOffsetDigits(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::setGMTOffsetDigits(std::shared_ptr<java::lang::String> digits)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<std::vector<java::lang::String>> digitArray;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "digits"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen object")));
	// throw
	throw cVar0;
	// 11559    .line 629
label_cond_f:
	if ( digits )     
		goto label_cond_1a;
	cVar1 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null GMT offset digits")));
	// throw
	throw cVar1;
	// 11572    .line 632
label_cond_1a:
	digitArray = android::icu::text::TimeZoneFormat::toCodePoints(digits);
	//    .local v0, "digitArray":[Ljava/lang/String;
	if ( digitArray->size() == 0xa )
		goto label_cond_2c;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Length of digits must be 10")));
	// throw
	throw cVar2;
	// 11595    .line 636
label_cond_2c:
	this->_gmtOffsetDigits = digitArray;
	return this;

}
// .method public setGMTOffsetPattern(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::setGMTOffsetPattern(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> type,std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .param p1, "type"    # Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	//    .param p2, "pattern"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen object")));
	// throw
	throw cVar0;
	// 11625    .line 588
label_cond_f:
	if ( pattern )     
		goto label_cond_1a;
	cVar1 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null GMT offset pattern")));
	// throw
	throw cVar1;
	// 11638    .line 592
label_cond_1a:
	//    .local v0, "parsedItems":[Ljava/lang/Object;
	this->_gmtOffsetPatterns[type->ordinal()] = pattern;
	this->_gmtOffsetPatternItems[type->ordinal()] = android::icu::text::TimeZoneFormat::parseOffsetPattern(pattern, android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::-wrap2(type));
	this->checkAbuttingHoursAndMinutes();
	return this;

}
// .method public setGMTPattern(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::setGMTPattern(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen object")));
	// throw
	throw cVar0;
	// 11695    .line 560
label_cond_f:
	this->initGMTPattern(pattern);
	return this;

}
// .method public setGMTZeroFormat(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::setGMTZeroFormat(std::shared_ptr<java::lang::String> gmtZeroFormat)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "gmtZeroFormat"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen object")));
	// throw
	throw cVar0;
	// 11724    .line 662
label_cond_f:
	if ( gmtZeroFormat )     
		goto label_cond_1a;
	cVar1 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null GMT zero format")));
	// throw
	throw cVar1;
	// 11737    .line 665
label_cond_1a:
	if ( gmtZeroFormat->length() )     
		goto label_cond_29;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Empty GMT zero format")));
	// throw
	throw cVar2;
	// 11754    .line 668
label_cond_29:
	this->_gmtZeroFormat = gmtZeroFormat;
	return this;

}
// .method public setTimeZoneNames(Landroid/icu/text/TimeZoneNames;)Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat::setTimeZoneNames(std::shared_ptr<android::icu::text::TimeZoneNames> tznames)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> cVar1;
	
	//    .param p1, "tznames"    # Landroid/icu/text/TimeZoneNames;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen object")));
	// throw
	throw cVar0;
	// 11783    .line 530
label_cond_f:
	this->_tznames = tznames;
	cVar1 = std::make_shared<android::icu::impl::TimeZoneGenericNames>(this->_locale, this->_tznames);
	this->_gnames = cVar1;
	return this;

}


