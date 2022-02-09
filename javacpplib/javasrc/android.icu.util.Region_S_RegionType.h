#ifndef __android_icu_util_Region_S_RegionType__
#define __android_icu_util_Region_S_RegionType__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Region$RegionType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class Region_S_RegionType : public java::lang::Enum<android::icu::util::Region_S_RegionType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::Region_S_RegionType>> _S_VALUES;
	Region_S_RegionType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::util::Region_S_RegionType> CONTINENT;
	static std::shared_ptr<android::icu::util::Region_S_RegionType> DEPRECATED;
	static std::shared_ptr<android::icu::util::Region_S_RegionType> GROUPING;
	static std::shared_ptr<android::icu::util::Region_S_RegionType> SUBCONTINENT;
	static std::shared_ptr<android::icu::util::Region_S_RegionType> TERRITORY;
	static std::shared_ptr<android::icu::util::Region_S_RegionType> UNKNOWN;
	static std::shared_ptr<android::icu::util::Region_S_RegionType> WORLD;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::Region_S_RegionType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::Region_S_RegionType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::Region_S_RegionType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Region_S_RegionType(){
	}

}; // class Region_S_RegionType
}; // namespace android::icu::util

#endif //__android_icu_util_Region_S_RegionType__

