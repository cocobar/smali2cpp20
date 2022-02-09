// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberingSystem$1.smali
#include "java2ctype.h"
#include "android.icu.text.NumberingSystem_S_1.h"
#include "android.icu.text.NumberingSystem_S_LocaleLookupData.h"
#include "android.icu.text.NumberingSystem.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::NumberingSystem_S_1::NumberingSystem_S_1()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Landroid/icu/text/NumberingSystem$LocaleLookupData;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem_S_1::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::text::NumberingSystem_S_LocaleLookupData> localeLookupData)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "localeLookupData"    # Landroid/icu/text/NumberingSystem$LocaleLookupData;
	return android::icu::text::NumberingSystem::lookupInstanceByLocale(localeLookupData);

}


