#ifndef __android_icu_util_BytesTrie__
#define __android_icu_util_BytesTrie__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_Entry.hh"
#include "java.lang.Cloneable.hh"
#include "java.lang.Iterable.hh"

namespace android::icu::util{
class BytesTrie : public java::lang::Cloneable, public java::lang::Iterable<android::icu::util::BytesTrie_S_Entry> {
public:
	BytesTrie();
	virtual ~BytesTrie();

}; // class BytesTrie
}; // namespace android::icu::util

#endif //__android_icu_util_BytesTrie__

