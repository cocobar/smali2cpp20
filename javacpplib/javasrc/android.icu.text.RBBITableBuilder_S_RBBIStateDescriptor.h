#ifndef __android_icu_text_RBBITableBuilder_S_RBBIStateDescriptor__
#define __android_icu_text_RBBITableBuilder_S_RBBIStateDescriptor__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBITableBuilder$RBBIStateDescriptor.smali
#include "java2ctype.h"
#include "android.icu.text.RBBINode.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.util.Set.h"
#include "java.util.SortedSet.h"

namespace android::icu::text{
class RBBITableBuilder_S_RBBIStateDescriptor : public java::lang::Object {
protected:
private:
public:
	int fAccepting;
	std::shared_ptr<int[]> fDtran;
	int fLookAhead;
	bool fMarked;
	std::shared_ptr<java::util::Set<android::icu::text::RBBINode>> fPositions;
	std::shared_ptr<java::util::SortedSet<java::lang::Integer>> fTagVals;
	int fTagsIdx;
	RBBITableBuilder_S_RBBIStateDescriptor(int maxInputSymbol);
public:
	virtual ~RBBITableBuilder_S_RBBIStateDescriptor(){
	}

}; // class RBBITableBuilder_S_RBBIStateDescriptor
}; // namespace android::icu::text

#endif //__android_icu_text_RBBITableBuilder_S_RBBIStateDescriptor__

