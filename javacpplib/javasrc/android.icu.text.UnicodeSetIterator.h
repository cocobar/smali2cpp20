#ifndef __android_icu_text_UnicodeSetIterator__
#define __android_icu_text_UnicodeSetIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSetIterator.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"

namespace android::icu::text{
class UnicodeSetIterator : public java::lang::Object {
protected:
	int endElement;
	int nextElement;
	void virtual loadRange(int aRange);
private:
	int endRange;
	int range;
	std::shared_ptr<android::icu::text::UnicodeSet> set;
	std::shared_ptr<java::util::Iterator<java::lang::String>> stringIterator;
public:
	static int IS_STRING;
	int codepoint;
	int codepointEnd;
	std::shared_ptr<java::lang::String> string;
	static void static_cinit();
	UnicodeSetIterator();
	UnicodeSetIterator(std::shared_ptr<android::icu::text::UnicodeSet> set);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getSet();
	std::shared_ptr<java::lang::String> virtual getString();
	bool virtual next();
	bool virtual nextRange();
	void virtual reset();
	void virtual reset(std::shared_ptr<android::icu::text::UnicodeSet> uset);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::UnicodeSetIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeSetIterator(){
	}

}; // class UnicodeSetIterator
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSetIterator__

