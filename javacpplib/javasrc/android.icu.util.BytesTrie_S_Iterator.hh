#ifndef __android_icu_util_BytesTrie_S_Iterator__
#define __android_icu_util_BytesTrie_S_Iterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie$Iterator.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_Entry.h"
#include "java.util.Iterator.h"

namespace android::icu::util{
class BytesTrie_S_Iterator : public java::util::Iterator<android::icu::util::BytesTrie_S_Entry> {
public:
	BytesTrie_S_Iterator();
	virtual ~BytesTrie_S_Iterator();

}; // class BytesTrie_S_Iterator
}; // namespace android::icu::util

#endif //__android_icu_util_BytesTrie_S_Iterator__

