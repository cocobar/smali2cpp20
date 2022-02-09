#ifndef __android_icu_impl_StringRange_S_Ranges__
#define __android_icu_impl_StringRange_S_Ranges__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\StringRange$Ranges.smali
#include "java2ctype.h"
#include "android.icu.impl.StringRange_S_Range.h"
#include "java.lang.Comparable.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class StringRange_S_Ranges : public java::lang::Comparable<android::icu::impl::StringRange_S_Ranges> {
protected:
private:
	std::shared_ptr<std::vector<android::icu::impl::StringRange_S_Range>> ranges;
public:
	StringRange_S_Ranges(std::shared_ptr<java::lang::String> s);
	int virtual compareTo(std::shared_ptr<android::icu::impl::StringRange_S_Ranges> other);
	std::shared_ptr<java::lang::String> virtual end(bool mostCompact);
	int virtual firstDifference();
	bool virtual merge(int pivot,std::shared_ptr<android::icu::impl::StringRange_S_Ranges> other);
	std::shared_ptr<java::lang::Integer> virtual size();
	std::shared_ptr<java::lang::String> virtual start();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~StringRange_S_Ranges(){
	}

}; // class StringRange_S_Ranges
}; // namespace android::icu::impl

#endif //__android_icu_impl_StringRange_S_Ranges__

