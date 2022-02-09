#ifndef __android_icu_text_LocaleDisplayNames_S_DialectHandling__
#define __android_icu_text_LocaleDisplayNames_S_DialectHandling__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames$DialectHandling.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class LocaleDisplayNames_S_DialectHandling : public java::lang::Enum<android::icu::text::LocaleDisplayNames_S_DialectHandling> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::LocaleDisplayNames_S_DialectHandling>> _S_VALUES;
	LocaleDisplayNames_S_DialectHandling(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> DIALECT_NAMES;
	static std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> STANDARD_NAMES;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::LocaleDisplayNames_S_DialectHandling::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleDisplayNames_S_DialectHandling(){
	}

}; // class LocaleDisplayNames_S_DialectHandling
}; // namespace android::icu::text

#endif //__android_icu_text_LocaleDisplayNames_S_DialectHandling__

