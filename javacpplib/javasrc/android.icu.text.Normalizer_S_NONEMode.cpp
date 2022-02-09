// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$NONEMode.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_NoopNormalizer2.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.text.Normalizer_S_NONEMode.h"
#include "android.icu.text.Normalizer2.h"

// .method private constructor <init>()V
android::icu::text::Normalizer_S_NONEMode::Normalizer_S_NONEMode()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/text/Normalizer$Mode;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/Normalizer$NONEMode;)V
android::icu::text::Normalizer_S_NONEMode::Normalizer_S_NONEMode(std::shared_ptr<android::icu::text::Normalizer_S_NONEMode> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/Normalizer$NONEMode;
	// 033    invoke-direct {p0}, Landroid/icu/text/Normalizer$NONEMode;-><init>()V
	return;

}
// .method protected getNormalizer2(I)Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer_S_NONEMode::getNormalizer2(int options)
{
	
	//    .param p1, "options"    # I
	return android::icu::impl::Norm2AllModes::NOOP_NORMALIZER2;

}


