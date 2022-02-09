// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder$ConfusabledataBuilder$SPUStringComparator.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator.h"
#include "java.lang.String.h"

static android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator::INSTANCE;
// .method static constructor <clinit>()V
void android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator::static_cinit()
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator>();
	android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator::INSTANCE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator()
{
	
	// 055    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public compare(Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;)I
int android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator::compare(std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> sL,std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> sR)
{
	
	int lenL;
	int lenR;
	
	//    .param p1, "sL"    # Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	//    .param p2, "sR"    # Landroid/icu/text/SpoofChecker$Builder$ConfusabledataBuilder$SPUString;
	lenL = sL->fStr->length();
	//    .local v0, "lenL":I
	lenR = sR->fStr->length();
	//    .local v1, "lenR":I
	if ( lenL >= lenR )
		goto label_cond_10;
	return -0x1;
	// 092    .line 1006
label_cond_10:
	if ( lenL <= lenR )
		goto label_cond_14;
	return 0x1;
	// 101    .line 1009
label_cond_14:
	return sL->fStr->compareTo(sR->fStr);

}


