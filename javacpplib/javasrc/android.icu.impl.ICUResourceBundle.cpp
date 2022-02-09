// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.ClassLoaderUtil.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.ICUConfig.h"
#include "android.icu.impl.ICUData.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.ICUResourceBundle_S_1.h"
#include "android.icu.impl.ICUResourceBundle_S_2.h"
#include "android.icu.impl.ICUResourceBundle_S_3.h"
#include "android.icu.impl.ICUResourceBundle_S_4.h"
#include "android.icu.impl.ICUResourceBundle_S_AvailEntry.h"
#include "android.icu.impl.ICUResourceBundle_S_OpenType.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceContainer.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceTable.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Container.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderValue.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "android.icu.util.UResourceTypeMismatchException.h"
#include "java.io.BufferedReader.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.InputStreamReader.h"
#include "java.io.PrintStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Thread.h"
#include "java.lang.Throwable.h"
#include "java.security.AccessController.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"
#include "java.util.ResourceBundle.h"
#include "java.util.Set.h"

static android::icu::impl::ICUResourceBundle::_assertionsDisabled;
static android::icu::impl::ICUResourceBundle::ALIAS = 0x3;
static android::icu::impl::ICUResourceBundle::ARRAY16 = 0x9;
static android::icu::impl::ICUResourceBundle::BUNDLE_CACHE = nullptr;
static android::icu::impl::ICUResourceBundle::DEBUG;
static android::icu::impl::ICUResourceBundle::DEFAULT_TAG = std::make_shared<java::lang::String>("default");
static android::icu::impl::ICUResourceBundle::FULL_LOCALE_NAMES_LIST = std::make_shared<java::lang::String>("fullLocaleNames.lst");
static android::icu::impl::ICUResourceBundle::GET_AVAILABLE_CACHE = nullptr;
static android::icu::impl::ICUResourceBundle::HYPHEN = '-';
static android::icu::impl::ICUResourceBundle::ICUDATA = std::make_shared<java::lang::String>("ICUDATA");
static android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER;
static android::icu::impl::ICUResourceBundle::ICU_RESOURCE_INDEX = std::make_shared<java::lang::String>("res_index");
static android::icu::impl::ICUResourceBundle::INSTALLED_LOCALES = std::make_shared<java::lang::String>("InstalledLocales");
static android::icu::impl::ICUResourceBundle::LOCALE = std::make_shared<java::lang::String>("LOCALE");
static android::icu::impl::ICUResourceBundle::NO_INHERITANCE_MARKER = std::make_shared<java::lang::String>("\u2205\u2205\u2205");
static android::icu::impl::ICUResourceBundle::RES_BOGUS = -0x1;
static android::icu::impl::ICUResourceBundle::RES_PATH_SEP_CHAR = '/';
static android::icu::impl::ICUResourceBundle::RES_PATH_SEP_STR = std::make_shared<java::lang::String>("/");
static android::icu::impl::ICUResourceBundle::STRING_V2 = 0x6;
static android::icu::impl::ICUResourceBundle::TABLE16 = 0x5;
static android::icu::impl::ICUResourceBundle::TABLE32 = 0x4;
// .method static synthetic -get0()Z
bool android::icu::impl::ICUResourceBundle::_get0()
{
	
	return android::icu::impl::ICUResourceBundle::DEBUG;

}
// .method static synthetic -wrap0(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Landroid/icu/impl/ICUResourceBundle$OpenType;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::_wrap0(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> defaultID,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> openType)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "defaultID"    # Ljava/lang/String;
	//    .param p3, "root"    # Ljava/lang/ClassLoader;
	//    .param p4, "openType"    # Landroid/icu/impl/ICUResourceBundle$OpenType;
	return android::icu::impl::ICUResourceBundle::instantiateBundle(baseName, localeID, defaultID, root, openType);

}
// .method static synthetic -wrap1(Ljava/lang/String;Ljava/lang/ClassLoader;)[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICUResourceBundle::_wrap1(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> root)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "root"    # Ljava/lang/ClassLoader;
	return android::icu::impl::ICUResourceBundle::createULocaleList(baseName, root);

}
// .method static synthetic -wrap2(Landroid/icu/impl/ICUResourceBundle;)Z
bool android::icu::impl::ICUResourceBundle::_wrap2(std::shared_ptr<android::icu::impl::ICUResourceBundle> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/ICUResourceBundle;
	return _this->getNoFallback();

}
// .method static synthetic -wrap3(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::impl::ICUResourceBundle::_wrap3(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> lang)
{
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "lang"    # Ljava/lang/String;
	return android::icu::impl::ICUResourceBundle::localeIDStartsWithLangSubtag(localeID, lang);

}
// .method static synthetic -wrap4(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/util/Set;
std::shared_ptr<java::util::Set> android::icu::impl::ICUResourceBundle::_wrap4(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	return android::icu::impl::ICUResourceBundle::createFullLocaleNameSet(baseName, loader);

}
// .method static synthetic -wrap5(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/util/Set;
std::shared_ptr<java::util::Set> android::icu::impl::ICUResourceBundle::_wrap5(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	return android::icu::impl::ICUResourceBundle::createLocaleNameSet(baseName, loader);

}
// .method static constructor <clinit>()V
void android::icu::impl::ICUResourceBundle::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_1> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_2> cVar1;
	
	android::icu::impl::ICUResourceBundle::_assertionsDisabled = ( android::icu::impl::ICUResourceBundle()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER = android::icu::impl::ClassLoaderUtil::getClassLoader(android::icu::impl::ICUData());
	cVar0 = std::make_shared<android::icu::impl::ICUResourceBundle_S_1>();
	android::icu::impl::ICUResourceBundle::BUNDLE_CACHE = cVar0;
	android::icu::impl::ICUResourceBundle::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("localedata")));
	cVar1 = std::make_shared<android::icu::impl::ICUResourceBundle_S_2>();
	android::icu::impl::ICUResourceBundle::GET_AVAILABLE_CACHE = cVar1;
	return;

}
// .method protected constructor <init>(Landroid/icu/impl/ICUResourceBundle$WholeBundle;)V
android::icu::impl::ICUResourceBundle::ICUResourceBundle(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle)
{
	
	//    .param p1, "wholeBundle"    # Landroid/icu/impl/ICUResourceBundle$WholeBundle;
	// 240    invoke-direct {p0}, Landroid/icu/util/UResourceBundle;-><init>()V
	this->wholeBundle = wholeBundle;
	return;

}
// .method protected constructor <init>(Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;)V
android::icu::impl::ICUResourceBundle::ICUResourceBundle(std::shared_ptr<android::icu::impl::ICUResourceBundle> container,std::shared_ptr<java::lang::String> key)
{
	
	//    .param p1, "container"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p2, "key"    # Ljava/lang/String;
	// 256    invoke-direct {p0}, Landroid/icu/util/UResourceBundle;-><init>()V
	this->key = key;
	this->wholeBundle = container->wholeBundle;
	this->container = container;
	this->parent = container->parent;
	return;

}
// .method private static final addBundleBaseNamesFromClassLoader(Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/Set;)V
void android::icu::impl::ICUResourceBundle::addBundleBaseNamesFromClassLoader(std::shared_ptr<java::lang::String> bn,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<java::util::Set<java::lang::String>> names)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_3> cVar0;
	
	//    .param p0, "bn"    # Ljava/lang/String;
	//    .param p1, "root"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 283        value = {
	// 284            "(",
	// 285            "Ljava/lang/String;",
	// 286            "Ljava/lang/ClassLoader;",
	// 287            "Ljava/util/Set",
	// 288            "<",
	// 289            "Ljava/lang/String;",
	// 290            ">;)V"
	// 291        }
	// 292    .end annotation
	//    .local p2, "names":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar0 = std::make_shared<android::icu::impl::ICUResourceBundle_S_3>(root, bn, names);
	java::security::AccessController::doPrivileged(cVar0);
	return;

}
// .method private static final addLocaleIDsFromIndexBundle(Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/Set;)V
void android::icu::impl::ICUResourceBundle::addLocaleIDsFromIndexBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<java::util::Set<java::lang::String>> locales)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> iter;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "root"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 313        value = {
	// 314            "(",
	// 315            "Ljava/lang/String;",
	// 316            "Ljava/lang/ClassLoader;",
	// 317            "Ljava/util/Set",
	// 318            "<",
	// 319            "Ljava/lang/String;",
	// 320            ">;)V"
	// 321        }
	// 322    .end annotation
	//    .local p2, "locales":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	try {
	//label_try_start_0:
	bundle = android::icu::util::UResourceBundle::instantiateBundle(baseName, std::make_shared<java::lang::String>(std::make_shared<char[]>("res_index")), root, 0x1);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	bundle = bundle->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("InstalledLocales")));
	//    .end local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//label_try_end_13:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_0 .. :try_end_13} :catch_2c
	//    .restart local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	iter = bundle->getIterator();
	//    .local v2, "iter":Landroid/icu/util/UResourceBundleIterator;
	iter->reset();
label_goto_1a:
	if ( !(iter->hasNext()) )  
		goto label_cond_62;
	//    .local v3, "locstr":Ljava/lang/String;
	locales->add(iter->next()->getKey());
	goto label_goto_1a;
	// 384    .line 583
	// 385    .end local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	// 386    .end local v2    # "iter":Landroid/icu/util/UResourceBundleIterator;
	// 387    .end local v3    # "locstr":Ljava/lang/String;
label_catch_2c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/util/MissingResourceException;
	if ( !(android::icu::impl::ICUResourceBundle::DEBUG) )  
		goto label_cond_61;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("couldn\'t find ")))->append(baseName)->append(0x2f)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("res_index")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".res")))->toString());
	java::lang::Thread::dumpStack({const[class].FS-Param});
label_cond_61:
	return;
	// 445    .line 596
	// 446    .end local v1    # "e":Ljava/util/MissingResourceException;
	// 447    .restart local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	// 448    .restart local v2    # "iter":Landroid/icu/util/UResourceBundleIterator;
label_cond_62:
	return;

}
// .method private static addLocaleIDsFromListFile(Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/Set;)V
void android::icu::impl::ICUResourceBundle::addLocaleIDsFromListFile(std::shared_ptr<java::lang::String> bn,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<java::util::Set<java::lang::String>> locales)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::io::InputStream> s;
	std::shared_ptr<java::io::BufferedReader> br;
	std::shared_ptr<java::io::InputStreamReader> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::String> line;
	
	//    .param p0, "bn"    # Ljava/lang/String;
	//    .param p1, "root"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 458        value = {
	// 459            "(",
	// 460            "Ljava/lang/String;",
	// 461            "Ljava/lang/ClassLoader;",
	// 462            "Ljava/util/Set",
	// 463            "<",
	// 464            "Ljava/lang/String;",
	// 465            ">;)V"
	// 466        }
	// 467    .end annotation
	//    .local p2, "locales":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	try {
	//label_try_start_0:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	s = root->getResourceAsStream(cVar0->append(bn)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("fullLocaleNames.lst")))->toString());
	//    .local v3, "s":Ljava/io/InputStream;
	if ( !(s) )  
		goto label_cond_48;
	cVar1 = std::make_shared<java::io::InputStreamReader>(s, std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")));
	br = std::make_shared<java::io::BufferedReader>(cVar1);
	//label_try_end_27:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_47;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_27} :catch_47
	//    .local v0, "br":Ljava/io/BufferedReader;
label_cond_27:
label_goto_27:
	try {
	//label_try_start_27:
	line = br->readLine();
	//    .local v2, "line":Ljava/lang/String;
	if ( !(line) )  
		goto label_cond_49;
	if ( !(line->length()) )  
		goto label_cond_27;
	if ( !(( line->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("#"))) ^ 0x1)) )  
		goto label_cond_27;
	locales->add(line);
	//label_try_end_41:
	}
	catch (...){
		goto label_catchall_42;
	}
	//    .catchall {:try_start_27 .. :try_end_41} :catchall_42
	goto label_goto_27;
	// 548    .line 650
	// 549    .end local v2    # "line":Ljava/lang/String;
