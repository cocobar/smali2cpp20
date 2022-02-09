#ifndef __android_icu_impl_UResource_S_Table__
#define __android_icu_impl_UResource_S_Table__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UResource$Table.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class UResource_S_Table : public java::lang::Object {
protected:
private:
public:
	bool getKeyAndValue(int var0,std::shared_ptr<android::icu::impl::UResource_S_Key> var1,std::shared_ptr<android::icu::impl::UResource_S_Value> var2) = 0;
	int getSize() = 0;
	UResource_S_Table(){ };
	virtual ~UResource_S_Table(){ };

}; // class UResource_S_Table
}; // namespace android::icu::impl

#endif //__android_icu_impl_UResource_S_Table__

