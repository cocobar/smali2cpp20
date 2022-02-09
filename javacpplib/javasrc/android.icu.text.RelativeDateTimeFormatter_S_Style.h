#ifndef __android_icu_text_RelativeDateTimeFormatter_S_Style__
#define __android_icu_text_RelativeDateTimeFormatter_S_Style__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Style.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_Style : public java::lang::Enum<android::icu::text::RelativeDateTimeFormatter_S_Style> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::RelativeDateTimeFormatter_S_Style>> _S_VALUES;
	static int INDEX_COUNT;
	RelativeDateTimeFormatter_S_Style(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> LONG;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> NARROW;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> SHORT;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RelativeDateTimeFormatter_S_Style::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RelativeDateTimeFormatter_S_Style(){
	}

}; // class RelativeDateTimeFormatter_S_Style
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_Style__

