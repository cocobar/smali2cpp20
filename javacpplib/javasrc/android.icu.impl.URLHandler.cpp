// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\URLHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.ClassLoaderUtil.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.URLHandler_S_FileURLHandler.h"
#include "android.icu.impl.URLHandler_S_JarURLHandler.h"
#include "android.icu.impl.URLHandler_S_URLVisitor.h"
#include "android.icu.impl.URLHandler.h"
#include "java.io.BufferedReader.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.InputStreamReader.h"
#include "java.io.PrintStream.h"
#include "java.io.Reader.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NoSuchMethodException.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.lang.reflect.Method.h"
#include "java.net.URL.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"

static android::icu::impl::URLHandler::DEBUG;
static android::icu::impl::URLHandler::PROPNAME = std::make_shared<java::lang::String>("urlhandler.props");
static android::icu::impl::URLHandler::handlers;
// .method static synthetic -get0()Z
bool android::icu::impl::URLHandler::_get0()
{
	
	return android::icu::impl::URLHandler::DEBUG;

}
// .method static constructor <clinit>()V
void android::icu::impl::URLHandler::static_cinit()
{
	
	std::shared_ptr<java::util::Map> h;
	std::shared_ptr<java::io::BufferedReader> br;
	std::shared_ptr<java::lang::Object> catchall;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::InputStream> is;
	auto params;
	std::shared_ptr<java::io::InputStreamReader> cVar0;
	auto br;
	std::shared_ptr<java::lang::String> line;
	auto h;
	int ix;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::HashMap> h;
	
	android::icu::impl::URLHandler::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("URLHandler")));
	h = 0x0;
	//    .local v8, "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	br = 0x0;
	//    .local v2, "br":Ljava/io/BufferedReader;
	try {
	//label_try_start_b:
	//    .local v15, "loader":Ljava/lang/ClassLoader;
	is = android::icu::impl::ClassLoaderUtil::getClassLoader(android::icu::impl::URLHandler())->getResourceAsStream(std::make_shared<java::lang::String>(std::make_shared<char[]>("urlhandler.props")));
	//    .local v11, "is":Ljava/io/InputStream;
	if ( !(is) )  
		goto label_cond_99;
	params = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	params[0x0] = java::net::URL();
	//    .local v17, "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	var20 = cVar0(is);
	br = std::make_shared<java::io::BufferedReader>(cVar0);
	//label_try_end_38:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12b;
	}
	catch (...){
		goto label_catchall_125;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_b .. :try_end_38} :catch_12b
	//    .catchall {:try_start_b .. :try_end_38} :catchall_125
	//    .local v3, "br":Ljava/io/BufferedReader;
	try {
	//label_try_start_38:
	//label_try_end_3b:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e3;
	}
	catch (...){
		goto label_catchall_109;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_38 .. :try_end_3b} :catch_e3
	//    .catchall {:try_start_38 .. :try_end_3b} :catchall_109
	//    .end local v2    # "br":Ljava/io/BufferedReader;
	line = br->readLine();
	//    .local v14, "line":Ljava/lang/String;
	h = h;
	//    .end local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .local v9, "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
label_goto_3d:
	if ( !(line) )  
		goto label_cond_94;
	try {
	//label_try_start_3f:
	line = line->trim();
	if ( !(line->length()) )  
		goto label_cond_59;
	//label_try_end_50:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12d;
	}
	catch (...){
		goto label_catchall_127;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_3f .. :try_end_50} :catch_12d
	//    .catchall {:try_start_3f .. :try_end_50} :catchall_127
	if ( line->charAt(0x0) != 0x23 )
		goto label_cond_60;
label_cond_59:
	h = h;
	//    .end local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .local v8, "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
label_cond_5a:
label_goto_5a:
	try {
	//label_try_start_5a:
	//label_try_end_5d:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e3;
	}
	catch (...){
		goto label_catchall_109;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_5a .. :try_end_5d} :catch_e3
	//    .catchall {:try_start_5a .. :try_end_5d} :catchall_109
	line = br->readLine();
	h = h;
	//    .end local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .restart local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	goto label_goto_3d;
	// 191    .line 59
