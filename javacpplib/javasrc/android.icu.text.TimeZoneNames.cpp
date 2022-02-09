// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUConfig.h"
#include "android.icu.impl.TZDBTimeZoneNames.h"
#include "android.icu.impl.TimeZoneNamesImpl.h"
#include "android.icu.text.TimeZoneNames_S_Cache.h"
#include "android.icu.text.TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl.h"
#include "android.icu.text.TimeZoneNames_S_Factory.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.InstantiationException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

static android::icu::text::TimeZoneNames::DEFAULT_FACTORY_CLASS = std::make_shared<java::lang::String>("android.icu.impl.TimeZoneNamesFactoryImpl");
static android::icu::text::TimeZoneNames::FACTORY_NAME_PROP = std::make_shared<java::lang::String>("android.icu.text.TimeZoneNames.Factory.impl");
static android::icu::text::TimeZoneNames::TZNAMES_CACHE = nullptr;
static android::icu::text::TimeZoneNames::TZNAMES_FACTORY;
static android::icu::text::TimeZoneNames::serialVersionUID = -0x7f66b7d81bd309c1L;
// .method static synthetic -get0()Landroid/icu/text/TimeZoneNames$Factory;
std::shared_ptr<android::icu::text::TimeZoneNames_S_Factory> android::icu::text::TimeZoneNames::_get0()
{
	
	return android::icu::text::TimeZoneNames::TZNAMES_FACTORY;

}
// .method static constructor <clinit>()V
void android::icu::text::TimeZoneNames::static_cinit()
{
	
	std::shared_ptr<android::icu::text::TimeZoneNames_S_Cache> cVar0;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_Factory> factory;
	std::shared_ptr<java::lang::String> classname;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl> factory;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_Factory> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = std::make_shared<android::icu::text::TimeZoneNames_S_Cache>(0x0);
	android::icu::text::TimeZoneNames::TZNAMES_CACHE = cVar0;
	factory = 0x0;
	//    .local v3, "factory":Landroid/icu/text/TimeZoneNames$Factory;
	classname = android::icu::impl::ICUConfig::get(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.text.TimeZoneNames.Factory.impl")), std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.TimeZoneNamesFactoryImpl")));
	//    .local v1, "classname":Ljava/lang/String;
label_goto_13:
	try {
	//label_try_start_13:
	cVar1 = java::lang::Class::forName(classname)->newInstance();
	cVar1->checkCast("android::icu::text::TimeZoneNames_S_Factory");
	factory = cVar1;
	//label_try_end_1f:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	catch (java::lang::InstantiationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_13 .. :try_end_1f} :catch_29
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_13 .. :try_end_1f} :catch_37
	//    .catch Ljava/lang/InstantiationException; {:try_start_13 .. :try_end_1f} :catch_39
	//    .end local v3    # "factory":Landroid/icu/text/TimeZoneNames$Factory;
label_cond_1f:
	if ( factory )     
		goto label_cond_26;
	factory = std::make_shared<android::icu::text::TimeZoneNames_S_DefaultTimeZoneNames_S_FactoryImpl>();
label_cond_26:
	android::icu::text::TimeZoneNames::TZNAMES_FACTORY = factory;
	return;
	// 107    .line 129
	// 108    .restart local v3    # "factory":Landroid/icu/text/TimeZoneNames$Factory;
