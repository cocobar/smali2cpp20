// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry.smali
#include "java2ctype.h"
#include "android.icu.text.AnyTransliterator.h"
#include "android.icu.text.CompoundTransliterator.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.RuleBasedTransliterator.h"
#include "android.icu.text.Transliterator_S_Factory.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.TransliteratorIDParser.h"
#include "android.icu.text.TransliteratorParser.h"
#include "android.icu.text.TransliteratorRegistry_S_AliasEntry.h"
#include "android.icu.text.TransliteratorRegistry_S_CompoundRBTEntry.h"
#include "android.icu.text.TransliteratorRegistry_S_IDEnumeration.h"
#include "android.icu.text.TransliteratorRegistry_S_LocaleEntry.h"
#include "android.icu.text.TransliteratorRegistry_S_ResourceEntry.h"
#include "android.icu.text.TransliteratorRegistry_S_Spec.h"
#include "android.icu.text.TransliteratorRegistry.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.CaseInsensitiveString.h"
#include "java.lang.Class.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.InstantiationException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.ResourceBundle.h"
#include "java.util.Set.h"

static android::icu::text::TransliteratorRegistry::ANY = std::make_shared<java::lang::String>("Any");
static android::icu::text::TransliteratorRegistry::DEBUG = false;
static android::icu::text::TransliteratorRegistry::LOCALE_SEP = '_';
static android::icu::text::TransliteratorRegistry::NO_VARIANT = std::make_shared<java::lang::String>("");
// .method public constructor <init>()V
android::icu::text::TransliteratorRegistry::TransliteratorRegistry()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	
	// 078    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::HashMap>();
	this->registry = java::util::Collections::synchronizedMap(cVar0);
	cVar1 = std::make_shared<java::util::HashMap>();
	this->specDAG = java::util::Collections::synchronizedMap(cVar1);
	cVar2 = std::make_shared<java::util::ArrayList>();
	this->availableIDs = cVar2;
	return;

}
// .method private find(Ljava/lang/String;)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TransliteratorRegistry::find(std::shared_ptr<java::lang::String> ID)
{
	
	auto stv;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	stv = android::icu::text::TransliteratorIDParser::IDtoSTV(ID);
	//    .local v0, "stv":[Ljava/lang/String;
	return this->find(stv[0x0], stv[0x1], stv[0x2]);

}
// .method private find(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TransliteratorRegistry::find(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> src;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> trg;
	std::shared_ptr<std::vector<java::lang::Object>> entry;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/lang/String;
	//    .param p3, "variant"    # Ljava/lang/String;
	src = std::make_shared<android::icu::text::TransliteratorRegistry_S_Spec>(source);
	//    .local v1, "src":Landroid/icu/text/TransliteratorRegistry$Spec;
	trg = std::make_shared<android::icu::text::TransliteratorRegistry_S_Spec>(target);
	//    .local v2, "trg":Landroid/icu/text/TransliteratorRegistry$Spec;
	0x0;
	//    .local v0, "entry":[Ljava/lang/Object;
	if ( !(variant->length()) )  
		goto label_cond_23;
	entry = this->findInDynamicStore(src, trg, variant);
	//    .local v0, "entry":[Ljava/lang/Object;
	if ( !(entry) )  
		goto label_cond_19;
	return entry;
	// 188    .line 779
label_cond_19:
	entry = this->findInStaticStore(src, trg, variant);
	if ( !(entry) )  
		goto label_cond_23;
	return entry;
	// 200    .line 807
label_cond_20:
	trg->next();
	//    .end local v0    # "entry":[Ljava/lang/Object;
label_cond_23:
	src->reset();
