// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\BaseLocale.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.util.locale.BaseLocale_S_Cache.h"
#include "sun.util.locale.BaseLocale_S_Key.h"
#include "sun.util.locale.BaseLocale.h"
#include "sun.util.locale.LocaleUtils.h"

static sun::util::locale::BaseLocale::CACHE;
static sun::util::locale::BaseLocale::SEP = std::make_shared<java::lang::String>("_");
// .method static constructor <clinit>()V
void sun::util::locale::BaseLocale::static_cinit()
{
	
	std::shared_ptr<sun::util::locale::BaseLocale_S_Cache> cVar0;
	
	cVar0 = std::make_shared<sun::util::locale::BaseLocale_S_Cache>();
	sun::util::locale::BaseLocale::CACHE = cVar0;
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::util::locale::BaseLocale::BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> region)
{
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	// 056    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hash = 0x0;
	this->language = language;
	this->script = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->region = region;
	this->variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
sun::util::locale::BaseLocale::BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "script"    # Ljava/lang/String;
	//    .param p3, "region"    # Ljava/lang/String;
	//    .param p4, "variant"    # Ljava/lang/String;
	// 092    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hash = 0x0;
	if ( !(language) )  
		goto label_cond_33;
	cVar0 = sun::util::locale::LocaleUtils::toLowerString(language)->intern();
label_goto_10:
	this->language = cVar0;
	if ( !(script) )  
		goto label_cond_37;
	cVar1 = sun::util::locale::LocaleUtils::toTitleString(script)->intern();
label_goto_1c:
	this->script = cVar1;
	if ( !(region) )  
		goto label_cond_3b;
	cVar2 = sun::util::locale::LocaleUtils::toUpperString(region)->intern();
label_goto_28:
	this->region = cVar2;
	if ( !(variant) )  
		goto label_cond_3f;
	cVar3 = variant->intern();
label_goto_30:
	this->variant = cVar3;
	return;
	// 154    .line 59
label_cond_33:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_10;
	// 160    .line 60
label_cond_37:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_1c;
	// 166    .line 61
label_cond_3b:
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_28;
	// 172    .line 62
label_cond_3f:
	cVar3 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_30;

}
// .method synthetic constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lsun/util/locale/BaseLocale;)V
sun::util::locale::BaseLocale::BaseLocale(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant,std::shared_ptr<sun::util::locale::BaseLocale> _this4)
{
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "script"    # Ljava/lang/String;
	//    .param p3, "region"    # Ljava/lang/String;
	//    .param p4, "variant"    # Ljava/lang/String;
	//    .param p5, "-this4"    # Lsun/util/locale/BaseLocale;
	sun::util::locale::BaseLocale::(language, script, region, variant);
	return;

}
// .method public static createInstance(Ljava/lang/String;Ljava/lang/String;)Lsun/util/locale/BaseLocale;
std::shared_ptr<sun::util::locale::BaseLocale> sun::util::locale::BaseLocale::createInstance(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<sun::util::locale::BaseLocale> base;
	std::shared_ptr<sun::util::locale::BaseLocale_S_Key> cVar0;
	
	//    .param p0, "language"    # Ljava/lang/String;
	//    .param p1, "region"    # Ljava/lang/String;
	base = std::make_shared<sun::util::locale::BaseLocale>(language, region);
	//    .local v0, "base":Lsun/util/locale/BaseLocale;
	cVar0 = std::make_shared<sun::util::locale::BaseLocale_S_Key>(language, region, 0x0);
	sun::util::locale::BaseLocale::CACHE->put(cVar0, base);
	return base;

}
// .method public static getInstance(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lsun/util/locale/BaseLocale;
std::shared_ptr<sun::util::locale::BaseLocale> sun::util::locale::BaseLocale::getInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<sun::util::locale::BaseLocale_S_Key> key;
	std::shared_ptr<sun::util::locale::BaseLocale> baseLocale;
	
	//    .param p0, "language"    # Ljava/lang/String;
	//    .param p1, "script"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	//    .param p3, "variant"    # Ljava/lang/String;
	if ( !(cVar0) )  
		goto label_cond_e;
	if ( !(sun::util::locale::LocaleUtils::caseIgnoreMatch(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("he")))) )  
		goto label_cond_1c;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("iw"));
