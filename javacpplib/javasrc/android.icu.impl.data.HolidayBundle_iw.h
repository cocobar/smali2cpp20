#ifndef __android_icu_impl_data_HolidayBundle_iw__
#define __android_icu_impl_data_HolidayBundle_iw__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_iw.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.ListResourceBundle.h"

namespace android::icu::impl::data{
class HolidayBundle_iw : public java::util::ListResourceBundle {
protected:
private:
	static std::shared_ptr<std::vector<std::vector<java::lang::Object>>> fContents;
public:
	static void static_cinit();
	HolidayBundle_iw();
	std::shared_ptr<java::lang::Object> virtual getContents();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::data::HolidayBundle_iw::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~HolidayBundle_iw(){
	}

}; // class HolidayBundle_iw
}; // namespace android::icu::impl::data

#endif //__android_icu_impl_data_HolidayBundle_iw__

