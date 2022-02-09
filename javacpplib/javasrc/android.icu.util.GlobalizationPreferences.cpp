// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\GlobalizationPreferences.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.GlobalizationPreferences.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.lang.reflect.Array.h"
#include "java.text.ParseException.h"
#include "java.util.ArrayList.h"
#include "java.util.Arrays.h"
#include "java.util.BitSet.h"
#include "java.util.Date.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.ResourceBundle.h"

static android::icu::util::GlobalizationPreferences::BI_CHARACTER = 0x0;
static android::icu::util::GlobalizationPreferences::BI_LIMIT = 0x5;
static android::icu::util::GlobalizationPreferences::BI_LINE = 0x2;
static android::icu::util::GlobalizationPreferences::BI_SENTENCE = 0x3;
static android::icu::util::GlobalizationPreferences::BI_TITLE = 0x4;
static android::icu::util::GlobalizationPreferences::BI_WORD = 0x1;
static android::icu::util::GlobalizationPreferences::DF_FULL = 0x0;
static android::icu::util::GlobalizationPreferences::DF_LIMIT = 0x5;
static android::icu::util::GlobalizationPreferences::DF_LONG = 0x1;
static android::icu::util::GlobalizationPreferences::DF_MEDIUM = 0x2;
static android::icu::util::GlobalizationPreferences::DF_NONE = 0x4;
static android::icu::util::GlobalizationPreferences::DF_SHORT = 0x3;
static android::icu::util::GlobalizationPreferences::ID_CURRENCY = 0x7;
static android::icu::util::GlobalizationPreferences::ID_CURRENCY_SYMBOL = 0x8;
static android::icu::util::GlobalizationPreferences::ID_KEYWORD = 0x5;
static android::icu::util::GlobalizationPreferences::ID_KEYWORD_VALUE = 0x6;
static android::icu::util::GlobalizationPreferences::ID_LANGUAGE = 0x1;
static android::icu::util::GlobalizationPreferences::ID_LOCALE = 0x0;
static android::icu::util::GlobalizationPreferences::ID_SCRIPT = 0x2;
static android::icu::util::GlobalizationPreferences::ID_TERRITORY = 0x3;
static android::icu::util::GlobalizationPreferences::ID_TIMEZONE = 0x9;
static android::icu::util::GlobalizationPreferences::ID_VARIANT = 0x4;
static android::icu::util::GlobalizationPreferences::NF_CURRENCY = 0x1;
static android::icu::util::GlobalizationPreferences::NF_INTEGER = 0x4;
static android::icu::util::GlobalizationPreferences::NF_LIMIT = 0x5;
static android::icu::util::GlobalizationPreferences::NF_NUMBER = 0x0;
static android::icu::util::GlobalizationPreferences::NF_PERCENT = 0x2;
static android::icu::util::GlobalizationPreferences::NF_SCIENTIFIC = 0x3;
static android::icu::util::GlobalizationPreferences::TYPE_BREAKITERATOR = 0x5;
static android::icu::util::GlobalizationPreferences::TYPE_CALENDAR = 0x1;
static android::icu::util::GlobalizationPreferences::TYPE_COLLATOR = 0x4;
static android::icu::util::GlobalizationPreferences::TYPE_DATEFORMAT = 0x2;
static android::icu::util::GlobalizationPreferences::TYPE_GENERIC = 0x0;
static android::icu::util::GlobalizationPreferences::TYPE_LIMIT = 0x6;
static android::icu::util::GlobalizationPreferences::TYPE_NUMBERFORMAT = 0x3;
static android::icu::util::GlobalizationPreferences::available_locales;
static android::icu::util::GlobalizationPreferences::language_territory_hack;
static android::icu::util::GlobalizationPreferences::language_territory_hack_map;
static android::icu::util::GlobalizationPreferences::territory_tzid_hack;
static android::icu::util::GlobalizationPreferences::territory_tzid_hack_map;
// .method static constructor <clinit>()V
void android::icu::util::GlobalizationPreferences::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<java::util::HashMap> cVar4;
	auto allLocales;
	int i;
	std::shared_ptr<java::util::BitSet> bits;
	auto calLocales;
	auto dateLocales;
	auto numLocales;
	auto collLocales;
	auto brkLocales;
	std::shared_ptr<java::util::HashMap> cVar5;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar8;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar9;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar10;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar11;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar12;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar13;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar14;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar15;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar16;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar17;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar18;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar19;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar20;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar21;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar22;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar23;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar24;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar25;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar26;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar27;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar28;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar29;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar30;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar31;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar32;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar33;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar34;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar35;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar36;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar37;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar38;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar39;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar40;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar41;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar42;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar43;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar44;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar45;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar46;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar47;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar48;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar49;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar50;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar51;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar52;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar53;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar54;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar55;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar56;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar57;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar58;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar59;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar60;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar61;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar62;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar63;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar64;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar65;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar66;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar67;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar68;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar69;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar70;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar71;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar72;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar73;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar74;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar75;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar76;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar77;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar78;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar79;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar80;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar81;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar82;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar83;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar84;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar85;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar86;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar87;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar88;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar89;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar90;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar91;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar92;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar93;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar94;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar95;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar96;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar97;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar98;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar99;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar100;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar101;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar102;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar103;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar104;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar105;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar106;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar107;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar108;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar109;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar110;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar111;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar112;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar113;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar114;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar115;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar116;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar117;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar118;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar119;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar120;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar121;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar122;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar123;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar124;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar125;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar126;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar127;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar128;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar129;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar130;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar131;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar132;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar133;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar134;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar135;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar136;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar137;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar138;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar139;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar140;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar141;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar142;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar143;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar144;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar145;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar146;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar147;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar148;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar149;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar150;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar151;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar152;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar153;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar154;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar155;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar156;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar157;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar158;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar159;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar160;
	std::shared_ptr<java::util::HashMap> cVar161;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> cVar162;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar163;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar164;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar165;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar166;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar167;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar168;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar169;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar170;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar171;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar172;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar173;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar174;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar175;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar176;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar177;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar178;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar179;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar180;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar181;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar182;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar183;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar184;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar185;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar186;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar187;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar188;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar189;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar190;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar191;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar192;
	
	cVar0 = 0x6;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<java::util::HashMap>();
	android::icu::util::GlobalizationPreferences::available_locales = cVar4;
	allLocales = android::icu::util::ULocale::getAvailableLocales({const[class].FS-Param});
	//    .local v0, "allLocales":[Landroid/icu/util/ULocale;
	i = 0x0;
	//    .local v6, "i":I
label_goto_10:
	if ( i >= allLocales->size() )
		goto label_cond_25;
	bits = std::make_shared<java::util::BitSet>(cVar0);
	//    .local v1, "bits":Ljava/util/BitSet;
	android::icu::util::GlobalizationPreferences::available_locales->put(allLocales[i], bits);
	bits->set(cVar3);
	i = ( i + 0x1);
	goto label_goto_10;
	// 231    .line 1187
	// 232    .end local v1    # "bits":Ljava/util/BitSet;
label_cond_25:
	calLocales = android::icu::util::Calendar::getAvailableULocales({const[class].FS-Param});
	//    .local v3, "calLocales":[Landroid/icu/util/ULocale;
	i = 0x0;
label_goto_2a:
	if ( i >= calLocales->size() )
		goto label_cond_4b;
	bits = android::icu::util::GlobalizationPreferences::available_locales->get(calLocales[i]);
	bits->checkCast("java::util::BitSet");
	//    .restart local v1    # "bits":Ljava/util/BitSet;
	if ( bits )     
		goto label_cond_45;
	//    .end local v1    # "bits":Ljava/util/BitSet;
	bits = std::make_shared<java::util::BitSet>(cVar0);
	//    .restart local v1    # "bits":Ljava/util/BitSet;
	android::icu::util::GlobalizationPreferences::available_locales->put(allLocales[i], bits);
label_cond_45:
	bits->set(cVar2);
	i = ( i + 0x1);
	goto label_goto_2a;
	// 285    .line 1197
	// 286    .end local v1    # "bits":Ljava/util/BitSet;
label_cond_4b:
	dateLocales = android::icu::text::DateFormat::getAvailableULocales({const[class].FS-Param});
	//    .local v5, "dateLocales":[Landroid/icu/util/ULocale;
	i = 0x0;
label_goto_50:
	if ( i >= dateLocales->size() )
		goto label_cond_71;
	bits = android::icu::util::GlobalizationPreferences::available_locales->get(dateLocales[i]);
	bits->checkCast("java::util::BitSet");
	//    .restart local v1    # "bits":Ljava/util/BitSet;
	if ( bits )     
		goto label_cond_6b;
	//    .end local v1    # "bits":Ljava/util/BitSet;
	bits = std::make_shared<java::util::BitSet>(cVar0);
	//    .restart local v1    # "bits":Ljava/util/BitSet;
	android::icu::util::GlobalizationPreferences::available_locales->put(allLocales[i], bits);
label_cond_6b:
	bits->set(cVar1);
	i = ( i + 0x1);
	goto label_goto_50;
	// 339    .line 1207
	// 340    .end local v1    # "bits":Ljava/util/BitSet;
label_cond_71:
	numLocales = android::icu::text::NumberFormat::getAvailableULocales({const[class].FS-Param});
	//    .local v7, "numLocales":[Landroid/icu/util/ULocale;
	i = 0x0;
label_goto_76:
	if ( i >= numLocales->size() )
		goto label_cond_98;
	bits = android::icu::util::GlobalizationPreferences::available_locales->get(numLocales[i]);
	bits->checkCast("java::util::BitSet");
	//    .restart local v1    # "bits":Ljava/util/BitSet;
	if ( bits )     
		goto label_cond_91;
	//    .end local v1    # "bits":Ljava/util/BitSet;
	bits = std::make_shared<java::util::BitSet>(cVar0);
	//    .restart local v1    # "bits":Ljava/util/BitSet;
	android::icu::util::GlobalizationPreferences::available_locales->put(allLocales[i], bits);
