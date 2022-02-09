#ifndef __android_icu_text_RBBISetBuilder__
#define __android_icu_text_RBBISetBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBISetBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrieBuilder.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleBuilder.h"
#include "android.icu.text.RBBISetBuilder_S_RBBIDataManipulate.h"
#include "android.icu.text.RBBISetBuilder_S_RangeDescriptor.h"
#include "java.io.OutputStream.h"
#include "java.lang.Object.h"
#include "java.util.List.h"

namespace android::icu::text{
class RBBISetBuilder : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RBBIDataManipulate> dm;
	int fGroupCount;
	std::shared_ptr<android::icu::text::RBBIRuleBuilder> fRB;
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> fRangeList;
	bool fSawBOF;
	std::shared_ptr<android::icu::impl::IntTrieBuilder> fTrie;
	RBBISetBuilder(std::shared_ptr<android::icu::text::RBBIRuleBuilder> rb);
	void virtual addValToSet(std::shared_ptr<android::icu::text::RBBINode> usetNode,int val);
	void virtual addValToSets(std::shared_ptr<java::util::List<android::icu::text::RBBINode>> sets,int val);
	void virtual build();
	int virtual getFirstChar(int category);
	int virtual getNumCharCategories();
	int virtual getTrieSize();
	void virtual printRangeGroups();
	void virtual printRanges();
	void virtual printSets();
	bool virtual sawBOF();
	void virtual serializeTrie(std::shared_ptr<java::io::OutputStream> os);
public:
	virtual ~RBBISetBuilder(){
	}

}; // class RBBISetBuilder
}; // namespace android::icu::text

#endif //__android_icu_text_RBBISetBuilder__

