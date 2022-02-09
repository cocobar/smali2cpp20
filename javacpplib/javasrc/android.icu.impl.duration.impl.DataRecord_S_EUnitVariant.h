#ifndef __android_icu_impl_duration_impl_DataRecord_S_EUnitVariant__
#define __android_icu_impl_duration_impl_DataRecord_S_EUnitVariant__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EUnitVariant.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class DataRecord_S_EUnitVariant : public java::lang::Object {
protected:
private:
public:
	static unsigned char MEDIUM;
	static unsigned char PLURALIZED;
	static unsigned char SHORT;
	static std::shared_ptr<std::vector<java::lang::String>> names;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::DataRecord_S_EUnitVariant::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	DataRecord_S_EUnitVariant(){ };
	virtual ~DataRecord_S_EUnitVariant(){ };

}; // class DataRecord_S_EUnitVariant
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_DataRecord_S_EUnitVariant__

