// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationLoader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_OpenType.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.coll.CollationDataReader.h"
#include "android.icu.impl.coll.CollationLoader_S_ASCII.h"
#include "android.icu.impl.coll.CollationLoader.h"
#include "android.icu.impl.coll.CollationRoot.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.impl.coll.SharedObject_S_Reference.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::coll::CollationLoader::rootRules;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationLoader::static_cinit()
{
	
	android::icu::impl::coll::CollationLoader::rootRules = 0x0;
	return;

}
// .method private constructor <init>()V
android::icu::impl::coll::CollationLoader::CollationLoader()
{
	
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static final findWithFallback(Landroid/icu/util/UResourceBundle;Ljava/lang/String;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::coll::CollationLoader::findWithFallback(std::shared_ptr<android::icu::util::UResourceBundle> table,std::shared_ptr<java::lang::String> entryName)
{
	
	//    .param p0, "table"    # Landroid/icu/util/UResourceBundle;
	//    .param p1, "entryName"    # Ljava/lang/String;
	table->checkCast("android::icu::impl::ICUResourceBundle");
	//    .end local p0    # "table":Landroid/icu/util/UResourceBundle;
	return table->findWithFallback(entryName);

}
// .method public static getRootRules()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::coll::CollationLoader::getRootRules()
{
	
	android::icu::impl::coll::CollationLoader::loadRootRules({const[class].FS-Param});
	return android::icu::impl::coll::CollationLoader::rootRules;

}
// .method private static loadRootRules()V
void android::icu::impl::coll::CollationLoader::loadRootRules()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationLoader> cVar0;
	
	if ( !(android::icu::impl::coll::CollationLoader::rootRules) )  
		goto label_cond_5;
	return;
	// 085    .line 46
label_cond_5:
	cVar0 = android::icu::impl::coll::CollationLoader();
	cVar0->monitor_enter();
	try {
	//label_try_start_8:
	if ( android::icu::impl::coll::CollationLoader::rootRules )     
		goto label_cond_1e;
	//    .local v0, "rootBundle":Landroid/icu/util/UResourceBundle;
	android::icu::impl::coll::CollationLoader::rootRules = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")), android::icu::util::ULocale::ROOT)->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("UCARules")));
	//label_try_end_1e:
	}
	catch (...){
		goto label_catchall_20;
	}
	//    .catchall {:try_start_8 .. :try_end_1e} :catchall_20
label_cond_1e:
	cVar0->monitor_exit();
	return;
	// 125    .line 46
label_catchall_20:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method static loadRules(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::coll::CollationLoader::loadRules(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> collationType)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "collationType"    # Ljava/lang/String;
	bundle = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")), locale);
	//    .local v0, "bundle":Landroid/icu/util/UResourceBundle;
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .end local v0    # "bundle":Landroid/icu/util/UResourceBundle;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "data":Landroid/icu/util/UResourceBundle;
	//    .local v2, "rules":Ljava/lang/String;
	return bundle->getWithFallback(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("collations/")))->append(android::icu::impl::coll::CollationLoader_S_ASCII::toLowerCase(collationType))->toString())->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("Sequence")));

}
// .method public static loadTailoring(Landroid/icu/util/ULocale;Landroid/icu/util/Output;)Landroid/icu/impl/coll/CollationTailoring;
std::shared_ptr<android::icu::impl::coll::CollationTailoring> android::icu::impl::coll::CollationLoader::loadTailoring(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::Output<android::icu::util::ULocale>> outValidLocale)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> root;
	std::shared_ptr<java::lang::String> localeName;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::UResourceBundle> bundle;
	std::shared_ptr<android::icu::util::ULocale> validLocale;
	std::shared_ptr<java::lang::String> validLocaleName;
	std::shared_ptr<android::icu::util::UResourceBundle> collations;
	std::shared_ptr<java::lang::String> type;
	std::shared_ptr<java::lang::String> defaultType;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar0;
	auto defT;
	std::shared_ptr<java::lang::Object> defaultType;
	std::shared_ptr<android::icu::util::UResourceBundle> data;
	auto type;
	std::shared_ptr<android::icu::util::ULocale> actualLocale;
	std::shared_ptr<java::lang::String> actualLocaleName;
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> t;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> actualBundle;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 198        value = {
	// 199            "(",
	// 200            "Landroid/icu/util/ULocale;",
	// 201            "Landroid/icu/util/Output",
	// 202            "<",
	// 203            "Landroid/icu/util/ULocale;",
	// 204            ">;)",
	// 205            "Landroid/icu/impl/coll/CollationTailoring;"
	// 206        }
	// 207    .end annotation
	//    .local p1, "outValidLocale":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Landroid/icu/util/ULocale;>;"
	root = android::icu::impl::coll::CollationRoot::getRoot({const[class].FS-Param});
	//    .local v17, "root":Landroid/icu/impl/coll/CollationTailoring;
	localeName = locale->getName();
	//    .local v16, "localeName":Ljava/lang/String;
	if ( !(localeName->length()) )  
		goto label_cond_1b;
	if ( !(localeName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("root")))) )  
		goto label_cond_24;
