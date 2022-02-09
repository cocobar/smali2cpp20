#ifndef __android_icu_text_CollationElementIterator_S_MaxExpSink__
#define __android_icu_text_CollationElementIterator_S_MaxExpSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CollationElementIterator$MaxExpSink.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.ContractionsAndExpansions_S_CESink.h"
#include "java.lang.Integer.h"
#include "java.util.Map.h"

namespace android::icu::text{
class CollationElementIterator_S_MaxExpSink : public android::icu::impl::coll::ContractionsAndExpansions_S_CESink {
protected:
private:
	std::shared_ptr<java::util::Map<java::lang::Integer,java::lang::Integer>> maxExpansions;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationElementIterator_S_MaxExpSink(std::shared_ptr<java::util::Map<java::lang::Integer,java::lang::Integer>> h);
	void virtual handleCE(long long ce);
	void virtual handleExpansion(std::shared_ptr<long long[]> ces,int start,int length);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CollationElementIterator_S_MaxExpSink::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationElementIterator_S_MaxExpSink(){
	}

}; // class CollationElementIterator_S_MaxExpSink
}; // namespace android::icu::text

#endif //__android_icu_text_CollationElementIterator_S_MaxExpSink__

