#ifndef __android_icu_impl_ICUResourceBundleReader_S_ResourceCache__
#define __android_icu_impl_ICUResourceBundleReader_S_ResourceCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ResourceCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ResourceCache_S_Level.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class ICUResourceBundleReader_S_ResourceCache : public java::lang::Object {
protected:
private:
	static int NEXT_BITS;
	static int ROOT_BITS;
	static int SIMPLE_LENGTH;
	std::shared_ptr<int[]> keys;
	int length;
	int levelBitsList;
	int maxOffsetBits;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ResourceCache_S_Level> rootLevel;
	std::shared_ptr<std::vector<java::lang::Object>> values;
	int virtual findSimple(int key);
	int virtual makeKey(int res);
	static std::shared_ptr<java::lang::Object> putIfCleared(std::shared_ptr<std::vector<java::lang::Object>> values,int index,std::shared_ptr<java::lang::Object> item,int size);
	static bool storeDirectly(int size);
public:
	static bool _assertionsDisabled;
	static bool _wrap0(int size);
	static std::shared_ptr<java::lang::Object> _wrap1(std::shared_ptr<std::vector<java::lang::Object>> values,int index,std::shared_ptr<java::lang::Object> item,int size);
	static void static_cinit();
	ICUResourceBundleReader_S_ResourceCache(int maxOffset);
	std::shared_ptr<java::lang::Object> virtual get(int res);
	std::shared_ptr<java::lang::Object> virtual putIfAbsent(int res,std::shared_ptr<java::lang::Object> item,int size);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUResourceBundleReader_S_ResourceCache::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUResourceBundleReader_S_ResourceCache(){
	}

}; // class ICUResourceBundleReader_S_ResourceCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_ResourceCache__

