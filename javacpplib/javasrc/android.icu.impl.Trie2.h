#ifndef __android_icu_impl_Trie2__
#define __android_icu_impl_Trie2__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_CharSequenceIterator.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_S_UTrie2Header.h"
#include "android.icu.impl.Trie2_S_ValueMapper.h"
#include "java.io.DataOutputStream.h"
#include "java.io.InputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
class Trie2 : public java::lang::Iterable<android::icu::impl::Trie2_S_Range> {
protected:
	int virtual serializeHeader(std::shared_ptr<java::io::DataOutputStream> dos);
private:
	static std::shared_ptr<int[]> _android_icu_impl_Trie2_S_ValueWidthSwitchesValues;
	static std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> defaultValueMapper;
	static int _getandroid_icu_impl_Trie2_S_ValueWidthSwitchesValues();
	static int hashByte(int h,int b);
	static int hashInt(int h,int i);
	static int hashUChar32(int h,int c);
	static int initHash();
public:
	static int UNEWTRIE2_INDEX_1_LENGTH;
	static int UNEWTRIE2_INDEX_GAP_LENGTH;
	static int UNEWTRIE2_INDEX_GAP_OFFSET;
	static int UNEWTRIE2_MAX_DATA_LENGTH;
	static int UNEWTRIE2_MAX_INDEX_2_LENGTH;
	static int UTRIE2_BAD_UTF8_DATA_OFFSET;
	static int UTRIE2_CP_PER_INDEX_1_ENTRY;
	static int UTRIE2_DATA_BLOCK_LENGTH;
	static int UTRIE2_DATA_GRANULARITY;
	static int UTRIE2_DATA_MASK;
	static int UTRIE2_DATA_START_OFFSET;
	static int UTRIE2_INDEX_1_OFFSET;
	static int UTRIE2_INDEX_2_BLOCK_LENGTH;
	static int UTRIE2_INDEX_2_BMP_LENGTH;
	static int UTRIE2_INDEX_2_MASK;
	static int UTRIE2_INDEX_2_OFFSET;
	static int UTRIE2_INDEX_SHIFT;
	static int UTRIE2_LSCP_INDEX_2_LENGTH;
	static int UTRIE2_LSCP_INDEX_2_OFFSET;
	static int UTRIE2_MAX_INDEX_1_LENGTH;
	static int UTRIE2_OMITTED_BMP_INDEX_1_LENGTH;
	static int UTRIE2_OPTIONS_VALUE_BITS_MASK;
	static int UTRIE2_SHIFT_1;
	static int UTRIE2_SHIFT_1_2;
	static int UTRIE2_SHIFT_2;
	static int UTRIE2_UTF8_2B_INDEX_2_LENGTH;
	static int UTRIE2_UTF8_2B_INDEX_2_OFFSET;
	int data16;
	std::shared_ptr<int[]> data32;
	int dataLength;
	int dataNullOffset;
	int errorValue;
	int fHash;
	std::shared_ptr<android::icu::impl::Trie2_S_UTrie2Header> header;
	int highStart;
	int highValueIndex;
	std::shared_ptr<char[]> index;
	int index2NullOffset;
	int indexLength;
	int initialValue;
	static int _wrap0(int h,int b);
	static int _wrap1(int h,int i);
	static int _wrap2(int h,int c);
	static int _wrap3();
	static void static_cinit();
	Trie2();
	static std::shared_ptr<android::icu::impl::Trie2> createFromSerialized(std::shared_ptr<java::nio::ByteBuffer> bytes);
	static int getVersion(std::shared_ptr<java::io::InputStream> is,bool littleEndianOk);
	std::shared_ptr<android::icu::impl::Trie2_S_CharSequenceIterator> virtual charSequenceIterator(std::shared_ptr<java::lang::CharSequence> text,int index);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int get(int var0) = 0;
	int getFromU16SingleLead(char var0) = 0;
	int virtual hashCode();
	std::shared_ptr<java::util::Iterator<android::icu::impl::Trie2_S_Range>> virtual iterator();
	std::shared_ptr<java::util::Iterator<android::icu::impl::Trie2_S_Range>> virtual iterator(std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> mapper);
	std::shared_ptr<java::util::Iterator<android::icu::impl::Trie2_S_Range>> virtual iteratorForLeadSurrogate(char lead);
	std::shared_ptr<java::util::Iterator<android::icu::impl::Trie2_S_Range>> virtual iteratorForLeadSurrogate(char lead,std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> mapper);
	int virtual rangeEnd(int start,int limitp,int val);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Trie2::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Trie2(){
	}

}; // class Trie2
}; // namespace android::icu::impl

#endif //__android_icu_impl_Trie2__

