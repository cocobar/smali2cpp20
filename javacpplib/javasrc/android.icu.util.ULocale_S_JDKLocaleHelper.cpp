// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$JDKLocaleHelper.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleIDParser.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_JDKLocaleHelper_S_1.h"
#include "android.icu.util.ULocale_S_JDKLocaleHelper.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.NoSuchMethodException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.SecurityException.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.lang.reflect.Method.h"
#include "java.security.AccessControlException.h"
#include "java.security.AccessController.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"
#include "java.util.TreeSet.h"

static android::icu::util::ULocale_S_JDKLocaleHelper::_android_icu_util_ULocale_S_CategorySwitchesValues;
static android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA;
static android::icu::util::ULocale_S_JDKLocaleHelper::eDISPLAY;
static android::icu::util::ULocale_S_JDKLocaleHelper::eFORMAT;
static android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories;
static android::icu::util::ULocale_S_JDKLocaleHelper::hasScriptsAndUnicodeExtensions;
static android::icu::util::ULocale_S_JDKLocaleHelper::mForLanguageTag;
static android::icu::util::ULocale_S_JDKLocaleHelper::mGetDefault;
static android::icu::util::ULocale_S_JDKLocaleHelper::mGetExtension;
static android::icu::util::ULocale_S_JDKLocaleHelper::mGetExtensionKeys;
static android::icu::util::ULocale_S_JDKLocaleHelper::mGetScript;
static android::icu::util::ULocale_S_JDKLocaleHelper::mGetUnicodeLocaleAttributes;
static android::icu::util::ULocale_S_JDKLocaleHelper::mGetUnicodeLocaleKeys;
static android::icu::util::ULocale_S_JDKLocaleHelper::mGetUnicodeLocaleType;
static android::icu::util::ULocale_S_JDKLocaleHelper::mSetDefault;
// .method private static synthetic -getandroid-icu-util-ULocale$CategorySwitchesValues()[I
int android::icu::util::ULocale_S_JDKLocaleHelper::_getandroid_icu_util_ULocale_S_CategorySwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::_android_icu_util_ULocale_S_CategorySwitchesValues) )  
		goto label_cond_7;
	return android::icu::util::ULocale_S_JDKLocaleHelper::_android_icu_util_ULocale_S_CategorySwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::util::ULocale_S_Category::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::util::ULocale_S_Category::DISPLAY->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_25
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::util::ULocale_S_Category::FORMAT->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_23
label_goto_20:
	android::icu::util::ULocale_S_JDKLocaleHelper::_android_icu_util_ULocale_S_CategorySwitchesValues = cVar0;
	return cVar0;
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_25:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void android::icu::util::ULocale_S_JDKLocaleHelper::static_cinit()
{
	
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar1;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar2;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar3;
	std::shared_ptr<java::lang::Class> cCategory;
	auto classes;
	int cVar11;
	std::shared_ptr<java::lang::Class> c;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar13;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar14;
	std::shared_ptr<std::vector<java::lang::Class>> cVar15;
	auto enumConstants;
	int cVar16;
	std::shared_ptr<java::lang::Object> e;
	std::shared_ptr<std::vector<java::lang::Object>> cVar17;
	std::shared_ptr<java::lang::String> catVal;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<std::vector<java::lang::Class>> cVar4;
	std::shared_ptr<std::vector<java::lang::Class>> cVar5;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar6;
	std::shared_ptr<std::vector<java::lang::Class>> cVar7;
	std::shared_ptr<std::vector<java::lang::Class>> cVar8;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar9;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar10;
	
	android::icu::util::ULocale_S_JDKLocaleHelper::hasScriptsAndUnicodeExtensions = 0x0;
	android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories = 0x0;
	cVar0 = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0x3);
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x5);
	cVar1[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ja_JP_JP"));
	cVar1[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ja_JP"));
	cVar1[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar"));
	cVar1[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese"));
	cVar1[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ja"));
	cVar0[0x0] = cVar1;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x5);
	cVar2[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("no_NO_NY"));
	cVar2[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nn_NO"));
	cVar2[0x2] = 0x0;
	cVar2[0x3] = 0x0;
	cVar2[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nn"));
	cVar0[0x1] = cVar2;
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x5);
	cVar3[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("th_TH_TH"));
	cVar3[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("th_TH"));
	cVar3[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("numbers"));
	cVar3[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("thai"));
	cVar3[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("th"));
	cVar0[0x2] = cVar3;
	android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA = cVar0;
	try {
	//label_try_start_73:
	cVar4 = 0x0;
	cVar4->checkCast("std::vector<java::lang::Class>");
	android::icu::util::ULocale_S_JDKLocaleHelper::mGetScript = java::util::Locale()->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("getScript")), cVar4);
	cVar5 = 0x0;
	cVar5->checkCast("std::vector<java::lang::Class>");
	android::icu::util::ULocale_S_JDKLocaleHelper::mGetExtensionKeys = java::util::Locale()->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("getExtensionKeys")), cVar5);
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	cVar6[0x0] = java::lang::Character::TYPE;
	android::icu::util::ULocale_S_JDKLocaleHelper::mGetExtension = java::util::Locale()->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("getExtension")), cVar6);
	cVar7 = 0x0;
	cVar7->checkCast("std::vector<java::lang::Class>");
	android::icu::util::ULocale_S_JDKLocaleHelper::mGetUnicodeLocaleKeys = java::util::Locale()->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("getUnicodeLocaleKeys")), cVar7);
	cVar8 = 0x0;
	cVar8->checkCast("std::vector<java::lang::Class>");
	android::icu::util::ULocale_S_JDKLocaleHelper::mGetUnicodeLocaleAttributes = java::util::Locale()->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("getUnicodeLocaleAttributes")), cVar8);
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	cVar9[0x0] = java::lang::String();
	android::icu::util::ULocale_S_JDKLocaleHelper::mGetUnicodeLocaleType = java::util::Locale()->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("getUnicodeLocaleType")), cVar9);
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	cVar10[0x0] = java::lang::String();
	android::icu::util::ULocale_S_JDKLocaleHelper::mForLanguageTag = java::util::Locale()->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("forLanguageTag")), cVar10);
	android::icu::util::ULocale_S_JDKLocaleHelper::hasScriptsAndUnicodeExtensions = 0x1;
	//label_try_end_ea:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_182;
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_185;
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_188;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_73 .. :try_end_ea} :catch_182
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_73 .. :try_end_ea} :catch_185
	//    .catch Ljava/lang/SecurityException; {:try_start_73 .. :try_end_ea} :catch_188
	//    .local v8, "e":Ljava/lang/SecurityException;
