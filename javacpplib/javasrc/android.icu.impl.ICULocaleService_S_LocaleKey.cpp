// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService$LocaleKey.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKey.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.LocaleUtility.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::ICULocaleService_S_LocaleKey::KIND_ANY = -0x1;
// .method protected constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
android::icu::impl::ICULocaleService_S_LocaleKey::ICULocaleService_S_LocaleKey(std::shared_ptr<java::lang::String> primaryID,std::shared_ptr<java::lang::String> canonicalPrimaryID,std::shared_ptr<java::lang::String> canonicalFallbackID,int kind)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	int cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	int idx;
	
	//    .param p1, "primaryID"    # Ljava/lang/String;
	//    .param p2, "canonicalPrimaryID"    # Ljava/lang/String;
	//    .param p3, "canonicalFallbackID"    # Ljava/lang/String;
	//    .param p4, "kind"    # I
	cVar0 = 0x4;
	cVar1 = 0x0;
	cVar2 = 0x0;
	android::icu::impl::ICUService_S_Key::(primaryID);
	this->kind = kind;
	if ( !(canonicalPrimaryID) )  
		goto label_cond_13;
	if ( !(canonicalPrimaryID->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("root")))) )  
		goto label_cond_24;
label_cond_13:
	this->primaryID = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	this->fallbackID = cVar1;
label_goto_1a:
	if ( this->varstart != -0x1 )
		goto label_cond_5a;
	cVar3 = this->primaryID;
label_goto_21:
	this->currentID = cVar3;
	return;
	// 090    .line 218
label_cond_24:
	idx = canonicalPrimaryID->indexOf(0x40);
	//    .local v6, "idx":I
	if ( idx != cVar0 )
		goto label_cond_43;
	if ( !(canonicalPrimaryID->regionMatches(0x1, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("root")), cVar2, cVar0)) )  
		goto label_cond_43;
	this->primaryID = canonicalPrimaryID->substring(cVar0);
	this->varstart = cVar2;
	this->fallbackID = cVar1;
	goto label_goto_1a;
	// 131    .line 224
label_cond_43:
	this->primaryID = canonicalPrimaryID;
	this->varstart = idx;
	if ( !(canonicalFallbackID) )  
		goto label_cond_51;
	if ( !(this->primaryID->equals(canonicalFallbackID)) )  
		goto label_cond_57;
label_cond_51:
	this->fallbackID = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_1a;
	// 157    .line 230
label_cond_57:
	this->fallbackID = canonicalFallbackID;
	goto label_goto_1a;
	// 163    .line 235
	// 164    .end local v6    # "idx":I
label_cond_5a:
	cVar3 = this->primaryID->substring(cVar2, this->varstart);
	goto label_goto_21;

}
// .method public static createWithCanonical(Landroid/icu/util/ULocale;Ljava/lang/String;I)Landroid/icu/impl/ICULocaleService$LocaleKey;
std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> android::icu::impl::ICULocaleService_S_LocaleKey::createWithCanonical(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> canonicalFallbackID,int kind)
{
	
	std::shared_ptr<java::lang::String> canonicalPrimaryID;
	std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "canonicalFallbackID"    # Ljava/lang/String;
	//    .param p2, "kind"    # I
	if ( locale )     
		goto label_cond_4;
	return 0x0;
	// 192    .line 200
label_cond_4:
	canonicalPrimaryID = locale->getName();
	//    .local v0, "canonicalPrimaryID":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::ICULocaleService_S_LocaleKey>(canonicalPrimaryID, canonicalPrimaryID, canonicalFallbackID, kind);
	return cVar0;

}
// .method public static createWithCanonicalFallback(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/impl/ICULocaleService$LocaleKey;
std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> android::icu::impl::ICULocaleService_S_LocaleKey::createWithCanonicalFallback(std::shared_ptr<java::lang::String> primaryID,std::shared_ptr<java::lang::String> canonicalFallbackID)
{
	
	//    .param p0, "primaryID"    # Ljava/lang/String;
	//    .param p1, "canonicalFallbackID"    # Ljava/lang/String;
	return android::icu::impl::ICULocaleService_S_LocaleKey::createWithCanonicalFallback(primaryID, canonicalFallbackID, -0x1);

}
// .method public static createWithCanonicalFallback(Ljava/lang/String;Ljava/lang/String;I)Landroid/icu/impl/ICULocaleService$LocaleKey;
std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> android::icu::impl::ICULocaleService_S_LocaleKey::createWithCanonicalFallback(std::shared_ptr<java::lang::String> primaryID,std::shared_ptr<java::lang::String> canonicalFallbackID,int kind)
{
	
	std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> cVar0;
	
	//    .param p0, "primaryID"    # Ljava/lang/String;
	//    .param p1, "canonicalFallbackID"    # Ljava/lang/String;
	//    .param p2, "kind"    # I
	if ( primaryID )     
		goto label_cond_4;
	return 0x0;
	// 238    .line 189
label_cond_4:
	//    .local v0, "canonicalPrimaryID":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::ICULocaleService_S_LocaleKey>(primaryID, android::icu::util::ULocale::getName(primaryID), canonicalFallbackID, kind);
	return cVar0;

}
// .method public canonicalID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICULocaleService_S_LocaleKey::canonicalID()
{
	
	return this->primaryID;

}
// .method public canonicalLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICULocaleService_S_LocaleKey::canonicalLocale()
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::ULocale>(this->primaryID);
	return cVar0;

}
// .method public currentDescriptor()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICULocaleService_S_LocaleKey::currentDescriptor()
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	cVar0 = -0x1;
	result = this->currentID();
	//    .local v1, "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_38;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	if ( this->kind == cVar0 )
		goto label_cond_17;
	buf->append(this->prefix());
