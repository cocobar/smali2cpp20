#ifndef __android_icu_util_BytesTrie_S_Iterator__
#define __android_icu_util_BytesTrie_S_Iterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie$Iterator.smali
#include "java2ctype.h"
#include "android.icu.util.BytesTrie_S_Entry.h"
#include "java.lang.Long.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"

namespace android::icu::util{
class BytesTrie_S_Iterator : public java::util::Iterator<android::icu::util::BytesTrie_S_Entry> {
protected:
private:
	std::shared_ptr<unsigned char[]> bytes_;
	std::shared_ptr<android::icu::util::BytesTrie_S_Entry> entry_;
	int initialPos_;
	int initialRemainingMatchLength_;
	int maxLength_;
	int pos_;
	int remainingMatchLength_;
	std::shared_ptr<java::util::ArrayList<java::lang::Long>> stack_;
	BytesTrie_S_Iterator(std::shared_ptr<unsigned char[]> trieBytes,int offset,int remainingMatchLength,int maxStringLength);
	int virtual branchNext(int pos,int length);
	std::shared_ptr<android::icu::util::BytesTrie_S_Entry> virtual truncateAndStop();
public:
	BytesTrie_S_Iterator(std::shared_ptr<unsigned char[]> trieBytes,int offset,int remainingMatchLength,int maxStringLength,std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> _this4);
	bool virtual hasNext();
	std::shared_ptr<android::icu::util::BytesTrie_S_Entry> virtual next();
	void virtual remove();
	std::shared_ptr<android::icu::util::BytesTrie_S_Iterator> virtual reset();
public:
	virtual ~BytesTrie_S_Iterator(){
	}

}; // class BytesTrie_S_Iterator
}; // namespace android::icu::util

#endif //__android_icu_util_BytesTrie_S_Iterator__

