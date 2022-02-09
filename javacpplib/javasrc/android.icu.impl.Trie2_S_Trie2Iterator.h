#ifndef __android_icu_impl_Trie2_S_Trie2Iterator__
#define __android_icu_impl_Trie2_S_Trie2Iterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$Trie2Iterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_S_ValueMapper.h"
#include "android.icu.impl.Trie2.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
class Trie2_S_Trie2Iterator : public java::util::Iterator<android::icu::impl::Trie2_S_Range> {
protected:
private:
	bool doLeadSurrogates;
	bool doingCodePoints;
	int limitCP;
	std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> mapper;
	int nextStart;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> returnValue;
	int virtual rangeEndLS(char startingLS);
public:
	std::shared_ptr<android::icu::impl::Trie2> this_S_0;
	Trie2_S_Trie2Iterator(std::shared_ptr<android::icu::impl::Trie2> this_S_0,char leadSurrogate,std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> vm);
	Trie2_S_Trie2Iterator(std::shared_ptr<android::icu::impl::Trie2> this_S_0,std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> vm);
	bool virtual hasNext();
	std::shared_ptr<android::icu::impl::Trie2_S_Range> virtual next();
	void virtual remove();
public:
	virtual ~Trie2_S_Trie2Iterator(){
	}

}; // class Trie2_S_Trie2Iterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie2_S_Trie2Iterator__

