// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ThaiBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.DictionaryBreakEngine_S_PossibleWord.h"
#include "android.icu.text.DictionaryBreakEngine.h"
#include "android.icu.text.DictionaryData.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "android.icu.text.ThaiBreakEngine.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Class.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"

static android::icu::text::ThaiBreakEngine::THAI_LOOKAHEAD = 0x3t;
static android::icu::text::ThaiBreakEngine::THAI_MAIYAMOK = '\u0e46';
static android::icu::text::ThaiBreakEngine::THAI_MIN_WORD = 0x2t;
static android::icu::text::ThaiBreakEngine::THAI_MIN_WORD_SPAN = 0x4t;
static android::icu::text::ThaiBreakEngine::THAI_PAIYANNOI = '\u0e2f';
static android::icu::text::ThaiBreakEngine::THAI_PREFIX_COMBINE_THRESHOLD = 0x3t;
static android::icu::text::ThaiBreakEngine::THAI_ROOT_COMBINE_THRESHOLD = 0x3t;
static android::icu::text::ThaiBreakEngine::fBeginWordSet;
static android::icu::text::ThaiBreakEngine::fEndWordSet;
static android::icu::text::ThaiBreakEngine::fMarkSet;
static android::icu::text::ThaiBreakEngine::fSuffixSet;
static android::icu::text::ThaiBreakEngine::fThaiWordSet;
// .method static constructor <clinit>()V
void android::icu::text::ThaiBreakEngine::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar3;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar4;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar5;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar6;
	
	cVar0 = 0xe44;
	cVar1 = 0xe40;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::ThaiBreakEngine::fThaiWordSet = cVar2;
	cVar3 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::ThaiBreakEngine::fMarkSet = cVar3;
	cVar4 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::ThaiBreakEngine::fBeginWordSet = cVar4;
	cVar5 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::ThaiBreakEngine::fSuffixSet = cVar5;
	android::icu::text::ThaiBreakEngine::fThaiWordSet->applyPattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("[[:Thai:]&[:LineBreak=SA:]]")));
	android::icu::text::ThaiBreakEngine::fThaiWordSet->compact();
	android::icu::text::ThaiBreakEngine::fMarkSet->applyPattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("[[:Thai:]&[:LineBreak=SA:]&[:M:]]")));
	android::icu::text::ThaiBreakEngine::fMarkSet->add(0x20);
	cVar6 = std::make_shared<android::icu::text::UnicodeSet>(android::icu::text::ThaiBreakEngine::fThaiWordSet);
	android::icu::text::ThaiBreakEngine::fEndWordSet = cVar6;
	android::icu::text::ThaiBreakEngine::fEndWordSet->remove(0xe31);
	android::icu::text::ThaiBreakEngine::fEndWordSet->remove(cVar1, cVar0);
	android::icu::text::ThaiBreakEngine::fBeginWordSet->add(0xe01, 0xe2e);
	android::icu::text::ThaiBreakEngine::fBeginWordSet->add(cVar1, cVar0);
	android::icu::text::ThaiBreakEngine::fSuffixSet->add(0xe2f);
	android::icu::text::ThaiBreakEngine::fSuffixSet->add(0xe46);
	android::icu::text::ThaiBreakEngine::fMarkSet->compact();
	android::icu::text::ThaiBreakEngine::fEndWordSet->compact();
	android::icu::text::ThaiBreakEngine::fBeginWordSet->compact();
	android::icu::text::ThaiBreakEngine::fSuffixSet->compact();
	android::icu::text::ThaiBreakEngine::fThaiWordSet->freeze();
	android::icu::text::ThaiBreakEngine::fMarkSet->freeze();
	android::icu::text::ThaiBreakEngine::fEndWordSet->freeze();
	android::icu::text::ThaiBreakEngine::fBeginWordSet->freeze();
	android::icu::text::ThaiBreakEngine::fSuffixSet->freeze();
	return;

}
// .method public constructor <init>()V
android::icu::text::ThaiBreakEngine::ThaiBreakEngine()
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<std::vector<java::lang::Integer>>> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 200        value = {
	// 201            Ljava/io/IOException;
	// 202        }
	// 203    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::Integer>>>(cVar0);
	cVar2[0x0] = java::lang::Integer::valueOf(cVar1);
	cVar2[cVar1] = java::lang::Integer::valueOf(cVar0);
	android::icu::text::DictionaryBreakEngine::(cVar2);
	this->setCharacters(android::icu::text::ThaiBreakEngine::fThaiWordSet);
	this->fDictionary = android::icu::text::DictionaryData::loadDictionaryFor(std::make_shared<java::lang::String>(std::make_shared<char[]>("Thai")));
	return;

}
// .method public divideUpDictionaryRange(Ljava/text/CharacterIterator;IILandroid/icu/text/DictionaryBreakEngine$DequeI;)I
int android::icu::text::ThaiBreakEngine::divideUpDictionaryRange(std::shared_ptr<java::text::CharacterIterator> fIter,int rangeStart,int rangeEnd,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> foundBreaks)
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
	if ( (rangeEnd - rangeStart) >= 0x4 )
		goto label_cond_d;
	return 0x0;
	// 273    .line 110
