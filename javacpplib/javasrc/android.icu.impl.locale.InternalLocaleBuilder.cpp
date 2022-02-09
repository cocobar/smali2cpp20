// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\InternalLocaleBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "android.icu.impl.locale.Extension.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"
#include "android.icu.impl.locale.InternalLocaleBuilder.h"
#include "android.icu.impl.locale.LanguageTag.h"
#include "android.icu.impl.locale.LocaleExtensions.h"
#include "android.icu.impl.locale.LocaleSyntaxException.h"
#include "android.icu.impl.locale.StringTokenIterator.h"
#include "android.icu.impl.locale.UnicodeLocaleExtension.h"
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
#include "java.util.Set.h"

static android::icu::impl::locale::InternalLocaleBuilder::_assertionsDisabled;
static android::icu::impl::locale::InternalLocaleBuilder::JDKIMPL;
static android::icu::impl::locale::InternalLocaleBuilder::PRIVUSE_KEY;
// .method static constructor <clinit>()V
void android::icu::impl::locale::InternalLocaleBuilder::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> cVar0;
	
	android::icu::impl::locale::InternalLocaleBuilder::_assertionsDisabled = ( android::icu::impl::locale::InternalLocaleBuilder()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(std::make_shared<java::lang::String>(std::make_shared<char[]>("x"))->charAt(0x0));
	android::icu::impl::locale::InternalLocaleBuilder::PRIVUSE_KEY = cVar0;
	return;

}
// .method public constructor <init>()V
android::icu::impl::locale::InternalLocaleBuilder::InternalLocaleBuilder()
{
	
	// 107    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	return;

}
// .method private checkVariants(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::impl::locale::InternalLocaleBuilder::checkVariants(std::shared_ptr<java::lang::String> variants,std::shared_ptr<java::lang::String> sep)
{
	
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr;
	
	//    .param p1, "variants"    # Ljava/lang/String;
	//    .param p2, "sep"    # Ljava/lang/String;
	itr = std::make_shared<android::icu::impl::locale::StringTokenIterator>(variants, sep);
	//    .local v0, "itr":Landroid/icu/impl/locale/StringTokenIterator;
label_goto_5:
	if ( itr->isDone() )     
		goto label_cond_1e;
	//    .local v1, "s":Ljava/lang/String;
	if ( android::icu::impl::locale::LanguageTag::isVariant(itr->current()) )     
		goto label_cond_1a;
	return itr->currentStart();
	// 173    .line 552
label_cond_1a:
	itr->next();
	goto label_goto_5;
	// 179    .line 554
	// 180    .end local v1    # "s":Ljava/lang/String;
label_cond_1e:
	return -0x1;

}
// .method static removePrivateuseVariant(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::InternalLocaleBuilder::removePrivateuseVariant(std::shared_ptr<java::lang::String> privuseVal)
{
	
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr;
	int prefixStart;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p0, "privuseVal"    # Ljava/lang/String;
	itr = std::make_shared<android::icu::impl::locale::StringTokenIterator>(privuseVal, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v0, "itr":Landroid/icu/impl/locale/StringTokenIterator;
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
	// 233    .line 528
label_cond_18:
	if ( !(android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(itr->current(), std::make_shared<java::lang::String>(std::make_shared<char[]>("lvariant")))) )  
		goto label_cond_29;
	prefixStart = itr->currentStart();
label_cond_29:
	itr->next();
	goto label_goto_b;
	// 258    .line 537
label_cond_2d:
	if ( android::icu::impl::locale::InternalLocaleBuilder::_assertionsDisabled )     
		goto label_cond_3c;
	if ( !(prefixStart) )  
		goto label_cond_3c;
	if ( prefixStart >  0x1 )
		goto label_cond_3c;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 276    .line 538
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
// .method private setExtensions(Ljava/util/List;Ljava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setExtensions(std::shared_ptr<java::util::List<java::lang::String>> bcpExtensions,std::shared_ptr<java::lang::String> privateuse)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::util::HashSet> processedExtensions;
	std::shared_ptr<java::util::Iterator> bcpExt_S_iterator;
	std::shared_ptr<java::lang::String> bcpExt;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> key;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> cVar4;
	
	//    .param p2, "privateuse"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 299        value = {
	// 300            "(",
	// 301            "Ljava/util/List",
	// 302            "<",
	// 303            "Ljava/lang/String;",
	// 304            ">;",
	// 305            "Ljava/lang/String;",
	// 306            ")",
	// 307            "Landroid/icu/impl/locale/InternalLocaleBuilder;"
	// 308        }
	// 309    .end annotation
	//    .local p1, "bcpExtensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	cVar0 = 0x2;
	cVar1 = 0x0;
	this->clearExtensions();
	if ( !(bcpExtensions) )  
		goto label_cond_5d;
	if ( bcpExtensions->size() <= 0 )
		goto label_cond_5d;
	processedExtensions = std::make_shared<java::util::HashSet>(bcpExtensions->size());
	//    .local v3, "processedExtensions":Ljava/util/HashSet;, "Ljava/util/HashSet<Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;>;"
	bcpExt_S_iterator = bcpExtensions->iterator();
	//    .local v1, "bcpExt$iterator":Ljava/util/Iterator;
label_cond_1a:
label_goto_1a:
	if ( !(bcpExt_S_iterator->hasNext()) )  
		goto label_cond_5d;
	bcpExt = bcpExt_S_iterator->next();
	bcpExt->checkCast("java::lang::String");
	//    .local v0, "bcpExt":Ljava/lang/String;
	key = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(bcpExt->charAt(cVar1));
	//    .local v2, "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;
	if ( processedExtensions->contains(key) )     
		goto label_cond_1a;
	if ( !(android::icu::impl::locale::UnicodeLocaleExtension::isSingletonChar(key->value())) )  
		goto label_cond_47;
	this->setUnicodeLocaleExtension(bcpExt->substring(cVar0));
	goto label_goto_1a;
	// 397    .line 298
label_cond_47:
	if ( this->_extensions )     
		goto label_cond_53;
	cVar2 = std::make_shared<java::util::HashMap>(0x4);
	this->_extensions = cVar2;
label_cond_53:
	this->_extensions->put(key, bcpExt->substring(cVar0));
	goto label_goto_1a;
	// 424    .line 306
	// 425    .end local v0    # "bcpExt":Ljava/lang/String;
	// 426    .end local v1    # "bcpExt$iterator":Ljava/util/Iterator;
	// 427    .end local v2    # "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;
	// 428    .end local v3    # "processedExtensions":Ljava/util/HashSet;, "Ljava/util/HashSet<Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;>;"
label_cond_5d:
	if ( !(privateuse) )  
		goto label_cond_83;
	if ( privateuse->length() <= 0 )
		goto label_cond_83;
	if ( this->_extensions )     
		goto label_cond_71;
	cVar3 = std::make_shared<java::util::HashMap>(0x1);
	this->_extensions = cVar3;
label_cond_71:
	cVar4 = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(privateuse->charAt(cVar1));
	this->_extensions->put(cVar4, privateuse->substring(cVar0));
label_cond_83:
	return this;

}
// .method private setUnicodeLocaleExtension(Ljava/lang/String;)V
void android::icu::impl::locale::InternalLocaleBuilder::setUnicodeLocaleExtension(std::shared_ptr<java::lang::String> subtags)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr;
	std::shared_ptr<java::lang::Object> key;
	int typeStart;
	int typeEnd;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::util::HashMap> cVar5;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> tmpKey;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	std::shared_ptr<java::util::HashMap> cVar7;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> key;
	std::shared_ptr<java::util::HashSet> cVar3;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar4;
	
	//    .param p1, "subtags"    # Ljava/lang/String;
	cVar0 = 0x4;
	cVar1 = -0x1;
	if ( !(this->_uattributes) )  
		goto label_cond_b;
	this->_uattributes->clear();
label_cond_b:
	if ( !(this->_ukeywords) )  
		goto label_cond_14;
	this->_ukeywords->clear();
label_cond_14:
	itr = std::make_shared<android::icu::impl::locale::StringTokenIterator>(subtags, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v0, "itr":Landroid/icu/impl/locale/StringTokenIterator;
label_goto_1c:
	if ( itr->isDone() )     
		goto label_cond_2c;
	if ( android::icu::impl::locale::UnicodeLocaleExtension::isAttribute(itr->current()) )     
		goto label_cond_4f;
label_cond_2c:
	key = 0x0;
	//    .local v1, "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	typeStart = -0x1;
	//    .local v5, "typeStart":I
	typeEnd = -0x1;
	//    .end local v1    # "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	//    .local v4, "typeEnd":I
label_goto_2f:
	if ( itr->isDone() )     
		goto label_cond_f3;
	if ( !(key) )  
		goto label_cond_bd;
	if ( !(android::icu::impl::locale::UnicodeLocaleExtension::isKey(itr->current())) )  
		goto label_cond_b2;
	if ( android::icu::impl::locale::InternalLocaleBuilder::_assertionsDisabled )     
		goto label_cond_6c;
	if ( typeStart == cVar1 )
		goto label_cond_6c;
	if ( typeEnd != cVar1 )
		goto label_cond_6c;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 584    .line 578
	// 585    .end local v4    # "typeEnd":I
	// 586    .end local v5    # "typeStart":I
label_cond_4f:
	if ( this->_uattributes )     
		goto label_cond_5a;
	cVar3 = std::make_shared<java::util::HashSet>(cVar0);
	this->_uattributes = cVar3;
label_cond_5a:
	cVar4 = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(itr->current());
	this->_uattributes->add(cVar4);
	itr->next();
	goto label_goto_1c;
	// 618    .line 595
	// 619    .restart local v4    # "typeEnd":I
	// 620    .restart local v5    # "typeStart":I
label_cond_6c:
	if ( typeStart != cVar1 )
		goto label_cond_ab;
	//    .local v3, "type":Ljava/lang/String;
label_goto_71:
	if ( this->_ukeywords )     
		goto label_cond_7c;
	cVar5 = std::make_shared<java::util::HashMap>(cVar0);
	this->_ukeywords = cVar5;
label_cond_7c:
	this->_ukeywords->put(key, type);
	tmpKey = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(itr->current());
	//    .local v2, "tmpKey":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	if ( !(this->_ukeywords->containsKey(tmpKey)) )  
		goto label_cond_b0;
	key = 0x0;
label_goto_93:
	typeEnd = -0x1;
	typeStart = -0x1;
	//    .end local v2    # "tmpKey":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	//    .end local v3    # "type":Ljava/lang/String;
label_cond_95:
label_goto_95:
	if ( itr->hasNext() )     
		goto label_cond_f9;
	if ( !(key) )  
		goto label_cond_f3;
	if ( android::icu::impl::locale::InternalLocaleBuilder::_assertionsDisabled )     
		goto label_cond_de;
	if ( typeStart == cVar1 )
		goto label_cond_de;
	if ( typeEnd != cVar1 )
		goto label_cond_de;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 702    .line 595
label_cond_ab:
	//    .restart local v3    # "type":Ljava/lang/String;
	goto label_goto_71;
	// 711    .line 603
	// 712    .restart local v2    # "tmpKey":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
label_cond_b0:
	key = tmpKey;
	//    .local v1, "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	goto label_goto_93;
	// 719    .line 606
	// 720    .end local v1    # "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	// 721    .end local v2    # "tmpKey":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	// 722    .end local v3    # "type":Ljava/lang/String;
label_cond_b2:
	if ( typeStart != cVar1 )
		goto label_cond_b8;
	typeStart = itr->currentStart();
label_cond_b8:
	itr->currentEnd();
	goto label_goto_95;
	// 739    .line 611
label_cond_bd:
	if ( !(android::icu::impl::locale::UnicodeLocaleExtension::isKey(itr->current())) )  
		goto label_cond_95;
	key = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(itr->current());
	//    .restart local v1    # "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	if ( !(this->_ukeywords) )  
		goto label_cond_95;
	if ( !(this->_ukeywords->containsKey(key)) )  
		goto label_cond_95;
	//    .local v1, "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	goto label_goto_95;
	// 780    .line 625
	// 781    .end local v1    # "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
label_cond_de:
	if ( typeStart != cVar1 )
		goto label_cond_f4;
	//    .restart local v3    # "type":Ljava/lang/String;
label_goto_e3:
	if ( this->_ukeywords )     
		goto label_cond_ee;
	cVar7 = std::make_shared<java::util::HashMap>(cVar0);
	this->_ukeywords = cVar7;
label_cond_ee:
	this->_ukeywords->put(key, type);
	//    .end local v3    # "type":Ljava/lang/String;
label_cond_f3:
	return;
	// 812    .line 625
label_cond_f4:
	//    .restart local v3    # "type":Ljava/lang/String;
	goto label_goto_e3;
	// 821    .line 634
	// 822    .end local v3    # "type":Ljava/lang/String;
label_cond_f9:
	itr->next();
	goto label_goto_2f;

}
// .method public addUnicodeLocaleAttribute(Ljava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::addUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::HashSet> cVar2;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar3;
	
	//    .param p1, "attribute"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 835        value = {
	// 836            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 837        }
	// 838    .end annotation
	if ( !(attribute) )  
		goto label_cond_a;
	if ( !(( android::icu::impl::locale::UnicodeLocaleExtension::isAttribute(attribute) ^ 0x1)) )  
		goto label_cond_24;
label_cond_a:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed Unicode locale attribute: ")))->append(attribute)->toString());
	// throw
	throw cVar0;
	// 878    .line 96
label_cond_24:
	if ( this->_uattributes )     
		goto label_cond_30;
	cVar2 = std::make_shared<java::util::HashSet>(0x4);
	this->_uattributes = cVar2;
label_cond_30:
	cVar3 = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(attribute);
	this->_uattributes->add(cVar3);
	return this;

}
// .method public clear()Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::clear()
{
	
	this->_language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->clearExtensions();
	return this;

}
// .method public clearExtensions()Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::clearExtensions()
{
	
	if ( !(this->_extensions) )  
		goto label_cond_9;
	this->_extensions->clear();
label_cond_9:
	if ( !(this->_uattributes) )  
		goto label_cond_12;
	this->_uattributes->clear();
label_cond_12:
	if ( !(this->_ukeywords) )  
		goto label_cond_1b;
	this->_ukeywords->clear();
label_cond_1b:
	return this;

}
// .method public getBaseLocale()Landroid/icu/impl/locale/BaseLocale;
std::shared_ptr<android::icu::impl::locale::BaseLocale> android::icu::impl::locale::InternalLocaleBuilder::getBaseLocale()
{
	
	std::shared_ptr<java::lang::String> variant;
	std::shared_ptr<java::lang::String> privuse;
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr;
	int sawPrefix;
	int privVarStart;
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	//    .local v1, "language":Ljava/lang/String;
	//    .local v7, "script":Ljava/lang/String;
	//    .local v4, "region":Ljava/lang/String;
	variant = this->_variant;
	//    .local v8, "variant":Ljava/lang/String;
	if ( !(this->_extensions) )  
		goto label_cond_57;
	privuse = this->_extensions->get(android::icu::impl::locale::InternalLocaleBuilder::PRIVUSE_KEY);
	privuse->checkCast("java::lang::String");
	//    .local v3, "privuse":Ljava/lang/String;
	if ( !(privuse) )  
		goto label_cond_57;
	itr = std::make_shared<android::icu::impl::locale::StringTokenIterator>(privuse, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v0, "itr":Landroid/icu/impl/locale/StringTokenIterator;
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
	//    .end local v0    # "itr":Landroid/icu/impl/locale/StringTokenIterator;
	//    .end local v2    # "privVarStart":I
	//    .end local v3    # "privuse":Ljava/lang/String;
	//    .end local v5    # "sawPrefix":Z
	//    .end local v6    # "sb":Ljava/lang/StringBuilder;
label_cond_57:
	return android::icu::impl::locale::BaseLocale::getInstance(this->_language, this->_script, this->_region, variant);
	// 1109    .line 480
	// 1110    .restart local v0    # "itr":Landroid/icu/impl/locale/StringTokenIterator;
	// 1111    .restart local v2    # "privVarStart":I
	// 1112    .restart local v3    # "privuse":Ljava/lang/String;
	// 1113    .restart local v5    # "sawPrefix":Z
label_cond_5c:
	if ( !(android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(itr->current(), std::make_shared<java::lang::String>(std::make_shared<char[]>("lvariant")))) )  
		goto label_cond_6a;
	sawPrefix = 0x1;
label_cond_6a:
	itr->next();
	goto label_goto_22;

}
// .method public getLocaleExtensions()Landroid/icu/impl/locale/LocaleExtensions;
std::shared_ptr<android::icu::impl::locale::LocaleExtensions> android::icu::impl::locale::InternalLocaleBuilder::getLocaleExtensions()
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleExtensions> cVar0;
	
	if ( !(this->_extensions) )  
		goto label_cond_c;
	if ( this->_extensions->size() )     
		goto label_cond_27;
label_cond_c:
	if ( !(this->_uattributes) )  
		goto label_cond_18;
	if ( this->_uattributes->size() )     
		goto label_cond_27;
label_cond_18:
	if ( !(this->_ukeywords) )  
		goto label_cond_24;
	if ( this->_ukeywords->size() )     
		goto label_cond_27;
label_cond_24:
	return android::icu::impl::locale::LocaleExtensions::EMPTY_EXTENSIONS;
	// 1188    .line 506
label_cond_27:
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleExtensions>(this->_extensions, this->_uattributes, this->_ukeywords);
	return cVar0;

}
// .method public removeUnicodeLocaleAttribute(Ljava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::removeUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar2;
	
	//    .param p1, "attribute"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1207        value = {
	// 1208            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 1209        }
	// 1210    .end annotation
	if ( !(attribute) )  
		goto label_cond_a;
	if ( !(( android::icu::impl::locale::UnicodeLocaleExtension::isAttribute(attribute) ^ 0x1)) )  
		goto label_cond_24;
