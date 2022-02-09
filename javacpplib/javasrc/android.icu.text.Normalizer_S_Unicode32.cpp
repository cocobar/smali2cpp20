// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$Unicode32.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_Unicode32.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

static android::icu::text::Normalizer_S_Unicode32::INSTANCE;
// .method static synthetic -get0()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::Normalizer_S_Unicode32::_get0()
{
	
	return android::icu::text::Normalizer_S_Unicode32::INSTANCE;

}
// .method static constructor <clinit>()V
void android::icu::text::Normalizer_S_Unicode32::static_cinit()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[:age=3.2:]")));
	android::icu::text::Normalizer_S_Unicode32::INSTANCE = cVar0->freeze();
	return;

}
// .method private constructor <init>()V
android::icu::text::Normalizer_S_Unicode32::Normalizer_S_Unicode32()
{
	
	// 056    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


