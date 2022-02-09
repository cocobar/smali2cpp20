#ifndef __android_icu_impl_IntTrie__
#define __android_icu_impl_IntTrie__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\IntTrie.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "android.icu.impl.Trie.h"
#include "java.lang.Object.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class IntTrie : public android::icu::impl::Trie {
protected:
	int virtual getInitialValue();
	int virtual getSurrogateOffset(char lead,char trail);
	int virtual getValue(int index);
	void virtual unserialize(std::shared_ptr<java::nio::ByteBuffer> bytes);
private:
	std::shared_ptr<int[]> m_data_;
	int m_initialValue_;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	IntTrie(int initialValue,int leadUnitValue,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate);
	IntTrie(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate);
	IntTrie(std::shared_ptr<char[]> index,std::shared_ptr<int[]> data,int initialvalue,int options,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> datamanipulate);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual getBMPValue(char ch);
	int virtual getCodePointValue(int ch);
	int virtual getLatin1LinearValue(char ch);
	int virtual getLeadValue(char ch);
	int virtual getSurrogateValue(char lead,char trail);
	int virtual getTrailValue(int leadvalue,char trail);
	int virtual hashCode();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::IntTrie::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~IntTrie(){
	}

}; // class IntTrie
}; // namespace android::icu::impl

#endif //__android_icu_impl_IntTrie__

