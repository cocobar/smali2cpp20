// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\AnyTransliterator.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.AnyTransliterator_S_ScriptRunIterator.h"
#include "android.icu.text.AnyTransliterator.h"
#include "android.icu.text.CompoundTransliterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.TransliteratorIDParser.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static android::icu::text::AnyTransliterator::ANY = std::make_shared<java::lang::String>("Any");
static android::icu::text::AnyTransliterator::LATIN_PIVOT = std::make_shared<java::lang::String>("-Latin;Latin-");
static android::icu::text::AnyTransliterator::NULL_ID = std::make_shared<java::lang::String>("Null");
static android::icu::text::AnyTransliterator::TARGET_SEP = '-';
static android::icu::text::AnyTransliterator::VARIANT_SEP = '/';
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/UnicodeFilter;Ljava/lang/String;ILandroid/icu/text/Transliterator;Ljava/util/concurrent/ConcurrentHashMap;)V
android::icu::text::AnyTransliterator::AnyTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::text::UnicodeFilter> filter,std::shared_ptr<java::lang::String> target2,int targetScript2,std::shared_ptr<android::icu::text::Transliterator> widthFix2,std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::Integer,android::icu::text::Transliterator>> cache2)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "filter"    # Landroid/icu/text/UnicodeFilter;
	//    .param p3, "target2"    # Ljava/lang/String;
	//    .param p4, "targetScript2"    # I
	//    .param p5, "widthFix2"    # Landroid/icu/text/Transliterator;
	//    .annotation system Ldalvik/annotation/Signature;
	// 055        value = {
	// 056            "(",
	// 057            "Ljava/lang/String;",
	// 058            "Landroid/icu/text/UnicodeFilter;",
	// 059            "Ljava/lang/String;",
	// 060            "I",
	// 061            "Landroid/icu/text/Transliterator;",
	// 062            "Ljava/util/concurrent/ConcurrentHashMap",
	// 063            "<",
	// 064            "Ljava/lang/Integer;",
	// 065            "Landroid/icu/text/Transliterator;",
	// 066            ">;)V"
	// 067        }
	// 068    .end annotation
	//    .local p6, "cache2":Ljava/util/concurrent/ConcurrentHashMap;, "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Integer;Landroid/icu/text/Transliterator;>;"
	android::icu::text::Transliterator::(id, filter);
	this->widthFix = android::icu::text::Transliterator::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("[[:dt=Nar:][:dt=Wide:]] nfkd")));
	this->targetScript = targetScript2;
	this->cache = cache2;
	this->target = target2;
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
android::icu::text::AnyTransliterator::AnyTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::lang::String> theTarget,std::shared_ptr<java::lang::String> theVariant,int theTargetScript)
{
	
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "theTarget"    # Ljava/lang/String;
	//    .param p3, "theVariant"    # Ljava/lang/String;
	//    .param p4, "theTargetScript"    # I
	android::icu::text::Transliterator::(id, 0x0);
	this->widthFix = android::icu::text::Transliterator::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("[[:dt=Nar:][:dt=Wide:]] nfkd")));
	this->targetScript = theTargetScript;
	cVar0 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	this->cache = cVar0;
	this->target = theTarget;
	if ( theVariant->length() <= 0 )
		goto label_cond_37;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->target = cVar1->append(theTarget)->append(0x2f)->append(theVariant)->toString();
