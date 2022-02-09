#ifndef __android_icu_impl_ValidIdentifiers_S_Datasubtype__
#define __android_icu_impl_ValidIdentifiers_S_Datasubtype__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers$Datasubtype.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ValidIdentifiers_S_Datasubtype : public java::lang::Enum<android::icu::impl::ValidIdentifiers_S_Datasubtype> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::ValidIdentifiers_S_Datasubtype>> _S_VALUES;
	ValidIdentifiers_S_Datasubtype(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> deprecated;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> macroregion;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> private_use;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> regular;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> special;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> unknown;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datasubtype> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ValidIdentifiers_S_Datasubtype::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ValidIdentifiers_S_Datasubtype(){
	}

}; // class ValidIdentifiers_S_Datasubtype
}; // namespace android::icu::impl

#endif //__android_icu_impl_ValidIdentifiers_S_Datasubtype__

