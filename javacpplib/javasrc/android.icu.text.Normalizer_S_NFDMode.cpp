// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$NFDMode.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_ModeImpl.h"
#include "android.icu.text.Normalizer_S_NFD32ModeImpl.h"
#include "android.icu.text.Normalizer_S_NFDMode.h"
#include "android.icu.text.Normalizer_S_NFDModeImpl.h"
#include "android.icu.text.Normalizer2.h"

// .method private constructor <init>()V
android::icu::text::Normalizer_S_NFDMode::Normalizer_S_NFDMode()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/text/Normalizer$Mode;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/Normalizer$NFDMode;)V
android::icu::text::Normalizer_S_NFDMode::Normalizer_S_NFDMode(std::shared_ptr<android::icu::text::Normalizer_S_NFDMode> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/Normalizer$NFDMode;
	// 033    invoke-direct {p0}, Landroid/icu/text/Normalizer$NFDMode;-><init>()V
	return;

}
// .method protected getNormalizer2(I)Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer_S_NFDMode::getNormalizer2(int options)
{
	
	std::shared_ptr<android::icu::text::Normalizer2> cVar0;
	
	//    .param p1, "options"    # I
	if ( !(( options & 0x20)) )  
		goto label_cond_d;
	cVar0 = android::icu::text::Normalizer_S_ModeImpl::-get0(android::icu::text::Normalizer_S_NFD32ModeImpl::-get0({const[class].FS-Param}));
label_goto_c:
	return cVar0;
	// 063    .line 260
label_cond_d:
	cVar0 = android::icu::text::Normalizer_S_ModeImpl::-get0(android::icu::text::Normalizer_S_NFDModeImpl::-get0({const[class].FS-Param}));
	goto label_goto_c;

}


