// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RawCollationKey.smali
#include "java2ctype.h"
#include "android.icu.text.RawCollationKey.h"
#include "android.icu.util.ByteArrayWrapper.h"

// .method public constructor <init>()V
android::icu::text::RawCollationKey::RawCollationKey()
{
	
	// 012    invoke-direct {p0}, Landroid/icu/util/ByteArrayWrapper;-><init>()V
	return;

}
// .method public constructor <init>(I)V
android::icu::text::RawCollationKey::RawCollationKey(int capacity)
{
	
	//    .param p1, "capacity"    # I
	// 024    invoke-direct {p0}, Landroid/icu/util/ByteArrayWrapper;-><init>()V
	this->bytes = std::make_shared<std::vector<unsigned char[]>>(capacity);
	return;

}
// .method public constructor <init>([B)V
android::icu::text::RawCollationKey::RawCollationKey(std::shared_ptr<unsigned char[]> bytes)
{
	
	//    .param p1, "bytes"    # [B
	// 041    invoke-direct {p0}, Landroid/icu/util/ByteArrayWrapper;-><init>()V
	this->bytes = bytes;
	return;

}
// .method public constructor <init>([BI)V
android::icu::text::RawCollationKey::RawCollationKey(std::shared_ptr<unsigned char[]> bytesToAdopt,int size)
{
	
	//    .param p1, "bytesToAdopt"    # [B
	//    .param p2, "size"    # I
	android::icu::util::ByteArrayWrapper::(bytesToAdopt, size);
	return;

}
// .method public compareTo(Landroid/icu/text/RawCollationKey;)I
int android::icu::text::RawCollationKey::compareTo(std::shared_ptr<android::icu::text::RawCollationKey> rhs)
{
	
	int cVar1;
	int result;
	
	//    .param p1, "rhs"    # Landroid/icu/text/RawCollationKey;
	cVar1 = 0x0;
	result = this->compareTo(rhs);
	//    .local v0, "result":I
	if ( result >= 0 )
		goto label_cond_9;
	cVar1 = -0x1;
label_cond_8:
label_goto_8:
	return cVar1;
label_cond_9:
	if ( !(result) )  
		goto label_cond_8;
	cVar1 = 0x1;
	goto label_goto_8;

}