label_cond_d:
	wordsFound = 0x0;
	//    .local v15, "wordsFound":I
	words = std::make_shared<std::vector<std::vector<android::icu::text::DictionaryBreakEngine_S_PossibleWord>>>(0x3);
	//    .local v14, "words":[Landroid/icu/text/DictionaryBreakEngine$PossibleWord;
	i = 0x0;
	//    .local v9, "i":I
label_goto_15:
	if ( i >= 0x3 )
		goto label_cond_25;
	cVar0 = std::make_shared<android::icu::text::DictionaryBreakEngine_S_PossibleWord>();
	words[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_15;
	// 309    .line 118
label_cond_25:
	fIter->setIndex(rangeStart);
label_cond_28:
label_goto_28:
	current = fIter->getIndex();
	//    .local v8, "current":I
	if ( current >= rangeEnd )
		goto label_cond_238;
	wordLength = 0x0;
	//    .local v13, "wordLength":I
	candidates = words[( wordsFound % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd);
	//    .local v5, "candidates":I
	if ( candidates != 0x1 )
		goto label_cond_d0;
	wordLength = words[( wordsFound % 0x3)]->acceptMarked(fIter);
	wordsFound = ( wordsFound + 0x1);
label_cond_5b:
label_goto_5b:
	if ( fIter->getIndex() >= rangeEnd )
		goto label_cond_b0;
	if ( wordLength >= 0x3 )
		goto label_cond_b0;
	if ( words[( wordsFound % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd) > 0 ) 
		goto label_cond_19c;
	if ( !(wordLength) )  
		goto label_cond_95;
	if ( words[( wordsFound % 0x3)]->longestPrefix() >= 0x3 )
		goto label_cond_19c;
label_cond_95:
	//    .local v11, "remaining":I
	pc = fIter->current();
	//    .local v10, "pc":I
	//    .local v6, "chars":I
label_goto_9e:
	fIter->next();
	uc = fIter->current();
	//    .local v12, "uc":I
	chars = ( chars + 0x1);
	remaining = ( remaining + -0x1);
	if ( remaining > 0 ) 
		goto label_cond_160;
label_cond_ab:
	if ( wordLength > 0 ) 
		goto label_cond_af;
	wordsFound = ( wordsFound + 0x1);
label_cond_af:
	wordLength = (wordLength +  chars);
	//    .end local v6    # "chars":I
	//    .end local v10    # "pc":I
	//    .end local v11    # "remaining":I
	//    .end local v12    # "uc":I
label_cond_b0:
label_goto_b0:
	currPos = fIter->getIndex();
	//    .local v7, "currPos":I
	if ( currPos >= rangeEnd )
		goto label_cond_1a7;
	if ( !(android::icu::text::ThaiBreakEngine::fMarkSet->contains(fIter->current())) )  
		goto label_cond_1a7;
	fIter->next();
	wordLength = (wordLength + (fIter->getIndex() - currPos));
	goto label_goto_b0;
	// 528    .line 133
	// 529    .end local v7    # "currPos":I
label_cond_d0:
	if ( candidates <= 0x1 )
		goto label_cond_5b;
	if ( fIter->getIndex() >= rangeEnd )
		goto label_cond_10f;
label_goto_e0:
	0x1;
	//    .local v16, "wordsMatched":I
	if ( words[( ( wordsFound + 0x1) % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd) <= 0 )
		goto label_cond_151;
	words[( wordsFound % 0x3)]->markCurrent();
	0x2;
	if ( fIter->getIndex() <  rangeEnd )
		goto label_cond_12f;
	//    .end local v16    # "wordsMatched":I
label_cond_10f:
label_goto_10f:
	wordLength = words[( wordsFound % 0x3)]->acceptMarked(fIter);
	wordsFound = ( wordsFound + 0x1);
	goto label_goto_5b;
	// 622    .line 158
	// 623    .restart local v16    # "wordsMatched":I
label_cond_11f:
	if ( !(words[( ( wordsFound + 0x1) % 0x3)]->backUp(fIter)) )  
		goto label_cond_151;
label_cond_12f:
	if ( words[( ( wordsFound + 0x2) % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd) <= 0 )
		goto label_cond_11f;
	words[( wordsFound % 0x3)]->markCurrent();
	goto label_goto_10f;
	// 678    .line 161
label_cond_151:
	if ( !(words[( wordsFound % 0x3)]->backUp(fIter)) )  
		goto label_cond_10f;
	goto label_goto_e0;
	// 696    .line 191
	// 697    .end local v16    # "wordsMatched":I
	// 698    .restart local v6    # "chars":I
	// 699    .restart local v10    # "pc":I
	// 700    .restart local v11    # "remaining":I
	// 701    .restart local v12    # "uc":I
label_cond_160:
	if ( !(android::icu::text::ThaiBreakEngine::fEndWordSet->contains(pc)) )  
		goto label_cond_199;
	if ( !(android::icu::text::ThaiBreakEngine::fBeginWordSet->contains(uc)) )  
		goto label_cond_199;
	//    .local v4, "candidate":I
	fIter->setIndex(((current + wordLength) + chars));
	if ( words[( ( wordsFound + 0x1) % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd) > 0 ) 
		goto label_cond_ab;
	//    .end local v4    # "candidate":I
label_cond_199:
	pc = uc;
	goto label_goto_9e;
	// 770    .line 215
	// 771    .end local v6    # "chars":I
	// 772    .end local v10    # "pc":I
	// 773    .end local v11    # "remaining":I
	// 774    .end local v12    # "uc":I
label_cond_19c:
	fIter->setIndex((current + wordLength));
	goto label_goto_b0;
	// 786    .line 230
	// 787    .restart local v7    # "currPos":I
label_cond_1a7:
	if ( fIter->getIndex() >= rangeEnd )
		goto label_cond_211;
	if ( wordLength <= 0 )
		goto label_cond_211;
	if ( words[( wordsFound % 0x3)]->candidates(fIter, this->fDictionary, rangeEnd) > 0 ) 
		goto label_cond_22e;
	uc = fIter->current();
	//    .restart local v12    # "uc":I
	if ( !(android::icu::text::ThaiBreakEngine::fSuffixSet->contains(uc)) )  
		goto label_cond_22e;
	if ( uc != 0xe2f )
		goto label_cond_1f7;
	if ( android::icu::text::ThaiBreakEngine::fSuffixSet->contains(fIter->previous()) )     
		goto label_cond_226;
	fIter->next();
	fIter->next();
	wordLength = ( wordLength + 0x1);
label_cond_1f7:
label_goto_1f7:
	if ( uc != 0xe46 )
		goto label_cond_211;
	if ( fIter->previous() == 0xe46 )
		goto label_cond_22a;
	fIter->next();
	fIter->next();
	wordLength = ( wordLength + 0x1);
	//    .end local v12    # "uc":I
label_cond_211:
label_goto_211:
	if ( wordLength <= 0 )
		goto label_cond_28;
	foundBreaks->push(java::lang::Integer::valueOf((current + wordLength))->intValue());
	goto label_goto_28;
	// 933    .line 242
	// 934    .restart local v12    # "uc":I
label_cond_226:
	fIter->next();
	goto label_goto_1f7;
	// 940    .line 253
label_cond_22a:
	fIter->next();
	goto label_goto_211;
	// 946    .line 257
	// 947    .end local v12    # "uc":I
label_cond_22e:
	fIter->setIndex((current + wordLength));
	goto label_goto_211;
	// 959    .line 268
	// 960    .end local v5    # "candidates":I
	// 961    .end local v7    # "currPos":I
	// 962    .end local v13    # "wordLength":I
label_cond_238:
	if ( foundBreaks->peek() <  rangeEnd )
		goto label_cond_247;
	foundBreaks->pop();
	wordsFound = ( wordsFound + -0x1);
label_cond_247:
	return wordsFound;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::ThaiBreakEngine::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	return obj->instanceOf("android::icu::text::ThaiBreakEngine");

}
// .method public handles(II)Z
bool android::icu::text::ThaiBreakEngine::handles(int c,int breakType)
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
	if ( android::icu::lang::UCharacter::getIntPropertyValue(c, 0x100a) != 0x26 )
		goto label_cond_12;
label_goto_11:
	return cVar0;
label_cond_12:
	cVar0 = cVar1;
	goto label_goto_11;
	// 1035    .line 101
	// 1036    .end local v0    # "script":I
label_cond_14:
	return cVar1;

}
// .method public hashCode()I
int android::icu::text::ThaiBreakEngine::hashCode()
{
	
	return this->getClass()->hashCode();

}