label_goto_ea:
	cCategory = 0x0;
	//    .end local v8    # "e":Ljava/lang/SecurityException;
	//    .local v1, "cCategory":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	try {
	//label_try_start_eb:
	classes = java::util::Locale()->getDeclaredClasses();
	//    .local v3, "classes":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	cVar11 = 0x0;
label_goto_f3:
	if ( cVar11 >= classes->size() )
		goto label_cond_105;
	c = classes[cVar11];
	//    .local v0, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(c->getName()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.util.Locale$Category")))) )  
		goto label_cond_108;
	cCategory = c;
	//    .end local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .end local v1    # "cCategory":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_105:
	if ( cCategory )     
		goto label_cond_10b;
label_cond_107:
label_goto_107:
	return;
	// 439    .line 3937
	// 440    .restart local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 441    .restart local v1    # "cCategory":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_108:
	cVar11 = ( cVar11 + 0x1);
	goto label_goto_f3;
	// 447    .line 3946
	// 448    .end local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 449    .end local v1    # "cCategory":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_10b:
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	cVar13[0x0] = cCategory;
	android::icu::util::ULocale_S_JDKLocaleHelper::mGetDefault = java::util::Locale()->getDeclaredMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("getDefault")), cVar13);
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x2);
	cVar14[0x0] = cCategory;
	cVar14[0x1] = java::util::Locale();
	android::icu::util::ULocale_S_JDKLocaleHelper::mSetDefault = java::util::Locale()->getDeclaredMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("setDefault")), cVar14);
	cVar15 = 0x0;
	cVar15->checkCast("std::vector<java::lang::Class>");
	//    .local v11, "mName":Ljava/lang/reflect/Method;
	enumConstants = cCategory->getEnumConstants();
	//    .local v10, "enumConstants":[Ljava/lang/Object;
	cVar16 = 0x0;
label_goto_144:
	if ( cVar16 >= enumConstants->size() )
		goto label_cond_16e;
	e = enumConstants[cVar16];
	//    .local v7, "e":Ljava/lang/Object;
	cVar17 = 0x0;
	cVar17->checkCast("std::vector<java::lang::Object>");
	catVal = cCategory->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("name")), cVar15)->invoke(e, cVar17);
	catVal->checkCast("java::lang::String");
	//    .local v2, "catVal":Ljava/lang/String;
	if ( !(catVal->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("DISPLAY")))) )  
		goto label_cond_160;
	android::icu::util::ULocale_S_JDKLocaleHelper::eDISPLAY = e;
label_cond_15c:
label_goto_15c:
	cVar16 = ( cVar16 + 0x1);
	goto label_goto_144;
	// 558    .line 3955
label_cond_160:
	if ( !(catVal->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("FORMAT")))) )  
		goto label_cond_15c;
	android::icu::util::ULocale_S_JDKLocaleHelper::eFORMAT = e;
	goto label_goto_15c;
	// 573    .line 3964
	// 574    .end local v2    # "catVal":Ljava/lang/String;
	// 575    .end local v7    # "e":Ljava/lang/Object;
	// 576    .end local v10    # "enumConstants":[Ljava/lang/Object;
	// 577    .end local v11    # "mName":Ljava/lang/reflect/Method;
label_catch_16c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "e":Ljava/lang/NoSuchMethodException;
	goto label_goto_107;
	// 584    .line 3959
	// 585    .end local v6    # "e":Ljava/lang/NoSuchMethodException;
	// 586    .restart local v10    # "enumConstants":[Ljava/lang/Object;
	// 587    .restart local v11    # "mName":Ljava/lang/reflect/Method;
label_cond_16e:
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::eDISPLAY) )  
		goto label_cond_107;
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::eFORMAT) )  
		goto label_cond_107;
	android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories = 0x1;
	//label_try_end_179:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16c;
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17a;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17c;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17e;
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_180;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_eb .. :try_end_179} :catch_16c
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_eb .. :try_end_179} :catch_17a
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_eb .. :try_end_179} :catch_17c
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_eb .. :try_end_179} :catch_17e
	//    .catch Ljava/lang/SecurityException; {:try_start_eb .. :try_end_179} :catch_180
	goto label_goto_107;
	// 610    .line 3965
	// 611    .end local v10    # "enumConstants":[Ljava/lang/Object;
	// 612    .end local v11    # "mName":Ljava/lang/reflect/Method;
label_catch_17a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "e":Ljava/lang/IllegalArgumentException;
	goto label_goto_107;
	// 619    .line 3966
	// 620    .end local v5    # "e":Ljava/lang/IllegalArgumentException;
label_catch_17c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/lang/IllegalAccessException;
	goto label_goto_107;
	// 627    .line 3967
	// 628    .end local v4    # "e":Ljava/lang/IllegalAccessException;
label_catch_17e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v9, "e":Ljava/lang/reflect/InvocationTargetException;
	goto label_goto_107;
	// 635    .line 3968
	// 636    .end local v9    # "e":Ljava/lang/reflect/InvocationTargetException;
label_catch_180:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v8    # "e":Ljava/lang/SecurityException;
	goto label_goto_107;
	// 643    .line 3928
	// 644    .end local v3    # "classes":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	// 645    .end local v8    # "e":Ljava/lang/SecurityException;
label_catch_182:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v6    # "e":Ljava/lang/NoSuchMethodException;
	goto label_goto_ea;
	// 652    .line 3929
	// 653    .end local v6    # "e":Ljava/lang/NoSuchMethodException;
