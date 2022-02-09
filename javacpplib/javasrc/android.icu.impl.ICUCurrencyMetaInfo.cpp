// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyMetaInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_Collector.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_CurrencyCollector.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_InfoCollector.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_RegionCollector.h"
#include "android.icu.impl.ICUCurrencyMetaInfo.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyDigits.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyFilter.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyInfo.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"

static android::icu::impl::ICUCurrencyMetaInfo::Currency = 0x2;
static android::icu::impl::ICUCurrencyMetaInfo::Date = 0x4;
static android::icu::impl::ICUCurrencyMetaInfo::Everything = 0x7fffffff;
static android::icu::impl::ICUCurrencyMetaInfo::MASK = 0xffffffffL;
static android::icu::impl::ICUCurrencyMetaInfo::Region = 0x1;
static android::icu::impl::ICUCurrencyMetaInfo::Tender = 0x8;
// .method public constructor <init>()V
android::icu::impl::ICUCurrencyMetaInfo::ICUCurrencyMetaInfo()
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	
	// 044    invoke-direct {p0}, Landroid/icu/text/CurrencyMetaInfo;-><init>()V
	bundle = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/curr")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	this->regionInfo = bundle->findTopLevel(std::make_shared<java::lang::String>(std::make_shared<char[]>("CurrencyMap")));
	this->digitInfo = bundle->findTopLevel(std::make_shared<java::lang::String>(std::make_shared<char[]>("CurrencyMeta")));
	return;

}
// .method private collect(Landroid/icu/impl/ICUCurrencyMetaInfo$Collector;Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;)Ljava/util/List;
template <typename T>
std::shared_ptr<java::util::List<T>> android::icu::impl::ICUCurrencyMetaInfo::collect(std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_Collector<T>> collector,std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	int needed;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> b;
	int i;
	
	//    .param p2, "filter"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	//    .annotation system Ldalvik/annotation/Signature;
	// 088        value = {
	// 089            "<T:",
	// 090            "Ljava/lang/Object;",
	// 091            ">(",
	// 092            "Landroid/icu/impl/ICUCurrencyMetaInfo$Collector",
	// 093            "<TT;>;",
	// 094            "Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;",
	// 095            ")",
	// 096            "Ljava/util/List",
	// 097            "<TT;>;"
	// 098        }
	// 099    .end annotation
	//    .local p1, "collector":Landroid/icu/impl/ICUCurrencyMetaInfo$Collector;, "Landroid/icu/impl/ICUCurrencyMetaInfo$Collector<TT;>;"
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::all({const[class].FS-Param});
label_cond_6:
	needed = collector->collects();
	//    .local v2, "needed":I
	if ( !(cVar0->region) )  
		goto label_cond_10;
	needed = ( needed | 0x1);
label_cond_10:
	if ( !(cVar0->currency) )  
		goto label_cond_16;
	needed = ( needed | 0x2);
label_cond_16:
	if ( (cVar0->from > -0x8000000000000000L) )     
		goto label_cond_29;
	if ( !((cVar0->to > 0x7fffffffffffffffL)) )  
		goto label_cond_2b;
label_cond_29:
	needed = ( needed | 0x4);
label_cond_2b:
	if ( !(cVar0->tenderOnly) )  
		goto label_cond_31;
	needed = ( needed | 0x8);
label_cond_31:
	if ( !(needed) )  
		goto label_cond_44;
	if ( !(cVar0->region) )  
		goto label_cond_49;
	b = this->regionInfo->findWithFallback(cVar0->region);
	//    .local v0, "b":Landroid/icu/impl/ICUResourceBundle;
	if ( !(b) )  
		goto label_cond_44;
	this->collectRegion(collector, cVar0, needed, b);
	//    .end local v0    # "b":Landroid/icu/impl/ICUResourceBundle;
label_cond_44:
	return collector->getList();
	// 200    .line 102
label_cond_49:
	i = 0x0;
	//    .local v1, "i":I
label_goto_4a:
	if ( i >= this->regionInfo->getSize() )
		goto label_cond_44;
	this->collectRegion(collector, cVar0, needed, this->regionInfo->at(i));
	i = ( i + 0x1);
	goto label_goto_4a;

}
// .method private collectRegion(Landroid/icu/impl/ICUCurrencyMetaInfo$Collector;Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;ILandroid/icu/impl/ICUResourceBundle;)V
template <typename T>
void android::icu::impl::ICUCurrencyMetaInfo::collectRegion(std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_Collector<T>> collector,std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter,int needed,std::shared_ptr<android::icu::impl::ICUResourceBundle> b)
{
	
	int i;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> r;
	bool tender;
	std::shared_ptr<java::lang::Object> currency;
	long long from;
	long long to;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> tenderBundle;
	
	//    .param p2, "filter"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	//    .param p3, "needed"    # I
	//    .param p4, "b"    # Landroid/icu/impl/ICUResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 235        value = {
	// 236            "<T:",
	// 237            "Ljava/lang/Object;",
	// 238            ">(",
	// 239            "Landroid/icu/impl/ICUCurrencyMetaInfo$Collector",
	// 240            "<TT;>;",
	// 241            "Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;",
	// 242            "I",
	// 243            "Landroid/icu/impl/ICUResourceBundle;",
	// 244            ")V"
	// 245        }
	// 246    .end annotation
	//    .local p1, "collector":Landroid/icu/impl/ICUCurrencyMetaInfo$Collector;, "Landroid/icu/impl/ICUCurrencyMetaInfo$Collector<TT;>;"
	//    .local v4, "region":Ljava/lang/String;
	if ( needed != 0x1 )
		goto label_cond_1a;
	//    .end local v4    # "region":Ljava/lang/String;
	collector->collect(b->getKey(), 0x0, 0x0, 0x0, -0x1, 0x0);
	return;
	// 286    .line 120
	// 287    .restart local v4    # "region":Ljava/lang/String;
label_cond_1a:
	i = 0x0;
	//    .local v10, "i":I
label_goto_1b:
	if ( i >= b->getSize() )
		goto label_cond_c2;
	r = b->at(i);
	//    .local v12, "r":Landroid/icu/impl/ICUResourceBundle;
	if ( r->getSize() )     
		goto label_cond_30;
label_cond_2d:
label_goto_2d:
	i = ( i + 0x1);
	goto label_goto_1b;
	// 321    .line 128
label_cond_30:
	//    .local v5, "currency":Ljava/lang/String;
	//    .local v6, "from":J
	//    .local v8, "to":J
	tender = 0x1;
	//    .local v11, "tender":Z
	if ( !(( needed & 0x2)) )  
		goto label_cond_5a;
	//    .local v2, "currBundle":Landroid/icu/impl/ICUResourceBundle;
	currency = r->at(std::make_shared<java::lang::String>(std::make_shared<char[]>("id")))->getString();
	//    .local v5, "currency":Ljava/lang/String;
	if ( !(filter->currency) )  
		goto label_cond_5a;
	if ( ( filter->currency->equals(currency) ^ 0x1) )     
		goto label_cond_2d;
	//    .end local v2    # "currBundle":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v5    # "currency":Ljava/lang/String;
label_cond_5a:
	if ( !(( needed & 0x4)) )  
		goto label_cond_97;
	from = this->getDate(r->at(std::make_shared<java::lang::String>(std::make_shared<char[]>("from"))), -0x8000000000000000L, 0x0);
	to = this->getDate(r->at(std::make_shared<java::lang::String>(std::make_shared<char[]>("to"))), 0x7fffffffffffffffL, 0x1);
	if ( (filter->from > to) > 0 ) 
		goto label_cond_2d;
	if ( (filter->to > from) < 0 ) 
		goto label_cond_2d;
label_cond_97:
	if ( !(( needed & 0x8)) )  
		goto label_cond_b9;
	tenderBundle = r->at(std::make_shared<java::lang::String>(std::make_shared<char[]>("tender")));
	//    .local v13, "tenderBundle":Landroid/icu/impl/ICUResourceBundle;
	if ( !(tenderBundle) )  
		goto label_cond_c0;
	tender = std::make_shared<java::lang::String>(std::make_shared<char[]>("true"))->equals(tenderBundle->getString());
	//    .end local v11    # "tender":Z
label_goto_af:
	if ( !(filter->tenderOnly) )  
		goto label_cond_b9;
	if ( ( tender ^ 0x1) )     
		goto label_cond_2d;
	//    .end local v13    # "tenderBundle":Landroid/icu/impl/ICUResourceBundle;
label_cond_b9:
	collector->collect(b->getKey(), 0x0, -0x8000000000000000L, 0x7fffffffffffffffL, i, tender);
	goto label_goto_2d;
	// 489    .line 157
	// 490    .restart local v11    # "tender":Z
	// 491    .restart local v13    # "tenderBundle":Landroid/icu/impl/ICUResourceBundle;
label_cond_c0:
	tender = 0x1;
	goto label_goto_af;
	// 497    .line 166
	// 498    .end local v6    # "from":J
	// 499    .end local v8    # "to":J
	// 500    .end local v11    # "tender":Z
	// 501    .end local v12    # "r":Landroid/icu/impl/ICUResourceBundle;
	// 502    .end local v13    # "tenderBundle":Landroid/icu/impl/ICUResourceBundle;
label_cond_c2:
	return;

}
// .method private getDate(Landroid/icu/impl/ICUResourceBundle;JZ)J
long long android::icu::impl::ICUCurrencyMetaInfo::getDate(std::shared_ptr<android::icu::impl::ICUResourceBundle> b,long long defaultValue,bool endOfDay)
{
	
	auto values;
	
	//    .param p1, "b"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p2, "defaultValue"    # J
	//    .param p4, "endOfDay"    # Z
	if ( b )     
		goto label_cond_3;
	return defaultValue;
	// 520    .line 173
label_cond_3:
	values = b->getIntVector();
	//    .local v0, "values":[I
	return (((long long)(values[0x0]) << 0x20) |  ((long long)(values[0x1]) &  0xffffffffL));

}
// .method public currencies(Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::impl::ICUCurrencyMetaInfo::currencies(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter)
{
	
	std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_CurrencyCollector> cVar0;
	
	//    .param p1, "filter"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	//    .annotation system Ldalvik/annotation/Signature;
	// 559        value = {
	// 560            "(",
	// 561            "Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;",
	// 562            ")",
	// 563            "Ljava/util/List",
	// 564            "<",
	// 565            "Ljava/lang/String;",
	// 566            ">;"
	// 567        }
	// 568    .end annotation
	cVar0 = std::make_shared<android::icu::impl::ICUCurrencyMetaInfo_S_CurrencyCollector>(0x0);
	return this->collect(cVar0, filter);

}
// .method public currencyDigits(Ljava/lang/String;)Landroid/icu/text/CurrencyMetaInfo$CurrencyDigits;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> android::icu::impl::ICUCurrencyMetaInfo::currencyDigits(std::shared_ptr<java::lang::String> isoCode)
{
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	return this->currencyDigits(isoCode, android::icu::util::Currency_S_CurrencyUsage::STANDARD);

}
// .method public currencyDigits(Ljava/lang/String;Landroid/icu/util/Currency$CurrencyUsage;)Landroid/icu/text/CurrencyMetaInfo$CurrencyDigits;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> android::icu::impl::ICUCurrencyMetaInfo::currencyDigits(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> currencyPurpose)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> b;
	auto data;
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> cVar2;
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> cVar3;
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> cVar4;
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	//    .param p2, "currencyPurpose"    # Landroid/icu/util/Currency$CurrencyUsage;
	cVar0 = 0x1;
	cVar1 = 0x0;
	b = this->digitInfo->findWithFallback(isoCode);
	//    .local v0, "b":Landroid/icu/impl/ICUResourceBundle;
	if ( b )     
		goto label_cond_13;
