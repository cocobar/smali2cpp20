#ifndef __android_icu_impl_coll_UTF16CollationIterator__
#define __android_icu_impl_coll_UTF16CollationIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\UTF16CollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class UTF16CollationIterator : public android::icu::impl::coll::CollationIterator {
protected:
	int limit;
	int pos;
	std::shared_ptr<java::lang::CharSequence> seq;
	int start;
	void virtual backwardNumCodePoints(int num);
	void virtual forwardNumCodePoints(int num);
	char virtual handleGetTrailSurrogate();
	long long virtual handleNextCE32();
private:
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	UTF16CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d);
	UTF16CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d,bool numeric,std::shared_ptr<java::lang::CharSequence> s,int p);
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
			android::icu::impl::coll::UTF16CollationIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UTF16CollationIterator(){
	}

}; // class UTF16CollationIterator
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_UTF16CollationIterator__

