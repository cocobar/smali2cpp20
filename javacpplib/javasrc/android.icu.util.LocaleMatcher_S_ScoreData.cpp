// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher$ScoreData.smali
#include "java2ctype.h"
#include "android.icu.impl.Relation.h"
#include "android.icu.impl.Row_S_R3.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.ICUException.h"
#include "android.icu.util.LocaleMatcher_S_Level.h"
#include "android.icu.util.LocaleMatcher_S_LocalePatternMatcher.h"
#include "android.icu.util.LocaleMatcher_S_ScoreData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Double.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashMap.h"
#include "java.util.LinkedHashSet.h"

static android::icu::util::LocaleMatcher_S_ScoreData::maxUnequal_changeD_sameS = 0.5;
static android::icu::util::LocaleMatcher_S_ScoreData::maxUnequal_changeEqual = 0.75;
// .method public constructor <init>(Landroid/icu/util/LocaleMatcher$Level;)V
android::icu::util::LocaleMatcher_S_ScoreData::LocaleMatcher_S_ScoreData(std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> level)
{
	
	std::shared_ptr<java::util::LinkedHashSet> cVar0;
	
	//    .param p1, "level"    # Landroid/icu/util/LocaleMatcher$Level;
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::LinkedHashSet>();
	this->scores = cVar0;
	this->frozen = 0x0;
	this->level = level;
	return;

}
// .method private getRawScore(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)D
double android::icu::util::LocaleMatcher_S_ScoreData::getRawScore(std::shared_ptr<android::icu::util::ULocale> desiredLocale,std::shared_ptr<android::icu::util::ULocale> supportedLocale)
{
	
	std::shared_ptr<java::util::Iterator> datum_S_iterator;
	std::shared_ptr<android::icu::impl::Row_S_R3> datum;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LocalePatternMatcher> cVar0;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LocalePatternMatcher> cVar1;
	std::shared_ptr<java::lang::Double> cVar2;
	
	//    .param p1, "desiredLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "supportedLocale"    # Landroid/icu/util/ULocale;
	datum_S_iterator = this->scores->iterator();
	//    .local v1, "datum$iterator":Ljava/util/Iterator;
label_cond_6:
	if ( !(datum_S_iterator->hasNext()) )  
		goto label_cond_35;
	datum = datum_S_iterator->next();
	datum->checkCast("android::icu::impl::Row_S_R3");
	//    .local v0, "datum":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
	cVar0 = datum->get0();
	cVar0->checkCast("android::icu::util::LocaleMatcher_S_LocalePatternMatcher");
	if ( !(cVar0->matches(desiredLocale)) )  
		goto label_cond_6;
	cVar1 = datum->get1();
	cVar1->checkCast("android::icu::util::LocaleMatcher_S_LocalePatternMatcher");
	if ( !(cVar1->matches(supportedLocale)) )  
		goto label_cond_6;
	cVar2 = datum->get2();
	cVar2->checkCast("java::lang::Double");
	return cVar2->doubleValue();
	// 153    .line 550
	// 154    .end local v0    # "datum":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
label_cond_35:
	return this->level->worst;

}
// .method addDataToScores(Ljava/lang/String;Ljava/lang/String;Landroid/icu/impl/Row$R3;)V
void android::icu::util::LocaleMatcher_S_ScoreData::addDataToScores(std::shared_ptr<java::lang::String> desired,std::shared_ptr<java::lang::String> supported,std::shared_ptr<android::icu::impl::Row_S_R3<android::icu::util::LocaleMatcher_S_LocalePatternMatcher,android::icu::util::LocaleMatcher_S_LocalePatternMatcher,java::lang::Double>> data)
{
	
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "desired"    # Ljava/lang/String;
	//    .param p2, "supported"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 170        value = {
	// 171            "(",
	// 172            "Ljava/lang/String;",
	// 173            "Ljava/lang/String;",
	// 174            "Landroid/icu/impl/Row$R3",
	// 175            "<",
	// 176            "Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;",
	// 177            "Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;",
	// 178            "Ljava/lang/Double;",
	// 179            ">;)V"
	// 180        }
	// 181    .end annotation
	//    .local p3, "data":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
	//    .local v0, "added":Z
	if ( this->scores->add(data) )     
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::util::ICUException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("trying to add duplicate data: ")))->append(data)->toString());
	// throw
	throw cVar0;
	// 221    .line 521
label_cond_22:
	return;

}
// .method public cloneAsThawed()Landroid/icu/util/LocaleMatcher$ScoreData;
std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> android::icu::util::LocaleMatcher_S_ScoreData::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar1;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> result;
	std::shared_ptr<java::util::LinkedHashSet> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	result = this->clone();
	result->checkCast("android::icu::util::LocaleMatcher_S_ScoreData");
	//    .local v1, "result":Landroid/icu/util/LocaleMatcher$ScoreData;
	cVar0 = result->scores->clone();
	cVar0->checkCast("java::util::LinkedHashSet");
	result->scores = cVar0;
	result->frozen = 0x0;
	//label_try_end_13:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_13} :catch_14
	return result;
	// 260    .line 569
	// 261    .end local v1    # "result":Landroid/icu/util/LocaleMatcher$ScoreData;
