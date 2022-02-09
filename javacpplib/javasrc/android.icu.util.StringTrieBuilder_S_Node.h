#ifndef __android_icu_util_StringTrieBuilder_S_Node__
#define __android_icu_util_StringTrieBuilder_S_Node__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$Node.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class StringTrieBuilder_S_Node : public java::lang::Object {
protected:
	int offset;
private:
public:
	StringTrieBuilder_S_Node();
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> virtual add(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual getOffset();
	int hashCode() = 0;
	int virtual markRightEdgesFirst(int edgeNumber);
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> virtual register(std::shared_ptr<android::icu::util::StringTrieBuilder> builder);
	void write(std::shared_ptr<android::icu::util::StringTrieBuilder> var0) = 0;
	void virtual writeUnlessInsideRightEdge(int firstRight,int lastRight,std::shared_ptr<android::icu::util::StringTrieBuilder> builder);
public:
	virtual ~StringTrieBuilder_S_Node(){
	}

}; // class StringTrieBuilder_S_Node
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder_S_Node__

