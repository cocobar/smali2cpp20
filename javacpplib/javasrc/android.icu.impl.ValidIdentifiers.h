#ifndef __android_icu_impl_ValidIdentifiers__
#define __android_icu_impl_ValidIdentifiers__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datasubtype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datatype.h"
#include "android.icu.impl.ValidIdentifiers_S_ValiditySet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ValidIdentifiers : public java::lang::Object {
protected:
private:
public:
	ValidIdentifiers();
	static std::shared_ptr<java::util::Map<android::icu::impl::ValidIdentifiers_S_Datatype,java::util::Map<android::icu::impl::ValidIdentifiers_S_Datasubtype,android::icu::impl::ValidIdentifiers_S_ValiditySet>>> getData();
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> isValid(std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> datasubtypes,std::shared_ptr<java::lang::String> code);
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> isValid(std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> datasubtypes,std::shared_ptr<java::lang::String> code,std::shared_ptr<java::lang::String> value);
public:
	virtual ~ValidIdentifiers(){
	}

}; // class ValidIdentifiers
}; // namespace android::icu::impl

#endif //__android_icu_impl_ValidIdentifiers__

