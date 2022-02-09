#ifndef __android_icu_impl_StringRange__
#define __android_icu_impl_StringRange__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\StringRange.smali
#include "java2ctype.h"
#include "android.icu.impl.StringRange_S_Adder.h"
#include "android.icu.impl.StringRange_S_Ranges.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collection.h"
#include "java.util.Comparator.h"
#include "java.util.LinkedList.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class StringRange : public java::lang::Object {
protected:
private:
	static bool DEBUG;
	static void add(int endIndex,int startOffset,std::shared_ptr<int[]> starts,std::shared_ptr<int[]> ends,std::shared_ptr<java::lang::StringBuilder> builder,std::shared_ptr<java::util::Collection<java::lang::String>> output);
	static std::shared_ptr<java::util::LinkedList<android::icu::impl::StringRange_S_Ranges>> compact(int size,std::shared_ptr<java::util::Set<android::icu::impl::StringRange_S_Ranges>> inputRanges);
public:
	static std::shared_ptr<java::util::Comparator<int[]>> COMPARE_INT_ARRAYS;
	static void static_cinit();
	StringRange();
	static void compact(std::shared_ptr<java::util::Set<java::lang::String>> source,std::shared_ptr<android::icu::impl::StringRange_S_Adder> adder,bool shorterPairs);
	static void compact(std::shared_ptr<java::util::Set<java::lang::String>> source,std::shared_ptr<android::icu::impl::StringRange_S_Adder> adder,bool shorterPairs,bool moreCompact);
	static std::shared_ptr<java::util::Collection<java::lang::String>> expand(std::shared_ptr<java::lang::String> start,std::shared_ptr<java::lang::String> end,bool requireSameLength,std::shared_ptr<java::util::Collection<java::lang::String>> output);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::StringRange::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringRange(){
	}

}; // class StringRange
}; // namespace android::icu::impl

#endif //__android_icu_impl_StringRange__

