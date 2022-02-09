#ifndef __sun_util_locale_ParseStatus__
#define __sun_util_locale_ParseStatus__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\ParseStatus.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::util::locale{
class ParseStatus : public java::lang::Object {
protected:
private:
public:
	int errorIndex;
	std::shared_ptr<java::lang::String> errorMsg;
	int parseLength;
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
}; // namespace sun::util::locale

#endif //__sun_util_locale_ParseStatus__

