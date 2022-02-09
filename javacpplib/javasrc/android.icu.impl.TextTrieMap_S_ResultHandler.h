#ifndef __android_icu_impl_TextTrieMap_S_ResultHandler__
#define __android_icu_impl_TextTrieMap_S_ResultHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TextTrieMap$ResultHandler.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
template <typename V>
class TextTrieMap_S_ResultHandler : public java::lang::Object {
protected:
private:
public:
	bool handlePrefixMatch(int var0,std::shared_ptr<java::util::Iterator<V>> var1);
	TextTrieMap_S_ResultHandler(){ };
	virtual ~TextTrieMap_S_ResultHandler(){ };

}; // class TextTrieMap_S_ResultHandler
}; // namespace android::icu::impl
// .method public abstract handlePrefixMatch(ILjava/util/Iterator;)Z
template <typename V>
bool android::icu::impl::TextTrieMap_S_ResultHandler<V>::handlePrefixMatch(int var0,std::shared_ptr<java::util::Iterator<V>> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 029        value = {
	// 030            "(I",
	// 031            "Ljava/util/Iterator",
	// 032            "<TV;>;)Z"
	// 033        }
	// 034    .end annotation

}

#endif //__android_icu_impl_TextTrieMap_S_ResultHandler__

