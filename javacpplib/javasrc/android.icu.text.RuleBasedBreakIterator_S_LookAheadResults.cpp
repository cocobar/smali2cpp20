// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedBreakIterator$LookAheadResults.smali
#include "java2ctype.h"
#include "android.icu.text.RuleBasedBreakIterator_S_LookAheadResults.h"
#include "java.lang.AssertionError.h"

static android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::static_cinit()
{
	
	android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::_assertionsDisabled = ( android::icu::text::RuleBasedBreakIterator_S_LookAheadResults()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>()V
android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::RuleBasedBreakIterator_S_LookAheadResults()
{
	
	int cVar0;
	
	cVar0 = 0x8;
	// 055    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fUsedSlotLimit = 0x0;
	this->fPositions = std::make_shared<std::vector<int[]>>(cVar0);
	this->fKeys = std::make_shared<std::vector<int[]>>(cVar0);
	return;

}
// .method getPosition(I)I
int android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::getPosition(int key)
{
	
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "key"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= this->fUsedSlotLimit )
		goto label_cond_13;
	if ( this->fKeys[i] != key )
		goto label_cond_10;
	return this->fPositions[i];
	// 106    .line 1176
label_cond_10:
	i = ( i + 0x1);
	goto label_goto_1;
	// 112    .line 1181
label_cond_13:
	if ( android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::_assertionsDisabled )     
		goto label_cond_1d;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 124    .line 1182
label_cond_1d:
	return -0x1;

}
// .method reset()V
void android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::reset()
{
	
	this->fUsedSlotLimit = 0x0;
	return;

}
// .method setPosition(II)V
void android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::setPosition(int key,int position)
{
	
	int i;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p1, "key"    # I
	//    .param p2, "position"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= this->fUsedSlotLimit )
		goto label_cond_13;
	if ( this->fKeys[i] != key )
		goto label_cond_10;
	this->fPositions[i] = position;
	return;
	// 174    .line 1187
label_cond_10:
	i = ( i + 0x1);
	goto label_goto_1;
	// 180    .line 1193
label_cond_13:
	if ( i <  0x8 )
		goto label_cond_22;
	if ( android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::_assertionsDisabled )     
		goto label_cond_21;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 197    .line 1195
label_cond_21:
	i = 0x7;
label_cond_22:
	this->fKeys[i] = key;
	this->fPositions[i] = position;
	if ( android::icu::text::RuleBasedBreakIterator_S_LookAheadResults::_assertionsDisabled )     
		goto label_cond_38;
	if ( this->fUsedSlotLimit == i )
		goto label_cond_38;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 227    .line 1200
label_cond_38:
	this->fUsedSlotLimit = ( i + 0x1);
	return;

}


