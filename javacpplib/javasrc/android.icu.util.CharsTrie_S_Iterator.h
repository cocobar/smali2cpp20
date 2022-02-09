#ifndef __android_icu_util_CharsTrie_S_Iterator__
#define __android_icu_util_CharsTrie_S_Iterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CharsTrie$Iterator.smali
#include "java2ctype.h"
#include "android.icu.util.CharsTrie_S_Entry.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Long.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"

namespace android::icu::util{
class CharsTrie_S_Iterator : public java::util::Iterator<android::icu::util::CharsTrie_S_Entry> {
protected:
private:
	std::shared_ptr<java::lang::CharSequence> chars_;
	std::shared_ptr<android::icu::util::CharsTrie_S_Entry> entry_;
	int initialPos_;
	int initialRemainingMatchLength_;
	int maxLength_;
	int pos_;
	int remainingMatchLength_;
	bool skipValue_;
	std::shared_ptr<java::util::ArrayList<java::lang::Long>> stack_;
	std::shared_ptr<java::lang::StringBuilder> str_;
	CharsTrie_S_Iterator(std::shared_ptr<java::lang::CharSequence> trieChars,int offset,int remainingMatchLength,int maxStringLength);
	int virtual branchNext(int pos,int length);
	std::shared_ptr<android::icu::util::CharsTrie_S_Entry> virtual truncateAndStop();
public:
	CharsTrie_S_Iterator(std::shared_ptr<java::lang::CharSequence> trieChars,int offset,int remainingMatchLength,int maxStringLength,std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> _this4);
	bool virtual hasNext();
	std::shared_ptr<android::icu::util::CharsTrie_S_Entry> virtual next();
	void virtual remove();
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> virtual reset();
public:
	virtual ~CharsTrie_S_Iterator(){
	}

}; // class CharsTrie_S_Iterator
}; // namespace android::icu::util

#endif //__android_icu_util_CharsTrie_S_Iterator__

