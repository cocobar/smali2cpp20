#ifndef __android_icu_impl_ReplaceableUCharacterIterator__
#define __android_icu_impl_ReplaceableUCharacterIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ReplaceableUCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::impl{
class ReplaceableUCharacterIterator : public android::icu::text::UCharacterIterator {
protected:
private:
	int currentIndex;
	std::shared_ptr<android::icu::text::Replaceable> replaceable;
public:
	ReplaceableUCharacterIterator(std::shared_ptr<android::icu::text::Replaceable> replaceable);
	ReplaceableUCharacterIterator(std::shared_ptr<java::lang::String> str);
	ReplaceableUCharacterIterator(std::shared_ptr<java::lang::StringBuffer> buf);
	std::shared_ptr<java::lang::Object> virtual clone();
	int virtual current();
	int virtual currentCodePoint();
	int virtual getIndex();
	int virtual getLength();
	int virtual getText(std::shared_ptr<char[]> fillIn,int offset);
	int virtual next();
	int virtual previous();
	void virtual setIndex(int currentIndex);
public:
	virtual ~ReplaceableUCharacterIterator(){
	}

}; // class ReplaceableUCharacterIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_ReplaceableUCharacterIterator__

