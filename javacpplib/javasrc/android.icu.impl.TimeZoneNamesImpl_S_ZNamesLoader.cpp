// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$ZNamesLoader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNamesLoader.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.impl.Utility.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Arrays.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::_assertionsDisabled;
static android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::DUMMY_LOADER;
// .method static synthetic -get0()Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::_get0()
{
	
	return android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::DUMMY_LOADER;

}
// .method static synthetic -wrap0(Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::_wrap0(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	return _this->getNames();

}
// .method static constructor <clinit>()V
void android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> cVar0;
	
	android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::_assertionsDisabled = ( android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader>();
	android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::DUMMY_LOADER = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::TimeZoneNamesImpl_S_ZNamesLoader()
{
	
	// 078    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;)V
android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::TimeZoneNamesImpl_S_ZNamesLoader(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	// 088    invoke-direct {p0}, Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;-><init>()V
	return;

}
// .method private getNames()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::getNames()
{
	
	int cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	int length;
	int i;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<std::vector<java::lang::String>> cVar2;
	
	cVar0 = 0x7;
	cVar1 = 0x0;
	if ( !(android::icu::impl::Utility::sameObjects(this->names, cVar1)) )  
		goto label_cond_c;
	return cVar1;
	// 115    .line 663
label_cond_c:
	length = 0x0;
	//    .local v1, "length":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_e:
	if ( i >= cVar0 )
		goto label_cond_29;
	name = this->names[i];
	//    .local v2, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_23;
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u2205\u2205\u2205")))) )  
		goto label_cond_26;
	this->names[i] = cVar1;
label_cond_23:
label_goto_23:
	i = ( i + 0x1);
	goto label_goto_e;
	// 157    .line 670
label_cond_26:
	( i + 0x1);
	goto label_goto_23;
	// 163    .line 676
	// 164    .end local v2    # "name":Ljava/lang/String;
label_cond_29:
	if ( length != cVar0 )
		goto label_cond_2e;
	cVar2 = this->names;
label_goto_2d:
	return cVar2;
	// 175    .line 679
label_cond_2e:
	if ( length )     
		goto label_cond_32;
	cVar2 = 0x0;
	//    .local v3, "result":[Ljava/lang/String;
	goto label_goto_2d;
	// 185    .line 685
	// 186    .end local v3    # "result":[Ljava/lang/String;
label_cond_32:
	cVar2 = java::util::Arrays::copyOfRange(this->names, 0x0, length);
	cVar2->checkCast("std::vector<java::lang::String>");
	//    .local v3, "result":[Ljava/lang/String;
	goto label_goto_2d;

}
// .method private static nameTypeIndexFromKey(Landroid/icu/impl/UResource$Key;)Landroid/icu/impl/TimeZoneNamesImpl$ZNames$NameTypeIndex;
std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::nameTypeIndexFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> cVar4;
	int c0;
	int c1;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> cVar7;
	
	//    .param p0, "key"    # Landroid/icu/impl/UResource$Key;
	cVar0 = 0x67;
	cVar1 = 0x64;
	cVar2 = 0x73;
	cVar4 = 0x0;
	if ( key->length() == 0x2 )
		goto label_cond_f;
	return cVar4;
	// 225    .line 622
label_cond_f:
	c0 = key->charAt(0x0);
	//    .local v0, "c0":C
	c1 = key->charAt(0x1);
	//    .local v1, "c1":C
	if ( c0 != 0x6c )
		goto label_cond_2c;
	if ( c1 != cVar0 )
		goto label_cond_22;
	cVar4 = android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::LONG_GENERIC;
label_cond_21:
label_goto_21:
	return cVar4;
	// 256    .line 626
label_cond_22:
	if ( c1 != cVar2 )
		goto label_cond_27;
	cVar4 = android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::LONG_STANDARD;
	goto label_goto_21;
	// 264    .line 627
label_cond_27:
	if ( c1 != cVar1 )
		goto label_cond_21;
	cVar4 = android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::LONG_DAYLIGHT;
	goto label_goto_21;
	// 272    .line 628
label_cond_2c:
	if ( c0 != cVar2 )
		goto label_cond_3d;
	if ( c1 != cVar0 )
		goto label_cond_33;
	cVar7 = android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::SHORT_GENERIC;
label_cond_32:
label_goto_32:
	return cVar7;
	// 285    .line 630
label_cond_33:
	if ( c1 != cVar2 )
		goto label_cond_38;
	cVar7 = android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::SHORT_STANDARD;
	goto label_goto_32;
	// 293    .line 631
label_cond_38:
	if ( c1 != cVar1 )
		goto label_cond_32;
	cVar7 = android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::SHORT_DAYLIGHT;
	goto label_goto_32;
	// 301    .line 632
label_cond_3d:
	if ( c0 != 0x65 )
		goto label_cond_48;
	if ( c1 != 0x63 )
		goto label_cond_48;
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::EXEMPLAR_LOCATION;
	// 316    .line 635
label_cond_48:
	return cVar4;

}
// .method private setNameIfEmpty(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::setNameIfEmpty(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex> index;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	cVar0 = 0x7;
	if ( this->names )     
		goto label_cond_9;
	this->names = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
label_cond_9:
	index = android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::nameTypeIndexFromKey(key);
	//    .local v0, "index":Landroid/icu/impl/TimeZoneNamesImpl$ZNames$NameTypeIndex;
	if ( index )     
		goto label_cond_10;
	return;
	// 351    .line 644
label_cond_10:
	if ( android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::_assertionsDisabled )     
		goto label_cond_20;
	if ( index->ordinal() <  cVar0 )
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 369    .line 645
label_cond_20:
	if ( this->names[index->ordinal()] )     
		goto label_cond_36;
	this->names[index->ordinal()] = value->getString();
label_cond_36:
	return;

}
// .method loadMetaZone(Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;)V
void android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::loadMetaZone(std::shared_ptr<android::icu::impl::ICUResourceBundle> zoneStrings,std::shared_ptr<java::lang::String> mzID)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "zoneStrings"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p2, "mzID"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "key":Ljava/lang/String;
	this->loadNames(zoneStrings, cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("meta:")))->append(mzID)->toString());
	return;

}
// .method loadNames(Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;)V
void android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::loadNames(std::shared_ptr<android::icu::impl::ICUResourceBundle> zoneStrings,std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "zoneStrings"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p2, "key"    # Ljava/lang/String;
	if ( android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::_assertionsDisabled )     
		goto label_cond_d;
	if ( zoneStrings )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 455    .line 606
label_cond_d:
	if ( android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::_assertionsDisabled )     
		goto label_cond_19;
	if ( key )     
		goto label_cond_19;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 469    .line 607
label_cond_19:
	if ( android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::_assertionsDisabled )     
		goto label_cond_29;
	if ( key->length() > 0 ) 
		goto label_cond_29;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 487    .line 610
label_cond_29:
	this->names = 0x0;
	try {
	//label_try_start_2b:
	zoneStrings->getAllItemsWithFallback(key, this);
	//label_try_end_2e:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2f;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_2b .. :try_end_2e} :catch_2f
label_goto_2e:
	return;
	// 501    .line 613
label_catch_2f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	goto label_goto_2e;

}
// .method loadTimeZone(Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;)V
void android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::loadTimeZone(std::shared_ptr<android::icu::impl::ICUResourceBundle> zoneStrings,std::shared_ptr<java::lang::String> tzID)
{
	
	//    .param p1, "zoneStrings"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p2, "tzID"    # Ljava/lang/String;
	//    .local v0, "key":Ljava/lang/String;
	this->loadNames(zoneStrings, tzID->replace(0x2f, 0x3a));
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v1, "namesTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_21;
	if ( android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::_assertionsDisabled )     
		goto label_cond_1b;
	if ( !(value->getType()) )  
		goto label_cond_1b;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 573    .line 655
label_cond_1b:
	this->setNameIfEmpty(key, value);
	i = ( i + 0x1);
	goto label_goto_5;
	// 582    .line 657
label_cond_21:
	return;

}


