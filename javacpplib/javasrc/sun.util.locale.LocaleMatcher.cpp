// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleMatcher.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Double.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale_S_FilteringMode.h"
#include "java.util.Locale_S_LanguageRange.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "sun.util.locale.LocaleEquivalentMaps.h"
#include "sun.util.locale.LocaleMatcher.h"

// .method private constructor <init>()V
sun::util::locale::LocaleMatcher::LocaleMatcher()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static filter(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;
std::shared_ptr<java::util::List<java::util::Locale>> sun::util::locale::LocaleMatcher::filter(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::util::Locale>> locales,std::shared_ptr<java::util::Locale_S_FilteringMode> mode)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::util::ArrayList> tags;
	std::shared_ptr<java::util::Iterator> locale_S_iterator;
	std::shared_ptr<java::util::Locale> locale;
	std::shared_ptr<java::util::List> filteredTags;
	std::shared_ptr<java::util::ArrayList> filteredLocales;
	std::shared_ptr<java::util::Iterator> tag_S_iterator;
	std::shared_ptr<java::lang::String> tag;
	
	//    .param p2, "mode"    # Ljava/util/Locale$FilteringMode;
	//    .annotation system Ldalvik/annotation/Signature;
	// 021        value = {
	// 022            "(",
	// 023            "Ljava/util/List",
	// 024            "<",
	// 025            "Ljava/util/Locale$LanguageRange;",
	// 026            ">;",
	// 027            "Ljava/util/Collection",
	// 028            "<",
	// 029            "Ljava/util/Locale;",
	// 030            ">;",
	// 031            "Ljava/util/Locale$FilteringMode;",
	// 032            ")",
	// 033            "Ljava/util/List",
	// 034            "<",
	// 035            "Ljava/util/Locale;",
	// 036            ">;"
	// 037        }
	// 038    .end annotation
	//    .local p0, "priorityList":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale$LanguageRange;>;"
	//    .local p1, "locales":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/util/Locale;>;"
	if ( priorityList->isEmpty() )     
		goto label_cond_c;
	if ( !(locales->isEmpty()) )  
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::util::ArrayList>();
	return cVar0;
	// 064    .line 56
label_cond_12:
	tags = std::make_shared<java::util::ArrayList>();
	//    .local v6, "tags":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	locale_S_iterator = locales->iterator();
	//    .local v3, "locale$iterator":Ljava/util/Iterator;
label_goto_1b:
	if ( !(locale_S_iterator->hasNext()) )  
		goto label_cond_2f;
	locale = locale_S_iterator->next();
	locale->checkCast("java::util::Locale");
	//    .local v2, "locale":Ljava/util/Locale;
	tags->add(locale->toLanguageTag());
	goto label_goto_1b;
	// 100    .line 62
	// 101    .end local v2    # "locale":Ljava/util/Locale;
label_cond_2f:
	filteredTags = sun::util::locale::LocaleMatcher::filterTags(priorityList, tags, mode);
	//    .local v1, "filteredTags":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	filteredLocales = std::make_shared<java::util::ArrayList>(filteredTags->size());
	//    .local v0, "filteredLocales":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale;>;"
	tag_S_iterator = filteredTags->iterator();
	//    .local v5, "tag$iterator":Ljava/util/Iterator;
label_goto_40:
	if ( !(tag_S_iterator->hasNext()) )  
		goto label_cond_54;
	tag = tag_S_iterator->next();
	tag->checkCast("java::lang::String");
	//    .local v4, "tag":Ljava/lang/String;
	filteredLocales->add(java::util::Locale::forLanguageTag(tag));
	goto label_goto_40;
	// 147    .line 70
	// 148    .end local v4    # "tag":Ljava/lang/String;
label_cond_54:
	return filteredLocales;

}
// .method private static filterBasic(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::util::locale::LocaleMatcher::filterBasic(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::lang::String>> tags)
{
	
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<java::util::Iterator> lr_S_iterator;
	std::shared_ptr<java::util::Locale_S_LanguageRange> lr;
	std::shared_ptr<java::lang::String> range;
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::util::Iterator> tag_S_iterator;
	std::shared_ptr<java::lang::String> tag;
	int len;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 156        value = {
	// 157            "(",
	// 158            "Ljava/util/List",
	// 159            "<",
	// 160            "Ljava/util/Locale$LanguageRange;",
	// 161            ">;",
	// 162            "Ljava/util/Collection",
	// 163            "<",
	// 164            "Ljava/lang/String;",
	// 165            ">;)",
	// 166            "Ljava/util/List",
	// 167            "<",
	// 168            "Ljava/lang/String;",
	// 169            ">;"
	// 170        }
	// 171    .end annotation
	//    .local p0, "priorityList":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale$LanguageRange;>;"
	//    .local p1, "tags":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	list = std::make_shared<java::util::ArrayList>();
	//    .local v1, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	lr_S_iterator = priorityList->iterator();
	//    .local v3, "lr$iterator":Ljava/util/Iterator;
label_cond_9:
	if ( !(lr_S_iterator->hasNext()) )  
		goto label_cond_60;
	lr = lr_S_iterator->next();
	lr->checkCast("java::util::Locale_S_LanguageRange");
	//    .local v2, "lr":Ljava/util/Locale$LanguageRange;
	range = lr->getRange();
	//    .local v4, "range":Ljava/lang/String;
	if ( !(range->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("*")))) )  
		goto label_cond_28;
	cVar0 = std::make_shared<java::util::ArrayList>(tags);
	return cVar0;
	// 224    .line 120
