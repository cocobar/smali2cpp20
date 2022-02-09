#ifndef __android_icu_text_CompactDecimalFormat_S_CompactStyle__
#define __android_icu_text_CompactDecimalFormat_S_CompactStyle__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalFormat$CompactStyle.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CompactDecimalFormat_S_CompactStyle : public java::lang::Enum<android::icu::text::CompactDecimalFormat_S_CompactStyle> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::CompactDecimalFormat_S_CompactStyle>> _S_VALUES;
	CompactDecimalFormat_S_CompactStyle(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> LONG;
	static std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> SHORT;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::CompactDecimalFormat_S_CompactStyle> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CompactDecimalFormat_S_CompactStyle::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CompactDecimalFormat_S_CompactStyle(){
	}

}; // class CompactDecimalFormat_S_CompactStyle
}; // namespace android::icu::text

#endif //__android_icu_text_CompactDecimalFormat_S_CompactStyle__

