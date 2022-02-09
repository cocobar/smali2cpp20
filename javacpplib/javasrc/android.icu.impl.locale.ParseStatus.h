#ifndef __android_icu_impl_locale_ParseStatus__
#define __android_icu_impl_locale_ParseStatus__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\ParseStatus.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class ParseStatus : public java::lang::Object {
protected:
private:
public:
	int _errorIndex;
	std::shared_ptr<java::lang::String> _errorMsg;
	int _parseLength;
	ParseStatus();
	int virtual getErrorIndex();
	std::shared_ptr<java::lang::String> virtual getErrorMessage();
	int virtual getParseLength();
	bool virtual isError();
	void virtual reset();
public:
	virtual ~ParseStatus(){
	}

}; // class ParseStatus
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_ParseStatus__

