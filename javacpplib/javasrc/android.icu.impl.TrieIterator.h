#ifndef __android_icu_impl_TrieIterator__
#define __android_icu_impl_TrieIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TrieIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie.h"
#include "android.icu.util.RangeValueIterator_S_Element.h"
#include "android.icu.util.RangeValueIterator.h"

namespace android::icu::impl{
class TrieIterator : public android::icu::util::RangeValueIterator {
protected:
	int virtual extract(int value);
private:
	static int BMP_INDEX_LENGTH_;
	static int DATA_BLOCK_LENGTH_;
	static int LEAD_SURROGATE_MIN_VALUE_;
	static int TRAIL_SURROGATE_COUNT_;
	static int TRAIL_SURROGATE_INDEX_BLOCK_LENGTH_;
	static int TRAIL_SURROGATE_MIN_VALUE_;
	int m_currentCodepoint_;
	int m_initialValue_;
	int m_nextBlockIndex_;
	int m_nextBlock_;
	int m_nextCodepoint_;
	int m_nextIndex_;
	int m_nextTrailIndexOffset_;
	int m_nextValue_;
	std::shared_ptr<android::icu::impl::Trie> m_trie_;
	bool virtual calculateNextBMPElement(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element);
	void virtual calculateNextSupplementaryElement(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element);
	bool virtual checkBlock(int currentValue);
	bool virtual checkBlockDetail(int currentValue);
	bool virtual checkNullNextTrailIndex();
	bool virtual checkTrailBlock(int currentValue);
	void virtual setResult(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element,int start,int limit,int value);
public:
	TrieIterator(std::shared_ptr<android::icu::impl::Trie> trie);
	bool virtual next(std::shared_ptr<android::icu::util::RangeValueIterator_S_Element> element);
	void virtual reset();
public:
	virtual ~TrieIterator(){
	}

}; // class TrieIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_TrieIterator__

