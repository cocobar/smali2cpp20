// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$ValueNode.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder_S_ValueNode.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::util::StringTrieBuilder_S_ValueNode::_assertionsDisabled;
// .method static synthetic -wrap0(Landroid/icu/util/StringTrieBuilder$ValueNode;I)V
void android::icu::util::StringTrieBuilder_S_ValueNode::_wrap0(std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> _this,int v)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/StringTrieBuilder$ValueNode;
	//    .param p1, "v"    # I
	_this->setFinalValue(v);
	return;

}
// .method static constructor <clinit>()V
void android::icu::util::StringTrieBuilder_S_ValueNode::static_cinit()
{
	
	android::icu::util::StringTrieBuilder_S_ValueNode::_assertionsDisabled = ( android::icu::util::StringTrieBuilder_S_ValueNode()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::util::StringTrieBuilder_S_ValueNode::StringTrieBuilder_S_ValueNode()
{
	
	// 062    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder$Node;-><init>()V
	return;

}
// .method public constructor <init>(I)V
android::icu::util::StringTrieBuilder_S_ValueNode::StringTrieBuilder_S_ValueNode(int v)
{
	
	//    .param p1, "v"    # I
	// 073    invoke-direct {p0}, Landroid/icu/util/StringTrieBuilder$Node;-><init>()V
	this->hasValue = 0x1;
	this->value = v;
	return;

}
// .method private setFinalValue(I)V
void android::icu::util::StringTrieBuilder_S_ValueNode::setFinalValue(int v)
{
	
	//    .param p1, "v"    # I
	this->hasValue = 0x1;
	this->value = v;
	return;

}
// .method public add(Landroid/icu/util/StringTrieBuilder;Ljava/lang/CharSequence;II)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder_S_ValueNode::add(std::shared_ptr<android::icu::util::StringTrieBuilder> builder,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> node;
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	//    .param p2, "s"    # Ljava/lang/CharSequence;
	//    .param p3, "start"    # I
	//    .param p4, "sValue"    # I
	if ( start != s->length() )
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate string.")));
	// throw
	throw cVar0;
	// 130    .line 302
label_cond_f:
	node = android::icu::util::StringTrieBuilder::-wrap1(builder, s, start, sValue);
	//    .local v0, "node":Landroid/icu/util/StringTrieBuilder$ValueNode;
	node->setValue(this->value);
	return node;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::StringTrieBuilder_S_ValueNode::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> o;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 161    .line 290
label_cond_5:
	if ( this->equals(other) )     
		goto label_cond_c;
	return cVar1;
label_cond_c:
	o = other;
	o->checkCast("android::icu::util::StringTrieBuilder_S_ValueNode");
	//    .local v0, "o":Landroid/icu/util/StringTrieBuilder$ValueNode;
	if ( this->hasValue != o->hasValue )
		goto label_cond_20;
	if ( !(this->hasValue) )  
		goto label_cond_1f;
	if ( this->value != o->value )
		goto label_cond_20;
label_cond_1f:
label_goto_1f:
	return cVar0;
label_cond_20:
	cVar0 = cVar1;
	goto label_goto_1f;

}
// .method public hashCode()I
int android::icu::util::StringTrieBuilder_S_ValueNode::hashCode()
{
	
	//    .local v0, "hash":I
	if ( !(this->hasValue) )  
		goto label_cond_e;
label_cond_e:
	return 0x111111;

}
// .method public final setValue(I)V
void android::icu::util::StringTrieBuilder_S_ValueNode::setValue(int v)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "v"    # I
	if ( android::icu::util::StringTrieBuilder_S_ValueNode::_assertionsDisabled )     
		goto label_cond_e;
	if ( !(this->hasValue) )  
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 251    .line 270
label_cond_e:
	this->hasValue = 0x1;
	this->value = v;
	return;

}
// .method public write(Landroid/icu/util/StringTrieBuilder;)V
void android::icu::util::StringTrieBuilder_S_ValueNode::write(std::shared_ptr<android::icu::util::StringTrieBuilder> builder)
{
	
	//    .param p1, "builder"    # Landroid/icu/util/StringTrieBuilder;
	this->offset = builder->writeValueAndFinal(this->value, 0x1);
	return;

}