label_cond_28:
	tag_S_iterator = tags->iterator();
	//    .local v6, "tag$iterator":Ljava/util/Iterator;
label_cond_2c:
label_goto_2c:
	if ( !(tag_S_iterator->hasNext()) )  
		goto label_cond_9;
	tag = tag_S_iterator->next();
	tag->checkCast("java::lang::String");
	//    .local v5, "tag":Ljava/lang/String;
	tag = tag->toLowerCase();
	if ( !(tag->startsWith(range)) )  
		goto label_cond_2c;
	len = range->length();
	//    .local v0, "len":I
	if ( tag->length() == len )
		goto label_cond_54;
	if ( tag->charAt(len) != 0x2d )
		goto label_cond_2c;
label_cond_54:
	if ( !(( list->contains(tag) ^ 0x1)) )  
		goto label_cond_2c;
	list->add(tag);
	goto label_goto_2c;
	// 295    .line 133
	// 296    .end local v0    # "len":I
	// 297    .end local v2    # "lr":Ljava/util/Locale$LanguageRange;
	// 298    .end local v4    # "range":Ljava/lang/String;
	// 299    .end local v5    # "tag":Ljava/lang/String;
	// 300    .end local v6    # "tag$iterator":Ljava/util/Iterator;
label_cond_60:
	return list;

}
// .method private static filterExtended(Ljava/util/List;Ljava/util/Collection;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::util::locale::LocaleMatcher::filterExtended(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::lang::String>> tags)
{
	
	int cVar0;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<java::util::Iterator> lr_S_iterator;
	std::shared_ptr<java::util::Locale_S_LanguageRange> lr;
	std::shared_ptr<java::lang::String> range;
	std::shared_ptr<java::util::ArrayList> cVar1;
	auto rangeSubtags;
	std::shared_ptr<java::util::Iterator> tag_S_iterator;
	std::shared_ptr<java::lang::String> tag;
	auto tagSubtags;
	int rangeIndex;
	int tagIndex;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 308        value = {
	// 309            "(",
	// 310            "Ljava/util/List",
	// 311            "<",
	// 312            "Ljava/util/Locale$LanguageRange;",
	// 313            ">;",
	// 314            "Ljava/util/Collection",
	// 315            "<",
	// 316            "Ljava/lang/String;",
	// 317            ">;)",
	// 318            "Ljava/util/List",
	// 319            "<",
	// 320            "Ljava/lang/String;",
	// 321            ">;"
	// 322        }
	// 323    .end annotation
	//    .local p0, "priorityList":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale$LanguageRange;>;"
	//    .local p1, "tags":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	cVar0 = 0x0;
	list = std::make_shared<java::util::ArrayList>();
	//    .local v0, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	lr_S_iterator = priorityList->iterator();
	//    .local v2, "lr$iterator":Ljava/util/Iterator;
label_cond_a:
	if ( !(lr_S_iterator->hasNext()) )  
		goto label_cond_af;
	lr = lr_S_iterator->next();
	lr->checkCast("java::util::Locale_S_LanguageRange");
	//    .local v1, "lr":Ljava/util/Locale$LanguageRange;
	range = lr->getRange();
	//    .local v3, "range":Ljava/lang/String;
	if ( !(range->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("*")))) )  
		goto label_cond_29;
	cVar1 = std::make_shared<java::util::ArrayList>(tags);
	return cVar1;
	// 378    .line 144
label_cond_29:
	rangeSubtags = range->split(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v5, "rangeSubtags":[Ljava/lang/String;
	tag_S_iterator = tags->iterator();
	//    .local v7, "tag$iterator":Ljava/util/Iterator;
label_cond_34:
label_goto_34:
	if ( !(tag_S_iterator->hasNext()) )  
		goto label_cond_a;
	tag = tag_S_iterator->next();
	tag->checkCast("java::lang::String");
	//    .local v6, "tag":Ljava/lang/String;
	tag = tag->toLowerCase();
	tagSubtags = tag->split(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v9, "tagSubtags":[Ljava/lang/String;
	if ( rangeSubtags[cVar0]->equals(tagSubtags[cVar0]) )     
		goto label_cond_62;
	if ( ( rangeSubtags[cVar0]->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("*"))) ^ 0x1) )     
		goto label_cond_34;
label_cond_62:
	rangeIndex = 0x1;
	//    .local v4, "rangeIndex":I
	tagIndex = 0x1;
	//    .local v8, "tagIndex":I
label_goto_64:
	if ( rangeIndex >= rangeSubtags->size() )
		goto label_cond_9d;
	if ( tagIndex >= tagSubtags->size() )
		goto label_cond_9d;
	if ( !(rangeSubtags[rangeIndex]->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("*")))) )  
		goto label_cond_78;
	rangeIndex = ( rangeIndex + 0x1);
	goto label_goto_64;
	// 482    .line 160
label_cond_78:
	if ( !(rangeSubtags[rangeIndex]->equals(tagSubtags[tagIndex])) )  
		goto label_cond_87;
	rangeIndex = ( rangeIndex + 0x1);
	tagIndex = ( tagIndex + 0x1);
	goto label_goto_64;
	// 502    .line 163
