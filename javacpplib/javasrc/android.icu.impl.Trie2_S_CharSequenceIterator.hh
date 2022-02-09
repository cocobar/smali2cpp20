#ifndef __android_icu_impl_Trie2_S_CharSequenceIterator__
#define __android_icu_impl_Trie2_S_CharSequenceIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$CharSequenceIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_CharSequenceValues.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
class Trie2_S_CharSequenceIterator : public java::util::Iterator<android::icu::impl::Trie2_S_CharSequenceValues> {
public:
	Trie2_S_CharSequenceIterator();
	virtual ~Trie2_S_CharSequenceIterator();

}; // class Trie2_S_CharSequenceIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie2_S_CharSequenceIterator__

