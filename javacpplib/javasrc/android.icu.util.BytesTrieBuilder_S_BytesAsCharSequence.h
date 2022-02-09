#ifndef __android_icu_util_BytesTrieBuilder_S_BytesAsCharSequence__
#define __android_icu_util_BytesTrieBuilder_S_BytesAsCharSequence__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrieBuilder$BytesAsCharSequence.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"

namespace android::icu::util{
class BytesTrieBuilder_S_BytesAsCharSequence : public java::lang::CharSequence {
protected:
private:
	int len;
	std::shared_ptr<unsigned char[]> s;
public:
	BytesTrieBuilder_S_BytesAsCharSequence(std::shared_ptr<unsigned char[]> sequence,int length);
	char virtual charAt(int i);
	int virtual length();
	std::shared_ptr<java::lang::CharSequence> virtual subSequence(int start,int end);
public:
	virtual ~BytesTrieBuilder_S_BytesAsCharSequence(){
	}

}; // class BytesTrieBuilder_S_BytesAsCharSequence
}; // namespace android::icu::util

#endif //__android_icu_util_BytesTrieBuilder_S_BytesAsCharSequence__

