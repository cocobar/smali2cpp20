#ifndef __android_icu_impl_UResource_S_Sink__
#define __android_icu_impl_UResource_S_Sink__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UResource$Sink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class UResource_S_Sink : public java::lang::Object {
protected:
private:
public:
	UResource_S_Sink();
	void put(std::shared_ptr<android::icu::impl::UResource_S_Key> var0,std::shared_ptr<android::icu::impl::UResource_S_Value> var1,bool var2) = 0;
public:
	virtual ~UResource_S_Sink(){
	}

}; // class UResource_S_Sink
}; // namespace android::icu::impl

#endif //__android_icu_impl_UResource_S_Sink__

