#ifndef __android_icu_text_UnicodeSet_S_UnicodeSetIterator2__
#define __android_icu_text_UnicodeSet_S_UnicodeSetIterator2__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$UnicodeSetIterator2.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"
#include "java.util.TreeSet.h"

namespace android::icu::text{
class UnicodeSet_S_UnicodeSetIterator2 : public java::util::Iterator<java::lang::String> {
protected:
private:
	std::shared_ptr<char[]> buffer;
	int current;
	int item;
	int len;
	int limit;
	std::shared_ptr<int[]> sourceList;
	std::shared_ptr<java::util::TreeSet<java::lang::String>> sourceStrings;
	std::shared_ptr<java::util::Iterator<java::lang::String>> stringIterator;
public:
	UnicodeSet_S_UnicodeSetIterator2(std::shared_ptr<android::icu::text::UnicodeSet> source);
	bool virtual hasNext();
	std::shared_ptr<java::lang::String> virtual next();
	void virtual remove();
public:
	virtual ~UnicodeSet_S_UnicodeSetIterator2(){
	}

}; // class UnicodeSet_S_UnicodeSetIterator2
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_UnicodeSetIterator2__

