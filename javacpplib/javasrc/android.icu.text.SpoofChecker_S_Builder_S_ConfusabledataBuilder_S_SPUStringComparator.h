#ifndef __android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator__
#define __android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder$ConfusabledataBuilder$SPUStringComparator.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString.h"
#include "java.util.Comparator.h"

namespace android::icu::text{
class SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator : public java::util::Comparator<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> {
protected:
private:
	SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator();
public:
	static std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator> INSTANCE;
	static void static_cinit();
	int virtual compare(std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> sL,std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString> sR);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator(){
	}

}; // class SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringComparator__

