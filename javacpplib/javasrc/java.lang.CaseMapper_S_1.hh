#ifndef __java_lang_CaseMapper_S_1__
#define __java_lang_CaseMapper_S_1__
// H L:\smali2cpp20\x64\Release\out\java\lang\CaseMapper$1.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.hhh"
#include "java.lang.ThreadLocal.hhh"

namespace java::lang{
class CaseMapper_S_1 : public java::lang::ThreadLocal<android::icu::text::Transliterator> {
public:
	CaseMapper_S_1();
	virtual ~CaseMapper_S_1();

}; // class CaseMapper_S_1
}; // namespace java::lang

#endif //__java_lang_CaseMapper_S_1__

