#ifndef __android_icu_text_PluralFormat_S_PluralSelectorAdapter__
#define __android_icu_text_PluralFormat_S_PluralSelectorAdapter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralFormat$PluralSelectorAdapter.smali
#include "java2ctype.h"
#include "android.icu.text.PluralFormat_S_PluralSelector.h"
#include "android.icu.text.PluralFormat.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class PluralFormat_S_PluralSelectorAdapter : public android::icu::text::PluralFormat_S_PluralSelector {
protected:
private:
	PluralFormat_S_PluralSelectorAdapter(std::shared_ptr<android::icu::text::PluralFormat> this_S_0);
public:
	static bool _assertionsDisabled;
	bool _S_assertionsDisabled;
	std::shared_ptr<android::icu::text::PluralFormat> this_S_0;
	static void static_cinit();
	PluralFormat_S_PluralSelectorAdapter(std::shared_ptr<android::icu::text::PluralFormat> this_S_0,std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> _this1);
	std::shared_ptr<java::lang::String> virtual select(std::shared_ptr<java::lang::Object> context,double cVar0);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::PluralFormat_S_PluralSelectorAdapter::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralFormat_S_PluralSelectorAdapter(){
	}

}; // class PluralFormat_S_PluralSelectorAdapter
}; // namespace android::icu::text

#endif //__android_icu_text_PluralFormat_S_PluralSelectorAdapter__