label_catchall_42:
	// move-exception
	
	try {
	//label_try_start_43:
	br->close();
	// throw
	throw;
	// 560    .line 654
	// 561    .end local v0    # "br":Ljava/io/BufferedReader;
	// 562    .end local v3    # "s":Ljava/io/InputStream;
label_catch_47:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_48:
label_goto_48:
	return;
	// 571    .line 651
	// 572    .restart local v0    # "br":Ljava/io/BufferedReader;
	// 573    .restart local v2    # "line":Ljava/lang/String;
	// 574    .restart local v3    # "s":Ljava/io/InputStream;
label_cond_49:
	br->close();
	//label_try_end_4c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_47;
	}
	//    .catch Ljava/io/IOException; {:try_start_43 .. :try_end_4c} :catch_47
	goto label_goto_48;

}
// .method private static countPathKeys(Ljava/lang/String;)I
int android::icu::impl::ICUResourceBundle::countPathKeys(std::shared_ptr<java::lang::String> path)
{
	
	int num;
	int i;
	
	//    .param p0, "path"    # Ljava/lang/String;
	if ( !(path->isEmpty()) )  
		goto label_cond_8;
	return 0x0;
	// 600    .line 989
label_cond_8:
	num = 0x1;
	//    .local v1, "num":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_a:
	if ( i >= path->length() )
		goto label_cond_1d;
	if ( path->charAt(i) != 0x2f )
		goto label_cond_1a;
	num = ( num + 0x1);
label_cond_1a:
	i = ( i + 0x1);
	goto label_goto_a;
	// 634    .line 995
label_cond_1d:
	return num;

}
// .method public static createBundle(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::createBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> root)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "root"    # Ljava/lang/ClassLoader;
	reader = android::icu::impl::ICUResourceBundleReader::getReader(baseName, localeID, root);
	//    .local v0, "reader":Landroid/icu/impl/ICUResourceBundleReader;
	if ( reader )     
		goto label_cond_8;
	return 0x0;
	// 660    .line 1289
label_cond_8:
	return android::icu::impl::ICUResourceBundle::getBundle(reader, baseName, localeID, root);

}
// .method private static createFullLocaleNameSet(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundle::createFullLocaleNameSet(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared_ptr<java::lang::String> bn;
	std::shared_ptr<java::util::HashSet> set;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::util::Iterator> iter;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	auto cVar0;
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 674        value = {
	// 675            "(",
	// 676            "Ljava/lang/String;",
	// 677            "Ljava/lang/ClassLoader;",
	// 678            ")",
	// 679            "Ljava/util/Set",
	// 680            "<",
	// 681            "Ljava/lang/String;",
	// 682            ">;"
	// 683        }
	// 684    .end annotation
	if ( !(baseName->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))) )  
		goto label_cond_76;
	bn = baseName;
	//    .local v0, "bn":Ljava/lang/String;
label_goto_a:
	set = std::make_shared<java::util::HashSet>();
	//    .local v4, "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .local v5, "skipScan":Ljava/lang/String;
	if ( android::icu::impl::ICUConfig::get(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.ICUResourceBundle.skipRuntimeLocaleResourceScan")), std::make_shared<java::lang::String>(std::make_shared<char[]>("false")))->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("true"))) )     
		goto label_cond_aa;
	android::icu::impl::ICUResourceBundle::addBundleBaseNamesFromClassLoader(bn, loader, set);
	if ( !(baseName->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")))) )  
		goto label_cond_46;
	if ( baseName->length() != std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"))->length() )
		goto label_cond_8b;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_3e:
	if ( !(cVar0) )  
		goto label_cond_46;
	android::icu::impl::ICUBinary::addBaseNamesInFileFolder(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>(".res")), set);
label_cond_46:
	set->remove(std::make_shared<java::lang::String>(std::make_shared<char[]>("res_index")));
	iter = set->iterator();
	//    .local v2, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
label_cond_50:
label_goto_50:
	if ( !(iter->hasNext()) )  
		goto label_cond_aa;
	name = iter->next();
	name->checkCast("java::lang::String");
	//    .local v3, "name":Ljava/lang/String;
	if ( name->length() == 0x1 )
		goto label_cond_6a;
	if ( name->length() <= 0x3 )
		goto label_cond_50;
label_cond_6a:
	if ( name->indexOf(0x5f) >= 0 )
		goto label_cond_50;
	iter->remove();
	goto label_goto_50;
	// 822    .line 660
	// 823    .end local v0    # "bn":Ljava/lang/String;
	// 824    .end local v2    # "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	// 825    .end local v3    # "name":Ljava/lang/String;
	// 826    .end local v4    # "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 827    .end local v5    # "skipScan":Ljava/lang/String;
label_cond_76:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar1->append(baseName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->toString();
	//    .restart local v0    # "bn":Ljava/lang/String;
	goto label_goto_a;
	// 850    .line 670
	// 851    .restart local v4    # "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 852    .restart local v5    # "skipScan":Ljava/lang/String;
label_cond_8b:
	if ( baseName->charAt(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"))->length()) != 0x2f )
		goto label_cond_a8;
	cVar0 = baseName->substring(( std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"))->length() + 0x1));
	//    .local v1, "folder":Ljava/lang/String;
	goto label_goto_3e;
	// 884    .line 673
	// 885    .end local v1    # "folder":Ljava/lang/String;
label_cond_a8:
	cVar0 = 0x0;
	//    .local v1, "folder":Ljava/lang/String;
	goto label_goto_3e;
	// 892    .line 691
	// 893    .end local v1    # "folder":Ljava/lang/String;
label_cond_aa:
	if ( !(set->isEmpty()) )  
		goto label_cond_d0;
	if ( !(android::icu::impl::ICUResourceBundle::DEBUG) )  
		goto label_cond_cd;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unable to enumerate data files in ")))->append(baseName)->toString());
label_cond_cd:
	android::icu::impl::ICUResourceBundle::addLocaleIDsFromListFile(bn, loader, set);
label_cond_d0:
	if ( !(set->isEmpty()) )  
		goto label_cond_d9;
	android::icu::impl::ICUResourceBundle::addLocaleIDsFromIndexBundle(baseName, loader, set);
label_cond_d9:
	set->remove(std::make_shared<java::lang::String>(std::make_shared<char[]>("root")));
	set->add(android::icu::util::ULocale::ROOT->toString());
	return java::util::Collections::unmodifiableSet(set);

}
// .method private static createLocaleNameSet(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundle::createLocaleNameSet(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared_ptr<java::util::HashSet> set;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 971        value = {
	// 972            "(",
	// 973            "Ljava/lang/String;",
	// 974            "Ljava/lang/ClassLoader;",
	// 975            ")",
	// 976            "Ljava/util/Set",
	// 977            "<",
	// 978            "Ljava/lang/String;",
	// 979            ">;"
	// 980        }
	// 981    .end annotation
	set = std::make_shared<java::util::HashSet>();
	//    .local v0, "set":Ljava/util/HashSet;, "Ljava/util/HashSet<Ljava/lang/String;>;"
	android::icu::impl::ICUResourceBundle::addLocaleIDsFromIndexBundle(baseName, loader, set);
	return java::util::Collections::unmodifiableSet(set);

}
// .method private static final createULocaleList(Ljava/lang/String;Ljava/lang/ClassLoader;)[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICUResourceBundle::createULocaleList(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> root)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	int i;
	std::shared<std::vector<std::vector<android::icu::util::ULocale>>> locales;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> iter;
	std::shared_ptr<java::lang::String> locstr;
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "root"    # Ljava/lang/ClassLoader;
	bundle = android::icu::util::UResourceBundle::instantiateBundle(baseName, std::make_shared<java::lang::String>(std::make_shared<char[]>("res_index")), root, 0x1);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	bundle = bundle->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("InstalledLocales")));
	//    .end local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .restart local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	//    .local v4, "length":I
	i = 0x0;
	//    .local v1, "i":I
	locales = std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(bundle->getSize());
	//    .local v5, "locales":[Landroid/icu/util/ULocale;
	iter = bundle->getIterator();
	//    .local v3, "iter":Landroid/icu/util/UResourceBundleIterator;
	iter->reset();
label_goto_21:
	if ( !(iter->hasNext()) )  
		goto label_cond_4b;
	locstr = iter->next()->getKey();
	//    .local v6, "locstr":Ljava/lang/String;
	if ( !(locstr->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("root")))) )  
		goto label_cond_40;
	//    .end local v1    # "i":I
	//    .local v2, "i":I
	locales[i] = android::icu::util::ULocale::ROOT;
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_21;
	// 1095    .line 568
label_cond_40:
	//    .end local v1    # "i":I
	//    .restart local v2    # "i":I
	cVar0 = std::make_shared<android::icu::util::ULocale>(locstr);
	locales[i] = cVar0;
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_21;
	// 1113    .line 571
	// 1114    .end local v6    # "locstr":Ljava/lang/String;
label_cond_4b:
	0x0;
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	return locales;

}
// .method private static final findResourceWithFallback(Ljava/lang/String;Landroid/icu/util/UResourceBundle;Landroid/icu/util/UResourceBundle;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::findResourceWithFallback(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::util::UResourceBundle> actualBundle,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> base;
	int depth;
	int numPathKeys;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> keys;
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "actualBundle"    # Landroid/icu/util/UResourceBundle;
	//    .param p2, "requested"    # Landroid/icu/util/UResourceBundle;
	if ( path->length() )     
		goto label_cond_8;
	return 0x0;
label_cond_8:
	base = actualBundle;
	base->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "base":Landroid/icu/impl/ICUResourceBundle;
	depth = base->getResDepth();
	//    .local v1, "depth":I
	numPathKeys = android::icu::impl::ICUResourceBundle::countPathKeys(path);
	//    .local v3, "numPathKeys":I
	if ( android::icu::impl::ICUResourceBundle::_assertionsDisabled )     
		goto label_cond_1f;
	if ( numPathKeys > 0 ) 
		goto label_cond_1f;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1174    .line 813
label_cond_1f:
	keys = std::make_shared<std::vector<std::vector<java::lang::String>>>((depth + numPathKeys));
	//    .local v2, "keys":[Ljava/lang/String;
	android::icu::impl::ICUResourceBundle::getResPathKeys(path, numPathKeys, keys, depth);
	return android::icu::impl::ICUResourceBundle::findResourceWithFallback(keys, depth, base, requested);

}
// .method private static final findResourceWithFallback([Ljava/lang/String;ILandroid/icu/impl/ICUResourceBundle;Landroid/icu/util/UResourceBundle;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::findResourceWithFallback(std::shared_ptr<std::vector<java::lang::String>> keys,int depth,std::shared_ptr<android::icu::impl::ICUResourceBundle> base,std::shared_ptr<android::icu::util::UResourceBundle> cVar1)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<android::icu::util::UResourceBundle> cVar1;
	int depth;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> sub;
	auto nextBase;
	int baseDepth;
	std::shared<std::vector<std::vector<java::lang::String>>> newKeys;
	std::shared_ptr<java::lang::Object> keys;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> base;
	
	//    .param p0, "keys"    # [Ljava/lang/String;
	//    .param p1, "depth"    # I
	//    .param p2, "base"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p3, "requested"    # Landroid/icu/util/UResourceBundle;
	cVar0 = 0x0;
	if ( cVar1 )     
		goto label_cond_4;
	cVar1 = base;
label_cond_4:
label_goto_4:
	depth = ( depth + 0x1);
	//    .end local p1    # "depth":I
	//    .local v1, "depth":I
	//    .local v5, "subKey":Ljava/lang/String;
	sub = base->handleGet(keys[depth], cVar0, cVar1);
	sub->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v4, "sub":Landroid/icu/impl/ICUResourceBundle;
	if ( sub )     
		goto label_cond_19;
	depth = ( depth + -0x1);
	//    .end local v1    # "depth":I
	//    .restart local p1    # "depth":I
	nextBase = base->getParent();
	//    .local v3, "nextBase":Landroid/icu/impl/ICUResourceBundle;
	if ( nextBase )     
		goto label_cond_20;
	return cVar0;
	// 1246    .line 833
	// 1247    .end local v3    # "nextBase":Landroid/icu/impl/ICUResourceBundle;
	// 1248    .end local p1    # "depth":I
	// 1249    .restart local v1    # "depth":I
label_cond_19:
	if ( depth != keys->size() )
		goto label_cond_1d;
	return sub;
	// 1258    .line 837
label_cond_1d:
	base = sub;
	depth = depth;
	//    .end local v1    # "depth":I
	//    .restart local p1    # "depth":I
	goto label_goto_4;
	// 1268    .line 848
	// 1269    .restart local v3    # "nextBase":Landroid/icu/impl/ICUResourceBundle;
label_cond_20:
	baseDepth = base->getResDepth();
	//    .local v0, "baseDepth":I
	if ( depth == baseDepth )
		goto label_cond_31;
	newKeys = std::make_shared<std::vector<std::vector<java::lang::String>>>(((keys->size() -  depth) +  baseDepth));
	//    .local v2, "newKeys":[Ljava/lang/String;
	java::lang::System::arraycopy(keys, depth, newKeys, baseDepth, (keys->size() -  depth));
	keys = newKeys;
	//    .end local v2    # "newKeys":[Ljava/lang/String;
label_cond_31:
	base->getResPathKeys(keys, baseDepth);
	base = nextBase;
	depth = 0x0;
	goto label_goto_4;

}
// .method private static final findStringWithFallback(Ljava/lang/String;Landroid/icu/util/UResourceBundle;Landroid/icu/util/UResourceBundle;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundle::findStringWithFallback(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::util::UResourceBundle> actualBundle,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> base;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader;
	int res;
	int baseDepth;
	int depth;
	int numPathKeys;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> keys;
	int type;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer> cVar1;
	std::shared_ptr<java::lang::String> subKey;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> nextBase;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar2;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar3;
	std::shared<std::vector<std::vector<java::lang::String>>> newKeys;
	std::shared_ptr<std::vector<java::lang::String>> keys;
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "actualBundle"    # Landroid/icu/util/UResourceBundle;
	//    .param p2, "requested"    # Landroid/icu/util/UResourceBundle;
	if ( path->length() )     
		goto label_cond_8;
	return 0x0;
	// 1332    .line 869
