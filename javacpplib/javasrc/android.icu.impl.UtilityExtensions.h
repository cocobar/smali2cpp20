#ifndef __android_icu_impl_UtilityExtensions__
#define __android_icu_impl_UtilityExtensions__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UtilityExtensions.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.ReplaceableString.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::impl{
class UtilityExtensions : public java::lang::Object {
protected:
private:
public:
	UtilityExtensions();
	static void appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,std::shared_ptr<android::icu::text::UnicodeMatcher> matcher,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf);
	static void appendToRule(std::shared_ptr<java::lang::StringBuffer> rule,std::shared_ptr<java::lang::String> text,bool isLiteral,bool escapeUnprintable,std::shared_ptr<java::lang::StringBuffer> quoteBuf);
	static std::shared_ptr<java::lang::String> formatInput(std::shared_ptr<android::icu::text::Replaceable> input,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos);
	static std::shared_ptr<java::lang::String> formatInput(std::shared_ptr<android::icu::text::ReplaceableString> input,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos);
	static std::shared_ptr<java::lang::StringBuffer> formatInput(std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<android::icu::text::Replaceable> input,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos);
	static std::shared_ptr<java::lang::StringBuffer> formatInput(std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<android::icu::text::ReplaceableString> input,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos);
public:
	virtual ~UtilityExtensions(){
	}

}; // class UtilityExtensions
}; // namespace android::icu::impl

#endif //__android_icu_impl_UtilityExtensions__

