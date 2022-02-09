#ifndef __android_icu_impl_RelativeDateFormat_S_RelDateFmtDataSink__
#define __android_icu_impl_RelativeDateFormat_S_RelDateFmtDataSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\RelativeDateFormat$RelDateFmtDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.RelativeDateFormat.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"

namespace android::icu::impl{
class RelativeDateFormat_S_RelDateFmtDataSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	RelativeDateFormat_S_RelDateFmtDataSink(std::shared_ptr<android::icu::impl::RelativeDateFormat> this_S_0);
public:
	std::shared_ptr<android::icu::impl::RelativeDateFormat> this_S_0;
	RelativeDateFormat_S_RelDateFmtDataSink(std::shared_ptr<android::icu::impl::RelativeDateFormat> this_S_0,std::shared_ptr<android::icu::impl::RelativeDateFormat_S_RelDateFmtDataSink> _this1);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~RelativeDateFormat_S_RelDateFmtDataSink(){
	}

}; // class RelativeDateFormat_S_RelDateFmtDataSink
}; // namespace android::icu::impl

#endif //__android_icu_impl_RelativeDateFormat_S_RelDateFmtDataSink__