label_cond_91:
	bits->set(0x3);
	i = ( i + 0x1);
	goto label_goto_76;
	// 395    .line 1217
	// 396    .end local v1    # "bits":Ljava/util/BitSet;
label_cond_98:
	collLocales = android::icu::text::Collator::getAvailableULocales({const[class].FS-Param});
	//    .local v4, "collLocales":[Landroid/icu/util/ULocale;
	i = 0x0;
label_goto_9d:
	if ( i >= collLocales->size() )
		goto label_cond_bf;
	bits = android::icu::util::GlobalizationPreferences::available_locales->get(collLocales[i]);
	bits->checkCast("java::util::BitSet");
	//    .restart local v1    # "bits":Ljava/util/BitSet;
	if ( bits )     
		goto label_cond_b8;
	//    .end local v1    # "bits":Ljava/util/BitSet;
	bits = std::make_shared<java::util::BitSet>(cVar0);
	//    .restart local v1    # "bits":Ljava/util/BitSet;
	android::icu::util::GlobalizationPreferences::available_locales->put(allLocales[i], bits);
label_cond_b8:
	bits->set(0x4);
	i = ( i + 0x1);
	goto label_goto_9d;
	// 451    .line 1227
	// 452    .end local v1    # "bits":Ljava/util/BitSet;
label_cond_bf:
	brkLocales = android::icu::text::BreakIterator::getAvailableULocales({const[class].FS-Param});
	//    .local v2, "brkLocales":[Landroid/icu/util/ULocale;
	i = 0x0;
label_goto_c4:
	if ( i >= brkLocales->size() )
		goto label_cond_d8;
	bits = android::icu::util::GlobalizationPreferences::available_locales->get(brkLocales[i]);
	bits->checkCast("java::util::BitSet");
	//    .restart local v1    # "bits":Ljava/util/BitSet;
	bits->set(0x5);
	i = ( i + 0x1);
	goto label_goto_c4;
	// 489    .line 1237
	// 490    .end local v1    # "bits":Ljava/util/BitSet;
