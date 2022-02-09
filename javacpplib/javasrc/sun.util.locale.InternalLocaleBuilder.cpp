// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\InternalLocaleBuilder.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Character.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "sun.util.locale.BaseLocale.h"
#include "sun.util.locale.Extension.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"
#include "sun.util.locale.InternalLocaleBuilder.h"
#include "sun.util.locale.LanguageTag.h"
#include "sun.util.locale.LocaleExtensions.h"
#include "sun.util.locale.LocaleSyntaxException.h"
#include "sun.util.locale.LocaleUtils.h"
#include "sun.util.locale.StringTokenIterator.h"
#include "sun.util.locale.UnicodeLocaleExtension.h"

static sun::util::locale::InternalLocaleBuilder::_assertionsDisabled;
static sun::util::locale::InternalLocaleBuilder::PRIVATEUSE_KEY;
// .method static constructor <clinit>()V
void sun::util::locale::InternalLocaleBuilder::static_cinit()
{
	
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> cVar0;
	
	sun::util::locale::InternalLocaleBuilder::_assertionsDisabled = ( sun::util::locale::InternalLocaleBuilder()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")), 0x0);
	sun::util::locale::InternalLocaleBuilder::PRIVATEUSE_KEY = cVar0;
	return;

}
// .method public constructor <init>()V
sun::util::locale::InternalLocaleBuilder::InternalLocaleBuilder()
{
	
	// 102    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	return;

}
// .method private checkVariants(Ljava/lang/String;Ljava/lang/String;)I
int sun::util::locale::InternalLocaleBuilder::checkVariants(std::shared_ptr<java::lang::String> variants,std::shared_ptr<java::lang::String> sep)
{
	
	std::shared_ptr<sun::util::locale::StringTokenIterator> itr;
	
	//    .param p1, "variants"    # Ljava/lang/String;
	//    .param p2, "sep"    # Ljava/lang/String;
	itr = std::make_shared<sun::util::locale::StringTokenIterator>(variants, sep);
	//    .local v0, "itr":Lsun/util/locale/StringTokenIterator;
label_goto_5:
	if ( itr->isDone() )     
		goto label_cond_1e;
	//    .local v1, "s":Ljava/lang/String;
	if ( sun::util::locale::LanguageTag::isVariant(itr->current()) )     
		goto label_cond_1a;
	return itr->currentStart();
	// 168    .line 583
label_cond_1a:
	itr->next();
	goto label_goto_5;
	// 174    .line 585
	// 175    .end local v1    # "s":Ljava/lang/String;
label_cond_1e:
	return -0x1;

}
// .method static removePrivateuseVariant(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::InternalLocaleBuilder::removePrivateuseVariant(std::shared_ptr<java::lang::String> privuseVal)
{
	
	std::shared_ptr<sun::util::locale::StringTokenIterator> itr;
	int prefixStart;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p0, "privuseVal"    # Ljava/lang/String;
	itr = std::make_shared<sun::util::locale::StringTokenIterator>(privuseVal, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v0, "itr":Lsun/util/locale/StringTokenIterator;
	prefixStart = -0x1;
	//    .local v1, "prefixStart":I
	//    .local v2, "sawPrivuseVar":Z
label_goto_b:
	if ( itr->isDone() )     
		goto label_cond_15;
	if ( prefixStart == -0x1 )
		goto label_cond_18;
label_cond_15:
	if ( 0x0 )     
		goto label_cond_2d;
	return privuseVal;
	// 228    .line 559
label_cond_18:
	if ( !(sun::util::locale::LocaleUtils::caseIgnoreMatch(itr->current(), std::make_shared<java::lang::String>(std::make_shared<char[]>("lvariant")))) )  
		goto label_cond_29;
	prefixStart = itr->currentStart();
label_cond_29:
	itr->next();
	goto label_goto_b;
	// 253    .line 568
label_cond_2d:
	if ( sun::util::locale::InternalLocaleBuilder::_assertionsDisabled )     
		goto label_cond_3c;
	if ( !(prefixStart) )  
		goto label_cond_3c;
	if ( prefixStart >  0x1 )
		goto label_cond_3c;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 271    .line 569
label_cond_3c:
	if ( prefixStart )     
		goto label_cond_40;
	cVar1 = 0x0;
label_goto_3f:
	return cVar1;
label_cond_40:
	cVar1 = privuseVal->substring(0x0, ( prefixStart + -0x1));
	goto label_goto_3f;

}
// .method private setExtensions(Ljava/util/List;Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setExtensions(std::shared_ptr<java::util::List<java::lang::String>> bcpExtensions,std::shared_ptr<java::lang::String> privateuse)
{
	
	int cVar0;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> cVar1;
	std::shared_ptr<java::util::HashSet> done;
	std::shared_ptr<java::util::Iterator> bcpExt_S_iterator;
	std::shared_ptr<java::lang::String> bcpExt;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> key;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> cVar4;
	
	//    .param p2, "privateuse"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 294        value = {
	// 295            "(",
	// 296            "Ljava/util/List",
	// 297            "<",
	// 298            "Ljava/lang/String;",
	// 299            ">;",
	// 300            "Ljava/lang/String;",
	// 301            ")",
	// 302            "Lsun/util/locale/InternalLocaleBuilder;"
	// 303        }
	// 304    .end annotation
	//    .local p1, "bcpExtensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	cVar0 = 0x2;
	cVar1 = 0x0;
	this->clearExtensions();
	if ( sun::util::locale::LocaleUtils::isEmpty(bcpExtensions) )     
		goto label_cond_5a;
	done = std::make_shared<java::util::HashSet>(bcpExtensions->size());
	//    .local v2, "done":Ljava/util/Set;, "Ljava/util/Set<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;>;"
	bcpExt_S_iterator = bcpExtensions->iterator();
	//    .local v1, "bcpExt$iterator":Ljava/util/Iterator;
label_goto_18:
	if ( !(bcpExt_S_iterator->hasNext()) )  
		goto label_cond_5a;
	bcpExt = bcpExt_S_iterator->next();
	bcpExt->checkCast("java::lang::String");
	//    .local v0, "bcpExt":Ljava/lang/String;
	key = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(bcpExt, cVar1);
	//    .local v3, "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;
	if ( done->contains(key) )     
		goto label_cond_40;
	if ( !(sun::util::locale::UnicodeLocaleExtension::isSingletonChar(key->value())) )  
		goto label_cond_44;
	this->setUnicodeLocaleExtension(bcpExt->substring(cVar0));
label_cond_40:
label_goto_40:
	done->add(key);
	goto label_goto_18;
	// 390    .line 325
label_cond_44:
	if ( this->extensions )     
		goto label_cond_50;
	cVar2 = std::make_shared<java::util::HashMap>(0x4);
	this->extensions = cVar2;
label_cond_50:
	this->extensions->put(key, bcpExt->substring(cVar0));
	goto label_goto_40;
	// 417    .line 334
	// 418    .end local v0    # "bcpExt":Ljava/lang/String;
	// 419    .end local v1    # "bcpExt$iterator":Ljava/util/Iterator;
	// 420    .end local v2    # "done":Ljava/util/Set;, "Ljava/util/Set<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;>;"
	// 421    .end local v3    # "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;
label_cond_5a:
	if ( !(privateuse) )  
		goto label_cond_7c;
	if ( privateuse->length() <= 0 )
		goto label_cond_7c;
	if ( this->extensions )     
		goto label_cond_6e;
	cVar3 = std::make_shared<java::util::HashMap>(0x1);
	this->extensions = cVar3;
label_cond_6e:
	cVar4 = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(privateuse, cVar1);
	this->extensions->put(cVar4, privateuse->substring(cVar0));
label_cond_7c:
	return this;

}
// .method private setUnicodeLocaleExtension(Ljava/lang/String;)V
void sun::util::locale::InternalLocaleBuilder::setUnicodeLocaleExtension(std::shared_ptr<java::lang::String> subtags)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<sun::util::locale::StringTokenIterator> itr;
	std::shared_ptr<java::lang::Object> key;
	int typeStart;
	int typeEnd;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::util::HashMap> cVar5;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> tmpKey;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	std::shared_ptr<java::util::HashMap> cVar7;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> key;
	std::shared_ptr<java::util::HashSet> cVar3;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar4;
	
	//    .param p1, "subtags"    # Ljava/lang/String;
	cVar0 = 0x4;
	cVar1 = -0x1;
	if ( !(this->uattributes) )  
		goto label_cond_b;
	this->uattributes->clear();
label_cond_b:
	if ( !(this->ukeywords) )  
		goto label_cond_14;
	this->ukeywords->clear();
label_cond_14:
	itr = std::make_shared<sun::util::locale::StringTokenIterator>(subtags, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v0, "itr":Lsun/util/locale/StringTokenIterator;
label_goto_1c:
	if ( itr->isDone() )     
		goto label_cond_2c;
	if ( sun::util::locale::UnicodeLocaleExtension::isAttribute(itr->current()) )     
		goto label_cond_4f;
label_cond_2c:
	key = 0x0;
	//    .local v1, "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	typeStart = -0x1;
	//    .local v5, "typeStart":I
	typeEnd = -0x1;
	//    .end local v1    # "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	//    .local v4, "typeEnd":I
label_goto_2f:
	if ( itr->isDone() )     
		goto label_cond_f3;
	if ( !(key) )  
		goto label_cond_bd;
	if ( !(sun::util::locale::UnicodeLocaleExtension::isKey(itr->current())) )  
		goto label_cond_b2;
	if ( sun::util::locale::InternalLocaleBuilder::_assertionsDisabled )     
		goto label_cond_6c;
	if ( typeStart == cVar1 )
		goto label_cond_6c;
	if ( typeEnd != cVar1 )
		goto label_cond_6c;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 573    .line 609
	// 574    .end local v4    # "typeEnd":I
	// 575    .end local v5    # "typeStart":I
label_cond_4f:
	if ( this->uattributes )     
		goto label_cond_5a;
	cVar3 = std::make_shared<java::util::HashSet>(cVar0);
	this->uattributes = cVar3;
label_cond_5a:
	cVar4 = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(itr->current());
	this->uattributes->add(cVar4);
	itr->next();
	goto label_goto_1c;
	// 607    .line 626
	// 608    .restart local v4    # "typeEnd":I
	// 609    .restart local v5    # "typeStart":I
label_cond_6c:
	if ( typeStart != cVar1 )
		goto label_cond_ab;
	//    .local v3, "type":Ljava/lang/String;
label_goto_71:
	if ( this->ukeywords )     
		goto label_cond_7c;
	cVar5 = std::make_shared<java::util::HashMap>(cVar0);
	this->ukeywords = cVar5;
label_cond_7c:
	this->ukeywords->put(key, type);
	tmpKey = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(itr->current());
	//    .local v2, "tmpKey":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	if ( !(this->ukeywords->containsKey(tmpKey)) )  
		goto label_cond_b0;
	key = 0x0;
label_goto_93:
	typeEnd = -0x1;
	typeStart = -0x1;
	//    .end local v2    # "tmpKey":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	//    .end local v3    # "type":Ljava/lang/String;
label_cond_95:
label_goto_95:
	if ( itr->hasNext() )     
		goto label_cond_f9;
	if ( !(key) )  
		goto label_cond_f3;
	if ( sun::util::locale::InternalLocaleBuilder::_assertionsDisabled )     
		goto label_cond_de;
	if ( typeStart == cVar1 )
		goto label_cond_de;
	if ( typeEnd != cVar1 )
		goto label_cond_de;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 691    .line 626
label_cond_ab:
	//    .restart local v3    # "type":Ljava/lang/String;
	goto label_goto_71;
	// 700    .line 634
	// 701    .restart local v2    # "tmpKey":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
label_cond_b0:
	key = tmpKey;
	//    .local v1, "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	goto label_goto_93;
	// 708    .line 637
	// 709    .end local v1    # "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	// 710    .end local v2    # "tmpKey":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	// 711    .end local v3    # "type":Ljava/lang/String;
label_cond_b2:
	if ( typeStart != cVar1 )
		goto label_cond_b8;
	typeStart = itr->currentStart();
label_cond_b8:
	itr->currentEnd();
	goto label_goto_95;
	// 728    .line 642
label_cond_bd:
	if ( !(sun::util::locale::UnicodeLocaleExtension::isKey(itr->current())) )  
		goto label_cond_95;
	key = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(itr->current());
	//    .restart local v1    # "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	if ( !(this->ukeywords) )  
		goto label_cond_95;
	if ( !(this->ukeywords->containsKey(key)) )  
		goto label_cond_95;
	//    .local v1, "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	goto label_goto_95;
	// 769    .line 656
	// 770    .end local v1    # "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
label_cond_de:
	if ( typeStart != cVar1 )
		goto label_cond_f4;
	//    .restart local v3    # "type":Ljava/lang/String;
label_goto_e3:
	if ( this->ukeywords )     
		goto label_cond_ee;
	cVar7 = std::make_shared<java::util::HashMap>(cVar0);
	this->ukeywords = cVar7;
label_cond_ee:
	this->ukeywords->put(key, type);
	//    .end local v3    # "type":Ljava/lang/String;
label_cond_f3:
	return;
	// 801    .line 656
label_cond_f4:
	//    .restart local v3    # "type":Ljava/lang/String;
	goto label_goto_e3;
	// 810    .line 665
	// 811    .end local v3    # "type":Ljava/lang/String;
label_cond_f9:
	itr->next();
	goto label_goto_2f;

}
// .method public addUnicodeLocaleAttribute(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::addUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute)
{
	
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::HashSet> cVar2;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar3;
	
	//    .param p1, "attribute"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 824        value = {
	// 825            Lsun/util/locale/LocaleSyntaxException;
	// 826        }
	// 827    .end annotation
	if ( sun::util::locale::UnicodeLocaleExtension::isAttribute(attribute) )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed Unicode locale attribute: ")))->append(attribute)->toString());
	// throw
	throw cVar0;
	// 862    .line 115
label_cond_20:
	if ( this->uattributes )     
		goto label_cond_2c;
	cVar2 = std::make_shared<java::util::HashSet>(0x4);
	this->uattributes = cVar2;
label_cond_2c:
	cVar3 = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(attribute);
	this->uattributes->add(cVar3);
	return this;

}
// .method public clear()Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::clear()
{
	
	this->language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->clearExtensions();
	return this;

}
// .method public clearExtensions()Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::clearExtensions()
{
	
	if ( !(this->extensions) )  
		goto label_cond_9;
	this->extensions->clear();
label_cond_9:
	if ( !(this->uattributes) )  
		goto label_cond_12;
	this->uattributes->clear();
label_cond_12:
	if ( !(this->ukeywords) )  
		goto label_cond_1b;
	this->ukeywords->clear();
label_cond_1b:
	return this;

}
// .method public getBaseLocale()Lsun/util/locale/BaseLocale;
std::shared_ptr<sun::util::locale::BaseLocale> sun::util::locale::InternalLocaleBuilder::getBaseLocale()
{
	
	std::shared_ptr<java::lang::String> variant;
	std::shared_ptr<java::lang::String> privuse;
	std::shared_ptr<sun::util::locale::StringTokenIterator> itr;
	int sawPrefix;
	int privVarStart;
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	//    .local v1, "language":Ljava/lang/String;
	//    .local v7, "script":Ljava/lang/String;
	//    .local v4, "region":Ljava/lang/String;
	variant = this->variant;
	//    .local v8, "variant":Ljava/lang/String;
	if ( !(this->extensions) )  
		goto label_cond_57;
	privuse = this->extensions->get(sun::util::locale::InternalLocaleBuilder::PRIVATEUSE_KEY);
	privuse->checkCast("java::lang::String");
	//    .local v3, "privuse":Ljava/lang/String;
	if ( !(privuse) )  
		goto label_cond_57;
	itr = std::make_shared<sun::util::locale::StringTokenIterator>(privuse, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v0, "itr":Lsun/util/locale/StringTokenIterator;
	sawPrefix = 0x0;
	//    .local v5, "sawPrefix":Z
	//    .local v2, "privVarStart":I
label_goto_22:
	if ( itr->isDone() )     
		goto label_cond_2e;
	if ( !(sawPrefix) )  
		goto label_cond_5c;
	privVarStart = itr->currentStart();
label_cond_2e:
	if ( -0x1 == -0x1 )
		goto label_cond_57;
	sb = std::make_shared<java::lang::StringBuilder>(variant);
	//    .local v6, "sb":Ljava/lang/StringBuilder;
	if ( !(sb->length()) )  
		goto label_cond_42;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
label_cond_42:
	sb->append(privuse->substring(privVarStart)->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")), std::make_shared<java::lang::String>(std::make_shared<char[]>("_"))));
	//    .end local v0    # "itr":Lsun/util/locale/StringTokenIterator;
	//    .end local v2    # "privVarStart":I
	//    .end local v3    # "privuse":Ljava/lang/String;
	//    .end local v5    # "sawPrefix":Z
	//    .end local v6    # "sb":Ljava/lang/StringBuilder;
label_cond_57:
	return sun::util::locale::BaseLocale::getInstance(this->language, this->script, this->region, variant);
	// 1095    .line 510
	// 1096    .restart local v0    # "itr":Lsun/util/locale/StringTokenIterator;
	// 1097    .restart local v2    # "privVarStart":I
	// 1098    .restart local v3    # "privuse":Ljava/lang/String;
	// 1099    .restart local v5    # "sawPrefix":Z
label_cond_5c:
	if ( !(sun::util::locale::LocaleUtils::caseIgnoreMatch(itr->current(), std::make_shared<java::lang::String>(std::make_shared<char[]>("lvariant")))) )  
		goto label_cond_6a;
	sawPrefix = 0x1;
label_cond_6a:
	itr->next();
	goto label_goto_22;

}
// .method public getLocaleExtensions()Lsun/util/locale/LocaleExtensions;
std::shared_ptr<sun::util::locale::LocaleExtensions> sun::util::locale::InternalLocaleBuilder::getLocaleExtensions()
{
	
	std::shared_ptr<sun::util::locale::LocaleExtensions> cVar0;
	std::shared_ptr<sun::util::locale::LocaleExtensions> lext;
	
	cVar0 = 0x0;
	if ( !(sun::util::locale::LocaleUtils::isEmpty(this->extensions)) )  
		goto label_cond_1a;
	if ( !(sun::util::locale::LocaleUtils::isEmpty(this->uattributes)) )  
		goto label_cond_1a;
	if ( !(sun::util::locale::LocaleUtils::isEmpty(this->ukeywords)) )  
		goto label_cond_1a;
	return cVar0;
	// 1159    .line 536
label_cond_1a:
	lext = std::make_shared<sun::util::locale::LocaleExtensions>(this->extensions, this->uattributes, this->ukeywords);
	//    .local v0, "lext":Lsun/util/locale/LocaleExtensions;
	if ( !(lext->isEmpty()) )  
		goto label_cond_2c;
	//    .end local v0    # "lext":Lsun/util/locale/LocaleExtensions;
label_cond_2c:
	return lext;

}
// .method public removeUnicodeLocaleAttribute(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::removeUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute)
{
	
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar2;
	
	//    .param p1, "attribute"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1190        value = {
	// 1191            Lsun/util/locale/LocaleSyntaxException;
	// 1192        }
	// 1193    .end annotation
	if ( !(attribute) )  
		goto label_cond_a;
	if ( !(( sun::util::locale::UnicodeLocaleExtension::isAttribute(attribute) ^ 0x1)) )  
		goto label_cond_24;
label_cond_a:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed Unicode locale attribute: ")))->append(attribute)->toString());
	// throw
	throw cVar0;
	// 1233    .line 126
label_cond_24:
	if ( !(this->uattributes) )  
		goto label_cond_32;
	cVar2 = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(attribute);
	this->uattributes->remove(cVar2);
label_cond_32:
	return this;

}
// .method public setExtension(CLjava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setExtension(char singleton,std::shared_ptr<java::lang::String> value)
{
	
	int isBcpPrivateuse;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> key;
	std::shared_ptr<java::lang::String> val;
	std::shared_ptr<sun::util::locale::StringTokenIterator> itr;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::HashMap> cVar4;
	
	//    .param p1, "singleton"    # C
	//    .param p2, "value"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1258        value = {
	// 1259            Lsun/util/locale/LocaleSyntaxException;
	// 1260        }
	// 1261    .end annotation
	isBcpPrivateuse = sun::util::locale::LanguageTag::isPrivateusePrefixChar(singleton);
	//    .local v0, "isBcpPrivateuse":Z
	if ( isBcpPrivateuse )     
		goto label_cond_28;
	if ( !(( sun::util::locale::LanguageTag::isExtensionSingletonChar(singleton) ^ 0x1)) )  
		goto label_cond_28;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed extension key: ")))->append(singleton)->toString());
	// throw
	throw cVar0;
	// 1306    .line 174
label_cond_28:
	//    .local v3, "remove":Z
	key = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(singleton);
	//    .local v2, "key":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;
	if ( !(sun::util::locale::LocaleUtils::isEmpty(value)) )  
		goto label_cond_62;
	if ( !(sun::util::locale::UnicodeLocaleExtension::isSingletonChar(key->value())) )  
		goto label_cond_50;
	if ( !(this->uattributes) )  
		goto label_cond_46;
	this->uattributes->clear();
label_cond_46:
	if ( !(this->ukeywords) )  
		goto label_cond_4f;
	this->ukeywords->clear();
label_cond_4f:
label_goto_4f:
	return this;
	// 1359    .line 187
label_cond_50:
	if ( !(this->extensions) )  
		goto label_cond_4f;
	if ( !(this->extensions->containsKey(key)) )  
		goto label_cond_4f;
	this->extensions->remove(key);
	goto label_goto_4f;
	// 1380    .line 193
label_cond_62:
	val = value->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")), std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v5, "val":Ljava/lang/String;
	itr = std::make_shared<sun::util::locale::StringTokenIterator>(val, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v1, "itr":Lsun/util/locale/StringTokenIterator;
label_goto_74:
	if ( itr->isDone() )     
		goto label_cond_ad;
	s = itr->current();
	//    .local v4, "s":Ljava/lang/String;
	if ( !(isBcpPrivateuse) )  
		goto label_cond_a4;
	//    .local v6, "validSubtag":Z
label_goto_84:
	if ( validSubtag )     
		goto label_cond_a9;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed extension value: ")))->append(s)->toString(), itr->currentStart());
	// throw
	throw cVar2;
	// 1457    .line 201
	// 1458    .end local v6    # "validSubtag":Z
label_cond_a4:
	//    .restart local v6    # "validSubtag":Z
	goto label_goto_84;
	// 1467    .line 207
label_cond_a9:
	itr->next();
	goto label_goto_74;
	// 1473    .line 210
	// 1474    .end local v4    # "s":Ljava/lang/String;
	// 1475    .end local v6    # "validSubtag":Z
label_cond_ad:
	if ( !(sun::util::locale::UnicodeLocaleExtension::isSingletonChar(key->value())) )  
		goto label_cond_bb;
	this->setUnicodeLocaleExtension(val);
	goto label_goto_4f;
	// 1492    .line 213
label_cond_bb:
	if ( this->extensions )     
		goto label_cond_c7;
	cVar4 = std::make_shared<java::util::HashMap>(0x4);
	this->extensions = cVar4;
label_cond_c7:
	this->extensions->put(key, val);
	goto label_goto_4f;

}
// .method public setExtensions(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setExtensions(std::shared_ptr<java::lang::String> subtags)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<sun::util::locale::StringTokenIterator> itr;
	std::shared_ptr<java::util::List> extensions;
	int parsed;
	std::shared_ptr<java::lang::String> s;
	int start;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::ArrayList> extensions;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p1, "subtags"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1520        value = {
	// 1521            Lsun/util/locale/LocaleSyntaxException;
	// 1522        }
	// 1523    .end annotation
	if ( !(sun::util::locale::LocaleUtils::isEmpty(subtags)) )  
		goto label_cond_a;
	this->clearExtensions();
	return this;
	// 1539    .line 230
label_cond_a:
	cVar0 = subtags->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")), std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	itr = std::make_shared<sun::util::locale::StringTokenIterator>(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v1, "itr":Lsun/util/locale/StringTokenIterator;
	extensions = 0x0;
	//    .local v0, "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .local v3, "privateuse":Ljava/lang/String;
	parsed = 0x0;
	//    .end local v0    # "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .local v2, "parsed":I
label_goto_1f:
	if ( itr->isDone() )     
		goto label_cond_91;
	s = itr->current();
	//    .local v4, "s":Ljava/lang/String;
	if ( !(sun::util::locale::LanguageTag::isExtensionSingleton(s)) )  
		goto label_cond_91;
	start = itr->currentStart();
	//    .local v7, "start":I
	//    .local v6, "singleton":Ljava/lang/String;
	sb = std::make_shared<java::lang::StringBuilder>(s);
	//    .local v5, "sb":Ljava/lang/StringBuilder;
	itr->next();
label_goto_3c:
	if ( itr->isDone() )     
		goto label_cond_5e;
	s = itr->current();
	if ( !(sun::util::locale::LanguageTag::isExtensionSubtag(s)) )  
		goto label_cond_5e;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(s);
	itr->currentEnd();
	itr->next();
	goto label_goto_3c;
	// 1649    .line 259
label_cond_5e:
	if ( parsed >= start )
		goto label_cond_81;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incomplete extension \'")))->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString(), start);
	// throw
	throw cVar1;
	// 1684    .line 264
label_cond_81:
	if ( extensions )     
		goto label_cond_89;
	extensions = std::make_shared<java::util::ArrayList>(0x4);
label_cond_89:
	extensions->add(sb->toString());
	goto label_goto_1f;
	// 1705    .line 272
	// 1706    .end local v4    # "s":Ljava/lang/String;
	// 1707    .end local v5    # "sb":Ljava/lang/StringBuilder;
	// 1708    .end local v6    # "singleton":Ljava/lang/String;
	// 1709    .end local v7    # "start":I
label_cond_91:
	if ( itr->isDone() )     
		goto label_cond_f3;
	s = itr->current();
	//    .restart local v4    # "s":Ljava/lang/String;
	if ( !(sun::util::locale::LanguageTag::isPrivateusePrefix(s)) )  
		goto label_cond_f3;
	start = itr->currentStart();
	//    .restart local v7    # "start":I
	sb = std::make_shared<java::lang::StringBuilder>(s);
	//    .restart local v5    # "sb":Ljava/lang/StringBuilder;
	itr->next();
label_goto_ad:
	if ( itr->isDone() )     
		goto label_cond_bd;
	s = itr->current();
	if ( sun::util::locale::LanguageTag::isPrivateuseSubtag(s) )     
		goto label_cond_dd;
label_cond_bd:
	if ( parsed >  start )
		goto label_cond_ef;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incomplete privateuse:")))->append(cVar0->substring(start))->toString(), start);
	// throw
	throw cVar3;
	// 1800    .line 284
label_cond_dd:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(s);
	itr->currentEnd();
	itr->next();
	goto label_goto_ad;
	// 1820    .line 294
label_cond_ef:
	//    .end local v3    # "privateuse":Ljava/lang/String;
	//    .end local v4    # "s":Ljava/lang/String;
	//    .end local v5    # "sb":Ljava/lang/StringBuilder;
	//    .end local v7    # "start":I
label_cond_f3:
	if ( itr->isDone() )     
		goto label_cond_11f;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed extension subtags:")))->append(cVar0->substring(itr->currentStart()))->toString(), itr->currentStart());
	// throw
	throw cVar5;
	// 1879    .line 305
label_cond_11f:
	return this->setExtensions(extensions, 0x0);

}
// .method public setLanguage(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setLanguage(std::shared_ptr<java::lang::String> language)
{
	
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1892        value = {
	// 1893            Lsun/util/locale/LocaleSyntaxException;
	// 1894        }
	// 1895    .end annotation
	if ( !(sun::util::locale::LocaleUtils::isEmpty(language)) )  
		goto label_cond_c;
	this->language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_b:
	return this;
	// 1914    .line 63
label_cond_c:
	if ( sun::util::locale::LanguageTag::isLanguage(language) )     
		goto label_cond_2d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed language: ")))->append(language)->toString(), 0x0);
	// throw
	throw cVar0;
	// 1949    .line 66
label_cond_2d:
	this->language = language;
	goto label_goto_b;

}
// .method public setLanguageTag(Lsun/util/locale/LanguageTag;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setLanguageTag(std::shared_ptr<sun::util::locale::LanguageTag> langtag)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::util::List> bcpVariants;
	std::shared_ptr<java::lang::StringBuilder> var;
	std::shared_ptr<java::lang::String> cVar2;
	int i;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<java::lang::String> lang;
	
	//    .param p1, "langtag"    # Lsun/util/locale/LanguageTag;
	cVar0 = 0x0;
	this->clear();
	if ( langtag->getExtlangs()->isEmpty() )     
		goto label_cond_55;
	cVar1 = langtag->getExtlangs()->get(cVar0);
	cVar1->checkCast("java::lang::String");
	this->language = cVar1;
label_cond_1a:
label_goto_1a:
	this->script = langtag->getScript();
	this->region = langtag->getRegion();
	bcpVariants = langtag->getVariants();
	//    .local v0, "bcpVariants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( bcpVariants->isEmpty() )     
		goto label_cond_6b;
	cVar2 = bcpVariants->get(cVar0);
	cVar2->checkCast("java::lang::String");
	var = std::make_shared<java::lang::StringBuilder>(cVar2);
	//    .local v4, "var":Ljava/lang/StringBuilder;
	//    .local v3, "size":I
	i = 0x1;
	//    .local v1, "i":I
label_goto_40:
	if ( i >= bcpVariants->size() )
		goto label_cond_65;
	cVar3 = bcpVariants->get(i);
	cVar3->checkCast("java::lang::String");
	var->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(cVar3);
	i = ( i + 0x1);
	goto label_goto_40;
	// 2064    .line 353
	// 2065    .end local v0    # "bcpVariants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 2066    .end local v1    # "i":I
	// 2067    .end local v3    # "size":I
	// 2068    .end local v4    # "var":Ljava/lang/StringBuilder;
label_cond_55:
	lang = langtag->getLanguage();
	//    .local v2, "lang":Ljava/lang/String;
	if ( lang->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("und"))) )     
		goto label_cond_1a;
	this->language = lang;
	goto label_goto_1a;
	// 2089    .line 368
	// 2090    .end local v2    # "lang":Ljava/lang/String;
	// 2091    .restart local v0    # "bcpVariants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 2092    .restart local v1    # "i":I
	// 2093    .restart local v3    # "size":I
	// 2094    .restart local v4    # "var":Ljava/lang/StringBuilder;
label_cond_65:
	this->variant = var->toString();
	//    .end local v1    # "i":I
	//    .end local v3    # "size":I
	//    .end local v4    # "var":Ljava/lang/StringBuilder;
label_cond_6b:
	this->setExtensions(langtag->getExtensions(), langtag->getPrivateuse());
	return this;

}
// .method public setLocale(Lsun/util/locale/BaseLocale;Lsun/util/locale/LocaleExtensions;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setLocale(std::shared_ptr<sun::util::locale::BaseLocale> base,std::shared_ptr<sun::util::locale::LocaleExtensions> localeExtensions)
{
	
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> variant;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	int errIdx;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::lang::Iterable> cVar10;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::Character> key;
	std::shared_ptr<sun::util::locale::UnicodeLocaleExtension> e;
	std::shared_ptr<sun::util::locale::UnicodeLocaleExtension> ue;
	std::shared_ptr<java::util::Iterator> uatr_S_iterator;
	std::shared_ptr<java::lang::String> uatr;
	std::shared_ptr<java::util::HashSet> cVar11;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar12;
	std::shared_ptr<java::util::Iterator> ukey_S_iterator;
	std::shared_ptr<java::lang::String> ukey;
	std::shared_ptr<java::util::HashMap> cVar13;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar14;
	std::shared_ptr<java::util::HashMap> cVar15;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> cVar16;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "base"    # Lsun/util/locale/BaseLocale;
	//    .param p2, "localeExtensions"    # Lsun/util/locale/LocaleExtensions;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2126        value = {
	// 2127            Lsun/util/locale/LocaleSyntaxException;
	// 2128        }
	// 2129    .end annotation
	language = base->getLanguage();
	//    .local v7, "language":Ljava/lang/String;
	script = base->getScript();
	//    .local v9, "script":Ljava/lang/String;
	region = base->getRegion();
	//    .local v8, "region":Ljava/lang/String;
	variant = base->getVariant();
	//    .local v15, "variant":Ljava/lang/String;
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("ja")))) )  
		goto label_cond_7a;
	if ( !(region->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("JP")))) )  
		goto label_cond_7a;
	if ( !(variant->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("JP")))) )  
		goto label_cond_7a;
	if ( sun::util::locale::InternalLocaleBuilder::_assertionsDisabled )     
		goto label_cond_4d;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese"))->equals(localeExtensions->getUnicodeLocaleType(std::make_shared<java::lang::String>(std::make_shared<char[]>("ca")))) )     
		goto label_cond_4d;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2214    .line 389
