#ifndef __android_icu_impl_Row__
#define __android_icu_impl_Row__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Row.smali
#include "java2ctype.h"
#include "android.icu.util.Freezable.hh"
#include "java.lang.Cloneable.hh"
#include "java.lang.Comparable.hh"

namespace android::icu::impl{
template <typename C0,typename C1,typename C2,typename C3,typename C4>
class Row : public java::lang::Comparable, public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::impl::Row<C0,C1,C2,C3,C4>> {
public:
	Row();
	virtual ~Row();

}; // class Row
}; // namespace android::icu::impl

#endif //__android_icu_impl_Row__

