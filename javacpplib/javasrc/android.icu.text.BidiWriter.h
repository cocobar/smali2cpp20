#ifndef __android_icu_text_BidiWriter__
#define __android_icu_text_BidiWriter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BidiWriter.smali
#include "java2ctype.h"
#include "android.icu.text.Bidi.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class BidiWriter : public java::lang::Object {
protected:
private:
	static bool IsCombining(int type);
	static std::shared_ptr<java::lang::String> doWriteForward(std::shared_ptr<java::lang::String> src,int options);
	static std::shared_ptr<java::lang::String> doWriteForward(std::shared_ptr<char[]> text,int start,int limit,int options);
public:
	static char LRM_CHAR;
	static int MASK_R_AL;
	static char RLM_CHAR;
	BidiWriter();
	static std::shared_ptr<java::lang::String> doWriteReverse(std::shared_ptr<char[]> text,int start,int limit,int options);
	static std::shared_ptr<java::lang::String> writeReordered(std::shared_ptr<android::icu::text::Bidi> bidi,int cVar4);
	static std::shared_ptr<java::lang::String> writeReverse(std::shared_ptr<java::lang::String> src,int options);
public:
	virtual ~BidiWriter(){
	}

}; // class BidiWriter
}; // namespace android::icu::text

#endif //__android_icu_text_BidiWriter__

