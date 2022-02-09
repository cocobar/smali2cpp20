#ifndef __android_icu_impl_TrieBuilder__
#define __android_icu_impl_TrieBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TrieBuilder.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class TrieBuilder : public java::lang::Object {
protected:
	static int BMP_INDEX_LENGTH_;
	static int DATA_GRANULARITY_;
	static int INDEX_SHIFT_;
	static int MASK_;
	static int MAX_DATA_LENGTH_;
	static int MAX_INDEX_LENGTH_;
	static int OPTIONS_DATA_IS_32_BIT_;
	static int OPTIONS_INDEX_SHIFT_;
	static int OPTIONS_LATIN1_IS_LINEAR_;
	static int SHIFT_;
	static int SURROGATE_BLOCK_COUNT_;
	int m_dataCapacity_;
	int m_dataLength_;
	int m_indexLength_;
	std::shared_ptr<int[]> m_index_;
	bool m_isCompacted_;
	bool m_isLatin1Linear_;
	std::shared_ptr<int[]> m_map_;
	TrieBuilder();
	TrieBuilder(std::shared_ptr<android::icu::impl::TrieBuilder> table);
	static bool equal_int(std::shared_ptr<int[]> array,int start1,int start2,int length);
	static int findSameIndexBlock(std::shared_ptr<int[]> index,int indexLength,int otherBlock);
	void virtual findUnusedBlocks();
private:
	static int MAX_BUILD_TIME_DATA_LENGTH_;
public:
	static int DATA_BLOCK_LENGTH;
	bool virtual isInZeroBlock(int ch);
public:
	virtual ~TrieBuilder(){
	}

}; // class TrieBuilder
}; // namespace android::icu::impl

#endif //__android_icu_impl_TrieBuilder__

