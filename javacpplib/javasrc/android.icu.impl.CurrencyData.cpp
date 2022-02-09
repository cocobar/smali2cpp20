// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_1.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfoProvider.h"
#include "android.icu.impl.CurrencyData.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static android::icu::impl::CurrencyData::provider;
// .method static constructor <clinit>()V
void android::icu::impl::CurrencyData::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::CurrencyData_S_1> temp;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfoProvider> temp;
	std::vector<std::any> tryCatchExcetionList;
	
	0x0;
	//    .local v2, "temp":Landroid/icu/impl/CurrencyData$CurrencyDisplayInfoProvider;
	try {
	//label_try_start_1:
	//    .local v0, "clzz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	temp = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.ICUCurrencyDisplayInfoProvider")))->newInstance();
	//    .end local v2    # "temp":Landroid/icu/impl/CurrencyData$CurrencyDisplayInfoProvider;
	temp->checkCast("android::icu::impl::CurrencyData_S_CurrencyDisplayInfoProvider");
	//label_try_end_e:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_e} :catch_11
	//    .end local v0    # "clzz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local v2, "temp":Landroid/icu/impl/CurrencyData$CurrencyDisplayInfoProvider;
label_goto_e:
	android::icu::impl::CurrencyData::provider = temp;
	return;
	// 060    .line 109
	// 061    .end local v2    # "temp":Landroid/icu/impl/CurrencyData$CurrencyDisplayInfoProvider;
label_catch_11:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "t":Ljava/lang/Throwable;
	temp = std::make_shared<android::icu::impl::CurrencyData_S_1>();
	//    .restart local v2    # "temp":Landroid/icu/impl/CurrencyData$CurrencyDisplayInfoProvider;
	goto label_goto_e;

}
// .method private constructor <init>()V
android::icu::impl::CurrencyData::CurrencyData()
{
	
	// 080    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


