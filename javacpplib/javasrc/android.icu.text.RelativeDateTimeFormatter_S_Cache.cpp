// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Cache_S_1.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Cache.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
android::icu::text::RelativeDateTimeFormatter_S_Cache::RelativeDateTimeFormatter_S_Cache()
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Cache_S_1> cVar0;
	
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Cache_S_1>(this);
	this->cache = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/RelativeDateTimeFormatter$Cache;)V
android::icu::text::RelativeDateTimeFormatter_S_Cache::RelativeDateTimeFormatter_S_Cache(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Cache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/RelativeDateTimeFormatter$Cache;
	// 063    invoke-direct {p0}, Landroid/icu/text/RelativeDateTimeFormatter$Cache;-><init>()V
	return;

}
// .method public get(Landroid/icu/util/ULocale;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeFormatterData;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData> android::icu::text::RelativeDateTimeFormatter_S_Cache::get(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "key":Ljava/lang/String;
	cVar0 = this->cache->getInstance(locale->toString(), locale);
	cVar0->checkCast("android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData");
	return cVar0;

}


