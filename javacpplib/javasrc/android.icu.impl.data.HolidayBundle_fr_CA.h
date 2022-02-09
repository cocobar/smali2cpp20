#ifndef __android_icu_impl_data_HolidayBundle_fr_CA__
#define __android_icu_impl_data_HolidayBundle_fr_CA__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_fr_CA.smali
#include "java2ctype.h"
#include "android.icu.util.Holiday.h"
#include "java.lang.Object.h"
#include "java.util.ListResourceBundle.h"

namespace android::icu::impl::data{
class HolidayBundle_fr_CA : public java::util::ListResourceBundle {
protected:
private:
	static std::shared_ptr<std::vector<std::vector<java::lang::Object>>> fContents;
	static std::shared_ptr<std::vector<android::icu::util::Holiday>> fHolidays;
public:
	static void static_cinit();
	HolidayBundle_fr_CA();
	std::shared_ptr<java::lang::Object> virtual getContents();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::data::HolidayBundle_fr_CA::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~HolidayBundle_fr_CA(){
	}

}; // class HolidayBundle_fr_CA
}; // namespace android::icu::impl::data

#endif //__android_icu_impl_data_HolidayBundle_fr_CA__

