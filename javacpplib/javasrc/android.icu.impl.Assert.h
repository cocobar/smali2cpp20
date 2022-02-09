#ifndef __android_icu_impl_Assert__
#define __android_icu_impl_Assert__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Assert.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class Assert : public java::lang::Object {
protected:
private:
public:
	Assert();
	static void assrt(std::shared_ptr<java::lang::String> msg,bool val);
	static void assrt(bool val);
	static void fail(std::shared_ptr<java::lang::Exception> e);
	static void fail(std::shared_ptr<java::lang::String> msg);
public:
	virtual ~Assert(){
	}

}; // class Assert
}; // namespace android::icu::impl

#endif //__android_icu_impl_Assert__

