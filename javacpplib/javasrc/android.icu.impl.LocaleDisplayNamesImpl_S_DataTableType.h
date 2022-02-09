#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_DataTableType__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_DataTableType__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$DataTableType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_DataTableType : public java::lang::Enum<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType>> _S_VALUES;
	LocaleDisplayNamesImpl_S_DataTableType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> LANG;
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> REGION;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleDisplayNamesImpl_S_DataTableType(){
	}

}; // class LocaleDisplayNamesImpl_S_DataTableType
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_DataTableType__

