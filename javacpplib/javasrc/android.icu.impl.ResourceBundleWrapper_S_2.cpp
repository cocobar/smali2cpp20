// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper$2.smali
#include "java2ctype.h"
#include "android.icu.impl.ResourceBundleWrapper_S_2_S_1.h"
#include "android.icu.impl.ResourceBundleWrapper_S_2.h"
#include "android.icu.impl.ResourceBundleWrapper_S_Loader.h"
#include "android.icu.impl.ResourceBundleWrapper.h"
#include "java.io.BufferedInputStream.h"
#include "java.io.InputStream.h"
#include "java.io.PrintStream.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.Exception.h"
#include "java.lang.NoClassDefFoundError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.security.AccessController.h"
#include "java.util.PropertyResourceBundle.h"
#include "java.util.ResourceBundle.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;ZLjava/lang/String;)V
android::icu::impl::ResourceBundleWrapper_S_2::ResourceBundleWrapper_S_2(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<java::lang::ClassLoader> var3,bool var4,std::shared_ptr<java::lang::String> var5)
{
	
	this->val_S_localeID = var0;
	this->val_S_baseName = var1;
	this->val_S_defaultID = var2;
	this->val_S_root = var3;
	this->val_S_disableFallback = var4;
	this->val_S_name = var5;
	android::icu::impl::ResourceBundleWrapper_S_Loader::(0x0);
	return;

}
// .method public load()Landroid/icu/impl/ResourceBundleWrapper;
std::shared_ptr<android::icu::impl::ResourceBundleWrapper> android::icu::impl::ResourceBundleWrapper_S_2::load()
{
	
	int i;
	int loadFromProperties;
	std::shared_ptr<java::util::ResourceBundle> parent;
	int b;
	auto b;
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper> b;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper_S_2_S_1> cVar1;
	std::shared_ptr<java::io::InputStream> stream;
	std::shared_ptr<java::io::BufferedInputStream> stream;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::util::PropertyResourceBundle> cVar2;
	std::shared_ptr<java::util::ResourceBundle> bx;
	
	//    .local v15, "parent":Landroid/icu/impl/ResourceBundleWrapper;
	i = this->val_S_localeID->lastIndexOf(0x5f);
	//    .local v12, "i":I
	loadFromProperties = 0x0;
	//    .local v13, "loadFromProperties":Z
	//    .local v16, "parentIsRoot":Z
	if ( i == -0x1 )
		goto label_cond_17a;
	//    .local v14, "locName":Ljava/lang/String;
	parent = android::icu::impl::ResourceBundleWrapper::-wrap0(this->val_S_baseName, this->val_S_localeID->substring(0x0, i), this->val_S_defaultID, this->val_S_root, this->val_S_disableFallback);
	//    .end local v14    # "locName":Ljava/lang/String;
	//    .end local v15    # "parent":Landroid/icu/impl/ResourceBundleWrapper;
label_cond_4a:
label_goto_4a:
	b = 0x0;
	//    .local v4, "b":Landroid/icu/impl/ResourceBundleWrapper;
	try {
	//label_try_start_4b:
	//    .local v7, "cls":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/util/ResourceBundle;>;"
	bx = this->val_S_root->loadClass(this->val_S_name)->asSubclass(java::util::ResourceBundle())->newInstance();
	bx->checkCast("java::util::ResourceBundle");
	//    .local v6, "bx":Ljava/util/ResourceBundle;
	b = std::make_shared<android::icu::impl::ResourceBundleWrapper>(bx, 0x0);
	//label_try_end_70:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1cd;
	}
	catch (java::lang::NoClassDefFoundError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c8;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a9;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_4b .. :try_end_70} :catch_1cd
	//    .catch Ljava/lang/NoClassDefFoundError; {:try_start_4b .. :try_end_70} :catch_1c8
	//    .catch Ljava/lang/Exception; {:try_start_4b .. :try_end_70} :catch_1a9
	//    .local v5, "b":Landroid/icu/impl/ResourceBundleWrapper;
	if ( !(0x0) )  
		goto label_cond_75;
	//    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	try {
	//label_try_start_72:
	android::icu::impl::ResourceBundleWrapper::-wrap3(b, parent);
label_cond_75:
	android::icu::impl::ResourceBundleWrapper::-set0(b, this->val_S_baseName);
	android::icu::impl::ResourceBundleWrapper::-set1(b, this->val_S_localeID);
	//label_try_end_8b:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_244;
	}
	catch (java::lang::NoClassDefFoundError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_247;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24a;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_72 .. :try_end_8b} :catch_244
	//    .catch Ljava/lang/NoClassDefFoundError; {:try_start_72 .. :try_end_8b} :catch_247
	//    .catch Ljava/lang/Exception; {:try_start_72 .. :try_end_8b} :catch_24a
	//    .end local v6    # "bx":Ljava/util/ResourceBundle;
	//    .end local v7    # "cls":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/util/ResourceBundle;>;"
