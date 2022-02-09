#ifndef __android_icu_impl_Trie2_S_CharSequenceIterator__
#define __android_icu_impl_Trie2_S_CharSequenceIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$CharSequenceIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_CharSequenceValues.h"
#include "android.icu.impl.Trie2.h"
#include "java.lang.CharSequence.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
class Trie2_S_CharSequenceIterator : public java::util::Iterator<android::icu::impl::Trie2_S_CharSequenceValues> {
protected:
private:
	std::shared_ptr<android::icu::impl::Trie2_S_CharSequenceValues> fResults;
	int index;
	std::shared_ptr<java::lang::CharSequence> text;
	int textLength;
public:
	std::shared_ptr<android::icu::impl::Trie2> this_S_0;
	Trie2_S_CharSequenceIterator(std::shared_ptr<android::icu::impl::Trie2> this_S_0,std::shared_ptr<java::lang::CharSequence> t,int index);
	bool virtual hasNext();
	bool virtual hasPrevious();
	std::shared_ptr<android::icu::impl::Trie2_S_CharSequenceValues> virtual next();
	std::shared_ptr<android::icu::impl::Trie2_S_CharSequenceValues> virtual previous();
	void virtual remove();
	void virtual set(int i);
public:
	virtual ~Trie2_S_CharSequenceIterator(){
	}

}; // class Trie2_S_CharSequenceIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie2_S_CharSequenceIterator__