label_cond_87:
	if ( tagSubtags[tagIndex]->length() != 0x1 )
		goto label_cond_ac;
	if ( !(( tagSubtags[tagIndex]->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("*"))) ^ 0x1)) )  
		goto label_cond_ac;
label_cond_9d:
	if ( rangeSubtags->size() != rangeIndex )
		goto label_cond_34;
	if ( !(( list->contains(tag) ^ 0x1)) )  
		goto label_cond_34;
	list->add(tag);
	goto label_goto_34;
	// 547    .line 167
label_cond_ac:
	tagIndex = ( tagIndex + 0x1);
	goto label_goto_64;
	// 553    .line 177
	// 554    .end local v1    # "lr":Ljava/util/Locale$LanguageRange;
	// 555    .end local v3    # "range":Ljava/lang/String;
	// 556    .end local v4    # "rangeIndex":I
	// 557    .end local v5    # "rangeSubtags":[Ljava/lang/String;
	// 558    .end local v6    # "tag":Ljava/lang/String;
	// 559    .end local v7    # "tag$iterator":Ljava/util/Iterator;
	// 560    .end local v8    # "tagIndex":I
	// 561    .end local v9    # "tagSubtags":[Ljava/lang/String;
label_cond_af:
	return list;

}
// .method public static filterTags(Ljava/util/List;Ljava/util/Collection;Ljava/util/Locale$FilteringMode;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::util::locale::LocaleMatcher::filterTags(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::lang::String>> tags,std::shared_ptr<java::util::Locale_S_FilteringMode> mode)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<java::util::Iterator> lr_S_iterator;
	std::shared_ptr<java::util::Locale_S_LanguageRange> lr;
	std::shared_ptr<java::lang::String> range;
	std::shared_ptr<java::util::Locale_S_LanguageRange> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p2, "mode"    # Ljava/util/Locale$FilteringMode;
	//    .annotation system Ldalvik/annotation/Signature;
	// 570        value = {
	// 571            "(",
	// 572            "Ljava/util/List",
	// 573            "<",
	// 574            "Ljava/util/Locale$LanguageRange;",
	// 575            ">;",
	// 576            "Ljava/util/Collection",
	// 577            "<",
	// 578            "Ljava/lang/String;",
	// 579            ">;",
	// 580            "Ljava/util/Locale$FilteringMode;",
	// 581            ")",
	// 582            "Ljava/util/List",
	// 583            "<",
	// 584            "Ljava/lang/String;",
	// 585            ">;"
	// 586        }
	// 587    .end annotation
	//    .local p0, "priorityList":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale$LanguageRange;>;"
	//    .local p1, "tags":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	if ( priorityList->isEmpty() )     
		goto label_cond_c;
	if ( !(tags->isEmpty()) )  
		goto label_cond_12;
label_cond_c:
	cVar0 = std::make_shared<java::util::ArrayList>();
	return cVar0;
	// 613    .line 81
label_cond_12:
	if ( mode != java::util::Locale_S_FilteringMode::EXTENDED_FILTERING )
		goto label_cond_1b;
	return sun::util::locale::LocaleMatcher::filterExtended(priorityList, tags);
	// 626    .line 84
label_cond_1b:
	list = std::make_shared<java::util::ArrayList>();
	//    .local v0, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/util/Locale$LanguageRange;>;"
	lr_S_iterator = priorityList->iterator();
	//    .local v2, "lr$iterator":Ljava/util/Iterator;
label_cond_24:
label_goto_24:
	if ( !(lr_S_iterator->hasNext()) )  
		goto label_cond_a1;
	lr = lr_S_iterator->next();
	lr->checkCast("java::util::Locale_S_LanguageRange");
	//    .local v1, "lr":Ljava/util/Locale$LanguageRange;
	range = lr->getRange();
	//    .local v3, "range":Ljava/lang/String;
	if ( range->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("*-"))) )     
		goto label_cond_47;
	if ( range->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("-*"))) == -0x1 )
		goto label_cond_9d;
label_cond_47:
	if ( mode != java::util::Locale_S_FilteringMode::AUTOSELECT_FILTERING )
		goto label_cond_50;
	return sun::util::locale::LocaleMatcher::filterExtended(priorityList, tags);
	// 693    .line 91
label_cond_50:
	if ( mode != java::util::Locale_S_FilteringMode::MAP_EXTENDED_RANGES )
		goto label_cond_78;
	if ( range->charAt(0x0) != 0x2a )
		goto label_cond_6d;
	range = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
label_goto_60:
	cVar1 = std::make_shared<java::util::Locale_S_LanguageRange>(range, lr->getWeight());
	list->add(cVar1);
	goto label_goto_24;
	// 727    .line 95
label_cond_6d:
	range = range->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("-[*]")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	goto label_goto_60;
	// 739    .line 98
