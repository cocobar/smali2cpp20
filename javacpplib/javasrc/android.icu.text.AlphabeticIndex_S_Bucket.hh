#ifndef __android_icu_text_AlphabeticIndex_S_Bucket__
#define __android_icu_text_AlphabeticIndex_S_Bucket__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$Bucket.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_Record.h"
#include "java.lang.Iterable.h"

namespace android::icu::text{
template <typename V>
class AlphabeticIndex_S_Bucket : public java::lang::Iterable<android::icu::text::AlphabeticIndex_S_Record<V>> {
public:
	AlphabeticIndex_S_Bucket();
	virtual ~AlphabeticIndex_S_Bucket();

}; // class AlphabeticIndex_S_Bucket
}; // namespace android::icu::text

#endif //__android_icu_text_AlphabeticIndex_S_Bucket__

