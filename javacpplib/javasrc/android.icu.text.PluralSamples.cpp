// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralSamples.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_KeywordStatus.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.PluralSamples.h"
#include "android.icu.util.Output.h"
#include "java.io.PrintStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Double.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.List.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeSet.h"

static android::icu::text::PluralSamples::LIMIT_FRACTION_SAMPLES = 0x3;
static android::icu::text::PluralSamples::TENS;
// .method static constructor <clinit>()V
void android::icu::text::PluralSamples::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x7);
	?;
	android::icu::text::PluralSamples::TENS = cVar0;
	return;
	// 092    .line 188
	// 093    nop
	// 095    :array_a
	// 096    .array-data 4
	// 097        0x1
	// 098        0xa
	// 099        0x64
	// 100        0x3e8
	// 101        0x2710
	// 102        0x186a0
	// 103        0xf4240
	// 104    .end array-data

}
// .method public constructor <init>(Landroid/icu/text/PluralRules;)V
android::icu::text::PluralSamples::PluralSamples(std::shared_ptr<android::icu::text::PluralRules> pluralRules)
{
	
	std::shared_ptr<java::lang::Iterable> keywords;
	std::shared_ptr<java::util::HashMap> temp;
	std::shared_ptr<java::util::Iterator> k_S_iterator;
	std::shared_ptr<java::lang::String> k;
	std::shared_ptr<java::util::HashMap> sampleMap;
	int keywordsRemaining;
	int i;
	std::shared_ptr<java::util::HashMap> sampleFractionMap;
	std::shared_ptr<java::util::TreeSet> mentioned;
	std::shared_ptr<java::util::HashMap> foundKeywords;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> s;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar0;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar1;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar2;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar3;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar4;
	auto keyword;
	std::shared_ptr<java::util::Set> list;
	std::shared_ptr<java::util::LinkedHashSet> list;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::String> cVar6;
	std::shared_ptr<java::util::List> cVar7;
	std::shared_ptr<java::lang::String> cVar8;
	std::shared_ptr<java::util::Set> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "pluralRules"    # Landroid/icu/text/PluralRules;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 111    .end annotation
	// 115    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V
	this->pluralRules = pluralRules;
	keywords = pluralRules->getKeywords();
	//    .local v21, "keywords":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	0x3;
	//    .local v4, "MAX_SAMPLES":I
	temp = std::make_shared<java::util::HashMap>();
	//    .local v28, "temp":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;"
	k_S_iterator = keywords->iterator();
	//    .local v19, "k$iterator":Ljava/util/Iterator;
label_goto_17:
	if ( !(k_S_iterator->hasNext()) )  
		goto label_cond_33;
	k = k_S_iterator->next();
	k->checkCast("java::lang::String");
	//    .local v18, "k":Ljava/lang/String;
	temp->put(k, pluralRules->isLimited(k));
	goto label_goto_17;
	// 177    .line 70
	// 178    .end local v18    # "k":Ljava/lang/String;
label_cond_33:
	this->_keyLimitedMap = temp;
	sampleMap = std::make_shared<java::util::HashMap>();
	//    .local v8, "sampleMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/Double;>;>;"
	keywordsRemaining = keywords->size();
	//    .local v9, "keywordsRemaining":I
	0x80;
	//    .local v22, "limit":I
	i = 0x0;
	//    .local v17, "i":I
label_goto_46:
	if ( keywordsRemaining <= 0 )
		goto label_cond_61;
	if ( i >= 0x80 )
		goto label_cond_61;
	keywordsRemaining = this->addSimpleSamples(pluralRules, 0x3, sampleMap, keywordsRemaining, ((double)(i) /  0x4000000000000000L));
	i = ( i + 0x1);
	goto label_goto_46;
	// 241    .line 81
label_cond_61:
	keywordsRemaining = this->addSimpleSamples(pluralRules, 0x3, sampleMap, keywordsRemaining, 0x412e848000000000L);
	sampleFractionMap = std::make_shared<java::util::HashMap>();
	//    .local v27, "sampleFractionMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;>;"
	mentioned = std::make_shared<java::util::TreeSet>();
	//    .local v24, "mentioned":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	foundKeywords = std::make_shared<java::util::HashMap>();
	//    .local v16, "foundKeywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;>;"
	s_S_iterator = mentioned->iterator();
	//    .local v26, "s$iterator":Ljava/util/Iterator;
label_goto_82:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_a2;
	s = s_S_iterator->next();
	s->checkCast("android::icu::text::PluralRules_S_FixedDecimal");
	//    .local v25, "s":Landroid/icu/text/PluralRules$FixedDecimal;
	//    .local v20, "keyword":Ljava/lang/String;
	this->addRelation(foundKeywords, pluralRules->select(s), s);
	goto label_goto_82;
	// 316    .line 94
	// 317    .end local v20    # "keyword":Ljava/lang/String;
	// 318    .end local v25    # "s":Landroid/icu/text/PluralRules$FixedDecimal;
label_cond_a2:
	if ( foundKeywords->size() == keywords->size() )
		goto label_cond_c3;
	i = 0x1;
label_goto_ae:
	if ( i >= 0x3e8 )
		goto label_cond_152;
	//    .local v12, "done":Z
	if ( !(this->addIfNotPresent((double)(i), mentioned, foundKeywords)) )  
		goto label_cond_14e;
	//    .end local v12    # "done":Z
label_cond_c3:
label_goto_c3:
	cVar0 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(0x0);
	mentioned->add(cVar0);
	cVar1 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(0x1);
	mentioned->add(cVar1);
	cVar2 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(0x2);
	mentioned->add(cVar2);
	cVar3 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(0x3fb999999999999aL, 0x1);
	mentioned->add(cVar3);
	cVar4 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(0x3fffd70a3d70a3d7L, 0x2);
	mentioned->add(cVar4);
	mentioned->addAll(this->fractions(mentioned));
	s_S_iterator = mentioned->iterator();
label_goto_118:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_1a6;
	s = s_S_iterator->next();
	s->checkCast("android::icu::text::PluralRules_S_FixedDecimal");
	//    .restart local v25    # "s":Landroid/icu/text/PluralRules$FixedDecimal;
	keyword = pluralRules->select(s);
	//    .restart local v20    # "keyword":Ljava/lang/String;
	list = sampleFractionMap->get(keyword);
	list->checkCast("java::util::Set");
	//    .local v23, "list":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	if ( list )     
		goto label_cond_146;
	//    .end local v23    # "list":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	list = std::make_shared<java::util::LinkedHashSet>();
	//    .restart local v23    # "list":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	sampleFractionMap->put(keyword, list);
label_cond_146:
	list->add(s);
	goto label_goto_118;
	// 504    .line 95
	// 505    .end local v20    # "keyword":Ljava/lang/String;
	// 506    .end local v23    # "list":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	// 507    .end local v25    # "s":Landroid/icu/text/PluralRules$FixedDecimal;
	// 508    .restart local v12    # "done":Z
label_cond_14e:
	i = ( i + 0x1);
	goto label_goto_ae;
	// 514    .line 100
	// 515    .end local v12    # "done":Z
label_cond_152:
	i = 0xa;
label_goto_154:
	if ( i >= 0x3e8 )
		goto label_cond_16f;
	//    .restart local v12    # "done":Z
	if ( this->addIfNotPresent(( (double)(i) / 0x4024000000000000L), mentioned, foundKeywords) )     
		goto label_cond_c3;
	i = ( i + 0x1);
	goto label_goto_154;
	// 554    .line 104
	// 555    .end local v12    # "done":Z
label_cond_16f:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failed to find sample for each keyword: ")))->append(foundKeywords)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\t")))->append(pluralRules)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\t")))->append(mentioned)->toString());
	goto label_goto_c3;
	// 607    .line 122
