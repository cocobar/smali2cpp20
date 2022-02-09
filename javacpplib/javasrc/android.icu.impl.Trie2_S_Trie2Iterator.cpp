// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2$Trie2Iterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_S_Trie2Iterator.h"
#include "android.icu.impl.Trie2_S_ValueMapper.h"
#include "android.icu.impl.Trie2.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.NoSuchElementException.h"

// .method constructor <init>(Landroid/icu/impl/Trie2;CLandroid/icu/impl/Trie2$ValueMapper;)V
android::icu::impl::Trie2_S_Trie2Iterator::Trie2_S_Trie2Iterator(std::shared_ptr<android::icu::impl::Trie2> this_S_0,char leadSurrogate,std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> vm)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "this$0"    # Landroid/icu/impl/Trie2;
	//    .param p2, "leadSurrogate"    # C
	//    .param p3, "vm"    # Landroid/icu/impl/Trie2$ValueMapper;
	cVar0 = 0x1;
	this->this_S_0 = this_S_0;
	// 060    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar1 = std::make_shared<android::icu::impl::Trie2_S_Range>();
	this->returnValue = cVar1;
	this->doingCodePoints = cVar0;
	this->doLeadSurrogates = cVar0;
	if ( leadSurrogate <  0xd800 )
		goto label_cond_1b;
	if ( leadSurrogate <= 0xdbff )
		goto label_cond_24;
label_cond_1b:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad lead surrogate value.")));
	// throw
	throw cVar2;
	// 094    .line 871
label_cond_24:
	this->mapper = vm;
	this->nextStart = ( (leadSurrogate - 0xd7c0) << 0xa);
	this->limitCP = ( this->nextStart + 0x400);
	this->doLeadSurrogates = 0x0;
	return;

}
// .method constructor <init>(Landroid/icu/impl/Trie2;Landroid/icu/impl/Trie2$ValueMapper;)V
android::icu::impl::Trie2_S_Trie2Iterator::Trie2_S_Trie2Iterator(std::shared_ptr<android::icu::impl::Trie2> this_S_0,std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> vm)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> cVar1;
	
	//    .param p1, "this$0"    # Landroid/icu/impl/Trie2;
	//    .param p2, "vm"    # Landroid/icu/impl/Trie2$ValueMapper;
	cVar0 = 0x1;
	this->this_S_0 = this_S_0;
	// 135    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar1 = std::make_shared<android::icu::impl::Trie2_S_Range>();
	this->returnValue = cVar1;
	this->doingCodePoints = cVar0;
	this->doLeadSurrogates = cVar0;
	this->mapper = vm;
	this->nextStart = 0x0;
	this->limitCP = 0x110000;
	this->doLeadSurrogates = cVar0;
	return;

}
// .method private rangeEndLS(C)I
int android::icu::impl::Trie2_S_Trie2Iterator::rangeEndLS(char startingLS)
{
	
	int cVar0;
	int c;
	
	//    .param p1, "startingLS"    # C
	cVar0 = 0xdbff;
	if ( startingLS <  cVar0 )
		goto label_cond_6;
	return cVar0;
	// 183    .line 975
label_cond_6:
	//    .local v1, "val":I
	c = ( startingLS + 0x1);
	//    .local v0, "c":I
label_goto_e:
	if ( c >  cVar0 )
		goto label_cond_19;
	if ( this->this_S_0->getFromU16SingleLead((char)(c)) == this->this_S_0->getFromU16SingleLead(startingLS) )
		goto label_cond_1c;
label_cond_19:
	return ( c + -0x1);
	// 216    .line 976
label_cond_1c:
	c = ( c + 0x1);
	goto label_goto_e;

}
// .method public hasNext()Z
bool android::icu::impl::Trie2_S_Trie2Iterator::hasNext()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( !(this->doingCodePoints) )  
		goto label_cond_10;
	if ( this->doLeadSurrogates )     
		goto label_cond_f;
	if ( this->nextStart >= this->limitCP )
		goto label_cond_10;
label_cond_f:
label_goto_f:
	return cVar0;
label_cond_10:
	if ( this->nextStart <  0xdc00 )
		goto label_cond_f;
	cVar0 = 0x0;
	goto label_goto_f;

}
// .method public next()Landroid/icu/impl/Trie2$Range;
std::shared_ptr<android::icu::impl::Trie2_S_Range> android::icu::impl::Trie2_S_Trie2Iterator::next()
{
	
	std::shared_ptr<java::util::NoSuchElementException> cVar0;
	int endOfRange;
	int val;
	int mappedVal;
	
	if ( this->hasNext() )     
		goto label_cond_c;
	cVar0 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar0;
	// 280    .line 887
label_cond_c:
	if ( this->nextStart <  this->limitCP )
		goto label_cond_1a;
	this->doingCodePoints = 0x0;
	this->nextStart = 0xd800;
label_cond_1a:
	endOfRange = 0x0;
	//    .local v0, "endOfRange":I
	0x0;
	//    .local v2, "val":I
	0x0;
	//    .local v1, "mappedVal":I
	if ( !(this->doingCodePoints) )  
		goto label_cond_77;
	val = this->this_S_0->get(this->nextStart);
	mappedVal = this->mapper->map(val);
	endOfRange = this->this_S_0->rangeEnd(this->nextStart, this->limitCP, val);
label_goto_39:
	if ( endOfRange <  ( this->limitCP + -0x1) )
		goto label_cond_5c;
label_cond_3f:
	this->returnValue->startCodePoint = this->nextStart;
	this->returnValue->endCodePoint = endOfRange;
	this->returnValue->value = mappedVal;
	this->returnValue->leadSurrogate = ( this->doingCodePoints ^ 0x1);
	this->nextStart = ( endOfRange + 0x1);
	return this->returnValue;
	// 388    .line 908
label_cond_5c:
	val = this->this_S_0->get(( endOfRange + 0x1));
	if ( this->mapper->map(val) != mappedVal )
		goto label_cond_3f;
	endOfRange = this->this_S_0->rangeEnd(( endOfRange + 0x1), this->limitCP, val);
	goto label_goto_39;
	// 420    .line 916
label_cond_77:
	mappedVal = this->mapper->map(this->this_S_0->getFromU16SingleLead((char)(this->nextStart)));
	endOfRange = this->rangeEndLS((char)(this->nextStart));
label_goto_8d:
	if ( endOfRange >= 0xdbff )
		goto label_cond_3f;
	if ( this->mapper->map(this->this_S_0->getFromU16SingleLead((char)(( endOfRange + 0x1)))) != mappedVal )
		goto label_cond_3f;
	endOfRange = this->rangeEndLS((char)(( endOfRange + 0x1)));
	goto label_goto_8d;

}
// .method public remove()V
void android::icu::impl::Trie2_S_Trie2Iterator::remove()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}