label_cond_8:
	if ( actualBundle->instanceOf("android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer") )     
		goto label_cond_10;
	return 0x0;
	// 1345    .line 872
label_cond_10:
	if ( requested )     
		goto label_cond_14;
label_cond_14:
	base = actualBundle;
	base->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v1, "base":Landroid/icu/impl/ICUResourceBundle;
	reader = base->wholeBundle->reader;
	//    .local v13, "reader":Landroid/icu/impl/ICUResourceBundleReader;
	res = -0x1;
	//    .local v5, "res":I
	baseDepth = base->getResDepth();
	//    .local v8, "baseDepth":I
	depth = baseDepth;
	//    .local v3, "depth":I
	numPathKeys = android::icu::impl::ICUResourceBundle::countPathKeys(path);
	//    .local v12, "numPathKeys":I
	if ( android::icu::impl::ICUResourceBundle::_assertionsDisabled )     
		goto label_cond_32;
	if ( numPathKeys > 0 ) 
		goto label_cond_32;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1398    .line 886
label_cond_32:
	keys = std::make_shared<std::vector<std::vector<java::lang::String>>>((baseDepth + numPathKeys));
	//    .local v2, "keys":[Ljava/lang/String;
	android::icu::impl::ICUResourceBundle::getResPathKeys(path, numPathKeys, keys, baseDepth);
	depth = depth;
	//    .end local v3    # "depth":I
	//    .local v9, "depth":I
label_goto_3c:
	if ( res != -0x1 )
		goto label_cond_6a;
	type = base->getType();
	//    .local v17, "type":I
	if ( type == 0x2 )
		goto label_cond_4e;
	if ( type != 0x8 )
		goto label_cond_68;
label_cond_4e:
	cVar1 = base;
	cVar1->checkCast("android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer");
	//    .local v14, "readerContainer":Landroid/icu/impl/ICUResourceBundleReader$Container;
label_goto_53:
	depth = ( depth + 0x1);
	//    .end local v9    # "depth":I
	//    .restart local v3    # "depth":I
	subKey = keys[depth];
	//    .local v4, "subKey":Ljava/lang/String;
	res = readerContainer->getResource(reader, subKey);
	if ( res != -0x1 )
		goto label_cond_87;
	( depth + -0x1);
	//    .end local v4    # "subKey":Ljava/lang/String;
	//    .end local v14    # "readerContainer":Landroid/icu/impl/ICUResourceBundleReader$Container;
label_goto_60:
	nextBase = base->getParent();
	//    .local v11, "nextBase":Landroid/icu/impl/ICUResourceBundle;
	if ( nextBase )     
		goto label_cond_d5;
	return 0x0;
	// 1487    .end local v3    # "depth":I
	// 1488    .end local v11    # "nextBase":Landroid/icu/impl/ICUResourceBundle;
	// 1489    .restart local v9    # "depth":I
label_cond_68:
	depth = depth;
	//    .end local v9    # "depth":I
	//    .restart local v3    # "depth":I
	goto label_goto_60;
	// 1498    .line 900
	// 1499    .end local v3    # "depth":I
	// 1500    .end local v17    # "type":I
	// 1501    .restart local v9    # "depth":I
label_cond_6a:
	type = android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res);
	//    .restart local v17    # "type":I
	if ( !(android::icu::impl::ICUResourceBundleReader::URES_IS_TABLE(type)) )  
		goto label_cond_79;
	//    .restart local v14    # "readerContainer":Landroid/icu/impl/ICUResourceBundleReader$Container;
	goto label_goto_53;
	// 1523    .line 903
	// 1524    .end local v14    # "readerContainer":Landroid/icu/impl/ICUResourceBundleReader$Container;
label_cond_79:
	if ( !(android::icu::impl::ICUResourceBundleReader::URES_IS_ARRAY(type)) )  
		goto label_cond_84;
	//    .restart local v14    # "readerContainer":Landroid/icu/impl/ICUResourceBundleReader$Container;
	goto label_goto_53;
	// 1540    .line 906
	// 1541    .end local v14    # "readerContainer":Landroid/icu/impl/ICUResourceBundleReader$Container;
label_cond_84:
	res = -0x1;
	depth = depth;
	//    .end local v9    # "depth":I
	//    .restart local v3    # "depth":I
	goto label_goto_60;
	// 1552    .line 917
	// 1553    .restart local v4    # "subKey":Ljava/lang/String;
	// 1554    .restart local v14    # "readerContainer":Landroid/icu/impl/ICUResourceBundleReader$Container;
label_cond_87:
	if ( android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(res) != 0x3 )
		goto label_cond_a2;
	base->getResPathKeys(keys, baseDepth);
	cVar2 = android::icu::impl::ICUResourceBundle::getAliasedResource(base, keys, depth, subKey, res, 0x0, actualBundle);
label_goto_98:
	if ( depth != keys->size() )
		goto label_cond_b5;
	if ( !(cVar2) )  
		goto label_cond_a5;
	return cVar2->getString();
	// 1592    .line 921
label_cond_a2:
	cVar2 = 0x0;
	//    .local v16, "sub":Landroid/icu/impl/ICUResourceBundle;
	goto label_goto_98;
	// 1599    .line 928
	// 1600    .end local v16    # "sub":Landroid/icu/impl/ICUResourceBundle;
label_cond_a5:
	s = reader->getString(res);
	//    .local v15, "s":Ljava/lang/String;
	if ( s )     
		goto label_cond_b4;
	cVar3 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar3;
	// 1619    .line 932
label_cond_b4:
	return s;
	// 1623    .line 935
	// 1624    .end local v15    # "s":Ljava/lang/String;
label_cond_b5:
	if ( !(cVar2) )  
		goto label_cond_d2;
	base = cVar2;
	reader = cVar2->wholeBundle->reader;
	res = -0x1;
	baseDepth = base->getResDepth();
	if ( depth == baseDepth )
		goto label_cond_d2;
	newKeys = std::make_shared<std::vector<std::vector<java::lang::String>>>(((keys->size() -  depth) +  baseDepth));
	//    .local v10, "newKeys":[Ljava/lang/String;
	java::lang::System::arraycopy(keys, depth, newKeys, baseDepth, (keys->size() -  depth));
	keys = newKeys;
	depth = baseDepth;
	//    .end local v4    # "subKey":Ljava/lang/String;
	//    .end local v10    # "newKeys":[Ljava/lang/String;
	//    .end local v14    # "readerContainer":Landroid/icu/impl/ICUResourceBundleReader$Container;
label_cond_d2:
label_goto_d2:
	depth = depth;
	//    .end local v3    # "depth":I
	//    .restart local v9    # "depth":I
	goto label_goto_3c;
	// 1683    .line 958
	// 1684    .end local v9    # "depth":I
	// 1685    .restart local v3    # "depth":I
	// 1686    .restart local v11    # "nextBase":Landroid/icu/impl/ICUResourceBundle;
