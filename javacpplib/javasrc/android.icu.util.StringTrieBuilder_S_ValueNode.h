#ifndef __android_icu_util_StringTrieBuilder_S_ValueNode__
#define __android_icu_util_StringTrieBuilder_S_ValueNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$ValueNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class StringTrieBuilder_S_ValueNode : public android::icu::util::StringTrieBuilder_S_Node {
protected:
	bool hasValue;
	int value;
private:
	void virtual setFinalValue(int v);
public:
	static bool _assertionsDisabled;
	static void _wrap0(std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> _this,int v);
	static void static_cinit();
	StringTrieBuilder_S_ValueNode();
	StringTrieBuilder_S_ValueNode(int v);
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> virtual add(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
	void virtual setValue(int v);
	void virtual write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::StringTrieBuilder_S_ValueNode::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringTrieBuilder_S_ValueNode(){
	}

}; // class StringTrieBuilder_S_ValueNode
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder_S_ValueNode__

