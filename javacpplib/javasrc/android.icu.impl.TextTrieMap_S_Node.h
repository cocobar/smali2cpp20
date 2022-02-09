#ifndef __android_icu_impl_TextTrieMap_S_Node__
#define __android_icu_impl_TextTrieMap_S_Node__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TextTrieMap$Node.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_CharIterator.h"
#include "android.icu.impl.TextTrieMap.h"
#include "java.lang.Object.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

namespace android::icu::impl{
class TextTrieMap_S_Node : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::List<android::icu::impl::TextTrieMap<V>.Node>> _children;
	std::shared_ptr<char[]> _text;
	std::shared_ptr<java::util::List<V>> _values;
	TextTrieMap_S_Node(std::shared_ptr<android::icu::impl::TextTrieMap> this_S_0);
	TextTrieMap_S_Node(std::shared_ptr<android::icu::impl::TextTrieMap> this_S_0,std::shared_ptr<char[]> text,std::shared_ptr<java::util::List<V>> values,std::shared_ptr<java::util::List<android::icu::impl::TextTrieMap<V>.Node>> children);
	void virtual add(std::shared_ptr<char[]> text,int offset,std::shared_ptr<V> value);
	std::shared_ptr<java::util::List<V>> virtual addValue(std::shared_ptr<java::util::List<V>> list,std::shared_ptr<V> value);
	int virtual lenMatches(std::shared_ptr<char[]> text,int offset);
	bool virtual matchFollowing(std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr);
	void virtual split(int offset);
public:
	std::shared_ptr<android::icu::impl::TextTrieMap> this_S_0;
	TextTrieMap_S_Node(std::shared_ptr<android::icu::impl::TextTrieMap> this_S_0,std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> _this1);
	void virtual add(std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr,std::shared_ptr<V> value);
	std::shared_ptr<android::icu::impl::TextTrieMap<V>.Node> virtual findMatch(std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr);
	std::shared_ptr<java::util::Iterator<V>> virtual values();
public:
	virtual ~TextTrieMap_S_Node(){
	}

}; // class TextTrieMap_S_Node
}; // namespace android::icu::impl

#endif //__android_icu_impl_TextTrieMap_S_Node__

