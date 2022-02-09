#ifndef __android_icu_text_RBBISetBuilder_S_RangeDescriptor__
#define __android_icu_text_RBBISetBuilder_S_RangeDescriptor__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBISetBuilder$RangeDescriptor.smali
#include "java2ctype.h"
#include "android.icu.text.RBBINode.h"
#include "java.lang.Object.h"
#include "java.util.List.h"

namespace android::icu::text{
class RBBISetBuilder_S_RangeDescriptor : public java::lang::Object {
protected:
private:
public:
	int fEndChar;
	std::shared_ptr<java::util::List<android::icu::text::RBBINode>> fIncludesSets;
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> fNext;
	int fNum;
	int fStartChar;
	RBBISetBuilder_S_RangeDescriptor();
	RBBISetBuilder_S_RangeDescriptor(std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> other);
	void virtual setDictionaryFlag();
	void virtual split(int where);
public:
	virtual ~RBBISetBuilder_S_RangeDescriptor(){
	}

}; // class RBBISetBuilder_S_RangeDescriptor
}; // namespace android::icu::text

#endif //__android_icu_text_RBBISetBuilder_S_RangeDescriptor__