label_catch_185:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "e":Ljava/lang/IllegalArgumentException;
	goto label_goto_ea;
	// 660    .line 3930
	// 661    .end local v5    # "e":Ljava/lang/IllegalArgumentException;
label_catch_188:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v8    # "e":Ljava/lang/SecurityException;
	goto label_goto_ea;

}
// .method private constructor <init>()V
android::icu::util::ULocale_S_JDKLocaleHelper::ULocale_S_JDKLocaleHelper()
{
	
	// 674    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getDefault(Landroid/icu/util/ULocale$Category;)Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::util::ULocale_S_JDKLocaleHelper::getDefault(std::shared_ptr<android::icu::util::ULocale_S_Category> category)
{
	
	std::shared_ptr<java::util::Locale> loc;
	int cat;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::shared_ptr<java::util::Locale> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> cat;
	
	//    .param p0, "category"    # Landroid/icu/util/ULocale$Category;
	loc = java::util::Locale::getDefault({const[class].FS-Param});
	//    .local v5, "loc":Ljava/util/Locale;
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories) )  
		goto label_cond_29;
	cat = 0x0;
	//    .local v1, "cat":Ljava/lang/Object;
	// switch
	{
	auto item = ( android::icu::util::ULocale_S_JDKLocaleHelper::-getandroid-icu-util-ULocale$CategorySwitchesValues({const[class].FS-Param})[category->ordinal()] );
	if (item == 1) goto label_pswitch_2a;
	if (item == 2) goto label_pswitch_2d;
	}
	//    .end local v1    # "cat":Ljava/lang/Object;
label_goto_16:
	if ( !(cat) )  
		goto label_cond_29;
	try {
	//label_try_start_18:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar0[0x0] = cat;
	cVar1 = android::icu::util::ULocale_S_JDKLocaleHelper::mGetDefault->invoke(0x0, cVar0);
	cVar1->checkCast("java::util::Locale");
	loc = cVar1;
	//label_try_end_29:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_32;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_34;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_18 .. :try_end_29} :catch_30
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_18 .. :try_end_29} :catch_32
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_18 .. :try_end_29} :catch_34
label_cond_29:
label_goto_29:
	return loc;
	// 751    .line 4213
	// 752    .restart local v1    # "cat":Ljava/lang/Object;
label_pswitch_2a:
	cat = android::icu::util::ULocale_S_JDKLocaleHelper::eDISPLAY;
	goto label_goto_16;
	// 758    .line 4216
label_pswitch_2d:
	cat = android::icu::util::ULocale_S_JDKLocaleHelper::eFORMAT;
	goto label_goto_16;
	// 764    .line 4222
	// 765    .end local v1    # "cat":Ljava/lang/Object;
label_catch_30:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/lang/reflect/InvocationTargetException;
	goto label_goto_29;
	// 772    .line 4224
	// 773    .end local v4    # "e":Ljava/lang/reflect/InvocationTargetException;
label_catch_32:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/lang/IllegalArgumentException;
	goto label_goto_29;
	// 780    .line 4226
	// 781    .end local v3    # "e":Ljava/lang/IllegalArgumentException;
