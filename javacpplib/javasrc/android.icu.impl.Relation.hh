#ifndef __android_icu_impl_Relation__
#define __android_icu_impl_Relation__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Relation.smali
#include "java2ctype.h"
#include "android.icu.util.Freezable.h"

namespace android::icu::impl{
template <typename K,typename V>
class Relation : public android::icu::util::Freezable<android::icu::impl::Relation<K,V>> {
public:
	Relation();
	virtual ~Relation();

}; // class Relation
}; // namespace android::icu::impl

#endif //__android_icu_impl_Relation__

