// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\UnicodeLocaleExtension.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.Extension.h"
#include "android.icu.impl.locale.UnicodeLocaleExtension.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Set.h"
#include "java.util.SortedMap.h"
#include "java.util.SortedSet.h"
#include "java.util.TreeMap.h"
#include "java.util.TreeSet.h"

static android::icu::impl::locale::UnicodeLocaleExtension::CA_JAPANESE;
static android::icu::impl::locale::UnicodeLocaleExtension::EMPTY_SORTED_MAP;
static android::icu::impl::locale::UnicodeLocaleExtension::EMPTY_SORTED_SET;
static android::icu::impl::locale::UnicodeLocaleExtension::NU_THAI;
static android::icu::impl::locale::UnicodeLocaleExtension::SINGLETON = 'u';
// .method static constructor <clinit>()V
void android::icu::impl::locale::UnicodeLocaleExtension::static_cinit()
{
	
	std::shared_ptr<java::util::TreeSet> cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<android::icu::impl::locale::UnicodeLocaleExtension> cVar2;
	std::shared_ptr<java::util::TreeMap> cVar3;
	std::shared_ptr<android::icu::impl::locale::UnicodeLocaleExtension> cVar4;
	std::shared_ptr<java::util::TreeMap> cVar5;
	
	cVar0 = std::make_shared<java::util::TreeSet>();
	android::icu::impl::locale::UnicodeLocaleExtension::EMPTY_SORTED_SET = cVar0;
	cVar1 = std::make_shared<java::util::TreeMap>();
	android::icu::impl::locale::UnicodeLocaleExtension::EMPTY_SORTED_MAP = cVar1;
	cVar2 = std::make_shared<android::icu::impl::locale::UnicodeLocaleExtension>();
	android::icu::impl::locale::UnicodeLocaleExtension::CA_JAPANESE = cVar2;
	cVar3 = std::make_shared<java::util::TreeMap>();
	android::icu::impl::locale::UnicodeLocaleExtension::CA_JAPANESE->_keywords = cVar3;
	android::icu::impl::locale::UnicodeLocaleExtension::CA_JAPANESE->_keywords->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("ca")), std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese")));
	android::icu::impl::locale::UnicodeLocaleExtension::CA_JAPANESE->_value = std::make_shared<java::lang::String>(std::make_shared<char[]>("ca-japanese"));
	cVar4 = std::make_shared<android::icu::impl::locale::UnicodeLocaleExtension>();
	android::icu::impl::locale::UnicodeLocaleExtension::NU_THAI = cVar4;
	cVar5 = std::make_shared<java::util::TreeMap>();
	android::icu::impl::locale::UnicodeLocaleExtension::NU_THAI->_keywords = cVar5;
	android::icu::impl::locale::UnicodeLocaleExtension::NU_THAI->_keywords->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("nu")), std::make_shared<java::lang::String>(std::make_shared<char[]>("thai")));
	android::icu::impl::locale::UnicodeLocaleExtension::NU_THAI->_value = std::make_shared<java::lang::String>(std::make_shared<char[]>("nu-thai"));
	return;

}
// .method private constructor <init>()V
android::icu::impl::locale::UnicodeLocaleExtension::UnicodeLocaleExtension()
{
	
	android::icu::impl::locale::Extension::(0x75);
	this->_attributes = android::icu::impl::locale::UnicodeLocaleExtension::EMPTY_SORTED_SET;
	this->_keywords = android::icu::impl::locale::UnicodeLocaleExtension::EMPTY_SORTED_MAP;
	return;

}
// .method constructor <init>(Ljava/util/SortedSet;Ljava/util/SortedMap;)V
android::icu::impl::locale::UnicodeLocaleExtension::UnicodeLocaleExtension(std::shared_ptr<java::util::SortedSet<java::lang::String>> attributes,std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> keywords)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::util::Iterator> attribute_S_iterator;
	std::shared_ptr<java::lang::String> attribute;
	std::shared_ptr<java::util::Iterator> keyword_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> keyword;
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<java::lang::String> value;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 179        value = {
	// 180            "(",
	// 181            "Ljava/util/SortedSet",
	// 182            "<",
	// 183            "Ljava/lang/String;",
	// 184            ">;",
	// 185            "Ljava/util/SortedMap",
	// 186            "<",
	// 187            "Ljava/lang/String;",
	// 188            "Ljava/lang/String;",
	// 189            ">;)V"
	// 190        }
	// 191    .end annotation
	//    .local p1, "attributes":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/String;>;"
	//    .local p2, "keywords":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	// 197    invoke-direct {p0}, Landroid/icu/impl/locale/UnicodeLocaleExtension;-><init>()V
	if ( !(attributes) )  
		goto label_cond_d;
	if ( attributes->size() <= 0 )
		goto label_cond_d;
	this->_attributes = attributes;
label_cond_d:
	if ( !(keywords) )  
		goto label_cond_17;
	if ( keywords->size() <= 0 )
		goto label_cond_17;
	this->_keywords = keywords;
label_cond_17:
	if ( this->_attributes->size() > 0 ) 
		goto label_cond_27;
	if ( this->_keywords->size() <= 0 )
		goto label_cond_8d;
label_cond_27:
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v5, "sb":Ljava/lang/StringBuilder;
	attribute_S_iterator = this->_attributes->iterator();
	//    .local v1, "attribute$iterator":Ljava/util/Iterator;
label_goto_32:
	if ( !(attribute_S_iterator->hasNext()) )  
		goto label_cond_49;
	attribute = attribute_S_iterator->next();
	attribute->checkCast("java::lang::String");
	//    .local v0, "attribute":Ljava/lang/String;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(attribute);
	goto label_goto_32;
	// 282    .line 65
	// 283    .end local v0    # "attribute":Ljava/lang/String;
label_cond_49:
	keyword_S_iterator = this->_keywords->entrySet()->iterator();
	//    .local v4, "keyword$iterator":Ljava/util/Iterator;
label_cond_53:
label_goto_53:
	if ( !(keyword_S_iterator->hasNext()) )  
		goto label_cond_86;
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
		goto label_cond_53;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(value);
	goto label_goto_53;
	// 354    .line 74
	// 355    .end local v2    # "key":Ljava/lang/String;
	// 356    .end local v3    # "keyword":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	// 357    .end local v6    # "value":Ljava/lang/String;
label_cond_86:
	this->_value = sb->substring(0x1);
	//    .end local v1    # "attribute$iterator":Ljava/util/Iterator;
	//    .end local v4    # "keyword$iterator":Ljava/util/Iterator;
	//    .end local v5    # "sb":Ljava/lang/StringBuilder;
label_cond_8d:
	return;

}
// .method public static isAttribute(Ljava/lang/String;)Z
bool android::icu::impl::locale::UnicodeLocaleExtension::isAttribute(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() <  0x3 )
		goto label_cond_14;
	if ( s->length() >  0x8 )
		goto label_cond_14;
	cVar0 = android::icu::impl::locale::AsciiUtil::isAlphaNumericString(s);
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = 0x0;
	goto label_goto_13;

}
// .method public static isKey(Ljava/lang/String;)Z
bool android::icu::impl::locale::UnicodeLocaleExtension::isKey(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() != 0x2 )
		goto label_cond_c;
	cVar0 = android::icu::impl::locale::AsciiUtil::isAlphaNumericString(s);
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public static isSingletonChar(C)Z
bool android::icu::impl::locale::UnicodeLocaleExtension::isSingletonChar(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	if ( 0x75 != android::icu::impl::locale::AsciiUtil::toLower(c) )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public static isType(Ljava/lang/String;)Z
bool android::icu::impl::locale::UnicodeLocaleExtension::isType(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar1;
	int startIdx;
	int idx;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar1 = 0x0;
	startIdx = 0x0;
	//    .local v2, "startIdx":I
	0x0;
	//    .local v1, "sawSubtag":Z
label_goto_3:
	idx = s->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")), startIdx);
	//    .local v0, "idx":I
	if ( idx >= 0 )
		goto label_cond_17;
	//    .local v3, "subtag":Ljava/lang/String;
label_goto_10:
	if ( android::icu::impl::locale::UnicodeLocaleExtension::isTypeSubtag(subtag) )     
		goto label_cond_1c;
	return cVar1;
	// 505    .line 115
	// 506    .end local v3    # "subtag":Ljava/lang/String;
label_cond_17:
	//    .restart local v3    # "subtag":Ljava/lang/String;
	goto label_goto_10;
	// 515    .line 119
label_cond_1c:
	if ( idx >= 0 )
		goto label_cond_29;
	if ( !(0x1) )  
		goto label_cond_28;
	if ( startIdx >= s->length() )
		goto label_cond_28;
	cVar1 = 0x1;
label_cond_28:
	return cVar1;
	// 536    .line 123
label_cond_29:
	startIdx = ( idx + 0x1);
	goto label_goto_3;

}
// .method public static isTypeSubtag(Ljava/lang/String;)Z
bool android::icu::impl::locale::UnicodeLocaleExtension::isTypeSubtag(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	
	//    .param p0, "s"    # Ljava/lang/String;
	if ( s->length() <  0x3 )
		goto label_cond_14;
	if ( s->length() >  0x8 )
		goto label_cond_14;
	cVar0 = android::icu::impl::locale::AsciiUtil::isAlphaNumericString(s);
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = 0x0;
	goto label_goto_13;

}
// .method public getUnicodeLocaleAttributes()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::locale::UnicodeLocaleExtension::getUnicodeLocaleAttributes()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 583        value = {
	// 584            "()",
	// 585            "Ljava/util/Set",
	// 586            "<",
	// 587            "Ljava/lang/String;",
	// 588            ">;"
	// 589        }
	// 590    .end annotation
	return java::util::Collections::unmodifiableSet(this->_attributes);

}
// .method public getUnicodeLocaleKeys()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::locale::UnicodeLocaleExtension::getUnicodeLocaleKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 606        value = {
	// 607            "()",
	// 608            "Ljava/util/Set",
	// 609            "<",
	// 610            "Ljava/lang/String;",
	// 611            ">;"
	// 612        }
	// 613    .end annotation
	return java::util::Collections::unmodifiableSet(this->_keywords->keySet());

}
// .method public getUnicodeLocaleType(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::UnicodeLocaleExtension::getUnicodeLocaleType(std::shared_ptr<java::lang::String> unicodeLocaleKey)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "unicodeLocaleKey"    # Ljava/lang/String;
	cVar0 = this->_keywords->get(unicodeLocaleKey);
	cVar0->checkCast("java::lang::String");
	return cVar0;

}