label_goto_26:
	entry = this->findInDynamicStore(src, trg, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	//    .restart local v0    # "entry":[Ljava/lang/Object;
	if ( !(entry) )  
		goto label_cond_30;
	return entry;
	// 224    .line 795
label_cond_30:
	entry = this->findInStaticStore(src, trg, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	if ( !(entry) )  
		goto label_cond_3a;
	return entry;
	// 238    .line 799
label_cond_3a:
	if ( src->hasFallback() )     
		goto label_cond_47;
	if ( trg->hasFallback() )     
		goto label_cond_20;
	return 0x0;
	// 256    .line 802
label_cond_47:
	src->next();
	goto label_goto_26;

}
// .method private findInBundle(Landroid/icu/text/TransliteratorRegistry$Spec;Landroid/icu/text/TransliteratorRegistry$Spec;Ljava/lang/String;I)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TransliteratorRegistry::findInBundle(std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> specToOpen,std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> specToFind,std::shared_ptr<java::lang::String> variant,int direction)
{
	
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::shared_ptr<java::util::ResourceBundle> res;
	int pass;
	std::shared_ptr<java::lang::StringBuilder> tag;
	std::shared_ptr<java::lang::String> cVar1;
	auto subres;
	int i;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar2;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_LocaleEntry> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "specToOpen"    # Landroid/icu/text/TransliteratorRegistry$Spec;
	//    .param p2, "specToFind"    # Landroid/icu/text/TransliteratorRegistry$Spec;
	//    .param p3, "variant"    # Ljava/lang/String;
	//    .param p4, "direction"    # I
	cVar0 = 0x0;
	res = specToOpen->getBundle();
	//    .local v4, "res":Ljava/util/ResourceBundle;
	if ( res )     
		goto label_cond_8;
	return cVar0;
	// 285    .line 674
label_cond_8:
	pass = 0x0;
	//    .local v3, "pass":I
label_goto_9:
	if ( pass >= 0x2 )
		goto label_cond_6d;
	tag = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "tag":Ljava/lang/StringBuilder;
	if ( pass )     
		goto label_cond_5d;
	if ( direction )     
		goto label_cond_59;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("TransliterateTo"));
label_goto_18:
	tag->append(cVar1);
label_goto_1b:
	tag->append(specToFind->get()->toUpperCase(java::util::Locale::ENGLISH));
	try {
	//label_try_start_28:
	subres = res->getStringArray(tag->toString());
	//    .local v5, "subres":[Ljava/lang/String;
	i = 0x0;
	//    .local v2, "i":I
	if ( !(variant->length()) )  
		goto label_cond_43;
	i = 0x0;
label_goto_38:
	if ( i >= subres->size() )
		goto label_cond_43;
	if ( !(subres[i]->equalsIgnoreCase(variant)) )  
		goto label_cond_64;
label_cond_43:
	if ( i >= subres->size() )
		goto label_cond_6a;
	if ( pass )     
		goto label_cond_67;
	//    .local v0, "dir":I
label_goto_49:
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar3 = std::make_shared<android::icu::text::TransliteratorRegistry_S_LocaleEntry>(subres[( i + 0x1)], dir);
	cVar2[0x0] = cVar3;
	//label_try_end_58:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_69;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_28 .. :try_end_58} :catch_69
	return cVar2;
	// 401    .line 682
	// 402    .end local v0    # "dir":I
	// 403    .end local v2    # "i":I
	// 404    .end local v5    # "subres":[Ljava/lang/String;
label_cond_59:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("TransliterateFrom"));
	goto label_goto_18;
	// 410    .line 684
label_cond_5d:
	tag->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Transliterate")));
	goto label_goto_1b;
	// 418    .line 698
	// 419    .restart local v2    # "i":I
	// 420    .restart local v5    # "subres":[Ljava/lang/String;
label_cond_64:
	i = ( i + 0x2);
	goto label_goto_38;
	// 426    .line 717
label_cond_67:
	//    .restart local v0    # "dir":I
	goto label_goto_49;
	// 433    .line 721
	// 434    .end local v0    # "dir":I
	// 435    .end local v2    # "i":I
	// 436    .end local v5    # "subres":[Ljava/lang/String;
label_catch_69:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_6a:
	pass = ( pass + 0x1);
	goto label_goto_9;
	// 446    .line 730
	// 447    .end local v6    # "tag":Ljava/lang/StringBuilder;
label_cond_6d:
	return cVar0;

}
// .method private findInDynamicStore(Landroid/icu/text/TransliteratorRegistry$Spec;Landroid/icu/text/TransliteratorRegistry$Spec;Ljava/lang/String;)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TransliteratorRegistry::findInDynamicStore(std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> src,std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> trg,std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar0;
	std::shared_ptr<std::vector<java::lang::Object>> cVar1;
	
	//    .param p1, "src"    # Landroid/icu/text/TransliteratorRegistry$Spec;
	//    .param p2, "trg"    # Landroid/icu/text/TransliteratorRegistry$Spec;
	//    .param p3, "variant"    # Ljava/lang/String;
	//    .local v0, "ID":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::CaseInsensitiveString>(android::icu::text::TransliteratorIDParser::STVtoID(src->get(), trg->get(), variant));
	cVar1 = this->registry->get(cVar0);
	cVar1->checkCast("std::vector<java::lang::Object>");
	return cVar1;

}
// .method private findInStaticStore(Landroid/icu/text/TransliteratorRegistry$Spec;Landroid/icu/text/TransliteratorRegistry$Spec;Ljava/lang/String;)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::TransliteratorRegistry::findInStaticStore(std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> src,std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> trg,std::shared_ptr<java::lang::String> variant)
{
	
	int cVar0;
	std::shared_ptr<std::vector<java::lang::Object>> entry;
	std::shared_ptr<java::lang::Object> entry;
	
	//    .param p1, "src"    # Landroid/icu/text/TransliteratorRegistry$Spec;
	//    .param p2, "trg"    # Landroid/icu/text/TransliteratorRegistry$Spec;
	//    .param p3, "variant"    # Ljava/lang/String;
	cVar0 = 0x0;
	entry = 0x0;
	//    .local v4, "entry":[Ljava/lang/Object;
	if ( !(src->isLocale()) )  
		goto label_cond_1c;
	entry = this->findInBundle(src, trg, variant, cVar0);
	//    .end local v4    # "entry":[Ljava/lang/Object;
label_cond_c:
label_goto_c:
	if ( !(entry) )  
		goto label_cond_1b;
	this->registerEntry(src->getTop(), trg->getTop(), variant, entry, cVar0);
label_cond_1b:
	return entry;
	// 539    .line 638
	// 540    .restart local v4    # "entry":[Ljava/lang/Object;
label_cond_1c:
	if ( !(trg->isLocale()) )  
		goto label_cond_c;
	entry = this->findInBundle(trg, src, variant, 0x1);
	//    .local v4, "entry":[Ljava/lang/Object;
	goto label_goto_c;

}
// .method private instantiateEntry(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/StringBuffer;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::TransliteratorRegistry::instantiateEntry(std::shared_ptr<java::lang::String> ID,std::shared_ptr<std::vector<java::lang::Object>> entryWrapper,std::shared_ptr<java::lang::StringBuffer> aliasReturn)
{
	
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> entry;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator> cVar0;
	std::shared_ptr<android::icu::text::Transliterator> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::text::AnyTransliterator> temp;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator> temp;
	std::shared_ptr<android::icu::text::CompoundTransliterator> temp;
	std::shared_ptr<android::icu::text::TransliteratorParser> parser;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_LocaleEntry> le;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_AliasEntry> cVar3;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_AliasEntry> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::String> cVar6;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_AliasEntry> cVar7;
	std::shared_ptr<java::lang::String> cVar8;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_CompoundRBTEntry> cVar9;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_ResourceEntry> cVar2;
	std::shared_ptr<java::lang::String> re;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "entryWrapper"    # [Ljava/lang/Object;
	//    .param p3, "aliasReturn"    # Ljava/lang/StringBuffer;
label_goto_0:
	entry = entryWrapper[0x0];
	//    .local v5, "entry":Ljava/lang/Object;
	if ( !(entry->instanceOf("android::icu::text::RuleBasedTransliterator_S_Data")) )  
		goto label_cond_13;
	data = entry;
	data->checkCast("android::icu::text::RuleBasedTransliterator_S_Data");
	//    .local v1, "data":Landroid/icu/text/RuleBasedTransliterator$Data;
	cVar0 = std::make_shared<android::icu::text::RuleBasedTransliterator>(ID, data, 0x0);
	return cVar0;
	// 595    .line 843
	// 596    .end local v1    # "data":Landroid/icu/text/RuleBasedTransliterator$Data;
label_cond_13:
	if ( !(entry->instanceOf("java::lang::Class")) )  
		goto label_cond_23;
	try {
	//label_try_start_17:
	entry->checkCast("java::lang::Class");
	//    .end local v5    # "entry":Ljava/lang/Object;
	cVar1 = entry->newInstance();
	cVar1->checkCast("android::icu::text::Transliterator");
	//label_try_end_1f:
	}
	catch (java::lang::InstantiationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_137;
	}
	//    .catch Ljava/lang/InstantiationException; {:try_start_17 .. :try_end_1f} :catch_20
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_17 .. :try_end_1f} :catch_137
	return cVar1;
	// 618    .line 846