label_cond_d5:
	base->getResPathKeys(keys, baseDepth);
	base = nextBase;
	reader = nextBase->wholeBundle->reader;
	baseDepth = 0x0;
	depth = 0x0;
	goto label_goto_d2;

}
// .method protected static getAliasedResource(Landroid/icu/impl/ICUResourceBundle;[Ljava/lang/String;ILjava/lang/String;ILjava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::getAliasedResource(std::shared_ptr<android::icu::impl::ICUResourceBundle> base,std::shared_ptr<std::vector<java::lang::String>> keys,int depth,std::shared_ptr<java::lang::String> key,int _resource,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle;
	std::shared_ptr<java::lang::ClassLoader> loaderToUse;
	std::shared_ptr<java::lang::String> keyPath;
	std::shared_ptr<java::lang::Object> rpath;
	std::shared_ptr<java::util::HashMap> aliasesVisited;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int i;
	int j;
	std::shared_ptr<java::lang::String> bundleName;
	int bundle;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> sub;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::shared_ptr<java::util::MissingResourceException> cVar2;
	auto bundle;
	int numKeys;
	std::shared_ptr<java::lang::Object> cVar3;
	int cVar4;
	std::shared_ptr<std::vector<java::lang::String>> cVar5;
	int idx;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	auto keyPath;
	
	//    .param p0, "base"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p1, "keys"    # [Ljava/lang/String;
	//    .param p2, "depth"    # I
	//    .param p3, "key"    # Ljava/lang/String;
	//    .param p4, "_resource"    # I
	//    .param p6, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1715        value = {
	// 1716            "(",
	// 1717            "Landroid/icu/impl/ICUResourceBundle;",
	// 1718            "[",
	// 1719            "Ljava/lang/String;",
	// 1720            "I",
	// 1721            "Ljava/lang/String;",
	// 1722            "I",
	// 1723            "Ljava/util/HashMap",
	// 1724            "<",
	// 1725            "Ljava/lang/String;",
	// 1726            "Ljava/lang/String;",
	// 1727            ">;",
	// 1728            "Landroid/icu/util/UResourceBundle;",
	// 1729            ")",
	// 1730            "Landroid/icu/impl/ICUResourceBundle;"
	// 1731        }
	// 1732    .end annotation
	//    .local p5, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	wholeBundle = base->wholeBundle;
	//    .local v13, "wholeBundle":Landroid/icu/impl/ICUResourceBundle$WholeBundle;
	loaderToUse = wholeBundle->loader;
	//    .local v8, "loaderToUse":Ljava/lang/ClassLoader;
	keyPath = 0x0;
	//    .local v7, "keyPath":Ljava/lang/String;
	rpath = wholeBundle->reader->getAlias(_resource);
	//    .local v11, "rpath":Ljava/lang/String;
	if ( aliasesVisited )     
		goto label_cond_16;
	//    .end local p5    # "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	aliasesVisited = std::make_shared<java::util::HashMap>();
	//    .restart local p5    # "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_16:
	if ( !(aliasesVisited->get(rpath)) )  
		goto label_cond_27;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Circular references in the resource bundles")));
	// throw
	throw cVar0;
	// 1791    .line 1413
label_cond_27:
	aliasesVisited->put(rpath, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	if ( rpath->indexOf(0x2f) )     
		goto label_cond_d1;
	i = rpath->indexOf(0x2f, 0x1);
	//    .local v4, "i":I
	j = rpath->indexOf(0x2f, ( i + 0x1));
	//    .local v6, "j":I
	bundleName = rpath->substring(0x1, i);
	//    .local v3, "bundleName":Ljava/lang/String;
	if ( j >= 0 )
		goto label_cond_8a;
	//    .end local v7    # "keyPath":Ljava/lang/String;
	//    .local v9, "locale":Ljava/lang/String;
label_goto_53:
	if ( !(bundleName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("ICUDATA")))) )  
		goto label_cond_9b;
	bundleName = std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"));
	loaderToUse = android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER;
	//    .end local v6    # "j":I
label_cond_61:
label_goto_61:
	bundle = 0x0;
	//    .local v2, "bundle":Landroid/icu/impl/ICUResourceBundle;
	sub = 0x0;
	//    .local v12, "sub":Landroid/icu/impl/ICUResourceBundle;
	if ( !(bundleName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("LOCALE")))) )  
		goto label_cond_102;
	wholeBundle->baseName;
	keyPath = rpath->substring(( std::make_shared<java::lang::String>(std::make_shared<char[]>("LOCALE"))->length() + 0x2), rpath->length());
	//    .local v7, "keyPath":Ljava/lang/String;
	bundle = requested;
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v2, "bundle":Landroid/icu/impl/ICUResourceBundle;
label_goto_83:
	if ( !(bundle->container) )  
		goto label_cond_eb;
	bundle = bundle->container;
	goto label_goto_83;
	// 1922    .line 1421
	// 1923    .end local v2    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	// 1924    .end local v9    # "locale":Ljava/lang/String;
	// 1925    .end local v12    # "sub":Landroid/icu/impl/ICUResourceBundle;
	// 1926    .restart local v6    # "j":I
	// 1927    .local v7, "keyPath":Ljava/lang/String;
label_cond_8a:
	//    .restart local v9    # "locale":Ljava/lang/String;
	keyPath = rpath->substring(( j + 0x1), rpath->length());
	//    .local v7, "keyPath":Ljava/lang/String;
	goto label_goto_53;
	// 1950    .line 1428
	// 1951    .end local v7    # "keyPath":Ljava/lang/String;
label_cond_9b:
	if ( bundleName->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("ICUDATA"))) <= -0x1 )
		goto label_cond_61;
	idx = bundleName->indexOf(0x2d);
	//    .local v5, "idx":I
	if ( idx <= -0x1 )
		goto label_cond_61;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	bundleName = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/")))->append(bundleName->substring(( idx + 0x1), bundleName->length()))->toString();
	loaderToUse = android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER;
	goto label_goto_61;
	// 2012    .line 1437
	// 2013    .end local v3    # "bundleName":Ljava/lang/String;
	// 2014    .end local v4    # "i":I
	// 2015    .end local v5    # "idx":I
	// 2016    .end local v6    # "j":I
	// 2017    .end local v9    # "locale":Ljava/lang/String;
	// 2018    .local v7, "keyPath":Ljava/lang/String;
label_cond_d1:
	i = rpath->indexOf(0x2f);
	//    .restart local v4    # "i":I
	if ( i == -0x1 )
		goto label_cond_e9;
	//    .restart local v9    # "locale":Ljava/lang/String;
	keyPath = rpath->substring(( i + 0x1));
	//    .end local v7    # "keyPath":Ljava/lang/String;
label_goto_e5:
	bundleName = wholeBundle->baseName;
	//    .restart local v3    # "bundleName":Ljava/lang/String;
	goto label_goto_61;
	// 2055    .line 1442
	// 2056    .end local v3    # "bundleName":Ljava/lang/String;
	// 2057    .end local v9    # "locale":Ljava/lang/String;
	// 2058    .restart local v7    # "keyPath":Ljava/lang/String;
label_cond_e9:
	//    .restart local v9    # "locale":Ljava/lang/String;
	goto label_goto_e5;
	// 2065    .line 1457
	// 2066    .restart local v2    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	// 2067    .restart local v3    # "bundleName":Ljava/lang/String;
	// 2068    .local v7, "keyPath":Ljava/lang/String;
	// 2069    .restart local v12    # "sub":Landroid/icu/impl/ICUResourceBundle;
label_cond_eb:
	sub = android::icu::impl::ICUResourceBundle::findResourceWithFallback(keyPath, bundle, 0x0);
	//    .end local v7    # "keyPath":Ljava/lang/String;
	//    .end local v12    # "sub":Landroid/icu/impl/ICUResourceBundle;
label_cond_f0:
	if ( sub )     
		goto label_cond_143;
	cVar2 = std::make_shared<java::util::MissingResourceException>(wholeBundle->localeID, wholeBundle->baseName, key);
	// throw
	throw cVar2;
	// 2100    .line 1459
	// 2101    .local v2, "bundle":Landroid/icu/impl/ICUResourceBundle;
	// 2102    .restart local v12    # "sub":Landroid/icu/impl/ICUResourceBundle;
label_cond_102:
	bundle = android::icu::impl::ICUResourceBundle::getBundleInstance(bundleName, locale, loaderToUse, 0x0);
	//    .local v2, "bundle":Landroid/icu/impl/ICUResourceBundle;
	if ( !(keyPath) )  
		goto label_cond_12e;
	numKeys = android::icu::impl::ICUResourceBundle::countPathKeys(keyPath);
	//    .local v10, "numKeys":I
	if ( numKeys <= 0 )
		goto label_cond_119;
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::String>>>(numKeys);
	android::icu::impl::ICUResourceBundle::getResPathKeys(keyPath, numKeys, cVar3, 0x0);
label_cond_119:
label_goto_119:
	if ( numKeys <= 0 )
		goto label_cond_f0;
	sub = bundle;
	//    .local v12, "sub":Landroid/icu/impl/ICUResourceBundle;
	i = 0x0;
label_goto_11d:
	if ( !(sub) )  
		goto label_cond_f0;
	if ( i >= numKeys )
		goto label_cond_f0;
	sub = sub->get(cVar3[i], aliasesVisited, requested);
	i = ( i + 0x1);
	goto label_goto_11d;
	// 2168    .line 1468
	// 2169    .end local v10    # "numKeys":I
	// 2170    .local v12, "sub":Landroid/icu/impl/ICUResourceBundle;
label_cond_12e:
	if ( !(keys) )  
		goto label_cond_133;
	//    .restart local v10    # "numKeys":I
	goto label_goto_119;
	// 2180    .line 1471
	// 2181    .end local v10    # "numKeys":I
label_cond_133:
	cVar4 = base->getResDepth();
	numKeys = ( cVar4 + 0x1);
	//    .restart local v10    # "numKeys":I
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(numKeys);
	base->getResPathKeys(cVar5, cVar4);
	cVar5[cVar4] = key;
	goto label_goto_119;
	// 2204    .line 1492
	// 2205    .end local v10    # "numKeys":I
	// 2206    .end local v12    # "sub":Landroid/icu/impl/ICUResourceBundle;
label_cond_143:
	return sub;

}
// .method private getAllItemsWithFallback(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/ICUResourceBundleReader$ReaderValue;Landroid/icu/impl/UResource$Sink;)V
void android::icu::impl::ICUResourceBundle::getAllItemsWithFallback(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderValue> readerValue,std::shared_ptr<android::icu::impl::UResource_S_Sink> sink)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> impl;
	std::shared_ptr<java::lang::String> cVar1;
	bool cVar2;
	std::shared_ptr<java::util::ResourceBundle> parentBundle;
	int depth;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared<std::vector<std::vector<java::lang::String>>> pathKeys;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "readerValue"    # Landroid/icu/impl/ICUResourceBundleReader$ReaderValue;
	//    .param p3, "sink"    # Landroid/icu/impl/UResource$Sink;
	cVar0 = 0x0;
	impl = this;
	impl->checkCast("android::icu::impl::ICUResourceBundleImpl");
	//    .local v1, "impl":Landroid/icu/impl/ICUResourceBundleImpl;
	readerValue->reader = impl->wholeBundle->reader;
	readerValue->res = impl->getResource();
	if ( !(this->key) )  
		goto label_cond_37;
	cVar1 = this->key;
