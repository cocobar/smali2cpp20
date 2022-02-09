#ifndef __android_icu_text_UnicodeReplacer__
#define __android_icu_text_UnicodeReplacer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeReplacer.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeReplacer : public java::lang::Object {
protected:
private:
public:
	void addReplacementSetTo(std::shared_ptr<android::icu::text::UnicodeSet> var0) = 0;
	int replace(std::shared_ptr<android::icu::text::Replaceable> var0,int var1,int var2,std::shared_ptr<int[]> var3) = 0;
	std::shared_ptr<java::lang::String> toReplacerPattern(bool var0) = 0;
	UnicodeReplacer(){ };
	virtual ~UnicodeReplacer(){ };

}; // class UnicodeReplacer
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeReplacer__