label_catch_20:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_21:
	return 0x0;
	// 628    .line 849
	// 629    .restart local v5    # "entry":Ljava/lang/Object;
label_cond_23:
	if ( !(entry->instanceOf("android::icu::text::TransliteratorRegistry_S_AliasEntry")) )  
		goto label_cond_32;
	entry->checkCast("android::icu::text::TransliteratorRegistry_S_AliasEntry");
	//    .end local v5    # "entry":Ljava/lang/Object;
	aliasReturn->append(entry->alias);
	return 0x0;
	// 650    .line 852
	// 651    .restart local v5    # "entry":Ljava/lang/Object;
label_cond_32:
	if ( !(entry->instanceOf("android::icu::text::Transliterator_S_Factory")) )  
		goto label_cond_3f;
	entry->checkCast("android::icu::text::Transliterator_S_Factory");
	//    .end local v5    # "entry":Ljava/lang/Object;
	return entry->getInstance(ID);
	// 669    .line 854
	// 670    .restart local v5    # "entry":Ljava/lang/Object;
label_cond_3f:
	if ( !(entry->instanceOf("android::icu::text::TransliteratorRegistry_S_CompoundRBTEntry")) )  
		goto label_cond_4a;
	entry->checkCast("android::icu::text::TransliteratorRegistry_S_CompoundRBTEntry");
	//    .end local v5    # "entry":Ljava/lang/Object;
	return entry->getInstance();
	// 686    .line 856
	// 687    .restart local v5    # "entry":Ljava/lang/Object;
