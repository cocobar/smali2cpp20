#ifndef __android_icu_impl_Relation_S_SimpleEntry__
#define __android_icu_impl_Relation_S_SimpleEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Relation$SimpleEntry.smali
#include "java2ctype.h"
#include "java.util.Map_S_Entry.h"

namespace android::icu::impl{
template <typename K,typename V>
class Relation_S_SimpleEntry : public java::util::Map_S_Entry<K,V> {
public:
	Relation_S_SimpleEntry();
	virtual ~Relation_S_SimpleEntry();

}; // class Relation_S_SimpleEntry
}; // namespace android::icu::impl

#endif //__android_icu_impl_Relation_S_SimpleEntry__

