#ifndef __android_icu_text_RBBINode__
#define __android_icu_text_RBBINode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBINode.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Set.h"

namespace android::icu::text{
class RBBINode : public java::lang::Object {
protected:
private:
public:
	static int endMark;
	static int gLastSerial;
	static int leafChar;
	static int lookAhead;
	static int nodeTypeLimit;
	static std::shared_ptr<std::vector<java::lang::String>> nodeTypeNames;
	static int opBreak;
	static int opCat;
	static int opLParen;
	static int opOr;
	static int opPlus;
	static int opQuestion;
	static int opReverse;
	static int opStar;
	static int opStart;
	static int precLParen;
	static int precOpCat;
	static int precOpOr;
	static int precStart;
	static int precZero;
	static int setRef;
	static int tag;
	static int uset;
	static int varRef;
	bool fChainIn;
	int fFirstPos;
	std::shared_ptr<java::util::Set<android::icu::text::RBBINode>> fFirstPosSet;
	std::shared_ptr<java::util::Set<android::icu::text::RBBINode>> fFollowPos;
	std::shared_ptr<android::icu::text::UnicodeSet> fInputSet;
	int fLastPos;
	std::shared_ptr<java::util::Set<android::icu::text::RBBINode>> fLastPosSet;
	std::shared_ptr<android::icu::text::RBBINode> fLeftChild;
	bool fLookAheadEnd;
	bool fNullable;
	std::shared_ptr<android::icu::text::RBBINode> fParent;
	int fPrecedence;
	std::shared_ptr<android::icu::text::RBBINode> fRightChild;
	bool fRuleRoot;
	int fSerialNum;
	std::shared_ptr<java::lang::String> fText;
	int fType;
	int fVal;
	static void static_cinit();
	RBBINode(int t);
	RBBINode(std::shared_ptr<android::icu::text::RBBINode> other);
	static void printHex(int i,int minWidth);
	static void printInt(int i,int minWidth);
	static void printNode(std::shared_ptr<android::icu::text::RBBINode> n);
	static void printString(std::shared_ptr<java::lang::String> s,int minWidth);
	std::shared_ptr<android::icu::text::RBBINode> virtual cloneTree();
	void virtual findNodes(std::shared_ptr<java::util::List<android::icu::text::RBBINode>> dest,int kind);
	void virtual flattenSets();
	std::shared_ptr<android::icu::text::RBBINode> virtual flattenVariables();
	void virtual printTree(bool printHeading);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RBBINode::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RBBINode(){
	}

}; // class RBBINode
}; // namespace android::icu::text

#endif //__android_icu_text_RBBINode__

