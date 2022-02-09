// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIteratorFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUResourceBundle_S_OpenType.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.BreakIteratorFactory_S_BFService.h"
#include "android.icu.text.BreakIteratorFactory.h"
#include "android.icu.text.FilteredBreakIteratorBuilder.h"
#include "android.icu.text.RuleBasedBreakIterator.h"
#include "android.icu.util.ULocale.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"
#include "java.text.StringCharacterIterator.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::BreakIteratorFactory::KIND_NAMES;
static android::icu::text::BreakIteratorFactory::service;
// .method static synthetic -wrap0(Landroid/icu/util/ULocale;I)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIteratorFactory::_wrap0(std::shared_ptr<android::icu::util::ULocale> locale,int kind)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "kind"    # I
	return android::icu::text::BreakIteratorFactory::createBreakInstance(locale, kind);

}
// .method static constructor <clinit>()V
void android::icu::text::BreakIteratorFactory::static_cinit()
{
	
	std::shared_ptr<android::icu::text::BreakIteratorFactory_S_BFService> cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar1;
	
	cVar0 = std::make_shared<android::icu::text::BreakIteratorFactory_S_BFService>();
	android::icu::text::BreakIteratorFactory::service = cVar0;
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x5);
	cVar1[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("grapheme"));
	cVar1[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("word"));
	cVar1[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("line"));
	cVar1[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sentence"));
	cVar1[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("title"));
	android::icu::text::BreakIteratorFactory::KIND_NAMES = cVar1;
	return;

}
// .method constructor <init>()V
android::icu::text::BreakIteratorFactory::BreakIteratorFactory()
{
	
	// 093    invoke-direct {p0}, Landroid/icu/text/BreakIterator$BreakIteratorServiceShim;-><init>()V
	return;

}
// .method private static createBreakInstance(Landroid/icu/util/ULocale;I)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIteratorFactory::createBreakInstance(std::shared_ptr<android::icu::util::ULocale> locale,int kind)
{
	
	std::shared_ptr<android::icu::text::RuleBasedBreakIterator> iter;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::lang::String> typeKeyExt;
	std::shared_ptr<java::lang::String> lbKeyValue;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::MissingResourceException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::ULocale> uloc;
	std::shared_ptr<java::lang::String> ssKeyword;
	std::shared_ptr<android::icu::util::ULocale> base;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "kind"    # I
	iter = 0x0;
	//    .local v6, "iter":Landroid/icu/text/RuleBasedBreakIterator;
	rb = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/brkitr")), locale, android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ROOT);
	//    .local v8, "rb":Landroid/icu/impl/ICUResourceBundle;
	0x0;
	//    .local v3, "bytes":Ljava/nio/ByteBuffer;
	typeKeyExt = 0x0;
	//    .local v12, "typeKeyExt":Ljava/lang/String;
	if ( kind != 0x2 )
		goto label_cond_4d;
	lbKeyValue = locale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("lb")));
	//    .local v7, "lbKeyValue":Ljava/lang/String;
	if ( !(lbKeyValue) )  
		goto label_cond_4d;
	if ( lbKeyValue->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("strict"))) )     
		goto label_cond_39;
	if ( lbKeyValue->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("normal"))) )     
		goto label_cond_39;
	if ( !(lbKeyValue->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("loose")))) )  
		goto label_cond_4d;
label_cond_39:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	typeKeyExt = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(lbKeyValue)->toString();
	//    .end local v7    # "lbKeyValue":Ljava/lang/String;
	//    .end local v12    # "typeKeyExt":Ljava/lang/String;
label_cond_4d:
	if ( typeKeyExt )     
		goto label_cond_c2;
	try {
	//label_try_start_4f:
	//    .local v11, "typeKey":Ljava/lang/String;
label_goto_53:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "brkfname":Ljava/lang/String;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//    .local v9, "rulesFileName":Ljava/lang/String;
	//label_try_end_82:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d9;
	}
	//    .catch Ljava/lang/Exception; {:try_start_4f .. :try_end_82} :catch_d9
	//    .local v3, "bytes":Ljava/nio/ByteBuffer;
	try {
	//label_try_start_83:
	//label_try_end_86:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ea;
	}
	//    .catch Ljava/io/IOException; {:try_start_83 .. :try_end_86} :catch_ea
	iter = android::icu::text::RuleBasedBreakIterator::getInstanceFromCompiledRules(android::icu::impl::ICUBinary::getData(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("brkitr/")))->append(rb->getStringWithFallback(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("boundaries/")))->append(typeKey)->toString()))->toString()));
	//    .end local v6    # "iter":Landroid/icu/text/RuleBasedBreakIterator;
label_goto_87:
	uloc = android::icu::util::ULocale::forLocale(rb->getLocale());
	//    .local v13, "uloc":Landroid/icu/util/ULocale;
	iter->setLocale(uloc, uloc);
	iter->setBreakType(kind);
	if ( kind != 0x3 )
		goto label_cond_ef;
	ssKeyword = locale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("ss")));
	//    .local v10, "ssKeyword":Ljava/lang/String;
	if ( !(ssKeyword) )  
		goto label_cond_ef;
	if ( !(ssKeyword->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("standard")))) )  
		goto label_cond_ef;
	base = std::make_shared<android::icu::util::ULocale>(locale->getBaseName());
	//    .local v1, "base":Landroid/icu/util/ULocale;
	return android::icu::text::FilteredBreakIteratorBuilder::createInstance(base)->build(iter);
	// 336    .line 142
	// 337    .end local v1    # "base":Landroid/icu/util/ULocale;
	// 338    .end local v2    # "brkfname":Ljava/lang/String;
	// 339    .end local v9    # "rulesFileName":Ljava/lang/String;
	// 340    .end local v10    # "ssKeyword":Ljava/lang/String;
	// 341    .end local v11    # "typeKey":Ljava/lang/String;
	// 342    .end local v13    # "uloc":Landroid/icu/util/ULocale;
	// 343    .local v3, "bytes":Ljava/nio/ByteBuffer;
	// 344    .restart local v6    # "iter":Landroid/icu/text/RuleBasedBreakIterator;
