#ifndef __android_icu_impl_coll_FCDIterCollationIterator__
#define __android_icu_impl_coll_FCDIterCollationIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\FCDIterCollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.FCDIterCollationIterator_S_State.h"
#include "android.icu.impl.coll.IterCollationIterator.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl::coll{
class FCDIterCollationIterator : public android::icu::impl::coll::IterCollationIterator {
protected:
	void virtual backwardNumCodePoints(int num);
	void virtual forwardNumCodePoints(int num);
	char virtual handleGetTrailSurrogate();
	long long virtual handleNextCE32();
private:
	int limit;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl;
	std::shared_ptr<java::lang::StringBuilder> normalized;
	int pos;
	std::shared_ptr<java::lang::StringBuilder> s;
	int start;
	std::shared_ptr<android::icu::impl::coll::FCDIterCollationIterator_S_State> state;
	bool virtual nextSegment();
	void virtual normalize(std::shared_ptr<java::lang::CharSequence> s);
	bool virtual previousSegment();
	void virtual switchToBackward();
	void virtual switchToForward();
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	FCDIterCollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> data,bool numeric,std::shared_ptr<android::icu::text::UCharacterIterator> ui,int startIndex);
	int virtual getOffset();
	int virtual nextCodePoint();
	int virtual previousCodePoint();
	void virtual resetToOffset(int newOffset);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::FCDIterCollationIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~FCDIterCollationIterator(){
	}

}; // class FCDIterCollationIterator
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_FCDIterCollationIterator__

