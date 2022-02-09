#ifndef __android_icu_util_LocalePriorityList_S_1__
#define __android_icu_util_LocalePriorityList_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocalePriorityList$1.smali
#include "java2ctype.h"
#include "java.lang.Double.h"
#include "java.util.Comparator.h"

namespace android::icu::util{
class LocalePriorityList_S_1 : public java::util::Comparator<java::lang::Double> {
protected:
private:
public:
	LocalePriorityList_S_1();
	int virtual compare(std::shared_ptr<java::lang::Double> o1,std::shared_ptr<java::lang::Double> o2);
public:
	virtual ~LocalePriorityList_S_1(){
	}

}; // class LocalePriorityList_S_1
}; // namespace android::icu::util

#endif //__android_icu_util_LocalePriorityList_S_1__

