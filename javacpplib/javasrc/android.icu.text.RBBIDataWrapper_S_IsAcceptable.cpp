// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIDataWrapper$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.text.RBBIDataWrapper_S_IsAcceptable.h"

// .method private constructor <init>()V
android::icu::text::RBBIDataWrapper_S_IsAcceptable::RBBIDataWrapper_S_IsAcceptable()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/RBBIDataWrapper$IsAcceptable;)V
android::icu::text::RBBIDataWrapper_S_IsAcceptable::RBBIDataWrapper_S_IsAcceptable(std::shared_ptr<android::icu::text::RBBIDataWrapper_S_IsAcceptable> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/RBBIDataWrapper$IsAcceptable;
	// 036    invoke-direct {p0}, Landroid/icu/text/RBBIDataWrapper$IsAcceptable;-><init>()V
	return;

}
// .method public isDataVersionAcceptable([B)Z
bool android::icu::text::RBBIDataWrapper_S_IsAcceptable::isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version)
{
	
	bool cVar1;
	
	//    .param p1, "version"    # [B
	cVar1 = 0x0;
	if ( version[cVar1] != 0x3 )
		goto label_cond_7;
	cVar1 = 0x1;
label_cond_7:
	return cVar1;

}


