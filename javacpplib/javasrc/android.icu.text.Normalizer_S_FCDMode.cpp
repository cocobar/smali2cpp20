// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$FCDMode.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_FCD32ModeImpl.h"
#include "android.icu.text.Normalizer_S_FCDMode.h"
#include "android.icu.text.Normalizer_S_FCDModeImpl.h"
#include "android.icu.text.Normalizer_S_ModeImpl.h"
#include "android.icu.text.Normalizer2.h"

// .method private constructor <init>()V
android::icu::text::Normalizer_S_FCDMode::Normalizer_S_FCDMode()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/text/Normalizer$Mode;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/Normalizer$FCDMode;)V
android::icu::text::Normalizer_S_FCDMode::Normalizer_S_FCDMode(std::shared_ptr<android::icu::text::Normalizer_S_FCDMode> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/Normalizer$FCDMode;
	// 033    invoke-direct {p0}, Landroid/icu/text/Normalizer$FCDMode;-><init>()V
	return;

}
// .method protected getNormalizer2(I)Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer_S_FCDMode::getNormalizer2(int options)
{
	
	std::shared_ptr<android::icu::text::Normalizer2> cVar0;
	
	//    .param p1, "options"    # I
	if ( !(( options & 0x20)) )  
		goto label_cond_d;
	cVar0 = android::icu::text::Normalizer_S_ModeImpl::-get0(android::icu::text::Normalizer_S_FCD32ModeImpl::-get0({const[class].FS-Param}));
label_goto_c:
	return cVar0;
	// 063    .line 288
label_cond_d:
	cVar0 = android::icu::text::Normalizer_S_ModeImpl::-get0(android::icu::text::Normalizer_S_FCDModeImpl::-get0({const[class].FS-Param}));
	goto label_goto_c;

}