label_cond_1b:
	outValidLocale->value = android::icu::util::ULocale::ROOT;
	return root;
	// 255    .line 110
label_cond_24:
	0x0;
	//    .local v7, "bundle":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_25:
	//label_try_end_33:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5f;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_25 .. :try_end_33} :catch_5f
	bundle = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")), locale, android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ROOT);
	//    .local v7, "bundle":Landroid/icu/util/UResourceBundle;
	validLocale = bundle->getULocale();
	//    .local v20, "validLocale":Landroid/icu/util/ULocale;
	validLocaleName = validLocale->getName();
	//    .local v21, "validLocaleName":Ljava/lang/String;
	if ( !(validLocaleName->length()) )  
		goto label_cond_4b;
	if ( !(validLocaleName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("root")))) )  
		goto label_cond_4d;
label_cond_4b:
	validLocale = android::icu::util::ULocale::ROOT;
label_cond_4d:
	outValidLocale->value = validLocale;
	try {
	//label_try_start_53:
	//label_try_end_5b:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_69;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_53 .. :try_end_5b} :catch_69
	collations = bundle->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("collations")));
	//    .local v8, "collations":Landroid/icu/util/UResourceBundle;
	if ( collations )     
		goto label_cond_6b;
	return root;
	// 339    .line 115
	// 340    .end local v8    # "collations":Landroid/icu/util/UResourceBundle;
	// 341    .end local v20    # "validLocale":Landroid/icu/util/ULocale;
	// 342    .end local v21    # "validLocaleName":Ljava/lang/String;
	// 343    .local v7, "bundle":Landroid/icu/util/UResourceBundle;
label_catch_5f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v13, "e":Ljava/util/MissingResourceException;
	outValidLocale->value = android::icu::util::ULocale::ROOT;
	return root;
	// 360    .line 136
	// 361    .end local v13    # "e":Ljava/util/MissingResourceException;
	// 362    .local v7, "bundle":Landroid/icu/util/UResourceBundle;
	// 363    .restart local v20    # "validLocale":Landroid/icu/util/ULocale;
	// 364    .restart local v21    # "validLocaleName":Ljava/lang/String;
label_catch_69:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v14, "ignored":Ljava/util/MissingResourceException;
	return root;
	// 372    .line 141
	// 373    .end local v14    # "ignored":Ljava/util/MissingResourceException;
	// 374    .restart local v8    # "collations":Landroid/icu/util/UResourceBundle;
label_cond_6b:
	type = locale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("collation")));
	//    .local v19, "type":Ljava/lang/String;
	defaultType = std::make_shared<java::lang::String>(std::make_shared<char[]>("standard"));
	//    .local v11, "defaultType":Ljava/lang/String;
	cVar0 = collations;
	cVar0->checkCast("android::icu::impl::ICUResourceBundle");
	defT = cVar0->findStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("default")));
	//    .local v10, "defT":Ljava/lang/String;
	if ( !(defT) )  
		goto label_cond_87;
	defaultType = defT;
label_cond_87:
	if ( !(type) )  
		goto label_cond_96;
	if ( !(type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("default")))) )  
		goto label_cond_f3;
label_cond_96:
	type = defaultType;
