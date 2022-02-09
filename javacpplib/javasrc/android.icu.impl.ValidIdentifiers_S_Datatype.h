#ifndef __android_icu_impl_ValidIdentifiers_S_Datatype__
#define __android_icu_impl_ValidIdentifiers_S_Datatype__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ValidIdentifiers$Datatype.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ValidIdentifiers_S_Datatype : public java::lang::Enum<android::icu::impl::ValidIdentifiers_S_Datatype> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::ValidIdentifiers_S_Datatype>> _S_VALUES;
	ValidIdentifiers_S_Datatype(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> currency;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> illegal;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> language;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> region;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> script;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> subdivision;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> t;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> u;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> unit;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> variant;
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> x;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ValidIdentifiers_S_Datatype::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ValidIdentifiers_S_Datatype(){
	}

}; // class ValidIdentifiers_S_Datatype
}; // namespace android::icu::impl

#endif //__android_icu_impl_ValidIdentifiers_S_Datatype__

