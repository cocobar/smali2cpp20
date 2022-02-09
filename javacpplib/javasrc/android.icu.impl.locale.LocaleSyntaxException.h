#ifndef __android_icu_impl_locale_LocaleSyntaxException__
#define __android_icu_impl_locale_LocaleSyntaxException__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleSyntaxException.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class LocaleSyntaxException : public java::lang::Exception {
protected:
private:
	static long long serialVersionUID;
	int _index;
public:
	LocaleSyntaxException(std::shared_ptr<java::lang::String> msg);
	LocaleSyntaxException(std::shared_ptr<java::lang::String> msg,int errorIndex);
	int virtual getErrorIndex();
public:
	virtual ~LocaleSyntaxException(){
	}

}; // class LocaleSyntaxException
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_LocaleSyntaxException__