label_cond_78:
	if ( mode != java::util::Locale_S_FilteringMode::REJECT_EXTENDED_RANGES )
		goto label_cond_24;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("An extended range \")))->append(range)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar2;
	// 778    .line 104
label_cond_9d:
	list->add(lr);
	goto label_goto_24;
	// 784    .line 108
	// 785    .end local v1    # "lr":Ljava/util/Locale$LanguageRange;
	// 786    .end local v3    # "range":Ljava/lang/String;
label_cond_a1:
	return sun::util::locale::LocaleMatcher::filterBasic(list, tags);

}
// .method private static getEquivalentForRegionAndVariant(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleMatcher::getEquivalentForRegionAndVariant(std::shared_ptr<java::lang::String> range)
{
	
	int extensionKeyIndex;
	std::shared_ptr<java::util::Iterator> subtag_S_iterator;
	std::shared_ptr<java::lang::String> subtag;
	int index;
	int len;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "range"    # Ljava/lang/String;
	extensionKeyIndex = sun::util::locale::LocaleMatcher::getExtentionKeyIndex(range);
	//    .local v0, "extensionKeyIndex":I
	subtag_S_iterator = sun::util::locale::LocaleEquivalentMaps::regionVariantEquivMap->keySet()->iterator();
	//    .local v4, "subtag$iterator":Ljava/util/Iterator;
label_cond_e:
	if ( !(subtag_S_iterator->hasNext()) )  
		goto label_cond_48;
	subtag = subtag_S_iterator->next();
	subtag->checkCast("java::lang::String");
	//    .local v3, "subtag":Ljava/lang/String;
	index = range->indexOf(subtag);
	//    .local v1, "index":I
	if ( index == -0x1 )
		goto label_cond_e;
	if ( extensionKeyIndex == -0x80000000 )
		goto label_cond_27;
	if ( index >  extensionKeyIndex )
		goto label_cond_e;
label_cond_27:
	len = (index + subtag->length());
	//    .local v2, "len":I
	if ( range->length() == len )
		goto label_cond_3b;
	if ( range->charAt(len) != 0x2d )
		goto label_cond_e;
label_cond_3b:
	cVar0 = sun::util::locale::LocaleEquivalentMaps::regionVariantEquivMap->get(subtag);
	cVar0->checkCast("java::lang::String");
	return sun::util::locale::LocaleMatcher::replaceFirstSubStringMatch(range, subtag, cVar0);
	// 891    .line 408
	// 892    .end local v1    # "index":I
	// 893    .end local v2    # "len":I
	// 894    .end local v3    # "subtag":Ljava/lang/String;
label_cond_48:
	return 0x0;

}
// .method private static getEquivalentsForLanguage(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleMatcher::getEquivalentsForLanguage(std::shared_ptr<java::lang::String> range)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> r;
	std::shared_ptr<java::lang::String> equiv;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar1;
	std::shared_ptr<std::vector<java::lang::String>> equivs;
	std::shared<std::vector<std::vector<java::lang::String>>> result;
	int i;
	int index;
	
	//    .param p0, "range"    # Ljava/lang/String;
	cVar0 = 0x0;
	r = range;
	//    .local v4, "r":Ljava/lang/String;
label_goto_2:
	if ( r->length() <= 0 )
		goto label_cond_4e;
	if ( !(sun::util::locale::LocaleEquivalentMaps::singleEquivMap->containsKey(r)) )  
		goto label_cond_22;
	equiv = sun::util::locale::LocaleEquivalentMaps::singleEquivMap->get(r);
	equiv->checkCast("java::lang::String");
	//    .local v0, "equiv":Ljava/lang/String;
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	cVar1[cVar0] = sun::util::locale::LocaleMatcher::replaceFirstSubStringMatch(range, r, equiv);
	return cVar1;
	// 952    .line 365
	// 953    .end local v0    # "equiv":Ljava/lang/String;
label_cond_22:
	if ( !(sun::util::locale::LocaleEquivalentMaps::multiEquivsMap->containsKey(r)) )  
		goto label_cond_45;
	equivs = sun::util::locale::LocaleEquivalentMaps::multiEquivsMap->get(r);
	equivs->checkCast("std::vector<java::lang::String>");
	//    .local v1, "equivs":[Ljava/lang/String;
	result = std::make_shared<std::vector<std::vector<java::lang::String>>>(equivs->size());
	//    .local v5, "result":[Ljava/lang/String;
	i = 0x0;
	//    .local v2, "i":I
label_goto_36:
	if ( i >= equivs->size() )
		goto label_cond_44;
	result[i] = sun::util::locale::LocaleMatcher::replaceFirstSubStringMatch(range, r, equivs[i]);
	i = ( i + 0x1);
	goto label_goto_36;
	// 1003    .line 372
label_cond_44:
	return result;
	// 1007    .line 377
	// 1008    .end local v1    # "equivs":[Ljava/lang/String;
	// 1009    .end local v2    # "i":I
	// 1010    .end local v5    # "result":[Ljava/lang/String;
label_cond_45:
	index = r->lastIndexOf(0x2d);
	//    .local v3, "index":I
	if ( index != -0x1 )
		goto label_cond_50;
	//    .end local v3    # "index":I
label_cond_4e:
	return 0x0;
	// 1031    .line 381
	// 1032    .restart local v3    # "index":I
