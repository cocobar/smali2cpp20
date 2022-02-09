// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$FCDModeImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.text.Normalizer_S_FCDModeImpl.h"
#include "android.icu.text.Normalizer_S_ModeImpl.h"
#include "android.icu.text.Normalizer2.h"

static android::icu::text::Normalizer_S_FCDModeImpl::INSTANCE;
// .method static synthetic -get0()Landroid/icu/text/Normalizer$ModeImpl;
std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> android::icu::text::Normalizer_S_FCDModeImpl::_get0()
{
	
	return android::icu::text::Normalizer_S_FCDModeImpl::INSTANCE;

}
// .method static constructor <clinit>()V
void android::icu::text::Normalizer_S_FCDModeImpl::static_cinit()
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::Normalizer_S_ModeImpl>(android::icu::impl::Norm2AllModes::getFCDNormalizer2({const[class].FS-Param}), 0x0);
	android::icu::text::Normalizer_S_FCDModeImpl::INSTANCE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::text::Normalizer_S_FCDModeImpl::Normalizer_S_FCDModeImpl()
{
	
	// 056    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


