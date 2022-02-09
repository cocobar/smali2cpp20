#ifndef __android_icu_util_BytesTrie_S_Entry__
#define __android_icu_util_BytesTrie_S_Entry__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie$Entry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::util{
class BytesTrie_S_Entry : public java::lang::Object {
protected:
private:
	std::shared_ptr<unsigned char[]> bytes;
	int length;
	BytesTrie_S_Entry(int capacity);
	void virtual append(unsigned char b);
	void virtual append(std::shared_ptr<unsigned char[]> b,int off,int len);
	void virtual ensureCapacity(int len);
	void virtual truncateString(int newLength);
public:
	int value;
	static int _get0(std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this);
	static void _wrap0(std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this,std::shared_ptr<unsigned char[]> b,int off,int len);
	static void _wrap1(std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this,unsigned char b);
	static void _wrap2(std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this,int newLength);
	BytesTrie_S_Entry(int capacity,std::shared_ptr<android::icu::util::BytesTrie_S_Entry> _this1);
	unsigned char virtual byteAt(int index);
	std::shared_ptr<java::nio::ByteBuffer> virtual bytesAsByteBuffer();
	int virtual bytesLength();
	void virtual copyBytesTo(std::shared_ptr<unsigned char[]> dest,int destOffset);
public:
	virtual ~BytesTrie_S_Entry(){
	}

}; // class BytesTrie_S_Entry
}; // namespace android::icu::util

#endif //__android_icu_util_BytesTrie_S_Entry__

