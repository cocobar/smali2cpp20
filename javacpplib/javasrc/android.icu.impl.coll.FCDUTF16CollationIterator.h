#ifndef __android_icu_impl_coll_FCDUTF16CollationIterator__
#define __android_icu_impl_coll_FCDUTF16CollationIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\FCDUTF16CollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.UTF16CollationIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl::coll{
class FCDUTF16CollationIterator : public android::icu::impl::coll::UTF16CollationIterator {
protected:
	void virtual backwardNumCodePoints(int num);
	void virtual forwardNumCodePoints(int num);
	long long virtual handleNextCE32();
private:
	static int rawStart;
	int checkDir;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl;
	std::shared_ptr<java::lang::StringBuilder> normalized;
	int rawLimit;
	std::shared_ptr<java::lang::CharSequence> rawSeq;
	int segmentLimit;
	int segmentStart;
	void virtual nextSegment();
	void virtual normalize(int from,int to);
	void virtual previousSegment();
	void virtual switchToBackward();
	void virtual switchToForward();
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	FCDUTF16CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d);
	FCDUTF16CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> data,bool numeric,std::shared_ptr<java::lang::CharSequence> s,int p);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual getOffset();
	int virtual hashCode();
	int virtual nextCodePoint();
	int virtual previousCodePoint();
	void virtual resetToOffset(int newOffset);
	void virtual setText(bool numeric,std::shared_ptr<java::lang::CharSequence> s,int p);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::FCDUTF16CollationIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~FCDUTF16CollationIterator(){
	}

}; // class FCDUTF16CollationIterator
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_FCDUTF16CollationIterator__

