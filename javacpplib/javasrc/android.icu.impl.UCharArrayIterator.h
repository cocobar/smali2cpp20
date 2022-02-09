#ifndef __android_icu_impl_UCharArrayIterator__
#define __android_icu_impl_UCharArrayIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharArrayIterator.smali
#include "java2ctype.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class UCharArrayIterator : public android::icu::text::UCharacterIterator {
protected:
private:
	int limit;
	int pos;
	int start;
	std::shared_ptr<char[]> text;
public:
	UCharArrayIterator(std::shared_ptr<char[]> text,int start,int limit);
	std::shared_ptr<java::lang::Object> virtual clone();
	int virtual current();
	int virtual getIndex();
	int virtual getLength();
	int virtual getText(std::shared_ptr<char[]> fillIn,int offset);
	int virtual next();
	int virtual previous();
	void virtual setIndex(int index);
public:
	virtual ~UCharArrayIterator(){
	}

}; // class UCharArrayIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharArrayIterator__

