#ifndef __android_icu_impl_coll_SharedObject__
#define __android_icu_impl_coll_SharedObject__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\SharedObject.smali
#include "java2ctype.h"
#include "java.lang.Cloneable.h"
#include "java.util.concurrent.atomic.AtomicInteger.h"

namespace android::icu::impl::coll{
class SharedObject : public java::lang::Cloneable {
protected:
private:
	std::shared_ptr<java::util::concurrent::atomic::AtomicInteger> refCount;
public:
	SharedObject();
	void virtual addRef();
	std::shared_ptr<android::icu::impl::coll::SharedObject> virtual clone();
	void virtual deleteIfZeroRefCount();
	int virtual getRefCount();
	void virtual removeRef();
public:
	virtual ~SharedObject(){
	}

}; // class SharedObject
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_SharedObject__

