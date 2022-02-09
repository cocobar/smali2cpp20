#ifndef __android_icu_text_RBBISetBuilder_S_RBBIDataManipulate__
#define __android_icu_text_RBBISetBuilder_S_RBBIDataManipulate__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBISetBuilder$RBBIDataManipulate.smali
#include "java2ctype.h"
#include "android.icu.impl.TrieBuilder_S_DataManipulate.h"
#include "android.icu.text.RBBISetBuilder.h"

namespace android::icu::text{
class RBBISetBuilder_S_RBBIDataManipulate : public android::icu::impl::TrieBuilder_S_DataManipulate {
protected:
private:
public:
	std::shared_ptr<android::icu::text::RBBISetBuilder> this_S_0;
	RBBISetBuilder_S_RBBIDataManipulate(std::shared_ptr<android::icu::text::RBBISetBuilder> this_S_0);
	int virtual getFoldedValue(int start,int offset);
public:
	virtual ~RBBISetBuilder_S_RBBIDataManipulate(){
	}

}; // class RBBISetBuilder_S_RBBIDataManipulate
}; // namespace android::icu::text

#endif //__android_icu_text_RBBISetBuilder_S_RBBIDataManipulate__

