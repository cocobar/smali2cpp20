// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataReader$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationDataReader_S_IsAcceptable.h"

// .method private constructor <init>()V
android::icu::impl::coll::CollationDataReader_S_IsAcceptable::CollationDataReader_S_IsAcceptable()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/coll/CollationDataReader$IsAcceptable;)V
android::icu::impl::coll::CollationDataReader_S_IsAcceptable::CollationDataReader_S_IsAcceptable(std::shared_ptr<android::icu::impl::coll::CollationDataReader_S_IsAcceptable> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/coll/CollationDataReader$IsAcceptable;
	// 036    invoke-direct {p0}, Landroid/icu/impl/coll/CollationDataReader$IsAcceptable;-><init>()V
	return;

}
// .method public isDataVersionAcceptable([B)Z
bool android::icu::impl::coll::CollationDataReader_S_IsAcceptable::isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version)
{
	
	bool cVar1;
	
	//    .param p1, "version"    # [B
	cVar1 = 0x0;
	if ( version[cVar1] != 0x5 )
		goto label_cond_7;
	cVar1 = 0x1;
label_cond_7:
	return cVar1;

}

