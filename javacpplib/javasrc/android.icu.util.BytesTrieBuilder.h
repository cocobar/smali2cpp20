#ifndef __android_icu_util_BytesTrieBuilder__
#define __android_icu_util_BytesTrieBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrieBuilder.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie.h"
#include "android.icu.util.StringTrieBuilder_S_Option.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::util{
class BytesTrieBuilder : public android::icu::util::StringTrieBuilder {
protected:
	int virtual getMaxBranchLinearSubNodeLength();
	int virtual getMaxLinearMatchLength();
	int virtual getMinLinearMatch();
	bool virtual matchNodesCanHaveValues();
	int virtual write(int b);
	int virtual write(int offset,int length);
	int virtual writeDeltaTo(int jumpTarget);
	int virtual writeValueAndFinal(int i,bool isFinal);
	int virtual writeValueAndType(bool hasValue,int value,int node);
private:
	std::shared_ptr<unsigned char[]> bytes;
	int bytesLength;
	std::shared_ptr<unsigned char[]> intBytes;
	void virtual buildBytes(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption);
	void virtual ensureCapacity(int length);
	int virtual write(std::shared_ptr<unsigned char[]> b,int length);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	BytesTrieBuilder();
	std::shared_ptr<android::icu::util::BytesTrieBuilder> virtual add(std::shared_ptr<unsigned char[]> sequence,int length,int value);
	std::shared_ptr<android::icu::util::BytesTrie> virtual build(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption);
	std::shared_ptr<java::nio::ByteBuffer> virtual buildByteBuffer(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption);
	std::shared_ptr<android::icu::util::BytesTrieBuilder> virtual clear();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::BytesTrieBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BytesTrieBuilder(){
	}

}; // class BytesTrieBuilder
}; // namespace android::icu::util

#endif //__android_icu_util_BytesTrieBuilder__

