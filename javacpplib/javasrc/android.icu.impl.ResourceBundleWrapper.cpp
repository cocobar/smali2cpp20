// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.ClassLoaderUtil.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.ResourceBundleWrapper_S_1.h"
#include "android.icu.impl.ResourceBundleWrapper_S_2.h"
#include "android.icu.impl.ResourceBundleWrapper.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"
#include "java.util.MissingResourceException.h"
#include "java.util.ResourceBundle.h"

static android::icu::impl::ResourceBundleWrapper::BUNDLE_CACHE;
static android::icu::impl::ResourceBundleWrapper::DEBUG;
// .method static synthetic -get0()Z
bool android::icu::impl::ResourceBundleWrapper::_get0()
{
	
	return android::icu::impl::ResourceBundleWrapper::DEBUG;

}
// .method static synthetic -set0(Landroid/icu/impl/ResourceBundleWrapper;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ResourceBundleWrapper::_set0(std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this,std::shared_ptr<java::lang::String> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ResourceBundleWrapper;
	//    .param p1, "-value"    # Ljava/lang/String;
	_this->baseName = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/impl/ResourceBundleWrapper;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ResourceBundleWrapper::_set1(std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this,std::shared_ptr<java::lang::String> _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ResourceBundleWrapper;
	//    .param p1, "-value"    # Ljava/lang/String;
	_this->localeID = _value;
	return _value;

}
// .method static synthetic -wrap0(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Landroid/icu/impl/ResourceBundleWrapper;
std::shared_ptr<android::icu::impl::ResourceBundleWrapper> android::icu::impl::ResourceBundleWrapper::_wrap0(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> defaultID,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "defaultID"    # Ljava/lang/String;
	//    .param p3, "root"    # Ljava/lang/ClassLoader;
	//    .param p4, "disableFallback"    # Z
	return android::icu::impl::ResourceBundleWrapper::instantiateBundle(baseName, localeID, defaultID, root, disableFallback);

}
// .method static synthetic -wrap1(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::impl::ResourceBundleWrapper::_wrap1(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> lang)
{
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "lang"    # Ljava/lang/String;
	return android::icu::impl::ResourceBundleWrapper::localeIDStartsWithLangSubtag(localeID, lang);

}
// .method static synthetic -wrap2(Landroid/icu/impl/ResourceBundleWrapper;)V
void android::icu::impl::ResourceBundleWrapper::_wrap2(std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ResourceBundleWrapper;
	_this->initKeysVector();
	return;

}
// .method static synthetic -wrap3(Landroid/icu/impl/ResourceBundleWrapper;Ljava/util/ResourceBundle;)V
void android::icu::impl::ResourceBundleWrapper::_wrap3(std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this,std::shared_ptr<java::util::ResourceBundle> parent)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ResourceBundleWrapper;
	//    .param p1, "parent"    # Ljava/util/ResourceBundle;
	_this->setParent(parent);
	return;

}
// .method static constructor <clinit>()V
void android::icu::impl::ResourceBundleWrapper::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper_S_1> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::ResourceBundleWrapper_S_1>();
	android::icu::impl::ResourceBundleWrapper::BUNDLE_CACHE = cVar0;
	android::icu::impl::ResourceBundleWrapper::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("resourceBundleWrapper")));
	return;

}
// .method private constructor <init>(Ljava/util/ResourceBundle;)V
android::icu::impl::ResourceBundleWrapper::ResourceBundleWrapper(std::shared_ptr<java::util::ResourceBundle> bundle)
{
	
	std::shared_ptr<java::util::ResourceBundle> cVar0;
	
	//    .param p1, "bundle"    # Ljava/util/ResourceBundle;
	cVar0 = 0x0;
	// 165    invoke-direct {p0}, Landroid/icu/util/UResourceBundle;-><init>()V
	this->bundle = cVar0;
	this->localeID = cVar0;
	this->baseName = cVar0;
	this->keys = cVar0;
	this->bundle = bundle;
	return;

}
// .method synthetic constructor <init>(Ljava/util/ResourceBundle;Landroid/icu/impl/ResourceBundleWrapper;)V
android::icu::impl::ResourceBundleWrapper::ResourceBundleWrapper(std::shared_ptr<java::util::ResourceBundle> bundle,std::shared_ptr<android::icu::impl::ResourceBundleWrapper> _this1)
{
	
	//    .param p1, "bundle"    # Ljava/util/ResourceBundle;
	//    .param p2, "-this1"    # Landroid/icu/impl/ResourceBundleWrapper;
	android::icu::impl::ResourceBundleWrapper::(bundle);
	return;

}
// .method public static getBundleInstance(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Landroid/icu/impl/ResourceBundleWrapper;
std::shared_ptr<android::icu::impl::ResourceBundleWrapper> android::icu::impl::ResourceBundleWrapper::getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> cVar0,bool disableFallback)
{
	
	std::shared_ptr<java::lang::ClassLoader> cVar0;
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper> b;
	std::shared_ptr<java::util::MissingResourceException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "root"    # Ljava/lang/ClassLoader;
	//    .param p3, "disableFallback"    # Z
	if ( cVar0 )     
		goto label_cond_7;
	cVar0 = android::icu::impl::ClassLoaderUtil::getClassLoader({const[class].FS-Param});
label_cond_7:
	if ( !(disableFallback) )  
		goto label_cond_45;
	b = android::icu::impl::ResourceBundleWrapper::instantiateBundle(baseName, localeID, 0x0, cVar0, disableFallback);
	//    .local v0, "b":Landroid/icu/impl/ResourceBundleWrapper;
label_goto_d:
	if ( b )     
		goto label_cond_52;
	//    .local v1, "separator":Ljava/lang/String;
	if ( baseName->indexOf(0x2f) < 0 ) 
		goto label_cond_1d;
label_cond_1d:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::util::MissingResourceException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not find the bundle ")))->append(baseName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(localeID)->toString(), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar1;
	// 283    .line 128
	// 284    .end local v0    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 285    .end local v1    # "separator":Ljava/lang/String;
label_cond_45:
	b = android::icu::impl::ResourceBundleWrapper::instantiateBundle(baseName, localeID, android::icu::util::ULocale::getDefault(baseName, localeID, android::icu::util::ULocale::getDefault(baseName, localeID, android::icu::util::ULocale::getDefault(baseName, localeID, android::icu::util::ULocale::getDefault(baseName, localeID, android::icu::util::ULocale::getDefault({const[class].FS-Param})->getBaseName(), cVar0, disableFallback)->getBaseName(), cVar0, disableFallback)->getBaseName(), cVar0, disableFallback)->getBaseName(), cVar0, disableFallback)->getBaseName(), cVar0, disableFallback);
	//    .restart local v0    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_d;
	// 302    .line 138
label_cond_52:
	return b;

}
// .method private initKeysVector()V
void android::icu::impl::ResourceBundleWrapper::initKeysVector()
{
	
	std::shared_ptr<java::util::ResourceBundle> current;
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::util::Enumeration> e;
	std::shared_ptr<java::lang::String> elem;
	
	current = this;
	//    .local v0, "current":Landroid/icu/impl/ResourceBundleWrapper;
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->keys = cVar0;
label_goto_8:
	if ( !(current) )  
		goto label_cond_31;
	e = current->bundle->getKeys();
	//    .local v1, "e":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_cond_10:
label_goto_10:
	if ( !(e->hasMoreElements()) )  
		goto label_cond_2a;
	elem = e->nextElement();
	elem->checkCast("java::lang::String");
	//    .local v2, "elem":Ljava/lang/String;
	if ( this->keys->contains(elem) )     
		goto label_cond_10;
	this->keys->add(elem);
	goto label_goto_10;
	// 367    .line 92
	// 368    .end local v2    # "elem":Ljava/lang/String;
label_cond_2a:
	current = current->getParent();
	//    .end local v0    # "current":Landroid/icu/impl/ResourceBundleWrapper;
	current->checkCast("android::icu::impl::ResourceBundleWrapper");
	//    .restart local v0    # "current":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_8;
	// 380    .line 94
	// 381    .end local v1    # "e":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_cond_31:
	return;

}
// .method private static instantiateBundle(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Landroid/icu/impl/ResourceBundleWrapper;
std::shared_ptr<android::icu::impl::ResourceBundleWrapper> android::icu::impl::ResourceBundleWrapper::instantiateBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> defaultID,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback)
{
	
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper_S_2> cVar0;
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "defaultID"    # Ljava/lang/String;
	//    .param p3, "root"    # Ljava/lang/ClassLoader;
	//    .param p4, "disableFallback"    # Z
	if ( !(localeID->isEmpty()) )  
		goto label_cond_1d;
	name = baseName;
	//    .local v6, "name":Ljava/lang/String;
label_goto_7:
	if ( !(disableFallback) )  
		goto label_cond_35;
	//    .local v7, "cacheKey":Ljava/lang/String;
label_goto_a:
	cVar0 = std::make_shared<android::icu::impl::ResourceBundleWrapper_S_2>(localeID, baseName, defaultID, root, disableFallback, name);
	cVar1 = android::icu::impl::ResourceBundleWrapper::BUNDLE_CACHE->getInstance(cacheKey, cVar0);
	cVar1->checkCast("android::icu::impl::ResourceBundleWrapper");
	return cVar1;
	// 438    .line 149
	// 439    .end local v6    # "name":Ljava/lang/String;
	// 440    .end local v7    # "cacheKey":Ljava/lang/String;
label_cond_1d:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	name = cVar2->append(baseName)->append(0x5f)->append(localeID)->toString();
	//    .restart local v6    # "name":Ljava/lang/String;
	goto label_goto_7;
	// 467    .line 150
label_cond_35:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v7    # "cacheKey":Ljava/lang/String;
	goto label_goto_a;

}
// .method private static localeIDStartsWithLangSubtag(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::impl::ResourceBundleWrapper::localeIDStartsWithLangSubtag(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> lang)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "lang"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( !(localeID->startsWith(lang)) )  
		goto label_cond_21;
	if ( localeID->length() == lang->length() )
		goto label_cond_1e;
	if ( localeID->charAt(lang->length()) != 0x5f )
		goto label_cond_1f;
