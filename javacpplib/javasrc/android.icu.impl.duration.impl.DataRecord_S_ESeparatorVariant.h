#ifndef __android_icu_impl_duration_impl_DataRecord_S_ESeparatorVariant__
#define __android_icu_impl_duration_impl_DataRecord_S_ESeparatorVariant__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ESeparatorVariant.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class DataRecord_S_ESeparatorVariant : public java::lang::Object {
protected:
private:
public:
	static unsigned char FULL;
	static unsigned char NONE;
	static unsigned char SHORT;
	static std::shared_ptr<std::vector<java::lang::String>> names;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::DataRecord_S_ESeparatorVariant::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	DataRecord_S_ESeparatorVariant(){ };
	virtual ~DataRecord_S_ESeparatorVariant(){ };

}; // class DataRecord_S_ESeparatorVariant
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_DataRecord_S_ESeparatorVariant__

