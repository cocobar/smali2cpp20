#ifndef __android_icu_util_StringTrieBuilder_S_BranchNode__
#define __android_icu_util_StringTrieBuilder_S_BranchNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$BranchNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"

namespace android::icu::util{
class StringTrieBuilder_S_BranchNode : public android::icu::util::StringTrieBuilder_S_Node {
protected:
	int firstEdgeNumber;
	int hash;
private:
public:
	StringTrieBuilder_S_BranchNode();
	int virtual hashCode();
public:
	virtual ~StringTrieBuilder_S_BranchNode(){
	}

}; // class StringTrieBuilder_S_BranchNode
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder_S_BranchNode__