label_cond_1a6:
	if ( keywordsRemaining <= 0 )
		goto label_cond_1df;
	k_S_iterator = keywords->iterator();
label_cond_1ac:
label_goto_1ac:
	if ( !(k_S_iterator->hasNext()) )  
		goto label_cond_1df;
	k = k_S_iterator->next();
	k->checkCast("java::lang::String");
	//    .restart local v18    # "k":Ljava/lang/String;
	if ( sampleMap->containsKey(k) )     
		goto label_cond_1c9;
	sampleMap->put(k, java::util::Collections::emptyList({const[class].FS-Param}));
label_cond_1c9:
	if ( sampleFractionMap->containsKey(k) )     
		goto label_cond_1ac;
	sampleFractionMap->put(k, java::util::Collections::emptySet({const[class].FS-Param}));
	goto label_goto_1ac;
	// 674    .line 134
	// 675    .end local v18    # "k":Ljava/lang/String;
label_cond_1df:
	entry_S_iterator = sampleMap->entrySet()->iterator();
	//    .local v15, "entry$iterator":Ljava/util/Iterator;
label_goto_1e7:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_207;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v13, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/List<Ljava/lang/Double;>;>;"
	cVar6 = entry->getKey();
	cVar6->checkCast("java::lang::String");
	cVar7 = entry->getValue();
	cVar7->checkCast("java::util::List");
	sampleMap->put(cVar6, java::util::Collections::unmodifiableList(cVar7));
	goto label_goto_1e7;
	// 721    .line 137
	// 722    .end local v13    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/List<Ljava/lang/Double;>;>;"
