// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$Builder.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "android.icu.impl.locale.InternalLocaleBuilder.h"
#include "android.icu.impl.locale.LanguageTag.h"
#include "android.icu.impl.locale.LocaleExtensions.h"
#include "android.icu.impl.locale.LocaleSyntaxException.h"
#include "android.icu.impl.locale.ParseStatus.h"
#include "android.icu.util.IllformedLocaleException.h"
#include "android.icu.util.ULocale_S_Builder.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method public constructor <init>()V
android::icu::util::ULocale_S_Builder::ULocale_S_Builder()
{
	
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> cVar0;
	
	// 027    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder>();
	this->_locbld = cVar0;
	return;

}
// .method public addUnicodeLocaleAttribute(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::addUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> e;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "attribute"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	this->_locbld->addUnicodeLocaleAttribute(attribute);
	//label_try_end_5:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_0 .. :try_end_5} :catch_6
	return this;
	// 058    .line 3690
label_catch_6:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(e->getMessage(), e->getErrorIndex());
	// throw
	throw cVar0;

}
// .method public build()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale_S_Builder::build()
{
	
	return android::icu::util::ULocale::-wrap2(this->_locbld->getBaseLocale(), this->_locbld->getLocaleExtensions());

}
// .method public clear()Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::clear()
{
	
	this->_locbld->clear();
	return this;

}
// .method public clearExtensions()Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::clearExtensions()
{
	
	this->_locbld->clearExtensions();
	return this;

}
// .method public removeUnicodeLocaleAttribute(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::removeUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> e;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "attribute"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	this->_locbld->removeUnicodeLocaleAttribute(attribute);
	//label_try_end_5:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_0 .. :try_end_5} :catch_6
	return this;
	// 145    .line 3712
label_catch_6:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(e->getMessage(), e->getErrorIndex());
	// throw
	throw cVar0;

}
// .method public setExtension(CLjava/lang/String;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::setExtension(char key,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> e;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "key"    # C
	//    .param p2, "value"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	this->_locbld->setExtension(key, value);
	//label_try_end_5:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_0 .. :try_end_5} :catch_6
	return this;
	// 183    .line 3641
label_catch_6:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(e->getMessage(), e->getErrorIndex());
	// throw
	throw cVar0;

}
// .method public setLanguage(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::setLanguage(std::shared_ptr<java::lang::String> language)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> e;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "language"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	this->_locbld->setLanguage(language);
	//label_try_end_5:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_0 .. :try_end_5} :catch_6
	return this;
	// 220    .line 3541
label_catch_6:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(e->getMessage(), e->getErrorIndex());
	// throw
	throw cVar0;

}
// .method public setLanguageTag(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::setLanguageTag(std::shared_ptr<java::lang::String> languageTag)
{
	
	std::shared_ptr<android::icu::impl::locale::ParseStatus> sts;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	
	//    .param p1, "languageTag"    # Ljava/lang/String;
	sts = std::make_shared<android::icu::impl::locale::ParseStatus>();
	//    .local v0, "sts":Landroid/icu/impl/locale/ParseStatus;
	//    .local v1, "tag":Landroid/icu/impl/locale/LanguageTag;
	if ( !(sts->isError()) )  
		goto label_cond_1d;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(sts->getErrorMessage(), sts->getErrorIndex());
	// throw
	throw cVar0;
	// 280    .line 3520
label_cond_1d:
	this->_locbld->setLanguageTag(android::icu::impl::locale::LanguageTag::parse(languageTag, sts));
	return this;

}
// .method public setLocale(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::setLocale(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> e;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	try {
	//label_try_start_0:
	this->_locbld->setLocale(android::icu::util::ULocale::-wrap0(locale), android::icu::util::ULocale::-wrap1(locale));
	//label_try_end_d:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_0 .. :try_end_d} :catch_e
	return this;
	// 314    .line 3491
label_catch_e:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(e->getMessage(), e->getErrorIndex());
	// throw
	throw cVar0;

}
// .method public setRegion(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::setRegion(std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> e;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "region"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	this->_locbld->setRegion(region);
	//label_try_end_5:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_0 .. :try_end_5} :catch_6
	return this;
	// 351    .line 3585
label_catch_6:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(e->getMessage(), e->getErrorIndex());
	// throw
	throw cVar0;

}
// .method public setScript(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::setScript(std::shared_ptr<java::lang::String> script)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> e;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "script"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	this->_locbld->setScript(script);
	//label_try_end_5:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_0 .. :try_end_5} :catch_6
	return this;
	// 388    .line 3561
label_catch_6:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(e->getMessage(), e->getErrorIndex());
	// throw
	throw cVar0;

}
// .method public setUnicodeLocaleKeyword(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::setUnicodeLocaleKeyword(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> e;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "type"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	this->_locbld->setUnicodeLocaleKeyword(key, type);
	//label_try_end_5:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_0 .. :try_end_5} :catch_6
	return this;
	// 426    .line 3670
label_catch_6:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(e->getMessage(), e->getErrorIndex());
	// throw
	throw cVar0;

}
// .method public setVariant(Ljava/lang/String;)Landroid/icu/util/ULocale$Builder;
std::shared_ptr<android::icu::util::ULocale_S_Builder> android::icu::util::ULocale_S_Builder::setVariant(std::shared_ptr<java::lang::String> variant)
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleSyntaxException> e;
	std::shared_ptr<android::icu::util::IllformedLocaleException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "variant"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	this->_locbld->setVariant(variant);
	//label_try_end_5:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_0 .. :try_end_5} :catch_6
	return this;
	// 463    .line 3610
label_catch_6:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<android::icu::util::IllformedLocaleException>(e->getMessage(), e->getErrorIndex());
	// throw
	throw cVar0;

}


