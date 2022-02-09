// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$RgKeyValueTypeHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_RgKeyValueTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialTypeHandler.h"
#include "java.lang.String.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"

static android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler::pat;
// .method static constructor <clinit>()V
void android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler::static_cinit()
{
	
	android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler::pat = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("([a-zA-Z]{2}|[0-9]{3})[zZ]{4}")));
	return;

}
// .method private constructor <init>()V
android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler::KeyTypeData_S_RgKeyValueTypeHandler()
{
	
	android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler::(0x0);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/locale/KeyTypeData$RgKeyValueTypeHandler;)V
android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler::KeyTypeData_S_RgKeyValueTypeHandler(std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/locale/KeyTypeData$RgKeyValueTypeHandler;
	// 056    invoke-direct {p0}, Landroid/icu/impl/locale/KeyTypeData$RgKeyValueTypeHandler;-><init>()V
	return;

}
// .method isWellFormed(Ljava/lang/String;)Z
bool android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler::isWellFormed(std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "value"    # Ljava/lang/String;
	return android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler::pat->matcher(value)->matches();

}


