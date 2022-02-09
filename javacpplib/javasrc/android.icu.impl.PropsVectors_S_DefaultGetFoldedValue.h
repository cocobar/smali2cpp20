#ifndef __android_icu_impl_PropsVectors_S_DefaultGetFoldedValue__
#define __android_icu_impl_PropsVectors_S_DefaultGetFoldedValue__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\PropsVectors$DefaultGetFoldedValue.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrieBuilder.h"
#include "android.icu.impl.TrieBuilder_S_DataManipulate.h"

namespace android::icu::impl{
class PropsVectors_S_DefaultGetFoldedValue : public android::icu::impl::TrieBuilder_S_DataManipulate {
protected:
private:
	std::shared_ptr<android::icu::impl::IntTrieBuilder> builder;
public:
	PropsVectors_S_DefaultGetFoldedValue(std::shared_ptr<android::icu::impl::IntTrieBuilder> inBuilder);
	int virtual getFoldedValue(int start,int offset);
public:
	virtual ~PropsVectors_S_DefaultGetFoldedValue(){
	}

}; // class PropsVectors_S_DefaultGetFoldedValue
}; // namespace android::icu::impl

#endif //__android_icu_impl_PropsVectors_S_DefaultGetFoldedValue__

