#ifndef __android_icu_impl_coll_CollationIterator_S_SkippedState__
#define __android_icu_impl_coll_CollationIterator_S_SkippedState__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationIterator$SkippedState.smali
#include "java2ctype.h"
#include "android.icu.util.CharsTrie_S_State.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.Object.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl::coll{
class CollationIterator_S_SkippedState : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::StringBuilder> newBuffer;
	std::shared_ptr<java::lang::StringBuilder> oldBuffer;
	int pos;
	int skipLengthAtMatch;
	std::shared_ptr<android::icu::util::CharsTrie_S_State> state;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationIterator_S_SkippedState();
	int virtual backwardNumCodePoints(int n);
	void virtual clear();
	bool virtual hasNext();
	void virtual incBeyond();
	bool virtual isEmpty();
	int virtual next();
	void virtual recordMatch();
	void virtual replaceMatch();
	void virtual resetToTrieState(std::shared_ptr<android::icu::util::CharsTrie> trie);
	void virtual saveTrieState(std::shared_ptr<android::icu::util::CharsTrie> trie);
	void virtual setFirstSkipped(int c);
	void virtual skip(int c);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationIterator_S_SkippedState::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationIterator_S_SkippedState(){
	}

}; // class CollationIterator_S_SkippedState
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationIterator_S_SkippedState__

