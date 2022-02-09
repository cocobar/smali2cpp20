#ifndef __android_icu_util_StringTrieBuilder_S_DynamicBranchNode__
#define __android_icu_util_StringTrieBuilder_S_DynamicBranchNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$DynamicBranchNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder_S_ValueNode.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"

namespace android::icu::util{
class StringTrieBuilder_S_DynamicBranchNode : public android::icu::util::StringTrieBuilder_S_ValueNode {
protected:
private:
	std::shared_ptr<java::lang::StringBuilder> chars;
	std::shared_ptr<java::util::ArrayList<android::icu::util::StringTrieBuilder_S_Node>> equal;
	int virtual find(char c);
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> virtual register(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,int start,int limit);
public:
	StringTrieBuilder_S_DynamicBranchNode();
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> virtual add(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue);
	void virtual add(char c,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> node);
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> virtual register(std::shared_ptr<android::icu::util::StringTrieBuilder> builder);
public:
	virtual ~StringTrieBuilder_S_DynamicBranchNode(){
	}

}; // class StringTrieBuilder_S_DynamicBranchNode
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder_S_DynamicBranchNode__