label_cond_1e:
label_goto_1e:
	return cVar0;
label_cond_1f:
	cVar0 = cVar1;
	goto label_goto_1e;
label_cond_21:
	cVar0 = cVar1;
	goto label_goto_1e;

}
// .method protected getBaseName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ResourceBundleWrapper::getBaseName()
{
	
	return this->bundle->getClass()->getName()->replace(0x2e, 0x2f);

}
// .method public getKeys()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::impl::ResourceBundleWrapper::getKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 584        value = {
	// 585            "()",
	// 586            "Ljava/util/Enumeration",
	// 587            "<",
	// 588            "Ljava/lang/String;",
	// 589            ">;"
	// 590        }
	// 591    .end annotation
	return java::util::Collections::enumeration(this->keys);

}
// .method protected getLocaleID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ResourceBundleWrapper::getLocaleID()
{
	
	return this->localeID;

}
// .method public getParent()Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::ResourceBundleWrapper::getParent()
{
	
	std::shared_ptr<java::util::ResourceBundle> cVar0;
	
	cVar0 = this->parent;
	cVar0->checkCast("android::icu::util::UResourceBundle");
	return cVar0;

}
// .method public getULocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ResourceBundleWrapper::getULocale()
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::ULocale>(this->localeID);
	return cVar0;

}
// .method protected handleGetObject(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ResourceBundleWrapper::handleGetObject(std::shared_ptr<java::lang::String> aKey)
{
	
	std::shared_ptr<java::util::ResourceBundle> current;
	std::shared_ptr<java::lang::Object> obj;
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper> current;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "aKey"    # Ljava/lang/String;
	current = this;
	//    .local v0, "current":Landroid/icu/impl/ResourceBundleWrapper;
	obj = 0x0;
	//    .local v2, "obj":Ljava/lang/Object;
label_goto_2:
	if ( !(current) )  
		goto label_cond_a;
	try {
	//label_try_start_4:
	//label_try_end_9:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3b;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_4 .. :try_end_9} :catch_3b
	obj = current->bundle->getObject(aKey);
	//    .end local v2    # "obj":Ljava/lang/Object;
label_cond_a:
	if ( obj )     
		goto label_cond_43;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::util::MissingResourceException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t find resource for bundle ")))->append(this->baseName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", key ")))->append(aKey)->toString(), this->getClass()->getName(), aKey);
	// throw
	throw cVar0;
	// 723    .line 62
	// 724    .restart local v2    # "obj":Ljava/lang/Object;
label_catch_3b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/util/MissingResourceException;
	current = current->getParent();
	//    .end local v0    # "current":Landroid/icu/impl/ResourceBundleWrapper;
	current->checkCast("android::icu::impl::ResourceBundleWrapper");
	//    .restart local v0    # "current":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_2;
	// 740    .line 73
	// 741    .end local v1    # "ex":Ljava/util/MissingResourceException;
	// 742    .end local v2    # "obj":Ljava/lang/Object;
label_cond_43:
	return obj;

}