label_cond_60:
	try {
	//label_try_start_62:
	ix = line->indexOf(0x3d);
	//    .local v12, "ix":I
	if ( ix != -0x1 )
		goto label_cond_a1;
	if ( !(android::icu::impl::URLHandler::DEBUG) )  
		goto label_cond_94;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad urlhandler line: \'")))->append(line)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString());
	//    .end local v12    # "ix":I
label_cond_94:
	br->close();
	//label_try_end_97:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12d;
	}
	catch (...){
		goto label_catchall_127;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_62 .. :try_end_97} :catch_12d
	//    .catchall {:try_start_62 .. :try_end_97} :catchall_127
	br = br;
	//    .end local v3    # "br":Ljava/io/BufferedReader;
	//    .local v2, "br":Ljava/io/BufferedReader;
	h = h;
	//    .end local v2    # "br":Ljava/io/BufferedReader;
	//    .end local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .end local v14    # "line":Ljava/lang/String;
	//    .end local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_cond_99:
	if ( !(br) )  
		goto label_cond_9e;
	try {
	//label_try_start_9b:
	br->close();
	//label_try_end_9e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_120;
	}
	//    .catch Ljava/io/IOException; {:try_start_9b .. :try_end_9e} :catch_120
	//    .end local v11    # "is":Ljava/io/InputStream;
	//    .end local v15    # "loader":Ljava/lang/ClassLoader;
	//    .local v18, "t":Ljava/lang/Throwable;
label_cond_9e:
label_goto_9e:
	android::icu::impl::URLHandler::handlers = h;
	return;
	// 284    .line 66
	// 285    .end local v18    # "t":Ljava/lang/Throwable;
	// 286    .restart local v3    # "br":Ljava/io/BufferedReader;
	// 287    .restart local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 288    .restart local v11    # "is":Ljava/io/InputStream;
	// 289    .restart local v12    # "ix":I
	// 290    .restart local v14    # "line":Ljava/lang/String;
	// 291    .restart local v15    # "loader":Ljava/lang/ClassLoader;
	// 292    .restart local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_cond_a1:
	try {
	//label_try_start_a3:
	//    .local v13, "key":Ljava/lang/String;
	//label_try_end_b8:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12d;
	}
	catch (...){
		goto label_catchall_127;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_a3 .. :try_end_b8} :catch_12d
	//    .catchall {:try_start_a3 .. :try_end_b8} :catchall_127
	//    .local v19, "value":Ljava/lang/String;
	try {
	//label_try_start_b9:
	//    .local v4, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local v16, "m":Ljava/lang/reflect/Method;
	if ( h )     
		goto label_cond_138;
	h = std::make_shared<java::util::HashMap>();
	//label_try_end_cf:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_131;
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_111;
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_fa;
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12d;
	}
	catch (...){
		goto label_catchall_127;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_b9 .. :try_end_cf} :catch_131
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_b9 .. :try_end_cf} :catch_111
	//    .catch Ljava/lang/SecurityException; {:try_start_b9 .. :try_end_cf} :catch_fa
	//    .catch Ljava/lang/Throwable; {:try_start_b9 .. :try_end_cf} :catch_12d
	//    .catchall {:try_start_b9 .. :try_end_cf} :catchall_127
	//    .end local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .restart local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
label_goto_cf:
	try {
	//label_try_start_cf:
	h->put(line->substring(0x0, ix)->trim(), java::lang::Class::forName(line->substring(( ix + 0x1))->trim())->getDeclaredMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("get")), params));
	//label_try_end_d4:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d5;
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_134;
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_136;
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e3;
	}
	catch (...){
		goto label_catchall_109;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_cf .. :try_end_d4} :catch_d5
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_cf .. :try_end_d4} :catch_134
	//    .catch Ljava/lang/SecurityException; {:try_start_cf .. :try_end_d4} :catch_136
	//    .catch Ljava/lang/Throwable; {:try_start_cf .. :try_end_d4} :catch_e3
	//    .catchall {:try_start_cf .. :try_end_d4} :catchall_109
	goto label_goto_5a;
	// 375    .line 79
