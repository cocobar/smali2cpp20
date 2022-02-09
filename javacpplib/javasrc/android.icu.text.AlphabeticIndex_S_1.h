#ifndef __android_icu_text_AlphabeticIndex_S_1__
#define __android_icu_text_AlphabeticIndex_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$1.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_Record.h"
#include "android.icu.text.AlphabeticIndex.h"
#include "java.util.Comparator.h"

namespace android::icu::text{
class AlphabeticIndex_S_1 : public java::util::Comparator<android::icu::text::AlphabeticIndex_S_Record<V>> {
protected:
private:
public:
	std::shared_ptr<android::icu::text::AlphabeticIndex> this_S_0;
	AlphabeticIndex_S_1(std::shared_ptr<android::icu::text::AlphabeticIndex> this_S_0);
	int virtual compare(std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record<V>> o1,std::shared_ptr<android::icu::text::AlphabeticIndex_S_Record<V>> o2);
public:
	virtual ~AlphabeticIndex_S_1(){
	}

}; // class AlphabeticIndex_S_1
}; // namespace android::icu::text

#endif //__android_icu_text_AlphabeticIndex_S_1__

