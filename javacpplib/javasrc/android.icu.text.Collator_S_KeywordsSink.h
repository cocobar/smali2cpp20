#ifndef __android_icu_text_Collator_S_KeywordsSink__
#define __android_icu_text_Collator_S_KeywordsSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Collator$KeywordsSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"
#include "java.util.LinkedList.h"

namespace android::icu::text{
class Collator_S_KeywordsSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	Collator_S_KeywordsSink();
public:
	bool hasDefault;
	std::shared_ptr<java::util::LinkedList<java::lang::String>> values;
	Collator_S_KeywordsSink(std::shared_ptr<android::icu::text::Collator_S_KeywordsSink> _this0);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~Collator_S_KeywordsSink(){
	}

}; // class Collator_S_KeywordsSink
}; // namespace android::icu::text

#endif //__android_icu_text_Collator_S_KeywordsSink__

