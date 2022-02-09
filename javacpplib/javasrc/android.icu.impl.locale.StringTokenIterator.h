#ifndef __android_icu_impl_locale_StringTokenIterator__
#define __android_icu_impl_locale_StringTokenIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\StringTokenIterator.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class StringTokenIterator : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> _dlms;
	bool _done;
	int _end;
	int _start;
	std::shared_ptr<java::lang::String> _text;
	std::shared_ptr<java::lang::String> _token;
	int virtual nextDelimiter(int start);
public:
	StringTokenIterator(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::lang::String> dlms);
	std::shared_ptr<java::lang::String> virtual current();
	int virtual currentEnd();
	int virtual currentStart();
	std::shared_ptr<java::lang::String> virtual first();
	bool virtual hasNext();
	bool virtual isDone();
	std::shared_ptr<java::lang::String> virtual next();
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> virtual setStart(int offset);
	std::shared_ptr<android::icu::impl::locale::StringTokenIterator> virtual setText(std::shared_ptr<java::lang::String> text);
public:
	virtual ~StringTokenIterator(){
	}

}; // class StringTokenIterator
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_StringTokenIterator__

