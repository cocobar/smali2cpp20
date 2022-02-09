// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\URLHandler$JarURLHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.URLHandler_S_JarURLHandler.h"
#include "android.icu.impl.URLHandler_S_URLVisitor.h"
#include "android.icu.impl.URLHandler.h"
#include "java.io.PrintStream.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.net.JarURLConnection.h"
#include "java.net.URL.h"
#include "java.net.URLConnection.h"
#include "java.util.Enumeration.h"
#include "java.util.jar.JarEntry.h"
#include "java.util.jar.JarFile.h"

// .method constructor <init>(Ljava/net/URL;)V
android::icu::impl::URLHandler_S_JarURLHandler::URLHandler_S_JarURLHandler(std::shared_ptr<java::net::URL> url)
{
	
	std::shared_ptr<java::lang::Object> e;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int ix;
	std::shared_ptr<java::lang::String> urlStr;
	int idx;
	std::shared_ptr<java::net::URL> url;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::net::JarURLConnection> conn;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "url"    # Ljava/net/URL;
	// 030    invoke-direct {p0}, Landroid/icu/impl/URLHandler;-><init>()V
	try {
	//label_try_start_3:
	this->prefix = url->getPath();
	ix = this->prefix->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("!/")));
	//    .local v3, "ix":I
	if ( ix < 0 ) 
		goto label_cond_1e;
	this->prefix = this->prefix->substring(( ix + 0x2));
label_cond_1e:
	//    .local v4, "protocol":Ljava/lang/String;
	if ( url->getProtocol()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("jar"))) )     
		goto label_cond_57;
	urlStr = url->toString();
	//    .local v6, "urlStr":Ljava/lang/String;
	idx = urlStr->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	//    .local v2, "idx":I
	if ( idx == -0x1 )
		goto label_cond_57;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	url = std::make_shared<java::net::URL>(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("jar")))->append(urlStr->substring(idx))->toString());
	//    .end local p1    # "url":Ljava/net/URL;
	//    .local v5, "url":Ljava/net/URL;
	//    .end local v2    # "idx":I
	//    .end local v5    # "url":Ljava/net/URL;
	//    .end local v6    # "urlStr":Ljava/lang/String;
	//    .restart local p1    # "url":Ljava/net/URL;
label_cond_57:
	conn = url->openConnection();
	conn->checkCast("java::net::JarURLConnection");
	//    .local v0, "conn":Ljava/net/JarURLConnection;
	this->jarFile = conn->getJarFile();
	//label_try_end_63:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_64;
	}
	//    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_63} :catch_64
	return;
	// 155    .line 223
	// 156    .end local v0    # "conn":Ljava/net/JarURLConnection;
	// 157    .end local v3    # "ix":I
	// 158    .end local v4    # "protocol":Ljava/lang/String;
label_catch_64:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	if ( !(android::icu::impl::URLHandler::-get0({const[class].FS-Param})) )  
		goto label_cond_84;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("icurb jar error: ")))->append(e)->toString());
label_cond_84:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("jar error: ")))->append(e->getMessage())->toString());
	// throw
	throw cVar2;

}
// .method public guide(Landroid/icu/impl/URLHandler$URLVisitor;ZZ)V
void android::icu::impl::URLHandler_S_JarURLHandler::guide(std::shared_ptr<android::icu::impl::URLHandler_S_URLVisitor> v,bool recurse,bool strip)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Enumeration> entries;
	std::shared_ptr<java::util::jar::JarEntry> entry;
	std::shared_ptr<java::lang::String> name;
	int ix;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "v"    # Landroid/icu/impl/URLHandler$URLVisitor;
	//    .param p2, "recurse"    # Z
	//    .param p3, "strip"    # Z
	try {
	//label_try_start_0:
	entries = this->jarFile->entries();
	//    .local v1, "entries":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;"
label_cond_6:
label_goto_6:
	if ( !(entries->hasMoreElements()) )  
		goto label_cond_69;
	entry = entries->nextElement();
	entry->checkCast("java::util::jar::JarEntry");
	//    .local v2, "entry":Ljava/util/jar/JarEntry;
	if ( entry->isDirectory() )     
		goto label_cond_6;
	name = entry->getName();
	//    .local v4, "name":Ljava/lang/String;
	if ( !(name->startsWith(this->prefix)) )  
		goto label_cond_6;
	name = name->substring(this->prefix->length());
	ix = name->lastIndexOf(0x2f);
	//    .local v3, "ix":I
	if ( ix <= 0 )
		goto label_cond_3a;
	if ( ( recurse ^ 0x1) )     
		goto label_cond_6;
label_cond_3a:
	if ( !(strip) )  
		goto label_cond_45;
	if ( ix == -0x1 )
		goto label_cond_45;
label_cond_45:
	v->visit(name);
	//label_try_end_48:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_49;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_48} :catch_49
	goto label_goto_6;
	// 329    .line 254
	// 330    .end local v1    # "entries":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/util/jar/JarEntry;>;"
	// 331    .end local v2    # "entry":Ljava/util/jar/JarEntry;
	// 332    .end local v3    # "ix":I
	// 333    .end local v4    # "name":Ljava/lang/String;
label_catch_49:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	if ( !(android::icu::impl::URLHandler::-get0({const[class].FS-Param})) )  
		goto label_cond_69;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("icurb jar error: ")))->append(getCatchExcetionFromList)->toString());
	//    .end local v0    # "e":Ljava/lang/Exception;
label_cond_69:
	return;

}


