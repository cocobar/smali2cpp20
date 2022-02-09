#ifndef __android_icu_util_ByteArrayWrapper__
#define __android_icu_util_ByteArrayWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ByteArrayWrapper.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::util{
class ByteArrayWrapper : public java::lang::Comparable<android::icu::util::ByteArrayWrapper> {
protected:
private:
	static void copyBytes(std::shared_ptr<unsigned char[]> src,int srcoff,std::shared_ptr<unsigned char[]> tgt,int tgtoff,int length);
public:
	std::shared_ptr<unsigned char[]> bytes;
	int size;
	ByteArrayWrapper();
	ByteArrayWrapper(std::shared_ptr<java::nio::ByteBuffer> source);
	ByteArrayWrapper(std::shared_ptr<unsigned char[]> bytesToAdopt,int size);
	std::shared_ptr<android::icu::util::ByteArrayWrapper> virtual append(std::shared_ptr<unsigned char[]> src,int start,int limit);
	int virtual compareTo(std::shared_ptr<android::icu::util::ByteArrayWrapper> other);
	std::shared_ptr<android::icu::util::ByteArrayWrapper> virtual ensureCapacity(int capacity);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual hashCode();
	unsigned char virtual releaseBytes();
	std::shared_ptr<android::icu::util::ByteArrayWrapper> virtual set(std::shared_ptr<unsigned char[]> src,int start,int limit);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ByteArrayWrapper(){
	}

}; // class ByteArrayWrapper
}; // namespace android::icu::util

#endif //__android_icu_util_ByteArrayWrapper__

