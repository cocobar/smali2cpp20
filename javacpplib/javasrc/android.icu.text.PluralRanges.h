#ifndef __android_icu_text_PluralRanges__
#define __android_icu_text_PluralRanges__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRanges.smali
#include "java2ctype.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.text.PluralRanges_S_Matrix.h"
#include "android.icu.util.Freezable.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralRanges : public android::icu::util::Freezable<android::icu::text::PluralRanges>, public java::lang::Comparable<android::icu::text::PluralRanges> {
protected:
private:
	std::shared_ptr<bool[]> explicit;
	bool isFrozen;
	std::shared_ptr<android::icu::text::PluralRanges_S_Matrix> matrix;
public:
	PluralRanges();
	void virtual add(std::shared_ptr<android::icu::impl::StandardPlural> rangeStart,std::shared_ptr<android::icu::impl::StandardPlural> rangeEnd,std::shared_ptr<android::icu::impl::StandardPlural> result);
	std::shared_ptr<android::icu::text::PluralRanges> virtual cloneAsThawed();
	int virtual compareTo(std::shared_ptr<android::icu::text::PluralRanges> that);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<android::icu::text::PluralRanges> virtual freeze();
	std::shared_ptr<android::icu::impl::StandardPlural> virtual get(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end);
	int virtual hashCode();
	bool virtual isExplicit(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end);
	bool virtual isExplicitlySet(std::shared_ptr<android::icu::impl::StandardPlural> count);
	bool virtual isFrozen();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PluralRanges(){
	}

}; // class PluralRanges
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRanges__

