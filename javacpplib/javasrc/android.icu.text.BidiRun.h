#ifndef __android_icu_text_BidiRun__
#define __android_icu_text_BidiRun__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BidiRun.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class BidiRun : public java::lang::Object {
protected:
private:
public:
	int insertRemove;
	unsigned char level;
	int limit;
	int start;
	BidiRun();
	BidiRun(int start,int limit,unsigned char embeddingLevel);
	void virtual copyFrom(std::shared_ptr<android::icu::text::BidiRun> run);
	unsigned char virtual getDirection();
	unsigned char virtual getEmbeddingLevel();
	int virtual getLength();
	int virtual getLimit();
	int virtual getStart();
	bool virtual isEvenRun();
	bool virtual isOddRun();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~BidiRun(){
	}

}; // class BidiRun
}; // namespace android::icu::text

#endif //__android_icu_text_BidiRun__