label_catch_d5:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v4    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .end local v16    # "m":Ljava/lang/reflect/Method;
	//    .local v5, "e":Ljava/lang/ClassNotFoundException;
label_goto_d6:
	try {
	//label_try_start_d6:
	if ( !(android::icu::impl::URLHandler::DEBUG) )  
		goto label_cond_5a;
	java::lang::System::err->println(getCatchExcetionFromList);
	//label_try_end_e1:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e3;
	}
	catch (...){
		goto label_catchall_109;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_d6 .. :try_end_e1} :catch_e3
	//    .catchall {:try_start_d6 .. :try_end_e1} :catchall_109
	goto label_goto_5a;
	// 400    .line 91
	// 401    .end local v5    # "e":Ljava/lang/ClassNotFoundException;
	// 402    .end local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 403    .end local v12    # "ix":I
	// 404    .end local v13    # "key":Ljava/lang/String;
	// 405    .end local v14    # "line":Ljava/lang/String;
	// 406    .end local v19    # "value":Ljava/lang/String;
label_catch_e3:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v18    # "t":Ljava/lang/Throwable;
	br = br;
	//    .end local v3    # "br":Ljava/io/BufferedReader;
	//    .end local v11    # "is":Ljava/io/InputStream;
	//    .end local v15    # "loader":Ljava/lang/ClassLoader;
	//    .end local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_goto_e5:
	try {
	//label_try_start_e5:
	if ( !(android::icu::impl::URLHandler::DEBUG) )  
		goto label_cond_f2;
	tryCatchExcetionList.pop_back();
	java::lang::System::err->println(getCatchExcetionFromList);
	//label_try_end_f2:
	}
	catch (...){
		goto label_catchall_125;
	}
	//    .catchall {:try_start_e5 .. :try_end_f2} :catchall_125
label_cond_f2:
	if ( !(br) )  
		goto label_cond_9e;
	try {
	//label_try_start_f4:
	br->close();
	//label_try_end_f7:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f8;
	}
	//    .catch Ljava/io/IOException; {:try_start_f4 .. :try_end_f7} :catch_f8
	goto label_goto_9e;
	// 446    .line 97
label_catch_f8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v10, "ignored":Ljava/io/IOException;
	goto label_goto_9e;
	// 453    .line 85
	// 454    .end local v10    # "ignored":Ljava/io/IOException;
	// 455    .end local v18    # "t":Ljava/lang/Throwable;
	// 456    .restart local v3    # "br":Ljava/io/BufferedReader;
	// 457    .restart local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 458    .restart local v11    # "is":Ljava/io/InputStream;
	// 459    .restart local v12    # "ix":I
	// 460    .restart local v13    # "key":Ljava/lang/String;
	// 461    .restart local v14    # "line":Ljava/lang/String;
	// 462    .restart local v15    # "loader":Ljava/lang/ClassLoader;
	// 463    .restart local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	// 464    .restart local v19    # "value":Ljava/lang/String;
label_catch_fa:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v7, "e":Ljava/lang/SecurityException;
	h = h;
	//    .end local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .restart local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
label_goto_fc:
	try {
	//label_try_start_fc:
	if ( !(android::icu::impl::URLHandler::DEBUG) )  
		goto label_cond_5a;
	java::lang::System::err->println(getCatchExcetionFromList);
	//label_try_end_107:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e3;
	}
	catch (...){
		goto label_catchall_109;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_fc .. :try_end_107} :catch_e3
	//    .catchall {:try_start_fc .. :try_end_107} :catchall_109
	goto label_goto_5a;
	// 491    .line 93
	// 492    .end local v7    # "e":Ljava/lang/SecurityException;
	// 493    .end local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 494    .end local v12    # "ix":I
	// 495    .end local v13    # "key":Ljava/lang/String;
	// 496    .end local v14    # "line":Ljava/lang/String;
	// 497    .end local v19    # "value":Ljava/lang/String;
