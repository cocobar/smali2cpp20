#ifndef __android_icu_impl_RelativeDateFormat_S_URelativeString__
#define __android_icu_impl_RelativeDateFormat_S_URelativeString__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\RelativeDateFormat$URelativeString.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class RelativeDateFormat_S_URelativeString : public java::lang::Object {
protected:
private:
public:
	int offset;
	std::shared_ptr<java::lang::String> string;
	RelativeDateFormat_S_URelativeString(int offset,std::shared_ptr<java::lang::String> string);
	RelativeDateFormat_S_URelativeString(std::shared_ptr<java::lang::String> offset,std::shared_ptr<java::lang::String> string);
public:
	virtual ~RelativeDateFormat_S_URelativeString(){
	}

}; // class RelativeDateFormat_S_URelativeString
}; // namespace android::icu::impl

#endif //__android_icu_impl_RelativeDateFormat_S_URelativeString__

