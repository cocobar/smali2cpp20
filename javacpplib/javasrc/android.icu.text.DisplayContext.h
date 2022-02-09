#ifndef __android_icu_text_DisplayContext__
#define __android_icu_text_DisplayContext__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DisplayContext.smali
#include "java2ctype.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DisplayContext : public java::lang::Enum<android::icu::text::DisplayContext> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::DisplayContext>> _S_VALUES;
	std::shared_ptr<android::icu::text::DisplayContext_S_Type> type;
	int value;
	DisplayContext(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<android::icu::text::DisplayContext_S_Type> type,int value);
public:
	static std::shared_ptr<android::icu::text::DisplayContext> CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE;
	static std::shared_ptr<android::icu::text::DisplayContext> CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE;
	static std::shared_ptr<android::icu::text::DisplayContext> CAPITALIZATION_FOR_STANDALONE;
	static std::shared_ptr<android::icu::text::DisplayContext> CAPITALIZATION_FOR_UI_LIST_OR_MENU;
	static std::shared_ptr<android::icu::text::DisplayContext> CAPITALIZATION_NONE;
	static std::shared_ptr<android::icu::text::DisplayContext> DIALECT_NAMES;
	static std::shared_ptr<android::icu::text::DisplayContext> LENGTH_FULL;
	static std::shared_ptr<android::icu::text::DisplayContext> LENGTH_SHORT;
	static std::shared_ptr<android::icu::text::DisplayContext> NO_SUBSTITUTE;
	static std::shared_ptr<android::icu::text::DisplayContext> STANDARD_NAMES;
	static std::shared_ptr<android::icu::text::DisplayContext> SUBSTITUTE;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::DisplayContext> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::DisplayContext> values();
	std::shared_ptr<android::icu::text::DisplayContext_S_Type> virtual type();
	int virtual value();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DisplayContext::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DisplayContext(){
	}

}; // class DisplayContext
}; // namespace android::icu::text

#endif //__android_icu_text_DisplayContext__