label_cond_4a:
	if ( !(entry->instanceOf("android::icu::text::AnyTransliterator")) )  
		goto label_cond_56;
	temp = entry;
	temp->checkCast("android::icu::text::AnyTransliterator");
	//    .local v9, "temp":Landroid/icu/text/AnyTransliterator;
	return temp->safeClone();
	// 706    .line 859
	// 707    .end local v9    # "temp":Landroid/icu/text/AnyTransliterator;
label_cond_56:
	if ( !(entry->instanceOf("android::icu::text::RuleBasedTransliterator")) )  
		goto label_cond_62;
	temp = entry;
	temp->checkCast("android::icu::text::RuleBasedTransliterator");
	//    .local v11, "temp":Landroid/icu/text/RuleBasedTransliterator;
	return temp->safeClone();
	// 726    .line 862
	// 727    .end local v11    # "temp":Landroid/icu/text/RuleBasedTransliterator;
label_cond_62:
	if ( !(entry->instanceOf("android::icu::text::CompoundTransliterator")) )  
		goto label_cond_6e;
	temp = entry;
	temp->checkCast("android::icu::text::CompoundTransliterator");
	//    .local v10, "temp":Landroid/icu/text/CompoundTransliterator;
	return temp->safeClone();
	// 746    .line 865
	// 747    .end local v10    # "temp":Landroid/icu/text/CompoundTransliterator;
label_cond_6e:
	if ( !(entry->instanceOf("android::icu::text::Transliterator")) )  
		goto label_cond_75;
	entry->checkCast("android::icu::text::Transliterator");
	//    .end local v5    # "entry":Ljava/lang/Object;
	return entry;
	// 759    .line 875
	// 760    .restart local v5    # "entry":Ljava/lang/Object;
label_cond_75:
	parser = std::make_shared<android::icu::text::TransliteratorParser>();
	//    .local v7, "parser":Landroid/icu/text/TransliteratorParser;
	try {
	//label_try_start_7a:
	cVar2 = entry;
	cVar2->checkCast("android::icu::text::TransliteratorRegistry_S_ResourceEntry");
	re = cVar2;
	//    .local v8, "re":Landroid/icu/text/TransliteratorRegistry$ResourceEntry;
	parser->parse(re->resource, re->direction);
	//label_try_end_85:
	}
	catch (java::lang::ClassCastException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a2;
	}
	//    .catch Ljava/lang/ClassCastException; {:try_start_7a .. :try_end_85} :catch_a2
	//    .end local v8    # "re":Landroid/icu/text/TransliteratorRegistry$ResourceEntry;
label_goto_85:
	if ( parser->idBlockVector->size() )     
		goto label_cond_ae;
	if ( parser->dataVector->size() )     
		goto label_cond_ae;
	cVar3 = std::make_shared<android::icu::text::TransliteratorRegistry_S_AliasEntry>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Any-Null")));
	entryWrapper[0x0] = cVar3;
	goto label_goto_0;
	// 817    .line 882
label_catch_a2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/ClassCastException;
	le = entry;
	le->checkCast("android::icu::text::TransliteratorRegistry_S_LocaleEntry");
	//    .local v6, "le":Landroid/icu/text/TransliteratorRegistry$LocaleEntry;
	parser->parse(le->rule, le->direction);
	goto label_goto_85;
	// 837    .line 899
	// 838    .end local v2    # "e":Ljava/lang/ClassCastException;
	// 839    .end local v6    # "le":Landroid/icu/text/TransliteratorRegistry$LocaleEntry;
label_cond_ae:
	if ( parser->idBlockVector->size() )     
		goto label_cond_cb;
	if ( parser->dataVector->size() != 0x1 )
		goto label_cond_cb;
	entryWrapper[0x0] = parser->dataVector->get(0x0);
	goto label_goto_0;
	// 874    .line 904