label_catch_14:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar1 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public freeze()Landroid/icu/util/LocaleMatcher$ScoreData;
std::shared_ptr<android::icu::util::LocaleMatcher_S_ScoreData> android::icu::util::LocaleMatcher_S_ScoreData::freeze()
{
	
	return this;

}
// .method public getMatchingLanguages()Landroid/icu/impl/Relation;
std::shared_ptr<android::icu::impl::Relation<java::lang::String,java::lang::String>> android::icu::util::LocaleMatcher_S_ScoreData::getMatchingLanguages()
{
	
	std::shared_ptr<java::util::LinkedHashMap> cVar0;
	std::shared_ptr<android::icu::impl::Relation> desiredToSupported;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<android::icu::impl::Row_S_R3> item;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LocalePatternMatcher> desired;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LocalePatternMatcher> supported;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 309        value = {
	// 310            "()",
	// 311            "Landroid/icu/impl/Relation",
	// 312            "<",
	// 313            "Ljava/lang/String;",
	// 314            "Ljava/lang/String;",
	// 315            ">;"
	// 316        }
	// 317    .end annotation
	cVar0 = std::make_shared<java::util::LinkedHashMap>();
	desiredToSupported = android::icu::impl::Relation::of(cVar0, java::util::HashSet());
	//    .local v1, "desiredToSupported":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<Ljava/lang/String;Ljava/lang/String;>;"
	item_S_iterator = this->scores->iterator();
	//    .local v3, "item$iterator":Ljava/util/Iterator;
label_cond_11:
label_goto_11:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_41;
	item = item_S_iterator->next();
	item->checkCast("android::icu::impl::Row_S_R3");
	//    .local v2, "item":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
	desired = item->get0();
	desired->checkCast("android::icu::util::LocaleMatcher_S_LocalePatternMatcher");
	//    .local v0, "desired":Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;
	supported = item->get1();
	supported->checkCast("android::icu::util::LocaleMatcher_S_LocalePatternMatcher");
	//    .local v4, "supported":Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;
	if ( !(android::icu::util::LocaleMatcher_S_LocalePatternMatcher::-get0(desired)) )  
		goto label_cond_11;
	if ( !(android::icu::util::LocaleMatcher_S_LocalePatternMatcher::-get0(supported)) )  
		goto label_cond_11;
	desiredToSupported->put(android::icu::util::LocaleMatcher_S_LocalePatternMatcher::-get0(desired), android::icu::util::LocaleMatcher_S_LocalePatternMatcher::-get0(supported));
	goto label_goto_11;
	// 397    .line 594
	// 398    .end local v0    # "desired":Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;
	// 399    .end local v2    # "item":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
	// 400    .end local v4    # "supported":Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;
label_cond_41:
	desiredToSupported->freeze();
	return desiredToSupported;

}
// .method getScore(Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)D
double android::icu::util::LocaleMatcher_S_ScoreData::getScore(std::shared_ptr<android::icu::util::ULocale> dMax,std::shared_ptr<java::lang::String> desiredRaw,std::shared_ptr<java::lang::String> desiredMax,std::shared_ptr<android::icu::util::ULocale> sMax,std::shared_ptr<java::lang::String> supportedRaw,std::shared_ptr<java::lang::String> supportedMax)
{
	
	double distance;
	
	//    .param p1, "dMax"    # Landroid/icu/util/ULocale;
	//    .param p2, "desiredRaw"    # Ljava/lang/String;
	//    .param p3, "desiredMax"    # Ljava/lang/String;
	//    .param p4, "sMax"    # Landroid/icu/util/ULocale;
	//    .param p5, "supportedRaw"    # Ljava/lang/String;
	//    .param p6, "supportedMax"    # Ljava/lang/String;
	distance = 0x0;
	//    .local v0, "distance":D
	if ( desiredMax->equals(supportedMax) )     
		goto label_cond_d;
	distance = this->getRawScore(dMax, sMax);
label_cond_c:
label_goto_c:
	return distance;
	// 439    .line 528
label_cond_d:
	if ( desiredRaw->equals(supportedRaw) )     
		goto label_cond_c;
	distance = 0x3f50624dd2f1a9fcL;
	goto label_goto_c;

}
// .method public isFrozen()Z
bool android::icu::util::LocaleMatcher_S_ScoreData::isFrozen()
{
	
	return this->frozen;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleMatcher_S_ScoreData::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::util::Iterator> score_S_iterator;
	std::shared_ptr<android::icu::impl::Row_S_R3> score;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	result = cVar0->append(this->level);
	//    .local v0, "result":Ljava/lang/StringBuilder;
	score_S_iterator = this->scores->iterator();
	//    .local v2, "score$iterator":Ljava/util/Iterator;
label_goto_11:
	if ( !(score_S_iterator->hasNext()) )  
		goto label_cond_28;
	score = score_S_iterator->next();
	score->checkCast("android::icu::impl::Row_S_R3");
	//    .local v1, "score":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\t\t")))->append(score);
	goto label_goto_11;
	// 512    .line 558
	// 513    .end local v1    # "score":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Landroid/icu/util/LocaleMatcher$LocalePatternMatcher;Ljava/lang/Double;>;"
label_cond_28:
	return result->toString();

}