label_catch_34:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/IllegalAccessException;
	goto label_goto_29;
	// 788    .line 4211
	// 789    :pswitch_data_36
	// 790    .packed-switch 0x1
	// 791        :pswitch_2a
	// 792        :pswitch_2d
	// 793    .end packed-switch

}
// .method public static getSystemProperty(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale_S_JDKLocaleHelper::getSystemProperty(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<java::lang::String> val;
	std::shared_ptr<android::icu::util::ULocale_S_JDKLocaleHelper_S_1> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "key"    # Ljava/lang/String;
	val = 0x0;
	//    .local v3, "val":Ljava/lang/String;
	key;
	//    .local v2, "fkey":Ljava/lang/String;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_16;
	try {
	//label_try_start_8:
	cVar0 = std::make_shared<android::icu::util::ULocale_S_JDKLocaleHelper_S_1>(key);
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::lang::String");
	val = cVar1;
	//label_try_end_15:
	}
	catch (java::security::AccessControlException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	//    .catch Ljava/security/AccessControlException; {:try_start_8 .. :try_end_15} :catch_1b
	//    .end local v3    # "val":Ljava/lang/String;
label_goto_15:
	return val;
	// 839    .line 4297
	// 840    .restart local v3    # "val":Ljava/lang/String;
label_cond_16:
	val = java::lang::System::getProperty(key);
	//    .local v3, "val":Ljava/lang/String;
	goto label_goto_15;
	// 849    .line 4293
	// 850    .local v3, "val":Ljava/lang/String;
label_catch_1b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/AccessControlException;
	goto label_goto_15;

}
// .method public static hasLocaleCategories()Z
bool android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories()
{
	
	return android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories;

}
// .method public static isOriginalDefaultLocale(Ljava/util/Locale;)Z
bool android::icu::util::ULocale_S_JDKLocaleHelper::isOriginalDefaultLocale(std::shared_ptr<java::util::Locale> loc)
{
	
	bool cVar4;
	std::shared_ptr<std::vector<java::lang::Object>> cVar1;
	std::shared_ptr<java::lang::String> script;
	std::vector<std::any> tryCatchExcetionList;
	bool cVar2;
	
	//    .param p0, "loc"    # Ljava/util/Locale;
	cVar4 = 0x0;
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::hasScriptsAndUnicodeExtensions) )  
		goto label_cond_56;
	std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v1, "script":Ljava/lang/String;
	try {
	//label_try_start_8:
	cVar1 = 0x0;
	cVar1->checkCast("std::vector<java::lang::Object>");
	script = android::icu::util::ULocale_S_JDKLocaleHelper::mGetScript->invoke(loc, cVar1);
	//    .end local v1    # "script":Ljava/lang/String;
	script->checkCast("java::lang::String");
	//label_try_end_13:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_52;
	}
	//    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_13} :catch_52
	//    .restart local v1    # "script":Ljava/lang/String;
	if ( !(loc->getLanguage()->equals(android::icu::util::ULocale_S_JDKLocaleHelper::getSystemProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.language"))))) )  
		goto label_cond_54;
	if ( !(loc->getCountry()->equals(android::icu::util::ULocale_S_JDKLocaleHelper::getSystemProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.country"))))) )  
		goto label_cond_54;
	if ( !(loc->getVariant()->equals(android::icu::util::ULocale_S_JDKLocaleHelper::getSystemProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.variant"))))) )  
		goto label_cond_54;
	cVar2 = script->equals(android::icu::util::ULocale_S_JDKLocaleHelper::getSystemProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.script"))));
label_goto_51:
	return cVar2;
	// 970    .line 4268
	// 971    .end local v1    # "script":Ljava/lang/String;
label_catch_52:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar4;
	// 979    .end local v0    # "e":Ljava/lang/Exception;
	// 980    .restart local v1    # "script":Ljava/lang/String;
label_cond_54:
	cVar2 = cVar4;
	goto label_goto_51;
	// 987    .line 4277
	// 988    .end local v1    # "script":Ljava/lang/String;
label_cond_56:
	if ( !(loc->getLanguage()->equals(android::icu::util::ULocale_S_JDKLocaleHelper::getSystemProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.language"))))) )  
		goto label_cond_87;
	if ( !(loc->getCountry()->equals(android::icu::util::ULocale_S_JDKLocaleHelper::getSystemProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.country"))))) )  
		goto label_cond_87;
	cVar4 = loc->getVariant()->equals(android::icu::util::ULocale_S_JDKLocaleHelper::getSystemProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.variant"))));
label_cond_87:
	return cVar4;

}
// .method public static setDefault(Landroid/icu/util/ULocale$Category;Ljava/util/Locale;)V
void android::icu::util::ULocale_S_JDKLocaleHelper::setDefault(std::shared_ptr<android::icu::util::ULocale_S_Category> category,std::shared_ptr<java::util::Locale> newLocale)
{
	
	int cat;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> cat;
	
	//    .param p0, "category"    # Landroid/icu/util/ULocale$Category;
	//    .param p1, "newLocale"    # Ljava/util/Locale;
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories) )  
		goto label_cond_23;
	cat = 0x0;
	//    .local v0, "cat":Ljava/lang/Object;
	// switch
	{
	auto item = ( android::icu::util::ULocale_S_JDKLocaleHelper::-getandroid-icu-util-ULocale$CategorySwitchesValues({const[class].FS-Param})[category->ordinal()] );
	if (item == 1) goto label_pswitch_24;
	if (item == 2) goto label_pswitch_27;
	}
	//    .end local v0    # "cat":Ljava/lang/Object;
label_goto_12:
	if ( !(cat) )  
		goto label_cond_23;
	try {
	//label_try_start_14:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar0[0x0] = cat;
	cVar0[0x1] = newLocale;
	android::icu::util::ULocale_S_JDKLocaleHelper::mSetDefault->invoke(0x0, cVar0);
	//label_try_end_23:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_14 .. :try_end_23} :catch_2a
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_14 .. :try_end_23} :catch_2c
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_14 .. :try_end_23} :catch_2e
label_cond_23:
label_goto_23:
	return;
	// 1106    .line 4239
	// 1107    .restart local v0    # "cat":Ljava/lang/Object;
label_pswitch_24:
	cat = android::icu::util::ULocale_S_JDKLocaleHelper::eDISPLAY;
	goto label_goto_12;
	// 1113    .line 4242
label_pswitch_27:
	cat = android::icu::util::ULocale_S_JDKLocaleHelper::eFORMAT;
	goto label_goto_12;
	// 1119    .line 4248
	// 1120    .end local v0    # "cat":Ljava/lang/Object;
label_catch_2a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/lang/reflect/InvocationTargetException;
	goto label_goto_23;
	// 1127    .line 4250
	// 1128    .end local v3    # "e":Ljava/lang/reflect/InvocationTargetException;
label_catch_2c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/IllegalArgumentException;
	goto label_goto_23;
	// 1135    .line 4252
	// 1136    .end local v2    # "e":Ljava/lang/IllegalArgumentException;
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/IllegalAccessException;
	goto label_goto_23;
	// 1143    .line 4237
	// 1144    :pswitch_data_30
	// 1145    .packed-switch 0x1
	// 1146        :pswitch_24
	// 1147        :pswitch_27
	// 1148    .end packed-switch

}
// .method public static toLocale(Landroid/icu/util/ULocale;)Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::util::ULocale_S_JDKLocaleHelper::toLocale(std::shared_ptr<android::icu::util::ULocale> uloc)
{
	
	std::shared_ptr<java::util::Locale> cVar0;
	
	//    .param p0, "uloc"    # Landroid/icu/util/ULocale;
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::hasScriptsAndUnicodeExtensions) )  
		goto label_cond_9;
	cVar0 = android::icu::util::ULocale_S_JDKLocaleHelper::toLocale7(uloc);
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = android::icu::util::ULocale_S_JDKLocaleHelper::toLocale6(uloc);
	goto label_goto_8;

}
// .method private static toLocale6(Landroid/icu/util/ULocale;)Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::util::ULocale_S_JDKLocaleHelper::toLocale6(std::shared_ptr<android::icu::util::ULocale> uloc)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::String> locstr;
	int i;
	std::shared_ptr<java::lang::String> val;
	std::shared_ptr<android::icu::impl::LocaleIDParser> p;
	auto names;
	std::shared_ptr<java::util::Locale> cVar3;
	
	//    .param p0, "uloc"    # Landroid/icu/util/ULocale;
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x0;
	locstr = uloc->getBaseName();
	//    .local v1, "locstr":Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_8:
	if ( i >= android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA->size() )
		goto label_cond_4d;
	if ( locstr->equals(android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][0x1]) )     
		goto label_cond_27;
	if ( !(locstr->equals(android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][0x4])) )  
		goto label_cond_69;
label_cond_27:
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][cVar1]) )  
		goto label_cond_62;
	val = uloc->getKeywordValue(android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][cVar1]);
	//    .local v4, "val":Ljava/lang/String;
	if ( !(val) )  
		goto label_cond_69;
	if ( !(val->equals(android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][cVar0])) )  
		goto label_cond_69;
	locstr = android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][cVar2];
	//    .end local v4    # "val":Ljava/lang/String;
label_cond_4d:
label_goto_4d:
	p = std::make_shared<android::icu::impl::LocaleIDParser>(locstr);
	//    .local v3, "p":Landroid/icu/impl/LocaleIDParser;
	names = p->getLanguageScriptCountryVariant();
	//    .local v2, "names":[Ljava/lang/String;
	cVar3 = std::make_shared<java::util::Locale>(names[cVar2], names[cVar1], names[cVar0]);
	return cVar3;
	// 1305    .line 4197
	// 1306    .end local v2    # "names":[Ljava/lang/String;
	// 1307    .end local v3    # "p":Landroid/icu/impl/LocaleIDParser;
label_cond_62:
	locstr = android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][cVar2];
	goto label_goto_4d;
	// 1317    .line 4188
label_cond_69:
	i = ( i + 0x1);
	goto label_goto_8;

}
// .method private static toLocale7(Landroid/icu/util/ULocale;)Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::util::ULocale_S_JDKLocaleHelper::toLocale7(std::shared_ptr<android::icu::util::ULocale> uloc)
{
	
	std::shared_ptr<java::util::Locale> loc;
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "uloc"    # Landroid/icu/util/ULocale;
	loc = 0x0;
	//    .local v2, "loc":Ljava/util/Locale;
	//    .local v4, "ulocStr":Ljava/lang/String;
	if ( uloc->getScript()->length() > 0 ) 
		goto label_cond_18;
	if ( !(uloc->getName()->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("@")))) )  
		goto label_cond_2f;
