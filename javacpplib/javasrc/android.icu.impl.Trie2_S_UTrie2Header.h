#ifndef __android_icu_impl_Trie2_S_UTrie2Header__
#define __android_icu_impl_Trie2_S_UTrie2Header__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$UTrie2Header.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class Trie2_S_UTrie2Header : public java::lang::Object {
protected:
private:
public:
	int dataNullOffset;
	int index2NullOffset;
	int indexLength;
	int options;
	int shiftedDataLength;
	int shiftedHighStart;
	int signature;
	Trie2_S_UTrie2Header();
public:
	virtual ~Trie2_S_UTrie2Header(){
	}

}; // class Trie2_S_UTrie2Header
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie2_S_UTrie2Header__

