#ifndef __android_icu_text_NumberFormat_S_Field__
#define __android_icu_text_NumberFormat_S_Field__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormat$Field.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.Format_S_Field.h"

namespace android::icu::text{
class NumberFormat_S_Field : public java::text::Format_S_Field {
protected:
	NumberFormat_S_Field(std::shared_ptr<java::lang::String> fieldName);
	std::shared_ptr<java::lang::Object> virtual readResolve();
private:
public:
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> CURRENCY;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> DECIMAL_SEPARATOR;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> EXPONENT;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> EXPONENT_SIGN;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> EXPONENT_SYMBOL;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> FRACTION;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> GROUPING_SEPARATOR;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> INTEGER;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> PERCENT;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> PERMILLE;
	static std::shared_ptr<android::icu::text::NumberFormat_S_Field> SIGN;
	static long long serialVersionUID;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::NumberFormat_S_Field::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NumberFormat_S_Field(){
	}

}; // class NumberFormat_S_Field
}; // namespace android::icu::text

#endif //__android_icu_text_NumberFormat_S_Field__

