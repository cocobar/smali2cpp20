// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\BaseLocale$Key.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.BaseLocale_S_Key.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method static synthetic -get0(Landroid/icu/impl/locale/BaseLocale$Key;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::BaseLocale_S_Key::_get0(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/locale/BaseLocale$Key;
	return _this->_lang;

}
// .method static synthetic -get1(Landroid/icu/impl/locale/BaseLocale$Key;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::BaseLocale_S_Key::_get1(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/locale/BaseLocale$Key;
	return _this->_regn;

}
// .method static synthetic -get2(Landroid/icu/impl/locale/BaseLocale$Key;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::BaseLocale_S_Key::_get2(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/locale/BaseLocale$Key;
	return _this->_scrt;

}
// .method static synthetic -get3(Landroid/icu/impl/locale/BaseLocale$Key;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::BaseLocale_S_Key::_get3(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/locale/BaseLocale$Key;
	return _this->_vart;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::locale::BaseLocale_S_Key::BaseLocale_S_Key(std::shared_ptr<java::lang::String> language,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variant)
{
	
	//    .param p1, "language"    # Ljava/lang/String;
	//    .param p2, "script"    # Ljava/lang/String;
	//    .param p3, "region"    # Ljava/lang/String;
	//    .param p4, "variant"    # Ljava/lang/String;
	// 092    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_lang = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_scrt = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_regn = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->_vart = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	if ( !(language) )  
		goto label_cond_1b;
	this->_lang = language;
label_cond_1b:
	if ( !(script) )  
		goto label_cond_1f;
	this->_scrt = script;
label_cond_1f:
	if ( !(region) )  
		goto label_cond_23;
	this->_regn = region;
label_cond_23:
	if ( !(variant) )  
		goto label_cond_27;
	this->_vart = variant;
label_cond_27:
	return;

}
// .method public static normalize(Landroid/icu/impl/locale/BaseLocale$Key;)Landroid/icu/impl/locale/BaseLocale$Key;
std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> android::icu::impl::locale::BaseLocale_S_Key::normalize(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> key)
{
	
	std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> cVar0;
	
	//    .param p0, "key"    # Landroid/icu/impl/locale/BaseLocale$Key;
	//    .local v0, "lang":Ljava/lang/String;
	//    .local v2, "scrt":Ljava/lang/String;
	//    .local v1, "regn":Ljava/lang/String;
	//    .local v3, "vart":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::locale::BaseLocale_S_Key>(android::icu::impl::locale::AsciiUtil::toLowerString(key->_lang)->intern(), android::icu::impl::locale::AsciiUtil::toTitleString(key->_scrt)->intern(), android::icu::impl::locale::AsciiUtil::toUpperString(key->_regn)->intern(), android::icu::impl::locale::AsciiUtil::toUpperString(key->_vart)->intern());
	return cVar0;

}
// .method public compareTo(Landroid/icu/impl/locale/BaseLocale$Key;)I
int android::icu::impl::locale::BaseLocale_S_Key::compareTo(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> other)
{
	
	int res;
	
	//    .param p1, "other"    # Landroid/icu/impl/locale/BaseLocale$Key;
	res = android::icu::impl::locale::AsciiUtil::caseIgnoreCompare(this->_lang, other->_lang);
	//    .local v0, "res":I
	if ( res )     
		goto label_cond_26;
	res = android::icu::impl::locale::AsciiUtil::caseIgnoreCompare(this->_scrt, other->_scrt);
	if ( res )     
		goto label_cond_26;
	res = android::icu::impl::locale::AsciiUtil::caseIgnoreCompare(this->_regn, other->_regn);
	if ( res )     
		goto label_cond_26;
label_cond_26:
	return res;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::locale::BaseLocale_S_Key::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> cVar0;
	std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> cVar1;
	std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> cVar2;
	bool cVar3;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this == obj )
		goto label_cond_38;
	if ( !(obj->instanceOf("android::icu::impl::locale::BaseLocale_S_Key")) )  
		goto label_cond_3a;
	cVar0 = obj;
	cVar0->checkCast("android::icu::impl::locale::BaseLocale_S_Key");
	if ( !(android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(cVar0->_lang, this->_lang)) )  
		goto label_cond_3a;
	cVar1 = obj;
	cVar1->checkCast("android::icu::impl::locale::BaseLocale_S_Key");
	if ( !(android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(cVar1->_scrt, this->_scrt)) )  
		goto label_cond_3a;
	cVar2 = obj;
	cVar2->checkCast("android::icu::impl::locale::BaseLocale_S_Key");
	if ( !(android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(cVar2->_regn, this->_regn)) )  
		goto label_cond_3a;
	obj->checkCast("android::icu::impl::locale::BaseLocale_S_Key");
	//    .end local p1    # "obj":Ljava/lang/Object;
	cVar3 = android::icu::impl::locale::AsciiUtil::caseIgnoreMatch(obj->_vart, this->_vart);
label_goto_37:
	return cVar3;
	// 356    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_38:
	cVar3 = 0x1;
	goto label_goto_37;
	// 362    .line 188
label_cond_3a:
	cVar3 = 0x0;
	goto label_goto_37;

}
// .method public hashCode()I
int android::icu::impl::locale::BaseLocale_S_Key::hashCode()
{
	
	int h;
	int i;
	
	h = this->_hash;
	//    .local v0, "h":I
	if ( h )     
		goto label_cond_6e;
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= this->_lang->length() )
		goto label_cond_1e;
	h = (( h * 0x1f) + android::icu::impl::locale::AsciiUtil::toLower(this->_lang->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_5;
	// 413    .line 222
label_cond_1e:
	i = 0x0;
label_goto_1f:
	if ( i >= this->_scrt->length() )
		goto label_cond_38;
	h = (( h * 0x1f) + android::icu::impl::locale::AsciiUtil::toLower(this->_scrt->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_1f;
	// 446    .line 225
label_cond_38:
	i = 0x0;
label_goto_39:
	if ( i >= this->_regn->length() )
		goto label_cond_52;
	h = (( h * 0x1f) + android::icu::impl::locale::AsciiUtil::toLower(this->_regn->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_39;
	// 479    .line 228
label_cond_52:
	i = 0x0;
label_goto_53:
	if ( i >= this->_vart->length() )
		goto label_cond_6c;
	h = (( h * 0x1f) + android::icu::impl::locale::AsciiUtil::toLower(this->_vart->charAt(i)));
	i = ( i + 0x1);
	goto label_goto_53;
	// 512    .line 235
label_cond_6c:
	this->_hash = h;
	//    .end local v1    # "i":I
label_cond_6e:
	return h;

}