label_catchall_109:
	// move-exception
	catchall = tryCatchExcetionList.back();
	br = br;
	//    .end local v3    # "br":Ljava/io/BufferedReader;
	//    .end local v11    # "is":Ljava/io/InputStream;
	//    .end local v15    # "loader":Ljava/lang/ClassLoader;
	//    .end local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_goto_10b:
	if ( !(br) )  
		goto label_cond_110;
	try {
	//label_try_start_10d:
	br->close();
	//label_try_end_110:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_123;
	}
	//    .catch Ljava/io/IOException; {:try_start_10d .. :try_end_110} :catch_123
	//    .restart local v10    # "ignored":Ljava/io/IOException;
label_cond_110:
label_goto_110:
	// throw
	throw;
	// 523    .line 82
	// 524    .end local v10    # "ignored":Ljava/io/IOException;
	// 525    .restart local v3    # "br":Ljava/io/BufferedReader;
	// 526    .restart local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 527    .restart local v11    # "is":Ljava/io/InputStream;
	// 528    .restart local v12    # "ix":I
	// 529    .restart local v13    # "key":Ljava/lang/String;
	// 530    .restart local v14    # "line":Ljava/lang/String;
	// 531    .restart local v15    # "loader":Ljava/lang/ClassLoader;
	// 532    .restart local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	// 533    .restart local v19    # "value":Ljava/lang/String;
label_catch_111:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v6, "e":Ljava/lang/NoSuchMethodException;
	h = h;
	//    .end local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .restart local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
label_goto_113:
	try {
	//label_try_start_113:
	if ( !(android::icu::impl::URLHandler::DEBUG) )  
		goto label_cond_5a;
	java::lang::System::err->println(getCatchExcetionFromList);
	//label_try_end_11e:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e3;
	}
	catch (...){
		goto label_catchall_109;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_113 .. :try_end_11e} :catch_e3
	//    .catchall {:try_start_113 .. :try_end_11e} :catchall_109
	goto label_goto_5a;
	// 560    .line 97
	// 561    .end local v3    # "br":Ljava/io/BufferedReader;
	// 562    .end local v6    # "e":Ljava/lang/NoSuchMethodException;
	// 563    .end local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 564    .end local v12    # "ix":I
	// 565    .end local v13    # "key":Ljava/lang/String;
	// 566    .end local v14    # "line":Ljava/lang/String;
	// 567    .end local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	// 568    .end local v19    # "value":Ljava/lang/String;
label_catch_120:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v10    # "ignored":Ljava/io/IOException;
	goto label_goto_9e;
	// 575    .end local v10    # "ignored":Ljava/io/IOException;
	// 576    .end local v11    # "is":Ljava/io/InputStream;
	// 577    .end local v15    # "loader":Ljava/lang/ClassLoader;
label_catch_123:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v10    # "ignored":Ljava/io/IOException;
	goto label_goto_110;
	// 584    .line 93
	// 585    .end local v10    # "ignored":Ljava/io/IOException;
	// 586    .restart local v18    # "t":Ljava/lang/Throwable;
label_catchall_125:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_10b;
	// 592    .end local v18    # "t":Ljava/lang/Throwable;
	// 593    .restart local v3    # "br":Ljava/io/BufferedReader;
	// 594    .restart local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 595    .restart local v11    # "is":Ljava/io/InputStream;
	// 596    .restart local v14    # "line":Ljava/lang/String;
	// 597    .restart local v15    # "loader":Ljava/lang/ClassLoader;
	// 598    .restart local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_catchall_127:
	// move-exception
	catchall = tryCatchExcetionList.back();
	br = br;
	//    .end local v3    # "br":Ljava/io/BufferedReader;
	//    .restart local v2    # "br":Ljava/io/BufferedReader;
	h = h;
	//    .end local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .restart local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	goto label_goto_10b;
	// 612    .line 91
	// 613    .end local v11    # "is":Ljava/io/InputStream;
	// 614    .end local v14    # "line":Ljava/lang/String;
	// 615    .end local v15    # "loader":Ljava/lang/ClassLoader;
	// 616    .end local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	// 617    .local v2, "br":Ljava/io/BufferedReader;
	// 618    .local v8, "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
