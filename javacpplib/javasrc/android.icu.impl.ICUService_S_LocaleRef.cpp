// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService$LocaleRef.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService_S_LocaleRef.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"
#include "java.util.SortedMap.h"

// .method constructor <init>(Ljava/util/SortedMap;Landroid/icu/util/ULocale;Ljava/util/Comparator;)V
android::icu::impl::ICUService_S_LocaleRef::ICUService_S_LocaleRef(std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> dnCache,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::util::Comparator<java::lang::Object>> com)
{
	
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 049        value = {
	// 050            "(",
	// 051            "Ljava/util/SortedMap",
	// 052            "<",
	// 053            "Ljava/lang/String;",
	// 054            "Ljava/lang/String;",
	// 055            ">;",
	// 056            "Landroid/icu/util/ULocale;",
	// 057            "Ljava/util/Comparator",
	// 058            "<",
	// 059            "Ljava/lang/Object;",
	// 060            ">;)V"
	// 061        }
	// 062    .end annotation
	//    .local p1, "dnCache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	//    .local p3, "com":Ljava/util/Comparator;, "Ljava/util/Comparator<Ljava/lang/Object;>;"
	// 068    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->locale = locale;
	this->com = com;
	this->dnCache = dnCache;
	return;

}
// .method get(Landroid/icu/util/ULocale;Ljava/util/Comparator;)Ljava/util/SortedMap;
std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> android::icu::impl::ICUService_S_LocaleRef::get(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::util::Comparator<java::lang::Object>> comp)
{
	
	std::shared_ptr<java::util::SortedMap> m;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 089        value = {
	// 090            "(",
	// 091            "Landroid/icu/util/ULocale;",
	// 092            "Ljava/util/Comparator",
	// 093            "<",
	// 094            "Ljava/lang/Object;",
	// 095            ">;)",
	// 096            "Ljava/util/SortedMap",
	// 097            "<",
	// 098            "Ljava/lang/String;",
	// 099            "Ljava/lang/String;",
	// 100            ">;"
	// 101        }
	// 102    .end annotation
	//    .local p2, "comp":Ljava/util/Comparator;, "Ljava/util/Comparator<Ljava/lang/Object;>;"
	m = this->dnCache;
	//    .local v0, "m":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(m) )  
		goto label_cond_1e;
	if ( !(this->locale->equals(loc)) )  
		goto label_cond_1e;
	if ( this->com == comp )
		goto label_cond_1d;
	if ( !(this->com) )  
		goto label_cond_1e;
	if ( !(this->com->equals(comp)) )  
		goto label_cond_1e;
label_cond_1d:
	return m;
	// 147    .line 751
label_cond_1e:
	return 0x0;

}


