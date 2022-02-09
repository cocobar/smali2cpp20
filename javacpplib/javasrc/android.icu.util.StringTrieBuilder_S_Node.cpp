// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$Node.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"

// .method public constructor <init>()V
android::icu::util::StringTrieBuilder_S_Node::StringTrieBuilder_S_Node()
{
	
	// 027    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->offset = 0x0;
	return;

}
// .method public add(Landroid/icu/util/StringTrieBuilder;Ljava/lang/CharSequence;II)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder_S_Node::add(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue)
{
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "start"    # I
	//    .param p4, "sValue"    # I
	return this;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::StringTrieBuilder_S_Node::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	if ( this == other )
		goto label_cond_d;
	if ( this->getClass() != other->getClass() )
		goto label_cond_e;
label_cond_d:
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method public final getOffset()I
int android::icu::util::StringTrieBuilder_S_Node::getOffset()
{
	
	return this->offset;

}
// .method public markRightEdgesFirst(I)I
int android::icu::util::StringTrieBuilder_S_Node::markRightEdgesFirst(int edgeNumber)
{
	
	//    .param p1, "edgeNumber"    # I
	if ( this->offset )     
		goto label_cond_6;
	this->offset = edgeNumber;
label_cond_6:
	return edgeNumber;

}
// .method public register(Landroid/icu/util/StringTrieBuilder;)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder_S_Node::register(std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	return this;

}
// .method public final writeUnlessInsideRightEdge(IILandroid/icu/util/StringTrieBuilder;)V
void android::icu::util::StringTrieBuilder_S_Node::writeUnlessInsideRightEdge(int firstRight,int lastRight,std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	//    .param p1, "firstRight"    # I
	//    .param p2, "lastRight"    # I
	//    .param p3, "builder"    # Landroid/icu/util/StringTrieBuilder;
	if ( this->offset >= 0 )
		goto label_cond_f;
	if ( this->offset <  lastRight )
		goto label_cond_c;
	if ( firstRight >= this->offset )
		goto label_cond_f;
label_cond_c:
	this->write(builder);
label_cond_f:
	return;

}


