// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$DataBundle.smali
#include "java2ctype.h"
#include "android.icu.text.CompactDecimalDataCache_S_Data.h"
#include "android.icu.text.CompactDecimalDataCache_S_DataBundle.h"
#include "java.util.HashMap.h"

// .method static synthetic -wrap0()Landroid/icu/text/CompactDecimalDataCache$DataBundle;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> android::icu::text::CompactDecimalDataCache_S_DataBundle::_wrap0()
{
	
	return android::icu::text::CompactDecimalDataCache_S_DataBundle::createEmpty({const[class].FS-Param});

}
// .method private constructor <init>(Landroid/icu/text/CompactDecimalDataCache$Data;Landroid/icu/text/CompactDecimalDataCache$Data;Landroid/icu/text/CompactDecimalDataCache$Data;)V
android::icu::text::CompactDecimalDataCache_S_DataBundle::CompactDecimalDataCache_S_DataBundle(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> shortData,std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> longData,std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> shortCurrencyData)
{
	
	//    .param p1, "shortData"    # Landroid/icu/text/CompactDecimalDataCache$Data;
	//    .param p2, "longData"    # Landroid/icu/text/CompactDecimalDataCache$Data;
	//    .param p3, "shortCurrencyData"    # Landroid/icu/text/CompactDecimalDataCache$Data;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->shortData = shortData;
	this->longData = longData;
	this->shortCurrencyData = shortCurrencyData;
	return;

}
// .method private static createEmpty()Landroid/icu/text/CompactDecimalDataCache$DataBundle;
std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> android::icu::text::CompactDecimalDataCache_S_DataBundle::createEmpty()
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> cVar1;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> cVar2;
	std::shared_ptr<java::util::HashMap> cVar3;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> cVar4;
	std::shared_ptr<java::util::HashMap> cVar5;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> cVar6;
	std::shared_ptr<java::util::HashMap> cVar7;
	
	cVar0 = 0xf;
	cVar3 = std::make_shared<java::util::HashMap>();
	cVar2 = std::make_shared<android::icu::text::CompactDecimalDataCache_S_Data>(std::make_shared<std::vector<long long[]>>(cVar0), cVar3);
	cVar5 = std::make_shared<java::util::HashMap>();
	cVar4 = std::make_shared<android::icu::text::CompactDecimalDataCache_S_Data>(std::make_shared<std::vector<long long[]>>(cVar0), cVar5);
	cVar7 = std::make_shared<java::util::HashMap>();
	cVar6 = std::make_shared<android::icu::text::CompactDecimalDataCache_S_Data>(std::make_shared<std::vector<long long[]>>(cVar0), cVar7);
	cVar1 = std::make_shared<android::icu::text::CompactDecimalDataCache_S_DataBundle>(cVar2, cVar4, cVar6);
	return cVar1;

}


