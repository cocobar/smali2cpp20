// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\LaoBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.DictionaryBreakEngine_S_PossibleWord.h"
#include "android.icu.text.DictionaryBreakEngine.h"
#include "android.icu.text.DictionaryData.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "android.icu.text.LaoBreakEngine.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Class.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"

static android::icu::text::LaoBreakEngine::LAO_LOOKAHEAD = 0x3t;
static android::icu::text::LaoBreakEngine::LAO_MIN_WORD = 0x2t;
static android::icu::text::LaoBreakEngine::LAO_PREFIX_COMBINE_THRESHOLD = 0x3t;
static android::icu::text::LaoBreakEngine::LAO_ROOT_COMBINE_THRESHOLD = 0x3t;
static android::icu::text::LaoBreakEngine::fBeginWordSet;
static android::icu::text::LaoBreakEngine::fEndWordSet;
static android::icu::text::LaoBreakEngine::fLaoWordSet;
static android::icu::text::LaoBreakEngine::fMarkSet;
// .method static constructor <clinit>()V
void android::icu::text::LaoBreakEngine::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar3;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar4;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar5;
	
	cVar0 = 0xec4;
	cVar1 = 0xec0;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::LaoBreakEngine::fLaoWordSet = cVar2;
	cVar3 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::LaoBreakEngine::fMarkSet = cVar3;
	cVar4 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::LaoBreakEngine::fBeginWordSet = cVar4;
	android::icu::text::LaoBreakEngine::fLaoWordSet->applyPattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("[[:Laoo:]&[:LineBreak=SA:]]")));
	android::icu::text::LaoBreakEngine::fLaoWordSet->compact();
	android::icu::text::LaoBreakEngine::fMarkSet->applyPattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("[[:Laoo:]&[:LineBreak=SA:]&[:M:]]")));
	android::icu::text::LaoBreakEngine::fMarkSet->add(0x20);
	cVar5 = std::make_shared<android::icu::text::UnicodeSet>(android::icu::text::LaoBreakEngine::fLaoWordSet);
	android::icu::text::LaoBreakEngine::fEndWordSet = cVar5;
	android::icu::text::LaoBreakEngine::fEndWordSet->remove(cVar1, cVar0);
	android::icu::text::LaoBreakEngine::fBeginWordSet->add(0xe81, 0xeae);
	android::icu::text::LaoBreakEngine::fBeginWordSet->add(0xedc, 0xedd);
	android::icu::text::LaoBreakEngine::fBeginWordSet->add(cVar1, cVar0);
	android::icu::text::LaoBreakEngine::fMarkSet->compact();
	android::icu::text::LaoBreakEngine::fEndWordSet->compact();
	android::icu::text::LaoBreakEngine::fBeginWordSet->compact();
	android::icu::text::LaoBreakEngine::fLaoWordSet->freeze();
	android::icu::text::LaoBreakEngine::fMarkSet->freeze();
	android::icu::text::LaoBreakEngine::fEndWordSet->freeze();
	android::icu::text::LaoBreakEngine::fBeginWordSet->freeze();
	return;

}
// .method public constructor <init>()V
android::icu::text::LaoBreakEngine::LaoBreakEngine()
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<std::vector<java::lang::Integer>>> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 163        value = {
	// 164            Ljava/io/IOException;
	// 165        }
	// 166    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::Integer>>>(cVar0);
	cVar2[0x0] = java::lang::Integer::valueOf(cVar1);
	cVar2[cVar1] = java::lang::Integer::valueOf(cVar0);
	android::icu::text::DictionaryBreakEngine::(cVar2);
	this->setCharacters(android::icu::text::LaoBreakEngine::fLaoWordSet);
	this->fDictionary = android::icu::text::DictionaryData::loadDictionaryFor(std::make_shared<java::lang::String>(std::make_shared<char[]>("Laoo")));
	return;

}
// .method public divideUpDictionaryRange(Ljava/text/CharacterIterator;IILandroid/icu/text/DictionaryBreakEngine$DequeI;)I
int android::icu::text::LaoBreakEngine::divideUpDictionaryRange(std::shared_ptr<java::text::CharacterIterator> fIter,int rangeStart,int rangeEnd,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> foundBreaks)
{
	
	int wordsFound;
	std::shared<std::vector<std::vector<android::icu::text::DictionaryBreakEngine_S_PossibleWord>>> words;
	int i;
	std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_PossibleWord> cVar0;
	int current;
	int wordLength;
	int candidates;
	int pc;
	int uc;
	int chars;
	int remaining;
	int currPos;
	
	//    .param p1, "fIter"    # Ljava/text/CharacterIterator;
	//    .param p2, "rangeStart"    # I
	//    .param p3, "rangeEnd"    # I
	//    .param p4, "foundBreaks"    # Landroid/icu/text/DictionaryBreakEngine$DequeI;
	if ( (rangeEnd - rangeStart) >= 0x2 )
		goto label_cond_d;
	return 0x0;
	// 236    .line 99
label_cond_d:
	wordsFound = 0x0;
	//    .local v16, "wordsFound":I
	words = std::make_shared<std::vector<std::vector<android::icu::text::DictionaryBreakEngine_S_PossibleWord>>>(0x3);
	//    .local v15, "words":[Landroid/icu/text/DictionaryBreakEngine$PossibleWord;
	i = 0x0;
	//    .local v10, "i":I
label_goto_16:
	if ( i >= 0x3 )
		goto label_cond_26;
	cVar0 = std::make_shared<android::icu::text::DictionaryBreakEngine_S_PossibleWord>();
	words[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_16;
	// 272    .line 108
label_cond_26:
	fIter->setIndex(rangeStart);
label_cond_29:
label_goto_29:
	current = fIter->getIndex();
	//    .local v8, "current":I
	if ( current >= rangeEnd )
		goto label_cond_1c3;
	wordLength = 0x0;
	//    .local v14, "wordLength":I
	candidates = words[( wordsFound % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd);
	//    .local v5, "candidates":I
	if ( candidates != 0x1 )
		goto label_cond_d1;
	wordLength = words[( wordsFound % 0x3)]->acceptMarked(fIter);
	wordsFound = ( wordsFound + 0x1);
label_cond_5c:
label_goto_5c:
	if ( fIter->getIndex() >= rangeEnd )
		goto label_cond_b1;
	if ( wordLength >= 0x3 )
		goto label_cond_b1;
	if ( words[( wordsFound % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd) > 0 ) 
		goto label_cond_1a3;
	if ( !(wordLength) )  
		goto label_cond_96;
	if ( words[( wordsFound % 0x3)]->longestPrefix() >= 0x3 )
		goto label_cond_1a3;
label_cond_96:
	//    .local v12, "remaining":I
	pc = fIter->current();
	//    .local v11, "pc":I
	//    .local v6, "chars":I
label_goto_9f:
	fIter->next();
	uc = fIter->current();
	//    .local v13, "uc":I
	chars = ( chars + 0x1);
	remaining = ( remaining + -0x1);
	if ( remaining > 0 ) 
		goto label_cond_167;
label_cond_ac:
	if ( wordLength > 0 ) 
		goto label_cond_b0;
	wordsFound = ( wordsFound + 0x1);
label_cond_b0:
	wordLength = (wordLength +  chars);
	//    .end local v6    # "chars":I
	//    .end local v11    # "pc":I
	//    .end local v12    # "remaining":I
	//    .end local v13    # "uc":I
label_cond_b1:
label_goto_b1:
	currPos = fIter->getIndex();
	//    .local v7, "currPos":I
	if ( currPos >= rangeEnd )
		goto label_cond_1ae;
	if ( !(android::icu::text::LaoBreakEngine::fMarkSet->contains(fIter->current())) )  
		goto label_cond_1ae;
	fIter->next();
	wordLength = (wordLength + (fIter->getIndex() - currPos));
	goto label_goto_b1;
	// 491    .line 122
	// 492    .end local v7    # "currPos":I
label_cond_d1:
	if ( candidates <= 0x1 )
		goto label_cond_5c;
	0x0;
	//    .local v9, "foundBest":Z
	if ( fIter->getIndex() >= rangeEnd )
		goto label_cond_111;
label_goto_e2:
	0x1;
	//    .local v17, "wordsMatched":I
	if ( words[( ( wordsFound + 0x1) % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd) <= 0 )
		goto label_cond_153;
	words[( wordsFound % 0x3)]->markCurrent();
	0x2;
	if ( fIter->getIndex() <  rangeEnd )
		goto label_cond_131;
	//    .end local v17    # "wordsMatched":I
label_cond_111:
	wordLength = words[( wordsFound % 0x3)]->acceptMarked(fIter);
	wordsFound = ( wordsFound + 0x1);
	goto label_goto_5c;
	// 588    .line 148
	// 589    .restart local v17    # "wordsMatched":I
label_cond_121:
	if ( !(words[( ( wordsFound + 0x1) % 0x3)]->backUp(fIter)) )  
		goto label_cond_153;
label_cond_131:
	if ( words[( ( wordsFound + 0x2) % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd) <= 0 )
		goto label_cond_121;
	words[( wordsFound % 0x3)]->markCurrent();
label_cond_153:
	if ( !(words[( wordsFound % 0x3)]->backUp(fIter)) )  
		goto label_cond_111;
	if ( !(( 0x1 ^ 0x1)) )  
		goto label_cond_111;
	goto label_goto_e2;
	// 667    .line 179
	// 668    .end local v9    # "foundBest":Z
	// 669    .end local v17    # "wordsMatched":I
	// 670    .restart local v6    # "chars":I
	// 671    .restart local v11    # "pc":I
	// 672    .restart local v12    # "remaining":I
	// 673    .restart local v13    # "uc":I
label_cond_167:
	if ( !(android::icu::text::LaoBreakEngine::fEndWordSet->contains(pc)) )  
		goto label_cond_1a0;
	if ( !(android::icu::text::LaoBreakEngine::fBeginWordSet->contains(uc)) )  
		goto label_cond_1a0;
	//    .local v4, "candidate":I
	fIter->setIndex(((current + wordLength) + chars));
	if ( words[( ( wordsFound + 0x1) % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd) > 0 ) 
		goto label_cond_ac;
	//    .end local v4    # "candidate":I
label_cond_1a0:
	pc = uc;
	goto label_goto_9f;
	// 742    .line 199
	// 743    .end local v6    # "chars":I
	// 744    .end local v11    # "pc":I
	// 745    .end local v12    # "remaining":I
	// 746    .end local v13    # "uc":I
label_cond_1a3:
	fIter->setIndex((current + wordLength));
	goto label_goto_b1;
	// 758    .line 217
	// 759    .restart local v7    # "currPos":I
label_cond_1ae:
	if ( wordLength <= 0 )
		goto label_cond_29;
	foundBreaks->push(java::lang::Integer::valueOf((current + wordLength))->intValue());
	goto label_goto_29;
	// 782    .line 223
	// 783    .end local v5    # "candidates":I
	// 784    .end local v7    # "currPos":I
	// 785    .end local v14    # "wordLength":I
label_cond_1c3:
	if ( foundBreaks->peek() <  rangeEnd )
		goto label_cond_1d2;
	foundBreaks->pop();
	wordsFound = ( wordsFound + -0x1);
label_cond_1d2:
	return wordsFound;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::LaoBreakEngine::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	return obj->instanceOf("android::icu::text::LaoBreakEngine");

}
// .method public handles(II)Z
bool android::icu::text::LaoBreakEngine::handles(int c,int breakType)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p1, "c"    # I
	//    .param p2, "breakType"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( breakType == cVar0 )
		goto label_cond_7;
	if ( breakType != 0x2 )
		goto label_cond_14;
label_cond_7:
	//    .local v0, "script":I
	if ( android::icu::lang::UCharacter::getIntPropertyValue(c, 0x100a) != 0x18 )
		goto label_cond_12;
label_goto_11:
	return cVar0;
label_cond_12:
	cVar0 = cVar1;
	goto label_goto_11;
	// 858    .line 89
	// 859    .end local v0    # "script":I
label_cond_14:
	return cVar1;

}
// .method public hashCode()I
int android::icu::text::LaoBreakEngine::hashCode()
{
	
	return this->getClass()->hashCode();

}