label_cond_cb:
	if ( parser->idBlockVector->size() != 0x1 )
		goto label_cond_125;
	if ( parser->dataVector->size() )     
		goto label_cond_125;
	if ( !(parser->compoundFilter) )  
		goto label_cond_112;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = parser->idBlockVector->get(0x0);
	cVar6->checkCast("java::lang::String");
	cVar4 = std::make_shared<android::icu::text::TransliteratorRegistry_S_AliasEntry>(cVar5->append(parser->compoundFilter->toPattern(0x0))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")))->append(cVar6)->toString());
	entryWrapper[0x0] = cVar4;
	goto label_goto_0;
	// 952    .line 913
label_cond_112:
	cVar8 = parser->idBlockVector->get(0x0);
	cVar8->checkCast("java::lang::String");
	cVar7 = std::make_shared<android::icu::text::TransliteratorRegistry_S_AliasEntry>(cVar8);
	entryWrapper[0x0] = cVar7;
	goto label_goto_0;
	// 974    .line 917
label_cond_125:
	cVar9 = std::make_shared<android::icu::text::TransliteratorRegistry_S_CompoundRBTEntry>(ID, parser->idBlockVector, parser->dataVector, parser->compoundFilter);
	entryWrapper[0x0] = cVar9;
	goto label_goto_0;
	// 996    .line 847
	// 997    .end local v5    # "entry":Ljava/lang/Object;
	// 998    .end local v7    # "parser":Landroid/icu/text/TransliteratorParser;
label_catch_137:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e2":Ljava/lang/IllegalAccessException;
	goto label_goto_21;

}
// .method private registerEntry(Ljava/lang/String;Ljava/lang/Object;Z)V
void android::icu::text::TransliteratorRegistry::registerEntry(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::Object> entry,bool visible)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	auto stv;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "entry"    # Ljava/lang/Object;
	//    .param p3, "visible"    # Z
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	stv = android::icu::text::TransliteratorIDParser::IDtoSTV(ID);
	//    .local v7, "stv":[Ljava/lang/String;
	//    .local v1, "id":Ljava/lang/String;
	this->registerEntry(android::icu::text::TransliteratorIDParser::STVtoID(stv[cVar2], stv[cVar1], stv[cVar0]), stv[cVar2], stv[cVar1], stv[cVar0], entry, visible);
	return;

}
// .method private registerEntry(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Z)V
void android::icu::text::TransliteratorRegistry::registerEntry(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant,std::shared_ptr<java::lang::Object> entry,bool visible)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/lang/String;
	//    .param p3, "variant"    # Ljava/lang/String;
	//    .param p4, "entry"    # Ljava/lang/Object;
	//    .param p5, "visible"    # Z
	//    .local v2, "s":Ljava/lang/String;
	if ( source->length() )     
		goto label_cond_a;
