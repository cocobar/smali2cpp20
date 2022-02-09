// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$CodepointsTypeHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_CodepointsTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialTypeHandler.h"
#include "java.lang.String.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"

static android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler::pat;
// .method static constructor <clinit>()V
void android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler::static_cinit()
{
	
	android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler::pat = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("[0-9a-fA-F]{4,6}(-[0-9a-fA-F]{4,6})*")));
	return;

}
// .method private constructor <init>()V
android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler::KeyTypeData_S_CodepointsTypeHandler()
{
	
	android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler::(0x0);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/locale/KeyTypeData$CodepointsTypeHandler;)V
android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler::KeyTypeData_S_CodepointsTypeHandler(std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/locale/KeyTypeData$CodepointsTypeHandler;
	// 056    invoke-direct {p0}, Landroid/icu/impl/locale/KeyTypeData$CodepointsTypeHandler;-><init>()V
	return;

}
// .method isWellFormed(Ljava/lang/String;)Z
bool android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler::isWellFormed(std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "value"    # Ljava/lang/String;
	return android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler::pat->matcher(value)->matches();

}


