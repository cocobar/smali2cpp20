#ifndef __android_icu_util_StringTrieBuilder_S_ListBranchNode__
#define __android_icu_util_StringTrieBuilder_S_ListBranchNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$ListBranchNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_BranchNode.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class StringTrieBuilder_S_ListBranchNode : public android::icu::util::StringTrieBuilder_S_BranchNode {
protected:
private:
	std::shared_ptr<std::vector<android::icu::util::StringTrieBuilder_S_Node>> equal;
	int length;
	std::shared_ptr<char[]> units;
	std::shared_ptr<int[]> values;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	StringTrieBuilder_S_ListBranchNode(int capacity);
	void virtual add(int c,int value);
	void virtual add(int c,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> node);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
	int virtual markRightEdgesFirst(int edgeNumber);
	void virtual write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::StringTrieBuilder_S_ListBranchNode::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringTrieBuilder_S_ListBranchNode(){
	}

}; // class StringTrieBuilder_S_ListBranchNode
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder_S_ListBranchNode__

