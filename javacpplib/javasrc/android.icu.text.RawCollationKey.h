#ifndef __android_icu_text_RawCollationKey__
#define __android_icu_text_RawCollationKey__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RawCollationKey.smali
#include "java2ctype.h"
#include "android.icu.util.ByteArrayWrapper.h"

namespace android::icu::text{
class RawCollationKey : public android::icu::util::ByteArrayWrapper {
protected:
private:
public:
	RawCollationKey();
	RawCollationKey(int capacity);
	RawCollationKey(std::shared_ptr<unsigned char[]> bytes);
	RawCollationKey(std::shared_ptr<unsigned char[]> bytesToAdopt,int size);
	int virtual compareTo(std::shared_ptr<android::icu::text::RawCollationKey> rhs);
public:
	virtual ~RawCollationKey(){
	}

}; // class RawCollationKey
}; // namespace android::icu::text

#endif //__android_icu_text_RawCollationKey__

