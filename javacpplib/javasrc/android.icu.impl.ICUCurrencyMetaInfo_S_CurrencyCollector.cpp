// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyMetaInfo$CurrencyCollector.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_CurrencyCollector.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_UniqueList.h"
#include "java.lang.String.h"
#include "java.util.List.h"

// .method private constructor <init>()V
android::icu::impl::ICUCurrencyMetaInfo_S_CurrencyCollector::ICUCurrencyMetaInfo_S_CurrencyCollector()
{
	
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->result = android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList::-wrap0({const[class].FS-Param});
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ICUCurrencyMetaInfo$CurrencyCollector;)V
android::icu::impl::ICUCurrencyMetaInfo_S_CurrencyCollector::ICUCurrencyMetaInfo_S_CurrencyCollector(std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_CurrencyCollector> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/ICUCurrencyMetaInfo$CurrencyCollector;
	// 067    invoke-direct {p0}, Landroid/icu/impl/ICUCurrencyMetaInfo$CurrencyCollector;-><init>()V
	return;

}
// .method public collect(Ljava/lang/String;Ljava/lang/String;JJIZ)V
void android::icu::impl::ICUCurrencyMetaInfo_S_CurrencyCollector::collect(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> currency,long long from,long long to,int priority,bool tender)
{
	
	//    .param p1, "region"    # Ljava/lang/String;
	//    .param p2, "currency"    # Ljava/lang/String;
	//    .param p3, "from"    # J
	//    .param p5, "to"    # J
	//    .param p7, "priority"    # I
	//    .param p8, "tender"    # Z
	this->result->add(currency);
	return;

}
// .method public collects()I
int android::icu::impl::ICUCurrencyMetaInfo_S_CurrencyCollector::collects()
{
	
	return 0x2;

}
// .method public getList()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::impl::ICUCurrencyMetaInfo_S_CurrencyCollector::getList()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 106        value = {
	// 107            "()",
	// 108            "Ljava/util/List",
	// 109            "<",
	// 110            "Ljava/lang/String;",
	// 111            ">;"
	// 112        }
	// 113    .end annotation
	return this->result->list();

}


