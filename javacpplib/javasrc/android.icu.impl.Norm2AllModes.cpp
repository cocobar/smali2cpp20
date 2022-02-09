// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.Norm2AllModes_S_1.h"
#include "android.icu.impl.Norm2AllModes_S_ComposeNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_DecomposeNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_FCDNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_NFCSingleton.h"
#include "android.icu.impl.Norm2AllModes_S_NFKCSingleton.h"
#include "android.icu.impl.Norm2AllModes_S_NFKC_CFSingleton.h"
#include "android.icu.impl.Norm2AllModes_S_NoopNormalizer2.h"
#include "android.icu.impl.Norm2AllModes_S_Norm2AllModesSingleton.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.Normalizer2.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

static android::icu::impl::Norm2AllModes::NOOP_NORMALIZER2;
static android::icu::impl::Norm2AllModes::cache;
// .method static constructor <clinit>()V
void android::icu::impl::Norm2AllModes::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_1> cVar0;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_NoopNormalizer2> cVar1;
	
	cVar0 = std::make_shared<android::icu::impl::Norm2AllModes_S_1>();
	android::icu::impl::Norm2AllModes::cache = cVar0;
	cVar1 = std::make_shared<android::icu::impl::Norm2AllModes_S_NoopNormalizer2>();
	android::icu::impl::Norm2AllModes::NOOP_NORMALIZER2 = cVar1;
	return;

}
// .method private constructor <init>(Landroid/icu/impl/Normalizer2Impl;)V
android::icu::impl::Norm2AllModes::Norm2AllModes(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni)
{
	
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_ComposeNormalizer2> cVar0;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_DecomposeNormalizer2> cVar1;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_FCDNormalizer2> cVar2;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_ComposeNormalizer2> cVar3;
	
	//    .param p1, "ni"    # Landroid/icu/impl/Normalizer2Impl;
	// 082    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->impl = ni;
	cVar0 = std::make_shared<android::icu::impl::Norm2AllModes_S_ComposeNormalizer2>(ni, 0x0);
	this->comp = cVar0;
	cVar1 = std::make_shared<android::icu::impl::Norm2AllModes_S_DecomposeNormalizer2>(ni);
	this->decomp = cVar1;
	cVar2 = std::make_shared<android::icu::impl::Norm2AllModes_S_FCDNormalizer2>(ni);
	this->fcd = cVar2;
	cVar3 = std::make_shared<android::icu::impl::Norm2AllModes_S_ComposeNormalizer2>(ni, 0x1);
	this->fcc = cVar3;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/Normalizer2Impl;Landroid/icu/impl/Norm2AllModes;)V
android::icu::impl::Norm2AllModes::Norm2AllModes(std::shared_ptr<android::icu::impl::Normalizer2Impl> ni,std::shared_ptr<android::icu::impl::Norm2AllModes> _this1)
{
	
	//    .param p1, "ni"    # Landroid/icu/impl/Normalizer2Impl;
	//    .param p2, "-this1"    # Landroid/icu/impl/Norm2AllModes;
	android::icu::impl::Norm2AllModes::(ni);
	return;

}
// .method public static getFCDNormalizer2()Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::impl::Norm2AllModes::getFCDNormalizer2()
{
	
	return android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->fcd;

}
// .method public static getInstance(Ljava/nio/ByteBuffer;Ljava/lang/String;)Landroid/icu/impl/Norm2AllModes;
std::shared_ptr<android::icu::impl::Norm2AllModes> android::icu::impl::Norm2AllModes::getInstance(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> cVar0;
	std::shared_ptr<android::icu::impl::Norm2AllModes> cVar1;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p1, "name"    # Ljava/lang/String;
	if ( bytes )     
		goto label_cond_3f;
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("nfc")))) )  
		goto label_cond_1c;
	cVar0 = android::icu::impl::Norm2AllModes_S_NFCSingleton::-get0({const[class].FS-Param});
label_goto_f:
	if ( !(cVar0) )  
		goto label_cond_3f;
	if ( !(android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::-get1(cVar0)) )  
		goto label_cond_3a;
	// throw
	throw android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::-get1(cVar0);
	// 189    .line 331
