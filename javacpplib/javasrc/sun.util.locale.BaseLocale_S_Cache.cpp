// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\BaseLocale$Cache.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.ref.SoftReference.h"
#include "sun.util.locale.BaseLocale_S_Cache.h"
#include "sun.util.locale.BaseLocale_S_Key.h"
#include "sun.util.locale.BaseLocale.h"

static sun::util::locale::BaseLocale_S_Cache::_assertionsDisabled;
// .method static constructor <clinit>()V
void sun::util::locale::BaseLocale_S_Cache::static_cinit()
{
	
	sun::util::locale::BaseLocale_S_Cache::_assertionsDisabled = ( sun::util::locale::BaseLocale_S_Cache()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
sun::util::locale::BaseLocale_S_Cache::BaseLocale_S_Cache()
{
	
	// 055    invoke-direct {p0}, Lsun/util/locale/LocaleObjectCache;-><init>()V
	return;

}
// .method protected createObject(Lsun/util/locale/BaseLocale$Key;)Lsun/util/locale/BaseLocale;
std::shared_ptr<sun::util::locale::BaseLocale> sun::util::locale::BaseLocale_S_Cache::createObject(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> key)
{
	
	std::shared_ptr<sun::util::locale::BaseLocale> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<java::lang::String> cVar4;
	
	//    .param p1, "key"    # Lsun/util/locale/BaseLocale$Key;
	cVar1 = sun::util::locale::BaseLocale_S_Key::-get0(key)->get();
	cVar1->checkCast("java::lang::String");
	cVar2 = sun::util::locale::BaseLocale_S_Key::-get2(key)->get();
	cVar2->checkCast("java::lang::String");
	cVar3 = sun::util::locale::BaseLocale_S_Key::-get1(key)->get();
	cVar3->checkCast("java::lang::String");
	cVar4 = sun::util::locale::BaseLocale_S_Key::-get3(key)->get();
	cVar4->checkCast("java::lang::String");
	cVar0 = std::make_shared<sun::util::locale::BaseLocale>(cVar1, cVar2, cVar3, cVar4, 0x0);
	return cVar0;

}
// .method protected normalizeKey(Lsun/util/locale/BaseLocale$Key;)Lsun/util/locale/BaseLocale$Key;
std::shared_ptr<sun::util::locale::BaseLocale_S_Key> sun::util::locale::BaseLocale_S_Cache::normalizeKey(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> key)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "key"    # Lsun/util/locale/BaseLocale$Key;
	if ( sun::util::locale::BaseLocale_S_Cache::_assertionsDisabled )     
		goto label_cond_32;
	if ( !(sun::util::locale::BaseLocale_S_Key::-get0(key)->get()) )  
		goto label_cond_18;
	if ( sun::util::locale::BaseLocale_S_Key::-get2(key)->get() )     
		goto label_cond_1e;
label_cond_18:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 187    .line 303
label_cond_1e:
	if ( !(sun::util::locale::BaseLocale_S_Key::-get1(key)->get()) )  
		goto label_cond_18;
	if ( !(sun::util::locale::BaseLocale_S_Key::-get3(key)->get()) )  
		goto label_cond_18;
label_cond_32:
	return sun::util::locale::BaseLocale_S_Key::normalize(key);

}


