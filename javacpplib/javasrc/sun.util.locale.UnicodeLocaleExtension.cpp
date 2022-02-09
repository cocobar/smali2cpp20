// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\UnicodeLocaleExtension.smali
#include "java2ctype.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.SortedMap.h"
#include "java.util.SortedSet.h"
#include "sun.util.locale.Extension.h"
#include "sun.util.locale.LocaleUtils.h"
#include "sun.util.locale.UnicodeLocaleExtension.h"

static sun::util::locale::UnicodeLocaleExtension::CA_JAPANESE;
static sun::util::locale::UnicodeLocaleExtension::NU_THAI;
static sun::util::locale::UnicodeLocaleExtension::SINGLETON = 'u';
// .method static constructor <clinit>()V
void sun::util::locale::UnicodeLocaleExtension::static_cinit()
{
	
	std::shared_ptr<sun::util::locale::UnicodeLocaleExtension> cVar0;
	std::shared_ptr<sun::util::locale::UnicodeLocaleExtension> cVar1;
	
	cVar0 = std::make_shared<sun::util::locale::UnicodeLocaleExtension>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ca")), std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese")));
	sun::util::locale::UnicodeLocaleExtension::CA_JAPANESE = cVar0;
	cVar1 = std::make_shared<sun::util::locale::UnicodeLocaleExtension>(std::make_shared<java::lang::String>(std::make_shared<char[]>("nu")), std::make_shared<java::lang::String>(std::make_shared<char[]>("thai")));
	sun::util::locale::UnicodeLocaleExtension::NU_THAI = cVar1;
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::util::locale::UnicodeLocaleExtension::UnicodeLocaleExtension(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::util::locale::Extension::(0x75, cVar0->append(key)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(value)->toString());
	this->attributes = java::util::Collections::emptySet({const[class].FS-Param});
	this->keywords = java::util::Collections::singletonMap(key, value);
	return;

}
// .method constructor <init>(Ljava/util/SortedSet;Ljava/util/SortedMap;)V
sun::util::locale::UnicodeLocaleExtension::UnicodeLocaleExtension(std::shared_ptr<java::util::SortedSet<java::lang::String>> attributes,std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> keywords)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::util::Iterator> attribute_S_iterator;
	std::shared_ptr<java::lang::String> attribute;
	std::shared_ptr<java::util::Iterator> keyword_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> keyword;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::lang::String> value;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 126        value = {
	// 127            "(",
	// 128            "Ljava/util/SortedSet",
	// 129            "<",
	// 130            "Ljava/lang/String;",
	// 131            ">;",
	// 132            "Ljava/util/SortedMap",
	// 133            "<",
	// 134            "Ljava/lang/String;",
	// 135            "Ljava/lang/String;",
	// 136            ">;)V"
	// 137        }
	// 138    .end annotation
	//    .local p1, "attributes":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/String;>;"
	//    .local p2, "keywords":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	sun::util::locale::Extension::(0x75);
	if ( !(attributes) )  
		goto label_cond_41;
	this->attributes = attributes;
label_goto_9:
	if ( !(keywords) )  
		goto label_cond_48;
	this->keywords = keywords;
label_goto_d:
	if ( !(this->attributes->isEmpty()) )  
		goto label_cond_1f;
	if ( !(( this->keywords->isEmpty() ^ 0x1)) )  
		goto label_cond_94;
label_cond_1f:
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v5, "sb":Ljava/lang/StringBuilder;
	attribute_S_iterator = this->attributes->iterator();
	//    .local v1, "attribute$iterator":Ljava/util/Iterator;
label_goto_2a:
	if ( !(attribute_S_iterator->hasNext()) )  
		goto label_cond_4f;
	attribute = attribute_S_iterator->next();
	attribute->checkCast("java::lang::String");
	//    .local v0, "attribute":Ljava/lang/String;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(attribute);
	goto label_goto_2a;
	// 221    .line 64
	// 222    .end local v0    # "attribute":Ljava/lang/String;
	// 223    .end local v1    # "attribute$iterator":Ljava/util/Iterator;
	// 224    .end local v5    # "sb":Ljava/lang/StringBuilder;
label_cond_41:
	this->attributes = java::util::Collections::emptySet({const[class].FS-Param});
	goto label_goto_9;
	// 234    .line 69
label_cond_48:
	this->keywords = java::util::Collections::emptyMap({const[class].FS-Param});
	goto label_goto_d;
	// 244    .line 77
	// 245    .restart local v1    # "attribute$iterator":Ljava/util/Iterator;
	// 246    .restart local v5    # "sb":Ljava/lang/StringBuilder;
label_cond_4f:
	keyword_S_iterator = this->keywords->entrySet()->iterator();
	//    .local v4, "keyword$iterator":Ljava/util/Iterator;
label_cond_59:
label_goto_59:
	if ( !(keyword_S_iterator->hasNext()) )  
		goto label_cond_8c;
	keyword = keyword_S_iterator->next();
	keyword->checkCast("java::util::Map_S_Entry");
	//    .local v3, "keyword":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	key = keyword->getKey();
	key->checkCast("java::lang::String");
	//    .local v2, "key":Ljava/lang/String;
	value = keyword->getValue();
	value->checkCast("java::lang::String");
	//    .local v6, "value":Ljava/lang/String;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(key);
	if ( value->length() <= 0 )
		goto label_cond_59;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(value);
	goto label_goto_59;
	// 317    .line 86
	// 318    .end local v2    # "key":Ljava/lang/String;
	// 319    .end local v3    # "keyword":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	// 320    .end local v6    # "value":Ljava/lang/String;
label_cond_8c:
	this->setValue(sb->substring(0x1));
	//    .end local v1    # "attribute$iterator":Ljava/util/Iterator;
	//    .end local v4    # "keyword$iterator":Ljava/util/Iterator;
	//    .end local v5    # "sb":Ljava/lang/StringBuilder;
label_cond_94:
	return;

}
// .method public static isAttribute(Ljava/lang/String;)Z
bool sun::util::locale::UnicodeLocaleExtension::isAttribute(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	len = s->length();
	//    .local v0, "len":I
	if ( len <  0x3 )
		goto label_cond_10;
	if ( len >  0x8 )
		goto label_cond_10;
	cVar0 = sun::util::locale::LocaleUtils::isAlphaNumericString(s);
label_goto_f:
	return cVar0;
label_cond_10:
	cVar0 = 0x0;
	goto label_goto_f;

}
// .method public static isKey(Ljava/lang/String;)Z
bool sun::util::locale::UnicodeLocaleExtension::isKey(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x2 )
		goto label_cond_c;
	cVar0 = sun::util::locale::LocaleUtils::isAlphaNumericString(s);
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public static isSingletonChar(C)Z
bool sun::util::locale::UnicodeLocaleExtension::isSingletonChar(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	if ( 0x75 != sun::util::locale::LocaleUtils::toLower(c) )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public static isTypeSubtag(Ljava/lang/String;)Z
bool sun::util::locale::UnicodeLocaleExtension::isTypeSubtag(std::shared_ptr<java::lang::String> s)
{
	
	int len;
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	len = s->length();
	//    .local v0, "len":I
	if ( len <  0x3 )
		goto label_cond_10;
	if ( len >  0x8 )
		goto label_cond_10;
	cVar0 = sun::util::locale::LocaleUtils::isAlphaNumericString(s);
label_goto_f:
	return cVar0;
label_cond_10:
	cVar0 = 0x0;
	goto label_goto_f;

}
// .method public getUnicodeLocaleAttributes()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::util::locale::UnicodeLocaleExtension::getUnicodeLocaleAttributes()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 483        value = {
	// 484            "()",
	// 485            "Ljava/util/Set",
	// 486            "<",
	// 487            "Ljava/lang/String;",
	// 488            ">;"
	// 489        }
	// 490    .end annotation
	if ( this->attributes != java::util::Collections::EMPTY_SET )
		goto label_cond_9;
	return this->attributes;
	// 505    .line 94
label_cond_9:
	return java::util::Collections::unmodifiableSet(this->attributes);

}
// .method public getUnicodeLocaleKeys()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::util::locale::UnicodeLocaleExtension::getUnicodeLocaleKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 519        value = {
	// 520            "()",
	// 521            "Ljava/util/Set",
	// 522            "<",
	// 523            "Ljava/lang/String;",
	// 524            ">;"
	// 525        }
	// 526    .end annotation
	if ( this->keywords != java::util::Collections::EMPTY_MAP )
		goto label_cond_b;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 543    .line 101
label_cond_b:
	return java::util::Collections::unmodifiableSet(this->keywords->keySet());

}
// .method public getUnicodeLocaleType(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::UnicodeLocaleExtension::getUnicodeLocaleType(std::shared_ptr<java::lang::String> unicodeLocaleKey)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "unicodeLocaleKey"    # Ljava/lang/String;
	cVar0 = this->keywords->get(unicodeLocaleKey);
	cVar0->checkCast("java::lang::String");
	return cVar0;

}