label_cond_a:
	//    .local v1, "ID":Ljava/lang/String;
	this->registerEntry(android::icu::text::TransliteratorIDParser::STVtoID(source, target, variant), source, target, variant, entry, visible);
	return;

}
// .method private registerEntry(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Z)V
void android::icu::text::TransliteratorRegistry::registerEntry(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant,std::shared_ptr<java::lang::Object> entry,bool visible)
{
	
	std::shared_ptr<android::icu::util::CaseInsensitiveString> ciID;
	std::shared_ptr<std::vector<java::lang::Object>> arrayOfObj;
	std::shared<std::vector<std::vector<java::lang::Object>>> arrayOfObj;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "source"    # Ljava/lang/String;
	//    .param p3, "target"    # Ljava/lang/String;
	//    .param p4, "variant"    # Ljava/lang/String;
	//    .param p5, "entry"    # Ljava/lang/Object;
	//    .param p6, "visible"    # Z
	ciID = std::make_shared<android::icu::util::CaseInsensitiveString>(ID);
	//    .local v1, "ciID":Landroid/icu/util/CaseInsensitiveString;
	if ( !(entry->instanceOf("std::vector<java::lang::Object>")) )  
		goto label_cond_24;
	arrayOfObj = entry;
	arrayOfObj->checkCast("std::vector<java::lang::Object>");
	//    .local v0, "arrayOfObj":[Ljava/lang/Object;
label_goto_c:
	this->registry->put(ciID, arrayOfObj);
	if ( !(visible) )  
		goto label_cond_2b;
	this->registerSTV(source, target, variant);
	if ( this->availableIDs->contains(ciID) )     
		goto label_cond_23;
	this->availableIDs->add(ciID);
label_cond_23:
label_goto_23:
	return;
	// 1161    .line 518
	// 1162    .end local v0    # "arrayOfObj":[Ljava/lang/Object;
label_cond_24:
	arrayOfObj = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	arrayOfObj[0x0] = entry;
	//    .restart local v0    # "arrayOfObj":[Ljava/lang/Object;
	goto label_goto_c;
	// 1175    .line 528
label_cond_2b:
	this->removeSTV(source, target, variant);
	this->availableIDs->remove(ciID);
	goto label_goto_23;

}
// .method private registerSTV(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
void android::icu::text::TransliteratorRegistry::registerSTV(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cisrc;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> citrg;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> civar;
	std::shared_ptr<java::util::Map> targets;
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::lang::Object> targets;
	std::shared_ptr<java::util::List> variants;
	std::shared_ptr<java::util::ArrayList> variants;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/lang/String;
	//    .param p3, "variant"    # Ljava/lang/String;
	cisrc = std::make_shared<android::icu::util::CaseInsensitiveString>(source);
	//    .local v0, "cisrc":Landroid/icu/util/CaseInsensitiveString;
	citrg = std::make_shared<android::icu::util::CaseInsensitiveString>(target);
	//    .local v1, "citrg":Landroid/icu/util/CaseInsensitiveString;
	civar = std::make_shared<android::icu::util::CaseInsensitiveString>(variant);
	//    .local v2, "civar":Landroid/icu/util/CaseInsensitiveString;
	targets = this->specDAG->get(cisrc);
	targets->checkCast("java::util::Map");
	//    .local v3, "targets":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/util/CaseInsensitiveString;Ljava/util/List<Landroid/icu/util/CaseInsensitiveString;>;>;"
	if ( targets )     
		goto label_cond_28;
	cVar0 = std::make_shared<java::util::HashMap>();
	targets = java::util::Collections::synchronizedMap(cVar0);
	this->specDAG->put(cisrc, targets);
label_cond_28:
	variants = targets->get(citrg);
	variants->checkCast("java::util::List");
	//    .local v4, "variants":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/CaseInsensitiveString;>;"
	if ( variants )     
		goto label_cond_38;
	//    .end local v4    # "variants":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/CaseInsensitiveString;>;"
	variants = std::make_shared<java::util::ArrayList>();
	//    .restart local v4    # "variants":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/CaseInsensitiveString;>;"
	targets->put(citrg, variants);
label_cond_38:
	if ( variants->contains(civar) )     
		goto label_cond_47;
	if ( variant->length() <= 0 )
		goto label_cond_48;
	variants->add(civar);
label_cond_47:
label_goto_47:
	return;
	// 1286    .line 564
label_cond_48:
	variants->add(0x0, civar);
	goto label_goto_47;

}
// .method private removeSTV(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
void android::icu::text::TransliteratorRegistry::removeSTV(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cisrc;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> citrg;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> civar;
	std::shared_ptr<java::util::Map> targets;
	std::shared_ptr<java::util::List> variants;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/lang/String;
	//    .param p3, "variant"    # Ljava/lang/String;
	cisrc = std::make_shared<android::icu::util::CaseInsensitiveString>(source);
	//    .local v0, "cisrc":Landroid/icu/util/CaseInsensitiveString;
	citrg = std::make_shared<android::icu::util::CaseInsensitiveString>(target);
	//    .local v1, "citrg":Landroid/icu/util/CaseInsensitiveString;
	civar = std::make_shared<android::icu::util::CaseInsensitiveString>(variant);
	//    .local v2, "civar":Landroid/icu/util/CaseInsensitiveString;
	targets = this->specDAG->get(cisrc);
	targets->checkCast("java::util::Map");
	//    .local v3, "targets":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/util/CaseInsensitiveString;Ljava/util/List<Landroid/icu/util/CaseInsensitiveString;>;>;"
	if ( targets )     
		goto label_cond_1a;
	return;
	// 1334    .line 584
label_cond_1a:
	variants = targets->get(citrg);
	variants->checkCast("java::util::List");
	//    .local v4, "variants":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/CaseInsensitiveString;>;"
	if ( variants )     
		goto label_cond_23;
	return;
	// 1349    .line 588
label_cond_23:
	variants->remove(civar);
	if ( variants->size() )     
		goto label_cond_3a;
	targets->remove(citrg);
	if ( targets->size() )     
		goto label_cond_3a;
	this->specDAG->remove(cisrc);
label_cond_3a:
	return;

}
// .method public get(Ljava/lang/String;Ljava/lang/StringBuffer;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::TransliteratorRegistry::get(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::StringBuffer> aliasReturn)
{
	
	std::shared_ptr<android::icu::text::Transliterator> cVar0;
	std::shared_ptr<std::vector<java::lang::Object>> entry;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "aliasReturn"    # Ljava/lang/StringBuffer;
	cVar0 = 0x0;
	entry = this->find(ID);
	//    .local v0, "entry":[Ljava/lang/Object;
	if ( entry )     
		goto label_cond_8;
label_goto_7:
	return cVar0;
	// 1402    .line 314
label_cond_8:
	cVar0 = this->instantiateEntry(ID, entry, aliasReturn);
	goto label_goto_7;

}
// .method public getAvailableIDs()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::text::TransliteratorRegistry::getAvailableIDs()
{
	
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_IDEnumeration> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1414        value = {
	// 1415            "()",
	// 1416            "Ljava/util/Enumeration",
	// 1417            "<",
	// 1418            "Ljava/lang/String;",
	// 1419            ">;"
	// 1420        }
	// 1421    .end annotation
	cVar0 = std::make_shared<android::icu::text::TransliteratorRegistry_S_IDEnumeration>(java::util::Collections::enumeration(this->availableIDs));
	return cVar0;

}
// .method public getAvailableSources()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::text::TransliteratorRegistry::getAvailableSources()
{
	
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_IDEnumeration> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1441        value = {
	// 1442            "()",
	// 1443            "Ljava/util/Enumeration",
	// 1444            "<",
	// 1445            "Ljava/lang/String;",
	// 1446            ">;"
	// 1447        }
	// 1448    .end annotation
	cVar0 = std::make_shared<android::icu::text::TransliteratorRegistry_S_IDEnumeration>(java::util::Collections::enumeration(this->specDAG->keySet()));
	return cVar0;

}
// .method public getAvailableTargets(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::text::TransliteratorRegistry::getAvailableTargets(std::shared_ptr<java::lang::String> source)
{
	
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cisrc;
	std::shared_ptr<java::util::Map> targets;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_IDEnumeration> cVar0;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_IDEnumeration> cVar1;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1473        value = {
	// 1474            "(",
	// 1475            "Ljava/lang/String;",
	// 1476            ")",
	// 1477            "Ljava/util/Enumeration",
	// 1478            "<",
	// 1479            "Ljava/lang/String;",
	// 1480            ">;"
	// 1481        }
	// 1482    .end annotation
	cisrc = std::make_shared<android::icu::util::CaseInsensitiveString>(source);
	//    .local v0, "cisrc":Landroid/icu/util/CaseInsensitiveString;
	targets = this->specDAG->get(cisrc);
	targets->checkCast("java::util::Map");
	//    .local v1, "targets":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/util/CaseInsensitiveString;Ljava/util/List<Landroid/icu/util/CaseInsensitiveString;>;>;"
	if ( targets )     
		goto label_cond_16;
	cVar0 = std::make_shared<android::icu::text::TransliteratorRegistry_S_IDEnumeration>(0x0);
	return cVar0;
	// 1513    .line 446
label_cond_16:
	cVar1 = std::make_shared<android::icu::text::TransliteratorRegistry_S_IDEnumeration>(java::util::Collections::enumeration(targets->keySet()));
	return cVar1;

}
// .method public getAvailableVariants(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::text::TransliteratorRegistry::getAvailableVariants(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target)
{
	
	std::shared_ptr<java::util::Enumeration> cVar0;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cisrc;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> citrg;
	std::shared_ptr<java::util::Map> targets;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_IDEnumeration> cVar1;
	std::shared_ptr<java::util::List> variants;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_IDEnumeration> cVar2;
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_IDEnumeration> cVar3;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1535        value = {
	// 1536            "(",
	// 1537            "Ljava/lang/String;",
	// 1538            "Ljava/lang/String;",
	// 1539            ")",
	// 1540            "Ljava/util/Enumeration",
	// 1541            "<",
	// 1542            "Ljava/lang/String;",
	// 1543            ">;"
	// 1544        }
	// 1545    .end annotation
	cVar0 = 0x0;
	cisrc = std::make_shared<android::icu::util::CaseInsensitiveString>(source);
	//    .local v0, "cisrc":Landroid/icu/util/CaseInsensitiveString;
	citrg = std::make_shared<android::icu::util::CaseInsensitiveString>(target);
	//    .local v1, "citrg":Landroid/icu/util/CaseInsensitiveString;
	targets = this->specDAG->get(cisrc);
	targets->checkCast("java::util::Map");
	//    .local v2, "targets":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/util/CaseInsensitiveString;Ljava/util/List<Landroid/icu/util/CaseInsensitiveString;>;>;"
	if ( targets )     
		goto label_cond_1b;
	cVar1 = std::make_shared<android::icu::text::TransliteratorRegistry_S_IDEnumeration>(cVar0);
	return cVar1;
	// 1582    .line 462
label_cond_1b:
	variants = targets->get(citrg);
	variants->checkCast("java::util::List");
	//    .local v3, "variants":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/CaseInsensitiveString;>;"
	if ( variants )     
		goto label_cond_29;
	cVar2 = std::make_shared<android::icu::text::TransliteratorRegistry_S_IDEnumeration>(cVar0);
	return cVar2;
	// 1601    .line 466
label_cond_29:
	cVar3 = std::make_shared<android::icu::text::TransliteratorRegistry_S_IDEnumeration>(java::util::Collections::enumeration(variants));
	return cVar3;

}
// .method public put(Ljava/lang/String;Landroid/icu/text/Transliterator$Factory;Z)V
void android::icu::text::TransliteratorRegistry::put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::Transliterator_S_Factory> factory,bool visible)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "factory"    # Landroid/icu/text/Transliterator$Factory;
	//    .param p3, "visible"    # Z
	this->registerEntry(ID, factory, visible);
	return;

}
// .method public put(Ljava/lang/String;Landroid/icu/text/Transliterator;Z)V
void android::icu::text::TransliteratorRegistry::put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::Transliterator> trans,bool visible)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "trans"    # Landroid/icu/text/Transliterator;
	//    .param p3, "visible"    # Z
	this->registerEntry(ID, trans, visible);
	return;

}
// .method public put(Ljava/lang/String;Ljava/lang/Class;Z)V
void android::icu::text::TransliteratorRegistry::put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::Class<android::icu::text::Transliterator>> transliteratorSubclass,bool visible)
{
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p3, "visible"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1647        value = {
	// 1648            "(",
	// 1649            "Ljava/lang/String;",
	// 1650            "Ljava/lang/Class",
	// 1651            "<+",
	// 1652            "Landroid/icu/text/Transliterator;",
	// 1653            ">;Z)V"
	// 1654        }
	// 1655    .end annotation
	//    .local p2, "transliteratorSubclass":Ljava/lang/Class;, "Ljava/lang/Class<+Landroid/icu/text/Transliterator;>;"
	this->registerEntry(ID, transliteratorSubclass, visible);
	return;

}
// .method public put(Ljava/lang/String;Ljava/lang/String;IZ)V
void android::icu::text::TransliteratorRegistry::put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> resourceName,int dir,bool visible)
{
	
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_ResourceEntry> cVar0;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "resourceName"    # Ljava/lang/String;
	//    .param p3, "dir"    # I
	//    .param p4, "visible"    # Z
	cVar0 = std::make_shared<android::icu::text::TransliteratorRegistry_S_ResourceEntry>(resourceName, dir);
	this->registerEntry(ID, cVar0, visible);
	return;

}
// .method public put(Ljava/lang/String;Ljava/lang/String;Z)V
void android::icu::text::TransliteratorRegistry::put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> alias,bool visible)
{
	
	std::shared_ptr<android::icu::text::TransliteratorRegistry_S_AliasEntry> cVar0;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	//    .param p2, "alias"    # Ljava/lang/String;
	//    .param p3, "visible"    # Z
	cVar0 = std::make_shared<android::icu::text::TransliteratorRegistry_S_AliasEntry>(alias);
	this->registerEntry(ID, cVar0, visible);
	return;

}
// .method public remove(Ljava/lang/String;)V
void android::icu::text::TransliteratorRegistry::remove(std::shared_ptr<java::lang::String> ID)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	auto stv;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar3;
	std::shared_ptr<android::icu::util::CaseInsensitiveString> cVar4;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	stv = android::icu::text::TransliteratorIDParser::IDtoSTV(ID);
	//    .local v1, "stv":[Ljava/lang/String;
	id = android::icu::text::TransliteratorIDParser::STVtoID(stv[cVar2], stv[cVar1], stv[cVar0]);
	//    .local v0, "id":Ljava/lang/String;
	cVar3 = std::make_shared<android::icu::util::CaseInsensitiveString>(id);
	this->registry->remove(cVar3);
	this->removeSTV(stv[cVar2], stv[cVar1], stv[cVar0]);
	cVar4 = std::make_shared<android::icu::util::CaseInsensitiveString>(id);
	this->availableIDs->remove(cVar4);
	return;

}


