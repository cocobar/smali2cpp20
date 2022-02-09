// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder.smali
#include "java2ctype.h"
#include "android.icu.util.StringTrieBuilder_S_LinearMatchNode.h"
#include "android.icu.util.StringTrieBuilder_S_Node.h"
#include "android.icu.util.StringTrieBuilder_S_Option.h"
#include "android.icu.util.StringTrieBuilder_S_State.h"
#include "android.icu.util.StringTrieBuilder_S_ValueNode.h"
#include "android.icu.util.StringTrieBuilder.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.HashMap.h"

static android::icu::util::StringTrieBuilder::_android_icu_util_StringTrieBuilder_S_StateSwitchesValues;
static android::icu::util::StringTrieBuilder::_assertionsDisabled;
// .method private static synthetic -getandroid-icu-util-StringTrieBuilder$StateSwitchesValues()[I
int android::icu::util::StringTrieBuilder::_getandroid_icu_util_StringTrieBuilder_S_StateSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::util::StringTrieBuilder::_android_icu_util_StringTrieBuilder_S_StateSwitchesValues) )  
		goto label_cond_7;
	return android::icu::util::StringTrieBuilder::_android_icu_util_StringTrieBuilder_S_StateSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::util::StringTrieBuilder_S_State::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::util::StringTrieBuilder_S_State::ADDING->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3b;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_3b
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::util::StringTrieBuilder_S_State::BUILDING_FAST->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_39
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::util::StringTrieBuilder_S_State::BUILDING_SMALL->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_37
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::util::StringTrieBuilder_S_State::BUILT->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_35
label_goto_32:
	android::icu::util::StringTrieBuilder::_android_icu_util_StringTrieBuilder_S_StateSwitchesValues = cVar0;
	return cVar0;
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_39:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_3b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static synthetic -wrap0(Landroid/icu/util/StringTrieBuilder;Landroid/icu/util/StringTrieBuilder$Node;)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder::_wrap0(std::shared_ptr<android::icu::util::StringTrieBuilder> _this,std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> newNode)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/StringTrieBuilder;
	//    .param p1, "newNode"    # Landroid/icu/util/StringTrieBuilder$Node;
	return _this->registerNode(newNode);

}
// .method static synthetic -wrap1(Landroid/icu/util/StringTrieBuilder;Ljava/lang/CharSequence;II)Landroid/icu/util/StringTrieBuilder$ValueNode;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> android::icu::util::StringTrieBuilder::_wrap1(std::shared_ptr<android::icu::util::StringTrieBuilder> _this,std::shared_ptr<java::lang::CharSequence> s,int start,int sValue)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/StringTrieBuilder;
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "sValue"    # I
	return _this->createSuffixNode(s, start, sValue);

}
// .method static constructor <clinit>()V
void android::icu::util::StringTrieBuilder::static_cinit()
{
	
	android::icu::util::StringTrieBuilder::_assertionsDisabled = ( android::icu::util::StringTrieBuilder()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method protected constructor <init>()V
android::icu::util::StringTrieBuilder::StringTrieBuilder()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> cVar2;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 206    .end annotation
	// 210    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->state = android::icu::util::StringTrieBuilder_S_State::ADDING;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->strings = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>();
	this->nodes = cVar1;
	cVar2 = std::make_shared<android::icu::util::StringTrieBuilder_S_ValueNode>();
	this->lookupFinalValueNode = cVar2;
	return;

}
// .method private createSuffixNode(Ljava/lang/CharSequence;II)Landroid/icu/util/StringTrieBuilder$ValueNode;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> android::icu::util::StringTrieBuilder::createSuffixNode(std::shared_ptr<java::lang::CharSequence> s,int start,int sValue)
{
	
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> node;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_LinearMatchNode> node;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "sValue"    # I
	node = this->registerFinalValue(sValue);
	//    .local v0, "node":Landroid/icu/util/StringTrieBuilder$ValueNode;
	if ( start >= s->length() )
		goto label_cond_26;
	//    .local v2, "offset":I
	this->strings->append(s, start, s->length());
	node = std::make_shared<android::icu::util::StringTrieBuilder_S_LinearMatchNode>(this->strings, this->strings->length(), (s->length() -  start), node);
	//    .end local v0    # "node":Landroid/icu/util/StringTrieBuilder$ValueNode;
	//    .local v1, "node":Landroid/icu/util/StringTrieBuilder$ValueNode;
	//    .end local v1    # "node":Landroid/icu/util/StringTrieBuilder$ValueNode;
	//    .end local v2    # "offset":I
	//    .restart local v0    # "node":Landroid/icu/util/StringTrieBuilder$ValueNode;
label_cond_26:
	return node;

}
// .method private final registerFinalValue(I)Landroid/icu/util/StringTrieBuilder$ValueNode;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> android::icu::util::StringTrieBuilder::registerFinalValue(int value)
{
	
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> oldNode;
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_ValueNode> newNode;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "value"    # I
	android::icu::util::StringTrieBuilder_S_ValueNode::-wrap0(this->lookupFinalValueNode, value);
	oldNode = this->nodes->get(this->lookupFinalValueNode);
	oldNode->checkCast("android::icu::util::StringTrieBuilder_S_Node");
	//    .local v1, "oldNode":Landroid/icu/util/StringTrieBuilder$Node;
	if ( !(oldNode) )  
		goto label_cond_14;
	oldNode->checkCast("android::icu::util::StringTrieBuilder_S_ValueNode");
	//    .end local v1    # "oldNode":Landroid/icu/util/StringTrieBuilder$Node;
	return oldNode;
	// 335    .line 170
	// 336    .restart local v1    # "oldNode":Landroid/icu/util/StringTrieBuilder$Node;
label_cond_14:
	newNode = std::make_shared<android::icu::util::StringTrieBuilder_S_ValueNode>(value);
	//    .local v0, "newNode":Landroid/icu/util/StringTrieBuilder$ValueNode;
	oldNode = this->nodes->put(newNode, newNode);
	//    .end local v1    # "oldNode":Landroid/icu/util/StringTrieBuilder$Node;
	oldNode->checkCast("android::icu::util::StringTrieBuilder_S_Node");
	//    .restart local v1    # "oldNode":Landroid/icu/util/StringTrieBuilder$Node;
	if ( android::icu::util::StringTrieBuilder::_assertionsDisabled )     
		goto label_cond_2d;
	if ( !(oldNode) )  
		goto label_cond_2d;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 367    .line 175
label_cond_2d:
	return newNode;

}
// .method private final registerNode(Landroid/icu/util/StringTrieBuilder$Node;)Landroid/icu/util/StringTrieBuilder$Node;
std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> android::icu::util::StringTrieBuilder::registerNode(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> newNode)
{
	
	std::shared_ptr<android::icu::util::StringTrieBuilder_S_Node> oldNode;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "newNode"    # Landroid/icu/util/StringTrieBuilder$Node;
	if ( this->state != android::icu::util::StringTrieBuilder_S_State::BUILDING_FAST )
		goto label_cond_7;
	return newNode;
	// 387    .line 144
label_cond_7:
	oldNode = this->nodes->get(newNode);
	oldNode->checkCast("android::icu::util::StringTrieBuilder_S_Node");
	//    .local v0, "oldNode":Landroid/icu/util/StringTrieBuilder$Node;
	if ( !(oldNode) )  
		goto label_cond_12;
	return oldNode;
	// 404    .line 150
label_cond_12:
	oldNode = this->nodes->put(newNode, newNode);
	//    .end local v0    # "oldNode":Landroid/icu/util/StringTrieBuilder$Node;
	oldNode->checkCast("android::icu::util::StringTrieBuilder_S_Node");
	//    .restart local v0    # "oldNode":Landroid/icu/util/StringTrieBuilder$Node;
	if ( android::icu::util::StringTrieBuilder::_assertionsDisabled )     
		goto label_cond_26;
	if ( !(oldNode) )  
		goto label_cond_26;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 429    .line 152
label_cond_26:
	return newNode;

}
// .method protected addImpl(Ljava/lang/CharSequence;I)V
void android::icu::util::StringTrieBuilder::addImpl(std::shared_ptr<java::lang::CharSequence> s,int value)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "value"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 441    .end annotation
	cVar0 = 0x0;
	if ( this->state == android::icu::util::StringTrieBuilder_S_State::ADDING )
		goto label_cond_10;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot add (string, value) pairs after build().")));
	// throw
	throw cVar1;
	// 462    .line 64
label_cond_10:
	if ( s->length() <= 0xffff )
		goto label_cond_22;
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The maximum string length is 0xffff.")));
	// throw
	throw cVar2;
	// 481    .line 68
label_cond_22:
	if ( this->root )     
		goto label_cond_2d;
	this->root = this->createSuffixNode(s, cVar0, value);
label_goto_2c:
	return;
	// 498    .line 71
label_cond_2d:
	this->root = this->root->add(this, s, cVar0, value);
	goto label_goto_2c;

}
// .method protected final buildImpl(Landroid/icu/util/StringTrieBuilder$Option;)V
void android::icu::util::StringTrieBuilder::buildImpl(std::shared_ptr<android::icu::util::StringTrieBuilder_S_Option> buildOption)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	
	//    .param p1, "buildOption"    # Landroid/icu/util/StringTrieBuilder$Option;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 515    .end annotation
	// switch
	{
	auto item = ( android::icu::util::StringTrieBuilder::-getandroid-icu-util-StringTrieBuilder$StateSwitchesValues({const[class].FS-Param})[this->state->ordinal()] );
	if (item == 1) goto label_pswitch_27;
	if (item == 2) goto label_pswitch_42;
	if (item == 3) goto label_pswitch_42;
	if (item == 4) goto label_pswitch_4b;
	}
