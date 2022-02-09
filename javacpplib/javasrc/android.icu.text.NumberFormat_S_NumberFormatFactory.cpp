// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormat$NumberFormatFactory.smali
#include "java2ctype.h"
#include "android.icu.text.NumberFormat_S_NumberFormatFactory.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

static android::icu::text::NumberFormat_S_NumberFormatFactory::FORMAT_CURRENCY = 0x1;
static android::icu::text::NumberFormat_S_NumberFormatFactory::FORMAT_INTEGER = 0x4;
static android::icu::text::NumberFormat_S_NumberFormatFactory::FORMAT_NUMBER = 0x0;
static android::icu::text::NumberFormat_S_NumberFormatFactory::FORMAT_PERCENT = 0x2;
static android::icu::text::NumberFormat_S_NumberFormatFactory::FORMAT_SCIENTIFIC = 0x3;
// .method protected constructor <init>()V
android::icu::text::NumberFormat_S_NumberFormatFactory::NumberFormat_S_NumberFormatFactory()
{
	
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public createFormat(Landroid/icu/util/ULocale;I)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat_S_NumberFormatFactory::createFormat(std::shared_ptr<android::icu::util::ULocale> loc,int formatType)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "formatType"    # I
	return this->createFormat(loc->toLocale(), formatType);

}
// .method public createFormat(Ljava/util/Locale;I)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat_S_NumberFormatFactory::createFormat(std::shared_ptr<java::util::Locale> loc,int formatType)
{
	
	//    .param p1, "loc"    # Ljava/util/Locale;
	//    .param p2, "formatType"    # I
	return this->createFormat(android::icu::util::ULocale::forLocale(loc), formatType);

}
// .method public abstract getSupportedLocaleNames()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::NumberFormat_S_NumberFormatFactory::getSupportedLocaleNames()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 081        value = {
	// 082            "()",
	// 083            "Ljava/util/Set",
	// 084            "<",
	// 085            "Ljava/lang/String;",
	// 086            ">;"
	// 087        }
	// 088    .end annotation

}
// .method public visible()Z
bool android::icu::text::NumberFormat_S_NumberFormatFactory::visible()
{
	
	return 0x1;

}


