#ifndef __android_icu_text_ListFormatter_S_Style__
#define __android_icu_text_ListFormatter_S_Style__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ListFormatter$Style.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class ListFormatter_S_Style : public java::lang::Enum<android::icu::text::ListFormatter_S_Style> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::ListFormatter_S_Style>> _S_VALUES;
	std::shared_ptr<java::lang::String> name;
	ListFormatter_S_Style(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> name);
public:
	static std::shared_ptr<android::icu::text::ListFormatter_S_Style> DURATION;
	static std::shared_ptr<android::icu::text::ListFormatter_S_Style> DURATION_NARROW;
	static std::shared_ptr<android::icu::text::ListFormatter_S_Style> DURATION_SHORT;
	static std::shared_ptr<android::icu::text::ListFormatter_S_Style> STANDARD;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::ListFormatter_S_Style> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::ListFormatter_S_Style> values();
	std::shared_ptr<java::lang::String> virtual getName();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::ListFormatter_S_Style::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ListFormatter_S_Style(){
	}

}; // class ListFormatter_S_Style
}; // namespace android::icu::text

#endif //__android_icu_text_ListFormatter_S_Style__

