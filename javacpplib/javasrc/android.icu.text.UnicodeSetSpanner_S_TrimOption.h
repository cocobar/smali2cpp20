#ifndef __android_icu_text_UnicodeSetSpanner_S_TrimOption__
#define __android_icu_text_UnicodeSetSpanner_S_TrimOption__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSetSpanner$TrimOption.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeSetSpanner_S_TrimOption : public java::lang::Enum<android::icu::text::UnicodeSetSpanner_S_TrimOption> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::UnicodeSetSpanner_S_TrimOption>> _S_VALUES;
	UnicodeSetSpanner_S_TrimOption(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> BOTH;
	static std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> LEADING;
	static std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> TRAILING;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::UnicodeSetSpanner_S_TrimOption::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeSetSpanner_S_TrimOption(){
	}

}; // class UnicodeSetSpanner_S_TrimOption
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSetSpanner_S_TrimOption__

