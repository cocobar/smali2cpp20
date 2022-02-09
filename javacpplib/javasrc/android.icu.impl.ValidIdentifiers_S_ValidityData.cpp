// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers$ValidityData.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.StringRange.h"
#include "android.icu.impl.ValidIdentifiers_S_Datasubtype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datatype.h"
#include "android.icu.impl.ValidIdentifiers_S_ValidityData.h"
#include "android.icu.impl.ValidIdentifiers_S_ValiditySet.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.EnumMap.h"
#include "java.util.HashSet.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

static android::icu::impl::ValidIdentifiers_S_ValidityData::data;
// .method static constructor <clinit>()V
void android::icu::impl::ValidIdentifiers_S_ValidityData::static_cinit()
{
	
	std::shared_ptr<java::util::EnumMap> _data;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> datatypeIterator;
	std::shared_ptr<android::icu::util::UResourceBundle> datatype;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::util::EnumMap> values;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> datasubtypeIterator;
	std::shared_ptr<android::icu::util::UResourceBundle> datasubtype;
	std::shared_ptr<java::util::HashSet> subvalues;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_ValiditySet> cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::Object> cVar2;
	int cVar3;
	
	_data = std::make_shared<java::util::EnumMap>(android::icu::impl::ValidIdentifiers_S_Datatype());
	//    .local v1, "_data":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/impl/ValidIdentifiers$Datatype;Ljava/util/Map<Landroid/icu/impl/ValidIdentifiers$Datasubtype;Landroid/icu/impl/ValidIdentifiers$ValiditySet;>;>;"
	//    .local v12, "suppData":Landroid/icu/util/UResourceBundle;
	//    .local v13, "validityInfo":Landroid/icu/util/UResourceBundle;
	datatypeIterator = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("idValidity")))->getIterator();
	//    .local v5, "datatypeIterator":Landroid/icu/util/UResourceBundleIterator;
label_goto_1e:
	if ( !(datatypeIterator->hasNext()) )  
		goto label_cond_91;
	datatype = datatypeIterator->next();
	//    .local v4, "datatype":Landroid/icu/util/UResourceBundle;
	//    .local v7, "rawKey":Ljava/lang/String;
	key = android::icu::impl::ValidIdentifiers_S_Datatype::valueOf(datatype->getKey());
	//    .local v6, "key":Landroid/icu/impl/ValidIdentifiers$Datatype;
	values = std::make_shared<java::util::EnumMap>(android::icu::impl::ValidIdentifiers_S_Datasubtype());
	//    .local v14, "values":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/impl/ValidIdentifiers$Datasubtype;Landroid/icu/impl/ValidIdentifiers$ValiditySet;>;"
	datasubtypeIterator = datatype->getIterator();
	//    .local v3, "datasubtypeIterator":Landroid/icu/util/UResourceBundleIterator;
label_goto_3b:
	if ( !(datasubtypeIterator->hasNext()) )  
		goto label_cond_89;
	datasubtype = datasubtypeIterator->next();
	//    .local v2, "datasubtype":Landroid/icu/util/UResourceBundle;
	//    .local v8, "rawsubkey":Ljava/lang/String;
	//    .local v10, "subkey":Landroid/icu/impl/ValidIdentifiers$Datasubtype;
	subvalues = std::make_shared<java::util::HashSet>();
	//    .local v11, "subvalues":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( datasubtype->getType() )     
		goto label_cond_71;
	android::icu::impl::ValidIdentifiers_S_ValidityData::addRange(datasubtype->getString(), subvalues);
label_cond_5f:
	if ( key != android::icu::impl::ValidIdentifiers_S_Datatype::subdivision )
		goto label_cond_87;
	cVar1 = 0x1;
label_goto_66:
	var44 = cVar0(subvalues, cVar1);
	values->put(android::icu::impl::ValidIdentifiers_S_Datasubtype::valueOf(datasubtype->getKey()), cVar0);
	goto label_goto_3b;
	// 185    .line 144
label_cond_71:
	cVar2 = datasubtype->getStringArray();
	cVar3 = 0x0;
label_goto_7b:
	if ( cVar3 >= cVar2->size() )
		goto label_cond_5f;
	//    .local v9, "string":Ljava/lang/String;
	android::icu::impl::ValidIdentifiers_S_ValidityData::addRange(cVar2[cVar3], subvalues);
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_7b;
	// 215    .line 148
	// 216    .end local v9    # "string":Ljava/lang/String;
label_cond_87:
	cVar1 = 0x0;
	goto label_goto_66;
	// 222    .line 150
	// 223    .end local v2    # "datasubtype":Landroid/icu/util/UResourceBundle;
	// 224    .end local v8    # "rawsubkey":Ljava/lang/String;
	// 225    .end local v10    # "subkey":Landroid/icu/impl/ValidIdentifiers$Datasubtype;
	// 226    .end local v11    # "subvalues":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_89:
	_data->put(key, java::util::Collections::unmodifiableMap(values));
	goto label_goto_1e;
	// 236    .line 152
	// 237    .end local v3    # "datasubtypeIterator":Landroid/icu/util/UResourceBundleIterator;
	// 238    .end local v4    # "datatype":Landroid/icu/util/UResourceBundle;
	// 239    .end local v6    # "key":Landroid/icu/impl/ValidIdentifiers$Datatype;
	// 240    .end local v7    # "rawKey":Ljava/lang/String;
	// 241    .end local v14    # "values":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/impl/ValidIdentifiers$Datasubtype;Landroid/icu/impl/ValidIdentifiers$ValiditySet;>;"
label_cond_91:
	android::icu::impl::ValidIdentifiers_S_ValidityData::data = java::util::Collections::unmodifiableMap(_data);
	return;

}
// .method private constructor <init>()V
android::icu::impl::ValidIdentifiers_S_ValidityData::ValidIdentifiers_S_ValidityData()
{
	
	// 258    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static addRange(Ljava/lang/String;Ljava/util/Set;)V
void android::icu::impl::ValidIdentifiers_S_ValidityData::addRange(std::shared_ptr<java::lang::String> string,std::shared_ptr<java::util::Set<java::lang::String>> subvalues)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	int pos;
	
	//    .param p0, "string"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 267        value = {
	// 268            "(",
	// 269            "Ljava/lang/String;",
	// 270            "Ljava/util/Set",
	// 271            "<",
	// 272            "Ljava/lang/String;",
	// 273            ">;)V"
	// 274        }
	// 275    .end annotation
	//    .local p1, "subvalues":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar0 = 0x0;
	cVar1 = android::icu::impl::locale::AsciiUtil::toLowerString(string);
	pos = cVar1->indexOf(0x7e);
	//    .local v0, "pos":I
	if ( pos >= 0 )
		goto label_cond_11;
	subvalues->add(cVar1);
label_goto_10:
	return;
	// 304    .line 160
label_cond_11:
	android::icu::impl::StringRange::expand(cVar1->substring(cVar0, pos), cVar1->substring(( pos + 0x1)), cVar0, subvalues);
	goto label_goto_10;

}


