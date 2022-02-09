#ifndef __android_icu_impl_Trie2_32__
#define __android_icu_impl_Trie2_32__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2_32.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2.h"
#include "java.io.OutputStream.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class Trie2_32 : public android::icu::impl::Trie2 {
protected:
private:
public:
	Trie2_32();
	static std::shared_ptr<android::icu::impl::Trie2_32> createFromSerialized(std::shared_ptr<java::nio::ByteBuffer> bytes);
	int virtual get(int codePoint);
	int virtual getFromU16SingleLead(char codeUnit);
	int virtual getSerializedLength();
	int virtual rangeEnd(int startingCP,int limit,int value);
	int virtual serialize(std::shared_ptr<java::io::OutputStream> os);
public:
	virtual ~Trie2_32(){
	}

}; // class Trie2_32
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie2_32__