label_cond_4d:
	variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_cond_50:
label_goto_50:
	if ( language->length() <= 0 )
		goto label_cond_e2;
	if ( !(( sun::util::locale::LanguageTag::isLanguage(language) ^ 0x1)) )  
		goto label_cond_e2;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed language: ")))->append(language)->toString());
	// throw
	throw cVar1;
	// 2262    .line 392
label_cond_7a:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("th")))) )  
		goto label_cond_bb;
	if ( !(region->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("TH")))) )  
		goto label_cond_bb;
	if ( !(variant->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("TH")))) )  
		goto label_cond_bb;
	if ( sun::util::locale::InternalLocaleBuilder::_assertionsDisabled )     
		goto label_cond_b7;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("thai"))->equals(localeExtensions->getUnicodeLocaleType(std::make_shared<java::lang::String>(std::make_shared<char[]>("nu")))) )     
		goto label_cond_b7;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 2321    .line 396
label_cond_b7:
	variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_50;
	// 2327    .line 399
label_cond_bb:
	if ( !(language->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("no")))) )  
		goto label_cond_50;
	if ( !(region->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("NO")))) )  
		goto label_cond_50;
	if ( !(variant->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("NY")))) )  
		goto label_cond_50;
	language = std::make_shared<java::lang::String>(std::make_shared<char[]>("nn"));
	variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_50;
	// 2365    .line 413
