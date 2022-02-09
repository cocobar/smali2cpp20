#ifndef __java_lang_FindBugsSuppressWarnings__
#define __java_lang_FindBugsSuppressWarnings__
// H L:\smali2cpp20\x64\Release\out\java\lang\FindBugsSuppressWarnings.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.annotation.Annotation.h"

namespace java::lang{
class FindBugsSuppressWarnings : public java::lang::annotation::Annotation {
protected:
private:
public:
	std::shared_ptr<java::lang::String> value() = 0;
	FindBugsSuppressWarnings(){ };
	virtual ~FindBugsSuppressWarnings(){ };

}; // class FindBugsSuppressWarnings
}; // namespace java::lang

#endif //__java_lang_FindBugsSuppressWarnings__