label_cond_50:
	r = r->substring(cVar0, index);
	goto label_goto_2;

}
// .method private static getExtentionKeyIndex(Ljava/lang/String;)I
int sun::util::locale::LocaleMatcher::getExtentionKeyIndex(std::shared_ptr<java::lang::String> s)
{
	
	auto c;
	int index;
	int i;
	
	//    .param p0, "s"    # Ljava/lang/String;
	c = s->toCharArray();
	//    .local v0, "c":[C
	index = -0x80000000;
	//    .local v2, "index":I
	i = 0x1;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= c->size() )
		goto label_cond_1a;
	if ( c[i] != 0x2d )
		goto label_cond_17;
	if ( (i - index) != 0x2 )
		goto label_cond_16;
	return index;
	// 1082    .line 419
label_cond_16:
	index = i;
label_cond_17:
	i = ( i + 0x1);
	goto label_goto_7;
	// 1092    .line 423
label_cond_1a:
	return -0x80000000;

}
// .method public static lookup(Ljava/util/List;Ljava/util/Collection;)Ljava/util/Locale;
std::shared_ptr<java::util::Locale> sun::util::locale::LocaleMatcher::lookup(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::util::Locale>> locales)
{
	
	std::shared_ptr<java::util::Locale> cVar0;
	std::shared_ptr<java::util::ArrayList> tags;
	std::shared_ptr<java::util::Iterator> locale_S_iterator;
	std::shared_ptr<java::util::Locale> locale;
	std::shared_ptr<java::lang::String> lookedUpTag;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1102        value = {
	// 1103            "(",
	// 1104            "Ljava/util/List",
	// 1105            "<",
	// 1106            "Ljava/util/Locale$LanguageRange;",
	// 1107            ">;",
	// 1108            "Ljava/util/Collection",
	// 1109            "<",
	// 1110            "Ljava/util/Locale;",
	// 1111            ">;)",
	// 1112            "Ljava/util/Locale;"
	// 1113        }
	// 1114    .end annotation
	//    .local p0, "priorityList":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale$LanguageRange;>;"
	//    .local p1, "locales":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/util/Locale;>;"
	cVar0 = 0x0;
	if ( priorityList->isEmpty() )     
		goto label_cond_d;
	if ( !(locales->isEmpty()) )  
		goto label_cond_e;
label_cond_d:
	return cVar0;
	// 1138    .line 187
label_cond_e:
	tags = std::make_shared<java::util::ArrayList>();
	//    .local v3, "tags":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	locale_S_iterator = locales->iterator();
	//    .local v1, "locale$iterator":Ljava/util/Iterator;
label_goto_17:
	if ( !(locale_S_iterator->hasNext()) )  
		goto label_cond_2b;
	locale = locale_S_iterator->next();
	locale->checkCast("java::util::Locale");
	//    .local v0, "locale":Ljava/util/Locale;
	tags->add(locale->toLanguageTag());
	goto label_goto_17;
	// 1174    .line 193
	// 1175    .end local v0    # "locale":Ljava/util/Locale;
label_cond_2b:
	lookedUpTag = sun::util::locale::LocaleMatcher::lookupTag(priorityList, tags);
	//    .local v2, "lookedUpTag":Ljava/lang/String;
	if ( lookedUpTag )     
		goto label_cond_32;
	return cVar0;
	// 1188    .line 198
label_cond_32:
	return java::util::Locale::forLanguageTag(lookedUpTag);

}
// .method public static lookupTag(Ljava/util/List;Ljava/util/Collection;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleMatcher::lookupTag(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::lang::String>> tags)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::util::Iterator> lr_S_iterator;
	std::shared_ptr<java::util::Locale_S_LanguageRange> lr;
	std::shared_ptr<java::lang::String> range;
	std::shared_ptr<java::lang::String> rangeForRegex;
	std::shared_ptr<java::util::Iterator> tag_S_iterator;
	std::shared_ptr<java::lang::String> tag;
	int index;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1200        value = {
	// 1201            "(",
	// 1202            "Ljava/util/List",
	// 1203            "<",
	// 1204            "Ljava/util/Locale$LanguageRange;",
	// 1205            ">;",
	// 1206            "Ljava/util/Collection",
	// 1207            "<",
	// 1208            "Ljava/lang/String;",
	// 1209            ">;)",
	// 1210            "Ljava/lang/String;"
	// 1211        }
	// 1212    .end annotation
	//    .local p0, "priorityList":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale$LanguageRange;>;"
	//    .local p1, "tags":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	cVar0 = 0x0;
	cVar1 = 0x2d;
	cVar2 = 0x0;
	if ( priorityList->isEmpty() )     
		goto label_cond_10;
	if ( !(tags->isEmpty()) )  
		goto label_cond_11;
label_cond_10:
	return cVar0;
	// 1240    .line 208
label_cond_11:
	lr_S_iterator = priorityList->iterator();
	//    .local v2, "lr$iterator":Ljava/util/Iterator;
label_cond_15:
	if ( !(lr_S_iterator->hasNext()) )  
		goto label_cond_7e;
	lr = lr_S_iterator->next();
	lr->checkCast("java::util::Locale_S_LanguageRange");
	//    .local v1, "lr":Ljava/util/Locale$LanguageRange;
	range = lr->getRange();
	//    .local v3, "range":Ljava/lang/String;
	if ( range->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("*"))) )     
		goto label_cond_15;
	rangeForRegex = range->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("*")), std::make_shared<java::lang::String>(std::make_shared<char[]>("\\p{Alnum}*")));
	//    .local v4, "rangeForRegex":Ljava/lang/String;
