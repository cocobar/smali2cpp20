#ifndef __android_icu_impl_ICUResourceBundleReader_S_ReaderValue__
#define __android_icu_impl_ICUResourceBundleReader_S_ReaderValue__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ReaderValue.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.UResource_S_Array.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class ICUResourceBundleReader_S_ReaderValue : public android::icu::impl::UResource_S_Value {
protected:
private:
	std::shared_ptr<java::lang::String> virtual getStringArray(std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Array> array);
public:
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader;
	int res;
	ICUResourceBundleReader_S_ReaderValue();
	std::shared_ptr<java::lang::String> virtual getAliasString();
	std::shared_ptr<android::icu::impl::UResource_S_Array> virtual getArray();
	std::shared_ptr<java::nio::ByteBuffer> virtual getBinary();
	int virtual getInt();
	int virtual getIntVector();
	std::shared_ptr<java::lang::String> virtual getString();
	std::shared_ptr<java::lang::String> virtual getStringArray();
	std::shared_ptr<java::lang::String> virtual getStringArrayOrStringAsArray();
	std::shared_ptr<java::lang::String> virtual getStringOrFirstOfArray();
	std::shared_ptr<android::icu::impl::UResource_S_Table> virtual getTable();
	int virtual getType();
	int virtual getUInt();
	bool virtual isNoInheritanceMarker();
public:
	virtual ~ICUResourceBundleReader_S_ReaderValue(){
	}

}; // class ICUResourceBundleReader_S_ReaderValue
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_ReaderValue__

