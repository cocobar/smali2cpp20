#ifndef __android_icu_text_DateTimePatternGenerator_S_AppendItemFormatsSink__
#define __android_icu_text_DateTimePatternGenerator_S_AppendItemFormatsSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$AppendItemFormatsSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateTimePatternGenerator.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_AppendItemFormatsSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	DateTimePatternGenerator_S_AppendItemFormatsSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0);
public:
	static bool _assertionsDisabled;
	bool _S_assertionsDisabled;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0;
	static void static_cinit();
	DateTimePatternGenerator_S_AppendItemFormatsSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink> _this1);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateTimePatternGenerator_S_AppendItemFormatsSink(){
	}

}; // class DateTimePatternGenerator_S_AppendItemFormatsSink
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_AppendItemFormatsSink__

