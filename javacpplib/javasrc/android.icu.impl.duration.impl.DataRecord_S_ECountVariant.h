#ifndef __android_icu_impl_duration_impl_DataRecord_S_ECountVariant__
#define __android_icu_impl_duration_impl_DataRecord_S_ECountVariant__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ECountVariant.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class DataRecord_S_ECountVariant : public java::lang::Object {
protected:
private:
public:
	static unsigned char DECIMAL1;
	static unsigned char DECIMAL2;
	static unsigned char DECIMAL3;
	static unsigned char HALF_FRACTION;
	static unsigned char INTEGER;
	static unsigned char INTEGER_CUSTOM;
	static std::shared_ptr<std::vector<java::lang::String>> names;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::DataRecord_S_ECountVariant::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	DataRecord_S_ECountVariant(){ };
	virtual ~DataRecord_S_ECountVariant(){ };

}; // class DataRecord_S_ECountVariant
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_DataRecord_S_ECountVariant__

