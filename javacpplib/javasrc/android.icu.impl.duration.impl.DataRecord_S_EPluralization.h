#ifndef __android_icu_impl_duration_impl_DataRecord_S_EPluralization__
#define __android_icu_impl_duration_impl_DataRecord_S_EPluralization__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EPluralization.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class DataRecord_S_EPluralization : public java::lang::Object {
protected:
private:
public:
	static unsigned char ARABIC;
	static unsigned char DUAL;
	static unsigned char HEBREW;
	static unsigned char NONE;
	static unsigned char PAUCAL;
	static unsigned char PLURAL;
	static std::shared_ptr<std::vector<java::lang::String>> names;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::duration::impl::DataRecord_S_EPluralization::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	DataRecord_S_EPluralization(){ };
	virtual ~DataRecord_S_EPluralization(){ };

}; // class DataRecord_S_EPluralization
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_DataRecord_S_EPluralization__

