// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$SpecialTypeHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialTypeHandler.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler::KeyTypeData_S_SpecialTypeHandler()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/locale/KeyTypeData$SpecialTypeHandler;)V
android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler::KeyTypeData_S_SpecialTypeHandler(std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/locale/KeyTypeData$SpecialTypeHandler;
	// 033    invoke-direct {p0}, Landroid/icu/impl/locale/KeyTypeData$SpecialTypeHandler;-><init>()V
	return;

}
// .method canonicalize(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler::canonicalize(std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "value"    # Ljava/lang/String;
	return android::icu::impl::locale::AsciiUtil::toLowerString(value);

}