label_cond_a:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed Unicode locale attribute: ")))->append(attribute)->toString());
	// throw
	throw cVar0;
	// 1250    .line 107
label_cond_24:
	if ( !(this->_uattributes) )  
		goto label_cond_32;
	cVar2 = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(attribute);
	this->_uattributes->remove(cVar2);
label_cond_32:
	return this;

}
// .method public setExtension(CLjava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setExtension(char singleton,std::shared_ptr<java::lang::String> value)
{
	
	int isBcpPrivateuse;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> key;
	std::shared_ptr<java::lang::String> val;
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::HashMap> cVar4;
	
	//    .param p1, "singleton"    # C
	//    .param p2, "value"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1275        value = {
	// 1276            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 1277        }
	// 1278    .end annotation
	isBcpPrivateuse = android::icu::impl::locale::LanguageTag::isPrivateusePrefixChar(singleton);
	//    .local v0, "isBcpPrivateuse":Z
	if ( isBcpPrivateuse )     
		goto label_cond_28;
	if ( !(( android::icu::impl::locale::LanguageTag::isExtensionSingletonChar(singleton) ^ 0x1)) )  
		goto label_cond_28;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed extension key: ")))->append(singleton)->toString());
	// throw
	throw cVar0;
	// 1323    .line 153
label_cond_28:
	if ( !(value) )  
		goto label_cond_30;
	if ( value->length() )     
		goto label_cond_55;
label_cond_30:
	//    .local v3, "remove":Z
label_goto_31:
	key = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(singleton);
	//    .local v2, "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;
	if ( !(remove) )  
		goto label_cond_69;
	if ( !(android::icu::impl::locale::UnicodeLocaleExtension::isSingletonChar(key->value())) )  
		goto label_cond_57;
	if ( !(this->_uattributes) )  
		goto label_cond_4b;
	this->_uattributes->clear();
label_cond_4b:
	if ( !(this->_ukeywords) )  
		goto label_cond_54;
	this->_ukeywords->clear();
label_cond_54:
label_goto_54:
	return this;
	// 1384    .line 153
	// 1385    .end local v2    # "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;
	// 1386    .end local v3    # "remove":Z
label_cond_55:
	//    .restart local v3    # "remove":Z
	goto label_goto_31;
	// 1393    .line 166
	// 1394    .restart local v2    # "key":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;
label_cond_57:
	if ( !(this->_extensions) )  
		goto label_cond_54;
	if ( !(this->_extensions->containsKey(key)) )  
		goto label_cond_54;
	this->_extensions->remove(key);
	goto label_goto_54;
	// 1415    .line 172
label_cond_69:
	val = value->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")), std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v5, "val":Ljava/lang/String;
	itr = std::make_shared<android::icu::impl::locale::StringTokenIterator>(val, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v1, "itr":Landroid/icu/impl/locale/StringTokenIterator;
label_goto_7b:
	if ( itr->isDone() )     
		goto label_cond_b4;
	s = itr->current();
	//    .local v4, "s":Ljava/lang/String;
	if ( !(isBcpPrivateuse) )  
		goto label_cond_ab;
	//    .local v6, "validSubtag":Z
label_goto_8b:
	if ( validSubtag )     
		goto label_cond_b0;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed extension value: ")))->append(s)->toString(), itr->currentStart());
	// throw
	throw cVar2;
	// 1490    .line 180
	// 1491    .end local v6    # "validSubtag":Z
label_cond_ab:
	//    .restart local v6    # "validSubtag":Z
	goto label_goto_8b;
	// 1500    .line 185
label_cond_b0:
	itr->next();
	goto label_goto_7b;
	// 1506    .line 188
	// 1507    .end local v4    # "s":Ljava/lang/String;
	// 1508    .end local v6    # "validSubtag":Z
label_cond_b4:
	if ( !(android::icu::impl::locale::UnicodeLocaleExtension::isSingletonChar(key->value())) )  
		goto label_cond_c2;
	this->setUnicodeLocaleExtension(val);
	goto label_goto_54;
	// 1525    .line 191
label_cond_c2:
	if ( this->_extensions )     
		goto label_cond_ce;
	cVar4 = std::make_shared<java::util::HashMap>(0x4);
	this->_extensions = cVar4;
label_cond_ce:
	this->_extensions->put(key, val);
	goto label_goto_54;

}
// .method public setExtensions(Ljava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setExtensions(std::shared_ptr<java::lang::String> subtags)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr;
	std::shared_ptr<java::util::List> extensions;
	int parsed;
	std::shared_ptr<java::lang::String> s;
	int start;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::ArrayList> extensions;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p1, "subtags"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1553        value = {
	// 1554            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 1555        }
	// 1556    .end annotation
	if ( !(subtags) )  
		goto label_cond_8;
	if ( subtags->length() )     
		goto label_cond_c;
label_cond_8:
	this->clearExtensions();
	return this;
	// 1575    .line 208
label_cond_c:
	cVar0 = subtags->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")), std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	itr = std::make_shared<android::icu::impl::locale::StringTokenIterator>(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v1, "itr":Landroid/icu/impl/locale/StringTokenIterator;
	extensions = 0x0;
	//    .local v0, "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .local v3, "privateuse":Ljava/lang/String;
	parsed = 0x0;
	//    .end local v0    # "extensions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .local v2, "parsed":I
label_goto_21:
	if ( itr->isDone() )     
		goto label_cond_93;
	s = itr->current();
	//    .local v4, "s":Ljava/lang/String;
	if ( !(android::icu::impl::locale::LanguageTag::isExtensionSingleton(s)) )  
		goto label_cond_93;
	start = itr->currentStart();
	//    .local v7, "start":I
	//    .local v6, "singleton":Ljava/lang/String;
	sb = std::make_shared<java::lang::StringBuilder>(s);
	//    .local v5, "sb":Ljava/lang/StringBuilder;
	itr->next();
label_goto_3e:
	if ( itr->isDone() )     
		goto label_cond_60;
	s = itr->current();
	if ( !(android::icu::impl::locale::LanguageTag::isExtensionSubtag(s)) )  
		goto label_cond_60;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(s);
	itr->currentEnd();
	itr->next();
	goto label_goto_3e;
	// 1685    .line 237
label_cond_60:
	if ( parsed >= start )
		goto label_cond_83;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incomplete extension \'")))->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString(), start);
	// throw
	throw cVar1;
	// 1720    .line 241
label_cond_83:
	if ( extensions )     
		goto label_cond_8b;
	extensions = std::make_shared<java::util::ArrayList>(0x4);
label_cond_8b:
	extensions->add(sb->toString());
	goto label_goto_21;
	// 1741    .line 249
	// 1742    .end local v4    # "s":Ljava/lang/String;
	// 1743    .end local v5    # "sb":Ljava/lang/StringBuilder;
	// 1744    .end local v6    # "singleton":Ljava/lang/String;
	// 1745    .end local v7    # "start":I
label_cond_93:
	if ( itr->isDone() )     
		goto label_cond_f5;
	s = itr->current();
	//    .restart local v4    # "s":Ljava/lang/String;
	if ( !(android::icu::impl::locale::LanguageTag::isPrivateusePrefix(s)) )  
		goto label_cond_f5;
	start = itr->currentStart();
	//    .restart local v7    # "start":I
	sb = std::make_shared<java::lang::StringBuilder>(s);
	//    .restart local v5    # "sb":Ljava/lang/StringBuilder;
	itr->next();
label_goto_af:
	if ( itr->isDone() )     
		goto label_cond_bf;
	s = itr->current();
	if ( android::icu::impl::locale::LanguageTag::isPrivateuseSubtag(s) )     
		goto label_cond_df;
label_cond_bf:
	if ( parsed >  start )
		goto label_cond_f1;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incomplete privateuse:")))->append(cVar0->substring(start))->toString(), start);
	// throw
	throw cVar3;
	// 1834    .line 261
label_cond_df:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(s);
	itr->currentEnd();
	itr->next();
	goto label_goto_af;
	// 1854    .line 269
label_cond_f1:
	//    .end local v3    # "privateuse":Ljava/lang/String;
	//    .end local v4    # "s":Ljava/lang/String;
	//    .end local v5    # "sb":Ljava/lang/StringBuilder;
	//    .end local v7    # "start":I
label_cond_f5:
	if ( itr->isDone() )     
		goto label_cond_121;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed extension subtags:")))->append(cVar0->substring(itr->currentStart()))->toString(), itr->currentStart());
	// throw
	throw cVar5;
	// 1909    .line 278
label_cond_121:
	return this->setExtensions(extensions, 0x0);

}
// .method public setLanguage(Ljava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setLanguage(std::shared_ptr<java::lang::String> language)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1922        value = {
	// 1923            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 1924        }
	// 1925    .end annotation
	if ( !(language) )  
		goto label_cond_9;
	if ( language->length() )     
		goto label_cond_f;
label_cond_9:
	this->_language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_e:
	return this;
	// 1949    .line 44
label_cond_f:
	if ( android::icu::impl::locale::LanguageTag::isLanguage(language) )     
		goto label_cond_2f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed language: ")))->append(language)->toString(), 0x0);
	// throw
	throw cVar0;
	// 1982    .line 47
label_cond_2f:
	this->_language = language;
	goto label_goto_e;

}
// .method public setLanguageTag(Landroid/icu/impl/locale/LanguageTag;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setLanguageTag(std::shared_ptr<android::icu::impl::locale::LanguageTag> langtag)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::util::List> bcpVariants;
	std::shared_ptr<java::lang::StringBuilder> var;
	std::shared_ptr<java::lang::String> cVar2;
	int i;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<java::lang::String> language;
	
	//    .param p1, "langtag"    # Landroid/icu/impl/locale/LanguageTag;
	cVar0 = 0x0;
	this->clear();
	if ( langtag->getExtlangs()->size() <= 0 )
		goto label_cond_55;
	cVar1 = langtag->getExtlangs()->get(cVar0);
	cVar1->checkCast("java::lang::String");
	this->_language = cVar1;
