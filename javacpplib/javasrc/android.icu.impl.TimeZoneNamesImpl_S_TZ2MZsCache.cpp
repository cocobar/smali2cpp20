// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$TZ2MZsCache.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_MZMapEntry.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_TZ2MZsCache.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.List.h"
#include "java.util.MissingResourceException.h"

// .method private constructor <init>()V
android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache::TimeZoneNamesImpl_S_TZ2MZsCache()
{
	
	// 037    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/TimeZoneNamesImpl$TZ2MZsCache;)V
android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache::TimeZoneNamesImpl_S_TZ2MZsCache(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/TimeZoneNamesImpl$TZ2MZsCache;
	// 047    invoke-direct {p0}, Landroid/icu/impl/TimeZoneNamesImpl$TZ2MZsCache;-><init>()V
	return;

}
// .method private static parseDate(Ljava/lang/String;)J
long long android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache::parseDate(std::shared_ptr<java::lang::String> text)
{
	
	int year;
	int month;
	int day;
	int hour;
	int min;
	int idx;
	int n;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	
	//    .param p0, "text"    # Ljava/lang/String;
	year = 0x0;
	//    .local v10, "year":I
	month = 0x0;
	//    .local v8, "month":I
	day = 0x0;
	//    .local v4, "day":I
	hour = 0x0;
	//    .local v5, "hour":I
	min = 0x0;
	//    .local v7, "min":I
	idx = 0x0;
	//    .local v6, "idx":I
label_goto_6:
	if ( idx >  0x3 )
		goto label_cond_27;
	n = ( text->charAt(idx) + -0x30);
	//    .local v9, "n":I
	if ( n < 0 ) 
		goto label_cond_1e;
	if ( n >= 0xa )
		goto label_cond_1e;
	year = (( year * 0xa) + n);
	idx = ( idx + 0x1);
	goto label_goto_6;
	// 109    .line 909
label_cond_1e:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad year")));
	// throw
	throw cVar0;
	// 119    .line 913
	// 120    .end local v9    # "n":I
label_cond_27:
	idx = 0x5;
label_goto_28:
	if ( idx >  0x6 )
		goto label_cond_49;
	n = ( text->charAt(idx) + -0x30);
	//    .restart local v9    # "n":I
	if ( n < 0 ) 
		goto label_cond_40;
	if ( n >= 0xa )
		goto label_cond_40;
	month = (( month * 0xa) + n);
	idx = ( idx + 0x1);
	goto label_goto_28;
	// 156    .line 918
label_cond_40:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad month")));
	// throw
	throw cVar1;
	// 166    .line 922
	// 167    .end local v9    # "n":I
label_cond_49:
	idx = 0x8;
label_goto_4b:
	if ( idx >  0x9 )
		goto label_cond_6d;
	n = ( text->charAt(idx) + -0x30);
	//    .restart local v9    # "n":I
	if ( n < 0 ) 
		goto label_cond_64;
	if ( n >= 0xa )
		goto label_cond_64;
	day = (( day * 0xa) + n);
	idx = ( idx + 0x1);
	goto label_goto_4b;
	// 203    .line 927
label_cond_64:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad day")));
	// throw
	throw cVar2;
	// 213    .line 931
	// 214    .end local v9    # "n":I
label_cond_6d:
	idx = 0xb;
label_goto_6f:
	if ( idx >  0xc )
		goto label_cond_91;
	n = ( text->charAt(idx) + -0x30);
	//    .restart local v9    # "n":I
	if ( n < 0 ) 
		goto label_cond_88;
	if ( n >= 0xa )
		goto label_cond_88;
	hour = (( hour * 0xa) + n);
	idx = ( idx + 0x1);
	goto label_goto_6f;
	// 250    .line 936
label_cond_88:
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad hour")));
	// throw
	throw cVar3;
	// 260    .line 940
	// 261    .end local v9    # "n":I
label_cond_91:
	idx = 0xe;
label_goto_93:
	if ( idx >  0xf )
		goto label_cond_b5;
	n = ( text->charAt(idx) + -0x30);
	//    .restart local v9    # "n":I
	if ( n < 0 ) 
		goto label_cond_ac;
	if ( n >= 0xa )
		goto label_cond_ac;
	min = (( min * 0xa) + n);
	idx = ( idx + 0x1);
	goto label_goto_93;
	// 297    .line 945
label_cond_ac:
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad minute")));
	// throw
	throw cVar4;
	// 307    .line 949
	// 308    .end local v9    # "n":I
label_cond_b5:
	//    .local v2, "date":J
	return (((android::icu::impl::Grego::fieldsToDay(year, ( month + -0x1), day) *  0x5265c00) +  ((long long)(hour) * 0x36ee80)) + ((long long)(min) * 0xea60));

}
// .method protected createInstance(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry>> android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> data)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle> zoneBundle;
	std::shared_ptr<java::util::ArrayList> mzMaps;
	std::vector<std::any> tryCatchExcetionList;
	int idx;
	std::shared_ptr<android::icu::util::UResourceBundle> mz;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "data"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 368        value = {
	// 369            "(",
	// 370            "Ljava/lang/String;",
	// 371            "Ljava/lang/String;",
	// 372            ")",
	// 373            "Ljava/util/List",
	// 374            "<",
	// 375            "Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;",
	// 376            ">;"
	// 377        }
	// 378    .end annotation
	0x0;
	//    .local v14, "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	//    .local v8, "bundle":Landroid/icu/util/UResourceBundle;
	//    .local v11, "metazoneInfoBundle":Landroid/icu/util/UResourceBundle;
	//    .local v17, "tzkey":Ljava/lang/String;
	try {
	//label_try_start_20:
	zoneBundle = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("metaZones")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("metazoneInfo")))->get(data->replace(0x2f, 0x3a));
	//    .local v18, "zoneBundle":Landroid/icu/util/UResourceBundle;
	mzMaps = std::make_shared<java::util::ArrayList>(zoneBundle->getSize());
	//label_try_end_2f:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_70;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_20 .. :try_end_2f} :catch_70
	//    .end local v14    # "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	//    .local v15, "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	idx = 0x0;
	//    .local v10, "idx":I
label_goto_30:
	try {
	//label_try_start_30:
	if ( idx >= zoneBundle->getSize() )
		goto label_cond_6e;
	mz = zoneBundle->get(idx);
	//    .local v13, "mz":Landroid/icu/util/UResourceBundle;
	//    .local v3, "mzid":Ljava/lang/String;
	//    .local v9, "fromStr":Ljava/lang/String;
	//    .local v16, "toStr":Ljava/lang/String;
	if ( mz->getSize() != 0x3 )
		goto label_cond_5b;
label_cond_5b:
	//    .local v4, "from":J
	//    .local v6, "to":J
	cVar0 = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry>(mz->getString(0x0), android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache::parseDate(std::make_shared<java::lang::String>(std::make_shared<char[]>("1970-01-01 00:00"))), android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache::parseDate(std::make_shared<java::lang::String>(std::make_shared<char[]>("9999-12-31 23:59"))));
	mzMaps->add(cVar0);
	//label_try_end_6b:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_76;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_30 .. :try_end_6b} :catch_76
	idx = ( idx + 0x1);
	goto label_goto_30;
	// 529    .end local v3    # "mzid":Ljava/lang/String;
	// 530    .end local v4    # "from":J
	// 531    .end local v6    # "to":J
	// 532    .end local v9    # "fromStr":Ljava/lang/String;
	// 533    .end local v13    # "mz":Landroid/icu/util/UResourceBundle;
	// 534    .end local v16    # "toStr":Ljava/lang/String;
label_cond_6e:
	//    .end local v10    # "idx":I
	//    .end local v15    # "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	//    .end local v18    # "zoneBundle":Landroid/icu/util/UResourceBundle;
	//    .local v14, "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
label_goto_6f:
	return mzMaps;
	// 546    .line 884
	// 547    .local v14, "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
label_catch_70:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v14    # "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	//    .local v12, "mre":Ljava/util/MissingResourceException;
label_goto_71:
	//    .local v14, "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	goto label_goto_6f;
	// 562    .line 884
	// 563    .end local v12    # "mre":Ljava/util/MissingResourceException;
	// 564    .end local v14    # "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	// 565    .restart local v10    # "idx":I
	// 566    .restart local v15    # "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	// 567    .restart local v18    # "zoneBundle":Landroid/icu/util/UResourceBundle;
label_catch_76:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v12    # "mre":Ljava/util/MissingResourceException;
	mzMaps;
	//    .end local v15    # "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	//    .restart local v14    # "mzMaps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	goto label_goto_71;

}


