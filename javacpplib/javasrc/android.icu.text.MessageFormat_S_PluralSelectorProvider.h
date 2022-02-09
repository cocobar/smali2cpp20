#ifndef __android_icu_text_MessageFormat_S_PluralSelectorProvider__
#define __android_icu_text_MessageFormat_S_PluralSelectorProvider__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$PluralSelectorProvider.smali
#include "java2ctype.h"
#include "android.icu.text.MessageFormat.h"
#include "android.icu.text.PluralFormat_S_PluralSelector.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessageFormat_S_PluralSelectorProvider : public android::icu::text::PluralFormat_S_PluralSelector {
protected:
private:
	std::shared_ptr<android::icu::text::MessageFormat> msgFormat;
	std::shared_ptr<android::icu::text::PluralRules> rules;
	std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	MessageFormat_S_PluralSelectorProvider(std::shared_ptr<android::icu::text::MessageFormat> mf,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type);
	std::shared_ptr<java::lang::String> virtual select(std::shared_ptr<java::lang::Object> ctx,double number);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MessageFormat_S_PluralSelectorProvider::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MessageFormat_S_PluralSelectorProvider(){
	}

}; // class MessageFormat_S_PluralSelectorProvider
}; // namespace android::icu::text

#endif //__android_icu_text_MessageFormat_S_PluralSelectorProvider__

