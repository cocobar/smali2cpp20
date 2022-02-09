#ifndef __android_icu_text_Edits__
#define __android_icu_text_Edits__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Edits.smali
#include "java2ctype.h"
#include "android.icu.text.Edits_S_Iterator.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Edits : public java::lang::Object {
protected:
private:
	static int LENGTH_IN_1TRAIL;
	static int LENGTH_IN_2TRAIL;
	static int MAX_SHORT_CHANGE;
	static int MAX_SHORT_CHANGE_LENGTH;
	static int MAX_SHORT_WIDTH;
	static int MAX_UNCHANGED;
	static int MAX_UNCHANGED_LENGTH;
	static int STACK_CAPACITY;
	std::shared_ptr<char[]> array;
	int delta;
	int length;
	void virtual append(int r);
	bool virtual growArray();
	int virtual lastUnit();
	void virtual setLastUnit(int last);
public:
	Edits();
	void virtual addReplace(int oldLength,int newLength);
	void virtual addUnchanged(int cVar3);
	std::shared_ptr<android::icu::text::Edits_S_Iterator> virtual getCoarseChangesIterator();
	std::shared_ptr<android::icu::text::Edits_S_Iterator> virtual getCoarseIterator();
	std::shared_ptr<android::icu::text::Edits_S_Iterator> virtual getFineChangesIterator();
	std::shared_ptr<android::icu::text::Edits_S_Iterator> virtual getFineIterator();
	bool virtual hasChanges();
	int virtual lengthDelta();
	void virtual reset();
public:
	virtual ~Edits(){
	}

}; // class Edits
}; // namespace android::icu::text

#endif //__android_icu_text_Edits__

