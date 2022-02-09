#ifndef __android_icu_util_UResourceBundleIterator__
#define __android_icu_util_UResourceBundleIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\UResourceBundleIterator.smali
#include "java2ctype.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class UResourceBundleIterator : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::util::UResourceBundle> bundle;
	int index;
	int size;
public:
	UResourceBundleIterator(std::shared_ptr<android::icu::util::UResourceBundle> bndl);
	bool virtual hasNext();
	std::shared_ptr<android::icu::util::UResourceBundle> virtual next();
	std::shared_ptr<java::lang::String> virtual nextString();
	void virtual reset();
public:
	virtual ~UResourceBundleIterator(){
	}

}; // class UResourceBundleIterator
}; // namespace android::icu::util

#endif //__android_icu_util_UResourceBundleIterator__

