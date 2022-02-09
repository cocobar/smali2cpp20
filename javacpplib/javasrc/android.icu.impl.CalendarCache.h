#ifndef __android_icu_impl_CalendarCache__
#define __android_icu_impl_CalendarCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarCache.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class CalendarCache : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> primes;
	int arraySize;
	std::shared_ptr<long long[]> keys;
	int pIndex;
	int size;
	int threshold;
	std::shared_ptr<long long[]> values;
	int virtual findIndex(long long key);
	int virtual hash(long long key);
	int virtual hash2(long long key);
	void virtual makeArrays(int newSize);
	void virtual rehash();
public:
	static long long EMPTY;
	static void static_cinit();
	CalendarCache();
	long long virtual get(long long key);
	void virtual put(long long key,long long value);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CalendarCache::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CalendarCache(){
	}

}; // class CalendarCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarCache__

