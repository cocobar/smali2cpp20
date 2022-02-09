// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$DatPackageReader$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_DatPackageReader_S_IsAcceptable.h"

// .method private constructor <init>()V
android::icu::impl::ICUBinary_S_DatPackageReader_S_IsAcceptable::ICUBinary_S_DatPackageReader_S_IsAcceptable()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ICUBinary$DatPackageReader$IsAcceptable;)V
android::icu::impl::ICUBinary_S_DatPackageReader_S_IsAcceptable::ICUBinary_S_DatPackageReader_S_IsAcceptable(std::shared_ptr<android::icu::impl::ICUBinary_S_DatPackageReader_S_IsAcceptable> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/ICUBinary$DatPackageReader$IsAcceptable;
	// 036    invoke-direct {p0}, Landroid/icu/impl/ICUBinary$DatPackageReader$IsAcceptable;-><init>()V
	return;

}
// .method public isDataVersionAcceptable([B)Z
bool android::icu::impl::ICUBinary_S_DatPackageReader_S_IsAcceptable::isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "version"    # [B
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( version[cVar1] != cVar0 )
		goto label_cond_7;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = cVar1;
	goto label_goto_6;

}