label_catch_12b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v18    # "t":Ljava/lang/Throwable;
	goto label_goto_e5;
	// 625    .end local v2    # "br":Ljava/io/BufferedReader;
	// 626    .end local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 627    .end local v18    # "t":Ljava/lang/Throwable;
	// 628    .restart local v3    # "br":Ljava/io/BufferedReader;
	// 629    .restart local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 630    .restart local v11    # "is":Ljava/io/InputStream;
	// 631    .restart local v14    # "line":Ljava/lang/String;
	// 632    .restart local v15    # "loader":Ljava/lang/ClassLoader;
	// 633    .restart local v17    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
label_catch_12d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v18    # "t":Ljava/lang/Throwable;
	br = br;
	//    .end local v3    # "br":Ljava/io/BufferedReader;
	//    .local v2, "br":Ljava/io/BufferedReader;
	h = h;
	//    .end local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .local v8, "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	goto label_goto_e5;
	// 648    .line 79
	// 649    .end local v2    # "br":Ljava/io/BufferedReader;
	// 650    .end local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 651    .end local v18    # "t":Ljava/lang/Throwable;
	// 652    .restart local v3    # "br":Ljava/io/BufferedReader;
	// 653    .restart local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 654    .restart local v12    # "ix":I
	// 655    .restart local v13    # "key":Ljava/lang/String;
	// 656    .restart local v19    # "value":Ljava/lang/String;
label_catch_131:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v5    # "e":Ljava/lang/ClassNotFoundException;
	h = h;
	//    .end local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .restart local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	goto label_goto_d6;
	// 667    .line 82
	// 668    .end local v5    # "e":Ljava/lang/ClassNotFoundException;
	// 669    .restart local v4    # "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 670    .restart local v16    # "m":Ljava/lang/reflect/Method;
label_catch_134:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v6    # "e":Ljava/lang/NoSuchMethodException;
	goto label_goto_113;
	// 677    .line 85
	// 678    .end local v6    # "e":Ljava/lang/NoSuchMethodException;
label_catch_136:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v7    # "e":Ljava/lang/SecurityException;
	goto label_goto_fc;
	// 685    .end local v7    # "e":Ljava/lang/SecurityException;
	// 686    .end local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	// 687    .restart local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
label_cond_138:
	h = h;
	//    .end local v9    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	//    .restart local v8    # "h":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;"
	goto label_goto_cf;

}
// .method public constructor <init>()V
android::icu::impl::URLHandler::URLHandler()
{
	
	// 701    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static get(Ljava/net/URL;)Landroid/icu/impl/URLHandler;
std::shared_ptr<android::icu::impl::URLHandler> android::icu::impl::URLHandler::get(std::shared_ptr<java::net::URL> url)
{
	
	std::shared_ptr<java::lang::reflect::Method> m;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::shared_ptr<android::icu::impl::URLHandler> handler;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "url"    # Ljava/net/URL;
	if ( url )     
		goto label_cond_4;
	return 0x0;
	// 719    .line 110
label_cond_4:
	//    .local v5, "protocol":Ljava/lang/String;
	if ( !(android::icu::impl::URLHandler::handlers) )  
		goto label_cond_30;
	m = android::icu::impl::URLHandler::handlers->get(url->getProtocol());
	m->checkCast("java::lang::reflect::Method");
	//    .local v4, "m":Ljava/lang/reflect/Method;
	if ( !(m) )  
		goto label_cond_30;
	try {
	//label_try_start_17:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar0[0x0] = url;
	handler = m->invoke(0x0, cVar0);
	handler->checkCast("android::icu::impl::URLHandler");
	//label_try_end_23:
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_40;
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_26;
	}
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_17 .. :try_end_23} :catch_40
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_17 .. :try_end_23} :catch_35
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_17 .. :try_end_23} :catch_26
	//    .local v3, "handler":Landroid/icu/impl/URLHandler;
	if ( !(handler) )  
		goto label_cond_30;
	return handler;
	// 773    .line 129
	// 774    .end local v3    # "handler":Landroid/icu/impl/URLHandler;
