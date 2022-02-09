#ifndef __android_icu_impl_StringRange_S_Range__
#define __android_icu_impl_StringRange_S_Range__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\StringRange$Range.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class StringRange_S_Range : public java::lang::Comparable<android::icu::impl::StringRange_S_Range> {
protected:
private:
public:
	int max;
	int min;
	StringRange_S_Range(int min,int max);
	int virtual compareTo(std::shared_ptr<android::icu::impl::StringRange_S_Range> that);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StringRange_S_Range(){
	}

}; // class StringRange_S_Range
}; // namespace android::icu::impl

#endif //__android_icu_impl_StringRange_S_Range__

