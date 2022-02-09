// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator$CollationKeyByteSink.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyByteSink.h"
#include "android.icu.text.RawCollationKey.h"
#include "android.icu.text.RuleBasedCollator_S_CollationKeyByteSink.h"
#include "java.lang.System.h"

// .method static synthetic -get0(Landroid/icu/text/RuleBasedCollator$CollationKeyByteSink;)Landroid/icu/text/RawCollationKey;
std::shared_ptr<android::icu::text::RawCollationKey> android::icu::text::RuleBasedCollator_S_CollationKeyByteSink::_get0(std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationKeyByteSink> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/RuleBasedCollator$CollationKeyByteSink;
	return _this->key_;

}
// .method constructor <init>(Landroid/icu/text/RawCollationKey;)V
android::icu::text::RuleBasedCollator_S_CollationKeyByteSink::RuleBasedCollator_S_CollationKeyByteSink(std::shared_ptr<android::icu::text::RawCollationKey> key)
{
	
	//    .param p1, "key"    # Landroid/icu/text/RawCollationKey;
	android::icu::impl::coll::CollationKeys_S_SortKeyByteSink::(key->bytes);
	this->key_ = key;
	return;

}
// .method protected AppendBeyondCapacity([BIII)V
void android::icu::text::RuleBasedCollator_S_CollationKeyByteSink::AppendBeyondCapacity(std::shared_ptr<unsigned char[]> bytes,int start,int n,int length)
{
	
	//    .param p1, "bytes"    # [B
	//    .param p2, "start"    # I
	//    .param p3, "n"    # I
	//    .param p4, "length"    # I
	if ( !(this->Resize(n, length)) )  
		goto label_cond_b;
	java::lang::System::arraycopy(bytes, start, this->buffer_, length, n);
label_cond_b:
	return;

}
// .method protected Resize(II)Z
bool android::icu::text::RuleBasedCollator_S_CollationKeyByteSink::Resize(int appendCapacity,int length)
{
	
	int cVar0;
	int newCapacity;
	int altCapacity;
	std::shared<std::vector<unsigned char[]>> newBytes;
	
	//    .param p1, "appendCapacity"    # I
	//    .param p2, "length"    # I
	cVar0 = 0x0;
	newCapacity = ( this->buffer_->size() * 0x2);
	//    .local v2, "newCapacity":I
	altCapacity = (length + ( appendCapacity * 0x2));
	//    .local v0, "altCapacity":I
	if ( newCapacity >= altCapacity )
		goto label_cond_d;
	newCapacity = altCapacity;
label_cond_d:
	if ( newCapacity >= 0xc8 )
		goto label_cond_13;
label_cond_13:
	newBytes = std::make_shared<std::vector<unsigned char[]>>(newCapacity);
	//    .local v1, "newBytes":[B
	java::lang::System::arraycopy(this->buffer_, cVar0, newBytes, cVar0, length);
	this->key_->bytes = newBytes;
	this->buffer_ = newBytes;
	return 0x1;

}


