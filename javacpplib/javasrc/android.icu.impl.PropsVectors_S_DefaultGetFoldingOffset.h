#ifndef __android_icu_impl_PropsVectors_S_DefaultGetFoldingOffset__
#define __android_icu_impl_PropsVectors_S_DefaultGetFoldingOffset__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\PropsVectors$DefaultGetFoldingOffset.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"

namespace android::icu::impl{
class PropsVectors_S_DefaultGetFoldingOffset : public android::icu::impl::Trie_S_DataManipulate {
protected:
private:
	PropsVectors_S_DefaultGetFoldingOffset();
public:
	PropsVectors_S_DefaultGetFoldingOffset(std::shared_ptr<android::icu::impl::PropsVectors_S_DefaultGetFoldingOffset> _this0);
	int virtual getFoldingOffset(int value);
public:
	virtual ~PropsVectors_S_DefaultGetFoldingOffset(){
	}

}; // class PropsVectors_S_DefaultGetFoldingOffset
}; // namespace android::icu::impl

#endif //__android_icu_impl_PropsVectors_S_DefaultGetFoldingOffset__

