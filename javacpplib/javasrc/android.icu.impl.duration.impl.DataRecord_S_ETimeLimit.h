#ifndef __android_icu_impl_duration_impl_DataRecord_S_ETimeLimit__
#define __android_icu_impl_duration_impl_DataRecord_S_ETimeLimit__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ETimeLimit.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class DataRecord_S_ETimeLimit : public java::lang::Object {
protected:
private:
public:
	static unsigned char LT;
	static unsigned char MT;
	static unsigned char NOLIMIT;
	static std::shared_ptr<std::vector<java::lang::String>> names;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::DataRecord_S_ETimeLimit::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	DataRecord_S_ETimeLimit(){ };
	virtual ~DataRecord_S_ETimeLimit(){ };

}; // class DataRecord_S_ETimeLimit
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_DataRecord_S_ETimeLimit__

