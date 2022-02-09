#ifndef __android_icu_text_ComposedCharIter__
#define __android_icu_text_ComposedCharIter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ComposedCharIter.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class ComposedCharIter : public java::lang::Object {
protected:
private:
	int curChar;
	std::shared_ptr<java::lang::String> decompBuf;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> n2impl;
	int nextChar;
	void virtual findNextChar();
public:
	static char DONE;
	ComposedCharIter();
	ComposedCharIter(bool compat,int options);
	std::shared_ptr<java::lang::String> virtual decomposition();
	bool virtual hasNext();
	char virtual next();
public:
	virtual ~ComposedCharIter(){
	}

}; // class ComposedCharIter
}; // namespace android::icu::text

#endif //__android_icu_text_ComposedCharIter__

