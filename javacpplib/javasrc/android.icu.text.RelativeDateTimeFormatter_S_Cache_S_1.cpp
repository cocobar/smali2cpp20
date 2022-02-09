// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Cache$1.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Cache_S_1.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Cache.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Loader.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/text/RelativeDateTimeFormatter$Cache;)V
android::icu::text::RelativeDateTimeFormatter_S_Cache_S_1::RelativeDateTimeFormatter_S_Cache_S_1(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Cache> this_S_1)
{
	
	//    .param p1, "this$1"    # Landroid/icu/text/RelativeDateTimeFormatter$Cache;
	this->this_S_1 = this_S_1;
	// 042    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeFormatterData;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData> android::icu::text::RelativeDateTimeFormatter_S_Cache_S_1::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Loader> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Loader>(locale);
	return cVar0->load();

}


