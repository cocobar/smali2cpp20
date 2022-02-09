#ifndef __android_icu_impl_UResource_S_Value__
#define __android_icu_impl_UResource_S_Value__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UResource$Value.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Array.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class UResource_S_Value : public java::lang::Object {
protected:
	UResource_S_Value();
private:
public:
	std::shared_ptr<java::lang::String> getAliasString() = 0;
	std::shared_ptr<android::icu::impl::UResource_S_Array> getArray() = 0;
	std::shared_ptr<java::nio::ByteBuffer> getBinary() = 0;
	int getInt() = 0;
	int getIntVector() = 0;
	std::shared_ptr<java::lang::String> getString() = 0;
	std::shared_ptr<java::lang::String> getStringArray() = 0;
	std::shared_ptr<java::lang::String> getStringArrayOrStringAsArray() = 0;
	std::shared_ptr<java::lang::String> getStringOrFirstOfArray() = 0;
	std::shared_ptr<android::icu::impl::UResource_S_Table> getTable() = 0;
	int getType() = 0;
	int getUInt() = 0;
	bool isNoInheritanceMarker() = 0;
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~UResource_S_Value(){
	}

}; // class UResource_S_Value
}; // namespace android::icu::impl

#endif //__android_icu_impl_UResource_S_Value__