label_cond_1c:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("nfkc")))) )  
		goto label_cond_2a;
	cVar0 = android::icu::impl::Norm2AllModes_S_NFKCSingleton::-get0({const[class].FS-Param});
	//    .local v0, "singleton":Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
	goto label_goto_f;
	// 207    .line 333
	// 208    .end local v0    # "singleton":Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
label_cond_2a:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("nfkc_cf")))) )  
		goto label_cond_38;
	cVar0 = android::icu::impl::Norm2AllModes_S_NFKC_CFSingleton::-get0({const[class].FS-Param});
	//    .restart local v0    # "singleton":Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
	goto label_goto_f;
	// 226    .line 336
	// 227    .end local v0    # "singleton":Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
label_cond_38:
	cVar0 = 0x0;
	//    .local v0, "singleton":Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
	goto label_goto_f;
	// 234    .line 342
	// 235    .end local v0    # "singleton":Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
label_cond_3a:
	return android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::-get0(cVar0);
	// 243    .line 345
label_cond_3f:
	cVar1 = android::icu::impl::Norm2AllModes::cache->getInstance(name, bytes);
	cVar1->checkCast("android::icu::impl::Norm2AllModes");
	return cVar1;

}
// .method private static getInstanceFromSingleton(Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;)Landroid/icu/impl/Norm2AllModes;
std::shared_ptr<android::icu::impl::Norm2AllModes> android::icu::impl::Norm2AllModes::getInstanceFromSingleton(std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> singleton)
{
	
	//    .param p0, "singleton"    # Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
	if ( !(android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::-get1(singleton)) )  
		goto label_cond_b;
	// throw
	throw android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::-get1(singleton);
	// 275    .line 305
label_cond_b:
	return android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton::-get0(singleton);

}
// .method public static getN2WithImpl(I)Landroid/icu/impl/Norm2AllModes$Normalizer2WithImpl;
std::shared_ptr<android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl> android::icu::impl::Norm2AllModes::getN2WithImpl(int index)
{
	
	//    .param p0, "index"    # I
	// switch
	{
	auto item = ( index );
	if (item == 0) goto label_pswitch_5;
	if (item == 1) goto label_pswitch_c;
	if (item == 2) goto label_pswitch_13;
	if (item == 3) goto label_pswitch_1a;
	}
	return 0x0;
	// 297    .line 319
label_pswitch_5:
	return android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->decomp;
	// 307    .line 320
label_pswitch_c:
	return android::icu::impl::Norm2AllModes::getNFKCInstance({const[class].FS-Param})->decomp;
	// 317    .line 321
label_pswitch_13:
	return android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->comp;
	// 327    .line 322
label_pswitch_1a:
	return android::icu::impl::Norm2AllModes::getNFKCInstance({const[class].FS-Param})->comp;
	// 337    .line 318
	// 338    nop
	// 340    :pswitch_data_22
	// 341    .packed-switch 0x0
	// 342        :pswitch_5
	// 343        :pswitch_c
	// 344        :pswitch_13
	// 345        :pswitch_1a
	// 346    .end packed-switch

}
// .method public static getNFCInstance()Landroid/icu/impl/Norm2AllModes;
std::shared_ptr<android::icu::impl::Norm2AllModes> android::icu::impl::Norm2AllModes::getNFCInstance()
{
	
	return android::icu::impl::Norm2AllModes::getInstanceFromSingleton(android::icu::impl::Norm2AllModes_S_NFCSingleton::-get0({const[class].FS-Param}));

}
// .method public static getNFKCInstance()Landroid/icu/impl/Norm2AllModes;
std::shared_ptr<android::icu::impl::Norm2AllModes> android::icu::impl::Norm2AllModes::getNFKCInstance()
{
	
	return android::icu::impl::Norm2AllModes::getInstanceFromSingleton(android::icu::impl::Norm2AllModes_S_NFKCSingleton::-get0({const[class].FS-Param}));

}
// .method public static getNFKC_CFInstance()Landroid/icu/impl/Norm2AllModes;
std::shared_ptr<android::icu::impl::Norm2AllModes> android::icu::impl::Norm2AllModes::getNFKC_CFInstance()
{
	
	return android::icu::impl::Norm2AllModes::getInstanceFromSingleton(android::icu::impl::Norm2AllModes_S_NFKC_CFSingleton::-get0({const[class].FS-Param}));

}