label_goto_8b:
	if ( !(loadFromProperties) )  
		goto label_cond_251;
	try {
	//label_try_start_8d:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v17, "resName":Ljava/lang/String;
	var86 = cVar1(this, this->val_S_root, cVar0->append(this->val_S_name->replace(0x2e, 0x2f))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".properties")))->toString());
	stream = java::security::AccessController::doPrivileged(cVar1);
	stream->checkCast("java::io::InputStream");
	//    .local v18, "stream":Ljava/io/InputStream;
	if ( !(stream) )  
		goto label_cond_24e;
	var94 = stream(stream);
	//label_try_end_d3:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23d;
	}
	//    .catch Ljava/lang/Exception; {:try_start_8d .. :try_end_d3} :catch_23d
	//    .end local v18    # "stream":Ljava/io/InputStream;
	//    .local v19, "stream":Ljava/io/InputStream;
	try {
	//label_try_start_d3:
	var99 = cVar2(stream);
	b = std::make_shared<android::icu::impl::ResourceBundleWrapper>(cVar2, 0x0);
	//label_try_end_e7:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d5;
	}
	catch (...){
		goto label_catchall_1df;
	}
	//    .catch Ljava/lang/Exception; {:try_start_d3 .. :try_end_e7} :catch_1d5
	//    .catchall {:try_start_d3 .. :try_end_e7} :catchall_1df
	//    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .local v4, "b":Landroid/icu/impl/ResourceBundleWrapper;
	if ( !(parent) )  
		goto label_cond_ec;
	try {
	//label_try_start_e9:
	android::icu::impl::ResourceBundleWrapper::-wrap3(b, parent);
label_cond_ec:
	android::icu::impl::ResourceBundleWrapper::-set0(b, this->val_S_baseName);
	android::icu::impl::ResourceBundleWrapper::-set1(b, this->val_S_localeID);
	//label_try_end_102:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_242;
	}
	catch (...){
		goto label_catchall_240;
	}
	//    .catch Ljava/lang/Exception; {:try_start_e9 .. :try_end_102} :catch_242
	//    .catchall {:try_start_e9 .. :try_end_102} :catchall_240
	try {
	//label_try_start_102:
	stream->close();
	//label_try_end_105:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d2;
	}
	//    .catch Ljava/lang/Exception; {:try_start_102 .. :try_end_105} :catch_1d2
label_goto_105:
	stream;
	//    .end local v19    # "stream":Ljava/io/InputStream;
	//    .restart local v18    # "stream":Ljava/io/InputStream;
label_goto_107:
	if ( b )     
		goto label_cond_165;
	try {
	//label_try_start_109:
	if ( !(( this->val_S_disableFallback ^ 0x1)) )  
		goto label_cond_165;
	if ( !(( this->val_S_localeID->isEmpty() ^ 0x1)) )  
		goto label_cond_165;
	if ( this->val_S_localeID->indexOf(0x5f) >= 0 )
		goto label_cond_165;
	if ( !(( android::icu::impl::ResourceBundleWrapper::-wrap1(this->val_S_defaultID, this->val_S_localeID) ^ 0x1)) )  
		goto label_cond_165;
	b = android::icu::impl::ResourceBundleWrapper::-wrap0(this->val_S_baseName, this->val_S_defaultID, this->val_S_defaultID, this->val_S_root, this->val_S_disableFallback);
label_cond_165:
	if ( b )     
		goto label_cond_174;
	if ( !(0x0) )  
		goto label_cond_173;
	//label_try_end_16f:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e5;
	}
	//    .catch Ljava/lang/Exception; {:try_start_109 .. :try_end_16f} :catch_1e5
	if ( !(( this->val_S_disableFallback ^ 0x1)) )  
		goto label_cond_174;
