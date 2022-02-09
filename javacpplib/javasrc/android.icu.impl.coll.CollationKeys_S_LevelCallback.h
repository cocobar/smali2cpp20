#ifndef __android_icu_impl_coll_CollationKeys_S_LevelCallback__
#define __android_icu_impl_coll_CollationKeys_S_LevelCallback__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationKeys$LevelCallback.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationKeys_S_LevelCallback : public java::lang::Object {
protected:
private:
public:
	CollationKeys_S_LevelCallback();
	bool virtual needToWrite(int level);
public:
	virtual ~CollationKeys_S_LevelCallback(){
	}

}; // class CollationKeys_S_LevelCallback
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationKeys_S_LevelCallback__