label_cond_1a:
label_goto_1a:
	this->_script = langtag->getScript();
	this->_region = langtag->getRegion();
	bcpVariants = langtag->getVariants();
	//    .local v0, "bcpVariants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( bcpVariants->size() <= 0 )
		goto label_cond_6a;
	cVar2 = bcpVariants->get(cVar0);
	cVar2->checkCast("java::lang::String");
	var = std::make_shared<java::lang::StringBuilder>(cVar2);
	//    .local v3, "var":Ljava/lang/StringBuilder;
	i = 0x1;
	//    .local v1, "i":I
label_goto_3c:
	if ( i >= bcpVariants->size() )
		goto label_cond_64;
	cVar3 = bcpVariants->get(i);
	cVar3->checkCast("java::lang::String");
	var->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(cVar3);
	i = ( i + 0x1);
	goto label_goto_3c;
	// 2095    .line 325
	// 2096    .end local v0    # "bcpVariants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 2097    .end local v1    # "i":I
	// 2098    .end local v3    # "var":Ljava/lang/StringBuilder;
label_cond_55:
	language = langtag->getLanguage();
	//    .local v2, "language":Ljava/lang/String;
	if ( language->equals(android::icu::impl::locale::LanguageTag::UNDETERMINED) )     
		goto label_cond_1a;
	this->_language = language;
	goto label_goto_1a;
	// 2119    .line 339
	// 2120    .end local v2    # "language":Ljava/lang/String;
	// 2121    .restart local v0    # "bcpVariants":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 2122    .restart local v1    # "i":I
	// 2123    .restart local v3    # "var":Ljava/lang/StringBuilder;
