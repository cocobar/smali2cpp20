#ifndef __android_icu_util_Region__
#define __android_icu_util_Region__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Region.smali
#include "java2ctype.h"
#include "android.icu.util.Region_S_RegionType.h"
#include "java.lang.Comparable.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::util{
class Region : public java::lang::Comparable<android::icu::util::Region> {
protected:
private:
	static std::shared_ptr<java::lang::String> OUTLYING_OCEANIA_REGION_ID;
	static std::shared_ptr<java::lang::String> UNKNOWN_REGION_ID;
	static std::shared_ptr<java::lang::String> WORLD_ID;
	static std::shared_ptr<java::util::ArrayList<java::util::Set<android::icu::util::Region>>> availableRegions;
	static std::shared_ptr<java::util::Map<java::lang::Integer,android::icu::util::Region>> numericCodeMap;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::util::Region>> regionAliases;
	static bool regionDataIsLoaded;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::util::Region>> regionIDMap;
	static std::shared_ptr<java::util::ArrayList<android::icu::util::Region>> regions;
	int code;
	std::shared_ptr<java::util::Set<android::icu::util::Region>> containedRegions;
	std::shared_ptr<android::icu::util::Region> containingRegion;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::util::List<android::icu::util::Region>> preferredValues;
	std::shared_ptr<android::icu::util::Region_S_RegionType> type;
	Region();
	static void loadRegionData();
public:
	static void static_cinit();
	static std::shared_ptr<java::util::Set<android::icu::util::Region>> getAvailable(std::shared_ptr<android::icu::util::Region_S_RegionType> type);
	static std::shared_ptr<android::icu::util::Region> getInstance(int code);
	static std::shared_ptr<android::icu::util::Region> getInstance(std::shared_ptr<java::lang::String> id);
	int virtual compareTo(std::shared_ptr<android::icu::util::Region> other);
	bool virtual contains(std::shared_ptr<android::icu::util::Region> other);
	std::shared_ptr<java::util::Set<android::icu::util::Region>> virtual getContainedRegions();
	std::shared_ptr<java::util::Set<android::icu::util::Region>> virtual getContainedRegions(std::shared_ptr<android::icu::util::Region_S_RegionType> type);
	std::shared_ptr<android::icu::util::Region> virtual getContainingRegion();
	std::shared_ptr<android::icu::util::Region> virtual getContainingRegion(std::shared_ptr<android::icu::util::Region_S_RegionType> type);
	int virtual getNumericCode();
	std::shared_ptr<java::util::List<android::icu::util::Region>> virtual getPreferredValues();
	std::shared_ptr<android::icu::util::Region_S_RegionType> virtual getType();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::Region::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Region(){
	}

}; // class Region
}; // namespace android::icu::util

#endif //__android_icu_util_Region__

