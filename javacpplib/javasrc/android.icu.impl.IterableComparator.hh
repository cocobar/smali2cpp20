#ifndef __android_icu_impl_IterableComparator__
#define __android_icu_impl_IterableComparator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\IterableComparator.smali
#include "java2ctype.h"
#include "java.lang.Iterable.h"
#include "java.util.Comparator.h"

namespace android::icu::impl{
template <typename T>
class IterableComparator : public java::util::Comparator<java::lang::Iterable<T>> {
public:
	IterableComparator();
	virtual ~IterableComparator();

}; // class IterableComparator
}; // namespace android::icu::impl

#endif //__android_icu_impl_IterableComparator__