label_goto_17:
	key->setString(cVar1);
	if ( this->parent )     
		goto label_cond_3b;
	cVar2 = 0x1;
label_goto_1f:
	sink->put(key, readerValue, cVar2);
	if ( !(this->parent) )  
		goto label_cond_36;
	parentBundle = this->parent;
	parentBundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v2, "parentBundle":Landroid/icu/impl/ICUResourceBundle;
	depth = this->getResDepth();
	//    .local v0, "depth":I
	if ( depth )     
		goto label_cond_3d;
	rb = parentBundle;
	//    .local v4, "rb":Landroid/icu/impl/ICUResourceBundle;
label_goto_31:
	if ( !(rb) )  
		goto label_cond_36;
	rb->getAllItemsWithFallback(key, readerValue, sink);
	//    .end local v0    # "depth":I
	//    .end local v2    # "parentBundle":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v4    # "rb":Landroid/icu/impl/ICUResourceBundle;
label_cond_36:
	return;
	// 2300    .line 412
label_cond_37:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_17;
label_cond_3b:
	cVar2 = cVar0;
	goto label_goto_1f;
	// 2312    .line 425
	// 2313    .restart local v0    # "depth":I
	// 2314    .restart local v2    # "parentBundle":Landroid/icu/impl/ICUResourceBundle;
label_cond_3d:
	pathKeys = std::make_shared<std::vector<std::vector<java::lang::String>>>(depth);
	//    .local v3, "pathKeys":[Ljava/lang/String;
	this->getResPathKeys(pathKeys, depth);
	//    .restart local v4    # "rb":Landroid/icu/impl/ICUResourceBundle;
	goto label_goto_31;

}
// .method private static getAvailEntry(Ljava/lang/String;Ljava/lang/ClassLoader;)Landroid/icu/impl/ICUResourceBundle$AvailEntry;
std::shared_ptr<android::icu::impl::ICUResourceBundle_S_AvailEntry> android::icu::impl::ICUResourceBundle::getAvailEntry(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_AvailEntry> cVar0;
	
	//    .param p0, "key"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	cVar0 = android::icu::impl::ICUResourceBundle::GET_AVAILABLE_CACHE->getInstance(key, loader);
	cVar0->checkCast("android::icu::impl::ICUResourceBundle_S_AvailEntry");
	return cVar0;

}
// .method public static getAvailableLocaleNameSet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundle::getAvailableLocaleNameSet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2352        value = {
	// 2353            "()",
	// 2354            "Ljava/util/Set",
	// 2355            "<",
	// 2356            "Ljava/lang/String;",
	// 2357            ">;"
	// 2358        }
	// 2359    .end annotation
	return android::icu::impl::ICUResourceBundle::getAvailableLocaleNameSet(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);

}
// .method public static getAvailableLocaleNameSet(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundle::getAvailableLocaleNameSet(std::shared_ptr<java::lang::String> bundlePrefix,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	//    .param p0, "bundlePrefix"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2379        value = {
	// 2380            "(",
	// 2381            "Ljava/lang/String;",
	// 2382            "Ljava/lang/ClassLoader;",
	// 2383            ")",
	// 2384            "Ljava/util/Set",
	// 2385            "<",
	// 2386            "Ljava/lang/String;",
	// 2387            ">;"
	// 2388        }
	// 2389    .end annotation
	return android::icu::impl::ICUResourceBundle::getAvailEntry(bundlePrefix, loader)->getLocaleNameSet();

}
// .method public static final getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::impl::ICUResourceBundle::getAvailableLocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailEntry(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->getLocaleList();

}
// .method public static final getAvailableLocales(Ljava/lang/String;Ljava/lang/ClassLoader;)[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::impl::ICUResourceBundle::getAvailableLocales(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	return android::icu::impl::ICUResourceBundle::getAvailEntry(baseName, loader)->getLocaleList();

}
// .method public static final getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICUResourceBundle::getAvailableULocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableULocales(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);

}
// .method public static final getAvailableULocales(Ljava/lang/String;Ljava/lang/ClassLoader;)[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICUResourceBundle::getAvailableULocales(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	return android::icu::impl::ICUResourceBundle::getAvailEntry(baseName, loader)->getULocaleList();

}
// .method private static getBundle(Landroid/icu/impl/ICUResourceBundleReader;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::getBundle(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	int rootRes;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wb;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl_S_ResourceTable> rootTable;
	std::shared_ptr<java::lang::String> aliasString;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	
	//    .param p0, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p1, "baseName"    # Ljava/lang/String;
	//    .param p2, "localeID"    # Ljava/lang/String;
	//    .param p3, "loader"    # Ljava/lang/ClassLoader;
	rootRes = reader->getRootResource();
	//    .local v1, "rootRes":I
	if ( !(android::icu::impl::ICUResourceBundleReader::URES_IS_TABLE(android::icu::impl::ICUResourceBundleReader::RES_GET_TYPE(rootRes))) )  
		goto label_cond_28;
	wb = std::make_shared<android::icu::impl::ICUResourceBundle_S_WholeBundle>(baseName, localeID, loader, reader);
	//    .local v3, "wb":Landroid/icu/impl/ICUResourceBundle$WholeBundle;
	rootTable = std::make_shared<android::icu::impl::ICUResourceBundleImpl_S_ResourceTable>(wb, rootRes);
	//    .local v2, "rootTable":Landroid/icu/impl/ICUResourceBundleImpl$ResourceTable;
	aliasString = rootTable->findString(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%ALIAS")));
	//    .local v0, "aliasString":Ljava/lang/String;
	if ( !(aliasString) )  
		goto label_cond_31;
	cVar0 = android::icu::util::UResourceBundle::getBundleInstance(baseName, aliasString);
	cVar0->checkCast("android::icu::impl::ICUResourceBundle");
	return cVar0;
	// 2533    .line 1346
	// 2534    .end local v0    # "aliasString":Ljava/lang/String;
	// 2535    .end local v2    # "rootTable":Landroid/icu/impl/ICUResourceBundleImpl$ResourceTable;
	// 2536    .end local v3    # "wb":Landroid/icu/impl/ICUResourceBundle$WholeBundle;
label_cond_28:
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid format error")));
	// throw
	throw cVar1;
	// 2546    .line 1352
	// 2547    .restart local v0    # "aliasString":Ljava/lang/String;
	// 2548    .restart local v2    # "rootTable":Landroid/icu/impl/ICUResourceBundleImpl$ResourceTable;
	// 2549    .restart local v3    # "wb":Landroid/icu/impl/ICUResourceBundle$WholeBundle;
label_cond_31:
	return rootTable;

}
// .method public static getBundleInstance(Ljava/lang/String;Landroid/icu/util/ULocale;Landroid/icu/impl/ICUResourceBundle$OpenType;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<android::icu::util::ULocale> cVar0,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> openType)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "openType"    # Landroid/icu/impl/ICUResourceBundle$OpenType;
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = android::icu::util::ULocale::getDefault({const[class].FS-Param});
label_cond_6:
	return android::icu::impl::ICUResourceBundle::getBundleInstance(baseName, cVar0->getBaseName(), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, openType);

}
// .method public static getBundleInstance(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Landroid/icu/impl/ICUResourceBundle$OpenType;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> openType)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> b;
	std::shared_ptr<java::util::MissingResourceException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "root"    # Ljava/lang/ClassLoader;
	//    .param p3, "openType"    # Landroid/icu/impl/ICUResourceBundle$OpenType;
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"));
label_cond_6:
	cVar1 = android::icu::util::ULocale::getBaseName(localeID);
	if ( openType != android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_DEFAULT_ROOT )
		goto label_cond_4e;
	b = android::icu::impl::ICUResourceBundle::instantiateBundle(cVar0, cVar1, android::icu::util::ULocale::getDefault(cVar0, cVar1, android::icu::util::ULocale::getDefault(cVar0, cVar1, android::icu::util::ULocale::getDefault(cVar0, cVar1, android::icu::util::ULocale::getDefault(cVar0, cVar1, android::icu::util::ULocale::getDefault({const[class].FS-Param})->getBaseName(), root, openType)->getBaseName(), root, openType)->getBaseName(), root, openType)->getBaseName(), root, openType)->getBaseName(), root, openType);
	//    .local v0, "b":Landroid/icu/impl/ICUResourceBundle;
label_goto_1a:
	if ( b )     
		goto label_cond_53;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::util::MissingResourceException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not find the bundle ")))->append(cVar0)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".res")))->toString(), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar2;
	// 2678    .line 1120
	// 2679    .end local v0    # "b":Landroid/icu/impl/ICUResourceBundle;
label_cond_4e:
	b = android::icu::impl::ICUResourceBundle::instantiateBundle(cVar0, cVar1, 0x0, root, openType);
	//    .restart local v0    # "b":Landroid/icu/impl/ICUResourceBundle;
	goto label_goto_1a;
	// 2688    .line 1126
label_cond_53:
	return b;

}
// .method public static getBundleInstance(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> cVar0;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "root"    # Ljava/lang/ClassLoader;
	//    .param p3, "disableFallback"    # Z
	if ( !(disableFallback) )  
		goto label_cond_9;
	cVar0 = android::icu::impl::ICUResourceBundle_S_OpenType::DIRECT;
label_goto_4:
	return android::icu::impl::ICUResourceBundle::getBundleInstance(baseName, localeID, root, cVar0);
	// 2714    .line 1097
