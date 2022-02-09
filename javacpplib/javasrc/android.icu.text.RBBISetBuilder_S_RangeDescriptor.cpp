// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBISetBuilder$RangeDescriptor.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBISetBuilder_S_RangeDescriptor.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.List.h"

// .method constructor <init>()V
android::icu::text::RBBISetBuilder_S_RangeDescriptor::RBBISetBuilder_S_RangeDescriptor()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->fIncludesSets = cVar0;
	return;

}
// .method constructor <init>(Landroid/icu/text/RBBISetBuilder$RangeDescriptor;)V
android::icu::text::RBBISetBuilder_S_RangeDescriptor::RBBISetBuilder_S_RangeDescriptor(std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> other)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "other"    # Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
	// 063    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fStartChar = other->fStartChar;
	this->fEndChar = other->fEndChar;
	this->fNum = other->fNum;
	cVar0 = std::make_shared<java::util::ArrayList>(other->fIncludesSets);
	this->fIncludesSets = cVar0;
	return;

}
// .method setDictionaryFlag()V
void android::icu::text::RBBISetBuilder_S_RangeDescriptor::setDictionaryFlag()
{
	
	int i;
	std::shared_ptr<android::icu::text::RBBINode> usetNode;
	std::shared_ptr<android::icu::text::RBBINode> setRef;
	std::shared_ptr<android::icu::text::RBBINode> varRef;
	
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= this->fIncludesSets->size() )
		goto label_cond_32;
	usetNode = this->fIncludesSets->get(i);
	usetNode->checkCast("android::icu::text::RBBINode");
	//    .local v3, "usetNode":Landroid/icu/text/RBBINode;
	//    .local v1, "setName":Ljava/lang/String;
	setRef = usetNode->fParent;
	//    .local v2, "setRef":Landroid/icu/text/RBBINode;
	if ( !(setRef) )  
		goto label_cond_23;
	varRef = setRef->fParent;
	//    .local v4, "varRef":Landroid/icu/text/RBBINode;
	if ( !(varRef) )  
		goto label_cond_23;
	if ( varRef->fType != 0x2 )
		goto label_cond_23;
	//    .end local v4    # "varRef":Landroid/icu/text/RBBINode;
label_cond_23:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>(""))->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("dictionary")))) )  
		goto label_cond_33;
	this->fNum = ( this->fNum | 0x4000);
	//    .end local v1    # "setName":Ljava/lang/String;
	//    .end local v2    # "setRef":Landroid/icu/text/RBBINode;
	//    .end local v3    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_32:
	return;
	// 174    .line 104
	// 175    .restart local v1    # "setName":Ljava/lang/String;
	// 176    .restart local v2    # "setRef":Landroid/icu/text/RBBINode;
	// 177    .restart local v3    # "usetNode":Landroid/icu/text/RBBINode;
label_cond_33:
	i = ( i + 0x1);
	goto label_goto_1;

}
// .method split(I)V
void android::icu::text::RBBISetBuilder_S_RangeDescriptor::split(int where)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::RBBISetBuilder_S_RangeDescriptor> nr;
	
	//    .param p1, "where"    # I
	cVar1 = 0x0;
	if ( where <= this->fStartChar )
		goto label_cond_a;
	if ( where >  this->fEndChar )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	android::icu::impl::Assert::assrt(cVar1);
	nr = std::make_shared<android::icu::text::RBBISetBuilder_S_RangeDescriptor>(this);
	//    .local v0, "nr":Landroid/icu/text/RBBISetBuilder$RangeDescriptor;
	nr->fStartChar = where;
	this->fEndChar = ( where + -0x1);
	nr->fNext = this->fNext;
	this->fNext = nr;
	return;

}