label_cond_38:
label_goto_38:
	if ( rangeForRegex->length() <= 0 )
		goto label_cond_15;
	tag_S_iterator = tags->iterator();
	//    .local v6, "tag$iterator":Ljava/util/Iterator;
label_cond_42:
	if ( !(tag_S_iterator->hasNext()) )  
		goto label_cond_59;
	tag = tag_S_iterator->next();
	tag->checkCast("java::lang::String");
	//    .local v5, "tag":Ljava/lang/String;
	tag = tag->toLowerCase();
	if ( !(tag->matches(rangeForRegex)) )  
		goto label_cond_42;
	return tag;
	// 1330    .line 226
	// 1331    .end local v5    # "tag":Ljava/lang/String;
label_cond_59:
	index = rangeForRegex->lastIndexOf(cVar1);
	//    .local v0, "index":I
	if ( index < 0 ) 
		goto label_cond_7a;
	rangeForRegex = rangeForRegex->substring(cVar2, index);
	if ( rangeForRegex->lastIndexOf(cVar1) != ( rangeForRegex->length() + -0x2) )
		goto label_cond_38;
	rangeForRegex = rangeForRegex->substring(cVar2, ( rangeForRegex->length() + -0x2));
	goto label_goto_38;
	// 1372    .line 236
label_cond_7a:
	rangeForRegex = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_38;
	// 1378    .line 241
	// 1379    .end local v0    # "index":I
	// 1380    .end local v1    # "lr":Ljava/util/Locale$LanguageRange;
	// 1381    .end local v3    # "range":Ljava/lang/String;
	// 1382    .end local v4    # "rangeForRegex":Ljava/lang/String;
	// 1383    .end local v6    # "tag$iterator":Ljava/util/Iterator;
