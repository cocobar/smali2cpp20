// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_IsAcceptable.h"

// .method private constructor <init>()V
android::icu::impl::ICUResourceBundleReader_S_IsAcceptable::ICUResourceBundleReader_S_IsAcceptable()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ICUResourceBundleReader$IsAcceptable;)V
android::icu::impl::ICUResourceBundleReader_S_IsAcceptable::ICUResourceBundleReader_S_IsAcceptable(std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_IsAcceptable> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/ICUResourceBundleReader$IsAcceptable;
	// 036    invoke-direct {p0}, Landroid/icu/impl/ICUResourceBundleReader$IsAcceptable;-><init>()V
	return;

}
// .method public isDataVersionAcceptable([B)Z
bool android::icu::impl::ICUResourceBundleReader_S_IsAcceptable::isDataVersionAcceptable(std::shared_ptr<unsigned char[]> formatVersion)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "formatVersion"    # [B
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( formatVersion[cVar1] != cVar0 )
		goto label_cond_d;
	if ( ( formatVersion[cVar0] & 0xff) <  cVar0 )
		goto label_cond_d;
label_cond_c:
label_goto_c:
	return cVar0;
	// 068    .line 43
label_cond_d:
	if ( 0x2 >  formatVersion[cVar1] )
		goto label_cond_17;
	if ( formatVersion[cVar1] <= 0x3 )
		goto label_cond_c;
label_cond_17:
	cVar0 = cVar1;
	goto label_goto_c;

}


