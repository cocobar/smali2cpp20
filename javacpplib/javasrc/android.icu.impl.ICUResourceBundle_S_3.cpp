// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$3.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_3_S_1.h"
#include "android.icu.impl.ICUResourceBundle_S_3.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.URLHandler.h"
#include "java.io.IOException.h"
#include "java.io.PrintStream.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Void.h"
#include "java.net.URL.h"
#include "java.util.Enumeration.h"
#include "java.util.Set.h"

// .method constructor <init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/util/Set;)V
android::icu::impl::ICUResourceBundle_S_3::ICUResourceBundle_S_3(std::shared_ptr<java::lang::ClassLoader> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::util::Set> var2)
{
	
	this->val_S_root = var0;
	this->val_S_bn = var1;
	this->val_S_names = var2;
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Void;
std::shared_ptr<java::lang::Void> android::icu::impl::ICUResourceBundle_S_3::run()
{
	
	std::shared_ptr<java::lang::Void> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Enumeration> urls;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_3_S_1> v;
	std::shared_ptr<java::net::URL> url;
	std::shared_ptr<android::icu::impl::URLHandler> handler;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	cVar0 = 0x0;
	try {
	//label_try_start_1:
	urls = this->val_S_root->getResources(this->val_S_bn);
	//    .local v3, "urls":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/net/URL;>;"
	if ( urls )     
		goto label_cond_c;
	return cVar0;
	// 094    .line 611
label_cond_c:
	v = std::make_shared<android::icu::impl::ICUResourceBundle_S_3_S_1>(this, this->val_S_names);
	//    .local v4, "v":Landroid/icu/impl/URLHandler$URLVisitor;
label_cond_13:
label_goto_13:
	if ( !(urls->hasMoreElements()) )  
		goto label_cond_4e;
	url = urls->nextElement();
	url->checkCast("java::net::URL");
	//    .local v2, "url":Ljava/net/URL;
	handler = android::icu::impl::URLHandler::get(url);
	//    .local v1, "handler":Landroid/icu/impl/URLHandler;
	if ( !(handler) )  
		goto label_cond_4f;
	handler->guide(v, 0x0);
	//label_try_end_29:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_29} :catch_2a
	goto label_goto_13;
	// 138    .line 629
	// 139    .end local v1    # "handler":Landroid/icu/impl/URLHandler;
	// 140    .end local v2    # "url":Ljava/net/URL;
	// 141    .end local v3    # "urls":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/net/URL;>;"
	// 142    .end local v4    # "v":Landroid/icu/impl/URLHandler$URLVisitor;
label_catch_2a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	if ( !(android::icu::impl::ICUResourceBundle::-get0({const[class].FS-Param})) )  
		goto label_cond_4e;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	java::lang::System::out->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("ouch: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	//    .end local v0    # "e":Ljava/io/IOException;
label_cond_4e:
	return cVar0;
	// 185    .line 626
	// 186    .restart local v1    # "handler":Landroid/icu/impl/URLHandler;
	// 187    .restart local v2    # "url":Ljava/net/URL;
	// 188    .restart local v3    # "urls":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/net/URL;>;"
	// 189    .restart local v4    # "v":Landroid/icu/impl/URLHandler$URLVisitor;
label_cond_4f:
	try {
	//label_try_start_4f:
	if ( !(android::icu::impl::ICUResourceBundle::-get0({const[class].FS-Param})) )  
		goto label_cond_13;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("handler for ")))->append(url)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is null")))->toString());
	//label_try_end_75:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	//    .catch Ljava/io/IOException; {:try_start_4f .. :try_end_75} :catch_2a
	goto label_goto_13;

}


