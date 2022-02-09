#ifndef __android_icu_impl_duration_impl_DataRecord_S_EDecimalHandling__
#define __android_icu_impl_duration_impl_DataRecord_S_EDecimalHandling__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EDecimalHandling.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class DataRecord_S_EDecimalHandling : public java::lang::Object {
protected:
private:
public:
	static unsigned char DPAUCAL;
	static unsigned char DPLURAL;
	static unsigned char DSINGULAR;
	static unsigned char DSINGULAR_SUBONE;
	static std::shared_ptr<std::vector<java::lang::String>> names;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	DataRecord_S_EDecimalHandling(){ };
	virtual ~DataRecord_S_EDecimalHandling(){ };

}; // class DataRecord_S_EDecimalHandling
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_DataRecord_S_EDecimalHandling__