label_cond_207:
	entry_S_iterator = sampleFractionMap->entrySet()->iterator();
label_goto_20f:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_231;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v14, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;>;"
	cVar8 = entry->getKey();
	cVar8->checkCast("java::lang::String");
	cVar9 = entry->getValue();
	cVar9->checkCast("java::util::Set");
	sampleFractionMap->put(cVar8, java::util::Collections::unmodifiableSet(cVar9));
	goto label_goto_20f;
	// 769    .line 140
	// 770    .end local v14    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;>;"
label_cond_231:
	this->_keySamplesMap = sampleMap;
	this->_keyFractionSamplesMap = sampleFractionMap;
	this->_fractionSamples = java::util::Collections::unmodifiableSet(mentioned);
	return;

}
// .method private addIfNotPresent(DLjava/util/Set;Ljava/util/Map;)Z
bool android::icu::text::PluralSamples::addIfNotPresent(double d,std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> mentioned,std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>>> foundKeywords)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> numberInfo;
	std::shared_ptr<java::lang::Object> keyword;
	std::shared_ptr<java::util::Set> cVar1;
	
	//    .param p1, "d"    # D
	//    .annotation system Ldalvik/annotation/Signature;
	// 800        value = {
	// 801            "(D",
	// 802            "Ljava/util/Set",
	// 803            "<",
	// 804            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 805            ">;",
	// 806            "Ljava/util/Map",
	// 807            "<",
	// 808            "Ljava/lang/String;",
	// 809            "Ljava/util/Set",
	// 810            "<",
	// 811            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 812            ">;>;)Z"
	// 813        }
	// 814    .end annotation
	//    .local p3, "mentioned":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	//    .local p4, "foundKeywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;>;"
	cVar0 = 0x1;
	numberInfo = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(d);
	//    .local v1, "numberInfo":Landroid/icu/text/PluralRules$FixedDecimal;
	keyword = this->pluralRules->select(numberInfo);
	//    .local v0, "keyword":Ljava/lang/String;
	if ( !(foundKeywords->containsKey(keyword)) )  
		goto label_cond_1b;
	if ( !(keyword->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")))) )  
		goto label_cond_3a;
label_cond_1b:
	this->addRelation(foundKeywords, keyword, numberInfo);
	mentioned->add(numberInfo);
	if ( !(keyword->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")))) )  
		goto label_cond_3a;
	cVar1 = foundKeywords->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	cVar1->checkCast("java::util::Set");
	if ( cVar1->size() <= cVar0 )
		goto label_cond_3a;
	return cVar0;
	// 884    .line 185
label_cond_3a:
	return 0x0;

}
// .method private addRelation(Ljava/util/Map;Ljava/lang/String;Landroid/icu/text/PluralRules$FixedDecimal;)V
void android::icu::text::PluralSamples::addRelation(std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>>> foundKeywords,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> s)
{
	
	std::shared_ptr<java::util::Set> set;
	std::shared_ptr<java::util::HashSet> set;
	
	//    .param p2, "keyword"    # Ljava/lang/String;
	//    .param p3, "s"    # Landroid/icu/text/PluralRules$FixedDecimal;
	//    .annotation system Ldalvik/annotation/Signature;
	// 896        value = {
	// 897            "(",
	// 898            "Ljava/util/Map",
	// 899            "<",
	// 900            "Ljava/lang/String;",
	// 901            "Ljava/util/Set",
	// 902            "<",
	// 903            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 904            ">;>;",
	// 905            "Ljava/lang/String;",
	// 906            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 907            ")V"
	// 908        }
	// 909    .end annotation
	//    .local p1, "foundKeywords":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;>;"
	set = foundKeywords->get(keyword);
	set->checkCast("java::util::Set");
	//    .local v0, "set":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	if ( set )     
		goto label_cond_10;
	//    .end local v0    # "set":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	set = std::make_shared<java::util::HashSet>();
	//    .restart local v0    # "set":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	foundKeywords->put(keyword, set);
label_cond_10:
	set->add(s);
	return;

}
// .method private addSimpleSamples(Landroid/icu/text/PluralRules;ILjava/util/Map;ID)I
int android::icu::text::PluralSamples::addSimpleSamples(std::shared_ptr<android::icu::text::PluralRules> pluralRules,int MAX_SAMPLES,std::shared_ptr<java::util::Map<java::lang::String,java::util::List<java::lang::Double>>> sampleMap,int cVar1,double val)
{
	
	std::shared_ptr<java::lang::Object> keyword;
	std::shared_ptr<java::lang::Boolean> cVar0;
	int keyIsLimited;
	std::shared_ptr<java::util::List> list;
	std::shared_ptr<java::util::ArrayList> list;
	int cVar1;
	
	//    .param p1, "pluralRules"    # Landroid/icu/text/PluralRules;
	//    .param p2, "MAX_SAMPLES"    # I
	//    .param p4, "keywordsRemaining"    # I
	//    .param p5, "val"    # D
	//    .annotation system Ldalvik/annotation/Signature;
	// 948        value = {
	// 949            "(",
	// 950            "Landroid/icu/text/PluralRules;",
	// 951            "I",
	// 952            "Ljava/util/Map",
	// 953            "<",
	// 954            "Ljava/lang/String;",
	// 955            "Ljava/util/List",
	// 956            "<",
	// 957            "Ljava/lang/Double;",
	// 958            ">;>;ID)I"
	// 959        }
	// 960    .end annotation
	//    .local p3, "sampleMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/Double;>;>;"
	keyword = pluralRules->select(val);
	//    .local v1, "keyword":Ljava/lang/String;
	cVar0 = this->_keyLimitedMap->get(keyword);
	cVar0->checkCast("java::lang::Boolean");
	keyIsLimited = cVar0->booleanValue();
	//    .local v0, "keyIsLimited":Z
	list = sampleMap->get(keyword);
	list->checkCast("java::util::List");
	//    .local v2, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Double;>;"
	if ( list )     
		goto label_cond_32;
	//    .end local v2    # "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Double;>;"
	list = std::make_shared<java::util::ArrayList>(MAX_SAMPLES);
	//    .restart local v2    # "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Double;>;"
	sampleMap->put(keyword, list);
label_cond_20:
	list->add(java::lang::Double::valueOf(val));
	if ( keyIsLimited )     
		goto label_cond_31;
	if ( list->size() != MAX_SAMPLES )
		goto label_cond_31;
	cVar1 = ( cVar1 + -0x1);
label_cond_31:
	return cVar1;
	// 1029    .line 154
label_cond_32:
	if ( keyIsLimited )     
		goto label_cond_20;
	if ( list->size() != MAX_SAMPLES )
		goto label_cond_20;
	return cVar1;

}
// .method private fractions(Ljava/util/Set;)Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> android::icu::text::PluralSamples::fractions(std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> original)
{
	
	std::shared_ptr<java::util::HashSet> toAddTo;
	std::shared_ptr<java::util::HashSet> result;
	std::shared_ptr<java::util::Iterator> base1_S_iterator;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> base1;
	std::shared_ptr<java::util::ArrayList> ints;
	std::shared_ptr<java::util::HashSet> keywords;
	int j;
	std::shared_ptr<java::lang::Integer> base;
	std::shared_ptr<java::lang::Object> keyword;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar0;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar1;
	std::shared_ptr<java::lang::Integer> fract;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int visibleFractions;
	int i;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> cVar4;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1046        value = {
	// 1047            "(",
	// 1048            "Ljava/util/Set",
	// 1049            "<",
	// 1050            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 1051            ">;)",
	// 1052            "Ljava/util/Set",
	// 1053            "<",
	// 1054            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 1055            ">;"
	// 1056        }
	// 1057    .end annotation
	//    .local p1, "original":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	toAddTo = std::make_shared<java::util::HashSet>();
	//    .local v12, "toAddTo":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/text/PluralRules$FixedDecimal;>;"
	result = std::make_shared<java::util::HashSet>();
	//    .local v11, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Integer;>;"
	base1_S_iterator = original->iterator();
	//    .local v4, "base1$iterator":Ljava/util/Iterator;
label_goto_e:
	if ( !(base1_S_iterator->hasNext()) )  
		goto label_cond_25;
	base1 = base1_S_iterator->next();
	base1->checkCast("android::icu::text::PluralRules_S_FixedDecimal");
	//    .local v3, "base1":Landroid/icu/text/PluralRules$FixedDecimal;
	result->add(java::lang::Integer::valueOf((int)(base1->integerValue)));
	goto label_goto_e;
	// 1106    .line 200
	// 1107    .end local v3    # "base1":Landroid/icu/text/PluralRules$FixedDecimal;
label_cond_25:
	ints = std::make_shared<java::util::ArrayList>(result);
	//    .local v7, "ints":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Integer;>;"
	keywords = std::make_shared<java::util::HashSet>();
	//    .local v10, "keywords":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	j = 0x0;
	//    .local v8, "j":I
label_goto_30:
	if ( j >= ints->size() )
		goto label_cond_eb;
	base = ints->get(j);
	base->checkCast("java::lang::Integer");
	//    .local v2, "base":Ljava/lang/Integer;
	keyword = this->pluralRules->select((double)(base->intValue()));
	//    .local v9, "keyword":Ljava/lang/String;
	if ( !(keywords->contains(keyword)) )  
		goto label_cond_56;
label_cond_53:
label_goto_53:
	j = ( j + 0x1);
	goto label_goto_30;
	// 1173    .line 209
label_cond_56:
	keywords->add(keyword);
	cVar0 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>((double)(base->intValue()), 0x1);
	toAddTo->add(cVar0);
	cVar1 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>((double)(base->intValue()), 0x2);
	toAddTo->add(cVar1);
	fract = this->getDifferentCategory(ints, keyword);
	//    .local v5, "fract":Ljava/lang/Integer;
	if ( fract->intValue() <  android::icu::text::PluralSamples::TENS[0x2] )
		goto label_cond_b0;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(cVar3->append(base)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))->append(fract)->toString());
	toAddTo->add(cVar2);
	goto label_goto_53;
	// 1267    .line 216
label_cond_b0:
	visibleFractions = 0x1;
	//    .local v13, "visibleFractions":I
label_goto_b1:
	if ( visibleFractions >= 0x3 )
		goto label_cond_53;
	i = 0x1;
	//    .local v6, "i":I
label_goto_b5:
	if ( i >  visibleFractions )
		goto label_cond_e8;
	if ( fract->intValue() <  android::icu::text::PluralSamples::TENS[i] )
		goto label_cond_c4;
label_goto_c1:
	i = ( i + 0x1);
	goto label_goto_b5;
	// 1301    .line 223
label_cond_c4:
	cVar4 = std::make_shared<android::icu::text::PluralRules_S_FixedDecimal>(((double)(base->intValue()) +  ((double)(fract->intValue()) /  (double)(android::icu::text::PluralSamples::TENS[i]))), visibleFractions);
	toAddTo->add(cVar4);
	goto label_goto_c1;
	// 1341    .line 216
label_cond_e8:
	visibleFractions = ( visibleFractions + 0x1);
	goto label_goto_b1;
	// 1347    .line 228
	// 1348    .end local v2    # "base":Ljava/lang/Integer;
	// 1349    .end local v5    # "fract":Ljava/lang/Integer;
	// 1350    .end local v6    # "i":I
	// 1351    .end local v9    # "keyword":Ljava/lang/String;
	// 1352    .end local v13    # "visibleFractions":I
label_cond_eb:
	return toAddTo;

}
// .method private getDifferentCategory(Ljava/util/List;Ljava/lang/String;)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> android::icu::text::PluralSamples::getDifferentCategory(std::shared_ptr<java::util::List<java::lang::Integer>> ints,std::shared_ptr<java::lang::String> keyword)
{
	
	int i;
	std::shared_ptr<java::lang::Integer> other;
	
	//    .param p2, "keyword"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1361        value = {
	// 1362            "(",
	// 1363            "Ljava/util/List",
	// 1364            "<",
	// 1365            "Ljava/lang/Integer;",
	// 1366            ">;",
	// 1367            "Ljava/lang/String;",
	// 1368            ")",
	// 1369            "Ljava/lang/Integer;"
	// 1370        }
	// 1371    .end annotation
	//    .local p1, "ints":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Integer;>;"
	i = ( ints->size() + -0x1);
	//    .local v0, "i":I
label_goto_6:
	if ( i < 0 ) 
		goto label_cond_23;
	other = ints->get(i);
	other->checkCast("java::lang::Integer");
	//    .local v2, "other":Ljava/lang/Integer;
	//    .local v1, "keywordOther":Ljava/lang/String;
	if ( this->pluralRules->select((double)(other->intValue()))->equals(keyword) )     
		goto label_cond_20;
	return other;
	// 1418    .line 232
label_cond_20:
	i = ( i + -0x1);
	goto label_goto_6;
	// 1424    .line 239
	// 1425    .end local v1    # "keywordOther":Ljava/lang/String;
	// 1426    .end local v2    # "other":Ljava/lang/Integer;
label_cond_23:
	return java::lang::Integer::valueOf(0x25);

}
// .method getAllKeywordValues(Ljava/lang/String;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::Double>> android::icu::text::PluralSamples::getAllKeywordValues(std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::util::Collection> result;
	std::shared_ptr<java::lang::Boolean> cVar0;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1443        value = {
	// 1444            "(",
	// 1445            "Ljava/lang/String;",
	// 1446            ")",
	// 1447            "Ljava/util/Collection",
	// 1448            "<",
	// 1449            "Ljava/lang/Double;",
	// 1450            ">;"
	// 1451        }
	// 1452    .end annotation
	if ( this->pluralRules->getKeywords()->contains(keyword) )     
		goto label_cond_11;
	return java::util::Collections::emptyList({const[class].FS-Param});
	// 1475    .line 320
label_cond_11:
	result = this->getKeySamplesMap()->get(keyword);
	result->checkCast("java::util::Collection");
	//    .local v0, "result":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Double;>;"
	if ( result->size() <= 0x2 )
		goto label_cond_34;
	cVar0 = this->_keyLimitedMap->get(keyword);
	cVar0->checkCast("java::lang::Boolean");
	if ( !(( cVar0->booleanValue() ^ 0x1)) )  
		goto label_cond_34;
	return 0x0;
	// 1518    .line 331
label_cond_34:
	return result;

}
// .method getFractionSamples()Ljava/util/Set;
std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> android::icu::text::PluralSamples::getFractionSamples()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1526        value = {
	// 1527            "()",
	// 1528            "Ljava/util/Set",
	// 1529            "<",
	// 1530            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 1531            ">;"
	// 1532        }
	// 1533    .end annotation
	return this->_fractionSamples;

}
// .method getKeyFractionSamplesMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>>> android::icu::text::PluralSamples::getKeyFractionSamplesMap()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1545        value = {
	// 1546            "()",
	// 1547            "Ljava/util/Map",
	// 1548            "<",
	// 1549            "Ljava/lang/String;",
	// 1550            "Ljava/util/Set",
	// 1551            "<",
	// 1552            "Landroid/icu/text/PluralRules$FixedDecimal;",
	// 1553            ">;>;"
	// 1554        }
	// 1555    .end annotation
	return this->_keyFractionSamplesMap;

}
// .method getKeySamplesMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::util::List<java::lang::Double>>> android::icu::text::PluralSamples::getKeySamplesMap()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1567        value = {
	// 1568            "()",
	// 1569            "Ljava/util/Map",
	// 1570            "<",
	// 1571            "Ljava/lang/String;",
	// 1572            "Ljava/util/List",
	// 1573            "<",
	// 1574            "Ljava/lang/Double;",
	// 1575            ">;>;"
	// 1576        }
	// 1577    .end annotation
	return this->_keySamplesMap;

}
// .method public getStatus(Ljava/lang/String;ILjava/util/Set;Landroid/icu/util/Output;)Landroid/icu/text/PluralRules$KeywordStatus;
std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> android::icu::text::PluralSamples::getStatus(std::shared_ptr<java::lang::String> keyword,int offset,std::shared_ptr<java::util::Set<java::lang::Double>> explicits,std::shared_ptr<android::icu::util::Output<java::lang::Double>> uniqueValue)
{
	
	int cVar0;
	std::shared_ptr<java::util::Collection> values;
	int originalSize;
	std::shared_ptr<java::util::Set> explicits;
	std::shared_ptr<java::lang::Double> cVar1;
	std::shared_ptr<java::util::HashSet> subtractedSet;
	std::shared_ptr<java::util::Iterator> explicit_S_iterator;
	std::shared_ptr<java::lang::Double> explicit;
	std::shared_ptr<java::lang::Double> cVar2;
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> cVar3;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "offset"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 1591        value = {
	// 1592            "(",
	// 1593            "Ljava/lang/String;",
	// 1594            "I",
	// 1595            "Ljava/util/Set",
	// 1596            "<",
	// 1597            "Ljava/lang/Double;",
	// 1598            ">;",
	// 1599            "Landroid/icu/util/Output",
	// 1600            "<",
	// 1601            "Ljava/lang/Double;",
	// 1602            ">;)",
	// 1603            "Landroid/icu/text/PluralRules$KeywordStatus;"
	// 1604        }
	// 1605    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1608    .end annotation
	//    .local p3, "explicits":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Double;>;"
	//    .local p4, "uniqueValue":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Double;>;"
	cVar0 = 0x1;
	if ( !(uniqueValue) )  
		goto label_cond_6;
	uniqueValue->value = 0x0;
label_cond_6:
	if ( this->pluralRules->getKeywords()->contains(keyword) )     
		goto label_cond_15;
	return android::icu::text::PluralRules_S_KeywordStatus::INVALID;
	// 1642    .line 255
label_cond_15:
	values = this->pluralRules->getAllKeywordValues(keyword);
	//    .local v4, "values":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/Double;>;"
	if ( values )     
		goto label_cond_20;
	return android::icu::text::PluralRules_S_KeywordStatus::UNBOUNDED;
	// 1659    .line 259
label_cond_20:
	originalSize = values->size();
	//    .local v2, "originalSize":I
	if ( explicits )     
		goto label_cond_2a;
	explicits = java::util::Collections::emptySet({const[class].FS-Param});
label_cond_2a:
	if ( originalSize <= explicits->size() )
		goto label_cond_46;
	if ( originalSize != cVar0 )
		goto label_cond_43;
	if ( !(uniqueValue) )  
		goto label_cond_40;
	cVar1 = values->iterator()->next();
	cVar1->checkCast("java::lang::Double");
	uniqueValue->value = cVar1;
label_cond_40:
	return android::icu::text::PluralRules_S_KeywordStatus::UNIQUE;
	// 1707    .line 274
label_cond_43:
	return android::icu::text::PluralRules_S_KeywordStatus::BOUNDED;
	// 1713    .line 279
label_cond_46:
	subtractedSet = std::make_shared<java::util::HashSet>(values);
	//    .local v3, "subtractedSet":Ljava/util/HashSet;, "Ljava/util/HashSet<Ljava/lang/Double;>;"
	explicit_S_iterator = explicits->iterator();
	//    .local v1, "explicit$iterator":Ljava/util/Iterator;
label_goto_4f:
	if ( !(explicit_S_iterator->hasNext()) )  
		goto label_cond_69;
	explicit = explicit_S_iterator->next();
	explicit->checkCast("java::lang::Double");
	//    .local v0, "explicit":Ljava/lang/Double;
	subtractedSet->remove(java::lang::Double::valueOf(( explicit->doubleValue() - (double)(offset))));
	goto label_goto_4f;
	// 1757    .line 283
	// 1758    .end local v0    # "explicit":Ljava/lang/Double;
label_cond_69:
	if ( subtractedSet->size() )     
		goto label_cond_72;
	return android::icu::text::PluralRules_S_KeywordStatus::SUPPRESSED;
	// 1771    .line 287
label_cond_72:
	if ( !(uniqueValue) )  
		goto label_cond_86;
	if ( subtractedSet->size() != cVar0 )
		goto label_cond_86;
	cVar2 = subtractedSet->iterator()->next();
	cVar2->checkCast("java::lang::Double");
	uniqueValue->value = cVar2;
label_cond_86:
	if ( originalSize != cVar0 )
		goto label_cond_8b;
	cVar3 = android::icu::text::PluralRules_S_KeywordStatus::UNIQUE;
label_goto_8a:
	return cVar3;
label_cond_8b:
	cVar3 = android::icu::text::PluralRules_S_KeywordStatus::BOUNDED;
	goto label_goto_8a;

}


