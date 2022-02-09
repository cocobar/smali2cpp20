#ifndef __android_icu_text_AlphabeticIndex__
#define __android_icu_text_AlphabeticIndex__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_Bucket.h"
#include "java.lang.Iterable.h"

namespace android::icu::text{
template <typename V>
class AlphabeticIndex : public java::lang::Iterable<android::icu::text::AlphabeticIndex_S_Bucket<V>> {
public:
	AlphabeticIndex();
	virtual ~AlphabeticIndex();

}; // class AlphabeticIndex
}; // namespace android::icu::text

#endif //__android_icu_text_AlphabeticIndex__

