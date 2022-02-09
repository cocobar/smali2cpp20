#ifndef __sun_util_locale_StringTokenIterator__
#define __sun_util_locale_StringTokenIterator__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\StringTokenIterator.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::util::locale{
class StringTokenIterator : public java::lang::Object {
protected:
private:
	char delimiterChar;
	std::shared_ptr<java::lang::String> dlms;
	bool done;
	int end;
	int start;
	std::shared_ptr<java::lang::String> text;
	std::shared_ptr<java::lang::String> token;
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
	std::shared_ptr<sun::util::locale::StringTokenIterator> virtual setStart(int offset);
	std::shared_ptr<sun::util::locale::StringTokenIterator> virtual setText(std::shared_ptr<java::lang::String> text);
public:
	virtual ~StringTokenIterator(){
	}

}; // class StringTokenIterator
}; // namespace sun::util::locale

#endif //__sun_util_locale_StringTokenIterator__

