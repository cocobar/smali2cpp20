// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$FCD32ModeImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.text.FilteredNormalizer2.h"
#include "android.icu.text.Normalizer_S_FCD32ModeImpl.h"
#include "android.icu.text.Normalizer_S_ModeImpl.h"
#include "android.icu.text.Normalizer_S_Unicode32.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.UnicodeSet.h"

static android::icu::text::Normalizer_S_FCD32ModeImpl::INSTANCE;
// .method static synthetic -get0()Landroid/icu/text/Normalizer$ModeImpl;
std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> android::icu::text::Normalizer_S_FCD32ModeImpl::_get0()
{
	
	return android::icu::text::Normalizer_S_FCD32ModeImpl::INSTANCE;

}
// .method static constructor <clinit>()V
void android::icu::text::Normalizer_S_FCD32ModeImpl::static_cinit()
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> cVar0;
	std::shared_ptr<android::icu::text::FilteredNormalizer2> cVar1;
	
	cVar1 = std::make_shared<android::icu::text::FilteredNormalizer2>(android::icu::impl::Norm2AllModes::getFCDNormalizer2({const[class].FS-Param}), android::icu::text::Normalizer_S_Unicode32::-get0({const[class].FS-Param}));
	cVar0 = std::make_shared<android::icu::text::Normalizer_S_ModeImpl>(cVar1, 0x0);
	android::icu::text::Normalizer_S_FCD32ModeImpl::INSTANCE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::text::Normalizer_S_FCD32ModeImpl::Normalizer_S_FCD32ModeImpl()
{
	
	// 067    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


