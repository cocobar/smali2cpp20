#ifndef __android_icu_impl_TextTrieMap__
#define __android_icu_impl_TextTrieMap__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TextTrieMap.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_CharIterator.h"
#include "android.icu.impl.TextTrieMap_S_LongestMatchHandler.h"
#include "android.icu.impl.TextTrieMap_S_Node.h"
#include "android.icu.impl.TextTrieMap_S_ResultHandler.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
template <typename V>
class TextTrieMap : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::impl::TextTrieMap<V>.Node> _root;
	void find(std::shared_ptr<android::icu::impl::TextTrieMap<V>.Node> node,std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr,std::shared_ptr<android::icu::impl::TextTrieMap_S_ResultHandler<V>> handler);
	static char subArray(std::shared_ptr<char[]> array,int start);
	static char subArray(std::shared_ptr<char[]> array,int start,int limit);
	static char toCharArray(std::shared_ptr<java::lang::CharSequence> text);
public:
	bool _ignoreCase;
	static char _wrap0(std::shared_ptr<char[]> array,int start);
	static char _wrap1(std::shared_ptr<char[]> array,int start,int limit);
	static char _wrap2(std::shared_ptr<java::lang::CharSequence> text);
	TextTrieMap(bool ignoreCase);
	void find(std::shared_ptr<java::lang::CharSequence> text,int offset,std::shared_ptr<android::icu::impl::TextTrieMap_S_ResultHandler<V>> handler);
	void find(std::shared_ptr<java::lang::CharSequence> text,std::shared_ptr<android::icu::impl::TextTrieMap_S_ResultHandler<V>> handler);
	std::shared_ptr<java::util::Iterator<V>> get(std::shared_ptr<java::lang::CharSequence> text,int start);
	std::shared_ptr<java::util::Iterator<V>> get(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<int[]> matchLen);
	std::shared_ptr<java::util::Iterator<V>> get(std::shared_ptr<java::lang::String> text);
	std::shared_ptr<android::icu::impl::TextTrieMap<V>> put(std::shared_ptr<java::lang::CharSequence> text,std::shared_ptr<V> val);
