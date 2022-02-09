#ifndef __android_icu_text_DateTimePatternGenerator_S_DTPGflags__
#define __android_icu_text_DateTimePatternGenerator_S_DTPGflags__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$DTPGflags.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_DTPGflags : public java::lang::Enum<android::icu::text::DateTimePatternGenerator_S_DTPGflags> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::DateTimePatternGenerator_S_DTPGflags>> _S_VALUES;
	DateTimePatternGenerator_S_DTPGflags(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> FIX_FRACTIONAL_SECONDS;
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> SKELETON_USES_B;
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> SKELETON_USES_CAP_J;
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> SKELETON_USES_b;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> getFlag(std::shared_ptr<java::lang::String> preferred);
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateTimePatternGenerator_S_DTPGflags::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateTimePatternGenerator_S_DTPGflags(){
	}

}; // class DateTimePatternGenerator_S_DTPGflags
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_DTPGflags__

