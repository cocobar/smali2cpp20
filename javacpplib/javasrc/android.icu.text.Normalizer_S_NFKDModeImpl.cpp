// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$NFKDModeImpl.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_ModeImpl.h"
#include "android.icu.text.Normalizer_S_NFKDModeImpl.h"
#include "android.icu.text.Normalizer2.h"

static android::icu::text::Normalizer_S_NFKDModeImpl::INSTANCE;
// .method static synthetic -get0()Landroid/icu/text/Normalizer$ModeImpl;
std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> android::icu::text::Normalizer_S_NFKDModeImpl::_get0()
{
	
	return android::icu::text::Normalizer_S_NFKDModeImpl::INSTANCE;

}
// .method static constructor <clinit>()V
void android::icu::text::Normalizer_S_NFKDModeImpl::static_cinit()
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::Normalizer_S_ModeImpl>(android::icu::text::Normalizer2::getNFKDInstance({const[class].FS-Param}), 0x0);
	android::icu::text::Normalizer_S_NFKDModeImpl::INSTANCE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::text::Normalizer_S_NFKDModeImpl::Normalizer_S_NFKDModeImpl()
{
	
	// 056    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}

