#ifndef __android_icu_impl_CharTrie__
#define __android_icu_impl_CharTrie__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CharTrie.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "android.icu.impl.Trie.h"
#include "java.lang.Object.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class CharTrie : public android::icu::impl::Trie {
protected:
	int virtual getInitialValue();
	int virtual getSurrogateOffset(char lead,char trail);
	int virtual getValue(int index);
	void virtual unserialize(std::shared_ptr<java::nio::ByteBuffer> bytes);
private:
	std::shared_ptr<char[]> m_data_;
	char m_initialValue_;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CharTrie(int initialValue,int leadUnitValue,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate);
	CharTrie(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	char virtual getBMPValue(char ch);
	char virtual getCodePointValue(int ch);
	char virtual getLatin1LinearValue(char ch);
	char virtual getLeadValue(char ch);
	char virtual getSurrogateValue(char lead,char trail);
	char virtual getTrailValue(int leadvalue,char trail);
	int virtual hashCode();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CharTrie::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CharTrie(){
	}

}; // class CharTrie
}; // namespace android::icu::impl

#endif //__android_icu_impl_CharTrie__

