// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NormalizationTransliterator$NormalizingTransform.smali
#include "java2ctype.h"
#include "android.icu.text.NormalizationTransliterator_S_NormalizingTransform.h"
#include "android.icu.text.Normalizer2.h"
#include "java.lang.String.h"

// .method public constructor <init>(Landroid/icu/text/Normalizer2;)V
android::icu::text::NormalizationTransliterator_S_NormalizingTransform::NormalizationTransliterator_S_NormalizingTransform(std::shared_ptr<android::icu::text::Normalizer2> norm2)
{
	
	//    .param p1, "norm2"    # Landroid/icu/text/Normalizer2;
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->norm2 = norm2;
	return;

}
// .method public transform(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NormalizationTransliterator_S_NormalizingTransform::transform(std::shared_ptr<java::lang::String> source)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	return this->norm2->normalize(source);

}


