#ifndef __android_icu_util_CharsTrie__
#define __android_icu_util_CharsTrie__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrie.smali
#include "java2ctype.h"
#include "android.icu.util.CharsTrie_S_Entry.hh"
#include "java.lang.Cloneable.hh"
#include "java.lang.Iterable.hh"

namespace android::icu::util{
class CharsTrie : public java::lang::Cloneable, public java::lang::Iterable<android::icu::util::CharsTrie_S_Entry> {
public:
	CharsTrie();
	virtual ~CharsTrie();

}; // class CharsTrie
}; // namespace android::icu::util

#endif //__android_icu_util_CharsTrie__

