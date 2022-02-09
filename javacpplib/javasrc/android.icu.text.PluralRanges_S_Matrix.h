#ifndef __android_icu_text_PluralRanges_S_Matrix__
#define __android_icu_text_PluralRanges_S_Matrix__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRanges$Matrix.smali
#include "java2ctype.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.util.Output.h"
#include "java.lang.Boolean.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.EnumSet.h"

namespace android::icu::text{
class PluralRanges_S_Matrix : public java::lang::Comparable<android::icu::text::PluralRanges_S_Matrix>, public java::lang::Cloneable {
protected:
private:
	std::shared_ptr<unsigned char[]> data;
public:
	PluralRanges_S_Matrix();
	std::shared_ptr<android::icu::text::PluralRanges_S_Matrix> virtual clone();
	int virtual compareTo(std::shared_ptr<android::icu::text::PluralRanges_S_Matrix> o);
	std::shared_ptr<android::icu::impl::StandardPlural> virtual endSame(std::shared_ptr<android::icu::impl::StandardPlural> end);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<android::icu::impl::StandardPlural> virtual get(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end);
	int virtual hashCode();
	void virtual set(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end,std::shared_ptr<android::icu::impl::StandardPlural> result);
	void virtual setIfNew(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<android::icu::impl::StandardPlural> end,std::shared_ptr<android::icu::impl::StandardPlural> result);
	std::shared_ptr<android::icu::impl::StandardPlural> virtual startSame(std::shared_ptr<android::icu::impl::StandardPlural> start,std::shared_ptr<java::util::EnumSet<android::icu::impl::StandardPlural>> endDone,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> emit);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PluralRanges_S_Matrix(){
	}

}; // class PluralRanges_S_Matrix
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRanges_S_Matrix__

