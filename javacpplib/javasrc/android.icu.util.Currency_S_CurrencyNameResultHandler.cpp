// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$CurrencyNameResultHandler.smali
#include "java2ctype.h"
#include "android.icu.util.Currency_S_CurrencyNameResultHandler.h"
#include "android.icu.util.Currency_S_CurrencyStringInfo.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"

// .method private constructor <init>()V
android::icu::util::Currency_S_CurrencyNameResultHandler::Currency_S_CurrencyNameResultHandler()
{
	
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/Currency$CurrencyNameResultHandler;)V
android::icu::util::Currency_S_CurrencyNameResultHandler::Currency_S_CurrencyNameResultHandler(std::shared_ptr<android::icu::util::Currency_S_CurrencyNameResultHandler> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/util/Currency$CurrencyNameResultHandler;
	// 052    invoke-direct {p0}, Landroid/icu/util/Currency$CurrencyNameResultHandler;-><init>()V
	return;

}
// .method public getBestCurrencyISOCode()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Currency_S_CurrencyNameResultHandler::getBestCurrencyISOCode()
{
	
	return this->bestCurrencyISOCode;

}
// .method public getBestMatchLength()I
int android::icu::util::Currency_S_CurrencyNameResultHandler::getBestMatchLength()
{
	
	return this->bestMatchLength;

}
// .method public handlePrefixMatch(ILjava/util/Iterator;)Z
bool android::icu::util::Currency_S_CurrencyNameResultHandler::handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<android::icu::util::Currency_S_CurrencyStringInfo>> values)
{
	
	std::shared_ptr<android::icu::util::Currency_S_CurrencyStringInfo> cVar0;
	
	//    .param p1, "matchLength"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 083        value = {
	// 084            "(I",
	// 085            "Ljava/util/Iterator",
	// 086            "<",
	// 087            "Landroid/icu/util/Currency$CurrencyStringInfo;",
	// 088            ">;)Z"
	// 089        }
	// 090    .end annotation
	//    .local p2, "values":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/util/Currency$CurrencyStringInfo;>;"
	if ( !(values->hasNext()) )  
		goto label_cond_14;
	cVar0 = values->next();
	cVar0->checkCast("android::icu::util::Currency_S_CurrencyStringInfo");
	this->bestCurrencyISOCode = cVar0->getISOCode();
	this->bestMatchLength = matchLength;
label_cond_14:
	return 0x1;

}