label_cond_9:
	cVar0 = android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_DEFAULT_ROOT;
	goto label_goto_4;

}
// .method public static getFullLocaleNameSet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundle::getFullLocaleNameSet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2724        value = {
	// 2725            "()",
	// 2726            "Ljava/util/Set",
	// 2727            "<",
	// 2728            "Ljava/lang/String;",
	// 2729            ">;"
	// 2730        }
	// 2731    .end annotation
	return android::icu::impl::ICUResourceBundle::getFullLocaleNameSet(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);

}
// .method public static getFullLocaleNameSet(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundle::getFullLocaleNameSet(std::shared_ptr<java::lang::String> bundlePrefix,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	//    .param p0, "bundlePrefix"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2751        value = {
	// 2752            "(",
	// 2753            "Ljava/lang/String;",
	// 2754            "Ljava/lang/ClassLoader;",
	// 2755            ")",
	// 2756            "Ljava/util/Set",
	// 2757            "<",
	// 2758            "Ljava/lang/String;",
	// 2759            ">;"
	// 2760        }
	// 2761    .end annotation
	return android::icu::impl::ICUResourceBundle::getAvailEntry(bundlePrefix, loader)->getFullLocaleNameSet();

}
// .method public static final getFunctionalEquivalent(Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;[ZZ)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICUResourceBundle::getFunctionalEquivalent(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resName,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> locID,std::shared_ptr<bool[]> isAvailable,bool omitDefault)
{
	
	std::shared_ptr<java::lang::String> kwVal;
	std::shared_ptr<java::lang::String> baseLoc;
	std::shared_ptr<java::lang::String> defStr;
	std::shared_ptr<android::icu::util::ULocale> parent;
	int defLoc;
	std::shared_ptr<android::icu::util::ULocale> fullBase;
	int resDepth;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> r;
	auto availableULocales;
	int i;
	int defDepth;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::util::ULocale> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> irb;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> urb;
	std::vector<std::any> tryCatchExcetionList;
	auto defLoc;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "loader"    # Ljava/lang/ClassLoader;
	//    .param p2, "resName"    # Ljava/lang/String;
	//    .param p3, "keyword"    # Ljava/lang/String;
	//    .param p4, "locID"    # Landroid/icu/util/ULocale;
	//    .param p5, "isAvailable"    # [Z
	//    .param p6, "omitDefault"    # Z
	kwVal = locID->getKeywordValue(keyword);
	//    .local v12, "kwVal":Ljava/lang/String;
	baseLoc = locID->getBaseName();
	//    .local v5, "baseLoc":Ljava/lang/String;
	defStr = 0x0;
	//    .local v8, "defStr":Ljava/lang/String;
	parent = std::make_shared<android::icu::util::ULocale>(baseLoc);
	//    .local v14, "parent":Landroid/icu/util/ULocale;
	defLoc = 0x0;
	//    .local v7, "defLoc":Landroid/icu/util/ULocale;
	//    .local v13, "lookForDefault":Z
	fullBase = 0x0;
	//    .local v9, "fullBase":Landroid/icu/util/ULocale;
	//    .local v6, "defDepth":I
	resDepth = 0x0;
	//    .local v16, "resDepth":I
	if ( !(kwVal) )  
		goto label_cond_20;
	if ( kwVal->length() )     
		goto label_cond_14a;
label_cond_20:
label_goto_20:
	kwVal = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_cond_24:
	0x0;
	//    .local v15, "r":Landroid/icu/impl/ICUResourceBundle;
	r = android::icu::util::UResourceBundle::getBundleInstance(baseName, parent);
	//    .end local v15    # "r":Landroid/icu/impl/ICUResourceBundle;
	r->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v15, "r":Landroid/icu/impl/ICUResourceBundle;
	if ( !(isAvailable) )  
		goto label_cond_55;
	isAvailable[0x0] = 0x0;
	availableULocales = android::icu::impl::ICUResourceBundle::getAvailEntry(baseName, loader)->getULocaleList();
	//    .local v4, "availableULocales":[Landroid/icu/util/ULocale;
	i = 0x0;
	//    .local v10, "i":I
label_goto_3e:
	if ( i >= availableULocales->size() )
		goto label_cond_55;
	if ( !(parent->equals(availableULocales[i])) )  
		goto label_cond_157;
	isAvailable[0x0] = 0x1;
	//    .end local v4    # "availableULocales":[Landroid/icu/util/ULocale;
	//    .end local v7    # "defLoc":Landroid/icu/util/ULocale;
	//    .end local v8    # "defStr":Ljava/lang/String;
	//    .end local v10    # "i":I
label_cond_55:
	try {
	//label_try_start_55:
	irb = r->get(resName);
	irb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v11, "irb":Landroid/icu/impl/ICUResourceBundle;
	//    .local v8, "defStr":Ljava/lang/String;
	if ( !(0x0) )  
		goto label_cond_6a;
	kwVal = irb->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("default")));
	0x0;
label_cond_6a:
	//label_try_end_6d:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a1;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_55 .. :try_end_6d} :catch_1a1
	defLoc = r->getULocale();
	//    .end local v8    # "defStr":Ljava/lang/String;
	//    .end local v11    # "irb":Landroid/icu/impl/ICUResourceBundle;
label_goto_6e:
	if ( defLoc )     
		goto label_cond_76;
	r = r->getParent();
	defDepth = ( defDepth + 0x1);
label_cond_76:
	if ( !(r) )  
		goto label_cond_7a;
	if ( !(defLoc) )  
		goto label_cond_55;
label_cond_7a:
	//    .end local v14    # "parent":Landroid/icu/util/ULocale;
	parent = std::make_shared<android::icu::util::ULocale>(baseLoc);
	//    .restart local v14    # "parent":Landroid/icu/util/ULocale;
	r = android::icu::util::UResourceBundle::getBundleInstance(baseName, parent);
	//    .end local v15    # "r":Landroid/icu/impl/ICUResourceBundle;
	r->checkCast("android::icu::impl::ICUResourceBundle");
	//    .end local v9    # "fullBase":Landroid/icu/util/ULocale;
	//    .restart local v15    # "r":Landroid/icu/impl/ICUResourceBundle;
label_cond_87:
	try {
	//label_try_start_87:
	irb = r->get(resName);
	irb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .restart local v11    # "irb":Landroid/icu/impl/ICUResourceBundle;
	irb->get(kwVal);
	fullBase = irb->getULocale();
	//    .local v9, "fullBase":Landroid/icu/util/ULocale;
	if ( !(fullBase) )  
		goto label_cond_ab;
	if ( resDepth <= defDepth )
		goto label_cond_ab;
	irb->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("default")));
	//    .restart local v8    # "defStr":Ljava/lang/String;
	//label_try_end_a8:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19e;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_87 .. :try_end_a8} :catch_19e
	defLoc = r->getULocale();
	//    .local v7, "defLoc":Landroid/icu/util/ULocale;
	resDepth;
	//    .end local v7    # "defLoc":Landroid/icu/util/ULocale;
	//    .end local v8    # "defStr":Ljava/lang/String;
	//    .end local v9    # "fullBase":Landroid/icu/util/ULocale;
	//    .end local v11    # "irb":Landroid/icu/impl/ICUResourceBundle;
label_cond_ab:
label_goto_ab:
	if ( fullBase )     
		goto label_cond_b3;
	r = r->getParent();
	resDepth = ( resDepth + 0x1);
label_cond_b3:
	if ( !(r) )  
		goto label_cond_b7;
	if ( !(fullBase) )  
		goto label_cond_87;
label_cond_b7:
	if ( fullBase )     
		goto label_cond_119;
	if ( !(defStr) )  
		goto label_cond_119;
	if ( !(( defStr->equals(kwVal) ^ 0x1)) )  
		goto label_cond_119;
	kwVal = defStr;
	//    .end local v14    # "parent":Landroid/icu/util/ULocale;
	parent = std::make_shared<android::icu::util::ULocale>(baseLoc);
	//    .restart local v14    # "parent":Landroid/icu/util/ULocale;
	r = android::icu::util::UResourceBundle::getBundleInstance(baseName, parent);
	//    .end local v15    # "r":Landroid/icu/impl/ICUResourceBundle;
	r->checkCast("android::icu::impl::ICUResourceBundle");
	//    .restart local v15    # "r":Landroid/icu/impl/ICUResourceBundle;
	resDepth = 0x0;
label_cond_d3:
	try {
	//label_try_start_d3:
	irb = r->get(resName);
	irb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .restart local v11    # "irb":Landroid/icu/impl/ICUResourceBundle;
	urb = irb->get(kwVal);
	urb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v18, "urb":Landroid/icu/impl/ICUResourceBundle;
	fullBase = r->getULocale();
	//    .restart local v9    # "fullBase":Landroid/icu/util/ULocale;
	if ( fullBase->getBaseName()->equals(urb->getULocale()->getBaseName()) )     
		goto label_cond_f8;
	fullBase = 0x0;
	//    .end local v9    # "fullBase":Landroid/icu/util/ULocale;
label_cond_f8:
	if ( !(fullBase) )  
		goto label_cond_10d;
	if ( resDepth <= defDepth )
		goto label_cond_10d;
	irb->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("default")));
	//    .restart local v8    # "defStr":Ljava/lang/String;
	//label_try_end_10a:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19b;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_d3 .. :try_end_10a} :catch_19b
	defLoc = r->getULocale();
	//    .restart local v7    # "defLoc":Landroid/icu/util/ULocale;
	resDepth;
	//    .end local v7    # "defLoc":Landroid/icu/util/ULocale;
	//    .end local v8    # "defStr":Ljava/lang/String;
	//    .end local v11    # "irb":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v18    # "urb":Landroid/icu/impl/ICUResourceBundle;
label_cond_10d:
label_goto_10d:
	if ( fullBase )     
		goto label_cond_115;
	r = r->getParent();
	resDepth = ( resDepth + 0x1);
label_cond_115:
	if ( !(r) )  
		goto label_cond_119;
	if ( !(fullBase) )  
		goto label_cond_d3;
label_cond_119:
	if ( fullBase )     
		goto label_cond_15b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	var134 = cVar0(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not find locale containing requested or default keyword.")), baseName, cVar1->append(keyword)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")))->append(kwVal)->toString());
	// throw
	throw cVar0;
	// 3266    .line 128
	// 3267    .end local v15    # "r":Landroid/icu/impl/ICUResourceBundle;
	// 3268    .local v7, "defLoc":Landroid/icu/util/ULocale;
	// 3269    .local v8, "defStr":Ljava/lang/String;
	// 3270    .local v9, "fullBase":Landroid/icu/util/ULocale;
label_cond_14a:
	if ( !(kwVal->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("default")))) )  
		goto label_cond_24;
	goto label_goto_20;
	// 3285    .line 140
	// 3286    .restart local v4    # "availableULocales":[Landroid/icu/util/ULocale;
	// 3287    .restart local v10    # "i":I
	// 3288    .restart local v15    # "r":Landroid/icu/impl/ICUResourceBundle;
label_cond_157:
	i = ( i + 0x1);
	goto label_goto_3e;
	// 3294    .line 238
	// 3295    .end local v4    # "availableULocales":[Landroid/icu/util/ULocale;
	// 3296    .end local v7    # "defLoc":Landroid/icu/util/ULocale;
	// 3297    .end local v8    # "defStr":Ljava/lang/String;
	// 3298    .end local v9    # "fullBase":Landroid/icu/util/ULocale;
	// 3299    .end local v10    # "i":I
label_cond_15b:
	if ( !(omitDefault) )  
		goto label_cond_168;
	if ( !(defStr->equals(kwVal)) )  
		goto label_cond_168;
	if ( resDepth >  defDepth )
		goto label_cond_168;
	return fullBase;
	// 3319    .line 243
label_cond_168:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::util::ULocale>(cVar3->append(fullBase->getBaseName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("@")))->append(keyword)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")))->append(kwVal)->toString());
	return cVar2;
	// 3369    .line 222
label_catch_19b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v17, "t":Ljava/util/MissingResourceException;
	goto label_goto_10d;
	// 3376    .line 183
	// 3377    .end local v17    # "t":Ljava/util/MissingResourceException;
