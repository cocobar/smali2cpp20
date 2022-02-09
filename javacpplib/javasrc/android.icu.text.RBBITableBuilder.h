#ifndef __android_icu_text_RBBITableBuilder__
#define __android_icu_text_RBBITableBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBITableBuilder.smali
#include "java2ctype.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleBuilder.h"
#include "android.icu.text.RBBITableBuilder_S_RBBIStateDescriptor.h"
#include "java.lang.Object.h"
#include "java.util.Collection.h"
#include "java.util.List.h"

namespace android::icu::text{
class RBBITableBuilder : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::List<android::icu::text::RBBITableBuilder_S_RBBIStateDescriptor>> fDStates;
	std::shared_ptr<android::icu::text::RBBIRuleBuilder> fRB;
	int fRootIx;
public:
	RBBITableBuilder(std::shared_ptr<android::icu::text::RBBIRuleBuilder> rb,int rootNodeIx);
	void virtual addRuleRootNodes(std::shared_ptr<java::util::List<android::icu::text::RBBINode>> dest,std::shared_ptr<android::icu::text::RBBINode> node);
	void virtual bofFixup();
	void virtual build();
	void virtual buildStateTable();
	void virtual calcChainedFollowPos(std::shared_ptr<android::icu::text::RBBINode> tree);
	void virtual calcFirstPos(std::shared_ptr<android::icu::text::RBBINode> n);
	void virtual calcFollowPos(std::shared_ptr<android::icu::text::RBBINode> n);
	void virtual calcLastPos(std::shared_ptr<android::icu::text::RBBINode> n);
	void virtual calcNullable(std::shared_ptr<android::icu::text::RBBINode> n);
	short virtual exportTable();
	void virtual flagAcceptingStates();
	void virtual flagLookAheadStates();
	void virtual flagTaggedStates();
	int virtual getTableSize();
	void virtual mergeRuleStatusVals();
	void virtual printPosSets(std::shared_ptr<android::icu::text::RBBINode> n);
	void virtual printRuleStatusTable();
	void virtual printSet(std::shared_ptr<java::util::Collection<android::icu::text::RBBINode>> s);
	void virtual printStates();
public:
	virtual ~RBBITableBuilder(){
	}

}; // class RBBITableBuilder
}; // namespace android::icu::text

#endif //__android_icu_text_RBBITableBuilder__

