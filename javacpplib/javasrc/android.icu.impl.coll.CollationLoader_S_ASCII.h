#ifndef __android_icu_impl_coll_CollationLoader_S_ASCII__
#define __android_icu_impl_coll_CollationLoader_S_ASCII__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationLoader$ASCII.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::coll{
class CollationLoader_S_ASCII : public java::lang::Object {
protected:
private:
	CollationLoader_S_ASCII();
public:
	static std::shared_ptr<java::lang::String> toLowerCase(std::shared_ptr<java::lang::String> s);
public:
	virtual ~CollationLoader_S_ASCII(){
	}

}; // class CollationLoader_S_ASCII
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationLoader_S_ASCII__