label_cond_173:
	b = parent;
	//    .end local v17    # "resName":Ljava/lang/String;
	//    .end local v18    # "stream":Ljava/io/InputStream;
label_cond_174:
label_goto_174:
	if ( !(b) )  
		goto label_cond_205;
	android::icu::impl::ResourceBundleWrapper::-wrap2(b);
label_cond_179:
label_goto_179:
	return b;
	// 535    .line 162
	// 536    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 537    .restart local v15    # "parent":Landroid/icu/impl/ResourceBundleWrapper;
label_cond_17a:
	if ( this->val_S_localeID->isEmpty() )     
		goto label_cond_4a;
	//    .local v15, "parent":Landroid/icu/impl/ResourceBundleWrapper;
	0x1;
	goto label_goto_4a;
	// 588    .line 181
	// 589    .end local v15    # "parent":Landroid/icu/impl/ResourceBundleWrapper;
	// 590    .local v4, "b":Landroid/icu/impl/ResourceBundleWrapper;
label_catch_1a9:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .local v9, "e":Ljava/lang/Exception;
label_goto_1aa:
	if ( !(android::icu::impl::ResourceBundleWrapper::-get0({const[class].FS-Param})) )  
		goto label_cond_1b8;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("failure")));
label_cond_1b8:
	if ( !(android::icu::impl::ResourceBundleWrapper::-get0({const[class].FS-Param})) )  
		goto label_cond_254;
	java::lang::System::out->println(getCatchExcetionFromList);
	b = b;
	//    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_8b;
	// 631    .line 179
	// 632    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 633    .end local v9    # "e":Ljava/lang/Exception;
	// 634    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_catch_1c8:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .local v10, "e":Ljava/lang/NoClassDefFoundError;
label_goto_1c9:
	loadFromProperties = 0x1;
	b = b;
	//    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_8b;
	// 649    .line 177
	// 650    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 651    .end local v10    # "e":Ljava/lang/NoClassDefFoundError;
	// 652    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_catch_1cd:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .local v8, "e":Ljava/lang/ClassNotFoundException;
label_goto_1ce:
	loadFromProperties = 0x1;
	b = b;
	//    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_8b;
	// 667    .line 214
	// 668    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 669    .end local v8    # "e":Ljava/lang/ClassNotFoundException;
	// 670    .local v4, "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 671    .restart local v17    # "resName":Ljava/lang/String;
	// 672    .restart local v19    # "stream":Ljava/io/InputStream;
