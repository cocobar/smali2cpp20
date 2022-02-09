#ifndef __android_icu_text_UnicodeSet_S_SpanCondition__
#define __android_icu_text_UnicodeSet_S_SpanCondition__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$SpanCondition.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeSet_S_SpanCondition : public java::lang::Enum<android::icu::text::UnicodeSet_S_SpanCondition> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::UnicodeSet_S_SpanCondition>> _S_VALUES;
	UnicodeSet_S_SpanCondition(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> CONDITION_COUNT;
	static std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> CONTAINED;
	static std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> NOT_CONTAINED;
	static std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> SIMPLE;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::UnicodeSet_S_SpanCondition::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeSet_S_SpanCondition(){
	}

}; // class UnicodeSet_S_SpanCondition
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_SpanCondition__

