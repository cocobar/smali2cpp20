// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocalePriorityList$Builder.smali
#include "java2ctype.h"
#include "android.icu.util.LocalePriorityList_S_Builder.h"
#include "android.icu.util.LocalePriorityList.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashMap.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"

// .method private constructor <init>()V
android::icu::util::LocalePriorityList_S_Builder::LocalePriorityList_S_Builder()
{
	
	std::shared_ptr<java::util::LinkedHashMap> cVar0;
	
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::LinkedHashMap>();
	this->languageToWeight = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/LocalePriorityList$Builder;)V
android::icu::util::LocalePriorityList_S_Builder::LocalePriorityList_S_Builder(std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/util/LocalePriorityList$Builder;
	// 056    invoke-direct {p0}, Landroid/icu/util/LocalePriorityList$Builder;-><init>()V
	return;

}
// .method public add(Landroid/icu/util/LocalePriorityList;)Landroid/icu/util/LocalePriorityList$Builder;
std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> android::icu::util::LocalePriorityList_S_Builder::add(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList)
{
	
	std::shared_ptr<java::util::Iterator> language_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> language;
	std::shared_ptr<java::lang::Double> cVar0;
	
	//    .param p1, "languagePriorityList"    # Landroid/icu/util/LocalePriorityList;
	language_S_iterator = android::icu::util::LocalePriorityList::-get2(languagePriorityList)->keySet()->iterator();
	//    .local v1, "language$iterator":Ljava/util/Iterator;
label_goto_c:
	if ( !(language_S_iterator->hasNext()) )  
		goto label_cond_2a;
	language = language_S_iterator->next();
	language->checkCast("android::icu::util::ULocale");
	//    .local v0, "language":Landroid/icu/util/ULocale;
	cVar0 = android::icu::util::LocalePriorityList::-get2(languagePriorityList)->get(language);
	cVar0->checkCast("java::lang::Double");
	this->add(language, cVar0->doubleValue());
	goto label_goto_c;
	// 115    .line 263
	// 116    .end local v0    # "language":Landroid/icu/util/ULocale;
label_cond_2a:
	return this;

}
// .method public add(Landroid/icu/util/ULocale;)Landroid/icu/util/LocalePriorityList$Builder;
std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> android::icu::util::LocalePriorityList_S_Builder::add(std::shared_ptr<android::icu::util::ULocale> languageCode)
{
	
	//    .param p1, "languageCode"    # Landroid/icu/util/ULocale;
	return this->add(languageCode, android::icu::util::LocalePriorityList::-get0({const[class].FS-Param})->doubleValue());

}
// .method public add(Landroid/icu/util/ULocale;D)Landroid/icu/util/LocalePriorityList$Builder;
std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> android::icu::util::LocalePriorityList_S_Builder::add(std::shared_ptr<android::icu::util::ULocale> languageCode,double cVar0)
{
	
	double cVar0;
	
	//    .param p1, "languageCode"    # Landroid/icu/util/ULocale;
	//    .param p2, "weight"    # D
	if ( !(this->languageToWeight->containsKey(languageCode)) )  
		goto label_cond_d;
	this->languageToWeight->remove(languageCode);
label_cond_d:
	if ( (cVar0 > 0x0) > 0 ) 
		goto label_cond_14;
	return this;
	// 173    .line 304
label_cond_14:
	if ( (cVar0 < android::icu::util::LocalePriorityList::-get0({const[class].FS-Param})->doubleValue()) <= 0 )
		goto label_cond_28;
	cVar0 = android::icu::util::LocalePriorityList::-get0({const[class].FS-Param})->doubleValue();
label_cond_28:
	this->languageToWeight->put(languageCode, java::lang::Double::valueOf(cVar0));
	return this;

}
// .method public add(Ljava/lang/String;)Landroid/icu/util/LocalePriorityList$Builder;
std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> android::icu::util::LocalePriorityList_S_Builder::add(std::shared_ptr<java::lang::String> acceptLanguageList)
{
	
	int cVar0;
	int cVar1;
	auto items;
	std::shared_ptr<java::util::regex::Matcher> itemMatcher;
	int cVar2;
	std::shared_ptr<java::lang::CharSequence> item;
	std::shared_ptr<android::icu::util::ULocale> language;
	double weight;
	int cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<android::icu::util::ULocale> cVar8;
	
	//    .param p1, "acceptLanguageList"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	items = android::icu::util::LocalePriorityList::-get1({const[class].FS-Param})->split(acceptLanguageList->trim());
	//    .local v2, "items":[Ljava/lang/String;
	itemMatcher = android::icu::util::LocalePriorityList::-get4({const[class].FS-Param})->matcher(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	//    .local v1, "itemMatcher":Ljava/util/regex/Matcher;
	cVar2 = cVar1;
label_goto_1b:
	if ( cVar2 >= items->size() )
		goto label_cond_82;
	item = items[cVar2];
	//    .local v0, "item":Ljava/lang/String;
	if ( !(itemMatcher->reset(item)->matches()) )  
		goto label_cond_73;
	language = std::make_shared<android::icu::util::ULocale>(itemMatcher->group(cVar0));
	//    .local v3, "language":Landroid/icu/util/ULocale;
	weight = java::lang::Double::parseDouble(itemMatcher->group(0x2));
	//    .local v4, "weight":D
	if ( (weight < 0x0) < 0 ) 
		goto label_cond_6a;
	if ( (weight > android::icu::util::LocalePriorityList::-get0({const[class].FS-Param})->doubleValue()) > 0 ) 
		goto label_cond_6a;
	cVar3 = cVar0;
label_goto_4e:
	if ( cVar3 )     
		goto label_cond_6c;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal weight, must be 0..1: ")))->append(weight)->toString());
	// throw
	throw cVar4;
label_cond_6a:
	cVar3 = cVar1;
	goto label_goto_4e;
	// 344    .line 328
label_cond_6c:
	this->add(language, weight);
	//    .end local v3    # "language":Landroid/icu/util/ULocale;
	//    .end local v4    # "weight":D
label_cond_6f:
label_goto_6f:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_1b;
	// 359    .line 329
label_cond_73:
	if ( !(item->length()) )  
		goto label_cond_6f;
	cVar8 = std::make_shared<android::icu::util::ULocale>(item);
	this->add(cVar8);
	goto label_goto_6f;
	// 376    .line 333
	// 377    .end local v0    # "item":Ljava/lang/String;
label_cond_82:
	return this;

}
// .method public varargs add([Landroid/icu/util/ULocale;)Landroid/icu/util/LocalePriorityList$Builder;
std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> android::icu::util::LocalePriorityList_S_Builder::add(std::shared_ptr<std::vector<android::icu::util::ULocale>> languageCodes)
{
	
	int cVar0;
	
	//    .param p1, "languageCodes"    # [Landroid/icu/util/ULocale;
	cVar0 = 0x0;
label_goto_2:
	if ( cVar0 >= languageCodes->size() )
		goto label_cond_14;
	//    .local v0, "languageCode":Landroid/icu/util/ULocale;
	this->add(languageCodes[cVar0], android::icu::util::LocalePriorityList::-get0({const[class].FS-Param})->doubleValue());
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_2;
	// 414    .line 286
	// 415    .end local v0    # "languageCode":Landroid/icu/util/ULocale;
label_cond_14:
	return this;

}
// .method public build()Landroid/icu/util/LocalePriorityList;
std::shared_ptr<android::icu::util::LocalePriorityList> android::icu::util::LocalePriorityList_S_Builder::build()
{
	
	return this->build(0x0);

}
// .method public build(Z)Landroid/icu/util/LocalePriorityList;
std::shared_ptr<android::icu::util::LocalePriorityList> android::icu::util::LocalePriorityList_S_Builder::build(bool preserveWeights)
{
	
	std::shared_ptr<java::util::TreeMap> doubleCheck;
	std::shared_ptr<java::util::Iterator> lang_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> lang;
	std::shared_ptr<java::lang::Double> weight;
	std::shared_ptr<java::util::Set> s;
	std::shared_ptr<java::util::LinkedHashSet> s;
	std::shared_ptr<java::util::LinkedHashMap> temp;
	std::shared_ptr<java::util::Iterator> langEntry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> langEntry;
	std::shared_ptr<java::util::Set> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<android::icu::util::LocalePriorityList> cVar3;
	
	//    .param p1, "preserveWeights"    # Z
	doubleCheck = std::make_shared<java::util::TreeMap>(android::icu::util::LocalePriorityList::-get3({const[class].FS-Param}));
	//    .local v0, "doubleCheck":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/Double;Ljava/util/Set<Landroid/icu/util/ULocale;>;>;"
	lang_S_iterator = this->languageToWeight->keySet()->iterator();
	//    .local v2, "lang$iterator":Ljava/util/Iterator;
label_goto_14:
	if ( !(lang_S_iterator->hasNext()) )  
		goto label_cond_3c;
	lang = lang_S_iterator->next();
	lang->checkCast("android::icu::util::ULocale");
	//    .local v1, "lang":Landroid/icu/util/ULocale;
	weight = this->languageToWeight->get(lang);
	weight->checkCast("java::lang::Double");
	//    .local v7, "weight":Ljava/lang/Double;
	s = doubleCheck->get(weight);
	s->checkCast("java::util::Set");
	//    .local v5, "s":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	if ( s )     
		goto label_cond_38;
	//    .end local v5    # "s":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	s = std::make_shared<java::util::LinkedHashSet>();
	//    .restart local v5    # "s":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	doubleCheck->put(weight, s);
label_cond_38:
	s->add(lang);
	goto label_goto_14;
	// 515    .line 241
	// 516    .end local v1    # "lang":Landroid/icu/util/ULocale;
	// 517    .end local v5    # "s":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	// 518    .end local v7    # "weight":Ljava/lang/Double;
label_cond_3c:
	temp = std::make_shared<java::util::LinkedHashMap>();
	//    .local v6, "temp":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
	langEntry_S_iterator = doubleCheck->entrySet()->iterator();
	//    .local v4, "langEntry$iterator":Ljava/util/Iterator;
label_cond_49:
	if ( !(langEntry_S_iterator->hasNext()) )  
		goto label_cond_7d;
	langEntry = langEntry_S_iterator->next();
	langEntry->checkCast("java::util::Map_S_Entry");
	//    .local v3, "langEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Double;Ljava/util/Set<Landroid/icu/util/ULocale;>;>;"
	weight = langEntry->getKey();
	weight->checkCast("java::lang::Double");
	//    .restart local v7    # "weight":Ljava/lang/Double;
	cVar0 = langEntry->getValue();
	cVar0->checkCast("java::util::Set");
	lang_S_iterator = cVar0->iterator();
label_goto_65:
	if ( !(lang_S_iterator->hasNext()) )  
		goto label_cond_49;
	lang = lang_S_iterator->next();
	lang->checkCast("android::icu::util::ULocale");
	//    .restart local v1    # "lang":Landroid/icu/util/ULocale;
	if ( !(preserveWeights) )  
		goto label_cond_78;
	cVar1 = weight;
label_goto_74:
	temp->put(lang, cVar1);
	goto label_goto_65;
label_cond_78:
	cVar1 = android::icu::util::LocalePriorityList::-get0({const[class].FS-Param});
	goto label_goto_74;
	// 599    .line 248
	// 600    .end local v1    # "lang":Landroid/icu/util/ULocale;
	// 601    .end local v3    # "langEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Double;Ljava/util/Set<Landroid/icu/util/ULocale;>;>;"
	// 602    .end local v7    # "weight":Ljava/lang/Double;
label_cond_7d:
	cVar3 = std::make_shared<android::icu::util::LocalePriorityList>(java::util::Collections::unmodifiableMap(temp), 0x0);
	return cVar3;

}


