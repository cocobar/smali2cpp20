#ifndef __android_icu_impl_duration_impl_DataRecord_S_ScopeData__
#define __android_icu_impl_duration_impl_DataRecord_S_ScopeData__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ScopeData.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.RecordReader.h"
#include "android.icu.impl.duration.impl.RecordWriter.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration::impl{
class DataRecord_S_ScopeData : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> prefix;
	bool requiresDigitPrefix;
	std::shared_ptr<java::lang::String> suffix;
	DataRecord_S_ScopeData();
	static std::shared_ptr<android::icu::impl::duration::impl::DataRecord_S_ScopeData> read(std::shared_ptr<android::icu::impl::duration::impl::RecordReader> in);
	void virtual write(std::shared_ptr<android::icu::impl::duration::impl::RecordWriter> out);
public:
	virtual ~DataRecord_S_ScopeData(){
	}

}; // class DataRecord_S_ScopeData
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_DataRecord_S_ScopeData__