label_cond_18:
	//    .local v3, "tag":Ljava/lang/String;
	try {
	//label_try_start_20:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar0[0x0] = android::icu::impl::locale::AsciiUtil::toUpperString(uloc->toLanguageTag());
	loc = android::icu::util::ULocale_S_JDKLocaleHelper::mForLanguageTag->invoke(0x0, cVar0);
	//    .end local v2    # "loc":Ljava/util/Locale;
	loc->checkCast("java::util::Locale");
	//label_try_end_2f:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_43;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_20 .. :try_end_2f} :catch_4a
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_20 .. :try_end_2f} :catch_43
	//    .end local v3    # "tag":Ljava/lang/String;
label_cond_2f:
	if ( loc )     
		goto label_cond_42;
	loc = std::make_shared<java::util::Locale>(uloc->getLanguage(), uloc->getCountry(), uloc->getVariant());
label_cond_42:
	return loc;
	// 1420    .line 4174
	// 1421    .restart local v3    # "tag":Ljava/lang/String;
label_catch_43:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/reflect/InvocationTargetException;
	cVar1 = std::make_shared<java::lang::RuntimeException>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 1433    .line 4172
	// 1434    .end local v1    # "e":Ljava/lang/reflect/InvocationTargetException;
label_catch_4a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalAccessException;
	cVar2 = std::make_shared<java::lang::RuntimeException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public static toULocale(Ljava/util/Locale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale_S_JDKLocaleHelper::toULocale(std::shared_ptr<java::util::Locale> loc)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "loc"    # Ljava/util/Locale;
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::hasScriptsAndUnicodeExtensions) )  
		goto label_cond_9;
	cVar0 = android::icu::util::ULocale_S_JDKLocaleHelper::toULocale7(loc);
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = android::icu::util::ULocale_S_JDKLocaleHelper::toULocale6(loc);
	goto label_goto_8;

}
// .method private static toULocale6(Ljava/util/Locale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale_S_JDKLocaleHelper::toULocale6(std::shared_ptr<java::util::Locale> loc)
{
	
	std::shared_ptr<java::lang::String> locStr;
	int i;
	std::shared_ptr<android::icu::impl::LocaleIDParser> p;
	std::shared_ptr<android::icu::util::ULocale> uloc;
	
	//    .param p0, "loc"    # Ljava/util/Locale;
	0x0;
	//    .local v3, "uloc":Landroid/icu/util/ULocale;
	locStr = loc->toString();
	//    .local v1, "locStr":Ljava/lang/String;
	if ( locStr->length() )     
		goto label_cond_f;
	//    .local v3, "uloc":Landroid/icu/util/ULocale;
label_goto_e:
	return uloc;
	// 1504    .line 4132
	// 1505    .local v3, "uloc":Landroid/icu/util/ULocale;
label_cond_f:
	i = 0x0;
	//    .local v0, "i":I
label_goto_10:
	if ( i >= android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA->size() )
		goto label_cond_42;
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][0x0]->equals(locStr)) )  
		goto label_cond_4d;
	p = std::make_shared<android::icu::impl::LocaleIDParser>(android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][0x1]);
	//    .local v2, "p":Landroid/icu/impl/LocaleIDParser;
	p->setKeywordValue(android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][0x2], android::icu::util::ULocale_S_JDKLocaleHelper::JAVA6_MAPDATA[i][0x3]);
	//    .end local v2    # "p":Landroid/icu/impl/LocaleIDParser;
label_cond_42:
	//    .end local v3    # "uloc":Landroid/icu/util/ULocale;
	uloc = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::getName(locStr), loc, 0x0);
	//    .local v3, "uloc":Landroid/icu/util/ULocale;
	goto label_goto_e;
	// 1585    .line 4132
	// 1586    .local v3, "uloc":Landroid/icu/util/ULocale;
