// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleValidityChecker.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datasubtype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datatype.h"
#include "android.icu.impl.ValidIdentifiers.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.KeyTypeData_S_ValueType.h"
#include "android.icu.impl.locale.KeyTypeData.h"
#include "android.icu.impl.locale.LocaleValidityChecker_S_SpecialCase.h"
#include "android.icu.impl.locale.LocaleValidityChecker_S_Where.h"
#include "android.icu.impl.locale.LocaleValidityChecker.h"
#include "android.icu.util.IllformedLocaleException.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale_S_Builder.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Exception.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "java.util.regex.Pattern.h"

static android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_ValidIdentifiers_S_DatatypeSwitchesValues;
static android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_locale_KeyTypeData_S_ValueTypeSwitchesValues;
static android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_locale_LocaleValidityChecker_S_SpecialCaseSwitchesValues;
static android::icu::impl::locale::LocaleValidityChecker::REGULAR_ONLY;
static android::icu::impl::locale::LocaleValidityChecker::REORDERING_EXCLUDE;
static android::icu::impl::locale::LocaleValidityChecker::REORDERING_INCLUDE;
static android::icu::impl::locale::LocaleValidityChecker::SEPARATOR;
static android::icu::impl::locale::LocaleValidityChecker::VALID_X;
// .method private static synthetic -getandroid-icu-impl-ValidIdentifiers$DatatypeSwitchesValues()[I
int android::icu::impl::locale::LocaleValidityChecker::_getandroid_icu_impl_ValidIdentifiers_S_DatatypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_ValidIdentifiers_S_DatatypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_ValidIdentifiers_S_DatatypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::ValidIdentifiers_S_Datatype::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::currency->ordinal()] = 0xc;
	//label_try_end_18:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_90;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_18} :catch_90