label_cond_c2:
	try {
	//label_try_start_c2:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_d6:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d9;
	}
	//    .catch Ljava/lang/Exception; {:try_start_c2 .. :try_end_d6} :catch_d9
	//    .restart local v11    # "typeKey":Ljava/lang/String;
	goto label_goto_53;
	// 372    .line 147
	// 373    .end local v11    # "typeKey":Ljava/lang/String;
label_catch_d9:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v5, "e":Ljava/lang/Exception;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar4 = std::make_shared<java::util::MissingResourceException>(getCatchExcetionFromList->toString(), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar4;
	// 393    .line 157
	// 394    .end local v5    # "e":Ljava/lang/Exception;
	// 395    .restart local v2    # "brkfname":Ljava/lang/String;
	// 396    .local v3, "bytes":Ljava/nio/ByteBuffer;
	// 397    .restart local v9    # "rulesFileName":Ljava/lang/String;
	// 398    .restart local v11    # "typeKey":Ljava/lang/String;
label_catch_ea:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/io/IOException;
	android::icu::impl::Assert::fail(getCatchExcetionFromList);
	goto label_goto_87;
	// 408    .line 176
	// 409    .end local v4    # "e":Ljava/io/IOException;
	// 410    .end local v6    # "iter":Landroid/icu/text/RuleBasedBreakIterator;
	// 411    .restart local v13    # "uloc":Landroid/icu/util/ULocale;
label_cond_ef:
	return iter;

}
// .method public createBreakIterator(Landroid/icu/util/ULocale;I)Landroid/icu/text/BreakIterator;
std::shared_ptr<android::icu::text::BreakIterator> android::icu::text::BreakIteratorFactory::createBreakIterator(std::shared_ptr<android::icu::util::ULocale> locale,int kind)
{
	
	int cVar0;
	std::shared<std::vector<std::vector<android::icu::util::ULocale>>> actualLoc;
	std::shared_ptr<android::icu::text::BreakIterator> iter;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	cVar0 = 0x0;
	if ( !(android::icu::text::BreakIteratorFactory::service->isDefault()) )  
		goto label_cond_e;
	return android::icu::text::BreakIteratorFactory::createBreakInstance(locale, kind);
	// 442    .line 75
label_cond_e:
	actualLoc = std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(0x1);
	//    .local v0, "actualLoc":[Landroid/icu/util/ULocale;
	iter = android::icu::text::BreakIteratorFactory::service->get(locale, kind, actualLoc);
	iter->checkCast("android::icu::text::BreakIterator");
	//    .local v1, "iter":Landroid/icu/text/BreakIterator;
	iter->setLocale(actualLoc[cVar0], actualLoc[cVar0]);
	return iter;

}
// .method public getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::BreakIteratorFactory::getAvailableLocales()
{
	
	if ( android::icu::text::BreakIteratorFactory::service )     
		goto label_cond_9;
	return android::icu::impl::ICUResourceBundle::getAvailableLocales({const[class].FS-Param});
	// 486    .line 56
label_cond_9:
	return android::icu::text::BreakIteratorFactory::service->getAvailableLocales();

}
// .method public getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::BreakIteratorFactory::getAvailableULocales()
{
	
	if ( android::icu::text::BreakIteratorFactory::service )     
		goto label_cond_9;
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});
	// 513    .line 65
label_cond_9:
	return android::icu::text::BreakIteratorFactory::service->getAvailableULocales();

}
// .method public registerInstance(Landroid/icu/text/BreakIterator;Landroid/icu/util/ULocale;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::BreakIteratorFactory::registerInstance(std::shared_ptr<android::icu::text::BreakIterator> iter,std::shared_ptr<android::icu::util::ULocale> locale,int kind)
{
	
	std::shared_ptr<java::text::StringCharacterIterator> cVar0;
	
	//    .param p1, "iter"    # Landroid/icu/text/BreakIterator;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "kind"    # I
	cVar0 = std::make_shared<java::text::StringCharacterIterator>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	iter->setText(cVar0);
	return android::icu::text::BreakIteratorFactory::service->registerObject(iter, locale, kind);

}
// .method public unregister(Ljava/lang/Object;)Z
bool android::icu::text::BreakIteratorFactory::unregister(std::shared_ptr<java::lang::Object> key)
{
	
	//    .param p1, "key"    # Ljava/lang/Object;
	if ( !(android::icu::text::BreakIteratorFactory::service->isDefault()) )  
		goto label_cond_a;
	return 0x0;
	// 569    .line 48
label_cond_a:
	key->checkCast("android::icu::impl::ICUService_S_Factory");
	//    .end local p1    # "key":Ljava/lang/Object;
	return android::icu::text::BreakIteratorFactory::service->unregisterFactory(key);

}


