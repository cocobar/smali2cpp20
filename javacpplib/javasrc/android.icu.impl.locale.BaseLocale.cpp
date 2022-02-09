// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\BaseLocale.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.BaseLocale_S_Cache.h"
#include "android.icu.impl.locale.BaseLocale_S_Key.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::locale::BaseLocale::CACHE;
static android::icu::impl::locale::BaseLocale::JDKIMPL = false;
static android::icu::impl::locale::BaseLocale::ROOT;
static android::icu::impl::locale::BaseLocale::SEP = std::make_shared<java::lang::String>("_");
// .method static constructor <clinit>()V
void android::icu::impl::locale::BaseLocale::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Cache> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::locale::BaseLocale_S_Cache>();
	android::icu::impl::locale::BaseLocale::CACHE = cVar0;
	android::icu::impl::locale::BaseLocale::ROOT = android::icu::impl::locale::BaseLocale::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::locale::BaseLocale::BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant)
{
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "script"    # Ljava/lang/String;
	//    .param p3, "region"    # Ljava/lang/String;
	//    .param p4, "variant"    # Ljava/lang/String;
	// 077    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_language = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_region = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_hash = 0x0;
	if ( !(language) )  
		goto label_cond_26;
	this->_language = android::icu::impl::locale::AsciiUtil::toLowerString(language)->intern();
label_cond_26:
	if ( !(script) )  
		goto label_cond_32;
	this->_script = android::icu::impl::locale::AsciiUtil::toTitleString(script)->intern();
label_cond_32:
	if ( !(region) )  
		goto label_cond_3e;
	this->_region = android::icu::impl::locale::AsciiUtil::toUpperString(region)->intern();
label_cond_3e:
	if ( !(variant) )  
		goto label_cond_4a;
	this->_variant = android::icu::impl::locale::AsciiUtil::toUpperString(variant)->intern();
label_cond_4a:
	return;

}
// .method synthetic constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/icu/impl/locale/BaseLocale;)V
android::icu::impl::locale::BaseLocale::BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant,std::shared_ptr<android::icu::impl::locale::BaseLocale> _this4)
{
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "script"    # Ljava/lang/String;
	//    .param p3, "region"    # Ljava/lang/String;
	//    .param p4, "variant"    # Ljava/lang/String;
	//    .param p5, "-this4"    # Landroid/icu/impl/locale/BaseLocale;
	android::icu::impl::locale::BaseLocale::(language, script, region, variant);
	return;

}
// .method public static getInstance(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/impl/locale/BaseLocale;
std::shared_ptr<android::icu::impl::locale::BaseLocale> android::icu::impl::locale::BaseLocale::getInstance(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> key;
	std::shared_ptr<android::icu::impl::locale::BaseLocale> baseLocale;
	
	//    .param p0, "language"    # Ljava/lang/String;
	//    .param p1, "script"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	//    .param p3, "variant"    # Ljava/lang/String;
	key = std::make_shared<android::icu::impl::locale::BaseLocale_S_Key>(language, script, region, variant);
	//    .local v1, "key":Landroid/icu/impl/locale/BaseLocale$Key;
	baseLocale = android::icu::impl::locale::BaseLocale::CACHE->get(key);
	baseLocale->checkCast("android::icu::impl::locale::BaseLocale");
	//    .local v0, "baseLocale":Landroid/icu/impl/locale/BaseLocale;
	return baseLocale;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::locale::BaseLocale::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::locale::BaseLocale> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 227    .line 90
label_cond_5:
	if ( obj->instanceOf("android::icu::impl::locale::BaseLocale") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = obj;
	other->checkCast("android::icu::impl::locale::BaseLocale");
	//    .local v0, "other":Landroid/icu/impl/locale/BaseLocale;
	if ( this->hashCode() != other->hashCode() )
		goto label_cond_3d;
	if ( !(this->_language->equals(other->_language)) )  
		goto label_cond_3d;
	if ( !(this->_script->equals(other->_script)) )  
		goto label_cond_3d;
	if ( !(this->_region->equals(other->_region)) )  
		goto label_cond_3d;
	cVar1 = this->_variant->equals(other->_variant);
label_cond_3d:
	return cVar1;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::BaseLocale::getLanguage()
{
	
	return this->_language;

}
// .method public getRegion()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::BaseLocale::getRegion()
{
	
	return this->_region;

}
// .method public getScript()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::BaseLocale::getScript()
{
	
	return this->_script;

}
// .method public getVariant()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::BaseLocale::getVariant()
{
	
	return this->_variant;

}
// .method public hashCode()I
int android::icu::impl::locale::BaseLocale::hashCode()
{
	
	int h;
	int i;
	
	h = this->_hash;
	//    .local v0, "h":I
	if ( h )     
		goto label_cond_5e;
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= this->_language->length() )
		goto label_cond_1a;
	h = (( h * 0x1f) + this->_language->charAt(i));
	i = ( i + 0x1);
	goto label_goto_5;
	// 384    .line 140
label_cond_1a:
	i = 0x0;
label_goto_1b:
	if ( i >= this->_script->length() )
		goto label_cond_30;
	h = (( h * 0x1f) + this->_script->charAt(i));
	i = ( i + 0x1);
	goto label_goto_1b;
	// 413    .line 143
label_cond_30:
	i = 0x0;
label_goto_31:
	if ( i >= this->_region->length() )
		goto label_cond_46;
	h = (( h * 0x1f) + this->_region->charAt(i));
	i = ( i + 0x1);
	goto label_goto_31;
	// 442    .line 146
label_cond_46:
	i = 0x0;
label_goto_47:
	if ( i >= this->_variant->length() )
		goto label_cond_5c;
	h = (( h * 0x1f) + this->_variant->charAt(i));
	i = ( i + 0x1);
	goto label_goto_47;
	// 471    .line 149
label_cond_5c:
	this->_hash = h;
	//    .end local v1    # "i":I
label_cond_5e:
	return h;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::BaseLocale::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	if ( this->_language->length() <= 0 )
		goto label_cond_18;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("language=")));
	buf->append(this->_language);
label_cond_18:
	if ( this->_script->length() <= 0 )
		goto label_cond_37;
	if ( buf->length() <= 0 )
		goto label_cond_2c;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_2c:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("script=")));
	buf->append(this->_script);
label_cond_37:
	if ( this->_region->length() <= 0 )
		goto label_cond_56;
	if ( buf->length() <= 0 )
		goto label_cond_4b;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_4b:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("region=")));
	buf->append(this->_region);
label_cond_56:
	if ( this->_variant->length() <= 0 )
		goto label_cond_75;
	if ( buf->length() <= 0 )
		goto label_cond_6a;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_6a:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("variant=")));
	buf->append(this->_variant);
label_cond_75:
	return buf->toString();

}