label_goto_98:
	data = android::icu::impl::coll::CollationLoader::findWithFallback(collations, type);
	//    .local v9, "data":Landroid/icu/util/UResourceBundle;
	if ( data )     
		goto label_cond_c2;
	if ( type->length() <= 0x6 )
		goto label_cond_c2;
	if ( !(type->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("search")))) )  
		goto label_cond_c2;
	type = std::make_shared<java::lang::String>(std::make_shared<char[]>("search"));
	data = android::icu::impl::coll::CollationLoader::findWithFallback(collations, type);
label_cond_c2:
	if ( data )     
		goto label_cond_d6;
	if ( !(( type->equals(defaultType) ^ 0x1)) )  
		goto label_cond_d6;
	type = defaultType;
	data = android::icu::impl::coll::CollationLoader::findWithFallback(collations, type);
label_cond_d6:
	if ( data )     
		goto label_cond_f0;
	if ( !(( type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("standard"))) ^ 0x1)) )  
		goto label_cond_f0;
	type = std::make_shared<java::lang::String>(std::make_shared<char[]>("standard"));
	data = android::icu::impl::coll::CollationLoader::findWithFallback(collations, type);
label_cond_f0:
	if ( data )     
		goto label_cond_f8;
	return root;
	// 536    .line 152
	// 537    .end local v9    # "data":Landroid/icu/util/UResourceBundle;
label_cond_f3:
	type = android::icu::impl::coll::CollationLoader_S_ASCII::toLowerCase(type);
	goto label_goto_98;
	// 545    .line 189
	// 546    .restart local v9    # "data":Landroid/icu/util/UResourceBundle;
label_cond_f8:
	actualLocale = data->getULocale();
	//    .local v4, "actualLocale":Landroid/icu/util/ULocale;
	actualLocaleName = actualLocale->getName();
	//    .local v5, "actualLocaleName":Ljava/lang/String;
	if ( !(actualLocaleName->length()) )  
		goto label_cond_111;
	if ( !(actualLocaleName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("root")))) )  
		goto label_cond_121;
label_cond_111:
	actualLocale = android::icu::util::ULocale::ROOT;
	if ( !(type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("standard")))) )  
		goto label_cond_121;
	return root;
	// 596    .line 200
label_cond_121:
	var119 = t(root->settings);
	//    .local v18, "t":Landroid/icu/impl/coll/CollationTailoring;
	t->actualLocale = actualLocale;
	//    .local v6, "binary":Landroid/icu/util/UResourceBundle;
	//    .local v15, "inBytes":Ljava/nio/ByteBuffer;
	try {
	//label_try_start_141:
	android::icu::impl::coll::CollationDataReader::read(root, data->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%CollationBin")))->getBinary(), t);
	//label_try_end_148:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b4;
	}
	//    .catch Ljava/io/IOException; {:try_start_141 .. :try_end_148} :catch_1b4
	try {
	//label_try_start_148:
	t->setRulesResource(data->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Sequence"))));
	//label_try_end_158:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e4;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_148 .. :try_end_158} :catch_1e4
label_goto_158:
	if ( type->equals(defaultType) )     
		goto label_cond_173;
	outValidLocale->value = validLocale->setKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("collation")), type);
label_cond_173:
	if ( actualLocale->equals(validLocale) )     
		goto label_cond_192;
	actualBundle = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")), actualLocale);
	//    .local v3, "actualBundle":Landroid/icu/util/UResourceBundle;
	actualBundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .end local v3    # "actualBundle":Landroid/icu/util/UResourceBundle;
	defT = actualBundle->findStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("collations/default")));
	if ( !(defT) )  
		goto label_cond_192;
label_cond_192:
	if ( type->equals(defaultType) )     
		goto label_cond_1b3;
	t->actualLocale = t->actualLocale->setKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("collation")), type);
label_cond_1b3:
	return t;
	// 769    .line 208
label_catch_1b4:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v12, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	var195 = cVar1(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Failed to load collation tailoring data for locale:")))->append(actualLocale)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" type:")))->append(type)->toString(), getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 821    .line 216
	// 822    .end local v12    # "e":Ljava/io/IOException;
label_catch_1e4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v14    # "ignored":Ljava/util/MissingResourceException;
	goto label_goto_158;

}