label_catch_19e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v17    # "t":Ljava/util/MissingResourceException;
	goto label_goto_ab;
	// 3384    .line 157
	// 3385    .end local v17    # "t":Ljava/util/MissingResourceException;
	// 3386    .restart local v9    # "fullBase":Landroid/icu/util/ULocale;
label_catch_1a1:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v17    # "t":Ljava/util/MissingResourceException;
	goto label_goto_6e;

}
// .method public static final getKeywordValues(Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundle::getKeywordValues(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::util::HashSet> keywords;
	auto locales;
	int i;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> irb;
	std::shared_ptr<java::util::Enumeration> e;
	std::shared_ptr<java::lang::String> s;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "keyword"    # Ljava/lang/String;
	keywords = std::make_shared<java::util::HashSet>();
	//    .local v4, "keywords":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	locales = android::icu::impl::ICUResourceBundle::getAvailEntry(baseName, android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->getULocaleList();
	//    .local v5, "locales":[Landroid/icu/util/ULocale;
	i = 0x0;
	//    .local v2, "i":I
label_goto_10:
	if ( i >= locales->size() )
		goto label_cond_4b;
	try {
	//label_try_start_13:
	//    .local v0, "b":Landroid/icu/util/UResourceBundle;
	irb = android::icu::util::UResourceBundle::getBundleInstance(baseName, locales[i])->getObject(keyword);
	irb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v3, "irb":Landroid/icu/impl/ICUResourceBundle;
	e = irb->getKeys();
	//    .local v1, "e":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_cond_23:
label_goto_23:
	if ( !(e->hasMoreElements()) )  
		goto label_cond_48;
	s = e->nextElement();
	s->checkCast("java::lang::String");
	//    .local v6, "s":Ljava/lang/String;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("default"))->equals(s) )     
		goto label_cond_23;
	if ( !(( s->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("private-"))) ^ 0x1)) )  
		goto label_cond_23;
	keywords->add(s);
	//label_try_end_46:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_47;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_13 .. :try_end_46} :catch_47
	goto label_goto_23;
	// 3493    .line 272
	// 3494    .end local v0    # "b":Landroid/icu/util/UResourceBundle;
	// 3495    .end local v1    # "e":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
	// 3496    .end local v3    # "irb":Landroid/icu/impl/ICUResourceBundle;
	// 3497    .end local v6    # "s":Ljava/lang/String;
label_catch_47:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_48:
	i = ( i + 0x1);
	goto label_goto_10;
	// 3507    .line 278
label_cond_4b:
	cVar0 = keywords->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(0x0));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public static final getLocaleList([Landroid/icu/util/ULocale;)[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::impl::ICUResourceBundle::getLocaleList(std::shared_ptr<std::vector<android::icu::util::ULocale>> ulocales)
{
	
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<java::util::HashSet> uniqueSet;
	int i;
	std::shared_ptr<java::lang::Object> loc;
	std::shared_ptr<std::vector<java::util::Locale>> cVar0;
	
	//    .param p0, "ulocales"    # [Landroid/icu/util/ULocale;
	list = std::make_shared<java::util::ArrayList>(ulocales->size());
	//    .local v1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/util/Locale;>;"
	uniqueSet = std::make_shared<java::util::HashSet>();
	//    .local v3, "uniqueSet":Ljava/util/HashSet;, "Ljava/util/HashSet<Ljava/util/Locale;>;"
	i = 0x0;
	//    .local v0, "i":I
label_goto_c:
	if ( i >= ulocales->size() )
		goto label_cond_24;
	loc = ulocales[i]->toLocale();
	//    .local v2, "loc":Ljava/util/Locale;
	if ( uniqueSet->contains(loc) )     
		goto label_cond_21;
	list->add(loc);
	uniqueSet->add(loc);
label_cond_21:
	i = ( i + 0x1);
	goto label_goto_c;
	// 3577    .line 520
	// 3578    .end local v2    # "loc":Ljava/util/Locale;
label_cond_24:
	cVar0 = list->toArray(std::make_shared<std::vector<std::vector<java::util::Locale>>>(list->size()));
	cVar0->checkCast("std::vector<java::util::Locale>");
	return cVar0;

}
// .method private getNoFallback()Z
bool android::icu::impl::ICUResourceBundle::getNoFallback()
{
	
	return this->wholeBundle->reader->getNoFallback();

}
// .method private getResDepth()I
int android::icu::impl::ICUResourceBundle::getResDepth()
{
	
	int cVar0;
	
	if ( this->container )     
		goto label_cond_6;
	cVar0 = 0x0;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = ( this->container->getResDepth() + 0x1);
	goto label_goto_5;

}
// .method private static getResPathKeys(Ljava/lang/String;I[Ljava/lang/String;I)V
void android::icu::impl::ICUResourceBundle::getResPathKeys(std::shared_ptr<java::lang::String> path,int num,std::shared_ptr<std::vector<java::lang::String>> keys,int start)
{
	
	int cVar0;
	int i;
	int j;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int start;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int num;
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "num"    # I
	//    .param p2, "keys"    # [Ljava/lang/String;
	//    .param p3, "start"    # I
	cVar0 = 0x2f;
	if ( num )     
		goto label_cond_5;
	return;
	// 3653    .line 1010
label_cond_5:
	if ( num != 0x1 )
		goto label_cond_b;
	keys[start] = path;
	return;
	// 3665    .line 1014
label_cond_b:
	i = 0x0;
	//    .local v0, "i":I
label_goto_c:
	j = path->indexOf(cVar0, i);
	//    .local v1, "j":I
	if ( android::icu::impl::ICUResourceBundle::_assertionsDisabled )     
		goto label_cond_1c;
	if ( j >= i )
		goto label_cond_1c;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 3690    .line 1018
label_cond_1c:
	start = ( start + 0x1);
	//    .end local p3    # "start":I
	//    .local v2, "start":I
	keys[start] = path->substring(i, j);
	if ( num != 0x2 )
		goto label_cond_42;
	if ( android::icu::impl::ICUResourceBundle::_assertionsDisabled )     
		goto label_cond_39;
	if ( path->indexOf(cVar0, ( j + 0x1)) < 0 ) 
		goto label_cond_39;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 3726    .line 1021
label_cond_39:
	keys[start] = path->substring(( j + 0x1));
	return;
	// 3739    .line 1024
label_cond_42:
	i = ( j + 0x1);
	num = ( num + -0x1);
	start = start;
	//    .end local v2    # "start":I
	//    .restart local p3    # "start":I
	goto label_goto_c;

}
// .method private getResPathKeys([Ljava/lang/String;I)V
void android::icu::impl::ICUResourceBundle::getResPathKeys(std::shared_ptr<std::vector<java::lang::String>> keys,int depth)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> b;
	int depth;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> b;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	
	//    .param p1, "keys"    # [Ljava/lang/String;
	//    .param p2, "depth"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	b = this;
	//    .local v0, "b":Landroid/icu/impl/ICUResourceBundle;
label_cond_3:
	if ( depth <= 0 )
		goto label_cond_25;
	depth = ( depth + -0x1);
	keys[depth] = b->key;
	b = b->container;
	if ( android::icu::impl::ICUResourceBundle::_assertionsDisabled )     
		goto label_cond_3;
	if ( depth )     
		goto label_cond_21;
	cVar3 = cVar0;
label_goto_14:
	if ( b->container )     
		goto label_cond_23;
	cVar4 = cVar0;
label_goto_19:
	if ( cVar3 == cVar4 )
		goto label_cond_3;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
label_cond_21:
	cVar3 = cVar1;
	goto label_goto_14;
label_cond_23:
	cVar4 = cVar1;
	goto label_goto_19;
	// 3816    .line 983
label_cond_25:
	return;

}
// .method private static instantiateBundle(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Landroid/icu/impl/ICUResourceBundle$OpenType;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::instantiateBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> defaultID,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> openType)
{
	
	int cVar0;
	char cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::String> fullName;
	char openTypeChar;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_4> cVar5;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "defaultID"    # Ljava/lang/String;
	//    .param p3, "root"    # Ljava/lang/ClassLoader;
	//    .param p4, "openType"    # Landroid/icu/impl/ICUResourceBundle$OpenType;
	cVar0 = 0x40;
	cVar1 = 0x23;
	if ( android::icu::impl::ICUResourceBundle::_assertionsDisabled )     
		goto label_cond_14;
	if ( localeID->indexOf(cVar0) < 0 ) 
		goto label_cond_14;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 3851    .line 1138
label_cond_14:
	if ( android::icu::impl::ICUResourceBundle::_assertionsDisabled )     
		goto label_cond_26;
	if ( !(defaultID) )  
		goto label_cond_26;
	if ( defaultID->indexOf(cVar0) < 0 ) 
		goto label_cond_26;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 3871    .line 1139
label_cond_26:
	fullName = android::icu::impl::ICUResourceBundleReader::getFullName(baseName, localeID);
	//    .local v1, "fullName":Ljava/lang/String;
	openTypeChar = (char)(( openType->ordinal() + 0x30));
	//    .local v8, "openTypeChar":C
	if ( openType == android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_DEFAULT_ROOT )
		goto label_cond_5d;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	//    .local v7, "cacheKey":Ljava/lang/String;
label_goto_4a:
	cVar5 = std::make_shared<android::icu::impl::ICUResourceBundle_S_4>(fullName, baseName, localeID, root, openType, defaultID);
	cVar6 = android::icu::impl::ICUResourceBundle::BUNDLE_CACHE->getInstance(cacheKey, cVar5);
	cVar6->checkCast("android::icu::impl::ICUResourceBundle");
	return cVar6;
	// 3941    .line 1143
	// 3942    .end local v7    # "cacheKey":Ljava/lang/String;
label_cond_5d:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v7    # "cacheKey":Ljava/lang/String;
	goto label_goto_4a;

}
// .method private static localeIDStartsWithLangSubtag(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::impl::ICUResourceBundle::localeIDStartsWithLangSubtag(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> lang)
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
// .method public at(I)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::at(int index)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar0;
	
	//    .param p1, "index"    # I
	cVar0 = this->handleGet(index, 0x0, this);
	cVar0->checkCast("android::icu::impl::ICUResourceBundle");
	return cVar0;

}
// .method public at(Ljava/lang/String;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::at(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar1;
	
	//    .param p1, "key"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( !(this->instanceOf("android::icu::impl::ICUResourceBundleImpl_S_ResourceTable")) )  
		goto label_cond_c;
	cVar1 = this->handleGet(key, cVar0, this);
	cVar1->checkCast("android::icu::impl::ICUResourceBundle");
	return cVar1;
	// 4074    .line 326
label_cond_c:
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::ICUResourceBundle::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> o;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	if ( this != other )
		goto label_cond_4;
	return cVar0;
	// 4092    .line 1035
