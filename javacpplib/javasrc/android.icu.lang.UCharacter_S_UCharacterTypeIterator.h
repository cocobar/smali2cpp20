#ifndef __android_icu_lang_UCharacter_S_UCharacterTypeIterator__
#define __android_icu_lang_UCharacter_S_UCharacterTypeIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacter$UCharacterTypeIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.lang.UCharacter_S_UCharacterTypeIterator_S_MaskType.h"
#include "android.icu.util.RangeValueIterator_S_Element.h"
#include "android.icu.util.RangeValueIterator.h"
#include "java.util.Iterator.h"

namespace android::icu::lang{
class UCharacter_S_UCharacterTypeIterator : public android::icu::util::RangeValueIterator {
protected:
private:
	static std::shared_ptr<android::icu::lang::UCharacter_S_UCharacterTypeIterator_S_MaskType> MASK_TYPE;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	std::shared_ptr<java::util::Iterator<android::icu::impl::Trie2_S_Range>> trieIterator;
public:
	static void static_cinit();
	UCharacter_S_UCharacterTypeIterator();
	bool virtual next(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element);
	void virtual reset();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::lang::UCharacter_S_UCharacterTypeIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UCharacter_S_UCharacterTypeIterator(){
	}

}; // class UCharacter_S_UCharacterTypeIterator
}; // namespace android::icu::lang

#endif //__android_icu_lang_UCharacter_S_UCharacterTypeIterator__

