#ifndef __android_icu_impl_ValidIdentifiers_S_ValidityData__
#define __android_icu_impl_ValidIdentifiers_S_ValidityData__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers$ValidityData.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datasubtype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datatype.h"
#include "android.icu.impl.ValidIdentifiers_S_ValiditySet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ValidIdentifiers_S_ValidityData : public java::lang::Object {
protected:
private:
	ValidIdentifiers_S_ValidityData();
	static void addRange(std::shared_ptr<java::lang::String> string,std::shared_ptr<java::util::Set<java::lang::String>> subvalues);
public:
	static std::shared_ptr<java::util::Map<android::icu::impl::ValidIdentifiers_S_Datatype,java::util::Map<android::icu::impl::ValidIdentifiers_S_Datasubtype,android::icu::impl::ValidIdentifiers_S_ValiditySet>>> data;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ValidIdentifiers_S_ValidityData::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ValidIdentifiers_S_ValidityData(){
	}

}; // class ValidIdentifiers_S_ValidityData
}; // namespace android::icu::impl

#endif //__android_icu_impl_ValidIdentifiers_S_ValidityData__

