#ifndef __android_icu_text_SimpleDateFormat_S_ContextValue__
#define __android_icu_text_SimpleDateFormat_S_ContextValue__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SimpleDateFormat$ContextValue.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class SimpleDateFormat_S_ContextValue : public java::lang::Enum<android::icu::text::SimpleDateFormat_S_ContextValue> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::SimpleDateFormat_S_ContextValue>> _S_VALUES;
	SimpleDateFormat_S_ContextValue(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE;
	static std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE;
	static std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> CAPITALIZATION_FOR_STANDALONE;
	static std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> CAPITALIZATION_FOR_UI_LIST_OR_MENU;
	static std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> UNKNOWN;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SimpleDateFormat_S_ContextValue::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SimpleDateFormat_S_ContextValue(){
	}

}; // class SimpleDateFormat_S_ContextValue
}; // namespace android::icu::text

#endif //__android_icu_text_SimpleDateFormat_S_ContextValue__

