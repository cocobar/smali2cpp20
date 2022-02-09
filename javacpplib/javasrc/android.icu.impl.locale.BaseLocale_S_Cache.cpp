// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\BaseLocale$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.BaseLocale_S_Cache.h"
#include "android.icu.impl.locale.BaseLocale_S_Key.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "java.lang.String.h"

// .method public constructor <init>()V
android::icu::impl::locale::BaseLocale_S_Cache::BaseLocale_S_Cache()
{
	
	// 033    invoke-direct {p0}, Landroid/icu/impl/locale/LocaleObjectCache;-><init>()V
	return;

}
// .method protected createObject(Landroid/icu/impl/locale/BaseLocale$Key;)Landroid/icu/impl/locale/BaseLocale;
std::shared_ptr<android::icu::impl::locale::BaseLocale> android::icu::impl::locale::BaseLocale_S_Cache::createObject(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> key)
{
	
	std::shared_ptr<android::icu::impl::locale::BaseLocale> cVar0;
	
	//    .param p1, "key"    # Landroid/icu/impl/locale/BaseLocale$Key;
	cVar0 = std::make_shared<android::icu::impl::locale::BaseLocale>(android::icu::impl::locale::BaseLocale_S_Key::-get0(key), android::icu::impl::locale::BaseLocale_S_Key::-get2(key), android::icu::impl::locale::BaseLocale_S_Key::-get1(key), android::icu::impl::locale::BaseLocale_S_Key::-get3(key), 0x0);
	return cVar0;

}
// .method protected normalizeKey(Landroid/icu/impl/locale/BaseLocale$Key;)Landroid/icu/impl/locale/BaseLocale$Key;
std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> android::icu::impl::locale::BaseLocale_S_Cache::normalizeKey(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> key)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/locale/BaseLocale$Key;
	return android::icu::impl::locale::BaseLocale_S_Key::normalize(key);

}


