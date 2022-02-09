// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$SubdivisionKeyValueTypeHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_SubdivisionKeyValueTypeHandler.h"
#include "java.lang.String.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"

static android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler::pat;
// .method static constructor <clinit>()V
void android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler::static_cinit()
{
	
	android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler::pat = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("([a-zA-Z]{2}|[0-9]{3})")));
	return;

}
// .method private constructor <init>()V
android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler::KeyTypeData_S_SubdivisionKeyValueTypeHandler()
{
	
	android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler::(0x0);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/locale/KeyTypeData$SubdivisionKeyValueTypeHandler;)V
android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler::KeyTypeData_S_SubdivisionKeyValueTypeHandler(std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/locale/KeyTypeData$SubdivisionKeyValueTypeHandler;
	// 056    invoke-direct {p0}, Landroid/icu/impl/locale/KeyTypeData$SubdivisionKeyValueTypeHandler;-><init>()V
	return;

}
// .method isWellFormed(Ljava/lang/String;)Z
bool android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler::isWellFormed(std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "value"    # Ljava/lang/String;
	return android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler::pat->matcher(value)->matches();

}