label_cond_7e:
	return cVar0;

}
// .method public static mapEquivalents(Ljava/util/List;Ljava/util/Map;)Ljava/util/List;
std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> sun::util::locale::LocaleMatcher::mapEquivalents(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Map<java::lang::String,java::util::List<java::lang::String>>> map)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	std::shared_ptr<java::util::HashMap> keyMap;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<java::util::Iterator> lr_S_iterator;
	std::shared_ptr<java::util::Locale_S_LanguageRange> lr;
	std::shared_ptr<java::lang::String> range;
	std::shared_ptr<java::lang::String> r;
	std::shared_ptr<java::util::List> equivalents;
	std::shared_ptr<java::util::Iterator> equivalent_S_iterator;
	std::shared_ptr<java::lang::String> equivalent;
	std::shared_ptr<java::util::Locale_S_LanguageRange> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int index;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1391        value = {
	// 1392            "(",
	// 1393            "Ljava/util/List",
	// 1394            "<",
	// 1395            "Ljava/util/Locale$LanguageRange;",
	// 1396            ">;",
	// 1397            "Ljava/util/Map",
	// 1398            "<",
	// 1399            "Ljava/lang/String;",
	// 1400            "Ljava/util/List",
	// 1401            "<",
	// 1402            "Ljava/lang/String;",
	// 1403            ">;>;)",
	// 1404            "Ljava/util/List",
	// 1405            "<",
	// 1406            "Ljava/util/Locale$LanguageRange;",
	// 1407            ">;"
	// 1408        }
	// 1409    .end annotation
	//    .local p0, "priorityList":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale$LanguageRange;>;"
	//    .local p1, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;"
	if ( !(priorityList->isEmpty()) )  
		goto label_cond_c;
	cVar0 = std::make_shared<java::util::ArrayList>();
	return cVar0;
	// 1428    .line 432
label_cond_c:
	if ( !(map) )  
		goto label_cond_14;
	if ( !(map->isEmpty()) )  
		goto label_cond_1e;
label_cond_14:
	var9 = cVar1(priorityList);
	return cVar1;
	// 1450    .line 437
label_cond_1e:
	keyMap = std::make_shared<java::util::HashMap>();
	//    .local v9, "keyMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	key_S_iterator = map->keySet()->iterator();
	//    .local v8, "key$iterator":Ljava/util/Iterator;
label_goto_2b:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_41;
	key = key_S_iterator->next();
	key->checkCast("java::lang::String");
	//    .local v7, "key":Ljava/lang/String;
	keyMap->put(key->toLowerCase(), key);
	goto label_goto_2b;
	// 1492    .line 442
	// 1493    .end local v7    # "key":Ljava/lang/String;
label_cond_41:
	list = std::make_shared<java::util::ArrayList>();
	//    .local v11, "list":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale$LanguageRange;>;"
	lr_S_iterator = priorityList->iterator();
	//    .local v13, "lr$iterator":Ljava/util/Iterator;
label_cond_4a:
label_goto_4a:
	if ( !(lr_S_iterator->hasNext()) )  
		goto label_cond_d2;
	lr = lr_S_iterator->next();
	lr->checkCast("java::util::Locale_S_LanguageRange");
	//    .local v12, "lr":Ljava/util/Locale$LanguageRange;
	range = lr->getRange();
	//    .local v15, "range":Ljava/lang/String;
	r = range;
	//    .local v14, "r":Ljava/lang/String;
	//    .local v5, "hasEquivalent":Z
label_goto_5c:
	if ( r->length() <= 0 )
		goto label_cond_c3;
	if ( !(keyMap->containsKey(r)) )  
		goto label_cond_b5;
	equivalents = map->get(keyMap->get(r));
	equivalents->checkCast("java::util::List");
	//    .local v4, "equivalents":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( !(equivalents) )  
		goto label_cond_c3;
	//    .local v10, "len":I
	equivalent_S_iterator = equivalents->iterator();
	//    .local v3, "equivalent$iterator":Ljava/util/Iterator;
label_goto_81:
	if ( !(equivalent_S_iterator->hasNext()) )  
		goto label_cond_c3;
	equivalent = equivalent_S_iterator->next();
	equivalent->checkCast("java::lang::String");
	//    .local v2, "equivalent":Ljava/lang/String;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::util::Locale_S_LanguageRange>(cVar3->append(equivalent->toLowerCase())->append(range->substring(r->length()))->toString(), lr->getWeight());
	list->add(cVar2);
	goto label_goto_81;
	// 1641    .line 465
	// 1642    .end local v2    # "equivalent":Ljava/lang/String;
	// 1643    .end local v3    # "equivalent$iterator":Ljava/util/Iterator;
	// 1644    .end local v4    # "equivalents":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 1645    .end local v10    # "len":I
label_cond_b5:
	index = r->lastIndexOf(0x2d);
	//    .local v6, "index":I
	if ( index != -0x1 )
		goto label_cond_c9;
	//    .end local v6    # "index":I
label_cond_c3:
	if ( 0x0 )     
		goto label_cond_4a;
	list->add(lr);
	goto label_goto_4a;
	// 1673    .line 469
	// 1674    .restart local v6    # "index":I
label_cond_c9:
	r = r->substring(0x0, index);
	goto label_goto_5c;
	// 1686    .line 477
	// 1687    .end local v5    # "hasEquivalent":Z
	// 1688    .end local v6    # "index":I
	// 1689    .end local v12    # "lr":Ljava/util/Locale$LanguageRange;
	// 1690    .end local v14    # "r":Ljava/lang/String;
	// 1691    .end local v15    # "range":Ljava/lang/String;
label_cond_d2:
	return list;

}
// .method public static parse(Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> sun::util::locale::LocaleMatcher::parse(std::shared_ptr<java::lang::String> ranges)
{
	
	std::shared_ptr<java::lang::Object> cVar1;
	auto langRanges;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<java::util::ArrayList> tempList;
	int numOfRanges;
	int cVar2;
	std::shared_ptr<java::lang::String> range;
	int index;
	std::shared_ptr<java::lang::Object> r;
	auto w;
	std::shared_ptr<java::util::Locale_S_LanguageRange> lr;
	int j;
	std::shared_ptr<java::util::Locale_S_LanguageRange> cVar3;
	std::shared_ptr<java::lang::Object> equivalent;
	std::shared_ptr<java::util::Locale_S_LanguageRange> cVar4;
	auto equivalents;
	int cVar5;
	std::shared_ptr<java::lang::Object> equiv;
	std::shared_ptr<java::util::Locale_S_LanguageRange> cVar6;
	std::shared_ptr<java::util::Locale_S_LanguageRange> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar11;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	
	//    .param p0, "ranges"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1700        value = {
	// 1701            "(",
	// 1702            "Ljava/lang/String;",
	// 1703            ")",
	// 1704            "Ljava/util/List",
	// 1705            "<",
	// 1706            "Ljava/util/Locale$LanguageRange;",
	// 1707            ">;"
	// 1708        }
	// 1709    .end annotation
	cVar1 = ranges->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")))->toLowerCase();
	if ( !(cVar1->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("accept-language:")))) )  
		goto label_cond_2b;
	cVar1 = cVar1->substring(0x10);
label_cond_2b:
	langRanges = cVar1->split(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")));
	//    .local v10, "langRanges":[Ljava/lang/String;
	list = std::make_shared<java::util::ArrayList>(langRanges->size());
	//    .local v11, "list":Ljava/util/List;, "Ljava/util/List<Ljava/util/Locale$LanguageRange;>;"
	tempList = std::make_shared<java::util::ArrayList>();
	//    .local v16, "tempList":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	numOfRanges = 0x0;
	//    .local v13, "numOfRanges":I
	cVar2 = 0x0;
label_goto_4d:
	if ( cVar2 >= langRanges->size() )
		goto label_cond_1d3;
	range = langRanges[cVar2];
	//    .local v15, "range":Ljava/lang/String;
	index = range->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(";q=")));
	//    .local v8, "index":I
	if ( index != -0x1 )
		goto label_cond_11c;
	r = range;
	//    .local v14, "r":Ljava/lang/String;
	w = 0x3ff0000000000000L;
	//    .local v18, "w":D
label_cond_67:
	if ( tempList->contains(r) )     
		goto label_cond_1cd;
	lr = std::make_shared<java::util::Locale_S_LanguageRange>(r, w);
	//    .local v12, "lr":Ljava/util/Locale$LanguageRange;
	index = numOfRanges;
	j = 0x0;
	//    .local v9, "j":I
label_goto_78:
	if ( j >= numOfRanges )
		goto label_cond_89;
	cVar3 = list->get(j);
	cVar3->checkCast("java::util::Locale_S_LanguageRange");
	if ( (cVar3->getWeight() > w) >= 0 )
		goto label_cond_1c9;
	index = j;
