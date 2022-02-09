// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$Norm2AllModesSingleton.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_Norm2AllModesSingleton.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method static synthetic -get0(Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;)Landroid/icu/impl/Norm2AllModes;
std::shared_ptr<android::icu::impl::Norm2AllModes> android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::_get0(std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
	return _this->allModes;

}
// .method static synthetic -get1(Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;)Ljava/lang/RuntimeException;
std::shared_ptr<java::lang::RuntimeException> android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::_get1(std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
	return _this->exception;

}
// .method private constructor <init>(Ljava/lang/String;)V
android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::Norm2AllModes_S_Norm2AllModesSingleton(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::Normalizer2Impl> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::impl::Norm2AllModes> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "name"    # Ljava/lang/String;
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<android::icu::impl::Normalizer2Impl>();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "impl":Landroid/icu/impl/Normalizer2Impl;
	cVar2 = std::make_shared<android::icu::impl::Norm2AllModes>(cVar0->load(cVar1->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".nrm")))->toString()), 0x0);
	this->allModes = cVar2;
	//label_try_end_28:
	}
	catch (java::lang::RuntimeException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29;
	}
	//    .catch Ljava/lang/RuntimeException; {:try_start_3 .. :try_end_28} :catch_29
	//    .end local v1    # "impl":Landroid/icu/impl/Normalizer2Impl;
label_goto_28:
	return;
	// 097    .line 375
label_catch_29:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/RuntimeException;
	this->exception = getCatchExcetionFromList;
	goto label_goto_28;

}
// .method synthetic constructor <init>(Ljava/lang/String;Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;)V
android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::Norm2AllModes_S_Norm2AllModesSingleton(std::shared_ptr<java::lang::String> name,std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> _this1)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "-this1"    # Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
	android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::(name);
	return;

}


