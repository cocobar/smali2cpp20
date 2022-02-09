// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$4.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_4.h"
#include "android.icu.impl.ICUResourceBundle_S_Loader.h"
#include "android.icu.impl.ICUResourceBundle_S_OpenType.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceTable.h"
#include "java.io.PrintStream.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Landroid/icu/impl/ICUResourceBundle$OpenType;Ljava/lang/String;)V
android::icu::impl::ICUResourceBundle_S_4::ICUResourceBundle_S_4(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<java::lang::ClassLoader> var3,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> var4,std::shared_ptr<java::lang::String> var5)
{
	
	this->val_S_fullName = var0;
	this->val_S_baseName = var1;
	this->val_S_localeID = var2;
	this->val_S_root = var3;
	this->val_S_openType = var4;
	this->val_S_defaultID = var5;
	android::icu::impl::ICUResourceBundle_S_Loader::(0x0);
	return;

}
// .method public load()Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::ICUResourceBundle_S_4::load()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::String> rootLocale;
	std::shared_ptr<java::lang::String> localeName;
	std::shared_ptr<java::lang::Object> b;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	bool cVar5;
	int i;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> b;
	std::shared_ptr<android::icu::impl::ICUResourceBundleImpl_S_ResourceTable> cVar7;
	std::shared_ptr<java::lang::String> parentLocaleName;
	std::shared_ptr<java::lang::Object> parent;
	
	cVar0 = 0x5f;
	cVar1 = 0x0;
	cVar2 = -0x1;
	if ( !(android::icu::impl::ICUResourceBundle::-get0({const[class].FS-Param})) )  
		goto label_cond_25;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Creating ")))->append(this->val_S_fullName)->toString());
label_cond_25:
	if ( this->val_S_baseName->indexOf(0x2e) != cVar2 )
		goto label_cond_8f;
	rootLocale = std::make_shared<java::lang::String>(std::make_shared<char[]>("root"));
	//    .local v5, "rootLocale":Ljava/lang/String;
label_goto_32:
	if ( !(this->val_S_localeID->isEmpty()) )  
		goto label_cond_93;
	localeName = rootLocale;
	//    .local v2, "localeName":Ljava/lang/String;
label_goto_3b:
	b = android::icu::impl::ICUResourceBundle::createBundle(this->val_S_baseName, localeName, this->val_S_root);
	//    .local v0, "b":Landroid/icu/impl/ICUResourceBundle;
	if ( !(android::icu::impl::ICUResourceBundle::-get0({const[class].FS-Param})) )  
		goto label_cond_80;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	if ( !(b) )  
		goto label_cond_96;
	cVar5 = android::icu::impl::ICUResourceBundle::-wrap2(b);
label_goto_75:
	java::lang::System::out->println(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("The bundle created is: ")))->append(b)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" and openType=")))->append(this->val_S_openType)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" and bundle.getNoFallback=")))->append(cVar5)->toString());
label_cond_80:
	if ( this->val_S_openType == android::icu::impl::ICUResourceBundle_S_OpenType::DIRECT )
		goto label_cond_8e;
	if ( !(b) )  
		goto label_cond_98;
	if ( !(android::icu::impl::ICUResourceBundle::-wrap2(b)) )  
		goto label_cond_98;
label_cond_8e:
	return b;
	// 218    .line 1155
	// 219    .end local v0    # "b":Landroid/icu/impl/ICUResourceBundle;
	// 220    .end local v2    # "localeName":Ljava/lang/String;
	// 221    .end local v5    # "rootLocale":Ljava/lang/String;
label_cond_8f:
	std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .restart local v5    # "rootLocale":Ljava/lang/String;
	goto label_goto_32;
	// 228    .line 1156
label_cond_93:
	//    .restart local v2    # "localeName":Ljava/lang/String;
	goto label_goto_3b;
	// 235    .restart local v0    # "b":Landroid/icu/impl/ICUResourceBundle;
label_cond_96:
	cVar5 = cVar1;
	goto label_goto_75;
	// 242    .line 1176
label_cond_98:
	if ( b )     
		goto label_cond_e7;
	i = localeName->lastIndexOf(cVar0);
	//    .local v1, "i":I
	if ( i == cVar2 )
		goto label_cond_b1;
	//    .local v6, "temp":Ljava/lang/String;
	b = android::icu::impl::ICUResourceBundle::-wrap0(this->val_S_baseName, localeName->substring(cVar1, i), this->val_S_defaultID, this->val_S_root, this->val_S_openType);
	//    .end local v6    # "temp":Ljava/lang/String;
label_cond_b0:
label_goto_b0:
	return b;
	// 280    .line 1184
label_cond_b1:
	if ( this->val_S_openType != android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_DEFAULT_ROOT )
		goto label_cond_d0;
	if ( !(( android::icu::impl::ICUResourceBundle::-wrap3(this->val_S_defaultID, localeName) ^ 0x1)) )  
		goto label_cond_d0;
	b = android::icu::impl::ICUResourceBundle::-wrap0(this->val_S_baseName, this->val_S_defaultID, this->val_S_defaultID, this->val_S_root, this->val_S_openType);
	goto label_goto_b0;
	// 317    .line 1188
label_cond_d0:
	if ( this->val_S_openType == android::icu::impl::ICUResourceBundle_S_OpenType::LOCALE_ONLY )
		goto label_cond_b0;
	if ( !(( rootLocale->isEmpty() ^ 0x1)) )  
		goto label_cond_b0;
	b = android::icu::impl::ICUResourceBundle::createBundle(this->val_S_baseName, rootLocale, this->val_S_root);
	goto label_goto_b0;
	// 344    .line 1194
	// 345    .end local v1    # "i":I
label_cond_e7:
	//    .local v3, "parent":Landroid/icu/util/UResourceBundle;
	localeName = b->getLocaleID();
	i = localeName->lastIndexOf(cVar0);
	//    .restart local v1    # "i":I
	cVar7 = b;
	cVar7->checkCast("android::icu::impl::ICUResourceBundleImpl_S_ResourceTable");
	parentLocaleName = cVar7->findString(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%Parent")));
	//    .local v4, "parentLocaleName":Ljava/lang/String;
	if ( !(parentLocaleName) )  
		goto label_cond_112;
	parent = android::icu::impl::ICUResourceBundle::-wrap0(this->val_S_baseName, parentLocaleName, this->val_S_defaultID, this->val_S_root, this->val_S_openType);
	//    .end local v3    # "parent":Landroid/icu/util/UResourceBundle;
label_cond_108:
label_goto_108:
	if ( b->equals(0x0) )     
		goto label_cond_b0;
	b->setParent(parent);
	goto label_goto_b0;
	// 404    .line 1202
	// 405    .restart local v3    # "parent":Landroid/icu/util/UResourceBundle;
label_cond_112:
	if ( i == cVar2 )
		goto label_cond_125;
	//    .local v3, "parent":Landroid/icu/util/UResourceBundle;
	goto label_goto_108;
	// 429    .line 1204
	// 430    .local v3, "parent":Landroid/icu/util/UResourceBundle;
label_cond_125:
	if ( localeName->equals(rootLocale) )     
		goto label_cond_108;
	//    .local v3, "parent":Landroid/icu/util/UResourceBundle;
	goto label_goto_108;

}


