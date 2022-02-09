#ifndef __android_icu_impl_DateNumberFormat__
#define __android_icu_impl_DateNumberFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\DateNumberFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"

namespace android::icu::impl{
class DateNumberFormat : public android::icu::text::NumberFormat {
protected:
private:
	static std::shared_ptr<android::icu::impl::SimpleCache<android::icu::util::ULocale,char[]>> CACHE;
	static int DECIMAL_BUF_SIZE;
	static long long PARSE_THRESHOLD;
	static long long serialVersionUID;
	std::shared_ptr<char[]> decimalBuf;
	std::shared_ptr<char[]> digits;
	int maxIntDigits;
	int minIntDigits;
	char minusSign;
	bool positiveOnly;
	char zeroDigit;
	void virtual initialize(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> digitString,std::shared_ptr<java::lang::String> nsName);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> stream);
public:
	static void static_cinit();
	DateNumberFormat(std::shared_ptr<android::icu::util::ULocale> loc,char zeroDigit,std::shared_ptr<java::lang::String> nsName);
	DateNumberFormat(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> digitString,std::shared_ptr<java::lang::String> nsName);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::StringBuffer> virtual format(double number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(long long cVar1,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::math::BigInteger> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	char virtual getDigits();
	int virtual getMaximumIntegerDigits();
	int virtual getMinimumIntegerDigits();
	char virtual getZeroDigit();
	int virtual hashCode();
	std::shared_ptr<java::lang::Number> virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition);
	void virtual setMaximumIntegerDigits(int newValue);
	void virtual setMinimumIntegerDigits(int newValue);
	void virtual setParsePositiveOnly(bool isPositiveOnly);
	void virtual setZeroDigit(char zero);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::DateNumberFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateNumberFormat(){
	}

}; // class DateNumberFormat
}; // namespace android::icu::impl

#endif //__android_icu_impl_DateNumberFormat__

