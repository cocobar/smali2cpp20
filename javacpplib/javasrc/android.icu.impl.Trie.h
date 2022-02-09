#ifndef __android_icu_impl_Trie__
#define __android_icu_impl_Trie__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "java.lang.Object.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class Trie : public java::lang::Object {
protected:
	static int BMP_INDEX_LENGTH;
	static int DATA_BLOCK_LENGTH;
	static int HEADER_LENGTH_;
	static int HEADER_OPTIONS_DATA_IS_32_BIT_;
	static int HEADER_OPTIONS_INDEX_SHIFT_;
	static int HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_;
	static int HEADER_SIGNATURE_;
	static int INDEX_STAGE_1_SHIFT_;
	static int INDEX_STAGE_2_SHIFT_;
	static int INDEX_STAGE_3_MASK_;
	static int LEAD_INDEX_OFFSET_;
	static int SURROGATE_BLOCK_BITS;
	static int SURROGATE_BLOCK_COUNT;
	static int SURROGATE_MASK_;
	int m_dataLength_;
	std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> m_dataManipulate_;
	int m_dataOffset_;
	std::shared_ptr<char[]> m_index_;
	Trie(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate);
	Trie(std::shared_ptr<char[]> index,int options,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate);
	int virtual getBMPOffset(char ch);
	int virtual getCodePointOffset(int ch);
	int getInitialValue() = 0;
	int virtual getLeadOffset(char ch);
	int virtual getRawOffset(int offset,char ch);
	int getSurrogateOffset(char var0,char var1) = 0;
	int getValue(int var0) = 0;
	bool virtual isCharTrie();
	bool virtual isIntTrie();
	void virtual unserialize(std::shared_ptr<java::nio::ByteBuffer> bytes);
private:
	static int HEADER_OPTIONS_SHIFT_MASK_;
	bool m_isLatin1Linear_;
	int m_options_;
	bool virtual checkHeader(int signature);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual getSerializedDataSize();
	int virtual hashCode();
	bool virtual isLatin1Linear();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Trie::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Trie(){
	}

}; // class Trie
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie__