label_cond_4d:
	i = ( i + 0x1);
	goto label_goto_10;

}
// .method private static toULocale7(Ljava/util/Locale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale_S_JDKLocaleHelper::toULocale7(std::shared_ptr<java::util::Locale> loc)
{
	
	auto language;
	std::shared_ptr<java::lang::String> country;
	std::shared_ptr<java::lang::String> variant;
	int attributes;
	int keywords;
	std::shared_ptr<java::lang::RuntimeException> cVar4;
	std::shared_ptr<java::lang::RuntimeException> cVar9;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<std::vector<java::lang::Object>> cVar2;
	std::shared_ptr<java::util::Set> extKeys;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Iterator> extKey_S_iterator;
	auto keywords;
	auto attributes;
	std::shared_ptr<java::lang::Character> extKey;
	std::shared_ptr<std::vector<java::lang::Object>> cVar3;
	std::shared_ptr<java::util::Set> uAttributes;
	std::shared_ptr<java::util::TreeSet> attributes;
	std::shared_ptr<java::util::Iterator> attr_S_iterator;
	std::shared_ptr<java::lang::String> attr;
	std::shared_ptr<std::vector<java::lang::Object>> cVar5;
	std::shared_ptr<java::util::Set> uKeys;
	std::shared_ptr<java::util::Iterator> kwKey_S_iterator;
	std::shared_ptr<java::lang::String> kwKey;
	std::shared_ptr<java::lang::Object> cVar6;
	std::shared_ptr<java::lang::String> kwVal;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::util::TreeMap> keywords;
	std::shared_ptr<java::lang::Object> cVar8;
	std::shared_ptr<java::lang::String> extVal;
	std::shared_ptr<java::lang::Iterable> attributes;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::StringBuilder> attrBuf;
	int addSep;
	std::shared_ptr<java::util::Iterator> kwEntry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> kwEntry;
	auto kwKey;
	std::shared_ptr<android::icu::util::ULocale> cVar10;
	
	//    .param p0, "loc"    # Ljava/util/Locale;
	language = loc->getLanguage();
	//    .local v25, "language":Ljava/lang/String;
	std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v26, "script":Ljava/lang/String;
	country = loc->getCountry();
	//    .local v11, "country":Ljava/lang/String;
	variant = loc->getVariant();
	//    .local v29, "variant":Ljava/lang/String;
	attributes = 0x0;
	//    .local v8, "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	keywords = 0x0;
	//    .local v18, "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	try {
	//label_try_start_12:
	cVar0 = 0x0;
	cVar0->checkCast("std::vector<java::lang::Object>");
	cVar1 = android::icu::util::ULocale_S_JDKLocaleHelper::mGetScript->invoke(loc, cVar0);
	cVar1->checkCast("java::lang::String");
	script = cVar1;
	cVar2 = 0x0;
	cVar2->checkCast("std::vector<java::lang::Object>");
	extKeys = android::icu::util::ULocale_S_JDKLocaleHelper::mGetExtensionKeys->invoke(loc, cVar2);
	extKeys->checkCast("java::util::Set");
	//    .local v16, "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	if ( extKeys->isEmpty() )     
		goto label_cond_16d;
	//label_try_end_43:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_128;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_161;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_12 .. :try_end_43} :catch_128
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_12 .. :try_end_43} :catch_161
	extKey_S_iterator = extKeys->iterator();
	//    .local v15, "extKey$iterator":Ljava/util/Iterator;
	keywords = keywords;
	//    .local v19, "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	attributes = attributes;
	//    .end local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .local v9, "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_goto_47:
	try {
	//label_try_start_47:
	if ( !(extKey_S_iterator->hasNext()) )  
		goto label_cond_16a;
	extKey = extKey_S_iterator->next();
	extKey->checkCast("java::lang::Character");
	//    .local v14, "extKey":Ljava/lang/Character;
	if ( extKey->charValue() != 0x75 )
		goto label_cond_12b;
	cVar3 = 0x0;
	cVar3->checkCast("std::vector<java::lang::Object>");
	uAttributes = android::icu::util::ULocale_S_JDKLocaleHelper::mGetUnicodeLocaleAttributes->invoke(loc, cVar3);
	uAttributes->checkCast("java::util::Set");
	//    .local v27, "uAttributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( uAttributes->isEmpty() )     
		goto label_cond_9b;
	attributes = std::make_shared<java::util::TreeSet>();
	//label_try_end_7c:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29b;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a5;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_47 .. :try_end_7c} :catch_29b
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_47 .. :try_end_7c} :catch_2a5
	//    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .local v8, "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	try {
	//label_try_start_7c:
	attr_S_iterator = uAttributes->iterator();
	//    .local v6, "attr$iterator":Ljava/util/Iterator;
label_goto_80:
	if ( !(attr_S_iterator->hasNext()) )  
		goto label_cond_9c;
	attr = attr_S_iterator->next();
	attr->checkCast("java::lang::String");
	//    .local v5, "attr":Ljava/lang/String;
	attributes->add(attr);
	//label_try_end_8f:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_90;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2ab;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_7c .. :try_end_8f} :catch_90
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_7c .. :try_end_8f} :catch_2ab
	goto label_goto_80;
	// 1790    .line 4045
	// 1791    .end local v5    # "attr":Ljava/lang/String;
	// 1792    .end local v6    # "attr$iterator":Ljava/util/Iterator;
label_catch_90:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v12, "e":Ljava/lang/IllegalAccessException;
	keywords;
	//    .end local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .end local v14    # "extKey":Ljava/lang/Character;
	//    .end local v15    # "extKey$iterator":Ljava/util/Iterator;
	//    .end local v16    # "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .end local v27    # "uAttributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_goto_93:
	var62 = cVar4(e);
	// throw
	throw cVar4;
	// 1815    .end local v12    # "e":Ljava/lang/IllegalAccessException;
	// 1816    .restart local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1817    .restart local v14    # "extKey":Ljava/lang/Character;
	// 1818    .restart local v15    # "extKey$iterator":Ljava/util/Iterator;
	// 1819    .restart local v16    # "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	// 1820    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 1821    .restart local v27    # "uAttributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_9b:
	//    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .restart local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_9c:
	try {
	//label_try_start_9c:
	cVar5 = 0x0;
	cVar5->checkCast("std::vector<java::lang::Object>");
	uKeys = android::icu::util::ULocale_S_JDKLocaleHelper::mGetUnicodeLocaleKeys->invoke(loc, cVar5);
	uKeys->checkCast("java::util::Set");
	//    .local v28, "uKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	kwKey_S_iterator = uKeys->iterator();
	//    .local v23, "kwKey$iterator":Ljava/util/Iterator;
label_goto_b2:
	if ( !(kwKey_S_iterator->hasNext()) )  
		goto label_cond_2c5;
	kwKey = kwKey_S_iterator->next();
	kwKey->checkCast("java::lang::String");
	//    .local v22, "kwKey":Ljava/lang/String;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar6[0x0] = kwKey;
	kwVal = android::icu::util::ULocale_S_JDKLocaleHelper::mGetUnicodeLocaleType->invoke(loc, cVar6);
	kwVal->checkCast("java::lang::String");
	//    .local v24, "kwVal":Ljava/lang/String;
	if ( !(kwVal) )  
		goto label_cond_2c1;
	if ( !(kwKey->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("va")))) )  
		goto label_cond_117;
	if ( variant->length() )     
		goto label_cond_f4;
	variant = kwVal;
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .local v18, "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_goto_f1:
	keywords = keywords;
	//    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_b2;
