// CPP L:\smali2cpp20\x64\Release\out\sun\util\locale\BaseLocale$Key.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.ref.SoftReference.h"
#include "sun.util.locale.BaseLocale_S_Key.h"
#include "sun.util.locale.LocaleUtils.h"

static sun::util::locale::BaseLocale_S_Key::_assertionsDisabled;
// .method static synthetic -get0(Lsun/util/locale/BaseLocale$Key;)Ljava/lang/ref/SoftReference;
std::shared_ptr<java::lang::ref::SoftReference> sun::util::locale::BaseLocale_S_Key::_get0(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this)
{
	
	//    .param p0, "-this"    # Lsun/util/locale/BaseLocale$Key;
	return _this->lang;

}
// .method static synthetic -get1(Lsun/util/locale/BaseLocale$Key;)Ljava/lang/ref/SoftReference;
std::shared_ptr<java::lang::ref::SoftReference> sun::util::locale::BaseLocale_S_Key::_get1(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this)
{
	
	//    .param p0, "-this"    # Lsun/util/locale/BaseLocale$Key;
	return _this->regn;

}
// .method static synthetic -get2(Lsun/util/locale/BaseLocale$Key;)Ljava/lang/ref/SoftReference;
std::shared_ptr<java::lang::ref::SoftReference> sun::util::locale::BaseLocale_S_Key::_get2(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this)
{
	
	//    .param p0, "-this"    # Lsun/util/locale/BaseLocale$Key;
	return _this->scrt;

}
// .method static synthetic -get3(Lsun/util/locale/BaseLocale$Key;)Ljava/lang/ref/SoftReference;
std::shared_ptr<java::lang::ref::SoftReference> sun::util::locale::BaseLocale_S_Key::_get3(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this)
{
	
	//    .param p0, "-this"    # Lsun/util/locale/BaseLocale$Key;
	return _this->vart;

}
// .method static constructor <clinit>()V
void sun::util::locale::BaseLocale_S_Key::static_cinit()
{
	
	sun::util::locale::BaseLocale_S_Key::_assertionsDisabled = ( sun::util::locale::BaseLocale_S_Key()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::util::locale::BaseLocale_S_Key::BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::ref::SoftReference> cVar1;
	std::shared_ptr<java::lang::ref::SoftReference> cVar2;
	std::shared_ptr<java::lang::ref::SoftReference> cVar3;
	std::shared_ptr<java::lang::ref::SoftReference> cVar4;
	int h;
	int i;
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	// 137    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( sun::util::locale::BaseLocale_S_Key::_assertionsDisabled )     
		goto label_cond_19;
	if ( language->intern() != language )
		goto label_cond_13;
	if ( region->intern() == region )
		goto label_cond_19;
label_cond_13:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 165    .line 183
label_cond_19:
	cVar1 = std::make_shared<java::lang::ref::SoftReference>(language);
	this->lang = cVar1;
	cVar2 = std::make_shared<java::lang::ref::SoftReference>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	this->scrt = cVar2;
	cVar3 = std::make_shared<java::lang::ref::SoftReference>(region);
	this->regn = cVar3;
	cVar4 = std::make_shared<java::lang::ref::SoftReference>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	this->vart = cVar4;
	this->normalized = 0x1;
	h = language->hashCode();
	//    .local v0, "h":I
	if ( region == std::make_shared<java::lang::String>(std::make_shared<char[]>("")) )
		goto label_cond_5d;
	//    .local v2, "len":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_4c:
	if ( i >= region->length() )
		goto label_cond_5d;
	h = (( h * 0x1f) + sun::util::locale::LocaleUtils::toLower(region->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_4c;
	// 245    .line 196
	// 246    .end local v1    # "i":I
	// 247    .end local v2    # "len":I
label_cond_5d:
	this->hash = h;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
sun::util::locale::BaseLocale_S_Key::BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant)
{
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "script"    # Ljava/lang/String;
	//    .param p3, "region"    # Ljava/lang/String;
	//    .param p4, "variant"    # Ljava/lang/String;
	sun::util::locale::BaseLocale_S_Key::(language, script, region, variant, 0x0);
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
sun::util::locale::BaseLocale_S_Key::BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant,bool normalized)
{
	
	int h;
	std::shared_ptr<java::lang::ref::SoftReference> cVar0;
	int i;
	std::shared_ptr<java::lang::ref::SoftReference> cVar2;
	std::shared_ptr<java::lang::ref::SoftReference> cVar4;
	std::shared_ptr<java::lang::ref::SoftReference> cVar6;
	std::shared_ptr<java::lang::ref::SoftReference> cVar7;
	std::shared_ptr<java::lang::ref::SoftReference> cVar5;
	std::shared_ptr<java::lang::ref::SoftReference> cVar3;
	std::shared_ptr<java::lang::ref::SoftReference> cVar1;
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "script"    # Ljava/lang/String;
	//    .param p3, "region"    # Ljava/lang/String;
	//    .param p4, "variant"    # Ljava/lang/String;
	//    .param p5, "normalized"    # Z
	// 292    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	h = 0x0;
	//    .local v0, "h":I
	if ( !(language) )  
		goto label_cond_23;
	cVar0 = std::make_shared<java::lang::ref::SoftReference>(language);
	this->lang = cVar0;
	//    .local v2, "len":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_12:
	if ( i >= language->length() )
		goto label_cond_2d;
	h = (( h * 0x1f) + sun::util::locale::LocaleUtils::toLower(language->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_12;
	// 339    .line 213
	// 340    .end local v1    # "i":I
	// 341    .end local v2    # "len":I
label_cond_23:
	cVar1 = std::make_shared<java::lang::ref::SoftReference>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	this->lang = cVar1;
label_cond_2d:
	if ( !(script) )  
		goto label_cond_4c;
	cVar2 = std::make_shared<java::lang::ref::SoftReference>(script);
	this->scrt = cVar2;
	//    .restart local v2    # "len":I
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_3b:
	if ( i >= script->length() )
		goto label_cond_56;
	h = (( h * 0x1f) + sun::util::locale::LocaleUtils::toLower(script->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_3b;
	// 393    .line 222
	// 394    .end local v1    # "i":I
	// 395    .end local v2    # "len":I
label_cond_4c:
	cVar3 = std::make_shared<java::lang::ref::SoftReference>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	this->scrt = cVar3;
label_cond_56:
	if ( !(region) )  
		goto label_cond_75;
	cVar4 = std::make_shared<java::lang::ref::SoftReference>(region);
	this->regn = cVar4;
	//    .restart local v2    # "len":I
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_64:
	if ( i >= region->length() )
		goto label_cond_7f;
	h = (( h * 0x1f) + sun::util::locale::LocaleUtils::toLower(region->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_64;
	// 447    .line 231
	// 448    .end local v1    # "i":I
	// 449    .end local v2    # "len":I
label_cond_75:
	cVar5 = std::make_shared<java::lang::ref::SoftReference>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	this->regn = cVar5;
label_cond_7f:
	if ( !(variant) )  
		goto label_cond_9a;
	cVar6 = std::make_shared<java::lang::ref::SoftReference>(variant);
	this->vart = cVar6;
	//    .restart local v2    # "len":I
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_8d:
	if ( i >= variant->length() )
		goto label_cond_a4;
	h = (( h * 0x1f) + variant->charAt(i));
	i = ( i + 0x1);
	goto label_goto_8d;
	// 497    .line 240
	// 498    .end local v1    # "i":I
	// 499    .end local v2    # "len":I
label_cond_9a:
	cVar7 = std::make_shared<java::lang::ref::SoftReference>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	this->vart = cVar7;
label_cond_a4:
	this->hash = h;
	this->normalized = normalized;
	return;

}
// .method synthetic constructor <init>(Ljava/lang/String;Ljava/lang/String;Lsun/util/locale/BaseLocale$Key;)V
sun::util::locale::BaseLocale_S_Key::BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> region,std::shared_ptr<sun::util::locale::BaseLocale_S_Key> _this2)
{
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	//    .param p3, "-this2"    # Lsun/util/locale/BaseLocale$Key;
	sun::util::locale::BaseLocale_S_Key::(language, region);
	return;

}
// .method public static normalize(Lsun/util/locale/BaseLocale$Key;)Lsun/util/locale/BaseLocale$Key;
std::shared_ptr<sun::util::locale::BaseLocale_S_Key> sun::util::locale::BaseLocale_S_Key::normalize(std::shared_ptr<sun::util::locale::BaseLocale_S_Key> key)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<sun::util::locale::BaseLocale_S_Key> cVar4;
	
	//    .param p0, "key"    # Lsun/util/locale/BaseLocale$Key;
	if ( !(key->normalized) )  
		goto label_cond_5;
	return key;
	// 545    .line 285
label_cond_5:
	cVar0 = key->lang->get();
	cVar0->checkCast("java::lang::String");
	//    .local v1, "lang":Ljava/lang/String;
	cVar1 = key->scrt->get();
	cVar1->checkCast("java::lang::String");
	//    .local v2, "scrt":Ljava/lang/String;
	cVar2 = key->regn->get();
	cVar2->checkCast("java::lang::String");
	//    .local v3, "regn":Ljava/lang/String;
	cVar3 = key->vart->get();
	cVar3->checkCast("java::lang::String");
	//    .local v4, "vart":Ljava/lang/String;
	cVar4 = std::make_shared<sun::util::locale::BaseLocale_S_Key>(sun::util::locale::LocaleUtils::toLowerString(cVar0)->intern(), sun::util::locale::LocaleUtils::toTitleString(cVar1)->intern(), sun::util::locale::LocaleUtils::toUpperString(cVar2)->intern(), cVar3->intern(), 0x1);
	return cVar4;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::util::locale::BaseLocale_S_Key::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	std::shared_ptr<sun::util::locale::BaseLocale_S_Key> cVar1;
	std::shared_ptr<java::lang::String> tl;
	std::shared_ptr<sun::util::locale::BaseLocale_S_Key> cVar2;
	std::shared_ptr<java::lang::String> ol;
	std::shared_ptr<java::lang::String> ts;
	std::shared_ptr<sun::util::locale::BaseLocale_S_Key> cVar3;
	std::shared_ptr<java::lang::String> os;
	std::shared_ptr<java::lang::String> tr;
	std::shared_ptr<sun::util::locale::BaseLocale_S_Key> cVar4;
	std::shared_ptr<java::lang::String> or;
	std::shared_ptr<java::lang::String> tv;
	std::shared_ptr<java::lang::String> ov;
	bool cVar5;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 641    .line 252
label_cond_5:
	if ( !(obj->instanceOf("sun::util::locale::BaseLocale_S_Key")) )  
		goto label_cond_84;
	cVar1 = obj;
	cVar1->checkCast("sun::util::locale::BaseLocale_S_Key");
	if ( this->hash != cVar1->hash )
		goto label_cond_84;
	tl = this->lang->get();
	tl->checkCast("java::lang::String");
	//    .local v4, "tl":Ljava/lang/String;
	cVar2 = obj;
	cVar2->checkCast("sun::util::locale::BaseLocale_S_Key");
	ol = cVar2->lang->get();
	ol->checkCast("java::lang::String");
	//    .local v0, "ol":Ljava/lang/String;
	if ( !(tl) )  
		goto label_cond_84;
	if ( !(ol) )  
		goto label_cond_84;
	if ( !(sun::util::locale::LocaleUtils::caseIgnoreMatch(ol, tl)) )  
		goto label_cond_84;
	ts = this->scrt->get();
	ts->checkCast("java::lang::String");
	//    .local v6, "ts":Ljava/lang/String;
	cVar3 = obj;
	cVar3->checkCast("sun::util::locale::BaseLocale_S_Key");
	os = cVar3->scrt->get();
	os->checkCast("java::lang::String");
	//    .local v2, "os":Ljava/lang/String;
	if ( !(ts) )  
		goto label_cond_84;
	if ( !(os) )  
		goto label_cond_84;
	if ( !(sun::util::locale::LocaleUtils::caseIgnoreMatch(os, ts)) )  
		goto label_cond_84;
	tr = this->regn->get();
	tr->checkCast("java::lang::String");
	//    .local v5, "tr":Ljava/lang/String;
	cVar4 = obj;
	cVar4->checkCast("sun::util::locale::BaseLocale_S_Key");
	or = cVar4->regn->get();
	or->checkCast("java::lang::String");
	//    .local v1, "or":Ljava/lang/String;
	if ( !(tr) )  
		goto label_cond_84;
	if ( !(or) )  
		goto label_cond_84;
	if ( !(sun::util::locale::LocaleUtils::caseIgnoreMatch(or, tr)) )  
		goto label_cond_84;
	tv = this->vart->get();
	tv->checkCast("java::lang::String");
	//    .local v7, "tv":Ljava/lang/String;
	obj->checkCast("sun::util::locale::BaseLocale_S_Key");
	//    .end local p1    # "obj":Ljava/lang/Object;
	ov = obj->vart->get();
	ov->checkCast("java::lang::String");
	//    .local v3, "ov":Ljava/lang/String;
	if ( !(ov) )  
		goto label_cond_82;
	cVar5 = ov->equals(tv);
label_goto_81:
	return cVar5;
label_cond_82:
	cVar5 = cVar0;
	goto label_goto_81;
	// 806    .line 272
	// 807    .end local v0    # "ol":Ljava/lang/String;
	// 808    .end local v1    # "or":Ljava/lang/String;
	// 809    .end local v2    # "os":Ljava/lang/String;
	// 810    .end local v3    # "ov":Ljava/lang/String;
	// 811    .end local v4    # "tl":Ljava/lang/String;
	// 812    .end local v5    # "tr":Ljava/lang/String;
	// 813    .end local v6    # "ts":Ljava/lang/String;
	// 814    .end local v7    # "tv":Ljava/lang/String;
	// 815    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_84:
	return cVar0;

}
// .method public hashCode()I
int sun::util::locale::BaseLocale_S_Key::hashCode()
{
	
	return this->hash;

}


