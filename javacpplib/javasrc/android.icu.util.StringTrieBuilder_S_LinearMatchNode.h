#ifndef __android_icu_util_StringTrieBuilder_S_LinearMatchNode__
#define __android_icu_util_StringTrieBuilder_S_LinearMatchNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$LinearMatchNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder_S_ValueNode.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class StringTrieBuilder_S_LinearMatchNode : public android::icu::util::StringTrieBuilder_S_ValueNode {
protected:
private:
	int hash;
	int length;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> next;
	int stringOffset;
	std::shared_ptr<java::lang::CharSequence> strings;
	void virtual setHashCode();
public:
	StringTrieBuilder_S_LinearMatchNode(std::shared_ptr<java::lang::CharSequence> builderStrings,int sOffset,int len,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> nextNode);
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> virtual add(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
	int virtual markRightEdgesFirst(int cVar0);
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> virtual register(std::shared_ptr<android::icu::util::StringTrieBuilder> builder);
	void virtual write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder);
public:
	virtual ~StringTrieBuilder_S_LinearMatchNode(){
	}

}; // class StringTrieBuilder_S_LinearMatchNode
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder_S_LinearMatchNode__