label_goto_18:
	try {
	//label_try_start_18:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::illegal->ordinal()] = 0xd;
	//label_try_end_22:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8e;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_18 .. :try_end_22} :catch_8e
label_goto_22:
	try {
	//label_try_start_22:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::language->ordinal()] = 0xe;
	//label_try_end_2c:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_22 .. :try_end_2c} :catch_8c
label_goto_2c:
	try {
	//label_try_start_2c:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::region->ordinal()] = 0xf;
	//label_try_end_36:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_2c .. :try_end_36} :catch_8a
label_goto_36:
	try {
	//label_try_start_36:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::script->ordinal()] = 0x10;
	//label_try_end_40:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_88;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_36 .. :try_end_40} :catch_88
label_goto_40:
	try {
	//label_try_start_40:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::subdivision->ordinal()] = 0x11;
	//label_try_end_4a:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_86;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_40 .. :try_end_4a} :catch_86
label_goto_4a:
	try {
	//label_try_start_4a:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::t->ordinal()] = 0x1;
	//label_try_end_53:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_84;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_4a .. :try_end_53} :catch_84
label_goto_53:
	try {
	//label_try_start_53:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::u->ordinal()] = 0x2;
	//label_try_end_5c:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_82;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_53 .. :try_end_5c} :catch_82
label_goto_5c:
	try {
	//label_try_start_5c:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::unit->ordinal()] = 0x12;
	//label_try_end_66:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_80;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_5c .. :try_end_66} :catch_80
label_goto_66:
	try {
	//label_try_start_66:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::variant->ordinal()] = 0x13;
	//label_try_end_70:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7e;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_66 .. :try_end_70} :catch_7e
label_goto_70:
	try {
	//label_try_start_70:
	cVar0[android::icu::impl::ValidIdentifiers_S_Datatype::x->ordinal()] = 0x3;
	//label_try_end_79:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_70 .. :try_end_79} :catch_7c
label_goto_79:
	android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_ValidIdentifiers_S_DatatypeSwitchesValues = cVar0;
	return cVar0;
label_catch_7c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_79;
label_catch_7e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_70;
label_catch_80:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_66;
label_catch_82:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_5c;
label_catch_84:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_53;
label_catch_86:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4a;
label_catch_88:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_40;
label_catch_8a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_36;
label_catch_8c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_2c;
label_catch_8e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_22;
label_catch_90:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_18;

}
// .method private static synthetic -getandroid-icu-impl-locale-KeyTypeData$ValueTypeSwitchesValues()[I
int android::icu::impl::locale::LocaleValidityChecker::_getandroid_icu_impl_locale_KeyTypeData_S_ValueTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_locale_KeyTypeData_S_ValueTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_locale_KeyTypeData_S_ValueTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::locale::KeyTypeData_S_ValueType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::locale::KeyTypeData_S_ValueType::any->ordinal()] = 0xc;
	//label_try_end_18:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_18} :catch_3c
label_goto_18:
	try {
	//label_try_start_18:
	cVar0[android::icu::impl::locale::KeyTypeData_S_ValueType::incremental->ordinal()] = 0x1;
	//label_try_end_21:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_18 .. :try_end_21} :catch_3a
label_goto_21:
	try {
	//label_try_start_21:
	cVar0[android::icu::impl::locale::KeyTypeData_S_ValueType::multiple->ordinal()] = 0x2;
	//label_try_end_2a:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_38;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_21 .. :try_end_2a} :catch_38
label_goto_2a:
	try {
	//label_try_start_2a:
	cVar0[android::icu::impl::locale::KeyTypeData_S_ValueType::single->ordinal()] = 0x3;
	//label_try_end_33:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_36;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_2a .. :try_end_33} :catch_36
label_goto_33:
	android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_locale_KeyTypeData_S_ValueTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_36:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_33;
label_catch_38:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_2a;
label_catch_3a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_21;
label_catch_3c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_18;

}
// .method private static synthetic -getandroid-icu-impl-locale-LocaleValidityChecker$SpecialCaseSwitchesValues()[I
int android::icu::impl::locale::LocaleValidityChecker::_getandroid_icu_impl_locale_LocaleValidityChecker_S_SpecialCaseSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_locale_LocaleValidityChecker_S_SpecialCaseSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_locale_LocaleValidityChecker_S_SpecialCaseSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::anything->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_52;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_52
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::codepoints->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_50;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_50
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::normal->ordinal()] = 0xc;
	//label_try_end_2a:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4e;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_2a} :catch_4e
label_goto_2a:
	try {
	//label_try_start_2a:
	cVar0[android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::reorder->ordinal()] = 0x3;
	//label_try_end_33:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_2a .. :try_end_33} :catch_4c
label_goto_33:
	try {
	//label_try_start_33:
	cVar0[android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::rgKey->ordinal()] = 0x4;
	//label_try_end_3c:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_33 .. :try_end_3c} :catch_4a
label_goto_3c:
	try {
	//label_try_start_3c:
	cVar0[android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::subdivision->ordinal()] = 0x5;
	//label_try_end_45:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_48;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3c .. :try_end_45} :catch_48
label_goto_45:
	android::icu::impl::locale::LocaleValidityChecker::_android_icu_impl_locale_LocaleValidityChecker_S_SpecialCaseSwitchesValues = cVar0;
	return cVar0;
label_catch_48:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_45;
label_catch_4a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3c;
label_catch_4c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_33;
label_catch_4e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_2a;
label_catch_50:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_52:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void android::icu::impl::locale::LocaleValidityChecker::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::util::HashSet> cVar3;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar4;
	std::shared_ptr<java::util::HashSet> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	android::icu::impl::locale::LocaleValidityChecker::SEPARATOR = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("[-_]")));
	android::icu::impl::locale::LocaleValidityChecker::VALID_X = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("[a-zA-Z0-9]{2,8}(-[a-zA-Z0-9]{2,8})*")));
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x7);
	cVar4[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("space"));
	cVar4[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("punct"));
	cVar4[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("symbol"));
	cVar4[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar4[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("digit"));
	cVar4[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("others"));
	cVar4[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zzzz"));
	cVar3 = std::make_shared<java::util::HashSet>(java::util::Arrays::asList(cVar4));
	android::icu::impl::locale::LocaleValidityChecker::REORDERING_INCLUDE = cVar3;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zinh"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zyyy"));
	cVar5 = std::make_shared<java::util::HashSet>(java::util::Arrays::asList(cVar6));
	android::icu::impl::locale::LocaleValidityChecker::REORDERING_EXCLUDE = cVar5;
	android::icu::impl::locale::LocaleValidityChecker::REGULAR_ONLY = java::util::EnumSet::of(android::icu::impl::ValidIdentifiers_S_Datasubtype::regular);
	return;

}
// .method public constructor <init>(Ljava/util/Set;)V
android::icu::impl::locale::LocaleValidityChecker::LocaleValidityChecker(std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> datasubtypes)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 666        value = {
	// 667            "(",
	// 668            "Ljava/util/Set",
	// 669            "<",
	// 670            "Landroid/icu/impl/ValidIdentifiers$Datasubtype;",
	// 671            ">;)V"
	// 672        }
	// 673    .end annotation
	//    .local p1, "datasubtypes":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/ValidIdentifiers$Datasubtype;>;"
	// 678    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->datasubtypes = java::util::EnumSet::copyOf(datasubtypes);
	this->allowsDeprecated = datasubtypes->contains(android::icu::impl::ValidIdentifiers_S_Datasubtype::deprecated);
	return;

}
// .method public varargs constructor <init>([Landroid/icu/impl/ValidIdentifiers$Datasubtype;)V
android::icu::impl::locale::LocaleValidityChecker::LocaleValidityChecker(std::shared_ptr<std::vector<android::icu::impl::ValidIdentifiers_S_Datasubtype>> datasubtypes)
{
	
	//    .param p1, "datasubtypes"    # [Landroid/icu/impl/ValidIdentifiers$Datasubtype;
	// 706    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->datasubtypes = java::util::EnumSet::copyOf(java::util::Arrays::asList(datasubtypes));
	this->allowsDeprecated = this->datasubtypes->contains(android::icu::impl::ValidIdentifiers_S_Datasubtype::deprecated);
	return;

}
// .method private isScriptReorder(Ljava/lang/String;)Z
bool android::icu::impl::locale::LocaleValidityChecker::isScriptReorder(std::shared_ptr<java::lang::String> subtag)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::Object> cVar2;
	
	//    .param p1, "subtag"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = android::icu::impl::locale::AsciiUtil::toLowerString(subtag);
	if ( !(android::icu::impl::locale::LocaleValidityChecker::REORDERING_INCLUDE->contains(cVar2)) )  
		goto label_cond_f;
	return cVar0;
	// 760    .line 298
label_cond_f:
	if ( !(android::icu::impl::locale::LocaleValidityChecker::REORDERING_EXCLUDE->contains(cVar2)) )  
		goto label_cond_18;
	return cVar1;
	// 773    .line 301
label_cond_18:
	if ( !(android::icu::impl::ValidIdentifiers::isValid(android::icu::impl::ValidIdentifiers_S_Datatype::script, android::icu::impl::locale::LocaleValidityChecker::REGULAR_ONLY, cVar2)) )  
		goto label_cond_23;
label_goto_22:
	return cVar0;
label_cond_23:
	cVar0 = cVar1;
	goto label_goto_22;

}
// .method private isSubdivision(Landroid/icu/util/ULocale;Ljava/lang/String;)Z
bool android::icu::impl::locale::LocaleValidityChecker::isSubdivision(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> subtag)
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> localeRegion;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "subtag"    # Ljava/lang/String;
	cVar0 = 0x3;
	cVar1 = 0x0;
	if ( subtag->length() >= cVar0 )
		goto label_cond_9;
	return cVar1;
	// 814    .line 270
label_cond_9:
	if ( subtag->charAt(cVar1) >  0x39 )
		goto label_cond_28;
label_goto_11:
	region = subtag->substring(cVar1, cVar0);
	//    .local v2, "region":Ljava/lang/String;
	//    .local v3, "subdivision":Ljava/lang/String;
	if ( android::icu::impl::ValidIdentifiers::isValid(android::icu::impl::ValidIdentifiers_S_Datatype::subdivision, this->datasubtypes, region, subtag->substring(region->length())) )     
		goto label_cond_2a;
	return cVar1;
	// 854    .line 270
	// 855    .end local v2    # "region":Ljava/lang/String;
	// 856    .end local v3    # "subdivision":Ljava/lang/String;
label_cond_28:
	cVar0 = 0x2;
	goto label_goto_11;
	// 862    .line 276
	// 863    .restart local v2    # "region":Ljava/lang/String;
	// 864    .restart local v3    # "subdivision":Ljava/lang/String;
label_cond_2a:
	localeRegion = locale->getCountry();
	//    .local v0, "localeRegion":Ljava/lang/String;
	if ( !(localeRegion->isEmpty()) )  
		goto label_cond_3c;
	//    .local v1, "max":Landroid/icu/util/ULocale;
	//    .end local v1    # "max":Landroid/icu/util/ULocale;
label_cond_3c:
	if ( region->equalsIgnoreCase(localeRegion) )     
		goto label_cond_43;
	return cVar1;
	// 901    .line 284
label_cond_43:
	return 0x1;

}
// .method private isValid(Landroid/icu/impl/ValidIdentifiers$Datatype;Ljava/lang/String;Landroid/icu/impl/locale/LocaleValidityChecker$Where;)Z
bool android::icu::impl::locale::LocaleValidityChecker::isValid(std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::lang::String> code,std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_Where> where)
{
	
	bool cVar0;
	
	//    .param p1, "datatype"    # Landroid/icu/impl/ValidIdentifiers$Datatype;
	//    .param p2, "code"    # Ljava/lang/String;
	//    .param p3, "where"    # Landroid/icu/impl/locale/LocaleValidityChecker$Where;
	cVar0 = 0x1;
	if ( !(code->isEmpty()) )  
		goto label_cond_8;
label_cond_7:
label_goto_7:
	return cVar0;
	// 928    .line 335
label_cond_8:
	if ( android::icu::impl::ValidIdentifiers::isValid(datatype, this->datasubtypes, code) )     
		goto label_cond_7;
	if ( where )     
		goto label_cond_14;
	cVar0 = 0x0;
	goto label_goto_7;
	// 945    .line 337
label_cond_14:
	cVar0 = where->set(datatype, code);
	goto label_goto_7;

}
// .method private isValidLocale(Ljava/lang/String;Landroid/icu/impl/locale/LocaleValidityChecker$Where;)Z
bool android::icu::impl::locale::LocaleValidityChecker::isValidLocale(std::shared_ptr<java::lang::String> extensionString,std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_Where> where)
{
	
	std::shared_ptr<android::icu::util::ULocale_S_Builder> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "extensionString"    # Ljava/lang/String;
	//    .param p2, "where"    # Landroid/icu/impl/locale/LocaleValidityChecker$Where;
	try {
	//label_try_start_0:
	cVar0 = std::make_shared<android::icu::util::ULocale_S_Builder>();
	//    .local v3, "locale":Landroid/icu/util/ULocale;
	//label_try_end_10:
	}
	catch (android::icu::util::IllformedLocaleException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Landroid/icu/util/IllformedLocaleException; {:try_start_0 .. :try_end_10} :catch_1e
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_10} :catch_12
	return this->isValid(cVar0->setLanguageTag(extensionString)->build(), where);
	// 985    .line 323
	// 986    .end local v3    # "locale":Landroid/icu/util/ULocale;
label_catch_12:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	return where->set(android::icu::impl::ValidIdentifiers_S_Datatype::t, getCatchExcetionFromList->getMessage());
	// 1004    .line 319
	// 1005    .end local v1    # "e":Ljava/lang/Exception;
label_catch_1e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/util/IllformedLocaleException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "startIndex":I
	//    .local v2, "list":[Ljava/lang/String;
	return where->set(android::icu::impl::ValidIdentifiers_S_Datatype::t, android::icu::impl::locale::LocaleValidityChecker::SEPARATOR->split(extensionString->substring(getCatchExcetionFromList->getErrorIndex()))[0x0]);

}
// .method private isValidU(Landroid/icu/util/ULocale;Landroid/icu/impl/ValidIdentifiers$Datatype;Ljava/lang/String;Landroid/icu/impl/locale/LocaleValidityChecker$Where;)Z
bool android::icu::impl::locale::LocaleValidityChecker::isValidU(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::lang::String> extensionString,std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_Where> where)
{
	
	std::shared_ptr<java::lang::String> key;
	int typeCount;
	std::shared_ptr<java::lang::StringBuilder> prefix;
	std::shared_ptr<java::util::HashSet> seen;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	std::shared_ptr<java::lang::String> subtag;
	std::shared_ptr<android::icu::util::Output> isKnownKey;
	std::shared_ptr<android::icu::util::Output> isSpecialType;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar13;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::String> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	std::shared_ptr<java::lang::Object> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	int cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "datatype"    # Landroid/icu/impl/ValidIdentifiers$Datatype;
	//    .param p3, "extensionString"    # Ljava/lang/String;
	//    .param p4, "where"    # Landroid/icu/impl/locale/LocaleValidityChecker$Where;
	key = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v7, "key":Ljava/lang/String;
	typeCount = 0x0;
	//    .local v15, "typeCount":I
	//    .local v16, "valueType":Landroid/icu/impl/locale/KeyTypeData$ValueType;
	//    .local v11, "specialCase":Landroid/icu/impl/locale/LocaleValidityChecker$SpecialCase;
	prefix = std::make_shared<java::lang::StringBuilder>();
	//    .local v9, "prefix":Ljava/lang/StringBuilder;
	seen = std::make_shared<java::util::HashSet>();
	//    .local v10, "seen":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( datatype != android::icu::impl::ValidIdentifiers_S_Datatype::t )
		goto label_cond_74;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
label_goto_1e:
	cVar1 = android::icu::impl::locale::LocaleValidityChecker::SEPARATOR->split(extensionString);
	cVar2 = 0x0;
	//    .end local v11    # "specialCase":Landroid/icu/impl/locale/LocaleValidityChecker$SpecialCase;
	//    .end local v16    # "valueType":Landroid/icu/impl/locale/KeyTypeData$ValueType;
label_goto_31:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_2c3;
	subtag = cVar1[cVar2];
	//    .local v12, "subtag":Ljava/lang/String;
	if ( subtag->length() != 0x2 )
		goto label_cond_ab;
	if ( !(cVar0) )  
		goto label_cond_57;
	if ( subtag->charAt(0x1) >  0x39 )
		goto label_cond_ab;
label_cond_57:
	if ( !(cVar0) )  
		goto label_cond_77;
	if ( !(cVar0->length()) )  
		goto label_cond_76;
	if ( !(( this->isValidLocale(cVar0->toString(), where) ^ 0x1)) )  
		goto label_cond_76;
	return 0x0;
	// 1191    .line 154
	// 1192    .end local v12    # "subtag":Ljava/lang/String;
	// 1193    .restart local v11    # "specialCase":Landroid/icu/impl/locale/LocaleValidityChecker$SpecialCase;
	// 1194    .restart local v16    # "valueType":Landroid/icu/impl/locale/KeyTypeData$ValueType;
label_cond_74:
	cVar0 = 0x0;
	//    .local v13, "tBuffer":Ljava/lang/StringBuilder;
	goto label_goto_1e;
	// 1201    .line 167
	// 1202    .end local v11    # "specialCase":Landroid/icu/impl/locale/LocaleValidityChecker$SpecialCase;
	// 1203    .end local v13    # "tBuffer":Ljava/lang/StringBuilder;
	// 1204    .end local v16    # "valueType":Landroid/icu/impl/locale/KeyTypeData$ValueType;
	// 1205    .restart local v12    # "subtag":Ljava/lang/String;
label_cond_76:
	cVar0 = 0x0;
label_cond_77:
	key = android::icu::impl::locale::KeyTypeData::toBcpKey(subtag);
	if ( key )     
		goto label_cond_86;
	return where->set(datatype, subtag);
	// 1229    .line 173
label_cond_86:
	if ( this->allowsDeprecated )     
		goto label_cond_9d;
	if ( !(android::icu::impl::locale::KeyTypeData::isDeprecated(key)) )  
		goto label_cond_9d;
	return where->set(datatype, key);
	// 1256    .line 176
label_cond_9d:
	android::icu::impl::locale::KeyTypeData::getValueType(key);
	//    .local v16, "valueType":Landroid/icu/impl/locale/KeyTypeData$ValueType;
	android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::get(key);
	//    .local v11, "specialCase":Landroid/icu/impl/locale/LocaleValidityChecker$SpecialCase;
	0x0;
	//    .end local v11    # "specialCase":Landroid/icu/impl/locale/LocaleValidityChecker$SpecialCase;
	//    .end local v16    # "valueType":Landroid/icu/impl/locale/KeyTypeData$ValueType;
label_cond_a6:
label_goto_a6:
label_pswitch_a6:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_31;
	// 1284    .line 179
label_cond_ab:
	if ( !(cVar0) )  
		goto label_cond_be;
	if ( !(cVar0->length()) )  
		goto label_cond_ba;
	cVar0->append(0x2d);
label_cond_ba:
	cVar0->append(subtag);
	goto label_goto_a6;
	// 1308    .line 185
label_cond_be:
	typeCount = ( typeCount + 0x1);
	// switch
	{
	auto item = ( android::icu::impl::locale::LocaleValidityChecker::-getandroid-icu-impl-locale-KeyTypeData$ValueTypeSwitchesValues({const[class].FS-Param})[0x0->ordinal()] );
	if (item == 1) goto label_pswitch_13e;
	if (item == 2) goto label_pswitch_163;
	if (item == 3) goto label_pswitch_111;
	}
label_cond_cd:
label_goto_cd:
	// switch
	{
	auto item = ( android::icu::impl::locale::LocaleValidityChecker::-getandroid-icu-impl-locale-LocaleValidityChecker$SpecialCaseSwitchesValues({const[class].FS-Param})[0x0->ordinal()] );
	if (item == 1) goto label_pswitch_a6;
	if (item == 2) goto label_pswitch_16e;
	if (item == 3) goto label_pswitch_1ce;
	if (item == 4) goto label_pswitch_249;
	if (item == 5) goto label_pswitch_218;
	}
	isKnownKey = std::make_shared<android::icu::util::Output>();
	//    .local v5, "isKnownKey":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	isSpecialType = std::make_shared<android::icu::util::Output>();
	//    .local v6, "isSpecialType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	//    .local v14, "type":Ljava/lang/String;
	if ( android::icu::impl::locale::KeyTypeData::toBcpType(key, subtag, isKnownKey, isSpecialType) )     
		goto label_cond_28e;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	return where->set(datatype, cVar5->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(subtag)->toString());
	// 1400    .line 188
	// 1401    .end local v5    # "isKnownKey":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 1402    .end local v6    # "isSpecialType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 1403    .end local v14    # "type":Ljava/lang/String;
label_pswitch_111:
	if ( typeCount <= 0x1 )
		goto label_cond_cd;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	return where->set(datatype, cVar6->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(subtag)->toString());
	// 1450    .line 193
label_pswitch_13e:
	if ( typeCount != 0x1 )
		goto label_cond_150;
	prefix->setLength(0x0);
	prefix->append(subtag);
	goto label_goto_cd;
	// 1470    .line 197
label_cond_150:
	prefix->append(0x2d)->append(subtag);
	subtag = prefix->toString();
	goto label_goto_cd;
	// 1491    .line 202
label_pswitch_163:
	if ( typeCount != 0x1 )
		goto label_cond_cd;
	seen->clear();
	goto label_goto_cd;
	// 1504    .line 212
label_pswitch_16e:
	try {
	//label_try_start_170:
	if ( java::lang::Integer::parseInt(subtag, 0x10) <= 0x10ffff )
		goto label_cond_a6;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_1a4:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a6;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_170 .. :try_end_1a4} :catch_1a6
	return where->set(datatype, cVar7->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(subtag)->toString());
	// 1564    .line 215
label_catch_1a6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/lang/NumberFormatException;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	return where->set(datatype, cVar8->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(subtag)->toString());
	// 1608    .line 220
	// 1609    .end local v4    # "e":Ljava/lang/NumberFormatException;
label_pswitch_1ce:
	if ( !(subtag->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("zzzz")))) )  
		goto label_cond_215;
	cVar9 = std::make_shared<java::lang::String>(std::make_shared<char[]>("others"));
label_goto_1dc:
	//    .local v8, "newlyAdded":Z
	if ( !(seen->add(cVar9)) )  
		goto label_cond_1ee;
	if ( !(( this->isScriptReorder(subtag) ^ 0x1)) )  
		goto label_cond_a6;
label_cond_1ee:
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	return where->set(datatype, cVar10->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(subtag)->toString());
	// 1684    .end local v8    # "newlyAdded":Z
label_cond_215:
	cVar9 = subtag;
	goto label_goto_1dc;
	// 1691    .line 226
label_pswitch_218:
	if ( this->isSubdivision(locale, subtag) )     
		goto label_cond_a6;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	return where->set(datatype, cVar12->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(subtag)->toString());
	// 1742    .line 231
label_pswitch_249:
	if ( subtag->length() <  0x6 )
		goto label_cond_262;
	if ( !(( subtag->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("zzzz"))) ^ 0x1)) )  
		goto label_cond_26b;
label_cond_262:
	return where->set(datatype, subtag);
	// 1780    .line 234
label_cond_26b:
	if ( this->isValid(android::icu::impl::ValidIdentifiers_S_Datatype::region, subtag->substring(0x0, ( subtag->length() + -0x4)), where) )     
		goto label_cond_a6;
	return 0x0;
	// 1819    .line 248
	// 1820    .restart local v5    # "isKnownKey":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 1821    .restart local v6    # "isSpecialType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 1822    .restart local v14    # "type":Ljava/lang/String;
label_cond_28e:
	if ( this->allowsDeprecated )     
		goto label_cond_a6;
	if ( !(android::icu::impl::locale::KeyTypeData::isDeprecated(key, subtag)) )  
		goto label_cond_a6;
	cVar13 = std::make_shared<java::lang::StringBuilder>();
	return where->set(datatype, cVar13->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(subtag)->toString());
	// 1877    .line 254
	// 1878    .end local v5    # "isKnownKey":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 1879    .end local v6    # "isSpecialType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	// 1880    .end local v12    # "subtag":Ljava/lang/String;
	// 1881    .end local v14    # "type":Ljava/lang/String;
label_cond_2c3:
	if ( !(cVar0) )  
		goto label_cond_2e0;
	if ( !(cVar0->length()) )  
		goto label_cond_2e0;
	if ( !(( this->isValidLocale(cVar0->toString(), where) ^ 0x1)) )  
		goto label_cond_2e0;
	return 0x0;
	// 1914    .line 257
label_cond_2e0:
	return 0x1;
	// 1920    .line 186
	// 1921    nop
	// 1923    :pswitch_data_2e4
	// 1924    .packed-switch 0x1
	// 1925        :pswitch_13e
	// 1926        :pswitch_163
	// 1927        :pswitch_111
	// 1928    .end packed-switch
	// 1930    .line 207
	// 1931    :pswitch_data_2ee
	// 1932    .packed-switch 0x1
	// 1933        :pswitch_a6
	// 1934        :pswitch_16e
	// 1935        :pswitch_1ce
	// 1936        :pswitch_249
	// 1937        :pswitch_218
	// 1938    .end packed-switch

}
// .method public getDatasubtypes()Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> android::icu::impl::locale::LocaleValidityChecker::getDatasubtypes()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1946        value = {
	// 1947            "()",
	// 1948            "Ljava/util/Set",
	// 1949            "<",
	// 1950            "Landroid/icu/impl/ValidIdentifiers$Datasubtype;",
	// 1951            ">;"
	// 1952        }
	// 1953    .end annotation
	return java::util::EnumSet::copyOf(this->datasubtypes);

}
// .method public isValid(Landroid/icu/util/ULocale;Landroid/icu/impl/locale/LocaleValidityChecker$Where;)Z
bool android::icu::impl::locale::LocaleValidityChecker::isValid(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_Where> where)
{
	
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> variantString;
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<java::util::Iterator> c_S_iterator;
	std::shared_ptr<java::lang::Character> c;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "where"    # Landroid/icu/impl/locale/LocaleValidityChecker$Where;
	where->set(0x0, 0x0);
	language = locale->getLanguage();
	//    .local v8, "language":Ljava/lang/String;
	//    .local v10, "script":Ljava/lang/String;
	//    .local v9, "region":Ljava/lang/String;
	variantString = locale->getVariant();
	//    .local v12, "variantString":Ljava/lang/String;
	//    .local v7, "extensionKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	if ( this->isValid(android::icu::impl::ValidIdentifiers_S_Datatype::language, language, where) )     
		goto label_cond_3b;
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")))) )  
		goto label_cond_39;
	where->set(0x0, 0x0);
	return 0x1;
	// 2047    .line 92
label_cond_39:
	return 0x0;
	// 2053    .line 94
label_cond_3b:
	if ( this->isValid(android::icu::impl::ValidIdentifiers_S_Datatype::script, locale->getScript(), where) )     
		goto label_cond_49;
	return 0x0;
	// 2071    .line 95
label_cond_49:
	if ( this->isValid(android::icu::impl::ValidIdentifiers_S_Datatype::region, locale->getCountry(), where) )     
		goto label_cond_57;
	return 0x0;
	// 2089    .line 96
label_cond_57:
	if ( variantString->isEmpty() )     
		goto label_cond_7c;
	cVar0 = android::icu::impl::locale::LocaleValidityChecker::SEPARATOR->split(variantString);
	cVar1 = 0x0;
label_goto_65:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_7c;
	//    .local v11, "variant":Ljava/lang/String;
	if ( this->isValid(android::icu::impl::ValidIdentifiers_S_Datatype::variant, cVar0[cVar1], where) )     
		goto label_cond_79;
	return 0x0;
	// 2133    .line 97
label_cond_79:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_65;
	// 2139    .line 101
	// 2140    .end local v11    # "variant":Ljava/lang/String;
label_cond_7c:
	c_S_iterator = locale->getExtensionKeys()->iterator();
	//    .local v4, "c$iterator":Ljava/util/Iterator;
label_cond_80:
label_goto_80:
	if ( !(c_S_iterator->hasNext()) )  
		goto label_cond_ea;
	c = c_S_iterator->next();
	c->checkCast("java::lang::Character");
	//    .local v3, "c":Ljava/lang/Character;
	try {
	//label_try_start_8c:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	datatype = android::icu::impl::ValidIdentifiers_S_Datatype::valueOf(cVar3->append(c)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->toString());
	//    .local v5, "datatype":Landroid/icu/impl/ValidIdentifiers$Datatype;
	// switch
	{
	auto item = ( android::icu::impl::locale::LocaleValidityChecker::-getandroid-icu-impl-ValidIdentifiers$DatatypeSwitchesValues({const[class].FS-Param})[datatype->ordinal()] );
	if (item == 1) goto label_pswitch_b2;
	if (item == 2) goto label_pswitch_b2;
	if (item == 3) goto label_pswitch_ca;
	}
	goto label_goto_80;
	// 2202    .line 109
label_pswitch_b2:
	//label_try_end_c5:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_cc;
	}
	//    .catch Ljava/lang/Exception; {:try_start_8c .. :try_end_c5} :catch_cc
	if ( this->isValidU(locale, datatype, locale->getExtension(c->charValue()), where) )     
		goto label_cond_80;
	return 0x0;
	// 2232    .line 106
label_pswitch_ca:
	return 0x1;
	// 2238    .line 112
	// 2239    .end local v5    # "datatype":Landroid/icu/impl/ValidIdentifiers$Datatype;
label_catch_cc:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "e":Ljava/lang/Exception;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	return where->set(android::icu::impl::ValidIdentifiers_S_Datatype::illegal, cVar4->append(c)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->toString());
	// 2273    .line 116
	// 2274    .end local v3    # "c":Ljava/lang/Character;
	// 2275    .end local v6    # "e":Ljava/lang/Exception;
label_cond_ea:
	return 0x1;
	// 2281    .line 104
	// 2282    :pswitch_data_ec
	// 2283    .packed-switch 0x1
	// 2284        :pswitch_b2
	// 2285        :pswitch_b2
	// 2286        :pswitch_ca
	// 2287    .end packed-switch

}