label_cond_e2:
	if ( script->length() <= 0 )
		goto label_cond_10c;
	if ( !(( sun::util::locale::LanguageTag::isScript(script) ^ 0x1)) )  
		goto label_cond_10c;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed script: ")))->append(script)->toString());
	// throw
	throw cVar4;
	// 2408    .line 417
label_cond_10c:
	if ( region->length() <= 0 )
		goto label_cond_136;
	if ( !(( sun::util::locale::LanguageTag::isRegion(region) ^ 0x1)) )  
		goto label_cond_136;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed region: ")))->append(region)->toString());
	// throw
	throw cVar6;
	// 2451    .line 421
label_cond_136:
	if ( variant->length() <= 0 )
		goto label_cond_177;
	variant = variant->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")), std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	errIdx = this->checkVariants(variant, std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v3, "errIdx":I
	if ( errIdx == -0x1 )
		goto label_cond_177;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	var144 = cVar8(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed variant: ")))->append(variant)->toString(), errIdx);
	// throw
	throw cVar8;
	// 2518    .line 433
	// 2519    .end local v3    # "errIdx":I
label_cond_177:
	this->language = language;
	this->script = script;
	this->region = region;
	this->variant = variant;
	this->clearExtensions();
	if ( localeExtensions )     
		goto label_cond_1e8;
	cVar10 = 0x0;
label_goto_18d:
	if ( !(cVar10) )  
		goto label_cond_258;
	key_S_iterator = cVar10->iterator();
	//    .local v6, "key$iterator":Ljava/util/Iterator;
label_cond_193:
label_goto_193:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_258;
	key = key_S_iterator->next();
	key->checkCast("java::lang::Character");
	//    .local v5, "key":Ljava/lang/Character;
	e = localeExtensions->getExtension(key);
	//    .local v2, "e":Lsun/util/locale/Extension;
	if ( !(e->instanceOf("sun::util::locale::UnicodeLocaleExtension")) )  
		goto label_cond_22b;
	ue = e;
	ue->checkCast("sun::util::locale::UnicodeLocaleExtension");
	//    .local v12, "ue":Lsun/util/locale/UnicodeLocaleExtension;
	uatr_S_iterator = ue->getUnicodeLocaleAttributes()->iterator();
	//    .local v11, "uatr$iterator":Ljava/util/Iterator;
label_goto_1b6:
	if ( !(uatr_S_iterator->hasNext()) )  
		goto label_cond_1ed;
	uatr = uatr_S_iterator->next();
	uatr->checkCast("java::lang::String");
	//    .local v10, "uatr":Ljava/lang/String;
	if ( this->uattributes )     
		goto label_cond_1d7;
	cVar11 = std::make_shared<java::util::HashSet>(0x4);
	this->uattributes = cVar11;
label_cond_1d7:
	var185 = cVar12(uatr);
	this->uattributes->add(cVar12);
	goto label_goto_1b6;
	// 2658    .line 439
	// 2659    .end local v2    # "e":Lsun/util/locale/Extension;
	// 2660    .end local v5    # "key":Ljava/lang/Character;
	// 2661    .end local v6    # "key$iterator":Ljava/util/Iterator;
	// 2662    .end local v10    # "uatr":Ljava/lang/String;
	// 2663    .end local v11    # "uatr$iterator":Ljava/util/Iterator;
	// 2664    .end local v12    # "ue":Lsun/util/locale/UnicodeLocaleExtension;
label_cond_1e8:
	cVar10 = localeExtensions->getKeys();
	//    .local v4, "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	goto label_goto_18d;
	// 2673    .line 452
	// 2674    .end local v4    # "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	// 2675    .restart local v2    # "e":Lsun/util/locale/Extension;
	// 2676    .restart local v5    # "key":Ljava/lang/Character;
	// 2677    .restart local v6    # "key$iterator":Ljava/util/Iterator;
	// 2678    .restart local v11    # "uatr$iterator":Ljava/util/Iterator;
	// 2679    .restart local v12    # "ue":Lsun/util/locale/UnicodeLocaleExtension;
label_cond_1ed:
	ukey_S_iterator = ue->getUnicodeLocaleKeys()->iterator();
	//    .local v14, "ukey$iterator":Ljava/util/Iterator;
label_goto_1f5:
	if ( !(ukey_S_iterator->hasNext()) )  
		goto label_cond_193;
	ukey = ukey_S_iterator->next();
	ukey->checkCast("java::lang::String");
	//    .local v13, "ukey":Ljava/lang/String;
	if ( this->ukeywords )     
		goto label_cond_216;
	cVar13 = std::make_shared<java::util::HashMap>(0x4);
	this->ukeywords = cVar13;
label_cond_216:
	var210 = cVar14(ukey);
	this->ukeywords->put(cVar14, ue->getUnicodeLocaleType(ukey));
	goto label_goto_1f5;
	// 2748    .line 459
	// 2749    .end local v11    # "uatr$iterator":Ljava/util/Iterator;
	// 2750    .end local v12    # "ue":Lsun/util/locale/UnicodeLocaleExtension;
	// 2751    .end local v13    # "ukey":Ljava/lang/String;
	// 2752    .end local v14    # "ukey$iterator":Ljava/util/Iterator;
label_cond_22b:
	if ( this->extensions )     
		goto label_cond_240;
	cVar15 = std::make_shared<java::util::HashMap>(0x4);
	this->extensions = cVar15;
label_cond_240:
	cVar16 = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(key->charValue());
	this->extensions->put(cVar16, e->getValue());
	goto label_goto_193;
	// 2799    .line 466
	// 2800    .end local v2    # "e":Lsun/util/locale/Extension;
	// 2801    .end local v5    # "key":Ljava/lang/Character;
	// 2802    .end local v6    # "key$iterator":Ljava/util/Iterator;
label_cond_258:
	return this;

}
// .method public setRegion(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setRegion(std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "region"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2811        value = {
	// 2812            Lsun/util/locale/LocaleSyntaxException;
	// 2813        }
	// 2814    .end annotation
	if ( !(sun::util::locale::LocaleUtils::isEmpty(region)) )  
		goto label_cond_c;
	this->region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_b:
	return this;
	// 2833    .line 87
