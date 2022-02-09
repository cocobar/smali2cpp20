// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$DataTables.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTables_S_1.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTables.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

// .method constructor <init>()V
android::icu::impl::LocaleDisplayNamesImpl_S_DataTables::LocaleDisplayNamesImpl_S_DataTables()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static load(Ljava/lang/String;)Landroid/icu/impl/LocaleDisplayNamesImpl$DataTables;
std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTables> android::icu::impl::LocaleDisplayNamesImpl_S_DataTables::load(std::shared_ptr<java::lang::String> className)
{
	
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTables_S_1> cVar1;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTables> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "className"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	cVar0 = java::lang::Class::forName(className)->newInstance();
	cVar0->checkCast("android::icu::impl::LocaleDisplayNamesImpl_S_DataTables");
	//label_try_end_a:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_a} :catch_b
	return cVar0;
	// 049    .line 661
label_catch_b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "t":Ljava/lang/Throwable;
	cVar1 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_DataTables_S_1>();
	return cVar1;

}