label_cond_f4:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	variant = cVar7->append(kwVal)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(variant)->toString();
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_f1;
	// 1970    .line 4027
	// 1971    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 1972    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_117:
	if ( keywords )     
		goto label_cond_2bd;
	keywords = std::make_shared<java::util::TreeMap>();
	//label_try_end_11e:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_90;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2ab;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_9c .. :try_end_11e} :catch_90
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_9c .. :try_end_11e} :catch_2ab
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_goto_11e:
	try {
	//label_try_start_11e:
	keywords->put(kwKey, kwVal);
	//label_try_end_127:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_128;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_161;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_11e .. :try_end_127} :catch_128
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_11e .. :try_end_127} :catch_161
	goto label_goto_f1;
	// 2002    .line 4045
	// 2003    .end local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2004    .end local v14    # "extKey":Ljava/lang/Character;
	// 2005    .end local v15    # "extKey$iterator":Ljava/util/Iterator;
	// 2006    .end local v16    # "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	// 2007    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2008    .end local v22    # "kwKey":Ljava/lang/String;
	// 2009    .end local v23    # "kwKey$iterator":Ljava/util/Iterator;
	// 2010    .end local v24    # "kwVal":Ljava/lang/String;
	// 2011    .end local v27    # "uAttributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2012    .end local v28    # "uKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_catch_128:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v12    # "e":Ljava/lang/IllegalAccessException;
	goto label_goto_93;
	// 2019    .line 4035
	// 2020    .end local v12    # "e":Ljava/lang/IllegalAccessException;
	// 2021    .restart local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2022    .restart local v14    # "extKey":Ljava/lang/Character;
	// 2023    .restart local v15    # "extKey$iterator":Ljava/util/Iterator;
	// 2024    .restart local v16    # "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	// 2025    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_12b:
	try {
	//label_try_start_12b:
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar8[0x0] = extKey;
	extVal = android::icu::util::ULocale_S_JDKLocaleHelper::mGetExtension->invoke(loc, cVar8);
	extVal->checkCast("java::lang::String");
	//    .local v17, "extVal":Ljava/lang/String;
	if ( !(extVal) )  
		goto label_cond_2b8;
	if ( keywords )     
		goto label_cond_2b4;
	keywords = std::make_shared<java::util::TreeMap>();
	//label_try_end_14e:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29b;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a5;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_12b .. :try_end_14e} :catch_29b
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_12b .. :try_end_14e} :catch_2a5
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_goto_14e:
	try {
	//label_try_start_14e:
	keywords->put(java::lang::String::valueOf(extKey), extVal);
	//label_try_end_15b:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a1;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b0;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_14e .. :try_end_15b} :catch_2a1
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_14e .. :try_end_15b} :catch_2b0
	//    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .end local v17    # "extVal":Ljava/lang/String;
	//    .restart local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_goto_15c:
	keywords = keywords;
	//    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	attributes = attributes;
	//    .end local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .restart local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_47;
	// 2105    .line 4047
	// 2106    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2107    .end local v14    # "extKey":Ljava/lang/Character;
	// 2108    .end local v15    # "extKey$iterator":Ljava/util/Iterator;
	// 2109    .end local v16    # "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	// 2110    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_catch_161:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v13, "e":Ljava/lang/reflect/InvocationTargetException;
label_goto_162:
	var146 = cVar9(e);
	// throw
	throw cVar9;
	// 2125    .end local v13    # "e":Ljava/lang/reflect/InvocationTargetException;
	// 2126    .restart local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2127    .restart local v15    # "extKey$iterator":Ljava/util/Iterator;
	// 2128    .restart local v16    # "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	// 2129    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_16a:
	keywords = keywords;
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	attributes = attributes;
	//    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .end local v15    # "extKey$iterator":Ljava/util/Iterator;
	//    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_16d:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("no")))) )  
		goto label_cond_194;
	if ( !(country->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("NO")))) )  
		goto label_cond_194;
	if ( !(variant->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("NY")))) )  
		goto label_cond_194;
	variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_cond_194:
	buf = std::make_shared<java::lang::StringBuilder>(language);
	//    .local v10, "buf":Ljava/lang/StringBuilder;
	if ( script->length() <= 0 )
		goto label_cond_1ad;
	buf->append(0x5f);
	buf->append(script);
label_cond_1ad:
	if ( country->length() <= 0 )
		goto label_cond_1bd;
	buf->append(0x5f);
	buf->append(country);
label_cond_1bd:
	if ( variant->length() <= 0 )
		goto label_cond_1dc;
	if ( country->length() )     
		goto label_cond_1d0;
	buf->append(0x5f);
label_cond_1d0:
	buf->append(0x5f);
	buf->append(variant);
label_cond_1dc:
	if ( !(attributes) )  
		goto label_cond_21b;
	attrBuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v7, "attrBuf":Ljava/lang/StringBuilder;
	attr_S_iterator = attributes->iterator();
	//    .restart local v6    # "attr$iterator":Ljava/util/Iterator;
label_goto_1e7:
	if ( !(attr_S_iterator->hasNext()) )  
		goto label_cond_204;
	attr = attr_S_iterator->next();
	attr->checkCast("java::lang::String");
	//    .restart local v5    # "attr":Ljava/lang/String;
	if ( !(attrBuf->length()) )  
		goto label_cond_200;
	attrBuf->append(0x2d);