label_cond_c:
	if ( sun::util::locale::LanguageTag::isRegion(region) )     
		goto label_cond_2d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed region: ")))->append(region)->toString(), 0x0);
	// throw
	throw cVar0;
	// 2868    .line 90
label_cond_2d:
	this->region = region;
	goto label_goto_b;

}
// .method public setScript(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setScript(std::shared_ptr<java::lang::String> script)
{
	
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "script"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2879        value = {
	// 2880            Lsun/util/locale/LocaleSyntaxException;
	// 2881        }
	// 2882    .end annotation
	if ( !(sun::util::locale::LocaleUtils::isEmpty(script)) )  
		goto label_cond_c;
	this->script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_b:
	return this;
	// 2901    .line 75
label_cond_c:
	if ( sun::util::locale::LanguageTag::isScript(script) )     
		goto label_cond_2d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed script: ")))->append(script)->toString(), 0x0);
	// throw
	throw cVar0;
	// 2936    .line 78
label_cond_2d:
	this->script = script;
	goto label_goto_b;

}
// .method public setUnicodeLocaleKeyword(Ljava/lang/String;Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setUnicodeLocaleKeyword(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type)
{
	
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cikey;
	std::shared_ptr<sun::util::locale::StringTokenIterator> itr;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::HashMap> cVar4;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "type"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2948        value = {
	// 2949            Lsun/util/locale/LocaleSyntaxException;
	// 2950        }
	// 2951    .end annotation
	if ( sun::util::locale::UnicodeLocaleExtension::isKey(key) )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed Unicode locale keyword key: ")))->append(key)->toString());
	// throw
	throw cVar0;
	// 2986    .line 137
label_cond_20:
	cikey = std::make_shared<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(key);
	//    .local v0, "cikey":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	if ( type )     
		goto label_cond_31;
	if ( !(this->ukeywords) )  
		goto label_cond_30;
	this->ukeywords->remove(cikey);
label_cond_30:
label_goto_30:
	return this;
	// 3011    .line 144
label_cond_31:
	if ( !(type->length()) )  
		goto label_cond_7b;
	//    .local v3, "tp":Ljava/lang/String;
	itr = std::make_shared<sun::util::locale::StringTokenIterator>(type->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")), std::make_shared<java::lang::String>(std::make_shared<char[]>("-"))), std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v1, "itr":Lsun/util/locale/StringTokenIterator;
label_goto_49:
	if ( itr->isDone() )     
		goto label_cond_7b;
	//    .local v2, "s":Ljava/lang/String;
	if ( sun::util::locale::UnicodeLocaleExtension::isTypeSubtag(itr->current()) )     
		goto label_cond_77;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed Unicode locale keyword type: ")))->append(type)->toString(), itr->currentStart());
	// throw
	throw cVar2;
	// 3089    .line 156
label_cond_77:
	itr->next();
	goto label_goto_49;
	// 3095    .line 159
	// 3096    .end local v1    # "itr":Lsun/util/locale/StringTokenIterator;
	// 3097    .end local v2    # "s":Ljava/lang/String;
	// 3098    .end local v3    # "tp":Ljava/lang/String;
label_cond_7b:
	if ( this->ukeywords )     
		goto label_cond_87;
	cVar4 = std::make_shared<java::util::HashMap>(0x4);
	this->ukeywords = cVar4;
label_cond_87:
	this->ukeywords->put(cikey, type);
	goto label_goto_30;

}
// .method public setVariant(Ljava/lang/String;)Lsun/util/locale/InternalLocaleBuilder;
std::shared_ptr<sun::util::locale::InternalLocaleBuilder> sun::util::locale::InternalLocaleBuilder::setVariant(std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<java::lang::String> var;
	int errIdx;
	std::shared_ptr<sun::util::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "variant"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3126        value = {
	// 3127            Lsun/util/locale/LocaleSyntaxException;
	// 3128        }
	// 3129    .end annotation
	if ( !(sun::util::locale::LocaleUtils::isEmpty(variant)) )  
		goto label_cond_c;
	this->variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_b:
	return this;
	// 3148    .line 100
label_cond_c:
	var = variant->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")), std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v1, "var":Ljava/lang/String;
	errIdx = this->checkVariants(var, std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v0, "errIdx":I
	if ( errIdx == -0x1 )
		goto label_cond_3a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<sun::util::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed variant: ")))->append(variant)->toString(), errIdx);
	// throw
	throw cVar0;
	// 3197    .line 105
label_cond_3a:
	this->variant = var;
	goto label_goto_b;

}