label_cond_37:
	return;

}
// .method private getTransliterator(I)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::AnyTransliterator::getTransliterator(int source)
{
	
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<android::icu::text::Transliterator> t;
	std::shared_ptr<java::lang::String> sourceName;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::ArrayList> v;
	std::shared_ptr<android::icu::text::CompoundTransliterator> t;
	std::shared_ptr<android::icu::text::Transliterator> prevCachedT;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "source"    # I
	if ( source == this->targetScript )
		goto label_cond_8;
	if ( source != -0x1 )
		goto label_cond_14;
label_cond_8:
	if ( !(this->isWide(this->targetScript)) )  
		goto label_cond_11;
	return 0x0;
	// 198    .line 179
label_cond_11:
	return this->widthFix;
	// 204    .line 183
label_cond_14:
	key = java::lang::Integer::valueOf(source);
	//    .local v2, "key":Ljava/lang/Integer;
	t = this->cache->get(key);
	t->checkCast("android::icu::text::Transliterator");
	//    .local v5, "t":Landroid/icu/text/Transliterator;
	if ( t )     
		goto label_cond_8c;
	sourceName = android::icu::lang::UScript::getName(source);
	//    .local v4, "sourceName":Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "id":Ljava/lang/String;
	try {
	//label_try_start_40:
	//label_try_end_43:
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8d;
	}
	//    .catch Ljava/lang/RuntimeException; {:try_start_40 .. :try_end_43} :catch_8d
	t = android::icu::text::Transliterator::getInstance(cVar0->append(sourceName)->append(0x2d)->append(this->target)->toString(), 0x0);
label_goto_44:
	if ( t )     
		goto label_cond_65;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	try {
	//label_try_start_61:
	//label_try_end_64:
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8f;
	}
	//    .catch Ljava/lang/RuntimeException; {:try_start_61 .. :try_end_64} :catch_8f
	t = android::icu::text::Transliterator::getInstance(cVar1->append(sourceName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-Latin;Latin-")))->append(this->target)->toString(), 0x0);
label_cond_65:
label_goto_65:
	if ( !(t) )  
		goto label_cond_91;
	if ( this->isWide(this->targetScript) )     
		goto label_cond_81;
	v = std::make_shared<java::util::ArrayList>();
	//    .local v6, "v":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/Transliterator;>;"
	v->add(this->widthFix);
	v->add(t);
	//    .end local v5    # "t":Landroid/icu/text/Transliterator;
	t = std::make_shared<android::icu::text::CompoundTransliterator>(v);
	//    .end local v6    # "v":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/Transliterator;>;"
	//    .restart local v5    # "t":Landroid/icu/text/Transliterator;
label_cond_81:
	prevCachedT = this->cache->putIfAbsent(key, t);
	prevCachedT->checkCast("android::icu::text::Transliterator");
	//    .local v3, "prevCachedT":Landroid/icu/text/Transliterator;
	if ( !(prevCachedT) )  
		goto label_cond_8c;
	t = prevCachedT;
	//    .end local v1    # "id":Ljava/lang/String;
	//    .end local v3    # "prevCachedT":Landroid/icu/text/Transliterator;
	//    .end local v4    # "sourceName":Ljava/lang/String;
label_cond_8c:
	return t;
	// 365    .line 191
	// 366    .restart local v1    # "id":Ljava/lang/String;
	// 367    .restart local v4    # "sourceName":Ljava/lang/String;
label_catch_8d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/RuntimeException;
	goto label_goto_44;
	// 374    .line 198
	// 375    .end local v0    # "e":Ljava/lang/RuntimeException;
label_catch_8f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/lang/RuntimeException;
	goto label_goto_65;
	// 382    .line 212
	// 383    .end local v0    # "e":Ljava/lang/RuntimeException;
label_cond_91:
	if ( this->isWide(this->targetScript) )     
		goto label_cond_8c;
	return this->widthFix;

}
// .method private isWide(I)Z
bool android::icu::text::AnyTransliterator::isWide(int script)
{
	
	bool cVar0;
	
	//    .param p1, "script"    # I
	cVar0 = 0x1;
	if ( script == 0x5 )
		goto label_cond_8;
	if ( script != 0x11 )
		goto label_cond_9;
label_cond_8:
label_goto_8:
	return cVar0;
label_cond_9:
	if ( script == 0x12 )
		goto label_cond_8;
	if ( script == 0x14 )
		goto label_cond_8;
	if ( script == 0x16 )
		goto label_cond_8;
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method static register()V
void android::icu::text::AnyTransliterator::register()
{
	
	std::shared_ptr<java::util::HashMap> seen;
	std::shared_ptr<java::util::Enumeration> s;
	std::shared_ptr<java::lang::String> source;
	std::shared_ptr<java::util::Enumeration> t;
	std::shared_ptr<java::lang::String> target;
	int targetScript;
	std::shared_ptr<java::util::Set> seenVariants;
	std::shared_ptr<java::util::HashSet> seenVariants;
	std::shared_ptr<java::util::Enumeration> v;
	std::shared_ptr<java::lang::String> variant;
	std::shared_ptr<android::icu::text::AnyTransliterator> trans;
	
	seen = std::make_shared<java::util::HashMap>();
	//    .local v2, "seen":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	s = android::icu::text::Transliterator::getAvailableSources({const[class].FS-Param});
	//    .local v1, "s":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_cond_9:
	if ( !(s->hasMoreElements()) )  
		goto label_cond_75;
	source = s->nextElement();
	source->checkCast("java::lang::String");
	//    .local v4, "source":Ljava/lang/String;
	if ( source->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any"))) )     
		goto label_cond_9;
	t = android::icu::text::Transliterator::getAvailableTargets(source);
	//    .local v5, "t":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_cond_22:
	if ( !(t->hasMoreElements()) )  
		goto label_cond_9;
	target = t->nextElement();
	target->checkCast("java::lang::String");
	//    .local v6, "target":Ljava/lang/String;
	targetScript = android::icu::text::AnyTransliterator::scriptNameToCode(target);
	//    .local v7, "targetScript":I
	if ( targetScript == -0x1 )
		goto label_cond_22;
	seenVariants = seen->get(target);
	seenVariants->checkCast("java::util::Set");
	//    .local v3, "seenVariants":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( seenVariants )     
		goto label_cond_45;
	//    .end local v3    # "seenVariants":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	seenVariants = std::make_shared<java::util::HashSet>();
	//    .restart local v3    # "seenVariants":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	seen->put(target, seenVariants);
label_cond_45:
	v = android::icu::text::Transliterator::getAvailableVariants(source, target);
	//    .local v9, "v":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_cond_49:
label_goto_49:
	if ( !(v->hasMoreElements()) )  
		goto label_cond_22;
	variant = v->nextElement();
	variant->checkCast("java::lang::String");
	//    .local v10, "variant":Ljava/lang/String;
	if ( seenVariants->contains(variant) )     
		goto label_cond_49;
	seenVariants->add(variant);
	//    .local v0, "id":Ljava/lang/String;
	trans = std::make_shared<android::icu::text::AnyTransliterator>(android::icu::text::TransliteratorIDParser::STVtoID(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any")), target, variant), target, variant, targetScript);
	//    .local v8, "trans":Landroid/icu/text/AnyTransliterator;
	android::icu::text::Transliterator::registerInstance(trans);
	android::icu::text::Transliterator::registerSpecialInverse(target, std::make_shared<java::lang::String>(std::make_shared<char[]>("Null")), 0x0);
	goto label_goto_49;
	// 592    .line 277
	// 593    .end local v0    # "id":Ljava/lang/String;
	// 594    .end local v3    # "seenVariants":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 595    .end local v4    # "source":Ljava/lang/String;
	// 596    .end local v5    # "t":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
	// 597    .end local v6    # "target":Ljava/lang/String;
	// 598    .end local v7    # "targetScript":I
	// 599    .end local v8    # "trans":Landroid/icu/text/AnyTransliterator;
	// 600    .end local v9    # "v":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
	// 601    .end local v10    # "variant":Ljava/lang/String;
label_cond_75:
	return;

}
// .method private static scriptNameToCode(Ljava/lang/String;)I
int android::icu::text::AnyTransliterator::scriptNameToCode(std::shared_ptr<java::lang::String> name)
{
	
	int cVar1;
	auto codes;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar1 = -0x1;
	try {
	//label_try_start_1:
	codes = android::icu::lang::UScript::getCode(name);
	//    .local v0, "codes":[I
	if ( !(codes) )  
		goto label_cond_a;
	cVar1 = codes[0x0];
	//label_try_end_a:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_1 .. :try_end_a} :catch_b
label_cond_a:
	return cVar1;
	// 632    .line 287
	// 633    .end local v0    # "codes":[I
label_catch_b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/util/MissingResourceException;
	return cVar1;

}
// .method public addSourceTargetSet(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet;)V
void android::icu::text::AnyTransliterator::addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> myFilter;
	
	//    .param p1, "inputFilter"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "sourceSet"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "targetSet"    # Landroid/icu/text/UnicodeSet;
	myFilter = this->getFilterAsUnicodeSet(inputFilter);
	//    .local v0, "myFilter":Landroid/icu/text/UnicodeSet;
	sourceSet->addAll(myFilter);
	if ( !(myFilter->size()) )  
		goto label_cond_14;
	targetSet->addAll(0x0, 0x10ffff);
label_cond_14:
	return;

}
// .method protected handleTransliterate(Landroid/icu/text/Replaceable;Landroid/icu/text/Transliterator$Position;Z)V
void android::icu::text::AnyTransliterator::handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool isIncremental)
{
	
	int allStart;
	int allLimit;
	std::shared_ptr<android::icu::text::AnyTransliterator_S_ScriptRunIterator> it;
	std::shared_ptr<android::icu::text::Transliterator> t;
	int delta;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "pos"    # Landroid/icu/text/Transliterator$Position;
	//    .param p3, "isIncremental"    # Z
	allStart = pos->start;
	//    .local v1, "allStart":I
	allLimit = pos->limit;
	//    .local v0, "allLimit":I
	it = std::make_shared<android::icu::text::AnyTransliterator_S_ScriptRunIterator>(text, pos->contextStart, pos->contextLimit);
	//    .local v4, "it":Landroid/icu/text/AnyTransliterator$ScriptRunIterator;
label_cond_d:
label_goto_d:
	if ( !(it->next()) )  
		goto label_cond_4c;
	if ( it->limit <= allStart )
		goto label_cond_d;
	t = this->getTransliterator(it->scriptCode);
	//    .local v6, "t":Landroid/icu/text/Transliterator;
	if ( t )     
		goto label_cond_24;
	pos->start = it->limit;
	goto label_goto_d;
	// 736    .line 105
label_cond_24:
	if ( !(isIncremental) )  
		goto label_cond_4f;
	if ( it->limit <  allLimit )
		goto label_cond_4f;
	//    .local v3, "incremental":Z
label_goto_2b:
	pos->start = java::lang::Math::max(allStart, it->start);
	pos->limit = java::lang::Math::min(allLimit, it->limit);
	//    .local v5, "limit":I
	t->filteredTransliterate(text, pos, incremental);
	delta = (pos->limit - pos->limit);
	//    .local v2, "delta":I
	allLimit = (allLimit +  delta);
	it->adjustLimit(delta);
	if ( it->limit <  allLimit )
		goto label_cond_d;
	//    .end local v2    # "delta":I
	//    .end local v3    # "incremental":Z
	//    .end local v5    # "limit":I
	//    .end local v6    # "t":Landroid/icu/text/Transliterator;
label_cond_4c:
	pos->limit = allLimit;
	return;
	// 801    .line 105
	// 802    .restart local v6    # "t":Landroid/icu/text/Transliterator;
label_cond_4f:
	//    .restart local v3    # "incremental":Z
	goto label_goto_2b;

}
// .method public safeClone()Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::AnyTransliterator::safeClone()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> filter;
	std::shared_ptr<android::icu::text::AnyTransliterator> cVar0;
	
	filter = this->getFilter();
	//    .local v2, "filter":Landroid/icu/text/UnicodeFilter;
	if ( !(filter) )  
		goto label_cond_12;
	if ( !(filter->instanceOf("android::icu::text::UnicodeSet")) )  
		goto label_cond_12;
	filter->checkCast("android::icu::text::UnicodeSet");
	//    .end local v2    # "filter":Landroid/icu/text/UnicodeFilter;
	filter = std::make_shared<android::icu::text::UnicodeSet>(filter);
	//    .local v7, "filter":Landroid/icu/text/UnicodeFilter;
	//    .end local v7    # "filter":Landroid/icu/text/UnicodeFilter;
	//    .restart local v2    # "filter":Landroid/icu/text/UnicodeFilter;
label_cond_12:
	cVar0 = std::make_shared<android::icu::text::AnyTransliterator>(this->getID(), filter, this->target, this->targetScript, this->widthFix, this->cache);
	return cVar0;

}