label_cond_64:
	this->_variant = var->toString();
	//    .end local v1    # "i":I
	//    .end local v3    # "var":Ljava/lang/StringBuilder;
label_cond_6a:
	this->setExtensions(langtag->getExtensions(), langtag->getPrivateuse());
	return this;

}
// .method public setLocale(Landroid/icu/impl/locale/BaseLocale;Landroid/icu/impl/locale/LocaleExtensions;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setLocale(std::shared_ptr<android::icu::impl::locale::BaseLocale> base,std::shared_ptr<android::icu::impl::locale::LocaleExtensions> extensions)
{
	
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> variant;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	int errIdx;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::Iterable> cVar8;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::Character> key;
	std::shared_ptr<android::icu::impl::locale::UnicodeLocaleExtension> e;
	std::shared_ptr<android::icu::impl::locale::UnicodeLocaleExtension> ue;
	std::shared_ptr<java::util::Iterator> uatr_S_iterator;
	std::shared_ptr<java::lang::String> uatr;
	std::shared_ptr<java::util::HashSet> cVar9;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar10;
	std::shared_ptr<java::util::Iterator> ukey_S_iterator;
	std::shared_ptr<java::lang::String> ukey;
	std::shared_ptr<java::util::HashMap> cVar11;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar12;
	std::shared_ptr<java::util::HashMap> cVar13;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> cVar14;
	
	//    .param p1, "base"    # Landroid/icu/impl/locale/BaseLocale;
	//    .param p2, "extensions"    # Landroid/icu/impl/locale/LocaleExtensions;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2154        value = {
	// 2155            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 2156        }
	// 2157    .end annotation
	language = base->getLanguage();
	//    .local v6, "language":Ljava/lang/String;
	script = base->getScript();
	//    .local v8, "script":Ljava/lang/String;
	region = base->getRegion();
	//    .local v7, "region":Ljava/lang/String;
	variant = base->getVariant();
	//    .local v14, "variant":Ljava/lang/String;
	if ( language->length() <= 0 )
		goto label_cond_3a;
	if ( !(( android::icu::impl::locale::LanguageTag::isLanguage(language) ^ 0x1)) )  
		goto label_cond_3a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed language: ")))->append(language)->toString());
	// throw
	throw cVar0;
	// 2226    .line 386
label_cond_3a:
	if ( script->length() <= 0 )
		goto label_cond_64;
	if ( !(( android::icu::impl::locale::LanguageTag::isScript(script) ^ 0x1)) )  
		goto label_cond_64;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed script: ")))->append(script)->toString());
	// throw
	throw cVar2;
	// 2269    .line 390
label_cond_64:
	if ( region->length() <= 0 )
		goto label_cond_8e;
	if ( !(( android::icu::impl::locale::LanguageTag::isRegion(region) ^ 0x1)) )  
		goto label_cond_8e;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed region: ")))->append(region)->toString());
	// throw
	throw cVar4;
	// 2312    .line 394
label_cond_8e:
	if ( variant->length() <= 0 )
		goto label_cond_be;
	errIdx = this->checkVariants(variant, std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v2, "errIdx":I
	if ( errIdx == -0x1 )
		goto label_cond_be;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed variant: ")))->append(variant)->toString(), errIdx);
	// throw
	throw cVar6;
	// 2364    .line 403
	// 2365    .end local v2    # "errIdx":I
label_cond_be:
	this->_language = language;
	this->_script = script;
	this->_region = region;
	this->_variant = variant;
	this->clearExtensions();
	if ( extensions )     
		goto label_cond_127;
	cVar8 = 0x0;
label_goto_d4:
	if ( !(cVar8) )  
		goto label_cond_18b;
	key_S_iterator = cVar8->iterator();
	//    .local v5, "key$iterator":Ljava/util/Iterator;
label_cond_da:
label_goto_da:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_18b;
	key = key_S_iterator->next();
	key->checkCast("java::lang::Character");
	//    .local v4, "key":Ljava/lang/Character;
	e = extensions->getExtension(key);
	//    .local v1, "e":Landroid/icu/impl/locale/Extension;
	if ( !(e->instanceOf("android::icu::impl::locale::UnicodeLocaleExtension")) )  
		goto label_cond_164;
	ue = e;
	ue->checkCast("android::icu::impl::locale::UnicodeLocaleExtension");
	//    .local v11, "ue":Landroid/icu/impl/locale/UnicodeLocaleExtension;
	uatr_S_iterator = ue->getUnicodeLocaleAttributes()->iterator();
	//    .local v10, "uatr$iterator":Ljava/util/Iterator;
label_goto_fb:
	if ( !(uatr_S_iterator->hasNext()) )  
		goto label_cond_12c;
	uatr = uatr_S_iterator->next();
	uatr->checkCast("java::lang::String");
	//    .local v9, "uatr":Ljava/lang/String;
	if ( this->_uattributes )     
		goto label_cond_118;
	cVar9 = std::make_shared<java::util::HashSet>(0x4);
	this->_uattributes = cVar9;
label_cond_118:
	var115 = cVar10(uatr);
	this->_uattributes->add(cVar10);
	goto label_goto_fb;
	// 2496    .line 409
	// 2497    .end local v1    # "e":Landroid/icu/impl/locale/Extension;
	// 2498    .end local v4    # "key":Ljava/lang/Character;
	// 2499    .end local v5    # "key$iterator":Ljava/util/Iterator;
	// 2500    .end local v9    # "uatr":Ljava/lang/String;
	// 2501    .end local v10    # "uatr$iterator":Ljava/util/Iterator;
	// 2502    .end local v11    # "ue":Landroid/icu/impl/locale/UnicodeLocaleExtension;
label_cond_127:
	cVar8 = extensions->getKeys();
	//    .local v3, "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	goto label_goto_d4;
	// 2511    .line 422
	// 2512    .end local v3    # "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	// 2513    .restart local v1    # "e":Landroid/icu/impl/locale/Extension;
	// 2514    .restart local v4    # "key":Ljava/lang/Character;
	// 2515    .restart local v5    # "key$iterator":Ljava/util/Iterator;
	// 2516    .restart local v10    # "uatr$iterator":Ljava/util/Iterator;
	// 2517    .restart local v11    # "ue":Landroid/icu/impl/locale/UnicodeLocaleExtension;
label_cond_12c:
	ukey_S_iterator = ue->getUnicodeLocaleKeys()->iterator();
	//    .local v13, "ukey$iterator":Ljava/util/Iterator;
label_goto_134:
	if ( !(ukey_S_iterator->hasNext()) )  
		goto label_cond_da;
	ukey = ukey_S_iterator->next();
	ukey->checkCast("java::lang::String");
	//    .local v12, "ukey":Ljava/lang/String;
	if ( this->_ukeywords )     
		goto label_cond_151;
	cVar11 = std::make_shared<java::util::HashMap>(0x4);
	this->_ukeywords = cVar11;
label_cond_151:
	var137 = cVar12(ukey);
	this->_ukeywords->put(cVar12, ue->getUnicodeLocaleType(ukey));
	goto label_goto_134;
	// 2580    .line 429
	// 2581    .end local v10    # "uatr$iterator":Ljava/util/Iterator;
	// 2582    .end local v11    # "ue":Landroid/icu/impl/locale/UnicodeLocaleExtension;
	// 2583    .end local v12    # "ukey":Ljava/lang/String;
	// 2584    .end local v13    # "ukey$iterator":Ljava/util/Iterator;
label_cond_164:
	if ( this->_extensions )     
		goto label_cond_175;
	cVar13 = std::make_shared<java::util::HashMap>(0x4);
	this->_extensions = cVar13;
label_cond_175:
	cVar14 = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar>(key->charValue());
	this->_extensions->put(cVar14, e->getValue());
	goto label_goto_da;
	// 2625    .line 436
	// 2626    .end local v1    # "e":Landroid/icu/impl/locale/Extension;
	// 2627    .end local v4    # "key":Ljava/lang/Character;
	// 2628    .end local v5    # "key$iterator":Ljava/util/Iterator;
label_cond_18b:
	return this;

}
// .method public setRegion(Ljava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setRegion(std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "region"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2637        value = {
	// 2638            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 2639        }
	// 2640    .end annotation
	if ( !(region) )  
		goto label_cond_9;
	if ( region->length() )     
		goto label_cond_f;
label_cond_9:
	this->_region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_e:
	return this;
	// 2664    .line 68
label_cond_f:
	if ( android::icu::impl::locale::LanguageTag::isRegion(region) )     
		goto label_cond_2f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed region: ")))->append(region)->toString(), 0x0);
	// throw
	throw cVar0;
	// 2697    .line 71
label_cond_2f:
	this->_region = region;
	goto label_goto_e;

}
// .method public setScript(Ljava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setScript(std::shared_ptr<java::lang::String> script)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "script"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2708        value = {
	// 2709            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 2710        }
	// 2711    .end annotation
	if ( !(script) )  
		goto label_cond_9;
	if ( script->length() )     
		goto label_cond_f;
