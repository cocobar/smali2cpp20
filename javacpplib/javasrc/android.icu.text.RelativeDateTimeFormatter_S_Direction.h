#ifndef __android_icu_text_RelativeDateTimeFormatter_S_Direction__
#define __android_icu_text_RelativeDateTimeFormatter_S_Direction__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Direction.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_Direction : public java::lang::Enum<android::icu::text::RelativeDateTimeFormatter_S_Direction> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::RelativeDateTimeFormatter_S_Direction>> _S_VALUES;
	RelativeDateTimeFormatter_S_Direction(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> LAST;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> LAST_2;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> NEXT;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> NEXT_2;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> PLAIN;
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> THIS;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RelativeDateTimeFormatter_S_Direction::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RelativeDateTimeFormatter_S_Direction(){
	}

}; // class RelativeDateTimeFormatter_S_Direction
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_Direction__

