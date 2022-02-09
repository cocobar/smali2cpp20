#ifndef __android_icu_text_TimeZoneFormat_S_GMTOffsetPatternType__
#define __android_icu_text_TimeZoneFormat_S_GMTOffsetPatternType__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$GMTOffsetPatternType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TimeZoneFormat_S_GMTOffsetPatternType : public java::lang::Enum<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>> _S_VALUES;
	std::shared_ptr<java::lang::String> _defaultPattern;
	bool _isPositive;
	std::shared_ptr<java::lang::String> _required;
	TimeZoneFormat_S_GMTOffsetPatternType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> defaultPattern,std::shared_ptr<java::lang::String> required,bool isPositive);
	std::shared_ptr<java::lang::String> virtual defaultPattern();
	bool virtual isPositive();
	std::shared_ptr<java::lang::String> virtual required();
public:
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> NEGATIVE_H;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> NEGATIVE_HM;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> NEGATIVE_HMS;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> POSITIVE_H;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> POSITIVE_HM;
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> POSITIVE_HMS;
	static bool _wrap0(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> _this);
	static std::shared_ptr<java::lang::String> _wrap1(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> _this);
	static std::shared_ptr<java::lang::String> _wrap2(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> _this);
	static void static_cinit();
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TimeZoneFormat_S_GMTOffsetPatternType(){
	}

}; // class TimeZoneFormat_S_GMTOffsetPatternType
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat_S_GMTOffsetPatternType__

