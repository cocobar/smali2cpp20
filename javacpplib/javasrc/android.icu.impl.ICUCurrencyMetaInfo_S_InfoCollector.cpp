// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyMetaInfo$InfoCollector.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_InfoCollector.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyInfo.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.List.h"

// .method private constructor <init>()V
android::icu::impl::ICUCurrencyMetaInfo_S_InfoCollector::ICUCurrencyMetaInfo_S_InfoCollector()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->result = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ICUCurrencyMetaInfo$InfoCollector;)V
android::icu::impl::ICUCurrencyMetaInfo_S_InfoCollector::ICUCurrencyMetaInfo_S_InfoCollector(std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_InfoCollector> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/ICUCurrencyMetaInfo$InfoCollector;
	// 067    invoke-direct {p0}, Landroid/icu/impl/ICUCurrencyMetaInfo$InfoCollector;-><init>()V
	return;

}
// .method public collect(Ljava/lang/String;Ljava/lang/String;JJIZ)V
void android::icu::impl::ICUCurrencyMetaInfo_S_InfoCollector::collect(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> currency,long long from,long long to,int priority,bool tender)
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo> cVar0;
	
	//    .param p1, "region"    # Ljava/lang/String;
	//    .param p2, "currency"    # Ljava/lang/String;
	//    .param p3, "from"    # J
	//    .param p5, "to"    # J
	//    .param p7, "priority"    # I
	//    .param p8, "tender"    # Z
	cVar0 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo>(region, currency, from, to, priority, tender);
	this->result->add(cVar0);
	return;

}
// .method public collects()I
int android::icu::impl::ICUCurrencyMetaInfo_S_InfoCollector::collects()
{
	
	return 0x7fffffff;

}
// .method public getList()Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo>> android::icu::impl::ICUCurrencyMetaInfo_S_InfoCollector::getList()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 122        value = {
	// 123            "()",
	// 124            "Ljava/util/List",
	// 125            "<",
	// 126            "Landroid/icu/text/CurrencyMetaInfo$CurrencyInfo;",
	// 127            ">;"
	// 128        }
	// 129    .end annotation
	return java::util::Collections::unmodifiableList(this->result);

}


