#ifndef __android_icu_impl_duration_impl_Utils_S_ChineseDigits__
#define __android_icu_impl_duration_impl_Utils_S_ChineseDigits__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\Utils$ChineseDigits.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class Utils_S_ChineseDigits : public java::lang::Object {
protected:
private:
public:
	static std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> DEBUG;
	static std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> KOREAN;
	static std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> SIMPLIFIED;
	static std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> TRADITIONAL;
	std::shared_ptr<char[]> digits;
	bool ko;
	std::shared_ptr<char[]> levels;
	char liang;
	std::shared_ptr<char[]> units;
	static void static_cinit();
	Utils_S_ChineseDigits(std::shared_ptr<java::lang::String> digits,std::shared_ptr<java::lang::String> units,std::shared_ptr<java::lang::String> levels,char liang,bool ko);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::Utils_S_ChineseDigits::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Utils_S_ChineseDigits(){
	}

}; // class Utils_S_ChineseDigits
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_Utils_S_ChineseDigits__

