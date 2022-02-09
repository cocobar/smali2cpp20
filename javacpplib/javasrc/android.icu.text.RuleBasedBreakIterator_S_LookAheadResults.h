#ifndef __android_icu_text_RuleBasedBreakIterator_S_LookAheadResults__
#define __android_icu_text_RuleBasedBreakIterator_S_LookAheadResults__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedBreakIterator$LookAheadResults.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class RuleBasedBreakIterator_S_LookAheadResults : public java::lang::Object {
protected:
private:
public:
	static bool _assertionsDisabled;
	std::shared_ptr<int[]> fKeys;
	std::shared_ptr<int[]> fPositions;
	int fUsedSlotLimit;
	static void static_cinit();
	RuleBasedBreakIterator_S_LookAheadResults();
	int virtual getPosition(int key);
	void virtual reset();
	void virtual setPosition(int key,int position);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RuleBasedBreakIterator_S_LookAheadResults(){
	}

}; // class RuleBasedBreakIterator_S_LookAheadResults
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedBreakIterator_S_LookAheadResults__

