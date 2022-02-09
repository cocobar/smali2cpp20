#ifndef __android_icu_util_LocalePriorityList__
#define __android_icu_util_LocalePriorityList__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocalePriorityList.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Iterable.h"

namespace android::icu::util{
class LocalePriorityList : public java::lang::Iterable<android::icu::util::ULocale> {
public:
	LocalePriorityList();
	virtual ~LocalePriorityList();

}; // class LocalePriorityList
}; // namespace android::icu::util

#endif //__android_icu_util_LocalePriorityList__

