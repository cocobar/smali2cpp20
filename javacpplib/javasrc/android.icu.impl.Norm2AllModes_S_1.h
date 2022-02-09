#ifndef __android_icu_impl_Norm2AllModes_S_1__
#define __android_icu_impl_Norm2AllModes_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$1.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.SoftCache.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class Norm2AllModes_S_1 : public android::icu::impl::SoftCache<java::lang::String,android::icu::impl::Norm2AllModes,java::nio::ByteBuffer> {
protected:
	std::shared_ptr<android::icu::impl::Norm2AllModes> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::nio::ByteBuffer> bytes);
private:
public:
	Norm2AllModes_S_1();
public:
	virtual ~Norm2AllModes_S_1(){
	}

}; // class Norm2AllModes_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_Norm2AllModes_S_1__

