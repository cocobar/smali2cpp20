// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleExtensions.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.Extension.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"
#include "android.icu.impl.locale.InternalLocaleBuilder.h"
#include "android.icu.impl.locale.LanguageTag.h"
#include "android.icu.impl.locale.LocaleExtensions.h"
#include "android.icu.impl.locale.UnicodeLocaleExtension.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Character.h"
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
#include "java.util.TreeMap.h"
#include "java.util.TreeSet.h"

static android::icu::impl::locale::LocaleExtensions::_assertionsDisabled;
static android::icu::impl::locale::LocaleExtensions::CALENDAR_JAPANESE;
static android::icu::impl::locale::LocaleExtensions::EMPTY_EXTENSIONS;
static android::icu::impl::locale::LocaleExtensions::EMPTY_MAP;
static android::icu::impl::locale::LocaleExtensions::NUMBER_THAI;
// .method static constructor <clinit>()V
void android::icu::impl::locale::LocaleExtensions::static_cinit()
{
	
	char cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<android::icu::impl::locale::LocaleExtensions> cVar2;
	std::shared_ptr<android::icu::impl::locale::LocaleExtensions> cVar3;
	std::shared_ptr<java::util::TreeMap> cVar4;
	std::shared_ptr<android::icu::impl::locale::LocaleExtensions> cVar5;
	std::shared_ptr<java::util::TreeMap> cVar6;
	
	cVar0 = 0x75;
	android::icu::impl::locale::LocaleExtensions::_assertionsDisabled = ( android::icu::impl::locale::LocaleExtensions()->desiredAssertionStatus() ^ 0x1);
	cVar1 = std::make_shared<java::util::TreeMap>();
	android::icu::impl::locale::LocaleExtensions::EMPTY_MAP = java::util::Collections::unmodifiableSortedMap(cVar1);
	cVar2 = std::make_shared<android::icu::impl::locale::LocaleExtensions>();
	android::icu::impl::locale::LocaleExtensions::EMPTY_EXTENSIONS = cVar2;
	android::icu::impl::locale::LocaleExtensions::EMPTY_EXTENSIONS->_id = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	android::icu::impl::locale::LocaleExtensions::EMPTY_EXTENSIONS->_map = android::icu::impl::locale::LocaleExtensions::EMPTY_MAP;
	cVar3 = std::make_shared<android::icu::impl::locale::LocaleExtensions>();
	android::icu::impl::locale::LocaleExtensions::CALENDAR_JAPANESE = cVar3;
	android::icu::impl::locale::LocaleExtensions::CALENDAR_JAPANESE->_id = std::make_shared<java::lang::String>(std::make_shared<char[]>("u-ca-japanese"));
	cVar4 = std::make_shared<java::util::TreeMap>();
	android::icu::impl::locale::LocaleExtensions::CALENDAR_JAPANESE->_map = cVar4;
	android::icu::impl::locale::LocaleExtensions::CALENDAR_JAPANESE->_map->put(java::lang::Character::valueOf(cVar0), android::icu::impl::locale::UnicodeLocaleExtension::CA_JAPANESE);
	cVar5 = std::make_shared<android::icu::impl::locale::LocaleExtensions>();
	android::icu::impl::locale::LocaleExtensions::NUMBER_THAI = cVar5;
	android::icu::impl::locale::LocaleExtensions::NUMBER_THAI->_id = std::make_shared<java::lang::String>(std::make_shared<char[]>("u-nu-thai"));
	cVar6 = std::make_shared<java::util::TreeMap>();
	android::icu::impl::locale::LocaleExtensions::NUMBER_THAI->_map = cVar6;
	android::icu::impl::locale::LocaleExtensions::NUMBER_THAI->_map->put(java::lang::Character::valueOf(cVar0), android::icu::impl::locale::UnicodeLocaleExtension::NU_THAI);
	return;

}
// .method private constructor <init>()V
android::icu::impl::locale::LocaleExtensions::LocaleExtensions()
{
	
	// 175    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method constructor <init>(Ljava/util/Map;Ljava/util/Set;Ljava/util/Map;)V
android::icu::impl::locale::LocaleExtensions::LocaleExtensions(std::shared_ptr<java::util::Map<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar,java::lang::String>> extensions,std::shared_ptr<java::util::Set<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString>> uattributes,std::shared_ptr<java::util::Map<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString,java::lang::String>> ukeywords)
{
	
	int hasExtension;
	int hasUAttributes;
	int hasUKeywords;
	std::shared_ptr<java::util::TreeMap> cVar0;
	std::shared_ptr<java::util::Iterator> ext_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> ext;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> cVar1;
	char key;
	std::shared_ptr<java::lang::String> value;
	std::shared_ptr<android::icu::impl::locale::Extension> e;
	std::shared_ptr<java::util::TreeSet> uaset;
	std::shared_ptr<java::util::Iterator> cis_S_iterator;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cis;
	std::shared_ptr<java::util::TreeMap> ukmap;
	std::shared_ptr<java::util::Iterator> kwd_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> kwd;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<android::icu::impl::locale::UnicodeLocaleExtension> ule;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 184        value = {
	// 185            "(",
	// 186            "Ljava/util/Map",
	// 187            "<",
	// 188            "Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;",
	// 189            "Ljava/lang/String;",
	// 190            ">;",
	// 191            "Ljava/util/Set",
	// 192            "<",
	// 193            "Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;",
	// 194            ">;",
	// 195            "Ljava/util/Map",
	// 196            "<",
	// 197            "Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;",
	// 198            "Ljava/lang/String;",
	// 199            ">;)V"
	// 200        }
	// 201    .end annotation
	//    .local p1, "extensions":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;Ljava/lang/String;>;"
	//    .local p2, "uattributes":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;>;"
	//    .local p3, "ukeywords":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;Ljava/lang/String;>;"
	// 208    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V
	if ( !(extensions) )  
		goto label_cond_3a;
	if ( extensions->size() <= 0 )
		goto label_cond_3a;
	hasExtension = 0x1;
	//    .local v8, "hasExtension":Z
label_goto_c:
	if ( !(uattributes) )  
		goto label_cond_3c;
	if ( uattributes->size() <= 0 )
		goto label_cond_3c;
	hasUAttributes = 0x1;
	//    .local v9, "hasUAttributes":Z
label_goto_15:
	if ( !(ukeywords) )  
		goto label_cond_3e;
	if ( ukeywords->size() <= 0 )
		goto label_cond_3e;
	hasUKeywords = 0x1;
	//    .local v10, "hasUKeywords":Z
label_goto_1e:
	if ( hasExtension )     
		goto label_cond_40;
	if ( !(( hasUAttributes ^ 0x1)) )  
		goto label_cond_40;
	if ( !(( hasUKeywords ^ 0x1)) )  
		goto label_cond_40;
	this->_map = android::icu::impl::locale::LocaleExtensions::EMPTY_MAP;
	this->_id = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	return;
	// 281    .line 63
	// 282    .end local v8    # "hasExtension":Z
	// 283    .end local v9    # "hasUAttributes":Z
	// 284    .end local v10    # "hasUKeywords":Z
label_cond_3a:
	hasExtension = 0x0;
	//    .restart local v8    # "hasExtension":Z
	goto label_goto_c;
	// 291    .line 64
label_cond_3c:
	hasUAttributes = 0x0;
	//    .restart local v9    # "hasUAttributes":Z
	goto label_goto_15;
	// 298    .line 65
label_cond_3e:
	//    .restart local v10    # "hasUKeywords":Z
	goto label_goto_1e;
	// 305    .line 74
label_cond_40:
	cVar0 = std::make_shared<java::util::TreeMap>();
	this->_map = cVar0;
	if ( !(hasExtension) )  
		goto label_cond_9e;
	ext_S_iterator = extensions->entrySet()->iterator();
	//    .local v7, "ext$iterator":Ljava/util/Iterator;
label_cond_55:
label_goto_55:
	if ( !(ext_S_iterator->hasNext()) )  
		goto label_cond_9e;
	ext = ext_S_iterator->next();
	ext->checkCast("java::util::Map_S_Entry");
	//    .local v6, "ext":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;Ljava/lang/String;>;"
	cVar1 = ext->getKey();
	cVar1->checkCast("android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar");
	key = android::icu::impl::locale::AsciiUtil::toLower(cVar1->value());
	//    .local v11, "key":C
	value = ext->getValue();
	value->checkCast("java::lang::String");
	//    .local v19, "value":Ljava/lang/String;
	if ( !(android::icu::impl::locale::LanguageTag::isPrivateusePrefixChar(key)) )  
		goto label_cond_81;
	value = android::icu::impl::locale::InternalLocaleBuilder::removePrivateuseVariant(value);
	if ( !(value) )  
		goto label_cond_55;
label_cond_81:
	e = std::make_shared<android::icu::impl::locale::Extension>(key, android::icu::impl::locale::AsciiUtil::toLowerString(value));
	//    .local v5, "e":Landroid/icu/impl/locale/Extension;
	this->_map->put(java::lang::Character::valueOf(key), e);
	goto label_goto_55;
	// 416    .line 93
	// 417    .end local v5    # "e":Landroid/icu/impl/locale/Extension;
	// 418    .end local v6    # "ext":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveChar;Ljava/lang/String;>;"
	// 419    .end local v7    # "ext$iterator":Ljava/util/Iterator;
	// 420    .end local v11    # "key":C
	// 421    .end local v19    # "value":Ljava/lang/String;
label_cond_9e:
	if ( hasUAttributes )     
		goto label_cond_a2;
	if ( !(hasUKeywords) )  
		goto label_cond_126;
label_cond_a2:
	//    .local v16, "uaset":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	//    .local v17, "ukmap":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(hasUAttributes) )  
		goto label_cond_cd;
	//    .end local v16    # "uaset":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	uaset = std::make_shared<java::util::TreeSet>();
	//    .local v16, "uaset":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	cis_S_iterator = uattributes->iterator();
	//    .local v4, "cis$iterator":Ljava/util/Iterator;
label_goto_b1:
	if ( !(cis_S_iterator->hasNext()) )  
		goto label_cond_cd;
	cis = cis_S_iterator->next();
	cis->checkCast("android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString");
	//    .local v3, "cis":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	uaset->add(android::icu::impl::locale::AsciiUtil::toLowerString(cis->value()));
	goto label_goto_b1;
	// 483    .line 104
	// 484    .end local v3    # "cis":Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;
	// 485    .end local v4    # "cis$iterator":Ljava/util/Iterator;
	// 486    .end local v16    # "uaset":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
label_cond_cd:
	if ( !(hasUKeywords) )  
		goto label_cond_106;
	//    .end local v17    # "ukmap":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
	ukmap = std::make_shared<java::util::TreeMap>();
	//    .local v17, "ukmap":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
	kwd_S_iterator = ukeywords->entrySet()->iterator();
	//    .local v14, "kwd$iterator":Ljava/util/Iterator;
label_goto_dc:
	if ( !(kwd_S_iterator->hasNext()) )  
		goto label_cond_106;
	kwd = kwd_S_iterator->next();
	kwd->checkCast("java::util::Map_S_Entry");
	//    .local v13, "kwd":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;Ljava/lang/String;>;"
	cVar2 = kwd->getKey();
	cVar2->checkCast("android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString");
	//    .local v12, "key":Ljava/lang/String;
	cVar3 = kwd->getValue();
	cVar3->checkCast("java::lang::String");
	//    .local v15, "type":Ljava/lang/String;
	ukmap->put(android::icu::impl::locale::AsciiUtil::toLowerString(cVar2->value()), android::icu::impl::locale::AsciiUtil::toLowerString(cVar3));
	goto label_goto_dc;
	// 556    .line 113
	// 557    .end local v12    # "key":Ljava/lang/String;
	// 558    .end local v13    # "kwd":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Landroid/icu/impl/locale/InternalLocaleBuilder$CaseInsensitiveString;Ljava/lang/String;>;"
	// 559    .end local v14    # "kwd$iterator":Ljava/util/Iterator;
	// 560    .end local v15    # "type":Ljava/lang/String;
	// 561    .end local v17    # "ukmap":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_106:
	var101 = ule(0x0, 0x0);
	//    .local v18, "ule":Landroid/icu/impl/locale/UnicodeLocaleExtension;
	this->_map->put(java::lang::Character::valueOf(0x75), ule);
	//    .end local v18    # "ule":Landroid/icu/impl/locale/UnicodeLocaleExtension;
label_cond_126:
	if ( this->_map->size() )     
		goto label_cond_144;
	this->_map = android::icu::impl::locale::LocaleExtensions::EMPTY_MAP;
	this->_id = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_143:
	return;
	// 632    .line 122
label_cond_144:
	this->_id = android::icu::impl::locale::LocaleExtensions::toID(this->_map);
	goto label_goto_143;

}
// .method public static isValidKey(C)Z
bool android::icu::impl::locale::LocaleExtensions::isValidKey(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	if ( android::icu::impl::locale::LanguageTag::isExtensionSingletonChar(c) )     
		goto label_cond_b;
	cVar0 = android::icu::impl::locale::LanguageTag::isPrivateusePrefixChar(c);
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x1;
	goto label_goto_a;

}
// .method public static isValidUnicodeLocaleKey(Ljava/lang/String;)Z
bool android::icu::impl::locale::LocaleExtensions::isValidUnicodeLocaleKey(std::shared_ptr<java::lang::String> ukey)
{
	
	//    .param p0, "ukey"    # Ljava/lang/String;
	return android::icu::impl::locale::UnicodeLocaleExtension::isKey(ukey);

}
// .method private static toID(Ljava/util/SortedMap;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LocaleExtensions::toID(std::shared_ptr<java::util::SortedMap<java::lang::Character,android::icu::impl::locale::Extension>> map)
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::Object> privuse;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::Character> cVar0;
	std::shared_ptr<android::icu::impl::locale::Extension> extension;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 694        value = {
	// 695            "(",
	// 696            "Ljava/util/SortedMap",
	// 697            "<",
	// 698            "Ljava/lang/Character;",
	// 699            "Landroid/icu/impl/locale/Extension;",
	// 700            ">;)",
	// 701            "Ljava/lang/String;"
	// 702        }
	// 703    .end annotation
	//    .local p0, "map":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/Character;Landroid/icu/impl/locale/Extension;>;"
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	privuse = 0x0;
	//    .local v4, "privuse":Landroid/icu/impl/locale/Extension;
	entry_S_iterator = map->entrySet()->iterator();
	//    .end local v4    # "privuse":Landroid/icu/impl/locale/Extension;
	//    .local v2, "entry$iterator":Ljava/util/Iterator;
label_goto_e:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_42;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v1, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Character;Landroid/icu/impl/locale/Extension;>;"
	cVar0 = entry->getKey();
	cVar0->checkCast("java::lang::Character");
	//    .local v5, "singleton":C
	extension = entry->getValue();
	extension->checkCast("android::icu::impl::locale::Extension");
	//    .local v3, "extension":Landroid/icu/impl/locale/Extension;
	if ( !(android::icu::impl::locale::LanguageTag::isPrivateusePrefixChar(cVar0->charValue())) )  
		goto label_cond_32;
	extension;
	//    .local v4, "privuse":Landroid/icu/impl/locale/Extension;
	goto label_goto_e;
	// 775    .line 190
	// 776    .end local v4    # "privuse":Landroid/icu/impl/locale/Extension;
label_cond_32:
	if ( buf->length() <= 0 )
		goto label_cond_3e;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_3e:
	buf->append(extension);
	goto label_goto_e;
	// 795    .line 196
	// 796    .end local v1    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Character;Landroid/icu/impl/locale/Extension;>;"
	// 797    .end local v3    # "extension":Landroid/icu/impl/locale/Extension;
	// 798    .end local v5    # "singleton":C
label_cond_42:
	if ( !(privuse) )  
		goto label_cond_53;
	if ( buf->length() <= 0 )
		goto label_cond_50;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_50:
	buf->append(privuse);
label_cond_53:
	return buf->toString();

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::locale::LocaleExtensions::equals(std::shared_ptr<java::lang::Object> other)
{
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( this != other )
		goto label_cond_4;
	return 0x1;
	// 842    .line 225
label_cond_4:
	if ( other->instanceOf("android::icu::impl::locale::LocaleExtensions") )     
		goto label_cond_a;
	return 0x0;
	// 853    .line 228
label_cond_a:
	other->checkCast("android::icu::impl::locale::LocaleExtensions");
	//    .end local p1    # "other":Ljava/lang/Object;
	return this->_id->equals(other->_id);

}
// .method public getExtension(Ljava/lang/Character;)Landroid/icu/impl/locale/Extension;
std::shared_ptr<android::icu::impl::locale::Extension> android::icu::impl::locale::LocaleExtensions::getExtension(std::shared_ptr<java::lang::Character> key)
{
	
	std::shared_ptr<android::icu::impl::locale::Extension> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/Character;
	cVar0 = this->_map->get(java::lang::Character::valueOf(android::icu::impl::locale::AsciiUtil::toLower(key->charValue())));
	cVar0->checkCast("android::icu::impl::locale::Extension");
	return cVar0;

}
// .method public getExtensionValue(Ljava/lang/Character;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LocaleExtensions::getExtensionValue(std::shared_ptr<java::lang::Character> key)
{
	
	std::shared_ptr<android::icu::impl::locale::Extension> ext;
	
	//    .param p1, "key"    # Ljava/lang/Character;
	ext = this->_map->get(java::lang::Character::valueOf(android::icu::impl::locale::AsciiUtil::toLower(key->charValue())));
	ext->checkCast("android::icu::impl::locale::Extension");
	//    .local v0, "ext":Landroid/icu/impl/locale/Extension;
	if ( ext )     
		goto label_cond_18;
	return 0x0;
	// 933    .line 139
label_cond_18:
	return ext->getValue();

}
// .method public getID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LocaleExtensions::getID()
{
	
	return this->_id;

}
// .method public getKeys()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::Character>> android::icu::impl::locale::LocaleExtensions::getKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 955        value = {
	// 956            "()",
	// 957            "Ljava/util/Set",
	// 958            "<",
	// 959            "Ljava/lang/Character;",
	// 960            ">;"
	// 961        }
	// 962    .end annotation
	return java::util::Collections::unmodifiableSet(this->_map->keySet());

}
// .method public getUnicodeLocaleAttributes()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::locale::LocaleExtensions::getUnicodeLocaleAttributes()
{
	
	std::shared_ptr<android::icu::impl::locale::Extension> ext;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 982        value = {
	// 983            "()",
	// 984            "Ljava/util/Set",
	// 985            "<",
	// 986            "Ljava/lang/String;",
	// 987            ">;"
	// 988        }
	// 989    .end annotation
	ext = this->_map->get(java::lang::Character::valueOf(0x75));
	ext->checkCast("android::icu::impl::locale::Extension");
	//    .local v0, "ext":Landroid/icu/impl/locale/Extension;
	if ( ext )     
		goto label_cond_15;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 1018    .line 147
label_cond_15:
	if ( android::icu::impl::locale::LocaleExtensions::_assertionsDisabled )     
		goto label_cond_23;
	if ( ext->instanceOf("android::icu::impl::locale::UnicodeLocaleExtension") )     
		goto label_cond_23;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1034    .line 148
label_cond_23:
	ext->checkCast("android::icu::impl::locale::UnicodeLocaleExtension");
	//    .end local v0    # "ext":Landroid/icu/impl/locale/Extension;
	return ext->getUnicodeLocaleAttributes();

}
// .method public getUnicodeLocaleKeys()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::locale::LocaleExtensions::getUnicodeLocaleKeys()
{
	
	std::shared_ptr<android::icu::impl::locale::Extension> ext;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1049        value = {
	// 1050            "()",
	// 1051            "Ljava/util/Set",
	// 1052            "<",
	// 1053            "Ljava/lang/String;",
	// 1054            ">;"
	// 1055        }
	// 1056    .end annotation
	ext = this->_map->get(java::lang::Character::valueOf(0x75));
	ext->checkCast("android::icu::impl::locale::Extension");
	//    .local v0, "ext":Landroid/icu/impl/locale/Extension;
	if ( ext )     
		goto label_cond_15;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 1085    .line 156
label_cond_15:
	if ( android::icu::impl::locale::LocaleExtensions::_assertionsDisabled )     
		goto label_cond_23;
	if ( ext->instanceOf("android::icu::impl::locale::UnicodeLocaleExtension") )     
		goto label_cond_23;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1101    .line 157
label_cond_23:
	ext->checkCast("android::icu::impl::locale::UnicodeLocaleExtension");
	//    .end local v0    # "ext":Landroid/icu/impl/locale/Extension;
	return ext->getUnicodeLocaleKeys();

}
// .method public getUnicodeLocaleType(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LocaleExtensions::getUnicodeLocaleType(std::shared_ptr<java::lang::String> unicodeLocaleKey)
{
	
	std::shared_ptr<android::icu::impl::locale::Extension> ext;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "unicodeLocaleKey"    # Ljava/lang/String;
	ext = this->_map->get(java::lang::Character::valueOf(0x75));
	ext->checkCast("android::icu::impl::locale::Extension");
	//    .local v0, "ext":Landroid/icu/impl/locale/Extension;
	if ( ext )     
		goto label_cond_12;
	return 0x0;
	// 1142    .line 165
label_cond_12:
	if ( android::icu::impl::locale::LocaleExtensions::_assertionsDisabled )     
		goto label_cond_20;
	if ( ext->instanceOf("android::icu::impl::locale::UnicodeLocaleExtension") )     
		goto label_cond_20;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1158    .line 166
label_cond_20:
	ext->checkCast("android::icu::impl::locale::UnicodeLocaleExtension");
	//    .end local v0    # "ext":Landroid/icu/impl/locale/Extension;
	return ext->getUnicodeLocaleType(android::icu::impl::locale::AsciiUtil::toLowerString(unicodeLocaleKey));

}
// .method public hashCode()I
int android::icu::impl::locale::LocaleExtensions::hashCode()
{
	
	return this->_id->hashCode();

}
// .method public isEmpty()Z
bool android::icu::impl::locale::LocaleExtensions::isEmpty()
{
	
	return this->_map->isEmpty();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::LocaleExtensions::toString()
{
	
	return this->_id;

}