label_goto_f:
	this->root = this->root->register(this);
	this->root->markRightEdgesFirst(-0x1);
	this->root->write(this);
	this->state = android::icu::util::StringTrieBuilder_S_State::BUILT;
	return;
	// 563    .line 83
label_pswitch_27:
	if ( this->root )     
		goto label_cond_34;
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No (string, value) pairs were added.")));
	// throw
	throw cVar0;
	// 578    .line 86
label_cond_34:
	if ( buildOption != android::icu::util::StringTrieBuilder_S_Option::FAST )
		goto label_cond_3d;
	this->state = android::icu::util::StringTrieBuilder_S_State::BUILDING_FAST;
	goto label_goto_f;
	// 591    .line 98
label_cond_3d:
	this->state = android::icu::util::StringTrieBuilder_S_State::BUILDING_SMALL;
	goto label_goto_f;
	// 599    .line 104
label_pswitch_42:
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder failed and must be clear()ed.")));
	// throw
	throw cVar1;
	// 609    .line 106
label_pswitch_4b:
	return;
	// 613    .line 81
	// 614    :pswitch_data_4c
	// 615    .packed-switch 0x1
	// 616        :pswitch_27
	// 617        :pswitch_42
	// 618        :pswitch_42
	// 619        :pswitch_4b
	// 620    .end packed-switch

}
// .method protected clearImpl()V
void android::icu::util::StringTrieBuilder::clearImpl()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 626    .end annotation
	this->strings->setLength(0x0);
	this->nodes->clear();
	this->root = 0x0;
	this->state = android::icu::util::StringTrieBuilder_S_State::ADDING;
	return;

}
// .method protected abstract getMaxBranchLinearSubNodeLength()I
int android::icu::util::StringTrieBuilder::getMaxBranchLinearSubNodeLength()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 657    .end annotation

}
// .method protected abstract getMaxLinearMatchLength()I
int android::icu::util::StringTrieBuilder::getMaxLinearMatchLength()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 662    .end annotation

}
// .method protected abstract getMinLinearMatch()I
int android::icu::util::StringTrieBuilder::getMinLinearMatch()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 667    .end annotation

}
// .method protected abstract matchNodesCanHaveValues()Z
bool android::icu::util::StringTrieBuilder::matchNodesCanHaveValues()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 672    .end annotation

}
// .method protected abstract write(I)I
int android::icu::util::StringTrieBuilder::write(int var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 677    .end annotation

}
// .method protected abstract write(II)I
int android::icu::util::StringTrieBuilder::write(int var0,int var1)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 682    .end annotation

}
// .method protected abstract writeDeltaTo(I)I
int android::icu::util::StringTrieBuilder::writeDeltaTo(int var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 687    .end annotation

}
// .method protected abstract writeValueAndFinal(IZ)I
int android::icu::util::StringTrieBuilder::writeValueAndFinal(int var0,bool var1)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 692    .end annotation

}
// .method protected abstract writeValueAndType(ZII)I
int android::icu::util::StringTrieBuilder::writeValueAndType(bool var0,int var1,int var2)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 697    .end annotation

}


