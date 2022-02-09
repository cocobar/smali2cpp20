#ifndef __android_icu_impl_UResource_S_Array__
#define __android_icu_impl_UResource_S_Array__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UResource$Array.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class UResource_S_Array : public java::lang::Object {
protected:
private:
public:
	int getSize() = 0;
	bool getValue(int var0,std::shared_ptr<android::icu::impl::UResource_S_Value> var1) = 0;
	UResource_S_Array(){ };
	virtual ~UResource_S_Array(){ };

}; // class UResource_S_Array
}; // namespace android::icu::impl

#endif //__android_icu_impl_UResource_S_Array__

