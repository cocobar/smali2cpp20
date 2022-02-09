#ifndef __android_icu_impl_TextTrieMap_S_LongestMatchHandler__
#define __android_icu_impl_TextTrieMap_S_LongestMatchHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TextTrieMap$LongestMatchHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_ResultHandler.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
template <typename V>
class TextTrieMap_S_LongestMatchHandler : public android::icu::impl::TextTrieMap_S_ResultHandler<V> {
protected:
private:
	int length;
	std::shared_ptr<java::util::Iterator<V>> matches;
	TextTrieMap_S_LongestMatchHandler();
public:
	TextTrieMap_S_LongestMatchHandler(std::shared_ptr<android::icu::impl::TextTrieMap_S_LongestMatchHandler<V>> _this0);
	int getMatchLength();
	std::shared_ptr<java::util::Iterator<V>> getMatches();
	bool handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<V>> values);
public:
	virtual ~TextTrieMap_S_LongestMatchHandler(){
	}

}; // class TextTrieMap_S_LongestMatchHandler
}; // namespace android::icu::impl
// .method private constructor <init>()V
template <typename V>
android::icu::impl::TextTrieMap_S_LongestMatchHandler<V>::TextTrieMap_S_LongestMatchHandler()
{
	
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$LongestMatchHandler;, "Landroid/icu/impl/TextTrieMap$LongestMatchHandler<TV;>;"
	// 051    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->matches = 0x0;
	this->length = 0x0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/TextTrieMap$LongestMatchHandler;)V
template <typename V>
android::icu::impl::TextTrieMap_S_LongestMatchHandler<V>::TextTrieMap_S_LongestMatchHandler(std::shared_ptr<android::icu::impl::TextTrieMap_S_LongestMatchHandler<V>> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/TextTrieMap$LongestMatchHandler;
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$LongestMatchHandler;, "Landroid/icu/impl/TextTrieMap$LongestMatchHandler<TV;>;"
	// 073    invoke-direct {p0}, Landroid/icu/impl/TextTrieMap$LongestMatchHandler;-><init>()V
	return;

}
// .method public getMatchLength()I
template <typename V>
int android::icu::impl::TextTrieMap_S_LongestMatchHandler<V>::getMatchLength()
{
	
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$LongestMatchHandler;, "Landroid/icu/impl/TextTrieMap$LongestMatchHandler<TV;>;"
	return this->length;

}
// .method public getMatches()Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator<V>> android::icu::impl::TextTrieMap_S_LongestMatchHandler<V>::getMatches()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 094        value = {
	// 095            "()",
	// 096            "Ljava/util/Iterator",
	// 097            "<TV;>;"
	// 098        }
	// 099    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$LongestMatchHandler;, "Landroid/icu/impl/TextTrieMap$LongestMatchHandler<TV;>;"
	return this->matches;

}
// .method public handlePrefixMatch(ILjava/util/Iterator;)Z
template <typename V>
bool android::icu::impl::TextTrieMap_S_LongestMatchHandler<V>::handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<V>> values)
{
	
	//    .param p1, "matchLength"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 113        value = {
	// 114            "(I",
	// 115            "Ljava/util/Iterator",
	// 116            "<TV;>;)Z"
	// 117        }
	// 118    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$LongestMatchHandler;, "Landroid/icu/impl/TextTrieMap$LongestMatchHandler<TV;>;"
	//    .local p2, "values":Ljava/util/Iterator;, "Ljava/util/Iterator<TV;>;"
	if ( matchLength <= this->length )
		goto label_cond_8;
	this->length = matchLength;
	this->matches = values;
	label_cond_8:
	return 0x1;

}

#endif //__android_icu_impl_TextTrieMap_S_LongestMatchHandler__

