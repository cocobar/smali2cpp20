#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_LangDataTables__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_LangDataTables__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$LangDataTables.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTables.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_LangDataTables : public java::lang::Object {
protected:
private:
public:
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTables> impl;
	static void static_cinit();
	LocaleDisplayNamesImpl_S_LangDataTables();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::LocaleDisplayNamesImpl_S_LangDataTables::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleDisplayNamesImpl_S_LangDataTables(){
	}

}; // class LocaleDisplayNamesImpl_S_LangDataTables
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_LangDataTables__

