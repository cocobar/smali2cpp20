#ifndef __android_icu_text_AlphabeticIndex_S_BucketList__
#define __android_icu_text_AlphabeticIndex_S_BucketList__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$BucketList.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_Bucket.h"
#include "java.lang.Iterable.h"

namespace android::icu::text{
template <typename V>
class AlphabeticIndex_S_BucketList : public java::lang::Iterable<android::icu::text::AlphabeticIndex_S_Bucket<V>> {
public:
	AlphabeticIndex_S_BucketList();
	virtual ~AlphabeticIndex_S_BucketList();

}; // class AlphabeticIndex_S_BucketList
}; // namespace android::icu::text

#endif //__android_icu_text_AlphabeticIndex_S_BucketList__

