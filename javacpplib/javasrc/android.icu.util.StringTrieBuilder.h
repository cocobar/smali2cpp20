#ifndef __android_icu_util_StringTrieBuilder__
#define __android_icu_util_StringTrieBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder_S_Option.h"
#include "android.icu.util.StringTrieBuilder_S_State.h"
#include "android.icu.util.StringTrieBuilder_S_ValueNode.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.StringBuilder.h"
#include "java.util.HashMap.h"

namespace android::icu::util{
class StringTrieBuilder : public java::lang::Object {
protected:
	std::shared_ptr<java::lang::StringBuilder> strings;
	StringTrieBuilder();
	void virtual addImpl(std::shared_ptr<java::lang::CharSequence> s,int value);
	void virtual buildImpl(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption);
	void virtual clearImpl();
	int getMaxBranchLinearSubNodeLength();
	int getMaxLinearMatchLength();
	int getMinLinearMatch();
	bool matchNodesCanHaveValues();
	int write(int var0);
	int write(int var0,int var1);
	int writeDeltaTo(int var0);
	int writeValueAndFinal(int var0,bool var1);
	int writeValueAndType(bool var0,int var1,int var2);
private:
	static std::shared_ptr<int[]> _android_icu_util_StringTrieBuilder_S_StateSwitchesValues;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> lookupFinalValueNode;
	std::shared_ptr<java::util::HashMap<android::icu::util::StringTrieBuilder_S_Node,android::icu::util::StringTrieBuilder_S_Node>> nodes;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> root;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> state;
	static int _getandroid_icu_util_StringTrieBuilder_S_StateSwitchesValues();
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> virtual createSuffixNode(std::shared_ptr<java::lang::CharSequence> s,int start,int sValue);
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> virtual registerFinalValue(int value);
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> virtual registerNode(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> newNode);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> _wrap0(std::shared_ptr<android::icu::util::StringTrieBuilder> _this,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> newNode);
	static std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> _wrap1(std::shared_ptr<android::icu::util::StringTrieBuilder> _this,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue);
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::StringTrieBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringTrieBuilder(){
	}

}; // class StringTrieBuilder
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder__