label_cond_d8:
	cVar5 = std::make_shared<java::util::HashMap>();
	android::icu::util::GlobalizationPreferences::language_territory_hack_map = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0x9a);
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar7[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("af"));
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[cVar3] = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar8[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("am"));
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ET"));
	cVar6[cVar2] = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar9[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ar"));
	cVar9[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SA"));
	cVar6[cVar1] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar10[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("as"));
	cVar10[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x3] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar11[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ay"));
	cVar11[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PE"));
	cVar6[0x4] = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar12[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("az"));
	cVar12[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("AZ"));
	cVar6[0x5] = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar13[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("bal"));
	cVar13[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PK"));
	cVar6[cVar0] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar14[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("be"));
	cVar14[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BY"));
	cVar6[0x7] = cVar14;
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar15[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("bg"));
	cVar15[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BG"));
	cVar6[0x8] = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar16[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("bn"));
	cVar16[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x9] = cVar16;
	cVar17 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar17[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("bs"));
	cVar17[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BA"));
	cVar6[0xa] = cVar17;
	cVar18 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar18[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ca"));
	cVar18[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ES"));
	cVar6[0xb] = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar19[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ch"));
	cVar19[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MP"));
	cVar6[0xc] = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar20[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cpe"));
	cVar20[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SL"));
	cVar6[0xd] = cVar20;
	cVar21 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar21[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cs"));
	cVar21[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CZ"));
	cVar6[0xe] = cVar21;
	cVar22 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar22[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cy"));
	cVar22[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GB"));
	cVar6[0xf] = cVar22;
	cVar23 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar23[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("da"));
	cVar23[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DK"));
	cVar6[0x10] = cVar23;
	cVar24 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar24[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de"));
	cVar24[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DE"));
	cVar6[0x11] = cVar24;
	cVar25 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar25[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("dv"));
	cVar25[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MV"));
	cVar6[0x12] = cVar25;
	cVar26 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar26[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("dz"));
	cVar26[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BT"));
	cVar6[0x13] = cVar26;
	cVar27 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar27[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("el"));
	cVar27[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GR"));
	cVar6[0x14] = cVar27;
	cVar28 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar28[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en"));
	cVar28[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("US"));
	cVar6[0x15] = cVar28;
	cVar29 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar29[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("es"));
	cVar29[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ES"));
	cVar6[0x16] = cVar29;
	cVar30 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar30[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("et"));
	cVar30[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("EE"));
	cVar6[0x17] = cVar30;
	cVar31 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar31[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("eu"));
	cVar31[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ES"));
	cVar6[0x18] = cVar31;
	cVar32 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar32[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fa"));
	cVar32[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IR"));
	cVar6[0x19] = cVar32;
	cVar33 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar33[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fi"));
	cVar33[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FI"));
	cVar6[0x1a] = cVar33;
	cVar34 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar34[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fil"));
	cVar34[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PH"));
	cVar6[0x1b] = cVar34;
	cVar35 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar35[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fj"));
	cVar35[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FJ"));
	cVar6[0x1c] = cVar35;
	cVar36 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar36[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fo"));
	cVar36[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FO"));
	cVar6[0x1d] = cVar36;
	cVar37 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar37[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fr"));
	cVar37[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FR"));
	cVar6[0x1e] = cVar37;
	cVar38 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar38[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ga"));
	cVar38[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IE"));
	cVar6[0x1f] = cVar38;
	cVar39 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar39[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gd"));
	cVar39[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GB"));
	cVar6[0x20] = cVar39;
	cVar40 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar40[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gl"));
	cVar40[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ES"));
	cVar6[0x21] = cVar40;
	cVar41 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar41[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gn"));
	cVar41[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PY"));
	cVar6[0x22] = cVar41;
	cVar42 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar42[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gu"));
	cVar42[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x23] = cVar42;
	cVar43 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar43[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gv"));
	cVar43[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GB"));
	cVar6[0x24] = cVar43;
	cVar44 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar44[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ha"));
	cVar44[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NG"));
	cVar6[0x25] = cVar44;
	cVar45 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar45[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("he"));
	cVar45[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IL"));
	cVar6[0x26] = cVar45;
	cVar46 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar46[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hi"));
	cVar46[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x27] = cVar46;
	cVar47 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar47[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ho"));
	cVar47[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PG"));
	cVar6[0x28] = cVar47;
	cVar48 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar48[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hr"));
	cVar48[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HR"));
	cVar6[0x29] = cVar48;
	cVar49 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar49[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ht"));
	cVar49[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HT"));
	cVar6[0x2a] = cVar49;
	cVar50 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar50[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hu"));
	cVar50[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HU"));
	cVar6[0x2b] = cVar50;
	cVar51 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar51[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hy"));
	cVar51[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("AM"));
	cVar6[0x2c] = cVar51;
	cVar52 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar52[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("id"));
	cVar52[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ID"));
	cVar6[0x2d] = cVar52;
	cVar53 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar53[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("is"));
	cVar53[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IS"));
	cVar6[0x2e] = cVar53;
	cVar54 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar54[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("it"));
	cVar54[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IT"));
	cVar6[0x2f] = cVar54;
	cVar55 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar55[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ja"));
	cVar55[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("JP"));
	cVar6[0x30] = cVar55;
	cVar56 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar56[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ka"));
	cVar56[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GE"));
	cVar6[0x31] = cVar56;
	cVar57 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar57[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("kk"));
	cVar57[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("KZ"));
	cVar6[0x32] = cVar57;
	cVar58 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar58[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("kl"));
	cVar58[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GL"));
	cVar6[0x33] = cVar58;
	cVar59 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar59[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("km"));
	cVar59[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("KH"));
	cVar6[0x34] = cVar59;
	cVar60 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar60[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("kn"));
	cVar60[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x35] = cVar60;
	cVar61 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar61[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ko"));
	cVar61[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("KR"));
	cVar6[0x36] = cVar61;
	cVar62 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar62[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("kok"));
	cVar62[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x37] = cVar62;
	cVar63 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar63[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ks"));
	cVar63[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x38] = cVar63;
	cVar64 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar64[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ku"));
	cVar64[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TR"));
	cVar6[0x39] = cVar64;
	cVar65 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar65[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ky"));
	cVar65[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("KG"));
	cVar6[0x3a] = cVar65;
	cVar66 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar66[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("la"));
	cVar66[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("VA"));
	cVar6[0x3b] = cVar66;
	cVar67 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar67[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lb"));
	cVar67[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("LU"));
	cVar6[0x3c] = cVar67;
	cVar68 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar68[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ln"));
	cVar68[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CG"));
	cVar6[0x3d] = cVar68;
	cVar69 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar69[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lo"));
	cVar69[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("LA"));
	cVar6[0x3e] = cVar69;
	cVar70 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar70[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lt"));
	cVar70[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("LT"));
	cVar6[0x3f] = cVar70;
	cVar71 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar71[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lv"));
	cVar71[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("LV"));
	cVar6[0x40] = cVar71;
	cVar72 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar72[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mai"));
	cVar72[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x41] = cVar72;
	cVar73 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar73[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("men"));
	cVar73[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GN"));
	cVar6[0x42] = cVar73;
	cVar74 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar74[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mg"));
	cVar74[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MG"));
	cVar6[0x43] = cVar74;
	cVar75 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar75[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mh"));
	cVar75[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MH"));
	cVar6[0x44] = cVar75;
	cVar76 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar76[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mk"));
	cVar76[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MK"));
	cVar6[0x45] = cVar76;
	cVar77 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar77[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ml"));
	cVar77[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x46] = cVar77;
	cVar78 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar78[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mn"));
	cVar78[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MN"));
	cVar6[0x47] = cVar78;
	cVar79 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar79[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mni"));
	cVar79[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x48] = cVar79;
	cVar80 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar80[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mo"));
	cVar80[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MD"));
	cVar6[0x49] = cVar80;
	cVar81 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar81[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mr"));
	cVar81[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x4a] = cVar81;
	cVar82 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar82[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ms"));
	cVar82[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MY"));
	cVar6[0x4b] = cVar82;
	cVar83 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar83[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mt"));
	cVar83[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MT"));
	cVar6[0x4c] = cVar83;
	cVar84 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar84[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("my"));
	cVar84[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MM"));
	cVar6[0x4d] = cVar84;
	cVar85 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar85[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("na"));
	cVar85[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NR"));
	cVar6[0x4e] = cVar85;
	cVar86 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar86[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nb"));
	cVar86[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NO"));
	cVar6[0x4f] = cVar86;
	cVar87 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar87[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nd"));
	cVar87[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x50] = cVar87;
	cVar88 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar88[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ne"));
	cVar88[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NP"));
	cVar6[0x51] = cVar88;
	cVar89 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar89[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("niu"));
	cVar89[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NU"));
	cVar6[0x52] = cVar89;
	cVar90 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar90[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nl"));
	cVar90[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NL"));
	cVar6[0x53] = cVar90;
	cVar91 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar91[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nn"));
	cVar91[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NO"));
	cVar6[0x54] = cVar91;
	cVar92 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar92[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("no"));
	cVar92[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NO"));
	cVar6[0x55] = cVar92;
	cVar93 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar93[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nr"));
	cVar93[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x56] = cVar93;
	cVar94 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar94[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nso"));
	cVar94[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x57] = cVar94;
	cVar95 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar95[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ny"));
	cVar95[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MW"));
	cVar6[0x58] = cVar95;
	cVar96 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar96[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("om"));
	cVar96[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("KE"));
	cVar6[0x59] = cVar96;
	cVar97 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar97[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("or"));
	cVar97[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x5a] = cVar97;
	cVar98 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar98[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pa"));
	cVar98[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x5b] = cVar98;
	cVar99 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar99[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pau"));
	cVar99[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PW"));
	cVar6[0x5c] = cVar99;
	cVar100 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar100[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pl"));
	cVar100[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PL"));
	cVar6[0x5d] = cVar100;
	cVar101 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar101[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ps"));
	cVar101[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PK"));
	cVar6[0x5e] = cVar101;
	cVar102 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar102[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pt"));
	cVar102[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BR"));
	cVar6[0x5f] = cVar102;
	cVar103 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar103[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("qu"));
	cVar103[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PE"));
	cVar6[0x60] = cVar103;
	cVar104 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar104[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rn"));
	cVar104[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BI"));
	cVar6[0x61] = cVar104;
	cVar105 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar105[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ro"));
	cVar105[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("RO"));
	cVar6[0x62] = cVar105;
	cVar106 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar106[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ru"));
	cVar106[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("RU"));
	cVar6[0x63] = cVar106;
	cVar107 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar107[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rw"));
	cVar107[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("RW"));
	cVar6[0x64] = cVar107;
	cVar108 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar108[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sd"));
	cVar108[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x65] = cVar108;
	cVar109 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar109[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sg"));
	cVar109[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CF"));
	cVar6[0x66] = cVar109;
	cVar110 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar110[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("si"));
	cVar110[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("LK"));
	cVar6[0x67] = cVar110;
	cVar111 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar111[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sk"));
	cVar111[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SK"));
	cVar6[0x68] = cVar111;
	cVar112 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar112[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sl"));
	cVar112[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SI"));
	cVar6[0x69] = cVar112;
	cVar113 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar113[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sm"));
	cVar113[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("WS"));
	cVar6[0x6a] = cVar113;
	cVar114 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar114[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("so"));
	cVar114[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DJ"));
	cVar6[0x6b] = cVar114;
	cVar115 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar115[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sq"));
	cVar115[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CS"));
	cVar6[0x6c] = cVar115;
	cVar116 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar116[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sr"));
	cVar116[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CS"));
	cVar6[0x6d] = cVar116;
	cVar117 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar117[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ss"));
	cVar117[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x6e] = cVar117;
	cVar118 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar118[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("st"));
	cVar118[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x6f] = cVar118;
	cVar119 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar119[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sv"));
	cVar119[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SE"));
	cVar6[0x70] = cVar119;
	cVar120 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar120[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sw"));
	cVar120[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("KE"));
	cVar6[0x71] = cVar120;
	cVar121 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar121[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ta"));
	cVar121[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x72] = cVar121;
	cVar122 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar122[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("te"));
	cVar122[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x73] = cVar122;
	cVar123 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar123[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tem"));
	cVar123[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SL"));
	cVar6[0x74] = cVar123;
	cVar124 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar124[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tet"));
	cVar124[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TL"));
	cVar6[0x75] = cVar124;
	cVar125 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar125[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("th"));
	cVar125[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TH"));
	cVar6[0x76] = cVar125;
	cVar126 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar126[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ti"));
	cVar126[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ET"));
	cVar6[0x77] = cVar126;
	cVar127 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar127[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tg"));
	cVar127[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TJ"));
	cVar6[0x78] = cVar127;
	cVar128 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar128[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tk"));
	cVar128[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TM"));
	cVar6[0x79] = cVar128;
	cVar129 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar129[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tkl"));
	cVar129[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TK"));
	cVar6[0x7a] = cVar129;
	cVar130 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar130[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tvl"));
	cVar130[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TV"));
	cVar6[0x7b] = cVar130;
	cVar131 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar131[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tl"));
	cVar131[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PH"));
	cVar6[0x7c] = cVar131;
	cVar132 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar132[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tn"));
	cVar132[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x7d] = cVar132;
	cVar133 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar133[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("to"));
	cVar133[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TO"));
	cVar6[0x7e] = cVar133;
	cVar134 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar134[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tpi"));
	cVar134[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PG"));
	cVar6[0x7f] = cVar134;
	cVar135 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar135[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tr"));
	cVar135[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TR"));
	cVar6[0x80] = cVar135;
	cVar136 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar136[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ts"));
	cVar136[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x81] = cVar136;
	cVar137 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar137[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uk"));
	cVar137[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("UA"));
	cVar6[0x82] = cVar137;
	cVar138 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar138[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ur"));
	cVar138[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x83] = cVar138;
	cVar139 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar139[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uz"));
	cVar139[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("UZ"));
	cVar6[0x84] = cVar139;
	cVar140 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar140[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ve"));
	cVar140[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x85] = cVar140;
	cVar141 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar141[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("vi"));
	cVar141[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("VN"));
	cVar6[0x86] = cVar141;
	cVar142 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar142[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("wo"));
	cVar142[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SN"));
	cVar6[0x87] = cVar142;
	cVar143 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar143[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("xh"));
	cVar143[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x88] = cVar143;
	cVar144 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar144[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh"));
	cVar144[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CN"));
	cVar6[0x89] = cVar144;
	cVar145 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar145[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_Hant"));
	cVar145[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TW"));
	cVar6[0x8a] = cVar145;
	cVar146 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar146[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zu"));
	cVar146[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZA"));
	cVar6[0x8b] = cVar146;
	cVar147 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar147[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("aa"));
	cVar147[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ET"));
	cVar6[0x8c] = cVar147;
	cVar148 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar148[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("byn"));
	cVar148[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ER"));
	cVar6[0x8d] = cVar148;
	cVar149 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar149[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("eo"));
	cVar149[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DE"));
	cVar6[0x8e] = cVar149;
	cVar150 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar150[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gez"));
	cVar150[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ET"));
	cVar6[0x8f] = cVar150;
	cVar151 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar151[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("haw"));
	cVar151[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("US"));
	cVar6[0x90] = cVar151;
	cVar152 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar152[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("iu"));
	cVar152[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CA"));
	cVar6[0x91] = cVar152;
	cVar153 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar153[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("kw"));
	cVar153[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GB"));
	cVar6[0x92] = cVar153;
	cVar154 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar154[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sa"));
	cVar154[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IN"));
	cVar6[0x93] = cVar154;
	cVar155 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar155[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sh"));
	cVar155[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HR"));
	cVar6[0x94] = cVar155;
	cVar156 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar156[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sid"));
	cVar156[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ET"));
	cVar6[0x95] = cVar156;
	cVar157 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar157[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("syr"));
	cVar157[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SY"));
	cVar6[0x96] = cVar157;
	cVar158 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar158[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tig"));
	cVar158[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ER"));
	cVar6[0x97] = cVar158;
	cVar159 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar159[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tt"));
	cVar159[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("RU"));
	cVar6[0x98] = cVar159;
	cVar160 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar160[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("wal"));
	cVar160[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ET"));
	cVar6[0x99] = cVar160;
	android::icu::util::GlobalizationPreferences::language_territory_hack = cVar6;
	i = 0x0;
label_goto_a7a:
	if ( i >= android::icu::util::GlobalizationPreferences::language_territory_hack->size() )
		goto label_cond_a93;
	android::icu::util::GlobalizationPreferences::language_territory_hack_map->put(android::icu::util::GlobalizationPreferences::language_territory_hack[i][cVar3], android::icu::util::GlobalizationPreferences::language_territory_hack[i][cVar2]);
	i = ( i + 0x1);
	goto label_goto_a7a;
	// 2840    .line 1399
label_cond_a93:
	cVar161 = std::make_shared<java::util::HashMap>();
	android::icu::util::GlobalizationPreferences::territory_tzid_hack_map = cVar161;
	cVar162 = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0x1e);
	cVar163 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar163[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("AQ"));
	cVar163[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Antarctica/McMurdo"));
	cVar162[cVar3] = cVar163;
	cVar164 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar164[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("AR"));
	cVar164[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("America/Buenos_Aires"));
	cVar162[cVar2] = cVar164;
	cVar165 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar165[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("AU"));
	cVar165[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Australia/Sydney"));
	cVar162[cVar1] = cVar165;
	cVar166 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar166[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BR"));
	cVar166[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("America/Sao_Paulo"));
	cVar162[0x3] = cVar166;
	cVar167 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar167[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CA"));
	cVar167[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("America/Toronto"));
	cVar162[0x4] = cVar167;
	cVar168 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar168[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CD"));
	cVar168[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Africa/Kinshasa"));
	cVar162[0x5] = cVar168;
	cVar169 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar169[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CL"));
	cVar169[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("America/Santiago"));
	cVar162[cVar0] = cVar169;
	cVar170 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar170[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CN"));
	cVar170[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Asia/Shanghai"));
	cVar162[0x7] = cVar170;
	cVar171 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar171[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("EC"));
	cVar171[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("America/Guayaquil"));
	cVar162[0x8] = cVar171;
	cVar172 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar172[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ES"));
	cVar172[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Europe/Madrid"));
	cVar162[0x9] = cVar172;
	cVar173 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar173[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GB"));
	cVar173[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Europe/London"));
	cVar162[0xa] = cVar173;
	cVar174 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar174[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GL"));
	cVar174[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("America/Godthab"));
	cVar162[0xb] = cVar174;
	cVar175 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar175[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ID"));
	cVar175[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Asia/Jakarta"));
	cVar162[0xc] = cVar175;
	cVar176 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar176[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ML"));
	cVar176[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Africa/Bamako"));
	cVar162[0xd] = cVar176;
	cVar177 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar177[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MX"));
	cVar177[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("America/Mexico_City"));
	cVar162[0xe] = cVar177;
	cVar178 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar178[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MY"));
	cVar178[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Asia/Kuala_Lumpur"));
	cVar162[0xf] = cVar178;
	cVar179 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar179[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NZ"));
	cVar179[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pacific/Auckland"));
	cVar162[0x10] = cVar179;
	cVar180 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar180[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PT"));
	cVar180[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Europe/Lisbon"));
	cVar162[0x11] = cVar180;
	cVar181 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar181[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("RU"));
	cVar181[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Europe/Moscow"));
	cVar162[0x12] = cVar181;
	cVar182 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar182[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("UA"));
	cVar182[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Europe/Kiev"));
	cVar162[0x13] = cVar182;
	cVar183 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar183[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("US"));
	cVar183[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("America/New_York"));
	cVar162[0x14] = cVar183;
	cVar184 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar184[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("UZ"));
	cVar184[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Asia/Tashkent"));
	cVar162[0x15] = cVar184;
	cVar185 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar185[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PF"));
	cVar185[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pacific/Tahiti"));
	cVar162[0x16] = cVar185;
	cVar186 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar186[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FM"));
	cVar186[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pacific/Kosrae"));
	cVar162[0x17] = cVar186;
	cVar187 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar187[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("KI"));
	cVar187[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pacific/Tarawa"));
	cVar162[0x18] = cVar187;
	cVar188 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar188[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("KZ"));
	cVar188[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Asia/Almaty"));
	cVar162[0x19] = cVar188;
	cVar189 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar189[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MH"));
	cVar189[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pacific/Majuro"));
	cVar162[0x1a] = cVar189;
	cVar190 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar190[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MN"));
	cVar190[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Asia/Ulaanbaatar"));
	cVar162[0x1b] = cVar190;
	cVar191 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar191[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SJ"));
	cVar191[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Arctic/Longyearbyen"));
	cVar162[0x1c] = cVar191;
	cVar192 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar192[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("UM"));
	cVar192[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pacific/Midway"));
	cVar162[0x1d] = cVar192;
	android::icu::util::GlobalizationPreferences::territory_tzid_hack = cVar162;
	i = 0x0;
label_goto_c75:
	if ( i >= android::icu::util::GlobalizationPreferences::territory_tzid_hack->size() )
		goto label_cond_c8e;
	android::icu::util::GlobalizationPreferences::territory_tzid_hack_map->put(android::icu::util::GlobalizationPreferences::territory_tzid_hack[i][cVar3], android::icu::util::GlobalizationPreferences::territory_tzid_hack[i][cVar2]);
	i = ( i + 0x1);
	goto label_goto_c75;
	// 3330    .line 89
label_cond_c8e:
	return;

}
// .method public constructor <init>()V
android::icu::util::GlobalizationPreferences::GlobalizationPreferences()
{
	
	// 3340    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->reset();
	return;

}
// .method private getAvailableLocale(I)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::GlobalizationPreferences::getAvailableLocale(int type)
{
	
	std::shared_ptr<java::util::List> locs;
	int i;
	std::shared_ptr<android::icu::util::ULocale> l;
	
	//    .param p1, "type"    # I
	locs = this->getLocales();
	//    .local v2, "locs":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
	//    .local v3, "result":Landroid/icu/util/ULocale;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= locs->size() )
		goto label_cond_19;
	l = locs->get(i);
	l->checkCast("android::icu::util::ULocale");
	//    .local v1, "l":Landroid/icu/util/ULocale;
	if ( !(this->isAvailableLocale(l, type)) )  
		goto label_cond_1a;
	//    .end local v1    # "l":Landroid/icu/util/ULocale;
	//    .end local v3    # "result":Landroid/icu/util/ULocale;
label_cond_19:
	return 0x0;
	// 3399    .line 1147
	// 3400    .restart local v1    # "l":Landroid/icu/util/ULocale;
	// 3401    .restart local v3    # "result":Landroid/icu/util/ULocale;
label_cond_1a:
	i = ( i + 0x1);
	goto label_goto_6;

}
// .method private isAvailableLocale(Landroid/icu/util/ULocale;I)Z
bool android::icu::util::GlobalizationPreferences::isAvailableLocale(std::shared_ptr<android::icu::util::ULocale> loc,int type)
{
	
	std::shared_ptr<java::util::BitSet> bits;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "type"    # I
	bits = android::icu::util::GlobalizationPreferences::available_locales->get(loc);
	bits->checkCast("java::util::BitSet");
	//    .local v0, "bits":Ljava/util/BitSet;
	if ( !(bits) )  
		goto label_cond_12;
	if ( !(bits->get(type)) )  
		goto label_cond_12;
	return 0x1;
	// 3438    .line 1162
label_cond_12:
	return 0x0;

}
// .method public cloneAsThawed()Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::util::GlobalizationPreferences> result;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	result = this->clone();
	result->checkCast("android::icu::util::GlobalizationPreferences");
	//    .local v1, "result":Landroid/icu/util/GlobalizationPreferences;
	result->frozen = 0x0;
	//label_try_end_9:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_9} :catch_a
	return result;
	// 3470    .line 1468
	// 3471    .end local v1    # "result":Landroid/icu/util/GlobalizationPreferences;
label_catch_a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	return 0x0;

}
// .method public freeze()Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::freeze()
{
	
	this->frozen = 0x1;
	return this;

}
// .method public getBreakIterator(I)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::util::GlobalizationPreferences::getBreakIterator(int type)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::text::BreakIterator> cVar1;
	
	//    .param p1, "type"    # I
	if ( type < 0 ) 
		goto label_cond_5;
	if ( type <  0x5 )
		goto label_cond_e;
label_cond_5:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal break iterator type")));
	// throw
	throw cVar0;
	// 3541    .line 500
label_cond_e:
	if ( !(this->breakIterators) )  
		goto label_cond_18;
	if ( this->breakIterators[type] )     
		goto label_cond_1d;
label_cond_18:
	return this->guessBreakIterator(type);
	// 3561    .line 503
label_cond_1d:
	cVar1 = this->breakIterators[type]->clone();
	cVar1->checkCast("android::icu::text::BreakIterator");
	return cVar1;

}
// .method public getCalendar()Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::GlobalizationPreferences::getCalendar()
{
	
	std::shared_ptr<android::icu::util::Calendar> temp;
	
	if ( this->calendar )     
		goto label_cond_9;
	return this->guessCalendar();
	// 3592    .line 418
label_cond_9:
	temp = this->calendar->clone();
	temp->checkCast("android::icu::util::Calendar");
	//    .local v0, "temp":Landroid/icu/util/Calendar;
	temp->setTimeZone(this->getTimeZone());
	temp->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return temp;

}
// .method public getCollator()Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::util::GlobalizationPreferences::getCollator()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar1;
	std::shared_ptr<android::icu::text::Collator> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( this->collator )     
		goto label_cond_9;
	return this->guessCollator();
	// 3637    .line 464
label_cond_9:
	try {
	//label_try_start_9:
	cVar0 = this->collator->clone();
	cVar0->checkCast("android::icu::text::Collator");
	//label_try_end_11:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_9 .. :try_end_11} :catch_12
	return cVar0;
	// 3652    .line 465
label_catch_12:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar1 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error in cloning collator")), getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public getCurrency()Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::GlobalizationPreferences::getCurrency()
{
	
	if ( this->currency )     
		goto label_cond_9;
	return this->guessCurrency();
	// 3683    .line 390
label_cond_9:
	return this->currency;

}
// .method public getDateFormat(II)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::GlobalizationPreferences::getDateFormat(int dateStyle,int timeStyle)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<android::icu::text::DateFormat> result;
	
	//    .param p1, "dateStyle"    # I
	//    .param p2, "timeStyle"    # I
	cVar0 = 0x5;
	cVar1 = 0x4;
	if ( dateStyle != cVar1 )
		goto label_cond_f;
	if ( timeStyle != cVar1 )
		goto label_cond_f;
label_cond_6:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal date format style arguments")));
	// throw
	throw cVar2;
	// 3715    .line 664
label_cond_f:
	if ( dateStyle < 0 ) 
		goto label_cond_6;
	if ( dateStyle >= cVar0 )
		goto label_cond_6;
	if ( timeStyle < 0 ) 
		goto label_cond_6;
	if ( timeStyle >= cVar0 )
		goto label_cond_6;
	//    .local v0, "result":Landroid/icu/text/DateFormat;
	if ( !(this->dateFormats) )  
		goto label_cond_22;
	result = this->dateFormats[dateStyle][timeStyle];
	//    .end local v0    # "result":Landroid/icu/text/DateFormat;
label_cond_22:
	if ( !(0x0) )  
		goto label_cond_32;
	result = result->clone();
	result->checkCast("android::icu::text::DateFormat");
	//    .local v0, "result":Landroid/icu/text/DateFormat;
	result->setTimeZone(this->getTimeZone());
label_goto_31:
	return result;
	// 3766    .line 677
	// 3767    .end local v0    # "result":Landroid/icu/text/DateFormat;
label_cond_32:
	//    .restart local v0    # "result":Landroid/icu/text/DateFormat;
	goto label_goto_31;

}
// .method public getDisplayName(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::GlobalizationPreferences::getDisplayName(std::shared_ptr<java::lang::String> id,int type)
{
	
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<java::util::Iterator> locale_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Object> result;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> parts;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<android::icu::util::Currency> temp;
	int cVar6;
	std::shared_ptr<android::icu::text::SimpleDateFormat> dtf;
	std::shared_ptr<java::util::Date> cVar8;
	int isBadStr;
	int sidx;
	int eidx;
	std::shared_ptr<java::lang::String> teststr;
	int i;
	int c;
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "type"    # I
	result = id;
	//    .local v9, "result":Ljava/lang/String;
	locale_S_iterator = this->getLocales()->iterator();
	//    .local v7, "locale$iterator":Ljava/util/Iterator;
label_cond_a:
label_goto_a:
	if ( !(locale_S_iterator->hasNext()) )  
		goto label_cond_14d;
	locale = locale_S_iterator->next();
	locale->checkCast("android::icu::util::ULocale");
	//    .local v6, "locale":Landroid/icu/util/ULocale;
	if ( !(this->isAvailableLocale(locale, 0x0)) )  
		goto label_cond_a;
	// switch
	{
	auto item = ( type );
	if (item == 0) goto label_pswitch_3e;
	if (item == 1) goto label_pswitch_4d;
	if (item == 2) goto label_pswitch_54;
	if (item == 3) goto label_pswitch_6f;
	if (item == 4) goto label_pswitch_8a;
	if (item == 5) goto label_pswitch_a5;
	if (item == 6) goto label_pswitch_ac;
	if (item == 7) goto label_pswitch_de;
	if (item == 8) goto label_pswitch_de;
	if (item == 9) goto label_pswitch_f6;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown type: ")))->append(type)->toString());
	// throw
	throw cVar0;
	// 3853    .line 544
label_pswitch_3e:
	result = android::icu::util::ULocale::getDisplayName(id, locale);
label_cond_44:
label_goto_44:
	if ( id->equals(result) )     
		goto label_cond_a;
	return result;
	// 3875    .line 547
label_pswitch_4d:
	result = android::icu::util::ULocale::getDisplayLanguage(id, locale);
	goto label_goto_44;
	// 3885    .line 550
label_pswitch_54:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	result = android::icu::util::ULocale::getDisplayScript(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("und-")))->append(id)->toString(), locale);
	goto label_goto_44;
	// 3913    .line 553
label_pswitch_6f:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	result = android::icu::util::ULocale::getDisplayCountry(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("und-")))->append(id)->toString(), locale);
	goto label_goto_44;
	// 3941    .line 557
label_pswitch_8a:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	result = android::icu::util::ULocale::getDisplayVariant(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("und-QQ-")))->append(id)->toString(), locale);
	goto label_goto_44;
	// 3969    .line 560
label_pswitch_a5:
	result = android::icu::util::ULocale::getDisplayKeyword(id, locale);
	goto label_goto_44;
	// 3979    .line 563
label_pswitch_ac:
	parts = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x2);
	//    .local v8, "parts":[Ljava/lang/String;
	android::icu::impl::Utility::split(id, 0x3d, parts);
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	result = android::icu::util::ULocale::getDisplayKeywordValue(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("und@")))->append(id)->toString(), parts[0x0], locale);
	if ( !(result->equals(parts[0x1])) )  
		goto label_cond_44;
	goto label_goto_a;
	// 4035    .line 573
	// 4036    .end local v8    # "parts":[Ljava/lang/String;
label_pswitch_de:
	temp = std::make_shared<android::icu::util::Currency>(id);
	//    .local v11, "temp":Landroid/icu/util/Currency;
	if ( type != 0x7 )
		goto label_cond_f4;
	cVar6 = 0x1;
label_goto_eb:
	result = temp->getName(locale, cVar6, std::make_shared<std::vector<bool[]>>(0x1));
	goto label_goto_44;
	// 4068    .line 576
label_cond_f4:
	cVar6 = 0x0;
	goto label_goto_eb;
	// 4074    .line 584
	// 4075    .end local v11    # "temp":Landroid/icu/util/Currency;
label_pswitch_f6:
	dtf = std::make_shared<android::icu::text::SimpleDateFormat>(std::make_shared<java::lang::String>(std::make_shared<char[]>("vvvv")), locale);
	//    .local v2, "dtf":Landroid/icu/text/SimpleDateFormat;
	dtf->setTimeZone(android::icu::util::TimeZone::getFrozenTimeZone(id));
	cVar8 = std::make_shared<java::util::Date>();
	result = dtf->format(cVar8);
	isBadStr = 0x0;
	//    .local v5, "isBadStr":Z
	//    .local v12, "teststr":Ljava/lang/String;
	sidx = result->indexOf(0x28);
	//    .local v10, "sidx":I
	eidx = result->indexOf(0x29);
	//    .local v3, "eidx":I
	if ( sidx == -0x1 )
		goto label_cond_12d;
	if ( eidx == -0x1 )
		goto label_cond_12d;
	if ( (eidx - sidx) != 0x3 )
		goto label_cond_12d;
	teststr = result->substring(( sidx + 0x1), eidx);
label_cond_12d:
	if ( result->length() != 0x2 )
		goto label_cond_146;
	isBadStr = 0x1;
	i = 0x0;
	//    .local v4, "i":I
label_goto_136:
	if ( i >= 0x2 )
		goto label_cond_146;
	c = teststr->charAt(i);
	//    .local v1, "c":C
	if ( c <  0x41 )
		goto label_cond_145;
	if ( 0x5a >= c )
		goto label_cond_14a;
label_cond_145:
	isBadStr = 0x0;
	//    .end local v1    # "c":C
	//    .end local v4    # "i":I
label_cond_146:
	if ( !(isBadStr) )  
		goto label_cond_44;
	goto label_goto_a;
	// 4195    .line 602
	// 4196    .restart local v1    # "c":C
	// 4197    .restart local v4    # "i":I
label_cond_14a:
	i = ( i + 0x1);
	goto label_goto_136;
	// 4203    .line 624
	// 4204    .end local v1    # "c":C
	// 4205    .end local v2    # "dtf":Landroid/icu/text/SimpleDateFormat;
	// 4206    .end local v3    # "eidx":I
	// 4207    .end local v4    # "i":I
	// 4208    .end local v5    # "isBadStr":Z
	// 4209    .end local v6    # "locale":Landroid/icu/util/ULocale;
	// 4210    .end local v10    # "sidx":I
	// 4211    .end local v12    # "teststr":Ljava/lang/String;
label_cond_14d:
	return result;
	// 4215    .line 542
	// 4216    :pswitch_data_14e
	// 4217    .packed-switch 0x0
	// 4218        :pswitch_3e
	// 4219        :pswitch_4d
	// 4220        :pswitch_54
	// 4221        :pswitch_6f
	// 4222        :pswitch_8a
	// 4223        :pswitch_a5
	// 4224        :pswitch_ac
	// 4225        :pswitch_de
	// 4226        :pswitch_de
	// 4227        :pswitch_f6
	// 4228    .end packed-switch

}
// .method public getLocale(I)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::GlobalizationPreferences::getLocale(int index)
{
	
	std::shared_ptr<java::util::List> lcls;
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "index"    # I
	//    .local v0, "lcls":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
	if ( this->locales )     
		goto label_cond_9;
	lcls = this->guessLocales();
label_cond_9:
	if ( index < 0 ) 
		goto label_cond_18;
	if ( index >= lcls->size() )
		goto label_cond_18;
	cVar0 = lcls->get(index);
	cVar0->checkCast("android::icu::util::ULocale");
	return cVar0;
	// 4269    .line 204
label_cond_18:
	return 0x0;

}
// .method public getLocales()Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::util::ULocale>> android::icu::util::GlobalizationPreferences::getLocales()
{
	
	std::shared_ptr<java::util::ArrayList> result;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4277        value = {
	// 4278            "()",
	// 4279            "Ljava/util/List",
	// 4280            "<",
	// 4281            "Landroid/icu/util/ULocale;",
	// 4282            ">;"
	// 4283        }
	// 4284    .end annotation
	if ( this->locales )     
		goto label_cond_9;
	//    .local v0, "result":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
label_goto_8:
	return result;
	// 4302    .line 184
	// 4303    .end local v0    # "result":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
label_cond_9:
	result = std::make_shared<java::util::ArrayList>();
	//    .restart local v0    # "result":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
	result->addAll(this->locales);
	goto label_goto_8;

}
// .method public getNumberFormat(I)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::util::GlobalizationPreferences::getNumberFormat(int style)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> result;
	
	//    .param p1, "style"    # I
	if ( style < 0 ) 
		goto label_cond_5;
	if ( style <  0x5 )
		goto label_cond_e;
label_cond_5:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal number format type")));
	// throw
	throw cVar0;
	// 4340    .line 695
label_cond_e:
	//    .local v0, "result":Landroid/icu/text/NumberFormat;
	if ( !(this->numberFormats) )  
		goto label_cond_17;
	result = this->numberFormats[style];
	//    .end local v0    # "result":Landroid/icu/text/NumberFormat;
label_cond_17:
	if ( !(0x0) )  
		goto label_cond_20;
	result = result->clone();
	result->checkCast("android::icu::text::NumberFormat");
	//    .local v0, "result":Landroid/icu/text/NumberFormat;
label_goto_1f:
	return result;
	// 4372    .line 702
	// 4373    .end local v0    # "result":Landroid/icu/text/NumberFormat;
label_cond_20:
	//    .restart local v0    # "result":Landroid/icu/text/NumberFormat;
	goto label_goto_1f;

}
// .method public getResourceBundle(Ljava/lang/String;)Ljava/util/ResourceBundle;
std::shared_ptr<java::util::ResourceBundle> android::icu::util::GlobalizationPreferences::getResourceBundle(std::shared_ptr<java::lang::String> baseName)
{
	
	//    .param p1, "baseName"    # Ljava/lang/String;
	return this->getResourceBundle(baseName, 0x0);

}
// .method public getResourceBundle(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;
std::shared_ptr<java::util::ResourceBundle> android::icu::util::GlobalizationPreferences::getResourceBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared_ptr<java::util::ResourceBundle> urb;
	std::shared_ptr<java::lang::Object> actualLocaleName;
	std::shared_ptr<java::util::List> fallbacks;
	int i;
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::lang::String> localeName;
	std::shared_ptr<java::util::MissingResourceException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::util::UResourceBundle> candidate;
	auto urb;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "baseName"    # Ljava/lang/String;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	urb = 0x0;
	//    .local v6, "urb":Landroid/icu/util/UResourceBundle;
	//    .local v1, "candidate":Landroid/icu/util/UResourceBundle;
	actualLocaleName = 0x0;
	//    .local v0, "actualLocaleName":Ljava/lang/String;
	fallbacks = this->getLocales();
	//    .local v2, "fallbacks":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
	i = 0x0;
	//    .end local v0    # "actualLocaleName":Ljava/lang/String;
	//    .end local v1    # "candidate":Landroid/icu/util/UResourceBundle;
	//    .end local v6    # "urb":Landroid/icu/util/UResourceBundle;
	//    .local v3, "i":I
label_goto_8:
	if ( i >= fallbacks->size() )
		goto label_cond_21;
	cVar0 = fallbacks->get(i);
	cVar0->checkCast("android::icu::util::ULocale");
	localeName = cVar0->toString();
	//    .local v4, "localeName":Ljava/lang/String;
	if ( !(actualLocaleName) )  
		goto label_cond_40;
	if ( !(localeName->equals(actualLocaleName)) )  
		goto label_cond_40;
	urb = 0x0;
	//    .end local v4    # "localeName":Ljava/lang/String;
label_cond_21:
label_goto_21:
	if ( urb )     
		goto label_cond_66;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::util::MissingResourceException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t find bundle for base name ")))->append(baseName)->toString(), baseName, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar1;
	// 4495    .line 303
	// 4496    .restart local v4    # "localeName":Ljava/lang/String;
label_cond_40:
	if ( loader )     
		goto label_cond_58;
	try {
	//label_try_start_42:
	candidate = android::icu::util::UResourceBundle::getBundleInstance(baseName, localeName);
	//    .local v1, "candidate":Landroid/icu/util/UResourceBundle;
label_goto_46:
	if ( !(candidate) )  
		goto label_cond_60;
	actualLocaleName = candidate->getULocale()->getName();
	//    .local v0, "actualLocaleName":Ljava/lang/String;
	if ( !(actualLocaleName->equals(localeName)) )  
		goto label_cond_5d;
	urb = candidate;
	//    .local v6, "urb":Landroid/icu/util/UResourceBundle;
	goto label_goto_21;
	// 4534    .line 307
	// 4535    .end local v0    # "actualLocaleName":Ljava/lang/String;
	// 4536    .end local v1    # "candidate":Landroid/icu/util/UResourceBundle;
	// 4537    .end local v6    # "urb":Landroid/icu/util/UResourceBundle;
label_cond_58:
	//label_try_end_5b:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_63;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_42 .. :try_end_5b} :catch_63
	//    .restart local v1    # "candidate":Landroid/icu/util/UResourceBundle;
	goto label_goto_46;
	// 4548    .line 315
	// 4549    .restart local v0    # "actualLocaleName":Ljava/lang/String;
label_cond_5d:
	if ( urb )     
		goto label_cond_60;
	urb = candidate;
	//    .end local v0    # "actualLocaleName":Ljava/lang/String;
	//    .end local v1    # "candidate":Landroid/icu/util/UResourceBundle;
label_cond_60:
label_goto_60:
	i = ( i + 0x1);
	goto label_goto_8;
	// 4565    .line 320
label_catch_63:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "mre":Ljava/util/MissingResourceException;
	actualLocaleName = 0x0;
	//    .local v0, "actualLocaleName":Ljava/lang/String;
	goto label_goto_60;
	// 4576    .line 329
	// 4577    .end local v0    # "actualLocaleName":Ljava/lang/String;
	// 4578    .end local v4    # "localeName":Ljava/lang/String;
	// 4579    .end local v5    # "mre":Ljava/util/MissingResourceException;
label_cond_66:
	return urb;

}
// .method public getTerritory()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::GlobalizationPreferences::getTerritory()
{
	
	if ( this->territory )     
		goto label_cond_9;
	return this->guessTerritory();
	// 4600    .line 362
label_cond_9:
	return this->territory;

}
// .method public getTimeZone()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::GlobalizationPreferences::getTimeZone()
{
	
	if ( this->timezone )     
		goto label_cond_9;
	return this->guessTimeZone();
	// 4623    .line 450
label_cond_9:
	return this->timezone->cloneAsThawed();

}
// .method protected guessBreakIterator(I)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::util::GlobalizationPreferences::guessBreakIterator(int type)
{
	
	std::shared_ptr<android::icu::util::ULocale> brkLocale;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "type"    # I
	0x0;
	//    .local v0, "bitr":Landroid/icu/text/BreakIterator;
	//    .local v1, "brkLocale":Landroid/icu/util/ULocale;
	if ( this->getAvailableLocale(0x5) )     
		goto label_cond_a;
	brkLocale = android::icu::util::ULocale::ROOT;
label_cond_a:
	// switch
	{
	auto item = ( type );
	if (item == 0) goto label_pswitch_16;
	if (item == 1) goto label_pswitch_20;
	if (item == 2) goto label_pswitch_25;
	if (item == 3) goto label_pswitch_2a;
	if (item == 4) goto label_pswitch_1b;
	}
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown break iterator type")));
	// throw
	throw cVar0;
	// 4670    .line 1058
label_pswitch_16:
	//    .local v0, "bitr":Landroid/icu/text/BreakIterator;
label_goto_1a:
	return bitr;
	// 4681    .line 1061
	// 4682    .local v0, "bitr":Landroid/icu/text/BreakIterator;
label_pswitch_1b:
	//    .local v0, "bitr":Landroid/icu/text/BreakIterator;
	goto label_goto_1a;
	// 4691    .line 1064
	// 4692    .local v0, "bitr":Landroid/icu/text/BreakIterator;
label_pswitch_20:
	//    .local v0, "bitr":Landroid/icu/text/BreakIterator;
	goto label_goto_1a;
	// 4701    .line 1067
	// 4702    .local v0, "bitr":Landroid/icu/text/BreakIterator;
label_pswitch_25:
	//    .local v0, "bitr":Landroid/icu/text/BreakIterator;
	goto label_goto_1a;
	// 4711    .line 1070
	// 4712    .local v0, "bitr":Landroid/icu/text/BreakIterator;
label_pswitch_2a:
	//    .local v0, "bitr":Landroid/icu/text/BreakIterator;
	goto label_goto_1a;
	// 4721    .line 1056
	// 4722    nop
	// 4724    :pswitch_data_30
	// 4725    .packed-switch 0x0
	// 4726        :pswitch_16
	// 4727        :pswitch_20
	// 4728        :pswitch_25
	// 4729        :pswitch_2a
	// 4730        :pswitch_1b
	// 4731    .end packed-switch

}
// .method protected guessCalendar()Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::util::GlobalizationPreferences::guessCalendar()
{
	
	std::shared_ptr<android::icu::util::ULocale> calLocale;
	
	calLocale = this->getAvailableLocale(0x1);
	//    .local v0, "calLocale":Landroid/icu/util/ULocale;
	if ( calLocale )     
		goto label_cond_9;
label_cond_9:
	return android::icu::util::Calendar::getInstance(this->getTimeZone(), calLocale);

}
// .method protected guessCollator()Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::util::GlobalizationPreferences::guessCollator()
{
	
	std::shared_ptr<android::icu::util::ULocale> collLocale;
	
	collLocale = this->getAvailableLocale(0x4);
	//    .local v0, "collLocale":Landroid/icu/util/ULocale;
	if ( collLocale )     
		goto label_cond_9;
label_cond_9:
	return android::icu::text::Collator::getInstance(collLocale);

}
// .method protected guessCurrency()Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::util::GlobalizationPreferences::guessCurrency()
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::util::ULocale>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("und-")))->append(this->getTerritory())->toString());
	return android::icu::util::Currency::getInstance(cVar0);

}
// .method protected guessDateFormat(II)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::GlobalizationPreferences::guessDateFormat(int dateStyle,int timeStyle)
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::ULocale> dfLocale;
	
	//    .param p1, "dateStyle"    # I
	//    .param p2, "timeStyle"    # I
	cVar0 = 0x4;
	dfLocale = this->getAvailableLocale(0x2);
	//    .local v0, "dfLocale":Landroid/icu/util/ULocale;
	if ( dfLocale )     
		goto label_cond_a;
	dfLocale = android::icu::util::ULocale::ROOT;
label_cond_a:
	if ( timeStyle != cVar0 )
		goto label_cond_15;
	//    .local v1, "result":Landroid/icu/text/DateFormat;
label_goto_14:
	return result;
	// 4870    .line 923
	// 4871    .end local v1    # "result":Landroid/icu/text/DateFormat;
label_cond_15:
	if ( dateStyle != cVar0 )
		goto label_cond_20;
	//    .restart local v1    # "result":Landroid/icu/text/DateFormat;
	goto label_goto_14;
	// 4887    .line 926
	// 4888    .end local v1    # "result":Landroid/icu/text/DateFormat;
label_cond_20:
	//    .restart local v1    # "result":Landroid/icu/text/DateFormat;
	goto label_goto_14;

}
// .method protected guessLocales()Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::util::ULocale>> android::icu::util::GlobalizationPreferences::guessLocales()
{
	
	std::shared_ptr<java::util::ArrayList> result;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4905        value = {
	// 4906            "()",
	// 4907            "Ljava/util/List",
	// 4908            "<",
	// 4909            "Landroid/icu/util/ULocale;",
	// 4910            ">;"
	// 4911        }
	// 4912    .end annotation
	if ( this->implicitLocales )     
		goto label_cond_17;
	result = std::make_shared<java::util::ArrayList>(0x1);
	//    .local v0, "result":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
	result->add(android::icu::util::ULocale::getDefault({const[class].FS-Param}));
	this->implicitLocales = this->processLocales(result);
	//    .end local v0    # "result":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
label_cond_17:
	return this->implicitLocales;

}
// .method protected guessNumberFormat(I)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::util::GlobalizationPreferences::guessNumberFormat(int style)
{
	
	std::shared_ptr<android::icu::util::ULocale> nfLocale;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> result;
	
	//    .param p1, "style"    # I
	//    .local v0, "nfLocale":Landroid/icu/util/ULocale;
	if ( this->getAvailableLocale(0x3) )     
		goto label_cond_9;
	nfLocale = android::icu::util::ULocale::ROOT;
label_cond_9:
	// switch
	{
	auto item = ( style );
	if (item == 0) goto label_pswitch_15;
	if (item == 1) goto label_pswitch_29;
	if (item == 2) goto label_pswitch_24;
	if (item == 3) goto label_pswitch_1a;
	if (item == 4) goto label_pswitch_1f;
	}
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown number format style")));
	// throw
	throw cVar0;
	// 4982    .line 947
label_pswitch_15:
	//    .local v1, "result":Landroid/icu/text/NumberFormat;
label_goto_19:
	return result;
	// 4993    .line 950
	// 4994    .end local v1    # "result":Landroid/icu/text/NumberFormat;
label_pswitch_1a:
	//    .restart local v1    # "result":Landroid/icu/text/NumberFormat;
	goto label_goto_19;
	// 5003    .line 953
	// 5004    .end local v1    # "result":Landroid/icu/text/NumberFormat;
label_pswitch_1f:
	//    .restart local v1    # "result":Landroid/icu/text/NumberFormat;
	goto label_goto_19;
	// 5013    .line 956
	// 5014    .end local v1    # "result":Landroid/icu/text/NumberFormat;
label_pswitch_24:
	//    .restart local v1    # "result":Landroid/icu/text/NumberFormat;
	goto label_goto_19;
	// 5023    .line 959
	// 5024    .end local v1    # "result":Landroid/icu/text/NumberFormat;
label_pswitch_29:
	result = android::icu::text::NumberFormat::getCurrencyInstance(nfLocale);
	//    .restart local v1    # "result":Landroid/icu/text/NumberFormat;
	result->setCurrency(this->getCurrency());
	goto label_goto_19;
	// 5040    .line 945
	// 5041    nop
	// 5043    :pswitch_data_36
	// 5044    .packed-switch 0x0
	// 5045        :pswitch_15
	// 5046        :pswitch_29
	// 5047        :pswitch_24
	// 5048        :pswitch_1a
	// 5049        :pswitch_1f
	// 5050    .end packed-switch

}
// .method protected guessTerritory()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::GlobalizationPreferences::guessTerritory()
{
	
	std::shared_ptr<java::util::Iterator> locale_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<android::icu::util::ULocale> firstLocale;
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	locale_S_iterator = this->getLocales()->iterator();
	//    .local v3, "locale$iterator":Ljava/util/Iterator;
label_cond_9:
	if ( !(locale_S_iterator->hasNext()) )  
		goto label_cond_20;
	locale = locale_S_iterator->next();
	locale->checkCast("android::icu::util::ULocale");
	//    .local v2, "locale":Landroid/icu/util/ULocale;
	result = locale->getCountry();
	//    .local v4, "result":Ljava/lang/String;
	if ( !(result->length()) )  
		goto label_cond_9;
	return result;
	// 5099    .line 986
	// 5100    .end local v2    # "locale":Landroid/icu/util/ULocale;
	// 5101    .end local v4    # "result":Ljava/lang/String;
label_cond_20:
	firstLocale = this->getLocale(0x0);
	//    .local v0, "firstLocale":Landroid/icu/util/ULocale;
	language = firstLocale->getLanguage();
	//    .local v1, "language":Ljava/lang/String;
	script = firstLocale->getScript();
	//    .local v5, "script":Ljava/lang/String;
	result = 0x0;
	//    .local v4, "result":Ljava/lang/String;
	if ( !(script->length()) )  
		goto label_cond_53;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	result = android::icu::util::GlobalizationPreferences::language_territory_hack_map->get(cVar0->append(language)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(script)->toString());
	//    .end local v4    # "result":Ljava/lang/String;
	result->checkCast("java::lang::String");
label_cond_53:
	if ( result )     
		goto label_cond_5d;
	result = android::icu::util::GlobalizationPreferences::language_territory_hack_map->get(language);
	result->checkCast("java::lang::String");
label_cond_5d:
	if ( result )     
		goto label_cond_62;
label_cond_62:
	return result;

}
// .method protected guessTimeZone()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::GlobalizationPreferences::guessTimeZone()
{
	
	std::shared_ptr<java::lang::String> timezoneString;
	auto attempt;
	int i;
	
	timezoneString = android::icu::util::GlobalizationPreferences::territory_tzid_hack_map->get(this->getTerritory());
	timezoneString->checkCast("java::lang::String");
	//    .local v2, "timezoneString":Ljava/lang/String;
	if ( timezoneString )     
		goto label_cond_1c;
	attempt = android::icu::util::TimeZone::getAvailableIDs(this->getTerritory());
	//    .local v0, "attempt":[Ljava/lang/String;
	if ( attempt->size() )     
		goto label_cond_21;
	timezoneString = std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/GMT"));
	//    .end local v0    # "attempt":[Ljava/lang/String;
label_cond_1c:
label_goto_1c:
	return android::icu::util::TimeZone::getTimeZone(timezoneString);
	// 5237    .line 1101
	// 5238    .restart local v0    # "attempt":[Ljava/lang/String;
label_cond_21:
	i = 0x0;
	//    .local v1, "i":I
label_goto_22:
	if ( i >= attempt->size() )
		goto label_cond_30;
	if ( attempt[i]->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("/"))) < 0 ) 
		goto label_cond_37;
label_cond_30:
	if ( i <= attempt->size() )
		goto label_cond_34;
	i = 0x0;
label_cond_34:
	timezoneString = attempt[i];
	goto label_goto_1c;
	// 5273    .line 1101
label_cond_37:
	i = ( i + 0x1);
	goto label_goto_22;

}
// .method public isFrozen()Z
bool android::icu::util::GlobalizationPreferences::isFrozen()
{
	
	return this->frozen;

}
// .method protected processLocales(Ljava/util/List;)Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::util::ULocale>> android::icu::util::GlobalizationPreferences::processLocales(std::shared_ptr<java::util::List<android::icu::util::ULocale>> inputLocales)
{
	
	std::shared_ptr<java::util::ArrayList> result;
	int i;
	std::shared_ptr<android::icu::util::ULocale> uloc;
	std::shared_ptr<java::lang::Object> script;
	std::shared_ptr<java::lang::Object> country;
	int bInserted;
	int j;
	std::shared_ptr<android::icu::util::ULocale> u;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::String> c;
	std::shared_ptr<java::lang::String> v;
	int index;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 5293        value = {
	// 5294            "(",
	// 5295            "Ljava/util/List",
	// 5296            "<",
	// 5297            "Landroid/icu/util/ULocale;",
	// 5298            ">;)",
	// 5299            "Ljava/util/List",
	// 5300            "<",
	// 5301            "Landroid/icu/util/ULocale;",
	// 5302            ">;"
	// 5303        }
	// 5304    .end annotation
	//    .local p1, "inputLocales":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
	result = std::make_shared<java::util::ArrayList>();
	//    .local v9, "result":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
	i = 0x0;
	//    .local v5, "i":I
label_goto_6:
	if ( i >= inputLocales->size() )
		goto label_cond_c5;
	uloc = inputLocales->get(i);
	uloc->checkCast("android::icu::util::ULocale");
	//    .local v13, "uloc":Landroid/icu/util/ULocale;
	//    .local v8, "language":Ljava/lang/String;
	script = uloc->getScript();
	//    .local v11, "script":Ljava/lang/String;
	country = uloc->getCountry();
	//    .local v4, "country":Ljava/lang/String;
	//    .local v15, "variant":Ljava/lang/String;
	bInserted = 0x0;
	//    .local v1, "bInserted":Z
	j = 0x0;
	//    .local v7, "j":I
label_goto_28:
	if ( j >= result->size() )
		goto label_cond_6d;
	u = result->get(j);
	u->checkCast("android::icu::util::ULocale");
	//    .local v12, "u":Landroid/icu/util/ULocale;
	if ( u->getLanguage()->equals(uloc->getLanguage()) )     
		goto label_cond_45;
label_cond_42:
	j = ( j + 0x1);
	goto label_goto_28;
	// 5405    .line 813
label_cond_45:
	s = u->getScript();
	//    .local v10, "s":Ljava/lang/String;
	c = u->getCountry();
	//    .local v3, "c":Ljava/lang/String;
	v = u->getVariant();
	//    .local v14, "v":Ljava/lang/String;
	if ( s->equals(script) )     
		goto label_cond_9d;
	if ( s->length() )     
		goto label_cond_75;
	if ( c->length() )     
		goto label_cond_75;
	if ( v->length() )     
		goto label_cond_75;
	result->add(j, uloc);
	bInserted = 0x1;
	//    .end local v3    # "c":Ljava/lang/String;
	//    .end local v10    # "s":Ljava/lang/String;
	//    .end local v12    # "u":Landroid/icu/util/ULocale;
	//    .end local v14    # "v":Ljava/lang/String;
label_cond_6d:
label_goto_6d:
	if ( bInserted )     
		goto label_cond_72;
	result->add(uloc);
label_cond_72:
	i = ( i + 0x1);
	goto label_goto_6;
	// 5474    .line 821
	// 5475    .restart local v3    # "c":Ljava/lang/String;
	// 5476    .restart local v10    # "s":Ljava/lang/String;
	// 5477    .restart local v12    # "u":Landroid/icu/util/ULocale;
	// 5478    .restart local v14    # "v":Ljava/lang/String;
label_cond_75:
	if ( s->length() )     
		goto label_cond_86;
	if ( !(c->equals(country)) )  
		goto label_cond_86;
	result->add(j, uloc);
	bInserted = 0x1;
	goto label_goto_6d;
	// 5501    .line 826
label_cond_86:
	if ( script->length() )     
		goto label_cond_42;
	if ( country->length() <= 0 )
		goto label_cond_42;
	if ( c->length() )     
		goto label_cond_42;
	result->add(j, uloc);
	bInserted = 0x1;
	goto label_goto_6d;
	// 5530    .line 834
label_cond_9d:
	if ( c->equals(country) )     
		goto label_cond_b4;
	if ( c->length() )     
		goto label_cond_b4;
	if ( v->length() )     
		goto label_cond_b4;
	result->add(j, uloc);
	bInserted = 0x1;
	goto label_goto_6d;
	// 5560    .line 841
label_cond_b4:
	if ( v->equals(uloc->getVariant()) )     
		goto label_cond_42;
	if ( v->length() )     
		goto label_cond_42;
	result->add(j, uloc);
	bInserted = 0x1;
	goto label_goto_6d;
	// 5583    .line 864
	// 5584    .end local v1    # "bInserted":Z
	// 5585    .end local v3    # "c":Ljava/lang/String;
	// 5586    .end local v4    # "country":Ljava/lang/String;
	// 5587    .end local v7    # "j":I
	// 5588    .end local v8    # "language":Ljava/lang/String;
	// 5589    .end local v10    # "s":Ljava/lang/String;
	// 5590    .end local v11    # "script":Ljava/lang/String;
	// 5591    .end local v12    # "u":Landroid/icu/util/ULocale;
	// 5592    .end local v13    # "uloc":Landroid/icu/util/ULocale;
	// 5593    .end local v14    # "v":Ljava/lang/String;
	// 5594    .end local v15    # "variant":Ljava/lang/String;
label_cond_c5:
	index = 0x0;
	//    .local v6, "index":I
label_goto_c6:
	if ( index >= result->size() )
		goto label_cond_ed;
	uloc = result->get(index);
	uloc->checkCast("android::icu::util::ULocale");
	//    .restart local v13    # "uloc":Landroid/icu/util/ULocale;
label_goto_d4:
	uloc = uloc->getFallback();
	if ( !(uloc) )  
		goto label_cond_e4;
	if ( uloc->getLanguage()->length() )     
		goto label_cond_e7;
label_cond_e4:
	index = ( index + 0x1);
	goto label_goto_c6;
	// 5642    .line 871
label_cond_e7:
	index = ( index + 0x1);
	result->add(index, uloc);
	goto label_goto_d4;
	// 5651    .line 886
	// 5652    .end local v13    # "uloc":Landroid/icu/util/ULocale;
label_cond_ed:
	index = 0x0;
label_cond_ee:
label_goto_ee:
	if ( index >= ( result->size() + -0x1) )
		goto label_cond_121;
	uloc = result->get(index);
	uloc->checkCast("android::icu::util::ULocale");
	//    .restart local v13    # "uloc":Landroid/icu/util/ULocale;
	//    .local v2, "bRemoved":Z
	i = ( index + 0x1);
label_goto_101:
	if ( i >= result->size() )
		goto label_cond_119;
	if ( !(uloc->equals(result->get(i))) )  
		goto label_cond_11e;
	result->remove(index);
label_cond_119:
	if ( 0x0 )     
		goto label_cond_ee;
	index = ( index + 0x1);
	goto label_goto_ee;
	// 5721    .line 890
label_cond_11e:
	i = ( i + 0x1);
	goto label_goto_101;
	// 5727    .line 902
	// 5728    .end local v2    # "bRemoved":Z
	// 5729    .end local v13    # "uloc":Landroid/icu/util/ULocale;
label_cond_121:
	return result;

}
// .method public reset()Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::reset()
{
	
	std::shared_ptr<java::util::List> cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	
	cVar0 = 0x0;
	if ( !(this->isFrozen()) )  
		goto label_cond_10;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar1;
	// 5756    .line 736
label_cond_10:
	this->locales = cVar0;
	this->territory = cVar0;
	this->calendar = cVar0;
	this->collator = cVar0;
	this->breakIterators = cVar0;
	this->timezone = cVar0;
	this->currency = cVar0;
	this->dateFormats = cVar0;
	this->numberFormats = cVar0;
	this->implicitLocales = cVar0;
	return this;

}
// .method public setBreakIterator(ILandroid/icu/text/BreakIterator;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setBreakIterator(int type,std::shared_ptr<android::icu::text::BreakIterator> iterator)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar2;
	std::shared_ptr<android::icu::text::BreakIterator> cVar3;
	
	//    .param p1, "type"    # I
	//    .param p2, "iterator"    # Landroid/icu/text/BreakIterator;
	cVar0 = 0x5;
	if ( type < 0 ) 
		goto label_cond_5;
	if ( type <  cVar0 )
		goto label_cond_e;
label_cond_5:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal break iterator type")));
	// throw
	throw cVar1;
	// 5814    .line 518
label_cond_e:
	if ( !(this->isFrozen()) )  
		goto label_cond_1d;
	cVar2 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar2;
	// 5831    .line 521
label_cond_1d:
	if ( this->breakIterators )     
		goto label_cond_25;
	this->breakIterators = std::make_shared<std::vector<std::vector<android::icu::text::BreakIterator>>>(cVar0);
label_cond_25:
	cVar3 = iterator->clone();
	cVar3->checkCast("android::icu::text::BreakIterator");
	this->breakIterators[type] = cVar3;
	return this;

}
// .method public setCalendar(Landroid/icu/util/Calendar;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setCalendar(std::shared_ptr<android::icu::util::Calendar> calendar)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<android::icu::util::Calendar> cVar1;
	
	//    .param p1, "calendar"    # Landroid/icu/util/Calendar;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 5879    .line 404
label_cond_f:
	cVar1 = calendar->clone();
	cVar1->checkCast("android::icu::util::Calendar");
	this->calendar = cVar1;
	return this;

}
// .method public setCollator(Landroid/icu/text/Collator;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setCollator(std::shared_ptr<android::icu::text::Collator> collator)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar2;
	std::shared_ptr<android::icu::text::Collator> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "collator"    # Landroid/icu/text/Collator;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 5914    .line 481
label_cond_f:
	try {
	//label_try_start_f:
	cVar1 = collator->clone();
	cVar1->checkCast("android::icu::text::Collator");
	this->collator = cVar1;
	//label_try_end_17:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_18;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_f .. :try_end_17} :catch_18
	return this;
	// 5930    .line 482
label_catch_18:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar2 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error in cloning collator")), getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public setCurrency(Landroid/icu/util/Currency;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setCurrency(std::shared_ptr<android::icu::util::Currency> currency)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "currency"    # Landroid/icu/util/Currency;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 5966    .line 376
label_cond_f:
	this->currency = currency;
	return this;

}
// .method public setDateFormat(IILandroid/icu/text/DateFormat;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setDateFormat(int dateStyle,int timeStyle,std::shared_ptr<android::icu::text::DateFormat> format)
{
	
	int cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	std::shared_ptr<std::vector<std::vector<android::icu::text::DateFormat>>> cVar2;
	std::shared_ptr<android::icu::text::DateFormat> cVar3;
	
	//    .param p1, "dateStyle"    # I
	//    .param p2, "timeStyle"    # I
	//    .param p3, "format"    # Landroid/icu/text/DateFormat;
	cVar0 = 0x5;
	if ( !(this->isFrozen()) )  
		goto label_cond_10;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar1;
	// 5999    .line 643
label_cond_10:
	if ( this->dateFormats )     
		goto label_cond_22;
	?;
	cVar2 = java::lang::reflect::Array::newInstance(android::icu::text::DateFormat(), ?);
	cVar2->checkCast("std::vector<std::vector<android::icu::text::DateFormat>>");
	this->dateFormats = cVar2;
label_cond_22:
	cVar3 = format->clone();
	cVar3->checkCast("android::icu::text::DateFormat");
	this->dateFormats[dateStyle][timeStyle] = cVar3;
	return this;

}
// .method public setLocale(Landroid/icu/util/ULocale;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setLocale(std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared<std::vector<std::vector<android::icu::util::ULocale>>> cVar1;
	
	//    .param p1, "uLocale"    # Landroid/icu/util/ULocale;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 6059    .line 236
label_cond_f:
	cVar1 = std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(0x1);
	cVar1[0x0] = uLocale;
	return this->setLocales(cVar1);

}
// .method public setLocales(Ljava/lang/String;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setLocales(std::shared_ptr<java::lang::String> acceptLanguageString)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "acceptLanguageString"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 6097    .line 252
label_cond_f:
	0x0;
	//    .local v0, "acceptLocales":[Landroid/icu/util/ULocale;
	try {
	//label_try_start_11:
	//label_try_end_14:
	}
	catch (java::text::ParseException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a;
	}
	//    .catch Ljava/text/ParseException; {:try_start_11 .. :try_end_14} :catch_1a
	//    .local v0, "acceptLocales":[Landroid/icu/util/ULocale;
	return this->setLocales(android::icu::util::ULocale::parseAcceptLanguage(acceptLanguageString, 0x1));
	// 6120    .line 255
	// 6121    .local v0, "acceptLocales":[Landroid/icu/util/ULocale;
label_catch_1a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "pe":Ljava/text/ParseException;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Accept-Language string")));
	// throw
	throw cVar1;

}
// .method public setLocales(Ljava/util/List;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setLocales(std::shared_ptr<java::util::List<android::icu::util::ULocale>> inputLocales)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 6139        value = {
	// 6140            "(",
	// 6141            "Ljava/util/List",
	// 6142            "<",
	// 6143            "Landroid/icu/util/ULocale;",
	// 6144            ">;)",
	// 6145            "Landroid/icu/util/GlobalizationPreferences;"
	// 6146        }
	// 6147    .end annotation
	//    .local p1, "inputLocales":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/ULocale;>;"
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 6167    .line 169
label_cond_f:
	this->locales = this->processLocales(inputLocales);
	return this;

}
// .method public setLocales([Landroid/icu/util/ULocale;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setLocales(std::shared_ptr<std::vector<android::icu::util::ULocale>> uLocales)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "uLocales"    # [Landroid/icu/util/ULocale;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 6200    .line 220
label_cond_f:
	return this->setLocales(java::util::Arrays::asList(uLocales));

}
// .method public setNumberFormat(ILandroid/icu/text/NumberFormat;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setNumberFormat(int style,std::shared_ptr<android::icu::text::NumberFormat> format)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<android::icu::text::NumberFormat> cVar1;
	
	//    .param p1, "style"    # I
	//    .param p2, "format"    # Landroid/icu/text/NumberFormat;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 6235    .line 719
label_cond_f:
	if ( this->numberFormats )     
		goto label_cond_18;
	this->numberFormats = std::make_shared<std::vector<std::vector<android::icu::text::NumberFormat>>>(0x5);
label_cond_18:
	cVar1 = format->clone();
	cVar1->checkCast("android::icu::text::NumberFormat");
	this->numberFormats[style] = cVar1;
	return this;

}
// .method public setTerritory(Ljava/lang/String;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setTerritory(std::shared_ptr<java::lang::String> territory)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "territory"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 6285    .line 347
label_cond_f:
	this->territory = territory;
	return this;

}
// .method public setTimeZone(Landroid/icu/util/TimeZone;)Landroid/icu/util/GlobalizationPreferences;
std::shared_ptr<android::icu::util::GlobalizationPreferences> android::icu::util::GlobalizationPreferences::setTimeZone(std::shared_ptr<android::icu::util::TimeZone> timezone)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<android::icu::util::TimeZone> cVar1;
	
	//    .param p1, "timezone"    # Landroid/icu/util/TimeZone;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify immutable object")));
	// throw
	throw cVar0;
	// 6314    .line 435
label_cond_f:
	cVar1 = timezone->clone();
	cVar1->checkCast("android::icu::util::TimeZone");
	this->timezone = cVar1;
	return this;

}