label_cond_e:
label_goto_e:
	key = std::make_shared<sun::util::locale::BaseLocale_S_Key>(cVar0, script, region, variant);
	//    .local v1, "key":Lsun/util/locale/BaseLocale$Key;
	baseLocale = sun::util::locale::BaseLocale::CACHE->get(key);
	baseLocale->checkCast("sun::util::locale::BaseLocale");
	//    .local v0, "baseLocale":Lsun/util/locale/BaseLocale;
	return baseLocale;
	// 264    .line 79
	// 265    .end local v0    # "baseLocale":Lsun/util/locale/BaseLocale;
	// 266    .end local v1    # "key":Lsun/util/locale/BaseLocale$Key;
label_cond_1c:
	if ( !(sun::util::locale::LocaleUtils::caseIgnoreMatch(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("yi")))) )  
		goto label_cond_29;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("ji"));
	goto label_goto_e;
	// 281    .line 81
label_cond_29:
	if ( !(sun::util::locale::LocaleUtils::caseIgnoreMatch(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("id")))) )  
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("in"));
	goto label_goto_e;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::util::locale::BaseLocale::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::util::locale::BaseLocale> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 314    .line 112
label_cond_5:
	if ( obj->instanceOf("sun::util::locale::BaseLocale") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = obj;
	other->checkCast("sun::util::locale::BaseLocale");
	//    .local v0, "other":Lsun/util/locale/BaseLocale;
	if ( this->language != other->language )
		goto label_cond_28;
	if ( this->script != other->script )
		goto label_cond_28;
	if ( this->region != other->region )
		goto label_cond_28;
	if ( this->variant != other->variant )
		goto label_cond_26;
label_goto_25:
	return cVar0;
label_cond_26:
	cVar0 = cVar1;
	goto label_goto_25;
label_cond_28:
	cVar0 = cVar1;
	goto label_goto_25;

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::BaseLocale::getLanguage()
{
	
	return this->language;

}
// .method public getRegion()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::BaseLocale::getRegion()
{
	
	return this->region;

}
// .method public getScript()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::BaseLocale::getScript()
{
	
	return this->script;

}
// .method public getVariant()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::BaseLocale::getVariant()
{
	
	return this->variant;

}
// .method public hashCode()I
int sun::util::locale::BaseLocale::hashCode()
{
	
	int h;
	
	h = this->hash;
	//    .local v0, "h":I
	if ( h )     
		goto label_cond_2a;
	h = (( (( (( this->language->hashCode() * 0x1f) + this->script->hashCode()) * 0x1f) + this->region->hashCode()) * 0x1f) + this->variant->hashCode());
	this->hash = h;
label_cond_2a:
	return h;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::locale::BaseLocale::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	if ( this->language->length() <= 0 )
		goto label_cond_18;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("language=")));
	buf->append(this->language);
label_cond_18:
	if ( this->script->length() <= 0 )
		goto label_cond_37;
	if ( buf->length() <= 0 )
		goto label_cond_2c;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_2c:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("script=")));
	buf->append(this->script);
label_cond_37:
	if ( this->region->length() <= 0 )
		goto label_cond_56;
	if ( buf->length() <= 0 )
		goto label_cond_4b;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_4b:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("region=")));
	buf->append(this->region);
label_cond_56:
	if ( this->variant->length() <= 0 )
		goto label_cond_75;
	if ( buf->length() <= 0 )
		goto label_cond_6a;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")));
label_cond_6a:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("variant=")));
	buf->append(this->variant);
label_cond_75:
	return buf->toString();

}


