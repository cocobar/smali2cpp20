// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$ComplexArgStyleNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePatternUtil_S_ComplexArgStyleNode.h"
#include "android.icu.text.MessagePatternUtil_S_Node.h"
#include "android.icu.text.MessagePatternUtil_S_VariantNode.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

// .method static synthetic -set0(Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;Z)Z
bool android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::_set0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this,bool _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
	//    .param p1, "-value"    # Z
	_this->explicitOffset = _value;
	return _value;

}
// .method static synthetic -set1(Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;D)D
double android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::_set1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this,double _value)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
	//    .param p1, "-value"    # D
	_this->offset = _value;
	return _value;

}
// .method static synthetic -wrap0(Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;)Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::_wrap0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
	return _this->freeze();

}
// .method static synthetic -wrap1(Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;Landroid/icu/text/MessagePatternUtil$VariantNode;)V
void android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::_wrap1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this,std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> variant)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
	//    .param p1, "variant"    # Landroid/icu/text/MessagePatternUtil$VariantNode;
	_this->addVariant(variant);
	return;

}
// .method private constructor <init>(Landroid/icu/text/MessagePattern$ArgType;)V
android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::MessagePatternUtil_S_ComplexArgStyleNode(std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "argType"    # Landroid/icu/text/MessagePattern$ArgType;
	android::icu::text::MessagePatternUtil_S_Node::(0x0);
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->list = cVar0;
	this->argType = argType;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/MessagePattern$ArgType;Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;)V
android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::MessagePatternUtil_S_ComplexArgStyleNode(std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType,std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this1)
{
	
	//    .param p1, "argType"    # Landroid/icu/text/MessagePattern$ArgType;
	//    .param p2, "-this1"    # Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
	android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::(argType);
	return;

}
// .method private addVariant(Landroid/icu/text/MessagePatternUtil$VariantNode;)V
void android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::addVariant(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> variant)
{
	
	//    .param p1, "variant"    # Landroid/icu/text/MessagePatternUtil$VariantNode;
	this->list->add(variant);
	return;

}
// .method private freeze()Landroid/icu/text/MessagePatternUtil$ComplexArgStyleNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::freeze()
{
	
	this->list = java::util::Collections::unmodifiableList(this->list);
	return this;

}
// .method public getArgType()Landroid/icu/text/MessagePattern$ArgType;
std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::getArgType()
{
	
	return this->argType;

}
// .method public getOffset()D
double android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::getOffset()
{
	
	return this->offset;

}
// .method public getVariants()Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_VariantNode>> android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::getVariants()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 173        value = {
	// 174            "()",
	// 175            "Ljava/util/List",
	// 176            "<",
	// 177            "Landroid/icu/text/MessagePatternUtil$VariantNode;",
	// 178            ">;"
	// 179        }
	// 180    .end annotation
	return this->list;

}
// .method public getVariantsByType(Ljava/util/List;Ljava/util/List;)Landroid/icu/text/MessagePatternUtil$VariantNode;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::getVariantsByType(std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_VariantNode>> numericVariants,std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_VariantNode>> keywordVariants)
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> other;
	std::shared_ptr<java::util::Iterator> variant_S_iterator;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> variant;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 192        value = {
	// 193            "(",
	// 194            "Ljava/util/List",
	// 195            "<",
	// 196            "Landroid/icu/text/MessagePatternUtil$VariantNode;",
	// 197            ">;",
	// 198            "Ljava/util/List",
	// 199            "<",
	// 200            "Landroid/icu/text/MessagePatternUtil$VariantNode;",
	// 201            ">;)",
	// 202            "Landroid/icu/text/MessagePatternUtil$VariantNode;"
	// 203        }
	// 204    .end annotation
	//    .local p1, "numericVariants":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/MessagePatternUtil$VariantNode;>;"
	//    .local p2, "keywordVariants":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/MessagePatternUtil$VariantNode;>;"
	if ( !(numericVariants) )  
		goto label_cond_5;
	numericVariants->clear();
label_cond_5:
	keywordVariants->clear();
	other = 0x0;
	//    .local v0, "other":Landroid/icu/text/MessagePatternUtil$VariantNode;
	variant_S_iterator = this->list->iterator();
	//    .end local v0    # "other":Landroid/icu/text/MessagePatternUtil$VariantNode;
	//    .local v2, "variant$iterator":Ljava/util/Iterator;
label_cond_f:
label_goto_f:
	if ( !(variant_S_iterator->hasNext()) )  
		goto label_cond_3a;
	variant = variant_S_iterator->next();
	variant->checkCast("android::icu::text::MessagePatternUtil_S_VariantNode");
	//    .local v1, "variant":Landroid/icu/text/MessagePatternUtil$VariantNode;
	if ( !(variant->isSelectorNumeric()) )  
		goto label_cond_25;
	numericVariants->add(variant);
	goto label_goto_f;
	// 259    .line 327
label_cond_25:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("other"))->equals(variant->getSelector())) )  
		goto label_cond_36;
	if ( other )     
		goto label_cond_f;
	//    .local v0, "other":Landroid/icu/text/MessagePatternUtil$VariantNode;
	goto label_goto_f;
	// 282    .line 333
	// 283    .end local v0    # "other":Landroid/icu/text/MessagePatternUtil$VariantNode;
label_cond_36:
	keywordVariants->add(variant);
	goto label_goto_f;
	// 289    .line 336
	// 290    .end local v1    # "variant":Landroid/icu/text/MessagePatternUtil$VariantNode;
label_cond_3a:
	return other;

}
// .method public hasExplicitOffset()Z
bool android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::hasExplicitOffset()
{
	
	return this->explicitOffset;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(0x28)->append(this->argType->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" style) ")));
	if ( !(this->hasExplicitOffset()) )  
		goto label_cond_33;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("offset:")))->append(this->offset)->append(0x20);
label_cond_33:
	return sb->append(this->list->toString())->toString();

}