label_cond_200:
	attrBuf->append(attr);
	goto label_goto_1e7;
	// 2309    .line 4092
	// 2310    .end local v5    # "attr":Ljava/lang/String;
label_cond_204:
	if ( keywords )     
		goto label_cond_20b;
	keywords = std::make_shared<java::util::TreeMap>();
label_cond_20b:
	keywords->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("attribute")), attrBuf->toString());
	//    .end local v6    # "attr$iterator":Ljava/util/Iterator;
	//    .end local v7    # "attrBuf":Ljava/lang/StringBuilder;
label_cond_21b:
	if ( !(keywords) )  
		goto label_cond_283;
	buf->append(0x40);
	addSep = 0x0;
	//    .local v4, "addSep":Z
	kwEntry_S_iterator = keywords->entrySet()->iterator();
	//    .local v21, "kwEntry$iterator":Ljava/util/Iterator;
label_goto_22d:
	if ( !(kwEntry_S_iterator->hasNext()) )  
		goto label_cond_283;
	kwEntry = kwEntry_S_iterator->next();
	kwEntry->checkCast("java::util::Map_S_Entry");
	//    .local v20, "kwEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	kwKey = kwEntry->getKey();
	kwKey->checkCast("java::lang::String");
	//    .restart local v22    # "kwKey":Ljava/lang/String;
	kwVal = kwEntry->getValue();
	kwVal->checkCast("java::lang::String");
	//    .restart local v24    # "kwVal":Ljava/lang/String;
	if ( kwKey->length() == 0x1 )
		goto label_cond_266;
	kwKey = android::icu::util::ULocale::toLegacyKey(kwKey);
	if ( kwVal->length() )     
		goto label_cond_25e;
	//    .end local v24    # "kwVal":Ljava/lang/String;
label_cond_25e:
	//    .restart local v24    # "kwVal":Ljava/lang/String;
label_cond_266:
	if ( !(addSep) )  
		goto label_cond_281;
	buf->append(0x3b);
label_goto_26f:
	buf->append(kwKey);
	buf->append(0x3d);
	buf->append(kwVal);
	goto label_goto_22d;
	// 2461    .line 4115
label_cond_281:
	addSep = 0x1;
	goto label_goto_26f;
	// 2467    .line 4123
	// 2468    .end local v4    # "addSep":Z
	// 2469    .end local v20    # "kwEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	// 2470    .end local v21    # "kwEntry$iterator":Ljava/util/Iterator;
	// 2471    .end local v22    # "kwKey":Ljava/lang/String;
	// 2472    .end local v24    # "kwVal":Ljava/lang/String;
label_cond_283:
	var262 = cVar10(android::icu::util::ULocale::getName(buf->toString()), loc, 0x0);
	return cVar10;
	// 2498    .line 4045
	// 2499    .end local v10    # "buf":Ljava/lang/StringBuilder;
	// 2500    .restart local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2501    .restart local v15    # "extKey$iterator":Ljava/util/Iterator;
	// 2502    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_catch_29b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v12    # "e":Ljava/lang/IllegalAccessException;
	keywords;
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	attributes;
	//    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .restart local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_93;
	// 2517    .end local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2518    .end local v12    # "e":Ljava/lang/IllegalAccessException;
	// 2519    .restart local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2520    .restart local v14    # "extKey":Ljava/lang/Character;
	// 2521    .restart local v17    # "extVal":Ljava/lang/String;
label_catch_2a1:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v12    # "e":Ljava/lang/IllegalAccessException;
	attributes;
	//    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .restart local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_93;
	// 2532    .line 4047
	// 2533    .end local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2534    .end local v12    # "e":Ljava/lang/IllegalAccessException;
	// 2535    .end local v14    # "extKey":Ljava/lang/Character;
	// 2536    .end local v17    # "extVal":Ljava/lang/String;
	// 2537    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2538    .restart local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2539    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_catch_2a5:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v13    # "e":Ljava/lang/reflect/InvocationTargetException;
	keywords;
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	attributes;
	//    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .restart local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_162;
	// 2554    .end local v13    # "e":Ljava/lang/reflect/InvocationTargetException;
	// 2555    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2556    .restart local v14    # "extKey":Ljava/lang/Character;
	// 2557    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2558    .restart local v27    # "uAttributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_catch_2ab:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v13    # "e":Ljava/lang/reflect/InvocationTargetException;
	keywords;
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_162;
	// 2569    .end local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2570    .end local v13    # "e":Ljava/lang/reflect/InvocationTargetException;
	// 2571    .end local v27    # "uAttributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2572    .restart local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2573    .restart local v17    # "extVal":Ljava/lang/String;
label_catch_2b0:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v13    # "e":Ljava/lang/reflect/InvocationTargetException;
	attributes;
	//    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .restart local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_162;
	// 2584    .end local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2585    .end local v13    # "e":Ljava/lang/reflect/InvocationTargetException;
	// 2586    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2587    .restart local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2588    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_2b4:
	keywords = keywords;
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_14e;
	// 2596    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2597    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_2b8:
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .end local v9    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .restart local v8    # "attributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_15c;
	// 2609    .end local v17    # "extVal":Ljava/lang/String;
	// 2610    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2611    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2612    .restart local v22    # "kwKey":Ljava/lang/String;
	// 2613    .restart local v23    # "kwKey$iterator":Ljava/util/Iterator;
	// 2614    .restart local v24    # "kwVal":Ljava/lang/String;
	// 2615    .restart local v27    # "uAttributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2616    .restart local v28    # "uKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_2bd:
	keywords = keywords;
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_11e;
	// 2624    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2625    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_2c1:
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_f1;
	// 2633    .end local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 2634    .end local v22    # "kwKey":Ljava/lang/String;
	// 2635    .end local v24    # "kwVal":Ljava/lang/String;
	// 2636    .restart local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_2c5:
	//    .end local v19    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v18    # "keywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_15c;

}