label_cond_9:
	this->_script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_e:
	return this;
	// 2735    .line 56
label_cond_f:
	if ( android::icu::impl::locale::LanguageTag::isScript(script) )     
		goto label_cond_2f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed script: ")))->append(script)->toString(), 0x0);
	// throw
	throw cVar0;
	// 2768    .line 59
label_cond_2f:
	this->_script = script;
	goto label_goto_e;

}
// .method public setUnicodeLocaleKeyword(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setUnicodeLocaleKeyword(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cikey;
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::util::HashMap> cVar4;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "type"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2780        value = {
	// 2781            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 2782        }
	// 2783    .end annotation
	if ( android::icu::impl::locale::UnicodeLocaleExtension::isKey(key) )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed Unicode locale keyword key: ")))->append(key)->toString());
	// throw
	throw cVar0;
	// 2818    .line 118
label_cond_20:
	cikey = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString>(key);
	//    .local v0, "cikey":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	if ( type )     
		goto label_cond_31;
	if ( !(this->_ukeywords) )  
		goto label_cond_30;
	this->_ukeywords->remove(cikey);
label_cond_30:
label_goto_30:
	return this;
	// 2843    .line 125
label_cond_31:
	if ( !(type->length()) )  
		goto label_cond_7b;
	//    .local v3, "tp":Ljava/lang/String;
	itr = std::make_shared<android::icu::impl::locale::StringTokenIterator>(type->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")), std::make_shared<java::lang::String>(std::make_shared<char[]>("-"))), std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	//    .local v1, "itr":Landroid/icu/impl/locale/StringTokenIterator;
label_goto_49:
	if ( itr->isDone() )     
		goto label_cond_7b;
	//    .local v2, "s":Ljava/lang/String;
	if ( android::icu::impl::locale::UnicodeLocaleExtension::isTypeSubtag(itr->current()) )     
		goto label_cond_77;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed Unicode locale keyword type: ")))->append(type)->toString(), itr->currentStart());
	// throw
	throw cVar2;
	// 2919    .line 135
label_cond_77:
	itr->next();
	goto label_goto_49;
	// 2925    .line 138
	// 2926    .end local v1    # "itr":Landroid/icu/impl/locale/StringTokenIterator;
	// 2927    .end local v2    # "s":Ljava/lang/String;
	// 2928    .end local v3    # "tp":Ljava/lang/String;
label_cond_7b:
	if ( this->_ukeywords )     
		goto label_cond_87;
	cVar4 = std::make_shared<java::util::HashMap>(0x4);
	this->_ukeywords = cVar4;
label_cond_87:
	this->_ukeywords->put(cikey, type);
	goto label_goto_30;

}
// .method public setVariant(Ljava/lang/String;)Landroid/icu/impl/locale/InternalLocaleBuilder;
std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> android::icu::impl::locale::InternalLocaleBuilder::setVariant(std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<java::lang::String> var;
	int errIdx;
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "variant"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2956        value = {
	// 2957            Landroid/icu/impl/locale/LocaleSyntaxException;
	// 2958        }
	// 2959    .end annotation
	if ( !(variant) )  
		goto label_cond_8;
	if ( variant->length() )     
		goto label_cond_e;
label_cond_8:
	this->_variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_d:
	return this;
	// 2981    .line 81
label_cond_e:
	var = variant->replaceAll(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")), std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v1, "var":Ljava/lang/String;
	errIdx = this->checkVariants(var, std::make_shared<java::lang::String>(std::make_shared<char[]>("_")));
	//    .local v0, "errIdx":I
	if ( errIdx == -0x1 )
		goto label_cond_3c;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::locale::LocaleSyntaxException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Ill-formed variant: ")))->append(variant)->toString(), errIdx);
	// throw
	throw cVar0;
	// 3030    .line 86
label_cond_3c:
	this->_variant = var;
	goto label_goto_d;

}


