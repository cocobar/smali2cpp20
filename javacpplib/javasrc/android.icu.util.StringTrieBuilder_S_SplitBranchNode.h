#ifndef __android_icu_util_StringTrieBuilder_S_SplitBranchNode__
#define __android_icu_util_StringTrieBuilder_S_SplitBranchNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$SplitBranchNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_BranchNode.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class StringTrieBuilder_S_SplitBranchNode : public android::icu::util::StringTrieBuilder_S_BranchNode {
protected:
private:
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> greaterOrEqual;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> lessThan;
	char unit;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	StringTrieBuilder_S_SplitBranchNode(char middleUnit,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> lessThanNode,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> greaterOrEqualNode);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
	int virtual markRightEdgesFirst(int cVar0);
	void virtual write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::StringTrieBuilder_S_SplitBranchNode::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringTrieBuilder_S_SplitBranchNode(){
	}

}; // class StringTrieBuilder_S_SplitBranchNode
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder_S_SplitBranchNode__

