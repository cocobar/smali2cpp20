#ifndef __android_icu_text_UnicodeSetSpanner__
#define __android_icu_text_UnicodeSetSpanner__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSetSpanner.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UnicodeSetSpanner_S_CountMethod.h"
#include "android.icu.text.UnicodeSetSpanner_S_TrimOption.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeSetSpanner : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::UnicodeSet> unicodeSet;
public:
	UnicodeSetSpanner(std::shared_ptr<android::icu::text::UnicodeSet> source);
	int virtual countIn(std::shared_ptr<java::lang::CharSequence> sequence);
	int virtual countIn(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> countMethod);
	int virtual countIn(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> countMethod,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
	std::shared_ptr<java::lang::String> virtual deleteFrom(std::shared_ptr<java::lang::CharSequence> sequence);
	std::shared_ptr<java::lang::String> virtual deleteFrom(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getUnicodeSet();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual replaceFrom(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<java::lang::CharSequence> replacement);
	std::shared_ptr<java::lang::String> virtual replaceFrom(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<java::lang::CharSequence> replacement,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> countMethod);
	std::shared_ptr<java::lang::String> virtual replaceFrom(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<java::lang::CharSequence> replacement,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_CountMethod> countMethod,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
	std::shared_ptr<java::lang::CharSequence> virtual trim(std::shared_ptr<java::lang::CharSequence> sequence);
	std::shared_ptr<java::lang::CharSequence> virtual trim(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> trimOption);
	std::shared_ptr<java::lang::CharSequence> virtual trim(std::shared_ptr<java::lang::CharSequence> sequence,std::shared_ptr<android::icu::text::UnicodeSetSpanner_S_TrimOption> trimOption,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
public:
	virtual ~UnicodeSetSpanner(){
	}

}; // class UnicodeSetSpanner
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSetSpanner__

