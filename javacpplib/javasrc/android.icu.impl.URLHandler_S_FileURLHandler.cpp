// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\URLHandler$FileURLHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.URLHandler_S_FileURLHandler.h"
#include "android.icu.impl.URLHandler_S_URLVisitor.h"
#include "android.icu.impl.URLHandler.h"
#include "java.io.File.h"
#include "java.io.PrintStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.net.URI.h"
#include "java.net.URISyntaxException.h"
#include "java.net.URL.h"

// .method constructor <init>(Ljava/net/URL;)V
android::icu::impl::URLHandler_S_FileURLHandler::URLHandler_S_FileURLHandler(std::shared_ptr<java::net::URL> url)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::io::File> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "url"    # Ljava/net/URL;
	// 028    invoke-direct {p0}, Landroid/icu/impl/URLHandler;-><init>()V
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<java::io::File>(url->toURI());
	this->file = cVar0;
	//label_try_end_e:
	}
	catch (java::net::URISyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_46;
	}
	//    .catch Ljava/net/URISyntaxException; {:try_start_3 .. :try_end_e} :catch_46
label_goto_e:
	if ( !(this->file) )  
		goto label_cond_1c;
	if ( !(( this->file->exists() ^ 0x1)) )  
		goto label_cond_45;
label_cond_1c:
	if ( !(android::icu::impl::URLHandler::-get0({const[class].FS-Param})) )  
		goto label_cond_3f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("file does not exist - ")))->append(url->toString())->toString());
label_cond_3f:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar2;
	// 102    .line 167
label_cond_45:
	return;
	// 106    .line 160
label_catch_46:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "use":Ljava/net/URISyntaxException;
	goto label_goto_e;

}
// .method private process(Landroid/icu/impl/URLHandler$URLVisitor;ZZLjava/lang/String;[Ljava/io/File;)V
void android::icu::impl::URLHandler_S_FileURLHandler::process(std::shared_ptr<android::icu::impl::URLHandler_S_URLVisitor> v,bool recurse,bool strip,std::shared_ptr<java::lang::String> path,std::shared_ptr<std::vector<java::io::File>> files)
{
	
	int i;
	std::shared_ptr<java::io::File> f;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "v"    # Landroid/icu/impl/URLHandler$URLVisitor;
	//    .param p2, "recurse"    # Z
	//    .param p3, "strip"    # Z
	//    .param p4, "path"    # Ljava/lang/String;
	//    .param p5, "files"    # [Ljava/io/File;
	if ( !(files) )  
		goto label_cond_59;
	i = 0x0;
	//    .local v7, "i":I
label_goto_3:
	if ( i >= files->size() )
		goto label_cond_59;
	f = files[i];
	//    .local v6, "f":Ljava/io/File;
	if ( !(f->isDirectory()) )  
		goto label_cond_39;
	if ( !(recurse) )  
		goto label_cond_36;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->process(v, recurse, strip, cVar0->append(path)->append(f->getName())->append(0x2f)->toString(), f->listFiles());
label_cond_36:
label_goto_36:
	i = ( i + 0x1);
	goto label_goto_3;
	// 197    .line 188
label_cond_39:
	if ( !(strip) )  
		goto label_cond_43;
	cVar1 = f->getName();
label_goto_3f:
	v->visit(cVar1);
	goto label_goto_36;
label_cond_43:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar2->append(path)->append(f->getName())->toString();
	goto label_goto_3f;
	// 233    .line 192
	// 234    .end local v6    # "f":Ljava/io/File;
	// 235    .end local v7    # "i":I
label_cond_59:
	return;

}
// .method public guide(Landroid/icu/impl/URLHandler$URLVisitor;ZZ)V
void android::icu::impl::URLHandler_S_FileURLHandler::guide(std::shared_ptr<android::icu::impl::URLHandler_S_URLVisitor> v,bool recurse,bool strip)
{
	
	//    .param p1, "v"    # Landroid/icu/impl/URLHandler$URLVisitor;
	//    .param p2, "recurse"    # Z
	//    .param p3, "strip"    # Z
	if ( !(this->file->isDirectory()) )  
		goto label_cond_19;
	this->process(v, recurse, strip, std::make_shared<java::lang::String>(std::make_shared<char[]>("/")), this->file->listFiles());
label_goto_18:
	return;
	// 281    .line 174
label_cond_19:
	v->visit(this->file->getName());
	goto label_goto_18;

}


