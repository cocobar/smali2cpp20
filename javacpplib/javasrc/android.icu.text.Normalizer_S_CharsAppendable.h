#ifndef __android_icu_text_Normalizer_S_CharsAppendable__
#define __android_icu_text_Normalizer_S_CharsAppendable__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$CharsAppendable.smali
#include "java2ctype.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"

namespace android::icu::text{
class Normalizer_S_CharsAppendable : public java::lang::Appendable {
protected:
private:
	std::shared_ptr<char[]> chars;
	int limit;
	int offset;
	int start;
public:
	Normalizer_S_CharsAppendable(std::shared_ptr<char[]> dest,int destStart,int destLimit);
	std::shared_ptr<java::lang::Appendable> virtual append(char c);
	std::shared_ptr<java::lang::Appendable> virtual append(std::shared_ptr<java::lang::CharSequence> s);
	std::shared_ptr<java::lang::Appendable> virtual append(std::shared_ptr<java::lang::CharSequence> s,int sStart,int sLimit);
	int virtual length();
public:
	virtual ~Normalizer_S_CharsAppendable(){
	}

}; // class Normalizer_S_CharsAppendable
}; // namespace android::icu::text

#endif //__android_icu_text_Normalizer_S_CharsAppendable__

