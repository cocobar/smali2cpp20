// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSetSpanner$CountMethod.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSetSpanner_S_CountMethod.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::UnicodeSetSpanner_S_CountMethod::_S_VALUES;
static android::icu::text::UnicodeSetSpanner_S_CountMethod::MIN_ELEMENTS;
static android::icu::text::UnicodeSetSpanner_S_CountMethod::WHOLE_SPAN;
// .method static constructor <clinit>()V
void android::icu::text::UnicodeSetSpanner_S_CountMethod::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> cVar2;
	std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::UnicodeSetSpanner_S_CountMethod>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::UnicodeSetSpanner_S_CountMethod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WHOLE_SPAN")), cVar1);
	android::icu::text::UnicodeSetSpanner_S_CountMethod::WHOLE_SPAN = cVar2;
	cVar3 = std::make_shared<android::icu::text::UnicodeSetSpanner_S_CountMethod>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MIN_ELEMENTS")), cVar0);
	android::icu::text::UnicodeSetSpanner_S_CountMethod::MIN_ELEMENTS = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::UnicodeSetSpanner_S_CountMethod>>>(0x2);
	cVar4[cVar1] = android::icu::text::UnicodeSetSpanner_S_CountMethod::WHOLE_SPAN;
	cVar4[cVar0] = android::icu::text::UnicodeSetSpanner_S_CountMethod::MIN_ELEMENTS;
	android::icu::text::UnicodeSetSpanner_S_CountMethod::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::UnicodeSetSpanner_S_CountMethod::UnicodeSetSpanner_S_CountMethod(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/UnicodeSetSpanner$CountMethod;
std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> android::icu::text::UnicodeSetSpanner_S_CountMethod::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::UnicodeSetSpanner_S_CountMethod(), name);
	cVar0->checkCast("android::icu::text::UnicodeSetSpanner_S_CountMethod");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/UnicodeSetSpanner$CountMethod;
std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> android::icu::text::UnicodeSetSpanner_S_CountMethod::values()
{
	
	return android::icu::text::UnicodeSetSpanner_S_CountMethod::_S_VALUES;

}


