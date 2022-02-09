#ifndef __android_icu_impl_BMPSet__
#define __android_icu_impl_BMPSet__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\BMPSet.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.util.OutputInt.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class BMPSet : public java::lang::Object {
protected:
private:
	std::shared_ptr<int[]> bmpBlockBits;
	std::shared_ptr<bool[]> latin1Contains;
	std::shared_ptr<int[]> list;
	std::shared_ptr<int[]> list4kStarts;
	int listLength;
	std::shared_ptr<int[]> table7FF;
	bool virtual containsSlow(int c,int lo,int hi);
	int virtual findCodePoint(int c,int lo,int hi);
	void virtual initBits();
	static void set32x64Bits(std::shared_ptr<int[]> table,int start,int limit);
public:
	static bool _assertionsDisabled;
	static int U16_SURROGATE_OFFSET;
	static void static_cinit();
	BMPSet(std::shared_ptr<android::icu::impl::BMPSet> otherBMPSet,std::shared_ptr<int[]> newParentList,int newParentListLength);
	BMPSet(std::shared_ptr<int[]> parentList,int parentListLength);
	bool virtual contains(int c);
	int virtual span(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition,std::shared_ptr<android::icu::util::OutputInt> outCount);
	int virtual spanBack(std::shared_ptr<java::lang::CharSequence> s,int limit,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::BMPSet::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BMPSet(){
	}

}; // class BMPSet
}; // namespace android::icu::impl

#endif //__android_icu_impl_BMPSet__

