// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$Spec.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.LocaleUtility.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.TransliteratorRegistry_S_Spec.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"
#include "java.util.ResourceBundle.h"

// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::TransliteratorRegistry_S_Spec::TransliteratorRegistry_S_Spec(std::shared_ptr<java::lang::String> theSpec)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	auto s;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "theSpec"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->top = theSpec;
	this->spec = cVar0;
	this->scriptName = cVar0;
	try {
	//label_try_start_a:
	//    .local v2, "script":I
	s = android::icu::lang::UScript::getCode(this->top);
	//    .local v1, "s":[I
	if ( !(s) )  
		goto label_cond_2e;
	this->scriptName = android::icu::lang::UScript::getName(s[0x0]);
	if ( !(this->scriptName->equalsIgnoreCase(this->top)) )  
		goto label_cond_2e;
	this->scriptName = 0x0;
label_cond_2e:
	this->isSpecLocale = 0x0;
	this->res = 0x0;
	if ( android::icu::lang::UScript::getCodeFromName(this->top) != -0x1 )
		goto label_cond_61;
	//    .local v3, "toploc":Ljava/util/Locale;
	cVar1 = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/translit")), android::icu::impl::LocaleUtility::getLocaleFromName(this->top));
	cVar1->checkCast("android::icu::impl::ICUResourceBundle");
	this->res = cVar1;
	if ( !(this->res) )  
		goto label_cond_61;
	if ( !(android::icu::impl::LocaleUtility::isFallbackOf(this->res->getULocale()->toString(), this->top)) )  
		goto label_cond_61;
	this->isSpecLocale = 0x1;
	//label_try_end_61:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_65;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_a .. :try_end_61} :catch_65
	//    .end local v1    # "s":[I
	//    .end local v2    # "script":I
	//    .end local v3    # "toploc":Ljava/util/Locale;
label_cond_61:
label_goto_61:
	this->reset();
	return;
	// 176    .line 134
label_catch_65:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	this->scriptName = cVar0;
	goto label_goto_61;

}
// .method private setupNext()V
void android::icu::text::TransliteratorRegistry_S_Spec::setupNext()
{
	
	bool cVar0;
	int i;
	
	cVar0 = 0x0;
	this->isNextLocale = cVar0;
	if ( !(this->isSpecLocale) )  
		goto label_cond_26;
	this->nextSpec = this->spec;
	i = this->nextSpec->lastIndexOf(0x5f);
	//    .local v0, "i":I
	if ( i <= 0 )
		goto label_cond_21;
	this->nextSpec = this->spec->substring(cVar0, i);
	this->isNextLocale = 0x1;
	//    .end local v0    # "i":I
label_goto_20:
	return;
	// 238    .line 168
	// 239    .restart local v0    # "i":I
label_cond_21:
	this->nextSpec = this->scriptName;
	goto label_goto_20;
	// 247    .line 172
	// 248    .end local v0    # "i":I
label_cond_26:
	if ( android::icu::impl::Utility::sameObjects(this->nextSpec, this->scriptName) )     
		goto label_cond_35;
	this->nextSpec = this->scriptName;
	goto label_goto_20;
	// 267    .line 175
label_cond_35:
	this->nextSpec = 0x0;
	goto label_goto_20;

}
// .method public get()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliteratorRegistry_S_Spec::get()
{
	
	return this->spec;

}
// .method public getBundle()Ljava/util/ResourceBundle;
std::shared_ptr<java::util::ResourceBundle> android::icu::text::TransliteratorRegistry_S_Spec::getBundle()
{
	
	if ( !(this->res) )  
		goto label_cond_1a;
	if ( !(this->res->getULocale()->toString()->equals(this->spec)) )  
		goto label_cond_1a;
	return this->res;
	// 324    .line 211
label_cond_1a:
	return 0x0;

}
// .method public getTop()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliteratorRegistry_S_Spec::getTop()
{
	
	return this->top;

}
// .method public hasFallback()Z
bool android::icu::text::TransliteratorRegistry_S_Spec::hasFallback()
{
	
	bool cVar0;
	
	if ( !(this->nextSpec) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public isLocale()Z
bool android::icu::text::TransliteratorRegistry_S_Spec::isLocale()
{
	
	return this->isSpecLocale;

}
// .method public next()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TransliteratorRegistry_S_Spec::next()
{
	
	this->spec = this->nextSpec;
	this->isSpecLocale = this->isNextLocale;
	this->setupNext();
	return this->spec;

}
// .method public reset()V
void android::icu::text::TransliteratorRegistry_S_Spec::reset()
{
	
	bool cVar0;
	
	if ( android::icu::impl::Utility::sameObjects(this->spec, this->top) )     
		goto label_cond_18;
	this->spec = this->top;
	if ( !(this->res) )  
		goto label_cond_19;
	cVar0 = 0x1;
label_goto_13:
	this->isSpecLocale = cVar0;
	this->setupNext();
label_cond_18:
	return;
	// 429    .line 152
label_cond_19:
	cVar0 = 0x0;
	goto label_goto_13;

}


