// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$PrivateUseKeyValueTypeHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_PrivateUseKeyValueTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialTypeHandler.h"
#include "java.lang.String.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"

static android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler::pat;
// .method static constructor <clinit>()V
void android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler::static_cinit()
{
	
	android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler::pat = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("[a-zA-Z0-9]{3,8}(-[a-zA-Z0-9]{3,8})*")));
	return;

}
// .method private constructor <init>()V
android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler::KeyTypeData_S_PrivateUseKeyValueTypeHandler()
{
	
	android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler::(0x0);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/locale/KeyTypeData$PrivateUseKeyValueTypeHandler;)V
android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler::KeyTypeData_S_PrivateUseKeyValueTypeHandler(std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/locale/KeyTypeData$PrivateUseKeyValueTypeHandler;
	// 056    invoke-direct {p0}, Landroid/icu/impl/locale/KeyTypeData$PrivateUseKeyValueTypeHandler;-><init>()V
	return;

}
// .method isWellFormed(Ljava/lang/String;)Z
bool android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler::isWellFormed(std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "value"    # Ljava/lang/String;
	return android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler::pat->matcher(value)->matches();

}


