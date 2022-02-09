#ifndef __android_icu_impl_coll_IterCollationIterator__
#define __android_icu_impl_coll_IterCollationIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\IterCollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.text.UCharacterIterator.h"

namespace android::icu::impl::coll{
class IterCollationIterator : public android::icu::impl::coll::CollationIterator {
protected:
	std::shared_ptr<android::icu::text::UCharacterIterator> iter;
	void virtual backwardNumCodePoints(int num);
	void virtual forwardNumCodePoints(int num);
	char virtual handleGetTrailSurrogate();
	long long virtual handleNextCE32();
private:
public:
	IterCollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d,bool numeric,std::shared_ptr<android::icu::text::UCharacterIterator> ui);
	int virtual getOffset();
	int virtual nextCodePoint();
	int virtual previousCodePoint();
	void virtual resetToOffset(int newOffset);
public:
	virtual ~IterCollationIterator(){
	}

}; // class IterCollationIterator
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_IterCollationIterator__

