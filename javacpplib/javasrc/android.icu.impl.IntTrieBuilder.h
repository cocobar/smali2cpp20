#ifndef __android_icu_impl_IntTrieBuilder__
#define __android_icu_impl_IntTrieBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\IntTrieBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrie.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "android.icu.impl.TrieBuilder_S_DataManipulate.h"
#include "android.icu.impl.TrieBuilder.h"
#include "java.io.OutputStream.h"

namespace android::icu::impl{
class IntTrieBuilder : public android::icu::impl::TrieBuilder {
protected:
	std::shared_ptr<int[]> m_data_;
	int m_initialValue_;
private:
	int m_leadUnitValue_;
	int virtual allocDataBlock();
	void virtual compact(bool overlap);
	void virtual fillBlock(int cVar1,int start,int limit,int value,bool overwrite);
	static int findSameDataBlock(std::shared_ptr<int[]> data,int dataLength,int otherBlock,int step);
	void virtual fold(std::shared_ptr<android::icu::impl::TrieBuilder_S_DataManipulate> manipulate);
	int virtual getDataBlock(int ch);
public:
	IntTrieBuilder(std::shared_ptr<android::icu::impl::IntTrieBuilder> table);
	IntTrieBuilder(std::shared_ptr<int[]> aliasdata,int maxdatalength,int initialvalue,int leadunitvalue,bool latin1linear);
	int virtual getValue(int ch);
	int virtual getValue(int ch,std::shared_ptr<bool[]> inBlockZero);
	int virtual serialize(std::shared_ptr<java::io::OutputStream> os,bool reduceTo16Bits,std::shared_ptr<android::icu::impl::TrieBuilder_S_DataManipulate> datamanipulate);
	std::shared_ptr<android::icu::impl::IntTrie> virtual serialize(std::shared_ptr<android::icu::impl::TrieBuilder_S_DataManipulate> datamanipulate,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> triedatamanipulate);
	bool virtual setRange(int cVar0,int limit,int value,bool overwrite);
	bool virtual setValue(int ch,int value);
public:
	virtual ~IntTrieBuilder(){
	}

}; // class IntTrieBuilder
}; // namespace android::icu::impl

#endif //__android_icu_impl_IntTrieBuilder__

