// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\GenderInfo.smali
#include "java2ctype.h"
#include "android.icu.util.GenderInfo_S_Cache.h"
#include "android.icu.util.GenderInfo_S_Gender.h"
#include "android.icu.util.GenderInfo_S_ListGenderStyle.h"
#include "android.icu.util.GenderInfo.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.util.Arrays.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"

static android::icu::util::GenderInfo::_android_icu_util_GenderInfo_S_GenderSwitchesValues;
static android::icu::util::GenderInfo::_android_icu_util_GenderInfo_S_ListGenderStyleSwitchesValues;
static android::icu::util::GenderInfo::genderInfoCache;
static android::icu::util::GenderInfo::neutral;
// .method static synthetic -get0()Landroid/icu/util/GenderInfo;
std::shared_ptr<android::icu::util::GenderInfo> android::icu::util::GenderInfo::_get0()
{
	
	return android::icu::util::GenderInfo::neutral;

}
// .method private static synthetic -getandroid-icu-util-GenderInfo$GenderSwitchesValues()[I
int android::icu::util::GenderInfo::_getandroid_icu_util_GenderInfo_S_GenderSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::util::GenderInfo::_android_icu_util_GenderInfo_S_GenderSwitchesValues) )  
		goto label_cond_7;
	return android::icu::util::GenderInfo::_android_icu_util_GenderInfo_S_GenderSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::util::GenderInfo_S_Gender::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::util::GenderInfo_S_Gender::FEMALE->ordinal()] = 0x1;
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
	cVar0[android::icu::util::GenderInfo_S_Gender::MALE->ordinal()] = 0x2;
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
	cVar0[android::icu::util::GenderInfo_S_Gender::OTHER->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_2c
label_goto_29:
	android::icu::util::GenderInfo::_android_icu_util_GenderInfo_S_GenderSwitchesValues = cVar0;
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
// .method private static synthetic -getandroid-icu-util-GenderInfo$ListGenderStyleSwitchesValues()[I
int android::icu::util::GenderInfo::_getandroid_icu_util_GenderInfo_S_ListGenderStyleSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::util::GenderInfo::_android_icu_util_GenderInfo_S_ListGenderStyleSwitchesValues) )  
		goto label_cond_7;
	return android::icu::util::GenderInfo::_android_icu_util_GenderInfo_S_ListGenderStyleSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::util::GenderInfo_S_ListGenderStyle::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::util::GenderInfo_S_ListGenderStyle::MALE_TAINTS->ordinal()] = 0x1;
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
	cVar0[android::icu::util::GenderInfo_S_ListGenderStyle::MIXED_NEUTRAL->ordinal()] = 0x2;
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
	cVar0[android::icu::util::GenderInfo_S_ListGenderStyle::NEUTRAL->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_2c
label_goto_29:
	android::icu::util::GenderInfo::_android_icu_util_GenderInfo_S_ListGenderStyleSwitchesValues = cVar0;
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
// .method static constructor <clinit>()V
void android::icu::util::GenderInfo::static_cinit()
{
	
	std::shared_ptr<android::icu::util::GenderInfo> cVar0;
	std::shared_ptr<android::icu::util::GenderInfo_S_Cache> cVar1;
	
	cVar0 = std::make_shared<android::icu::util::GenderInfo>(android::icu::util::GenderInfo_S_ListGenderStyle::NEUTRAL);
	android::icu::util::GenderInfo::neutral = cVar0;
	cVar1 = std::make_shared<android::icu::util::GenderInfo_S_Cache>(0x0);
	android::icu::util::GenderInfo::genderInfoCache = cVar1;
	return;

}
// .method public constructor <init>(Landroid/icu/util/GenderInfo$ListGenderStyle;)V
android::icu::util::GenderInfo::GenderInfo(std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> genderStyle)
{
	
	//    .param p1, "genderStyle"    # Landroid/icu/util/GenderInfo$ListGenderStyle;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 236    .end annotation
	// 240    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->style = genderStyle;
	return;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/util/GenderInfo;
std::shared_ptr<android::icu::util::GenderInfo> android::icu::util::GenderInfo::getInstance(std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	//    .param p0, "uLocale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 253    .end annotation
	return android::icu::util::GenderInfo::genderInfoCache->get(uLocale);

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/util/GenderInfo;
std::shared_ptr<android::icu::util::GenderInfo> android::icu::util::GenderInfo::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 270    .end annotation
	return android::icu::util::GenderInfo::getInstance(android::icu::util::ULocale::forLocale(locale));

}
// .method public getListGender(Ljava/util/List;)Landroid/icu/util/GenderInfo$Gender;
std::shared_ptr<android::icu::util::GenderInfo_S_Gender> android::icu::util::GenderInfo::getListGender(std::shared_ptr<java::util::List<android::icu::util::GenderInfo_S_Gender>> genders)
{
	
	std::shared_ptr<android::icu::util::GenderInfo_S_Gender> cVar0;
	std::shared_ptr<java::util::Iterator> gender_S_iterator;
	std::shared_ptr<android::icu::util::GenderInfo_S_Gender> gender;
	int hasMale;
	std::shared_ptr<android::icu::util::GenderInfo_S_Gender> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 290        value = {
	// 291            "(",
	// 292            "Ljava/util/List",
	// 293            "<",
	// 294            "Landroid/icu/util/GenderInfo$Gender;",
	// 295            ">;)",
	// 296            "Landroid/icu/util/GenderInfo$Gender;"
	// 297        }
	// 298    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 301    .end annotation
	//    .local p1, "genders":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/GenderInfo$Gender;>;"
	if ( genders->size() )     
		goto label_cond_a;
	return android::icu::util::GenderInfo_S_Gender::OTHER;
	// 319    .line 171
label_cond_a:
	if ( genders->size() != 0x1 )
		goto label_cond_18;
	cVar0 = genders->get(0x0);
	cVar0->checkCast("android::icu::util::GenderInfo_S_Gender");
	return cVar0;
	// 338    .line 174
label_cond_18:
	// switch
	{
	auto item = ( android::icu::util::GenderInfo::-getandroid-icu-util-GenderInfo$ListGenderStyleSwitchesValues({const[class].FS-Param})[this->style->ordinal()] );
	if (item == 1) goto label_pswitch_66;
	if (item == 2) goto label_pswitch_2d;
	if (item == 3) goto label_pswitch_2a;
	}
	return android::icu::util::GenderInfo_S_Gender::OTHER;
	// 359    .line 176
label_pswitch_2a:
	return android::icu::util::GenderInfo_S_Gender::OTHER;
	// 365    .line 178
label_pswitch_2d:
	//    .local v2, "hasFemale":Z
	hasMale = 0x0;
	//    .local v3, "hasMale":Z
	gender_S_iterator = genders->iterator();
	//    .local v1, "gender$iterator":Ljava/util/Iterator;
label_goto_33:
	if ( !(gender_S_iterator->hasNext()) )  
		goto label_cond_5e;
	gender = gender_S_iterator->next();
	gender->checkCast("android::icu::util::GenderInfo_S_Gender");
	//    .local v0, "gender":Landroid/icu/util/GenderInfo$Gender;
	// switch
	{
	auto item = ( android::icu::util::GenderInfo::-getandroid-icu-util-GenderInfo$GenderSwitchesValues({const[class].FS-Param})[gender->ordinal()] );
	if (item == 1) goto label_pswitch_4d;
	if (item == 2) goto label_pswitch_54;
	if (item == 3) goto label_pswitch_5b;
	}
	goto label_goto_33;
	// 409    .line 183
label_pswitch_4d:
	if ( !(hasMale) )  
		goto label_cond_52;
	return android::icu::util::GenderInfo_S_Gender::OTHER;
	// 418    .line 186
label_cond_52:
	0x1;
	goto label_goto_33;
	// 425    .line 189
label_pswitch_54:
	if ( !(0x0) )  
		goto label_cond_59;
	return android::icu::util::GenderInfo_S_Gender::OTHER;
	// 434    .line 192
label_cond_59:
	0x1;
	goto label_goto_33;
	// 441    .line 195
label_pswitch_5b:
	return android::icu::util::GenderInfo_S_Gender::OTHER;
	// 447    .line 198
	// 448    .end local v0    # "gender":Landroid/icu/util/GenderInfo$Gender;
label_cond_5e:
	if ( !(hasMale) )  
		goto label_cond_63;
	cVar1 = android::icu::util::GenderInfo_S_Gender::MALE;
label_goto_62:
	return cVar1;
label_cond_63:
	cVar1 = android::icu::util::GenderInfo_S_Gender::FEMALE;
	goto label_goto_62;
	// 462    .line 201
	// 463    .end local v1    # "gender$iterator":Ljava/util/Iterator;
	// 464    .end local v2    # "hasFemale":Z
	// 465    .end local v3    # "hasMale":Z
label_pswitch_66:
	gender_S_iterator = genders->iterator();
	//    .restart local v1    # "gender$iterator":Ljava/util/Iterator;
label_cond_6a:
	if ( !(gender_S_iterator->hasNext()) )  
		goto label_cond_7d;
	gender = gender_S_iterator->next();
	gender->checkCast("android::icu::util::GenderInfo_S_Gender");
	//    .restart local v0    # "gender":Landroid/icu/util/GenderInfo$Gender;
	if ( gender == android::icu::util::GenderInfo_S_Gender::FEMALE )
		goto label_cond_6a;
	return android::icu::util::GenderInfo_S_Gender::MALE;
	// 496    .line 206
	// 497    .end local v0    # "gender":Landroid/icu/util/GenderInfo$Gender;
label_cond_7d:
	return android::icu::util::GenderInfo_S_Gender::FEMALE;
	// 503    .line 174
	// 504    :pswitch_data_80
	// 505    .packed-switch 0x1
	// 506        :pswitch_66
	// 507        :pswitch_2d
	// 508        :pswitch_2a
	// 509    .end packed-switch
	// 511    .line 181
	// 512    :pswitch_data_8a
	// 513    .packed-switch 0x1
	// 514        :pswitch_4d
	// 515        :pswitch_54
	// 516        :pswitch_5b
	// 517    .end packed-switch

}
// .method public varargs getListGender([Landroid/icu/util/GenderInfo$Gender;)Landroid/icu/util/GenderInfo$Gender;
std::shared_ptr<android::icu::util::GenderInfo_S_Gender> android::icu::util::GenderInfo::getListGender(std::shared_ptr<std::vector<android::icu::util::GenderInfo_S_Gender>> genders)
{
	
	//    .param p1, "genders"    # [Landroid/icu/util/GenderInfo$Gender;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 524    .end annotation
	return this->getListGender(java::util::Arrays::asList(genders));

}


