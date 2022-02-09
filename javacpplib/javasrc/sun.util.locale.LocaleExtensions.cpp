// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleExtensions.smali
#include "java2ctype.h"
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
#include "sun.util.locale.Extension.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"
#include "sun.util.locale.InternalLocaleBuilder.h"
#include "sun.util.locale.LanguageTag.h"
#include "sun.util.locale.LocaleExtensions.h"
#include "sun.util.locale.LocaleUtils.h"
#include "sun.util.locale.UnicodeLocaleExtension.h"

static sun::util::locale::LocaleExtensions::_assertionsDisabled;
static sun::util::locale::LocaleExtensions::CALENDAR_JAPANESE;
static sun::util::locale::LocaleExtensions::NUMBER_THAI;
// .method static constructor <clinit>()V
void sun::util::locale::LocaleExtensions::static_cinit()
{
	
	char cVar0;
	std::shared_ptr<sun::util::locale::LocaleExtensions> cVar1;
	std::shared_ptr<sun::util::locale::LocaleExtensions> cVar2;
	
	cVar0 = 0x75;
	sun::util::locale::LocaleExtensions::_assertionsDisabled = ( sun::util::locale::LocaleExtensions()->desiredAssertionStatus() ^ 0x1);
	cVar1 = std::make_shared<sun::util::locale::LocaleExtensions>(std::make_shared<java::lang::String>(std::make_shared<char[]>("u-ca-japanese")), java::lang::Character::valueOf(cVar0), sun::util::locale::UnicodeLocaleExtension::CA_JAPANESE);
	sun::util::locale::LocaleExtensions::CALENDAR_JAPANESE = cVar1;
	cVar2 = std::make_shared<sun::util::locale::LocaleExtensions>(std::make_shared<java::lang::String>(std::make_shared<char[]>("u-nu-thai")), java::lang::Character::valueOf(cVar0), sun::util::locale::UnicodeLocaleExtension::NU_THAI);
	sun::util::locale::LocaleExtensions::NUMBER_THAI = cVar2;
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/Character;Lsun/util/locale/Extension;)V
sun::util::locale::LocaleExtensions::LocaleExtensions(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::lang::Character> key,std::shared_ptr<sun::util::locale::Extension> value)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "key"    # Ljava/lang/Character;
	//    .param p3, "value"    # Lsun/util/locale/Extension;
	// 097    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->id = id;
	this->extensionMap = java::util::Collections::singletonMap(key, value);
	return;

}
// .method constructor <init>(Ljava/util/Map;Ljava/util/Set;Ljava/util/Map;)V
sun::util::locale::LocaleExtensions::LocaleExtensions(std::shared_ptr<java::util::Map<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar,java::lang::String>> extensions,std::shared_ptr<java::util::Set<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString>> uattributes,std::shared_ptr<java::util::Map<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString,java::lang::String>> ukeywords)
{
	
	int hasExtension;
	int hasUAttributes;
	int hasUKeywords;
	std::shared_ptr<java::util::TreeMap> map;
	std::shared_ptr<java::util::Iterator> ext_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> ext;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> cVar0;
	char key;
	std::shared_ptr<java::lang::String> value;
	std::shared_ptr<sun::util::locale::Extension> cVar1;
	std::shared_ptr<java::util::TreeSet> uaset;
	std::shared_ptr<java::util::Iterator> cis_S_iterator;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cis;
	std::shared_ptr<java::util::TreeMap> ukmap;
	std::shared_ptr<java::util::Iterator> kwd_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> kwd;
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<sun::util::locale::UnicodeLocaleExtension> ule;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 116        value = {
	// 117            "(",
	// 118            "Ljava/util/Map",
	// 119            "<",
	// 120            "Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;",
	// 121            "Ljava/lang/String;",
	// 122            ">;",
	// 123            "Ljava/util/Set",
	// 124            "<",
	// 125            "Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;",
	// 126            ">;",
	// 127            "Ljava/util/Map",
	// 128            "<",
	// 129            "Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;",
	// 130            "Ljava/lang/String;",
	// 131            ">;)V"
	// 132        }
	// 133    .end annotation
	//    .local p1, "extensions":Ljava/util/Map;, "Ljava/util/Map<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;Ljava/lang/String;>;"
	//    .local p2, "uattributes":Ljava/util/Set;, "Ljava/util/Set<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;>;"
	//    .local p3, "ukeywords":Ljava/util/Map;, "Ljava/util/Map<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;Ljava/lang/String;>;"
	// 140    invoke-direct/range {p0 .. p0}, Ljava/lang/Object;-><init>()V
	hasExtension = ( sun::util::locale::LocaleUtils::isEmpty(extensions) ^ 0x1);
	//    .local v6, "hasExtension":Z
	hasUAttributes = ( sun::util::locale::LocaleUtils::isEmpty(uattributes) ^ 0x1);
	//    .local v7, "hasUAttributes":Z
	hasUKeywords = ( sun::util::locale::LocaleUtils::isEmpty(ukeywords) ^ 0x1);
	//    .local v8, "hasUKeywords":Z
	if ( hasExtension )     
		goto label_cond_33;
	if ( !(( hasUAttributes ^ 0x1)) )  
		goto label_cond_33;
	if ( !(( hasUKeywords ^ 0x1)) )  
		goto label_cond_33;
	this->id = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->extensionMap = java::util::Collections::emptyMap({const[class].FS-Param});
	return;
	// 200    .line 84
label_cond_33:
	map = std::make_shared<java::util::TreeMap>();
	//    .local v13, "map":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/Character;Lsun/util/locale/Extension;>;"
	if ( !(hasExtension) )  
		goto label_cond_87;
	ext_S_iterator = extensions->entrySet()->iterator();
	//    .local v5, "ext$iterator":Ljava/util/Iterator;
label_cond_42:
label_goto_42:
	if ( !(ext_S_iterator->hasNext()) )  
		goto label_cond_87;
	ext = ext_S_iterator->next();
	ext->checkCast("java::util::Map_S_Entry");
	//    .local v4, "ext":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;Ljava/lang/String;>;"
	cVar0 = ext->getKey();
	cVar0->checkCast("sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar");
	key = sun::util::locale::LocaleUtils::toLower(cVar0->value());
	//    .local v9, "key":C
	value = ext->getValue();
	value->checkCast("java::lang::String");
	//    .local v18, "value":Ljava/lang/String;
	if ( !(sun::util::locale::LanguageTag::isPrivateusePrefixChar(key)) )  
		goto label_cond_6e;
	value = sun::util::locale::InternalLocaleBuilder::removePrivateuseVariant(value);
	if ( !(value) )  
		goto label_cond_42;
label_cond_6e:
	var49 = cVar1(key, sun::util::locale::LocaleUtils::toLowerString(value));
	map->put(java::lang::Character::valueOf(key), cVar1);
	goto label_goto_42;
	// 300    .line 102
	// 301    .end local v4    # "ext":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveChar;Ljava/lang/String;>;"
	// 302    .end local v5    # "ext$iterator":Ljava/util/Iterator;
	// 303    .end local v9    # "key":C
	// 304    .end local v18    # "value":Ljava/lang/String;
label_cond_87:
	if ( hasUAttributes )     
		goto label_cond_8b;
	if ( !(hasUKeywords) )  
		goto label_cond_102;
label_cond_8b:
	//    .local v15, "uaset":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/String;>;"
	//    .local v16, "ukmap":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(hasUAttributes) )  
		goto label_cond_b3;
	//    .end local v15    # "uaset":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/String;>;"
	uaset = std::make_shared<java::util::TreeSet>();
	//    .local v15, "uaset":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/String;>;"
	cis_S_iterator = uattributes->iterator();
	//    .local v3, "cis$iterator":Ljava/util/Iterator;
label_goto_99:
	if ( !(cis_S_iterator->hasNext()) )  
		goto label_cond_b3;
	cis = cis_S_iterator->next();
	cis->checkCast("sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString");
	//    .local v2, "cis":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	uaset->add(sun::util::locale::LocaleUtils::toLowerString(cis->value()));
	goto label_goto_99;
	// 364    .line 113
	// 365    .end local v2    # "cis":Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;
	// 366    .end local v3    # "cis$iterator":Ljava/util/Iterator;
	// 367    .end local v15    # "uaset":Ljava/util/SortedSet;, "Ljava/util/SortedSet<Ljava/lang/String;>;"
label_cond_b3:
	if ( !(hasUKeywords) )  
		goto label_cond_ec;
	//    .end local v16    # "ukmap":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	ukmap = std::make_shared<java::util::TreeMap>();
	//    .local v16, "ukmap":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	kwd_S_iterator = ukeywords->entrySet()->iterator();
	//    .local v12, "kwd$iterator":Ljava/util/Iterator;
label_goto_c2:
	if ( !(kwd_S_iterator->hasNext()) )  
		goto label_cond_ec;
	kwd = kwd_S_iterator->next();
	kwd->checkCast("java::util::Map_S_Entry");
	//    .local v11, "kwd":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;Ljava/lang/String;>;"
	cVar2 = kwd->getKey();
	cVar2->checkCast("sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString");
	//    .local v10, "key":Ljava/lang/String;
	cVar3 = kwd->getValue();
	cVar3->checkCast("java::lang::String");
	//    .local v14, "type":Ljava/lang/String;
	ukmap->put(sun::util::locale::LocaleUtils::toLowerString(cVar2->value()), sun::util::locale::LocaleUtils::toLowerString(cVar3));
	goto label_goto_c2;
	// 437    .line 122
	// 438    .end local v10    # "key":Ljava/lang/String;
	// 439    .end local v11    # "kwd":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Lsun/util/locale/InternalLocaleBuilder$CaseInsensitiveString;Ljava/lang/String;>;"
	// 440    .end local v12    # "kwd$iterator":Ljava/util/Iterator;
	// 441    .end local v14    # "type":Ljava/lang/String;
	// 442    .end local v16    # "ukmap":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_ec:
	var94 = ule(0x0, 0x0);
	//    .local v17, "ule":Lsun/util/locale/UnicodeLocaleExtension;
	map->put(java::lang::Character::valueOf(0x75), ule);
	//    .end local v17    # "ule":Lsun/util/locale/UnicodeLocaleExtension;
label_cond_102:
	if ( !(map->isEmpty()) )  
		goto label_cond_11c;
	this->id = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->extensionMap = java::util::Collections::emptyMap({const[class].FS-Param});
label_goto_11b:
	return;
	// 499    .line 131
label_cond_11c:
	this->id = sun::util::locale::LocaleExtensions::toID(map);
	this->extensionMap = map;
	goto label_goto_11b;

}
// .method public static isValidKey(C)Z
bool sun::util::locale::LocaleExtensions::isValidKey(char c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # C
	if ( sun::util::locale::LanguageTag::isExtensionSingletonChar(c) )     
		goto label_cond_b;
	cVar0 = sun::util::locale::LanguageTag::isPrivateusePrefixChar(c);
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x1;
	goto label_goto_a;

}
// .method public static isValidUnicodeLocaleKey(Ljava/lang/String;)Z
bool sun::util::locale::LocaleExtensions::isValidUnicodeLocaleKey(std::shared_ptr<java::lang::String> ukey)
{
	
	//    .param p0, "ukey"    # Ljava/lang/String;
	return sun::util::locale::UnicodeLocaleExtension::isKey(ukey);

}
// .method private static toID(Ljava/util/SortedMap;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleExtensions::toID(std::shared_ptr<java::util::SortedMap<java::lang::Character,sun::util::locale::Extension>> map)
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::Object> privuse;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::Character> cVar0;
	std::shared_ptr<sun::util::locale::Extension> extension;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 560        value = {
	// 561            "(",
	// 562            "Ljava/util/SortedMap",
	// 563            "<",
	// 564            "Ljava/lang/Character;",
	// 565            "Lsun/util/locale/Extension;",
	// 566            ">;)",
	// 567            "Ljava/lang/String;"
	// 568        }
	// 569    .end annotation
	//    .local p0, "map":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/Character;Lsun/util/locale/Extension;>;"
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	privuse = 0x0;
	//    .local v4, "privuse":Lsun/util/locale/Extension;
	entry_S_iterator = map->entrySet()->iterator();
	//    .end local v4    # "privuse":Lsun/util/locale/Extension;
	//    .local v2, "entry$iterator":Ljava/util/Iterator;
label_goto_e:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_42;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v1, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Character;Lsun/util/locale/Extension;>;"
	cVar0 = entry->getKey();
	cVar0->checkCast("java::lang::Character");
	//    .local v5, "singleton":C
	extension = entry->getValue();
	extension->checkCast("sun::util::locale::Extension");
	//    .local v3, "extension":Lsun/util/locale/Extension;
	if ( !(sun::util::locale::LanguageTag::isPrivateusePrefixChar(cVar0->charValue())) )  
		goto label_cond_32;
	extension;
	//    .local v4, "privuse":Lsun/util/locale/Extension;
	goto label_goto_e;
	// 641    .line 203
	// 642    .end local v4    # "privuse":Lsun/util/locale/Extension;
label_cond_32:
	if ( buf->length() <= 0 )
		goto label_cond_3e;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_3e:
	buf->append(extension);
	goto label_goto_e;
	// 661    .line 209
	// 662    .end local v1    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/Character;Lsun/util/locale/Extension;>;"
	// 663    .end local v3    # "extension":Lsun/util/locale/Extension;
	// 664    .end local v5    # "singleton":C
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
bool sun::util::locale::LocaleExtensions::equals(std::shared_ptr<java::lang::Object> other)
{
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( this != other )
		goto label_cond_4;
	return 0x1;
	// 708    .line 237
label_cond_4:
	if ( other->instanceOf("sun::util::locale::LocaleExtensions") )     
		goto label_cond_a;
	return 0x0;
	// 719    .line 240
label_cond_a:
	other->checkCast("sun::util::locale::LocaleExtensions");
	//    .end local p1    # "other":Ljava/lang/Object;
	return this->id->equals(other->id);

}
// .method public getExtension(Ljava/lang/Character;)Lsun/util/locale/Extension;
std::shared_ptr<sun::util::locale::Extension> sun::util::locale::LocaleExtensions::getExtension(std::shared_ptr<java::lang::Character> key)
{
	
	std::shared_ptr<sun::util::locale::Extension> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/Character;
	cVar0 = this->extensionMap->get(java::lang::Character::valueOf(sun::util::locale::LocaleUtils::toLower(key->charValue())));
	cVar0->checkCast("sun::util::locale::Extension");
	return cVar0;

}
// .method public getExtensionValue(Ljava/lang/Character;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleExtensions::getExtensionValue(std::shared_ptr<java::lang::Character> key)
{
	
	std::shared_ptr<sun::util::locale::Extension> ext;
	
	//    .param p1, "key"    # Ljava/lang/Character;
	ext = this->extensionMap->get(java::lang::Character::valueOf(sun::util::locale::LocaleUtils::toLower(key->charValue())));
	ext->checkCast("sun::util::locale::Extension");
	//    .local v0, "ext":Lsun/util/locale/Extension;
	if ( ext )     
		goto label_cond_18;
	return 0x0;
	// 799    .line 152
label_cond_18:
	return ext->getValue();

}
// .method public getID()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleExtensions::getID()
{
	
	return this->id;

}
// .method public getKeys()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::Character>> sun::util::locale::LocaleExtensions::getKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 821        value = {
	// 822            "()",
	// 823            "Ljava/util/Set",
	// 824            "<",
	// 825            "Ljava/lang/Character;",
	// 826            ">;"
	// 827        }
	// 828    .end annotation
	if ( !(this->extensionMap->isEmpty()) )  
		goto label_cond_d;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 847    .line 140
label_cond_d:
	return java::util::Collections::unmodifiableSet(this->extensionMap->keySet());

}
// .method public getUnicodeLocaleAttributes()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::util::locale::LocaleExtensions::getUnicodeLocaleAttributes()
{
	
	std::shared_ptr<sun::util::locale::Extension> ext;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 865        value = {
	// 866            "()",
	// 867            "Ljava/util/Set",
	// 868            "<",
	// 869            "Ljava/lang/String;",
	// 870            ">;"
	// 871        }
	// 872    .end annotation
	ext = this->extensionMap->get(java::lang::Character::valueOf(0x75));
	ext->checkCast("sun::util::locale::Extension");
	//    .local v0, "ext":Lsun/util/locale/Extension;
	if ( ext )     
		goto label_cond_15;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 901    .line 160
label_cond_15:
	if ( sun::util::locale::LocaleExtensions::_assertionsDisabled )     
		goto label_cond_23;
	if ( ext->instanceOf("sun::util::locale::UnicodeLocaleExtension") )     
		goto label_cond_23;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 917    .line 161
label_cond_23:
	ext->checkCast("sun::util::locale::UnicodeLocaleExtension");
	//    .end local v0    # "ext":Lsun/util/locale/Extension;
	return ext->getUnicodeLocaleAttributes();

}
// .method public getUnicodeLocaleKeys()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::util::locale::LocaleExtensions::getUnicodeLocaleKeys()
{
	
	std::shared_ptr<sun::util::locale::Extension> ext;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 932        value = {
	// 933            "()",
	// 934            "Ljava/util/Set",
	// 935            "<",
	// 936            "Ljava/lang/String;",
	// 937            ">;"
	// 938        }
	// 939    .end annotation
	ext = this->extensionMap->get(java::lang::Character::valueOf(0x75));
	ext->checkCast("sun::util::locale::Extension");
	//    .local v0, "ext":Lsun/util/locale/Extension;
	if ( ext )     
		goto label_cond_15;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 968    .line 169
label_cond_15:
	if ( sun::util::locale::LocaleExtensions::_assertionsDisabled )     
		goto label_cond_23;
	if ( ext->instanceOf("sun::util::locale::UnicodeLocaleExtension") )     
		goto label_cond_23;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 984    .line 170
label_cond_23:
	ext->checkCast("sun::util::locale::UnicodeLocaleExtension");
	//    .end local v0    # "ext":Lsun/util/locale/Extension;
	return ext->getUnicodeLocaleKeys();

}
// .method public getUnicodeLocaleType(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleExtensions::getUnicodeLocaleType(std::shared_ptr<java::lang::String> unicodeLocaleKey)
{
	
	std::shared_ptr<sun::util::locale::Extension> ext;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "unicodeLocaleKey"    # Ljava/lang/String;
	ext = this->extensionMap->get(java::lang::Character::valueOf(0x75));
	ext->checkCast("sun::util::locale::Extension");
	//    .local v0, "ext":Lsun/util/locale/Extension;
	if ( ext )     
		goto label_cond_12;
	return 0x0;
	// 1025    .line 178
label_cond_12:
	if ( sun::util::locale::LocaleExtensions::_assertionsDisabled )     
		goto label_cond_20;
	if ( ext->instanceOf("sun::util::locale::UnicodeLocaleExtension") )     
		goto label_cond_20;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1041    .line 179
label_cond_20:
	ext->checkCast("sun::util::locale::UnicodeLocaleExtension");
	//    .end local v0    # "ext":Lsun/util/locale/Extension;
	return ext->getUnicodeLocaleType(sun::util::locale::LocaleUtils::toLowerString(unicodeLocaleKey));

}
// .method public hashCode()I
int sun::util::locale::LocaleExtensions::hashCode()
{
	
	return this->id->hashCode();

}
// .method public isEmpty()Z
bool sun::util::locale::LocaleExtensions::isEmpty()
{
	
	return this->extensionMap->isEmpty();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::LocaleExtensions::toString()
{
	
	return this->id;

}


