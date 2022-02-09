#ifndef __android_icu_impl_locale_Extension__
#define __android_icu_impl_locale_Extension__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\Extension.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class Extension : public java::lang::Object {
protected:
	std::shared_ptr<java::lang::String> _value;
	Extension(char key);
private:
	char _key;
public:
	Extension(char key,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<java::lang::String> virtual getID();
	char virtual getKey();
	std::shared_ptr<java::lang::String> virtual getValue();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~Extension(){
	}

}; // class Extension
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_Extension__

