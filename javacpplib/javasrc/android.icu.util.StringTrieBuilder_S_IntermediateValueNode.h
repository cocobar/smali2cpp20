#ifndef __android_icu_util_StringTrieBuilder_S_IntermediateValueNode__
#define __android_icu_util_StringTrieBuilder_S_IntermediateValueNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$IntermediateValueNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder_S_ValueNode.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class StringTrieBuilder_S_IntermediateValueNode : public android::icu::util::StringTrieBuilder_S_ValueNode {
protected:
private:
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> next;
public:
	StringTrieBuilder_S_IntermediateValueNode(int v,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> nextNode);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
	int virtual markRightEdgesFirst(int cVar0);
	void virtual write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder);
public:
	virtual ~StringTrieBuilder_S_IntermediateValueNode(){
	}

}; // class StringTrieBuilder_S_IntermediateValueNode
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder_S_IntermediateValueNode__

