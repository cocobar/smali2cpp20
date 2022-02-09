#ifndef __android_icu_impl_ICUResourceBundleReader_S_ResourceCache_S_Level__
#define __android_icu_impl_ICUResourceBundleReader_S_ResourceCache_S_Level__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ResourceCache$Level.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class ICUResourceBundleReader_S_ResourceCache_S_Level : public java::lang::Object {
protected:
private:
public:
	static bool _assertionsDisabled;
	std::shared_ptr<int[]> keys;
	int levelBitsList;
	int mask;
	int shift;
	std::shared_ptr<std::vector<java::lang::Object>> values;
	static void static_cinit();
	ICUResourceBundleReader_S_ResourceCache_S_Level(int levelBitsList,int shift);
	std::shared_ptr<java::lang::Object> virtual get(int key);
	std::shared_ptr<java::lang::Object> virtual putIfAbsent(int key,std::shared_ptr<java::lang::Object> item,int size);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUResourceBundleReader_S_ResourceCache_S_Level(){
	}

}; // class ICUResourceBundleReader_S_ResourceCache_S_Level
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_ResourceCache_S_Level__

