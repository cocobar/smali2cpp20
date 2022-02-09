#ifndef __android_icu_text_ReplaceableContextIterator__
#define __android_icu_text_ReplaceableContextIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ReplaceableContextIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.UCaseProps_S_ContextIterator.h"
#include "android.icu.text.Replaceable.h"
#include "java.lang.String.h"

namespace android::icu::text{
class ReplaceableContextIterator : public android::icu::impl::UCaseProps_S_ContextIterator {
protected:
	int contextLimit;
	int contextStart;
	int cpLimit;
	int cpStart;
	int dir;
	int index;
	int limit;
	bool reachedLimit;
	std::shared_ptr<android::icu::text::Replaceable> rep;
private:
public:
	ReplaceableContextIterator();
	bool virtual didReachLimit();
	int virtual getCaseMapCPStart();
	int virtual next();
	int virtual nextCaseMapCP();
	int virtual replace(std::shared_ptr<java::lang::String> text);
	void virtual reset(int direction);
	void virtual setContextLimits(int contextStart,int contextLimit);
	void virtual setIndex(int index);
	void virtual setLimit(int lim);
	void virtual setText(std::shared_ptr<android::icu::text::Replaceable> rep);
public:
	virtual ~ReplaceableContextIterator(){
	}

}; // class ReplaceableContextIterator
}; // namespace android::icu::text

#endif //__android_icu_text_ReplaceableContextIterator__

