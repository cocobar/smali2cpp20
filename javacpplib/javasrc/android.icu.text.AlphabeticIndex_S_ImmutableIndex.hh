#ifndef __android_icu_text_AlphabeticIndex_S_ImmutableIndex__
#define __android_icu_text_AlphabeticIndex_S_ImmutableIndex__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$ImmutableIndex.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_Bucket.h"
#include "java.lang.Iterable.h"

namespace android::icu::text{
template <typename V>
class AlphabeticIndex_S_ImmutableIndex : public java::lang::Iterable<android::icu::text::AlphabeticIndex_S_Bucket<V>> {
public:
	AlphabeticIndex_S_ImmutableIndex();
	virtual ~AlphabeticIndex_S_ImmutableIndex();

}; // class AlphabeticIndex_S_ImmutableIndex
}; // namespace android::icu::text

#endif //__android_icu_text_AlphabeticIndex_S_ImmutableIndex__

