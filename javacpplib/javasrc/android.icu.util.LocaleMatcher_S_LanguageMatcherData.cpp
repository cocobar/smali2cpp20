// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher$LanguageMatcherData.smali
#include "java2ctype.h"
#include "android.icu.impl.Relation.h"
#include "android.icu.impl.Row_S_R3.h"
#include "android.icu.impl.Row.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.LocaleMatcher_S_LanguageMatcherData.h"
#include "android.icu.util.LocaleMatcher_S_Level.h"
#include "android.icu.util.LocaleMatcher_S_LocalePatternMatcher.h"
#include "android.icu.util.LocaleMatcher_S_ScoreData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"

static android::icu::util::LocaleMatcher_S_LanguageMatcherData::_android_icu_util_LocaleMatcher_S_LevelSwitchesValues;
// .method private static synthetic -getandroid-icu-util-LocaleMatcher$LevelSwitchesValues()[I
int android::icu::util::LocaleMatcher_S_LanguageMatcherData::_getandroid_icu_util_LocaleMatcher_S_LevelSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::util::LocaleMatcher_S_LanguageMatcherData::_android_icu_util_LocaleMatcher_S_LevelSwitchesValues) )  
		goto label_cond_7;
	return android::icu::util::LocaleMatcher_S_LanguageMatcherData::_android_icu_util_LocaleMatcher_S_LevelSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::util::LocaleMatcher_S_Level::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::util::LocaleMatcher_S_Level::language->ordinal()] = 0x1;
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
	cVar0[android::icu::util::LocaleMatcher_S_Level::region->ordinal()] = 0x2;
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
	cVar0[android::icu::util::LocaleMatcher_S_Level::script->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_2c
label_goto_29:
	android::icu::util::LocaleMatcher_S_LanguageMatcherData::_android_icu_util_LocaleMatcher_S_LevelSwitchesValues = cVar0;
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
// .method public constructor <init>()V
android::icu::util::LocaleMatcher_S_LanguageMatcherData::LocaleMatcher_S_LanguageMatcherData()
{
	
	std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> cVar0;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> cVar1;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> cVar2;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 145    .end annotation
	// 149    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::util::LocaleMatcher_S_ScoreData>(android::icu::util::LocaleMatcher_S_Level::language);
	this->languageScores = cVar0;
	cVar1 = std::make_shared<android::icu::util::LocaleMatcher_S_ScoreData>(android::icu::util::LocaleMatcher_S_Level::script);
	this->scriptScores = cVar1;
	cVar2 = std::make_shared<android::icu::util::LocaleMatcher_S_ScoreData>(android::icu::util::LocaleMatcher_S_Level::region);
	this->regionScores = cVar2;
	this->frozen = 0x0;
	return;

}
// .method private addDistance(Ljava/lang/String;Ljava/lang/String;IZLjava/lang/String;)Landroid/icu/util/LocaleMatcher$LanguageMatcherData;
std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> android::icu::util::LocaleMatcher_S_LanguageMatcherData::addDistance(std::shared_ptr<java::lang::String> desired,std::shared_ptr<java::lang::String> supported,int percent,bool oneway,std::shared_ptr<java::lang::String> comment)
{
	
	double score;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LocalePatternMatcher> desiredMatcher;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> desiredLen;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LocalePatternMatcher> supportedMatcher;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::impl::Row_S_R3> data;
	std::shared_ptr<android::icu::impl::Row_S_R3> cVar2;
	int desiredEqualsSupported;
	std::shared_ptr<java::lang::String> dlanguage;
	std::shared_ptr<java::lang::String> slanguage;
	std::shared_ptr<java::lang::String> dregion;
	std::shared_ptr<java::lang::String> sregion;
	std::shared_ptr<java::lang::String> dscript;
	std::shared_ptr<java::lang::String> sscript;
	
	//    .param p1, "desired"    # Ljava/lang/String;
	//    .param p2, "supported"    # Ljava/lang/String;
	//    .param p3, "percent"    # I
	//    .param p4, "oneway"    # Z
	//    .param p5, "comment"    # Ljava/lang/String;
	score = (0x3ff0000000000000L -  ((double)(percent) /  0x4059000000000000L));
	//    .local v10, "score":D
	desiredMatcher = std::make_shared<android::icu::util::LocaleMatcher_S_LocalePatternMatcher>(desired);
	//    .local v6, "desiredMatcher":Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;
	desiredLen = desiredMatcher->getLevel();
	//    .local v5, "desiredLen":Landroid/icu/util/LocaleMatcher$Level;
	var18 = supportedMatcher(supported);
	//    .local v16, "supportedMatcher":Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;
	//    .local v15, "supportedLen":Landroid/icu/util/LocaleMatcher$Level;
	if ( desiredLen == supportedMatcher->getLevel() )
		goto label_cond_54;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Lengths unequal: ")))->append(desired)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(supported)->toString());
	// throw
	throw cVar0;
	// 288    .line 710
label_cond_54:
	data = android::icu::impl::Row::of(desiredMatcher, supportedMatcher, java::lang::Double::valueOf(score));
	//    .local v2, "data":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
	if ( !(oneway) )  
		goto label_cond_77;
	cVar2 = 0x0;
label_goto_63:
	desiredEqualsSupported = desiredMatcher->equals(supportedMatcher);
	//    .local v4, "desiredEqualsSupported":Z
	// switch
	{
	auto item = ( android::icu::util::LocaleMatcher_S_LanguageMatcherData::-getandroid-icu-util-LocaleMatcher$LevelSwitchesValues({const[class].FS-Param})[desiredLen->ordinal()] );
	if (item == 1) goto label_pswitch_84;
	if (item == 2) goto label_pswitch_ce;
	if (item == 3) goto label_pswitch_a9;
	}
label_cond_76:
label_goto_76:
	return this;
	// 335    .line 711
	// 336    .end local v4    # "desiredEqualsSupported":Z
label_cond_77:
	android::icu::impl::Row::of(supportedMatcher, desiredMatcher, java::lang::Double::valueOf(score));
	//    .local v3, "data2":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
	goto label_goto_63;
	// 353    .line 715
	// 354    .end local v3    # "data2":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
	// 355    .restart local v4    # "desiredEqualsSupported":Z
label_pswitch_84:
	dlanguage = desiredMatcher->getLanguage();
	//    .local v7, "dlanguage":Ljava/lang/String;
	slanguage = supportedMatcher->getLanguage();
	//    .local v12, "slanguage":Ljava/lang/String;
	this->languageScores->addDataToScores(dlanguage, slanguage, data);
	if ( oneway )     
		goto label_cond_76;
	if ( !(( desiredEqualsSupported ^ 0x1)) )  
		goto label_cond_76;
	this->languageScores->addDataToScores(slanguage, dlanguage, cVar2);
	goto label_goto_76;
	// 399    .line 723
	// 400    .end local v7    # "dlanguage":Ljava/lang/String;
	// 401    .end local v12    # "slanguage":Ljava/lang/String;
label_pswitch_a9:
	dscript = desiredMatcher->getScript();
	//    .local v9, "dscript":Ljava/lang/String;
	sscript = supportedMatcher->getScript();
	//    .local v14, "sscript":Ljava/lang/String;
	this->scriptScores->addDataToScores(dscript, sscript, data);
	if ( oneway )     
		goto label_cond_76;
	if ( !(( desiredEqualsSupported ^ 0x1)) )  
		goto label_cond_76;
	this->scriptScores->addDataToScores(sscript, dscript, cVar2);
	goto label_goto_76;
	// 445    .line 731
	// 446    .end local v9    # "dscript":Ljava/lang/String;
	// 447    .end local v14    # "sscript":Ljava/lang/String;
label_pswitch_ce:
	dregion = desiredMatcher->getRegion();
	//    .local v8, "dregion":Ljava/lang/String;
	sregion = supportedMatcher->getRegion();
	//    .local v13, "sregion":Ljava/lang/String;
	this->regionScores->addDataToScores(dregion, sregion, data);
	if ( oneway )     
		goto label_cond_76;
	if ( !(( desiredEqualsSupported ^ 0x1)) )  
		goto label_cond_76;
	this->regionScores->addDataToScores(sregion, dregion, cVar2);
	goto label_goto_76;
	// 491    .line 713
	// 492    nop
	// 494    :pswitch_data_f4
	// 495    .packed-switch 0x1
	// 496        :pswitch_84
	// 497        :pswitch_ce
	// 498        :pswitch_a9
	// 499    .end packed-switch

}
// .method public addDistance(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)Landroid/icu/util/LocaleMatcher$LanguageMatcherData;
std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> android::icu::util::LocaleMatcher_S_LanguageMatcherData::addDistance(std::shared_ptr<java::lang::String> desired,std::shared_ptr<java::lang::String> supported,int percent,std::shared_ptr<java::lang::String> comment)
{
	
	//    .param p1, "desired"    # Ljava/lang/String;
	//    .param p2, "supported"    # Ljava/lang/String;
	//    .param p3, "percent"    # I
	//    .param p4, "comment"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 511    .end annotation
	return this->addDistance(desired, supported, percent, 0x0, comment);

}
// .method public addDistance(Ljava/lang/String;Ljava/lang/String;IZ)Landroid/icu/util/LocaleMatcher$LanguageMatcherData;
std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> android::icu::util::LocaleMatcher_S_LanguageMatcherData::addDistance(std::shared_ptr<java::lang::String> desired,std::shared_ptr<java::lang::String> supported,int percent,bool oneway)
{
	
	//    .param p1, "desired"    # Ljava/lang/String;
	//    .param p2, "supported"    # Ljava/lang/String;
	//    .param p3, "percent"    # I
	//    .param p4, "oneway"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 541    .end annotation
	return this->addDistance(desired, supported, percent, oneway, 0x0);

}
// .method public cloneAsThawed()Landroid/icu/util/LocaleMatcher$LanguageMatcherData;
std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> android::icu::util::LocaleMatcher_S_LanguageMatcherData::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar0;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> result;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 567    .end annotation
	try {
	//label_try_start_0:
	result = this->clone();
	result->checkCast("android::icu::util::LocaleMatcher_S_LanguageMatcherData");
	//    .local v1, "result":Landroid/icu/util/LocaleMatcher$LanguageMatcherData;
	result->languageScores = this->languageScores->cloneAsThawed();
	result->scriptScores = this->scriptScores->cloneAsThawed();
	result->regionScores = this->regionScores->cloneAsThawed();
	result->frozen = 0x0;
	//label_try_end_21:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_22;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_21} :catch_22
	return result;
	// 616    .line 757
	// 617    .end local v1    # "result":Landroid/icu/util/LocaleMatcher$LanguageMatcherData;
label_catch_22:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public freeze()Landroid/icu/util/LocaleMatcher$LanguageMatcherData;
std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> android::icu::util::LocaleMatcher_S_LanguageMatcherData::freeze()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 647    .end annotation
	this->languageScores->freeze();
	this->regionScores->freeze();
	this->scriptScores->freeze();
	this->matchingLanguages = this->languageScores->getMatchingLanguages();
	this->frozen = 0x1;
	return this;

}
// .method public isFrozen()Z
bool android::icu::util::LocaleMatcher_S_LanguageMatcherData::isFrozen()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 700    .end annotation
	return this->frozen;

}
// .method public match(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)D
double android::icu::util::LocaleMatcher_S_LanguageMatcherData::match(std::shared_ptr<android::icu::util::ULocale> a,std::shared_ptr<android::icu::util::ULocale> aMax,std::shared_ptr<android::icu::util::ULocale> b,std::shared_ptr<android::icu::util::ULocale> bMax)
{
	
	auto diff;
	double diff;
	
	//    .param p1, "a"    # Landroid/icu/util/ULocale;
	//    .param p2, "aMax"    # Landroid/icu/util/ULocale;
	//    .param p3, "b"    # Landroid/icu/util/ULocale;
	//    .param p4, "bMax"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 716    .end annotation
	diff = 0x0;
	//    .local v8, "diff":D
	diff = (0x0 +  this->languageScores->getScore(aMax, a->getLanguage(), aMax->getLanguage(), bMax, b->getLanguage(), bMax->getLanguage()));
	if ( (diff < 0x3feff7ced916872bL) <= 0 )
		goto label_cond_2a;
	return 0x0;
	// 768    .line 650
label_cond_2a:
	diff = ( diff + this->scriptScores->getScore(aMax, a->getScript(), aMax->getScript(), bMax, b->getScript(), bMax->getScript()));
	diff = ( diff + this->regionScores->getScore(aMax, a->getCountry(), aMax->getCountry(), bMax, b->getCountry(), bMax->getCountry()));
	if ( a->getVariant()->equals(b->getVariant()) )     
		goto label_cond_70;
	diff = ( diff + 0x3f847ae147ae147bL);
label_cond_70:
	if ( (diff > 0x0) >= 0 )
		goto label_cond_7c;
	diff = 0x0;
label_cond_78:
label_goto_78:
	return ( 0x3ff0000000000000L - diff);
	// 867    .line 658
label_cond_7c:
	if ( (diff < 0x3ff0000000000000L) <= 0 )
		goto label_cond_78;
	diff = 0x3ff0000000000000L;
	goto label_goto_78;

}
// .method public matchingLanguages()Landroid/icu/impl/Relation;
std::shared_ptr<android::icu::impl::Relation<java::lang::String,java::lang::String>> android::icu::util::LocaleMatcher_S_LanguageMatcherData::matchingLanguages()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 884        value = {
	// 885            "()",
	// 886            "Landroid/icu/impl/Relation",
	// 887            "<",
	// 888            "Ljava/lang/String;",
	// 889            "Ljava/lang/String;",
	// 890            ">;"
	// 891        }
	// 892    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 895    .end annotation
	return this->matchingLanguages;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleMatcher_S_LanguageMatcherData::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 907    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->languageScores)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\t")))->append(this->scriptScores)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\t")))->append(this->regionScores)->toString();

}