label_catch_1d2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v11, "ex":Ljava/lang/Exception;
	goto label_goto_105;
	// 679    .line 209
	// 680    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 681    .end local v11    # "ex":Ljava/lang/Exception;
	// 682    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_catch_1d5:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v11    # "ex":Ljava/lang/Exception;
	b = b;
	//    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_goto_1d7:
	try {
	//label_try_start_1d7:
	stream->close();
	//label_try_end_1da:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1dc;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1d7 .. :try_end_1da} :catch_1dc
	goto label_goto_105;
	// 700    .line 214
label_catch_1dc:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_105;
	// 706    .line 211
	// 707    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 708    .end local v11    # "ex":Ljava/lang/Exception;
	// 709    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_catchall_1df:
	// move-exception
	catchall = tryCatchExcetionList.back();
	b = b;
	//    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_goto_1e1:
	try {
	//label_try_start_1e1:
	stream->close();
	//label_try_end_1e4:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_203;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1e1 .. :try_end_1e4} :catch_203
label_goto_1e4:
	try {
	//label_try_start_1e4:
	// throw
	throw;
	// 728    :try_end_1e5
	// 729    .catch Ljava/lang/Exception; {:try_start_1e4 .. :try_end_1e5} :catch_1e5
	// 731    .line 232
	// 732    .end local v19    # "stream":Ljava/io/InputStream;
label_catch_1e5:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .end local v17    # "resName":Ljava/lang/String;
	//    .restart local v9    # "e":Ljava/lang/Exception;
label_goto_1e6:
	if ( !(android::icu::impl::ResourceBundleWrapper::-get0({const[class].FS-Param})) )  
		goto label_cond_1f4;
	java::lang::System::out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("failure")));
label_cond_1f4:
	if ( !(android::icu::impl::ResourceBundleWrapper::-get0({const[class].FS-Param})) )  
		goto label_cond_174;
	java::lang::System::out->println(getCatchExcetionFromList);
	goto label_goto_174;
	// 770    .line 214
	// 771    .end local v9    # "e":Ljava/lang/Exception;
	// 772    .restart local v17    # "resName":Ljava/lang/String;
	// 773    .restart local v19    # "stream":Ljava/io/InputStream;
label_catch_203:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v11    # "ex":Ljava/lang/Exception;
	goto label_goto_1e4;
	// 780    .line 242
	// 781    .end local v11    # "ex":Ljava/lang/Exception;
	// 782    .end local v17    # "resName":Ljava/lang/String;
	// 783    .end local v19    # "stream":Ljava/io/InputStream;
label_cond_205:
	if ( !(android::icu::impl::ResourceBundleWrapper::-get0({const[class].FS-Param})) )  
		goto label_cond_179;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Returning null for ")))->append(this->val_S_baseName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(this->val_S_localeID)->toString());
	goto label_goto_179;
	// 837    .line 232
	// 838    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 839    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_catch_23d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v9    # "e":Ljava/lang/Exception;
	b = b;
	//    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_1e6;
	// 850    .line 211
	// 851    .end local v9    # "e":Ljava/lang/Exception;
	// 852    .restart local v17    # "resName":Ljava/lang/String;
	// 853    .restart local v19    # "stream":Ljava/io/InputStream;
label_catchall_240:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_1e1;
	// 859    .line 209
label_catch_242:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v11    # "ex":Ljava/lang/Exception;
	goto label_goto_1d7;
	// 866    .line 177
	// 867    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 868    .end local v11    # "ex":Ljava/lang/Exception;
	// 869    .end local v17    # "resName":Ljava/lang/String;
	// 870    .end local v19    # "stream":Ljava/io/InputStream;
	// 871    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 872    .restart local v6    # "bx":Ljava/util/ResourceBundle;
	// 873    .restart local v7    # "cls":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/util/ResourceBundle;>;"
label_catch_244:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v8    # "e":Ljava/lang/ClassNotFoundException;
	b = b;
	//    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_1ce;
	// 884    .line 179
	// 885    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 886    .end local v8    # "e":Ljava/lang/ClassNotFoundException;
	// 887    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_catch_247:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v10    # "e":Ljava/lang/NoClassDefFoundError;
	b = b;
	//    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_1c9;
	// 898    .line 181
	// 899    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 900    .end local v10    # "e":Ljava/lang/NoClassDefFoundError;
	// 901    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_catch_24a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v9    # "e":Ljava/lang/Exception;
	b = b;
	//    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_1aa;
	// 912    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 913    .end local v6    # "bx":Ljava/util/ResourceBundle;
	// 914    .end local v7    # "cls":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/util/ResourceBundle;>;"
	// 915    .end local v9    # "e":Ljava/lang/Exception;
	// 916    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 917    .restart local v17    # "resName":Ljava/lang/String;
	// 918    .restart local v18    # "stream":Ljava/io/InputStream;
label_cond_24e:
	b = b;
	//    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_107;
	// 926    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 927    .end local v17    # "resName":Ljava/lang/String;
	// 928    .end local v18    # "stream":Ljava/io/InputStream;
	// 929    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
label_cond_251:
	b = b;
	//    .end local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	//    .restart local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_174;
	// 937    .end local v4    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	// 938    .restart local v9    # "e":Ljava/lang/Exception;
label_cond_254:
	b = b;
	//    .restart local v5    # "b":Landroid/icu/impl/ResourceBundleWrapper;
	goto label_goto_8b;

}


