#ifndef __android_icu_impl_StringRange_S_1__
#define __android_icu_impl_StringRange_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\StringRange$1.smali
#include "java2ctype.h"
#include "java.util.Comparator.h"

namespace android::icu::impl{
class StringRange_S_1 : public java::util::Comparator<int[]> {
protected:
private:
public:
	StringRange_S_1();
	int virtual compare(std::shared_ptr<int[]> o1,std::shared_ptr<int[]> o2);
public:
	virtual ~StringRange_S_1(){
	}

}; // class StringRange_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_StringRange_S_1__

