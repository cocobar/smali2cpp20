#ifndef __android_icu_lang_UCharacterNameIterator__
#define __android_icu_lang_UCharacterNameIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacterNameIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterName.h"
#include "android.icu.util.ValueIterator_S_Element.h"
#include "android.icu.util.ValueIterator.h"

namespace android::icu::lang{
class UCharacterNameIterator : public android::icu::util::ValueIterator {
protected:
	UCharacterNameIterator(std::shared_ptr<android::icu::impl::UCharacterName> name,int choice);
private:
	static std::shared_ptr<char[]> GROUP_LENGTHS_;
	static std::shared_ptr<char[]> GROUP_OFFSETS_;
	int m_algorithmIndex_;
	int m_choice_;
	int m_current_;
	int m_groupIndex_;
	int m_limit_;
	std::shared_ptr<android::icu::impl::UCharacterName> m_name_;
	int m_start_;
	bool virtual iterateExtended(std::shared_ptr<android::icu::util::ValueIterator_S_Element> result,int limit);
	bool virtual iterateGroup(std::shared_ptr<android::icu::util::ValueIterator_S_Element> result,int limit);
	bool virtual iterateSingleGroup(std::shared_ptr<android::icu::util::ValueIterator_S_Element> result,int limit);
public:
	static void static_cinit();
	bool virtual next(std::shared_ptr<android::icu::util::ValueIterator_S_Element> element);
	void virtual reset();
	void virtual setRange(int start,int limit);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::lang::UCharacterNameIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UCharacterNameIterator(){
	}

}; // class UCharacterNameIterator
}; // namespace android::icu::lang

#endif //__android_icu_lang_UCharacterNameIterator__

