// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryBreakEngine$DequeI.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "java.lang.AssertionError.h"
#include "java.lang.System.h"

static android::icu::text::DictionaryBreakEngine_S_DequeI::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::DictionaryBreakEngine_S_DequeI::static_cinit()
{
	
	android::icu::text::DictionaryBreakEngine_S_DequeI::_assertionsDisabled = ( android::icu::text::DictionaryBreakEngine_S_DequeI()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>()V
android::icu::text::DictionaryBreakEngine_S_DequeI::DictionaryBreakEngine_S_DequeI()
{
	
	int cVar0;
	
	cVar0 = 0x4;
	// 055    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->data = std::make_shared<std::vector<int[]>>(0x32);
	this->lastIdx = cVar0;
	this->firstIdx = cVar0;
	return;

}
// .method private grow()V
void android::icu::text::DictionaryBreakEngine_S_DequeI::grow()
{
	
	int cVar0;
	std::shared<std::vector<int[]>> newData;
	
	cVar0 = 0x0;
	newData = std::make_shared<std::vector<int[]>>(( this->data->size() * 0x2));
	//    .local v0, "newData":[I
	java::lang::System::arraycopy(this->data, cVar0, newData, cVar0, this->data->size());
	this->data = newData;
	return;

}
// .method contains(I)Z
bool android::icu::text::DictionaryBreakEngine_S_DequeI::contains(int v)
{
	
	int i;
	
	//    .param p1, "v"    # I
	i = this->lastIdx;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->firstIdx )
		goto label_cond_11;
	if ( this->data[i] != v )
		goto label_cond_e;
	return 0x1;
	// 134    .line 147
label_cond_e:
	i = ( i + 0x1);
	goto label_goto_2;
	// 140    .line 152
label_cond_11:
	return 0x0;

}
// .method isEmpty()Z
bool android::icu::text::DictionaryBreakEngine_S_DequeI::isEmpty()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->size() )     
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method offer(I)V
void android::icu::text::DictionaryBreakEngine_S_DequeI::offer(int v)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
	//    .param p1, "v"    # I
	if ( android::icu::text::DictionaryBreakEngine_S_DequeI::_assertionsDisabled )     
		goto label_cond_e;
	if ( this->lastIdx > 0 ) 
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 186    .line 116
label_cond_e:
	cVar1 = ( this->lastIdx + -0x1);
	this->lastIdx = cVar1;
	this->data[cVar1] = v;
	return;

}
// .method peek()I
int android::icu::text::DictionaryBreakEngine_S_DequeI::peek()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::text::DictionaryBreakEngine_S_DequeI::_assertionsDisabled )     
		goto label_cond_10;
	if ( this->size() > 0 ) 
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 223    .line 133
label_cond_10:
	return this->data[( this->firstIdx + -0x1)];

}
// .method peekLast()I
int android::icu::text::DictionaryBreakEngine_S_DequeI::peekLast()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::text::DictionaryBreakEngine_S_DequeI::_assertionsDisabled )     
		goto label_cond_10;
	if ( this->size() > 0 ) 
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 257    .line 138
label_cond_10:
	return this->data[this->lastIdx];

}
// .method pollLast()I
int android::icu::text::DictionaryBreakEngine_S_DequeI::pollLast()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
	if ( android::icu::text::DictionaryBreakEngine_S_DequeI::_assertionsDisabled )     
		goto label_cond_10;
	if ( this->size() > 0 ) 
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 289    .line 143
label_cond_10:
	cVar1 = this->lastIdx;
	this->lastIdx = ( cVar1 + 0x1);
	return this->data[cVar1];

}
// .method pop()I
int android::icu::text::DictionaryBreakEngine_S_DequeI::pop()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int cVar1;
	
	if ( android::icu::text::DictionaryBreakEngine_S_DequeI::_assertionsDisabled )     
		goto label_cond_10;
	if ( this->size() > 0 ) 
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 325    .line 128
label_cond_10:
	cVar1 = ( this->firstIdx + -0x1);
	this->firstIdx = cVar1;
	return this->data[cVar1];

}
// .method push(I)V
void android::icu::text::DictionaryBreakEngine_S_DequeI::push(int v)
{
	
	int cVar0;
	
	//    .param p1, "v"    # I
	if ( this->firstIdx <  this->data->size() )
		goto label_cond_a;
	this->grow();
label_cond_a:
	cVar0 = this->firstIdx;
	this->firstIdx = ( cVar0 + 0x1);
	this->data[cVar0] = v;
	return;

}
// .method size()I
int android::icu::text::DictionaryBreakEngine_S_DequeI::size()
{
	
	return (this->firstIdx -  this->lastIdx);

}


