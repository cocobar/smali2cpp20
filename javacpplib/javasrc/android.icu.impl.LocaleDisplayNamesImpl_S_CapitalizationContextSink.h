#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_CapitalizationContextSink__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_CapitalizationContextSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$CapitalizationContextSink.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_CapitalizationContextSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	LocaleDisplayNamesImpl_S_CapitalizationContextSink(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> this_S_0);
public:
	bool hasCapitalizationUsage;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> this_S_0;
	LocaleDisplayNamesImpl_S_CapitalizationContextSink(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> this_S_0,std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextSink> _this1);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~LocaleDisplayNamesImpl_S_CapitalizationContextSink(){
	}

}; // class LocaleDisplayNamesImpl_S_CapitalizationContextSink
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_CapitalizationContextSink__

