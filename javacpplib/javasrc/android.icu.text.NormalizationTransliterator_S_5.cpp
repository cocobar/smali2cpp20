// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NormalizationTransliterator$5.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.text.NormalizationTransliterator_S_5.h"
#include "android.icu.text.NormalizationTransliterator.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::text::NormalizationTransliterator_S_5::NormalizationTransliterator_S_5()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getInstance(Ljava/lang/String;)Landroid/icu/text/Transliterator;
std::shared_ptr<android::icu::text::Transliterator> android::icu::text::NormalizationTransliterator_S_5::getInstance(std::shared_ptr<java::lang::String> ID)
{
	
	std::shared_ptr<android::icu::text::NormalizationTransliterator> cVar0;
	
	//    .param p1, "ID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::NormalizationTransliterator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FCD")), android::icu::impl::Norm2AllModes::getFCDNormalizer2({const[class].FS-Param}), 0x0);
	return cVar0;

}


