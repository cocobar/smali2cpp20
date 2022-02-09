#ifndef __android_icu_text_UnicodeSet_S_ComparisonStyle__
#define __android_icu_text_UnicodeSet_S_ComparisonStyle__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$ComparisonStyle.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeSet_S_ComparisonStyle : public java::lang::Enum<android::icu::text::UnicodeSet_S_ComparisonStyle> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::UnicodeSet_S_ComparisonStyle>> _S_VALUES;
	UnicodeSet_S_ComparisonStyle(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> LEXICOGRAPHIC;
	static std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> LONGER_FIRST;
	static std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> SHORTER_FIRST;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::UnicodeSet_S_ComparisonStyle::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeSet_S_ComparisonStyle(){
	}

}; // class UnicodeSet_S_ComparisonStyle
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_ComparisonStyle__

