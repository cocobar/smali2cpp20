// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$NFKCMode.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_ModeImpl.h"
#include "android.icu.text.Normalizer_S_NFKC32ModeImpl.h"
#include "android.icu.text.Normalizer_S_NFKCMode.h"
#include "android.icu.text.Normalizer_S_NFKCModeImpl.h"
#include "android.icu.text.Normalizer2.h"

// .method private constructor <init>()V
android::icu::text::Normalizer_S_NFKCMode::Normalizer_S_NFKCMode()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/text/Normalizer$Mode;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/Normalizer$NFKCMode;)V
android::icu::text::Normalizer_S_NFKCMode::Normalizer_S_NFKCMode(std::shared_ptr<android::icu::text::Normalizer_S_NFKCMode> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/Normalizer$NFKCMode;
	// 033    invoke-direct {p0}, Landroid/icu/text/Normalizer$NFKCMode;-><init>()V
	return;

}
// .method protected getNormalizer2(I)Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer_S_NFKCMode::getNormalizer2(int options)
{
	
	std::shared_ptr<android::icu::text::Normalizer2> cVar0;
	
	//    .param p1, "options"    # I
	if ( !(( options & 0x20)) )  
		goto label_cond_d;
	cVar0 = android::icu::text::Normalizer_S_ModeImpl::-get0(android::icu::text::Normalizer_S_NFKC32ModeImpl::-get0({const[class].FS-Param}));
label_goto_c:
	return cVar0;
	// 063    .line 281
label_cond_d:
	cVar0 = android::icu::text::Normalizer_S_ModeImpl::-get0(android::icu::text::Normalizer_S_NFKCModeImpl::-get0({const[class].FS-Param}));
	goto label_goto_c;

}


