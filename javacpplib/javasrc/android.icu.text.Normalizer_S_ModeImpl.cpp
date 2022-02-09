// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$ModeImpl.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_ModeImpl.h"
#include "android.icu.text.Normalizer2.h"

// .method static synthetic -get0(Landroid/icu/text/Normalizer$ModeImpl;)Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer_S_ModeImpl::_get0(std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/Normalizer$ModeImpl;
	return _this->normalizer2;

}
// .method private constructor <init>(Landroid/icu/text/Normalizer2;)V
android::icu::text::Normalizer_S_ModeImpl::Normalizer_S_ModeImpl(std::shared_ptr<android::icu::text::Normalizer2> n2)
{
	
	//    .param p1, "n2"    # Landroid/icu/text/Normalizer2;
	// 038    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->normalizer2 = n2;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/Normalizer2;Landroid/icu/text/Normalizer$ModeImpl;)V
android::icu::text::Normalizer_S_ModeImpl::Normalizer_S_ModeImpl(std::shared_ptr<android::icu::text::Normalizer2> n2,std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> _this1)
{
	
	//    .param p1, "n2"    # Landroid/icu/text/Normalizer2;
	//    .param p2, "-this1"    # Landroid/icu/text/Normalizer$ModeImpl;
	android::icu::text::Normalizer_S_ModeImpl::(n2);
	return;

}


