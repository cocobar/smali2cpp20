#ifndef __android_icu_impl_duration_impl_DataRecord_S_ENumberSystem__
#define __android_icu_impl_duration_impl_DataRecord_S_ENumberSystem__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ENumberSystem.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class DataRecord_S_ENumberSystem : public java::lang::Object {
protected:
private:
public:
	static unsigned char CHINESE_SIMPLIFIED;
	static unsigned char CHINESE_TRADITIONAL;
	static unsigned char DEFAULT;
	static unsigned char KOREAN;
	static std::shared_ptr<std::vector<java::lang::String>> names;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	DataRecord_S_ENumberSystem(){ };
	virtual ~DataRecord_S_ENumberSystem(){ };

}; // class DataRecord_S_ENumberSystem
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_DataRecord_S_ENumberSystem__

