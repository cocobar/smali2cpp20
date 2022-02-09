#ifndef __android_icu_text_BidiClassifier__
#define __android_icu_text_BidiClassifier__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BidiClassifier.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class BidiClassifier : public java::lang::Object {
protected:
	std::shared_ptr<java::lang::Object> context;
private:
public:
	BidiClassifier(std::shared_ptr<java::lang::Object> context);
	int virtual classify(int c);
	std::shared_ptr<java::lang::Object> virtual getContext();
	void virtual setContext(std::shared_ptr<java::lang::Object> context);
public:
	virtual ~BidiClassifier(){
	}

}; // class BidiClassifier
}; // namespace android::icu::text

#endif //__android_icu_text_BidiClassifier__

