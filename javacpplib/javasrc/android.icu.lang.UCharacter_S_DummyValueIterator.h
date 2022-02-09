#ifndef __android_icu_lang_UCharacter_S_DummyValueIterator__
#define __android_icu_lang_UCharacter_S_DummyValueIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacter$DummyValueIterator.smali
#include "java2ctype.h"
#include "android.icu.util.ValueIterator_S_Element.h"
#include "android.icu.util.ValueIterator.h"

namespace android::icu::lang{
class UCharacter_S_DummyValueIterator : public android::icu::util::ValueIterator {
protected:
private:
	UCharacter_S_DummyValueIterator();
public:
	UCharacter_S_DummyValueIterator(std::shared_ptr<android::icu::lang::UCharacter_S_DummyValueIterator> _this0);
	bool virtual next(std::shared_ptr<android::icu::util::ValueIterator_S_Element> element);
	void virtual reset();
	void virtual setRange(int start,int limit);
public:
	virtual ~UCharacter_S_DummyValueIterator(){
	}

}; // class UCharacter_S_DummyValueIterator
}; // namespace android::icu::lang

#endif //__android_icu_lang_UCharacter_S_DummyValueIterator__

