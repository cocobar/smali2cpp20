#ifndef __android_icu_text_Edits_S_Iterator__
#define __android_icu_text_Edits_S_Iterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Edits$Iterator.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Edits_S_Iterator : public java::lang::Object {
protected:
private:
	std::shared_ptr<char[]> array;
	bool changed;
	bool coarse;
	int destIndex;
	int index;
	int length;
	int newLength_;
	int oldLength_;
	bool onlyChanges_;
	int remaining;
	int replIndex;
	int srcIndex;
	Edits_S_Iterator(std::shared_ptr<char[]> a,int len,bool oc,bool crs);
	bool virtual next(bool onlyChanges);
	bool virtual noNext();
	int virtual readLength(int head);
	void virtual updateIndexes();
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	Edits_S_Iterator(std::shared_ptr<char[]> a,int len,bool oc,bool crs,std::shared_ptr<android::icu::text::Edits_S_Iterator> _this4);
	int virtual destinationIndex();
	bool virtual findSourceIndex(int i);
	bool virtual hasChange();
	int virtual newLength();
	bool virtual next();
	int virtual oldLength();
	int virtual replacementIndex();
	int virtual sourceIndex();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::Edits_S_Iterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Edits_S_Iterator(){
	}

}; // class Edits_S_Iterator
}; // namespace android::icu::text

#endif //__android_icu_text_Edits_S_Iterator__

