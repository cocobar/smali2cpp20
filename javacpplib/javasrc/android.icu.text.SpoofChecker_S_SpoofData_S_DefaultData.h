#ifndef __android_icu_text_SpoofChecker_S_SpoofData_S_DefaultData__
#define __android_icu_text_SpoofChecker_S_SpoofData_S_DefaultData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$SpoofData$DefaultData.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_SpoofData.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class SpoofChecker_S_SpoofData_S_DefaultData : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::io::IOException> EXCEPTION;
	static std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> INSTANCE;
	SpoofChecker_S_SpoofData_S_DefaultData();
public:
	static std::shared_ptr<java::io::IOException> _get0();
	static std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> _get1();
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SpoofChecker_S_SpoofData_S_DefaultData(){
	}

}; // class SpoofChecker_S_SpoofData_S_DefaultData
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_SpoofData_S_DefaultData__