label_catch_29:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_2a:
	if ( classname->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.TimeZoneNamesFactoryImpl"))) )     
		goto label_cond_1f;
	classname = std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.TimeZoneNamesFactoryImpl"));
	goto label_goto_13;
	// 127    .line 131
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "iae":Ljava/lang/IllegalAccessException;
	goto label_goto_2a;
	// 134    .line 133
	// 135    .end local v4    # "iae":Ljava/lang/IllegalAccessException;
label_catch_39:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "ie":Ljava/lang/InstantiationException;
	goto label_goto_2a;

}
// .method protected constructor <init>()V
android::icu::text::TimeZoneNames::TimeZoneNames()
{
	
	// 148    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;
std::shared_ptr<android::icu::text::TimeZoneNames> android::icu::text::TimeZoneNames::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::TimeZoneNames> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "key":Ljava/lang/String;
	cVar0 = android::icu::text::TimeZoneNames::TZNAMES_CACHE->getInstance(locale->getBaseName(), locale);
	cVar0->checkCast("android::icu::text::TimeZoneNames");
	return cVar0;

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/TimeZoneNames;
std::shared_ptr<android::icu::text::TimeZoneNames> android::icu::text::TimeZoneNames::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::TimeZoneNames::getInstance(android::icu::util::ULocale::forLocale(locale));

}
// .method public static getTZDBInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;
std::shared_ptr<android::icu::text::TimeZoneNames> android::icu::text::TimeZoneNames::getTZDBInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::impl::TZDBTimeZoneNames>(locale);
	return cVar0;

}
// .method public find(Ljava/lang/CharSequence;ILjava/util/EnumSet;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> android::icu::text::TimeZoneNames::find(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> types)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 214        value = {
	// 215            "(",
	// 216            "Ljava/lang/CharSequence;",
	// 217            "I",
	// 218            "Ljava/util/EnumSet",
	// 219            "<",
	// 220            "Landroid/icu/text/TimeZoneNames$NameType;",
	// 221            ">;)",
	// 222            "Ljava/util/Collection",
	// 223            "<",
	// 224            "Landroid/icu/text/TimeZoneNames$MatchInfo;",
	// 225            ">;"
	// 226        }
	// 227    .end annotation
	//    .local p3, "types":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The method is not implemented in TimeZoneNames base class.")));
	// throw
	throw cVar0;

}
// .method public abstract getAvailableMetaZoneIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::TimeZoneNames::getAvailableMetaZoneIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 243        value = {
	// 244            "()",
	// 245            "Ljava/util/Set",
	// 246            "<",
	// 247            "Ljava/lang/String;",
	// 248            ">;"
	// 249        }
	// 250    .end annotation

}
// .method public abstract getAvailableMetaZoneIDs(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::TimeZoneNames::getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 255        value = {
	// 256            "(",
	// 257            "Ljava/lang/String;",
	// 258            ")",
	// 259            "Ljava/util/Set",
	// 260            "<",
	// 261            "Ljava/lang/String;",
	// 262            ">;"
	// 263        }
	// 264    .end annotation

}
// .method public final getDisplayName(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneNames::getDisplayName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type,long long date)
{
	
	std::shared_ptr<java::lang::String> name;
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	//    .param p3, "date"    # J
	name = this->getTimeZoneDisplayName(tzID, type);
	//    .local v1, "name":Ljava/lang/String;
	if ( name )     
		goto label_cond_e;
	//    .local v0, "mzID":Ljava/lang/String;
	//    .end local v0    # "mzID":Ljava/lang/String;
label_cond_e:
	return name;

}
// .method public getDisplayNames(Ljava/lang/String;[Landroid/icu/text/TimeZoneNames$NameType;J[Ljava/lang/String;I)V
void android::icu::text::TimeZoneNames::getDisplayNames(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<std::vector<android::icu::text::TimeZoneNames_S_NameType>> types,long long date,std::shared_ptr<std::vector<java::lang::String>> dest,int destOffset)
{
	
	std::shared_ptr<java::lang::String> mzID;
	int i;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type;
	auto name;
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "types"    # [Landroid/icu/text/TimeZoneNames$NameType;
	//    .param p3, "date"    # J
	//    .param p5, "dest"    # [Ljava/lang/String;
	//    .param p6, "destOffset"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 308    .end annotation
	if ( !(tzID) )  
		goto label_cond_8;
	if ( tzID->length() )     
		goto label_cond_9;
label_cond_8:
	return;
	// 324    .line 427
label_cond_9:
	mzID = 0x0;
	//    .local v1, "mzID":Ljava/lang/String;
	i = 0x0;
	//    .end local v1    # "mzID":Ljava/lang/String;
	//    .local v0, "i":I
label_goto_b:
	if ( i >= types->size() )
		goto label_cond_27;
	type = types[i];
	//    .local v3, "type":Landroid/icu/text/TimeZoneNames$NameType;
	name = this->getTimeZoneDisplayName(tzID, type);
	//    .local v2, "name":Ljava/lang/String;
	if ( name )     
		goto label_cond_20;
	if ( mzID )     
		goto label_cond_1c;
	mzID = this->getMetaZoneID(tzID, date);
label_cond_1c:
label_cond_20:
	dest[(destOffset + i)] = name;
	i = ( i + 0x1);
	goto label_goto_b;
	// 377    .line 439
	// 378    .end local v2    # "name":Ljava/lang/String;
	// 379    .end local v3    # "type":Landroid/icu/text/TimeZoneNames$NameType;
label_cond_27:
	return;

}
// .method public getExemplarLocationName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneNames::getExemplarLocationName(std::shared_ptr<java::lang::String> tzID)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	return android::icu::impl::TimeZoneNamesImpl::getDefaultExemplarLocationName(tzID);

}
// .method public loadAllDisplayNames()V
void android::icu::text::TimeZoneNames::loadAllDisplayNames()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 412    .end annotation
	return;

}