label_cond_89:
	list->add(index, lr);
	numOfRanges = ( numOfRanges + 0x1);
	tempList->add(r);
	equivalent = sun::util::locale::LocaleMatcher::getEquivalentForRegionAndVariant(r);
	//    .local v6, "equivalent":Ljava/lang/String;
	if ( !(equivalent) )  
		goto label_cond_bc;
	if ( !(( tempList->contains(equivalent) ^ 0x1)) )  
		goto label_cond_bc;
	var74 = cVar4(equivalent, w);
	list->add(( index + 0x1), cVar4);
	numOfRanges = ( numOfRanges + 0x1);
	tempList->add(equivalent);
label_cond_bc:
	equivalents = sun::util::locale::LocaleMatcher::getEquivalentsForLanguage(r);
	//    .local v7, "equivalents":[Ljava/lang/String;
	if ( !(equivalents) )  
		goto label_cond_1cd;
	cVar5 = 0x0;
label_goto_c7:
	if ( cVar5 >= equivalents->size() )
		goto label_cond_1cd;
	equiv = equivalents[cVar5];
	//    .local v5, "equiv":Ljava/lang/String;
	if ( tempList->contains(equiv) )     
		goto label_cond_f0;
	var96 = cVar6(equiv, w);
	list->add(( index + 0x1), cVar6);
	numOfRanges = ( numOfRanges + 0x1);
	tempList->add(equiv);
label_cond_f0:
	equivalent = sun::util::locale::LocaleMatcher::getEquivalentForRegionAndVariant(equiv);
	if ( !(equivalent) )  
		goto label_cond_119;
	if ( !(( tempList->contains(equivalent) ^ 0x1)) )  
		goto label_cond_119;
	var113 = cVar7(equivalent, w);
	list->add(( index + 0x1), cVar7);
	numOfRanges = ( numOfRanges + 0x1);
	tempList->add(equivalent);
label_cond_119:
	cVar5 = ( cVar5 + 0x1);
	goto label_goto_c7;
	// 2048    .line 265
	// 2049    .end local v5    # "equiv":Ljava/lang/String;
	// 2050    .end local v6    # "equivalent":Ljava/lang/String;
	// 2051    .end local v7    # "equivalents":[Ljava/lang/String;
	// 2052    .end local v9    # "j":I
	// 2053    .end local v12    # "lr":Ljava/util/Locale$LanguageRange;
	// 2054    .end local v14    # "r":Ljava/lang/String;
	// 2055    .end local v18    # "w":D
label_cond_11c:
	r = range->substring(0x0, index);
	//    .restart local v14    # "r":Ljava/lang/String;
	index = ( index + 0x3);
	try {
	//label_try_start_126:
	//label_try_end_12d:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_192;
	}
	//    .catch Ljava/lang/Exception; {:try_start_126 .. :try_end_12d} :catch_192
	w = java::lang::Double::parseDouble(range->substring(index));
	//    .restart local v18    # "w":D
	if ( (w > 0x0) < 0 ) 
		goto label_cond_13a;
	if ( (w < 0x3ff0000000000000L) <= 0 )
		goto label_cond_67;
label_cond_13a:
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	var173 = cVar9(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("weight=")))->append(w)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" for language range \")))->append(r)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(0x0)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" and ")))->append(0x3ff0000000000000L)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))->toString());
	// throw
	throw cVar9;
	// 2191    .line 270
	// 2192    .end local v18    # "w":D
label_catch_192:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/lang/Exception;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	var198 = cVar11(cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("weight=\")))->append(range->substring(index))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(r)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->toString());
	// throw
	throw cVar11;
	// 2254    .line 287
	// 2255    .end local v4    # "e":Ljava/lang/Exception;
	// 2256    .restart local v9    # "j":I
	// 2257    .restart local v12    # "lr":Ljava/util/Locale$LanguageRange;
	// 2258    .restart local v18    # "w":D
label_cond_1c9:
	j = ( j + 0x1);
	goto label_goto_78;
	// 2264    .line 256
	// 2265    .end local v9    # "j":I
	// 2266    .end local v12    # "lr":Ljava/util/Locale$LanguageRange;
label_cond_1cd:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_4d;
	// 2274    .line 332
	// 2275    .end local v8    # "index":I
	// 2276    .end local v14    # "r":Ljava/lang/String;
	// 2277    .end local v15    # "range":Ljava/lang/String;
	// 2278    .end local v18    # "w":D
label_cond_1d3:
	return list;

}
// .method private static replaceFirstSubStringMatch(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleMatcher::replaceFirstSubStringMatch(std::shared_ptr<java::lang::String> range,std::shared_ptr<java::lang::String> substr,std::shared_ptr<java::lang::String> replacement)
{
	
	int pos;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "range"    # Ljava/lang/String;
	//    .param p1, "substr"    # Ljava/lang/String;
	//    .param p2, "replacement"    # Ljava/lang/String;
	pos = range->indexOf(substr);
	//    .local v0, "pos":I
	if ( pos != -0x1 )
		goto label_cond_8;
	return range;
	// 2304    .line 346
label_cond_8:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(range->substring(0x0, pos))->append(replacement)->append(range->substring((substr->length() +  pos)))->toString();

}


