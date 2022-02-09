// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocalePriorityList.smali
#include "java2ctype.h"
#include "android.icu.util.LocalePriorityList_S_1.h"
#include "android.icu.util.LocalePriorityList_S_Builder.h"
#include "android.icu.util.LocalePriorityList.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Double.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Comparator.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.regex.Pattern.h"

static android::icu::util::LocalePriorityList::D0;
static android::icu::util::LocalePriorityList::D1;
static android::icu::util::LocalePriorityList::languageSplitter;
static android::icu::util::LocalePriorityList::myDescendingDouble;
static android::icu::util::LocalePriorityList::weightSplitter;
// .method static synthetic -get0()Ljava/lang/Double;
std::shared_ptr<java::lang::Double> android::icu::util::LocalePriorityList::_get0()
{
	
	return android::icu::util::LocalePriorityList::D1;

}
// .method static synthetic -get1()Ljava/util/regex/Pattern;
std::shared_ptr<java::util::regex::Pattern> android::icu::util::LocalePriorityList::_get1()
{
	
	return android::icu::util::LocalePriorityList::languageSplitter;

}
// .method static synthetic -get2(Landroid/icu/util/LocalePriorityList;)Ljava/util/Map;
std::shared_ptr<java::util::Map> android::icu::util::LocalePriorityList::_get2(std::shared_ptr<android::icu::util::LocalePriorityList> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/LocalePriorityList;
	return _this->languagesAndWeights;

}
// .method static synthetic -get3()Ljava/util/Comparator;
std::shared_ptr<java::util::Comparator> android::icu::util::LocalePriorityList::_get3()
{
	
	return android::icu::util::LocalePriorityList::myDescendingDouble;

}
// .method static synthetic -get4()Ljava/util/regex/Pattern;
std::shared_ptr<java::util::regex::Pattern> android::icu::util::LocalePriorityList::_get4()
{
	
	return android::icu::util::LocalePriorityList::weightSplitter;

}
// .method static constructor <clinit>()V
void android::icu::util::LocalePriorityList::static_cinit()
{
	
	std::shared_ptr<android::icu::util::LocalePriorityList_S_1> cVar0;
	
	android::icu::util::LocalePriorityList::D1 = java::lang::Double::valueOf(0x3ff0000000000000L);
	android::icu::util::LocalePriorityList::languageSplitter = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*,\\s*")));
	android::icu::util::LocalePriorityList::weightSplitter = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("\\s*(\\S*)\\s*;\\s*q\\s*=\\s*(\\S*)")));
	cVar0 = std::make_shared<android::icu::util::LocalePriorityList_S_1>();
	android::icu::util::LocalePriorityList::myDescendingDouble = cVar0;
	return;

}
// .method private constructor <init>(Ljava/util/Map;)V
android::icu::util::LocalePriorityList::LocalePriorityList(std::shared_ptr<java::util::Map<android::icu::util::ULocale,java::lang::Double>> languageToWeight)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 152        value = {
	// 153            "(",
	// 154            "Ljava/util/Map",
	// 155            "<",
	// 156            "Landroid/icu/util/ULocale;",
	// 157            "Ljava/lang/Double;",
	// 158            ">;)V"
	// 159        }
	// 160    .end annotation
	//    .local p1, "languageToWeight":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
	// 165    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->languagesAndWeights = languageToWeight;
	return;

}
// .method synthetic constructor <init>(Ljava/util/Map;Landroid/icu/util/LocalePriorityList;)V
android::icu::util::LocalePriorityList::LocalePriorityList(std::shared_ptr<java::util::Map> languageToWeight,std::shared_ptr<android::icu::util::LocalePriorityList> _this1)
{
	
	//    .param p1, "languageToWeight"    # Ljava/util/Map;
	//    .param p2, "-this1"    # Landroid/icu/util/LocalePriorityList;
	android::icu::util::LocalePriorityList::(languageToWeight);
	return;

}
// .method public static add(Landroid/icu/util/LocalePriorityList;)Landroid/icu/util/LocalePriorityList$Builder;
std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> android::icu::util::LocalePriorityList::add(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList)
{
	
	std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> cVar0;
	
	//    .param p0, "languagePriorityList"    # Landroid/icu/util/LocalePriorityList;
	cVar0 = std::make_shared<android::icu::util::LocalePriorityList_S_Builder>(0x0);
	return cVar0->add(languagePriorityList);

}
// .method public static add(Landroid/icu/util/ULocale;D)Landroid/icu/util/LocalePriorityList$Builder;
std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> android::icu::util::LocalePriorityList::add(std::shared_ptr<android::icu::util::ULocale> languageCode,double weight)
{
	
	std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> cVar0;
	
	//    .param p0, "languageCode"    # Landroid/icu/util/ULocale;
	//    .param p1, "weight"    # D
	cVar0 = std::make_shared<android::icu::util::LocalePriorityList_S_Builder>(0x0);
	return cVar0->add(languageCode, weight);

}
// .method public static add(Ljava/lang/String;)Landroid/icu/util/LocalePriorityList$Builder;
std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> android::icu::util::LocalePriorityList::add(std::shared_ptr<java::lang::String> acceptLanguageString)
{
	
	std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> cVar0;
	
	//    .param p0, "acceptLanguageString"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::LocalePriorityList_S_Builder>(0x0);
	return cVar0->add(acceptLanguageString);

}
// .method public static varargs add([Landroid/icu/util/ULocale;)Landroid/icu/util/LocalePriorityList$Builder;
std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> android::icu::util::LocalePriorityList::add(std::shared_ptr<std::vector<android::icu::util::ULocale>> languageCode)
{
	
	std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> cVar0;
	
	//    .param p0, "languageCode"    # [Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::util::LocalePriorityList_S_Builder>(0x0);
	return cVar0->add(languageCode);

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::LocalePriorityList::equals(std::shared_ptr<java::lang::Object> o)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::util::LocalePriorityList> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "o"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( o )     
		goto label_cond_4;
	return cVar0;
	// 277    .line 167
label_cond_4:
	if ( this != o )
		goto label_cond_8;
	return 0x1;
	// 286    .line 171
label_cond_8:
	try {
	//label_try_start_8:
	cVar1 = o;
	cVar1->checkCast("android::icu::util::LocalePriorityList");
	//    .local v2, "that":Landroid/icu/util/LocalePriorityList;
	//label_try_end_13:
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	//    .catch Ljava/lang/RuntimeException; {:try_start_8 .. :try_end_13} :catch_15
	return this->languagesAndWeights->equals(cVar1->languagesAndWeights);
	// 309    .line 173
	// 310    .end local v2    # "that":Landroid/icu/util/LocalePriorityList;
label_catch_15:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/RuntimeException;
	return cVar0;

}
// .method public getWeight(Landroid/icu/util/ULocale;)Ljava/lang/Double;
std::shared_ptr<java::lang::Double> android::icu::util::LocalePriorityList::getWeight(std::shared_ptr<android::icu::util::ULocale> language)
{
	
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "language"    # Landroid/icu/util/ULocale;
	cVar0 = this->languagesAndWeights->get(language);
	cVar0->checkCast("java::lang::Double");
	return cVar0;

}
// .method public hashCode()I
int android::icu::util::LocalePriorityList::hashCode()
{
	
	return this->languagesAndWeights->hashCode();

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<android::icu::util::ULocale>> android::icu::util::LocalePriorityList::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 353        value = {
	// 354            "()",
	// 355            "Ljava/util/Iterator",
	// 356            "<",
	// 357            "Landroid/icu/util/ULocale;",
	// 358            ">;"
	// 359        }
	// 360    .end annotation
	return this->languagesAndWeights->keySet()->iterator();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocalePriorityList::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::util::Iterator> language_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> language;
	std::shared_ptr<java::lang::Double> cVar0;
	double weight;
	
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "result":Ljava/lang/StringBuilder;
	language_S_iterator = this->languagesAndWeights->keySet()->iterator();
	//    .local v1, "language$iterator":Ljava/util/Iterator;
label_cond_f:
label_goto_f:
	if ( !(language_S_iterator->hasNext()) )  
		goto label_cond_4b;
	language = language_S_iterator->next();
	language->checkCast("android::icu::util::ULocale");
	//    .local v0, "language":Landroid/icu/util/ULocale;
	if ( !(result->length()) )  
		goto label_cond_27;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_27:
	result->append(language);
	cVar0 = this->languagesAndWeights->get(language);
	cVar0->checkCast("java::lang::Double");
	weight = cVar0->doubleValue();
	//    .local v4, "weight":D
	if ( !((weight < android::icu::util::LocalePriorityList::D1->doubleValue())) )  
		goto label_cond_f;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";q=")))->append(weight);
	goto label_goto_f;
	// 466    .line 149
	// 467    .end local v0    # "language":Landroid/icu/util/ULocale;
	// 468    .end local v4    # "weight":D
label_cond_4b:
	return result->toString();

}


