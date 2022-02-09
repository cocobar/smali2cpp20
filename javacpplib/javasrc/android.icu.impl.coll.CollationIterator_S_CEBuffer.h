#ifndef __android_icu_impl_coll_CollationIterator_S_CEBuffer__
#define __android_icu_impl_coll_CollationIterator_S_CEBuffer__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationIterator$CEBuffer.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationIterator_S_CEBuffer : public java::lang::Object {
protected:
private:
	static int INITIAL_CAPACITY;
	std::shared_ptr<long long[]> buffer;
public:
	int length;
	CollationIterator_S_CEBuffer();
	void virtual append(long long ce);
	void virtual appendUnsafe(long long ce);
	void virtual ensureAppendCapacity(int appCap);
	long long virtual get(int i);
	long long virtual getCEs();
	void virtual incLength();
	long long virtual set(int i,long long ce);
public:
	virtual ~CollationIterator_S_CEBuffer(){
	}

}; // class CollationIterator_S_CEBuffer
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationIterator_S_CEBuffer__

