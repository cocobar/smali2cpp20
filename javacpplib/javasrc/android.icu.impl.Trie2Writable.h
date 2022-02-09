#ifndef __android_icu_impl_Trie2Writable__
#define __android_icu_impl_Trie2Writable__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2Writable.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_S_ValueWidth.h"
#include "android.icu.impl.Trie2.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.Trie2_32.h"

namespace android::icu::impl{
class Trie2Writable : public android::icu::impl::Trie2 {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_impl_Trie2_S_ValueWidthSwitchesValues;
	static int UNEWTRIE2_DATA_0800_OFFSET;
	static int UNEWTRIE2_DATA_NULL_OFFSET;
	static int UNEWTRIE2_DATA_START_OFFSET;
	static int UNEWTRIE2_INDEX_2_NULL_OFFSET;
	static int UNEWTRIE2_INDEX_2_START_OFFSET;
	static int UNEWTRIE2_INITIAL_DATA_LENGTH;
	static int UNEWTRIE2_MEDIUM_DATA_LENGTH;
	static int UTRIE2_MAX_DATA_LENGTH;
	static int UTRIE2_MAX_INDEX_LENGTH;
	bool UTRIE2_DEBUG;
	std::shared_ptr<int[]> data;
	int dataCapacity;
	int firstFreeBlock;
	std::shared_ptr<int[]> index1;
	std::shared_ptr<int[]> index2;
	int index2Length;
	int index2NullOffset;
	bool isCompacted;
	std::shared_ptr<int[]> map;
	static int _getandroid_icu_impl_Trie2_S_ValueWidthSwitchesValues();
	int virtual allocDataBlock(int copyBlock);
	int virtual allocIndex2Block();
	void virtual compactData();
	void virtual compactIndex2();
	void virtual compactTrie();
	bool virtual equal_int(std::shared_ptr<int[]> a,int s,int t,int length);
	void virtual fillBlock(int block,int start,int limit,int value,int initialValue,bool overwrite);
	int virtual findHighStart(int highValue);
	int virtual findSameDataBlock(int dataLength,int otherBlock,int blockLength);
	int virtual findSameIndex2Block(int index2Length,int otherBlock);
	void virtual freeze(std::shared_ptr<android::icu::impl::Trie2> dest,std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> valueBits);
	int virtual get(int c,bool fromLSCP);
	int virtual getDataBlock(int c,bool forLSCP);
	int virtual getIndex2Block(int c,bool forLSCP);
	void virtual init(int initialValueP,int errorValueP);
	bool virtual isInNullBlock(int c,bool forLSCP);
	bool virtual isWritableBlock(int block);
	void virtual releaseDataBlock(int block);
	std::shared_ptr<android::icu::impl::Trie2Writable> virtual set(int c,bool forLSCP,int value);
	void virtual setIndex2Entry(int i2,int block);
	void virtual uncompact();
	void virtual writeBlock(int block,int value);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	Trie2Writable(int initialValueP,int errorValueP);
	Trie2Writable(std::shared_ptr<android::icu::impl::Trie2> source);
	int virtual get(int codePoint);
	int virtual getFromU16SingleLead(char c);
	std::shared_ptr<android::icu::impl::Trie2Writable> virtual set(int c,int value);
	std::shared_ptr<android::icu::impl::Trie2Writable> virtual setForLeadSurrogateCodeUnit(char codeUnit,int value);
	std::shared_ptr<android::icu::impl::Trie2Writable> virtual setRange(int cVar1,int end,int value,bool overwrite);
	std::shared_ptr<android::icu::impl::Trie2Writable> virtual setRange(std::shared_ptr<android::icu::impl::Trie2_S_Range> range,bool overwrite);
	std::shared_ptr<android::icu::impl::Trie2_16> virtual toTrie2_16();
	std::shared_ptr<android::icu::impl::Trie2_32> virtual toTrie2_32();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Trie2Writable::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Trie2Writable(){
	}

}; // class Trie2Writable
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie2Writable__