label_cond_13:
	data = b->getIntVector();
	//    .local v1, "data":[I
	if ( currencyPurpose != android::icu::util::Currency_S_CurrencyUsage::CASH )
		goto label_cond_27;
	cVar2 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits>(data[0x2], data[0x3]);
	return cVar2;
	// 657    .line 66
label_cond_27:
	if ( currencyPurpose != android::icu::util::Currency_S_CurrencyUsage::STANDARD )
		goto label_cond_35;
	cVar3 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits>(data[cVar1], data[cVar0]);
	return cVar3;
	// 674    .line 69
label_cond_35:
	cVar4 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits>(data[cVar1], data[cVar0]);
	return cVar4;

}
// .method public currencyInfo(Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;)Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo>> android::icu::impl::ICUCurrencyMetaInfo::currencyInfo(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter)
{
	
	std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_InfoCollector> cVar0;
	
	//    .param p1, "filter"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	//    .annotation system Ldalvik/annotation/Signature;
	// 691        value = {
	// 692            "(",
	// 693            "Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;",
	// 694            ")",
	// 695            "Ljava/util/List",
	// 696            "<",
	// 697            "Landroid/icu/text/CurrencyMetaInfo$CurrencyInfo;",
	// 698            ">;"
	// 699        }
	// 700    .end annotation
	cVar0 = std::make_shared<android::icu::impl::ICUCurrencyMetaInfo_S_InfoCollector>(0x0);
	return this->collect(cVar0, filter);

}
// .method public regions(Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::impl::ICUCurrencyMetaInfo::regions(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter)
{
	
	std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_RegionCollector> cVar0;
	
	//    .param p1, "filter"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	//    .annotation system Ldalvik/annotation/Signature;
	// 721        value = {
	// 722            "(",
	// 723            "Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;",
	// 724            ")",
	// 725            "Ljava/util/List",
	// 726            "<",
	// 727            "Ljava/lang/String;",
	// 728            ">;"
	// 729        }
	// 730    .end annotation
	cVar0 = std::make_shared<android::icu::impl::ICUCurrencyMetaInfo_S_RegionCollector>(0x0);
	return this->collect(cVar0, filter);

}


