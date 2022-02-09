#ifndef __android_icu_util_CharsTrieBuilder__
#define __android_icu_util_CharsTrieBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrieBuilder.smali
#include "java2ctype.h"
#include "android.icu.util.CharsTrie.h"
#include "android.icu.util.StringTrieBuilder_S_Option.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.CharSequence.h"

namespace android::icu::util{
class CharsTrieBuilder : public android::icu::util::StringTrieBuilder {
protected:
	int virtual getMaxBranchLinearSubNodeLength();
	int virtual getMaxLinearMatchLength();
	int virtual getMinLinearMatch();
	bool virtual matchNodesCanHaveValues();
	int virtual write(int unit);
	int virtual write(int offset,int length);
	int virtual writeDeltaTo(int jumpTarget);
	int virtual writeValueAndFinal(int i,bool isFinal);
	int virtual writeValueAndType(bool hasValue,int value,int node);
private:
	std::shared_ptr<char[]> chars;
	int charsLength;
	std::shared_ptr<char[]> intUnits;
	void virtual buildChars(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption);
	void virtual ensureCapacity(int length);
	int virtual write(std::shared_ptr<char[]> s,int length);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CharsTrieBuilder();
	std::shared_ptr<android::icu::util::CharsTrieBuilder> virtual add(std::shared_ptr<java::lang::CharSequence> s,int value);
	std::shared_ptr<android::icu::util::CharsTrie> virtual build(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption);
	std::shared_ptr<java::lang::CharSequence> virtual buildCharSequence(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption);
	std::shared_ptr<android::icu::util::CharsTrieBuilder> virtual clear();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::CharsTrieBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharsTrieBuilder(){
	}

}; // class CharsTrieBuilder
}; // namespace android::icu::util

#endif //__android_icu_util_CharsTrieBuilder__