label_cond_17:
	buf->append(0x2f);
	buf->append(result);
	if ( this->varstart == cVar0 )
		goto label_cond_34;
	buf->append(this->primaryID->substring(this->varstart, this->primaryID->length()));
label_cond_34:
	//    .end local v0    # "buf":Ljava/lang/StringBuilder;
label_cond_38:
	return result;

}
// .method public currentID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICULocaleService_S_LocaleKey::currentID()
{
	
	return this->currentID;

}
// .method public currentLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICULocaleService_S_LocaleKey::currentLocale()
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	if ( this->varstart != -0x1 )
		goto label_cond_d;
	cVar0 = std::make_shared<android::icu::util::ULocale>(this->currentID);
	return cVar0;
	// 385    .line 304
label_cond_d:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<android::icu::util::ULocale>(cVar2->append(this->currentID)->append(this->primaryID->substring(this->varstart))->toString());
	return cVar1;

}
// .method public fallback()Z
bool android::icu::impl::ICULocaleService_S_LocaleKey::fallback()
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	int cVar3;
	int x;
	
	cVar0 = 0x5f;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = 0x0;
	x = this->currentID->lastIndexOf(cVar0);
	//    .local v0, "x":I
	if ( x == -0x1 )
		goto label_cond_25;
label_cond_e:
	x = ( x + -0x1);
	if ( x < 0 ) 
		goto label_cond_1a;
	if ( this->currentID->charAt(x) == cVar0 )
		goto label_cond_e;
label_cond_1a:
	this->currentID = this->currentID->substring(cVar3, ( x + 0x1));
	return cVar1;
	// 474    .line 326
label_cond_25:
	if ( !(this->fallbackID) )  
		goto label_cond_3e;
	this->currentID = this->fallbackID;
	if ( this->fallbackID->length() )     
		goto label_cond_38;
	this->fallbackID = cVar2;
label_goto_37:
	return cVar1;
	// 501    .line 331
label_cond_38:
	this->fallbackID = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_37;
	// 509    .line 335
label_cond_3e:
	this->currentID = cVar2;
	return cVar3;

}
// .method public isFallbackOf(Ljava/lang/String;)Z
bool android::icu::impl::ICULocaleService_S_LocaleKey::isFallbackOf(std::shared_ptr<java::lang::String> id)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	return android::icu::impl::LocaleUtility::isFallbackOf(this->canonicalID(), id);

}
// .method public kind()I
int android::icu::impl::ICULocaleService_S_LocaleKey::kind()
{
	
	return this->kind;

}
// .method public prefix()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICULocaleService_S_LocaleKey::prefix()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	if ( this->kind != -0x1 )
		goto label_cond_7;
	cVar0 = 0x0;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = java::lang::Integer::toString(this->kind());
	goto label_goto_6;

}


