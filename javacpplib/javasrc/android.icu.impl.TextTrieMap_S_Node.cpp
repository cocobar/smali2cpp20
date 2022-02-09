// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TextTrieMap$Node.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_CharIterator.h"
#include "android.icu.impl.TextTrieMap_S_Node.h"
#include "android.icu.impl.TextTrieMap.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.ListIterator.h"

// .method private constructor <init>(Landroid/icu/impl/TextTrieMap;)V
android::icu::impl::TextTrieMap_S_Node::TextTrieMap_S_Node(std::shared_ptr<android::icu::impl::TextTrieMap> this_S_0)
{
	
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	//    .local p1, "this$0":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	this->this_S_0 = this_S_0;
	// 053    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/TextTrieMap;Landroid/icu/impl/TextTrieMap$Node;)V
android::icu::impl::TextTrieMap_S_Node::TextTrieMap_S_Node(std::shared_ptr<android::icu::impl::TextTrieMap> this_S_0,std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/TextTrieMap;
	//    .param p2, "-this1"    # Landroid/icu/impl/TextTrieMap$Node;
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	android::icu::impl::TextTrieMap_S_Node::(this_S_0);
	return;

}
// .method private constructor <init>(Landroid/icu/impl/TextTrieMap;[CLjava/util/List;Ljava/util/List;)V
android::icu::impl::TextTrieMap_S_Node::TextTrieMap_S_Node(std::shared_ptr<android::icu::impl::TextTrieMap> this_S_0,std::shared_ptr<char[]> text,std::shared_ptr<java::util::List<V>> values,std::shared_ptr<java::util::List<android::icu::impl::TextTrieMap<V>.Node>> children)
{
	
	//    .param p2, "text"    # [C
	//    .annotation system Ldalvik/annotation/Signature;
	// 075        value = {
	// 076            "([C",
	// 077            "Ljava/util/List",
	// 078            "<TV;>;",
	// 079            "Ljava/util/List",
	// 080            "<",
	// 081            "Landroid/icu/impl/TextTrieMap",
	// 082            "<TV;>.Node;>;)V"
	// 083        }
	// 084    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	//    .local p1, "this$0":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<TV;>;"
	//    .local p3, "values":Ljava/util/List;, "Ljava/util/List<TV;>;"
	//    .local p4, "children":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TextTrieMap<TV;>.Node;>;"
	this->this_S_0 = this_S_0;
	// 094    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_text = text;
	this->_values = values;
	this->_children = children;
	return;

}
// .method private add([CILjava/lang/Object;)V
void android::icu::impl::TextTrieMap_S_Node::add(std::shared_ptr<char[]> text,int offset,std::shared_ptr<V> value)
{
	
	int cVar0;
	std::shared_ptr<java::util::List> cVar1;
	std::shared_ptr<java::util::LinkedList> cVar2;
	std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> child;
	std::shared_ptr<java::util::ListIterator> litr;
	std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> next;
	std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> cVar3;
	int matchLen;
	
	//    .param p1, "text"    # [C
	//    .param p2, "offset"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 114        value = {
	// 115            "([CITV;)V"
	// 116        }
	// 117    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	//    .local p3, "value":Ljava/lang/Object;, "TV;"
	cVar0 = 0x0;
	cVar1 = 0x0;
	if ( text->size() != offset )
		goto label_cond_e;
	this->_values = this->addValue(this->_values, value);
	return;
	// 143    .line 283
label_cond_e:
	if ( this->_children )     
		goto label_cond_2e;
	cVar2 = std::make_shared<java::util::LinkedList>();
	this->_children = cVar2;
	child = std::make_shared<android::icu::impl::TextTrieMap_S_Node>(this->this_S_0, android::icu::impl::TextTrieMap::-wrap0(text, offset), this->addValue(cVar1, value), cVar1);
	//    .local v0, "child":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	this->_children->add(child);
	return;
	// 180    .line 291
	// 181    .end local v0    # "child":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
label_cond_2e:
	litr = this->_children->listIterator();
	//    .local v1, "litr":Ljava/util/ListIterator;, "Ljava/util/ListIterator<Landroid/icu/impl/TextTrieMap<TV;>.Node;>;"
label_cond_34:
	if ( !(litr->hasNext()) )  
		goto label_cond_4b;
	next = litr->next();
	next->checkCast("android::icu::impl::TextTrieMap_S_Node");
	//    .local v3, "next":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	if ( text[offset] >= next->_text[cVar0] )
		goto label_cond_5e;
	litr->previous();
	//    .end local v3    # "next":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
label_cond_4b:
	cVar3 = std::make_shared<android::icu::impl::TextTrieMap_S_Node>(this->this_S_0, android::icu::impl::TextTrieMap::-wrap0(text, offset), this->addValue(cVar1, value), cVar1);
	litr->add(cVar3);
	return;
	// 240    .line 298
	// 241    .restart local v3    # "next":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
label_cond_5e:
	if ( text[offset] != next->_text[cVar0] )
		goto label_cond_34;
	matchLen = next->lenMatches(text, offset);
	//    .local v2, "matchLen":I
	if ( matchLen != next->_text->size() )
		goto label_cond_75;
	next->add(text, (offset + matchLen), value);
label_goto_74:
	return;
	// 273    .line 305
label_cond_75:
	next->split(matchLen);
	next->add(text, (offset + matchLen), value);
	goto label_goto_74;

}
// .method private addValue(Ljava/util/List;Ljava/lang/Object;)Ljava/util/List;
std::shared_ptr<java::util::List<V>> android::icu::impl::TextTrieMap_S_Node::addValue(std::shared_ptr<java::util::List<V>> list,std::shared_ptr<V> value)
{
	
	std::shared_ptr<java::util::LinkedList> list;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 288        value = {
	// 289            "(",
	// 290            "Ljava/util/List",
	// 291            "<TV;>;TV;)",
	// 292            "Ljava/util/List",
	// 293            "<TV;>;"
	// 294        }
	// 295    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	//    .local p1, "list":Ljava/util/List;, "Ljava/util/List<TV;>;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	if ( list )     
		goto label_cond_7;
	//    .end local p1    # "list":Ljava/util/List;, "Ljava/util/List<TV;>;"
	list = std::make_shared<java::util::LinkedList>();
	//    .restart local p1    # "list":Ljava/util/List;, "Ljava/util/List<TV;>;"
label_cond_7:
	list->add(value);
	return list;

}
// .method private lenMatches([CI)I
int android::icu::impl::TextTrieMap_S_Node::lenMatches(std::shared_ptr<char[]> text,int offset)
{
	
	int textLen;
	int len;
	
	//    .param p1, "text"    # [C
	//    .param p2, "offset"    # I
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	textLen = (text->size() - offset);
	//    .local v2, "textLen":I
	if ( this->_text->size() >= textLen )
		goto label_cond_19;
	//    .local v1, "limit":I
label_goto_b:
	len = 0x0;
	//    .local v0, "len":I
label_goto_c:
	if ( len >= limit )
		goto label_cond_18;
	if ( this->_text[len] == text[(offset + len)] )
		goto label_cond_1b;
label_cond_18:
	return len;
	// 368    .line 335
	// 369    .end local v0    # "len":I
	// 370    .end local v1    # "limit":I
label_cond_19:
	//    .restart local v1    # "limit":I
	goto label_goto_b;
	// 377    .line 341
	// 378    .restart local v0    # "len":I
label_cond_1b:
	len = ( len + 0x1);
	goto label_goto_c;

}
// .method private matchFollowing(Landroid/icu/impl/TextTrieMap$CharIterator;)Z
bool android::icu::impl::TextTrieMap_S_Node::matchFollowing(std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr)
{
	
	bool matched;
	int idx;
	
	//    .param p1, "chitr"    # Landroid/icu/impl/TextTrieMap$CharIterator;
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	matched = 0x1;
	//    .local v2, "matched":Z
	idx = 0x1;
	//    .local v1, "idx":I
label_goto_2:
	if ( idx >= this->_text->size() )
		goto label_cond_e;
	if ( chitr->hasNext() )     
		goto label_cond_f;
	matched = 0x0;
label_cond_e:
label_goto_e:
	return matched;
	// 422    .line 323
label_cond_f:
	//    .local v0, "ch":Ljava/lang/Character;
	if ( chitr->next()->charValue() == this->_text[idx] )
		goto label_cond_1f;
	matched = 0x0;
	goto label_goto_e;
	// 446    .line 328
label_cond_1f:
	idx = ( idx + 0x1);
	goto label_goto_2;

}
// .method private split(I)V
void android::icu::impl::TextTrieMap_S_Node::split(int offset)
{
	
	std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> child;
	std::shared_ptr<java::util::LinkedList> cVar0;
	
	//    .param p1, "offset"    # I
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	//    .local v1, "childText":[C
	this->_text = android::icu::impl::TextTrieMap::-wrap1(this->_text, 0x0, offset);
	child = std::make_shared<android::icu::impl::TextTrieMap_S_Node>(this->this_S_0, android::icu::impl::TextTrieMap::-wrap0(this->_text, offset), this->_values, this->_children);
	//    .local v0, "child":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	this->_values = 0x0;
	cVar0 = std::make_shared<java::util::LinkedList>();
	this->_children = cVar0;
	this->_children->add(child);
	return;

}
// .method public add(Landroid/icu/impl/TextTrieMap$CharIterator;Ljava/lang/Object;)V
void android::icu::impl::TextTrieMap_S_Node::add(std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr,std::shared_ptr<V> value)
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	//    .param p1, "chitr"    # Landroid/icu/impl/TextTrieMap$CharIterator;
	//    .annotation system Ldalvik/annotation/Signature;
	// 517        value = {
	// 518            "(",
	// 519            "Landroid/icu/impl/TextTrieMap$CharIterator;",
	// 520            "TV;)V"
	// 521        }
	// 522    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
label_goto_5:
	if ( !(chitr->hasNext()) )  
		goto label_cond_13;
	buf->append(chitr->next());
	goto label_goto_5;
	// 550    .line 251
label_cond_13:
	this->add(android::icu::impl::TextTrieMap::-wrap2(buf), 0x0, value);
	return;

}
// .method public findMatch(Landroid/icu/impl/TextTrieMap$CharIterator;)Landroid/icu/impl/TextTrieMap$Node;
std::shared_ptr<android::icu::impl::TextTrieMap<V>.Node> android::icu::impl::TextTrieMap_S_Node::findMatch(std::shared_ptr<android::icu::impl::TextTrieMap_S_CharIterator> chitr)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> cVar1;
	std::shared_ptr<java::lang::Character> ch;
	std::shared_ptr<java::util::Iterator> child_S_iterator;
	std::shared_ptr<android::icu::impl::TextTrieMap_S_Node> child;
	
	//    .param p1, "chitr"    # Landroid/icu/impl/TextTrieMap$CharIterator;
	//    .annotation system Ldalvik/annotation/Signature;
	// 568        value = {
	// 569            "(",
	// 570            "Landroid/icu/impl/TextTrieMap$CharIterator;",
	// 571            ")",
	// 572            "Landroid/icu/impl/TextTrieMap",
	// 573            "<TV;>.Node;"
	// 574        }
	// 575    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	cVar0 = 0x0;
	cVar1 = 0x0;
	if ( this->_children )     
		goto label_cond_7;
	return cVar1;
	// 591    .line 258
label_cond_7:
	if ( chitr->hasNext() )     
		goto label_cond_e;
	return cVar1;
	// 602    .line 261
label_cond_e:
	//    .local v3, "match":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	ch = chitr->next();
	//    .local v0, "ch":Ljava/lang/Character;
	child_S_iterator = this->_children->iterator();
	//    .local v2, "child$iterator":Ljava/util/Iterator;
label_cond_19:
	if ( !(child_S_iterator->hasNext()) )  
		goto label_cond_2f;
	child = child_S_iterator->next();
	child->checkCast("android::icu::impl::TextTrieMap_S_Node");
	//    .local v1, "child":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	if ( ch->charValue() >= child->_text[cVar0] )
		goto label_cond_30;
	//    .end local v1    # "child":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	//    .end local v3    # "match":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
label_cond_2f:
label_goto_2f:
	return match;
	// 653    .line 267
	// 654    .restart local v1    # "child":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	// 655    .restart local v3    # "match":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
label_cond_30:
	if ( ch->charValue() != child->_text[cVar0] )
		goto label_cond_19;
	if ( !(child->matchFollowing(chitr)) )  
		goto label_cond_2f;
	//    .local v3, "match":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	goto label_goto_2f;

}
// .method public values()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<V>> android::icu::impl::TextTrieMap_S_Node::values()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 684        value = {
	// 685            "()",
	// 686            "Ljava/util/Iterator",
	// 687            "<TV;>;"
	// 688        }
	// 689    .end annotation
	//    .local p0, "this":Landroid/icu/impl/TextTrieMap$Node;, "Landroid/icu/impl/TextTrieMap<TV;>.Node;"
	if ( this->_values )     
		goto label_cond_6;
	return 0x0;
	// 703    .line 243
label_cond_6:
	return this->_values->iterator();

}


