// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.impl.CharacterIteration.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.DictionaryBreakEngine.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Integer.h"
#include "java.text.CharacterIterator.h"
#include "java.util.BitSet.h"

// .method public varargs constructor <init>([Ljava/lang/Integer;)V
android::icu::text::DictionaryBreakEngine::DictionaryBreakEngine(std::shared_ptr<std::vector<java::lang::Integer>> breakTypes)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<java::util::BitSet> cVar1;
	int cVar2;
	
	//    .param p1, "breakTypes"    # [Ljava/lang/Integer;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	this->fSet = cVar0;
	cVar1 = std::make_shared<java::util::BitSet>(0x20);
	this->fTypes = cVar1;
	cVar2 = 0x0;
label_goto_15:
	if ( cVar2 >= breakTypes->size() )
		goto label_cond_25;
	//    .local v0, "type":Ljava/lang/Integer;
	this->fTypes->set(breakTypes[cVar2]->intValue());
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_15;
	// 074    .line 167
	// 075    .end local v0    # "type":Ljava/lang/Integer;
label_cond_25:
	return;

}
// .method public findBreaks(Ljava/text/CharacterIterator;IIZILandroid/icu/text/DictionaryBreakEngine$DequeI;)I
int android::icu::text::DictionaryBreakEngine::findBreaks(std::shared_ptr<java::text::CharacterIterator> text,int startPos,int endPos,bool reverse,int breakType,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> foundBreaks)
{
	
	int start;
	int c;
	int isDict;
	int current;
	int cVar0;
	
	//    .param p1, "text"    # Ljava/text/CharacterIterator;
	//    .param p2, "startPos"    # I
	//    .param p3, "endPos"    # I
	//    .param p4, "reverse"    # Z
	//    .param p5, "breakType"    # I
	//    .param p6, "foundBreaks"    # Landroid/icu/text/DictionaryBreakEngine$DequeI;
	0x0;
	//    .local v5, "result":I
	start = text->getIndex();
	//    .local v6, "start":I
	c = android::icu::impl::CharacterIteration::current32(text);
	//    .local v0, "c":I
	if ( !(reverse) )  
		goto label_cond_39;
	isDict = this->fSet->contains(c);
	//    .local v2, "isDict":Z
label_goto_11:
	current = text->getIndex();
	//    .local v1, "current":I
	if ( current <= startPos )
		goto label_cond_24;
	if ( !(isDict) )  
		goto label_cond_24;
	c = android::icu::impl::CharacterIteration::previous32(text);
	isDict = this->fSet->contains(c);
	goto label_goto_11;
	// 147    .line 195
label_cond_24:
	if ( current >= startPos )
		goto label_cond_31;
	//    .local v4, "rangeStart":I
label_goto_27:
	//    .end local v2    # "isDict":Z
	//    .local v3, "rangeEnd":I
label_goto_29:
	text->setIndex(current);
	return this->divideUpDictionaryRange(text, rangeStart, rangeEnd, foundBreaks);
	// 172    .line 196
	// 173    .end local v3    # "rangeEnd":I
	// 174    .end local v4    # "rangeStart":I
	// 175    .restart local v2    # "isDict":Z
label_cond_31:
	if ( !(isDict) )  
		goto label_cond_37;
	cVar0 = 0x0;
label_goto_34:
	//    .restart local v4    # "rangeStart":I
	goto label_goto_27;
	// 187    .end local v4    # "rangeStart":I
label_cond_37:
	cVar0 = 0x1;
	goto label_goto_34;
	// 193    .line 199
	// 194    .end local v1    # "current":I
	// 195    .end local v2    # "isDict":Z
label_cond_39:
label_goto_39:
	current = text->getIndex();
	//    .restart local v1    # "current":I
	if ( current >= endPos )
		goto label_cond_4f;
	if ( !(this->fSet->contains(c)) )  
		goto label_cond_4f;
	android::icu::impl::CharacterIteration::next32(text);
	c = android::icu::impl::CharacterIteration::current32(text);
	goto label_goto_39;
	// 223    .line 203
label_cond_4f:
	//    .restart local v4    # "rangeStart":I
	//    .restart local v3    # "rangeEnd":I
	goto label_goto_29;

}
// .method public handles(II)Z
bool android::icu::text::DictionaryBreakEngine::handles(int c,int breakType)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	//    .param p2, "breakType"    # I
	if ( !(this->fTypes->get(breakType)) )  
		goto label_cond_f;
	cVar0 = this->fSet->contains(c);
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method setCharacters(Landroid/icu/text/UnicodeSet;)V
void android::icu::text::DictionaryBreakEngine::setCharacters(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(set);
	this->fSet = cVar0;
	this->fSet->compact();
	return;

}