label_cond_4:
	if ( !(other->instanceOf("android::icu::impl::ICUResourceBundle")) )  
		goto label_cond_28;
	o = other;
	o->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "o":Landroid/icu/impl/ICUResourceBundle;
	if ( !(this->getBaseName()->equals(o->getBaseName())) )  
		goto label_cond_28;
	if ( !(this->getLocaleID()->equals(o->getLocaleID())) )  
		goto label_cond_28;
	return cVar0;
	// 4138    .line 1042
	// 4139    .end local v0    # "o":Landroid/icu/impl/ICUResourceBundle;
label_cond_28:
	return 0x0;

}
// .method public findStringWithFallback(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundle::findStringWithFallback(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p1, "path"    # Ljava/lang/String;
	return android::icu::impl::ICUResourceBundle::findStringWithFallback(path, this, 0x0);

}
// .method public findTopLevel(I)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::findTopLevel(int index)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar0;
	
	//    .param p1, "index"    # I
	cVar0 = this->findTopLevel(index);
	cVar0->checkCast("android::icu::impl::ICUResourceBundle");
	return cVar0;

}
// .method public findTopLevel(Ljava/lang/String;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::findTopLevel(std::shared_ptr<java::lang::String> aKey)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar0;
	
	//    .param p1, "aKey"    # Ljava/lang/String;
	cVar0 = this->findTopLevel(aKey);
	cVar0->checkCast("android::icu::impl::ICUResourceBundle");
	return cVar0;

}
// .method public findWithFallback(Ljava/lang/String;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::findWithFallback(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p1, "path"    # Ljava/lang/String;
	return android::icu::impl::ICUResourceBundle::findResourceWithFallback(path, this, 0x0);

}
// .method get(Ljava/lang/String;Ljava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::get(std::shared_ptr<java::lang::String> aKey,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> obj;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "aKey"    # Ljava/lang/String;
	//    .param p3, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 4235        value = {
	// 4236            "(",
	// 4237            "Ljava/lang/String;",
	// 4238            "Ljava/util/HashMap",
	// 4239            "<",
	// 4240            "Ljava/lang/String;",
	// 4241            "Ljava/lang/String;",
	// 4242            ">;",
	// 4243            "Landroid/icu/util/UResourceBundle;",
	// 4244            ")",
	// 4245            "Landroid/icu/impl/ICUResourceBundle;"
	// 4246        }
	// 4247    .end annotation
	//    .local p2, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	obj = this->handleGet(aKey, aliasesVisited, requested);
	obj->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v1, "obj":Landroid/icu/impl/ICUResourceBundle;
	if ( obj )     
		goto label_cond_4d;
	obj = this->getParent();
	if ( !(obj) )  
		goto label_cond_12;
	obj = obj->get(aKey, aliasesVisited, requested);
label_cond_12:
	if ( obj )     
		goto label_cond_4d;
	//    .local v0, "fullName":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::util::MissingResourceException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t find resource for bundle ")))->append(android::icu::impl::ICUResourceBundleReader::getFullName(this->getBaseName(), this->getLocaleID()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", key ")))->append(aKey)->toString(), this->getClass()->getName(), aKey);
	// throw
	throw cVar0;
	// 4339    .line 1231
	// 4340    .end local v0    # "fullName":Ljava/lang/String;
label_cond_4d:
	return obj;

}
// .method public getAllItemsWithFallback(Ljava/lang/String;Landroid/icu/impl/UResource$Sink;)V
void android::icu::impl::ICUResourceBundle::getAllItemsWithFallback(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::impl::UResource_S_Sink> sink)
{
	
	int numPathKeys;
	std::shared_ptr<android::icu::impl::UResource_S_Key> key;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderValue> readerValue;
	int depth;
	std::shared<std::vector<std::vector<java::lang::String>>> pathKeys;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .param p2, "sink"    # Landroid/icu/impl/UResource$Sink;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4350        value = {
	// 4351            Ljava/util/MissingResourceException;
	// 4352        }
	// 4353    .end annotation
	numPathKeys = android::icu::impl::ICUResourceBundle::countPathKeys(path);
	//    .local v2, "numPathKeys":I
	if ( numPathKeys )     
		goto label_cond_16;
	//    .local v4, "rb":Landroid/icu/impl/ICUResourceBundle;
label_cond_8:
	key = std::make_shared<android::icu::impl::UResource_S_Key>();
	//    .local v1, "key":Landroid/icu/impl/UResource$Key;
	readerValue = std::make_shared<android::icu::impl::ICUResourceBundleReader_S_ReaderValue>();
	//    .local v5, "readerValue":Landroid/icu/impl/ICUResourceBundleReader$ReaderValue;
	rb->getAllItemsWithFallback(key, readerValue, sink);
	return;
	// 4390    .line 381
	// 4391    .end local v1    # "key":Landroid/icu/impl/UResource$Key;
	// 4392    .end local v4    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 4393    .end local v5    # "readerValue":Landroid/icu/impl/ICUResourceBundleReader$ReaderValue;
label_cond_16:
	depth = this->getResDepth();
	//    .local v0, "depth":I
	pathKeys = std::make_shared<std::vector<std::vector<java::lang::String>>>((depth + numPathKeys));
	//    .local v3, "pathKeys":[Ljava/lang/String;
	android::icu::impl::ICUResourceBundle::getResPathKeys(path, numPathKeys, pathKeys, depth);
	rb = android::icu::impl::ICUResourceBundle::findResourceWithFallback(pathKeys, depth, this, 0x0);
	//    .restart local v4    # "rb":Landroid/icu/impl/ICUResourceBundle;
	if ( rb )     
		goto label_cond_8;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::util::MissingResourceException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t find resource for bundle ")))->append(this->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", key ")))->append(this->getType())->toString(), path, this->getKey());
	// throw
	throw cVar0;

}
// .method protected getBaseName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundle::getBaseName()
{
	
	return this->wholeBundle->baseName;

}
// .method public getKey()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundle::getKey()
{
	
	return this->key;

}
// .method public getLocale()Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::impl::ICUResourceBundle::getLocale()
{
	
	return this->getULocale()->toLocale();

}
// .method protected getLocaleID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundle::getLocaleID()
{
	
	return this->wholeBundle->localeID;

}
// .method public getParent()Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::getParent()
{
	
	std::shared_ptr<java::util::ResourceBundle> cVar0;
	
	cVar0 = this->parent;
	cVar0->checkCast("android::icu::impl::ICUResourceBundle");
	return cVar0;

}
// .method public getStringWithFallback(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundle::getStringWithFallback(std::shared_ptr<java::lang::String> path)
{
	
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::MissingResourceException> cVar2;
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4557        value = {
	// 4558            Ljava/util/MissingResourceException;
	// 4559        }
	// 4560    .end annotation
	this;
	//    .local v0, "actualBundle":Landroid/icu/impl/ICUResourceBundle;
	result = android::icu::impl::ICUResourceBundle::findStringWithFallback(path, this, 0x0);
	//    .local v1, "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_3d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::util::MissingResourceException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t find resource for bundle ")))->append(this->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", key ")))->append(this->getType())->toString(), path, this->getKey());
	// throw
	throw cVar0;
	// 4638    .line 365
label_cond_3d:
	if ( !(result->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u2205\u2205\u2205")))) )  
		goto label_cond_53;
	cVar2 = std::make_shared<java::util::MissingResourceException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Encountered NO_INHERITANCE_MARKER")), path, this->getKey());
	// throw
	throw cVar2;
	// 4661    .line 368
label_cond_53:
	return result;

}
// .method public final getTopLevelKeySet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundle::getTopLevelKeySet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4669        value = {
	// 4670            "()",
	// 4671            "Ljava/util/Set",
	// 4672            "<",
	// 4673            "Ljava/lang/String;",
	// 4674            ">;"
	// 4675        }
	// 4676    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4679    .end annotation
	return this->wholeBundle->topLevelKeys;

}
// .method public getULocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICUResourceBundle::getULocale()
{
	
	return this->wholeBundle->ulocale;

}
// .method public getWithFallback(Ljava/lang/String;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle::getWithFallback(std::shared_ptr<java::lang::String> path)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> result;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::MissingResourceException> cVar2;
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4706        value = {
	// 4707            Ljava/util/MissingResourceException;
	// 4708        }
	// 4709    .end annotation
	this;
	//    .local v0, "actualBundle":Landroid/icu/impl/ICUResourceBundle;
	result = android::icu::impl::ICUResourceBundle::findResourceWithFallback(path, this, 0x0);
	//    .local v1, "result":Landroid/icu/impl/ICUResourceBundle;
	if ( result )     
		goto label_cond_3d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::util::MissingResourceException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t find resource for bundle ")))->append(this->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", key ")))->append(this->getType())->toString(), path, this->getKey());
	// throw
	throw cVar0;
	// 4787    .line 310
label_cond_3d:
	if ( result->getType() )     
		goto label_cond_5d;
	if ( !(result->getString()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("\u2205\u2205\u2205")))) )  
		goto label_cond_5d;
	cVar2 = std::make_shared<java::util::MissingResourceException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Encountered NO_INHERITANCE_MARKER")), path, this->getKey());
	// throw
	throw cVar2;
	// 4820    .line 314
label_cond_5d:
	return result;

}
// .method protected handleGetKeys()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::impl::ICUResourceBundle::handleGetKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4828        value = {
	// 4829            "()",
	// 4830            "Ljava/util/Enumeration",
	// 4831            "<",
	// 4832            "Ljava/lang/String;",
	// 4833            ">;"
	// 4834        }
	// 4835    .end annotation
	return java::util::Collections::enumeration(this->handleKeySet());

}
// .method public hashCode()I
int android::icu::impl::ICUResourceBundle::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::impl::ICUResourceBundle::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 4867    .line 1048
label_cond_d:
	return 0x2a;

}
// .method public isRoot()Z
bool android::icu::impl::ICUResourceBundle::isRoot()
{
	
	bool cVar0;
	
	if ( this->wholeBundle->localeID->isEmpty() )     
		goto label_cond_16;
	cVar0 = this->wholeBundle->localeID->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("root")));
label_goto_15:
	return cVar0;
label_cond_16:
	cVar0 = 0x1;
	goto label_goto_15;

}
// .method protected isTopLevelResource()Z
bool android::icu::impl::ICUResourceBundle::isTopLevelResource()
{
	
	bool cVar0;
	
	if ( this->container )     
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method protected setParent(Ljava/util/ResourceBundle;)V
void android::icu::impl::ICUResourceBundle::setParent(std::shared_ptr<java::util::ResourceBundle> parent)
{
	
	//    .param p1, "parent"    # Ljava/util/ResourceBundle;
	this->parent = parent;
	return;

}
// .method public final setTopLevelKeySet(Ljava/util/Set;)V
void android::icu::impl::ICUResourceBundle::setTopLevelKeySet(std::shared_ptr<java::util::Set<java::lang::String>> keySet)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4943        value = {
	// 4944            "(",
	// 4945            "Ljava/util/Set",
	// 4946            "<",
	// 4947            "Ljava/lang/String;",
	// 4948            ">;)V"
	// 4949        }
	// 4950    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4953    .end annotation
	//    .local p1, "keySet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	this->wholeBundle->topLevelKeys = keySet;
	return;

}


