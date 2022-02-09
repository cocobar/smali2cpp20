#ifndef __android_icu_text_RBBIDataWrapper_S_TrieFoldingFunc__
#define __android_icu_text_RBBIDataWrapper_S_TrieFoldingFunc__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIDataWrapper$TrieFoldingFunc.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"

namespace android::icu::text{
class RBBIDataWrapper_S_TrieFoldingFunc : public android::icu::impl::Trie_S_DataManipulate {
protected:
private:
public:
	RBBIDataWrapper_S_TrieFoldingFunc();
	int virtual getFoldingOffset(int data);
public:
	virtual ~RBBIDataWrapper_S_TrieFoldingFunc(){
	}

}; // class RBBIDataWrapper_S_TrieFoldingFunc
}; // namespace android::icu::text

#endif //__android_icu_text_RBBIDataWrapper_S_TrieFoldingFunc__