label_catch_26:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/reflect/InvocationTargetException;
	if ( !(android::icu::impl::URLHandler::DEBUG) )  
		goto label_cond_30;
	java::lang::System::err->println(getCatchExcetionFromList);
	//    .end local v2    # "e":Ljava/lang/reflect/InvocationTargetException;
	//    .end local v4    # "m":Ljava/lang/reflect/Method;
label_cond_30:
label_goto_30:
	return android::icu::impl::URLHandler::getDefault(url);
	// 799    .line 126
	// 800    .restart local v4    # "m":Ljava/lang/reflect/Method;
label_catch_35:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/IllegalArgumentException;
	if ( !(android::icu::impl::URLHandler::DEBUG) )  
		goto label_cond_30;
	java::lang::System::err->println(getCatchExcetionFromList);
	goto label_goto_30;
	// 816    .line 123
	// 817    .end local v1    # "e":Ljava/lang/IllegalArgumentException;
label_catch_40:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalAccessException;
	if ( !(android::icu::impl::URLHandler::DEBUG) )  
		goto label_cond_30;
	java::lang::System::err->println(getCatchExcetionFromList);
	goto label_goto_30;

}
// .method protected static getDefault(Ljava/net/URL;)Landroid/icu/impl/URLHandler;
std::shared_ptr<android::icu::impl::URLHandler> android::icu::impl::URLHandler::getDefault(std::shared_ptr<java::net::URL> url)
{
	
	std::shared_ptr<android::icu::impl::URLHandler> handler;
	std::shared_ptr<java::lang::String> protocol;
	std::shared_ptr<android::icu::impl::URLHandler_S_FileURLHandler> handler;
	std::shared_ptr<android::icu::impl::URLHandler_S_JarURLHandler> handler;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "url"    # Ljava/net/URL;
	handler = 0x0;
	//    .local v1, "handler":Landroid/icu/impl/URLHandler;
	protocol = url->getProtocol();
	//    .local v3, "protocol":Ljava/lang/String;
	try {
	//label_try_start_5:
	if ( !(protocol->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("file")))) )  
		goto label_cond_15;
	handler = std::make_shared<android::icu::impl::URLHandler_S_FileURLHandler>(url);
	//    .local v2, "handler":Landroid/icu/impl/URLHandler;
	handler = handler;
	//    .end local v1    # "handler":Landroid/icu/impl/URLHandler;
	//    .end local v2    # "handler":Landroid/icu/impl/URLHandler;
label_cond_14:
label_goto_14:
	return handler;
	// 874    .line 145
	// 875    .restart local v1    # "handler":Landroid/icu/impl/URLHandler;
label_cond_15:
	if ( protocol->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("jar"))) )     
		goto label_cond_27;
	if ( !(protocol->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("wsjar")))) )  
		goto label_cond_14;
label_cond_27:
	handler = std::make_shared<android::icu::impl::URLHandler_S_JarURLHandler>(url);
	//label_try_end_2c:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_2c} :catch_2e
	//    .restart local v2    # "handler":Landroid/icu/impl/URLHandler;
	handler = handler;
	//    .end local v2    # "handler":Landroid/icu/impl/URLHandler;
	//    .local v1, "handler":Landroid/icu/impl/URLHandler;
	goto label_goto_14;
	// 908    .line 148
	// 909    .local v1, "handler":Landroid/icu/impl/URLHandler;
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	goto label_goto_14;

}
// .method public guide(Landroid/icu/impl/URLHandler$URLVisitor;Z)V
void android::icu::impl::URLHandler::guide(std::shared_ptr<android::icu::impl::URLHandler_S_URLVisitor> visitor,bool recurse)
{
	
	//    .param p1, "visitor"    # Landroid/icu/impl/URLHandler$URLVisitor;
	//    .param p2, "recurse"    # Z
	this->guide(visitor, recurse, 0x1);
	return;

}


