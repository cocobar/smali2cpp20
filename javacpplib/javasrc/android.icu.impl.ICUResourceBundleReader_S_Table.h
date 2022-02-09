#ifndef __android_icu_impl_ICUResourceBundleReader_S_Table__
#define __android_icu_impl_ICUResourceBundleReader_S_Table__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Table.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Container.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceBundleReader_S_Table : public android::icu::impl::ICUResourceBundleReader_S_Container, public android::icu::impl::UResource_S_Table {
protected:
	std::shared_ptr<int[]> key32Offsets;
	std::shared_ptr<char[]> keyOffsets;
private:
	static int URESDATA_ITEM_NOT_FOUND;
public:
	ICUResourceBundleReader_S_Table();
	int virtual findTableItem(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,std::shared_ptr<java::lang::CharSequence> key);
	std::shared_ptr<java::lang::String> virtual getKey(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index);
	bool virtual getKeyAndValue(int i,std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	int virtual getResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,std::shared_ptr<java::lang::String> resKey);
public:
	virtual ~ICUResourceBundleReader_S_Table(){
	}

}; // class ICUResourceBundleReader_S_Table
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_Table__