public:
	virtual ~TextTrieMap(){
	}

}; // class TextTrieMap
}; // namespace android::icu::impl
// .method static synthetic -wrap0([CI)[C
template <typename V>
char android::icu::impl::TextTrieMap<V>::_wrap0(std::shared_ptr<char[]> array,int start)
{
	
	//    .param p0, "array"    # [C
	//    .param p1, "start"    # I
	return android::icu::impl::TextTrieMap<V>::subArray(array, start);

}
// .method static synthetic -wrap1([CII)[C
template <typename V>
char android::icu::impl::TextTrieMap<V>::_wrap1(std::shared_ptr<char[]> array,int start,int limit)
{
	
	//    .param p0, "array"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	return android::icu::impl::TextTrieMap<V>::subArray(array, start, limit);

}
// .method static synthetic -wrap2(Ljava/lang/CharSequence;)[C
template <typename V>
char android::icu::impl::TextTrieMap<V>::_wrap2(std::shared_ptr<java::lang::CharSequence> text)
{
	
	//    .param p0, "text"    # Ljava/lang/CharSequence;
	return android::icu::impl::TextTrieMap<V>::toCharArray(text);

}
// .method public constructor <init>(Z)V
template <typename V>
android::icu::impl::TextTrieMap<V>::TextTrieMap(bool ignoreCase)
{
	
	std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> cVar0;
	
	//    .param p1, "ignoreCase"    # Z
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	// 086    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::TextTrieMap_S_Node>(this, 0x0);
	this->_root = cVar0;
	this->_ignoreCase = ignoreCase;
	return;

}
// .method private declared-synchronized find(Landroid/icu/impl/TextTrieMap$Node;Landroid/icu/impl/TextTrieMap$CharIterator;Landroid/icu/impl/TextTrieMap$ResultHandler;)V
template <typename V>
void android::icu::impl::TextTrieMap<V>::find(std::shared_ptr<android::icu::impl::TextTrieMap<V>.Node> node,std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr,std::shared_ptr<android::icu::impl::TextTrieMap_S_ResultHandler<V>> handler)
{
	
	std::shared_ptr<java::util::Iterator> values;
	std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> nextMatch;
	
	//    .param p2, "chitr"    # Landroid/icu/impl/TextTrieMap$CharIterator;
	//    .annotation system Ldalvik/annotation/Signature;
	// 108        value = {
	// 109            "(",
	// 110            "Landroid/icu/impl/TextTrieMap",
	// 111            "<TV;>.Node;",
	// 112            "Landroid/icu/impl/TextTrieMap$CharIterator;",
	// 113            "Landroid/icu/impl/TextTrieMap$ResultHandler",
	// 114            "<TV;>;)V"
	// 115        }
	// 116    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	//    .local p1, "node":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	//    .local p3, "handler":Landroid/icu/impl/TextTrieMap$ResultHandler;, "Landroid/icu/impl/TextTrieMap$ResultHandler<TV;>;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	values = node->values();
	//    .local v1, "values":Ljava/util/Iterator;, "Ljava/util/Iterator<TV;>;"
	if ( !(values) )  
		goto label_cond_13;
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_1 .. :try_end_e} :catchall_1e
	if ( handler->handlePrefixMatch(chitr->processedLength(), values) )     
		goto label_cond_13;
	this->monitor_exit();
	return;
	// 152    .line 104
	label_cond_13:
	try {
	//label_try_start_13:
	nextMatch = node->findMatch(chitr);
	//    .local v0, "nextMatch":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	if ( !(nextMatch) )  
		goto label_cond_1c;
	this->find(nextMatch, chitr, handler);
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_1e;
	}
	//    .catchall {:try_start_13 .. :try_end_1c} :catchall_1e
	label_cond_1c:
	this->monitor_exit();
	return;
	// 174    .end local v0    # "nextMatch":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	// 175    .end local v1    # "values":Ljava/util/Iterator;, "Ljava/util/Iterator<TV;>;"
	label_catchall_1e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private static subArray([CI)[C
template <typename V>
char android::icu::impl::TextTrieMap<V>::subArray(std::shared_ptr<char[]> array,int start)
{
	
	std::shared<std::vector<char[]>> sub;
	
	//    .param p0, "array"    # [C
	//    .param p1, "start"    # I
	if ( start )     
		goto label_cond_4;
	return array;
	// 198    .line 380
	label_cond_4:
	sub = std::make_shared<std::vector<char[]>>((array->size() -  start));
	//    .local v0, "sub":[C
	java::lang::System::arraycopy(array, start, sub, 0x0, sub->size());
	return sub;

}
// .method private static subArray([CII)[C
template <typename V>
char android::icu::impl::TextTrieMap<V>::subArray(std::shared_ptr<char[]> array,int start,int limit)
{
	
	std::shared<std::vector<char[]>> sub;
	
	//    .param p0, "array"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	if ( start )     
		goto label_cond_7;
	if ( limit != array->size() )
		goto label_cond_7;
	return array;
	// 235    .line 389
	label_cond_7:
	sub = std::make_shared<std::vector<char[]>>((limit - start));
	//    .local v0, "sub":[C
	java::lang::System::arraycopy(array, start, sub, 0x0, (limit - start));
	return sub;

}
// .method private static toCharArray(Ljava/lang/CharSequence;)[C
template <typename V>
char android::icu::impl::TextTrieMap<V>::toCharArray(std::shared_ptr<java::lang::CharSequence> text)
{
	
	std::shared<std::vector<char[]>> array;
	int i;
	
	//    .param p0, "text"    # Ljava/lang/CharSequence;
	array = std::make_shared<std::vector<char[]>>(text->length());
	//    .local v0, "array":[C
	i = 0x0;
	//    .local v1, "i":I
	label_goto_7:
	if ( i >= array->size() )
		goto label_cond_13;
	array[i] = text->charAt(i);
	i = ( i + 0x1);
	goto label_goto_7;
	// 285    .line 373
	label_cond_13:
	return array;

}
// .method public find(Ljava/lang/CharSequence;ILandroid/icu/impl/TextTrieMap$ResultHandler;)V
template <typename V>
void android::icu::impl::TextTrieMap<V>::find(std::shared_ptr<java::lang::CharSequence> text,int offset,std::shared_ptr<android::icu::impl::TextTrieMap_S_ResultHandler<V>> handler)
{
	
	std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "offset"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 297        value = {
	// 298            "(",
	// 299            "Ljava/lang/CharSequence;",
	// 300            "I",
	// 301            "Landroid/icu/impl/TextTrieMap$ResultHandler",
	// 302            "<TV;>;)V"
	// 303        }
	// 304    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	//    .local p3, "handler":Landroid/icu/impl/TextTrieMap$ResultHandler;, "Landroid/icu/impl/TextTrieMap$ResultHandler<TV;>;"
	chitr = std::make_shared<android::icu::impl::TextTrieMap_S_CharIterator>(text, offset, this->_ignoreCase);
	//    .local v0, "chitr":Landroid/icu/impl/TextTrieMap$CharIterator;
	this->find(this->_root, chitr, handler);
	return;

}
// .method public find(Ljava/lang/CharSequence;Landroid/icu/impl/TextTrieMap$ResultHandler;)V
template <typename V>
void android::icu::impl::TextTrieMap<V>::find(std::shared_ptr<java::lang::CharSequence> text,std::shared_ptr<android::icu::impl::TextTrieMap_S_ResultHandler<V>> handler)
{
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .annotation system Ldalvik/annotation/Signature;
	// 330        value = {
	// 331            "(",
	// 332            "Ljava/lang/CharSequence;",
	// 333            "Landroid/icu/impl/TextTrieMap$ResultHandler",
	// 334            "<TV;>;)V"
	// 335        }
	// 336    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	//    .local p2, "handler":Landroid/icu/impl/TextTrieMap$ResultHandler;, "Landroid/icu/impl/TextTrieMap$ResultHandler<TV;>;"
	this->find(text, 0x0, handler);
	return;

}
// .method public get(Ljava/lang/CharSequence;I)Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator<V>> android::icu::impl::TextTrieMap<V>::get(std::shared_ptr<java::lang::CharSequence> text,int start)
{
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 355        value = {
	// 356            "(",
	// 357            "Ljava/lang/CharSequence;",
	// 358            "I)",
	// 359            "Ljava/util/Iterator",
	// 360            "<TV;>;"
	// 361        }
	// 362    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	return this->get(text, start, 0x0);

}
// .method public get(Ljava/lang/CharSequence;I[I)Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator<V>> android::icu::impl::TextTrieMap<V>::get(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<int[]> matchLen)
{
	
	std::shared_ptr<android::icu::impl::TextTrieMap_S_LongestMatchHandler> handler;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "matchLen"    # [I
	//    .annotation system Ldalvik/annotation/Signature;
	// 382        value = {
	// 383            "(",
	// 384            "Ljava/lang/CharSequence;",
	// 385            "I[I)",
	// 386            "Ljava/util/Iterator",
	// 387            "<TV;>;"
	// 388        }
	// 389    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	handler = std::make_shared<android::icu::impl::TextTrieMap_S_LongestMatchHandler>(0x0);
	//    .local v0, "handler":Landroid/icu/impl/TextTrieMap$LongestMatchHandler;, "Landroid/icu/impl/TextTrieMap$LongestMatchHandler<TV;>;"
	this->find(text, start, handler);
	if ( !(matchLen) )  
		goto label_cond_15;
	if ( matchLen->size() <= 0 )
		goto label_cond_15;
	matchLen[0x0] = handler->getMatchLength();
	label_cond_15:
	return handler->getMatches();

}
// .method public get(Ljava/lang/String;)Ljava/util/Iterator;
template <typename V>
std::shared_ptr<java::util::Iterator<V>> android::icu::impl::TextTrieMap<V>::get(std::shared_ptr<java::lang::String> text)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 433        value = {
	// 434            "(",
	// 435            "Ljava/lang/String;",
	// 436            ")",
	// 437            "Ljava/util/Iterator",
	// 438            "<TV;>;"
	// 439        }
	// 440    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	return this->get(text, 0x0);

}
// .method public put(Ljava/lang/CharSequence;Ljava/lang/Object;)Landroid/icu/impl/TextTrieMap;
template <typename V>
std::shared_ptr<android::icu::impl::TextTrieMap<V>> android::icu::impl::TextTrieMap<V>::put(std::shared_ptr<java::lang::CharSequence> text,std::shared_ptr<V> val)
{
	
	std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .annotation system Ldalvik/annotation/Signature;
	// 458        value = {
	// 459            "(",
	// 460            "Ljava/lang/CharSequence;",
	// 461            "TV;)",
	// 462            "Landroid/icu/impl/TextTrieMap",
	// 463            "<TV;>;"
	// 464        }
	// 465    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	//    .local p2, "val":Ljava/lang/Object;, "TV;"
	chitr = std::make_shared<android::icu::impl::TextTrieMap_S_CharIterator>(text, 0x0, this->_ignoreCase);
	//    .local v0, "chitr":Landroid/icu/impl/TextTrieMap$CharIterator;
	this->_root->add(chitr, val);
	return this;

}

#endif //__android_icu_impl_TextTrieMap__

