// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberingSystem$2.smali
#include "java2ctype.h"
#include "android.icu.text.NumberingSystem_S_2.h"
#include "android.icu.text.NumberingSystem.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"

// .method constructor <init>()V
android::icu::text::NumberingSystem_S_2::NumberingSystem_S_2()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Ljava/lang/Void;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem_S_2::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::Void> unused)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "unused"    # Ljava/lang/Void;
	return android::icu::text::NumberingSystem::-wrap0(key);

}


