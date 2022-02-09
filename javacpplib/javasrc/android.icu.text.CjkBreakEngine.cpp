// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CjkBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.impl.CharacterIteration.h"
#include "android.icu.text.CjkBreakEngine.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.DictionaryBreakEngine.h"
#include "android.icu.text.DictionaryData.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "android.icu.text.Normalizer_S_Mode.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.CharacterIterator.h"
#include "java.text.StringCharacterIterator.h"

static android::icu::text::CjkBreakEngine::fHanWordSet;
static android::icu::text::CjkBreakEngine::fHangulWordSet;
static android::icu::text::CjkBreakEngine::fHiraganaWordSet;
static android::icu::text::CjkBreakEngine::fKatakanaWordSet;
static android::icu::text::CjkBreakEngine::kMaxKatakanaGroupLength = 0x14;
static android::icu::text::CjkBreakEngine::kMaxKatakanaLength = 0x8;
static android::icu::text::CjkBreakEngine::kint32max = 0x7fffffff;
static android::icu::text::CjkBreakEngine::maxSnlp = 0xff;
// .method static constructor <clinit>()V
void android::icu::text::CjkBreakEngine::static_cinit()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar3;
	
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::CjkBreakEngine::fHangulWordSet = cVar0;
	cVar1 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::CjkBreakEngine::fHanWordSet = cVar1;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::CjkBreakEngine::fKatakanaWordSet = cVar2;
	cVar3 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::CjkBreakEngine::fHiraganaWordSet = cVar3;
	android::icu::text::CjkBreakEngine::fHangulWordSet->applyPattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\\uac00-\\ud7a3]")));
	android::icu::text::CjkBreakEngine::fHanWordSet->applyPattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("[:Han:]")));
	android::icu::text::CjkBreakEngine::fKatakanaWordSet->applyPattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("[[:Katakana:]\\uff9e\\uff9f]")));
	android::icu::text::CjkBreakEngine::fHiraganaWordSet->applyPattern(std::make_shared<java::lang::String>(std::make_shared<char[]>("[:Hiragana:]")));
	android::icu::text::CjkBreakEngine::fHangulWordSet->freeze();
	android::icu::text::CjkBreakEngine::fHanWordSet->freeze();
	android::icu::text::CjkBreakEngine::fKatakanaWordSet->freeze();
	android::icu::text::CjkBreakEngine::fHiraganaWordSet->freeze();
	return;

}
// .method public constructor <init>(Z)V
android::icu::text::CjkBreakEngine::CjkBreakEngine(bool korean)
{
	
	int cVar0;
	std::shared<std::vector<std::vector<java::lang::Integer>>> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cjSet;
	
	//    .param p1, "korean"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 117        value = {
	// 118            Ljava/io/IOException;
	// 119        }
	// 120    .end annotation
	cVar0 = 0x1;
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Integer>>>(cVar0);
	cVar1[0x0] = java::lang::Integer::valueOf(cVar0);
	android::icu::text::DictionaryBreakEngine::(cVar1);
	this->fDictionary = 0x0;
	this->fDictionary = android::icu::text::DictionaryData::loadDictionaryFor(std::make_shared<java::lang::String>(std::make_shared<char[]>("Hira")));
	if ( !(korean) )  
		goto label_cond_21;
	this->setCharacters(android::icu::text::CjkBreakEngine::fHangulWordSet);
label_goto_20:
	return;
	// 164    .line 47
label_cond_21:
	cjSet = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v0, "cjSet":Landroid/icu/text/UnicodeSet;
	cjSet->addAll(android::icu::text::CjkBreakEngine::fHanWordSet);
	cjSet->addAll(android::icu::text::CjkBreakEngine::fKatakanaWordSet);
	cjSet->addAll(android::icu::text::CjkBreakEngine::fHiraganaWordSet);
	cjSet->add(0xff70);
	cjSet->add(0x30fc);
	this->setCharacters(cjSet);
	goto label_goto_20;

}
// .method private static getKatakanaCost(I)I
int android::icu::text::CjkBreakEngine::getKatakanaCost(int wordlength)
{
	
	std::shared<std::vector<int[]>> katakanaCost;
	int cVar0;
	
	//    .param p0, "wordlength"    # I
	katakanaCost = std::make_shared<std::vector<int[]>>(0x9);
	//    .local v0, "katakanaCost":[I
	?;
	if ( wordlength <= 0x8 )
		goto label_cond_e;
	cVar0 = 0x2000;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = katakanaCost[wordlength];
	goto label_goto_d;
	// 230    .line 76
	// 231    nop
	// 233    :array_12
	// 234    .array-data 4
	// 235        0x2000
	// 236        0x3d8
	// 237        0x198
	// 238        0xf0
	// 239        0xcc
	// 240        0xfc
	// 241        0x12c
	// 242        0x174
	// 243        0x1e0
	// 244    .end array-data

}
// .method private static isKatakana(I)Z
bool android::icu::text::CjkBreakEngine::isKatakana(int value)
{
	
	bool cVar0;
	
	//    .param p0, "value"    # I
	cVar0 = 0x1;
	if ( value <  0x30a1 )
		goto label_cond_f;
	if ( value >  0x30fe )
		goto label_cond_f;
	if ( value == 0x30fb )
		goto label_cond_f;
label_cond_e:
label_goto_e:
	return cVar0;
	// 273    .line 82
label_cond_f:
	if ( value <  0xff66 )
		goto label_cond_19;
	if ( value <= 0xff9f )
		goto label_cond_e;
label_cond_19:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public divideUpDictionaryRange(Ljava/text/CharacterIterator;IILandroid/icu/text/DictionaryBreakEngine$DequeI;)I
int android::icu::text::CjkBreakEngine::divideUpDictionaryRange(std::shared_ptr<java::text::CharacterIterator> inText,int startPos,int endPos,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> foundBreaks)
{
	
	std::shared<std::vector<int[]>> charPositions;
	std::shared_ptr<java::lang::StringBuffer> s;
	std::shared_ptr<java::lang::String> prenormstr;
	int cVar0;
	int numChars;
	std::shared_ptr<java::text::StringCharacterIterator> text;
	int index;
	std::shared<std::vector<int[]>> bestSnlp;
	int i;
	auto prev;
	std::shared<std::vector<int[]>> values;
	std::shared<std::vector<int[]>> lengths;
	int maxSearchLength;
	std::shared<std::vector<int[]>> count_;
	int count;
	int j;
	int newSnlp;
	int is_katakana;
	auto t_boundary;
	int numBreaks;
	int correctedNumBreaks;
	int pos;
	int cVar1;
	bool cVar2;
	std::shared_ptr<java::lang::String> normStr;
	std::shared_ptr<android::icu::text::Normalizer> normalizer;
	
	//    .param p1, "inText"    # Ljava/text/CharacterIterator;
	//    .param p2, "startPos"    # I
	//    .param p3, "endPos"    # I
	//    .param p4, "foundBreaks"    # Landroid/icu/text/DictionaryBreakEngine$DequeI;
	if ( startPos <  endPos )
		goto label_cond_8;
	return 0x0;
	// 311    .line 92
label_cond_8:
	inText->setIndex(startPos);
	//    .local v16, "inputLength":I
	charPositions = std::make_shared<std::vector<int[]>>(( (endPos - startPos) + 0x1));
	//    .local v10, "charPositions":[I
	var13 = s(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	//    .local v31, "s":Ljava/lang/StringBuffer;
	inText->setIndex(startPos);
label_goto_1e:
	if ( inText->getIndex() >= endPos )
		goto label_cond_33;
	s->append(inText->current());
	inText->next();
	goto label_goto_1e;
	// 362    .line 102
label_cond_33:
	prenormstr = s->toString();
	//    .local v29, "prenormstr":Ljava/lang/String;
	if ( android::icu::text::Normalizer::quickCheck(prenormstr, android::icu::text::Normalizer::NFKC) == android::icu::text::Normalizer::YES )
		goto label_cond_72;
	cVar0 = android::icu::text::Normalizer::isNormalized(prenormstr, android::icu::text::Normalizer::NFKC, 0x0);
label_goto_4c:
	numChars = 0x0;
	//    .local v27, "numChars":I
	if ( !(cVar0) )  
		goto label_cond_75;
	text = std::make_shared<java::text::StringCharacterIterator>(prenormstr);
	//    .local v3, "text":Ljava/text/CharacterIterator;
	index = 0x0;
	//    .local v15, "index":I
	charPositions[0x0] = 0x0;
label_goto_5c:
	if ( index >= prenormstr->length() )
		goto label_cond_af;
	//    .local v11, "codepoint":I
	index = (index +  java::lang::Character::charCount(prenormstr->codePointAt(index)));
	numChars = ( numChars + 0x1);
	charPositions[numChars] = index;
	goto label_goto_5c;
	// 451    .line 103
	// 452    .end local v3    # "text":Ljava/text/CharacterIterator;
	// 453    .end local v11    # "codepoint":I
	// 454    .end local v15    # "index":I
	// 455    .end local v27    # "numChars":I
label_cond_72:
	cVar0 = 0x1;
	//    .local v17, "isNormalized":Z
	goto label_goto_4c;
	// 462    .line 118
	// 463    .end local v17    # "isNormalized":Z
	// 464    .restart local v27    # "numChars":I
label_cond_75:
	normStr = android::icu::text::Normalizer::normalize(prenormstr, android::icu::text::Normalizer::NFKC);
	//    .local v23, "normStr":Ljava/lang/String;
	text = new java::text::StringCharacterIterator(normStr);
	//    .restart local v3    # "text":Ljava/text/CharacterIterator;
	charPositions = std::make_shared<std::vector<int[]>>(( normStr->length() + 0x1));
	var67 = normalizer(prenormstr, android::icu::text::Normalizer::NFKC, 0x0);
	//    .local v24, "normalizer":Landroid/icu/text/Normalizer;
	//    .restart local v15    # "index":I
	charPositions[0x0] = 0x0;
label_goto_9d:
	if ( index >= normalizer->endIndex() )
		goto label_cond_af;
	normalizer->next();
	numChars = ( numChars + 0x1);
	index = normalizer->getIndex();
	charPositions[numChars] = index;
	goto label_goto_9d;
	// 541    .line 134
	// 542    .end local v23    # "normStr":Ljava/lang/String;
	// 543    .end local v24    # "normalizer":Landroid/icu/text/Normalizer;
label_cond_af:
	bestSnlp = std::make_shared<std::vector<int[]>>(( numChars + 0x1));
	//    .local v9, "bestSnlp":[I
	bestSnlp[0x0] = 0x0;
	i = 0x1;
	//    .local v14, "i":I
label_goto_b8:
	if ( i >  numChars )
		goto label_cond_c4;
	bestSnlp[i] = 0x7fffffff;
	i = ( i + 0x1);
	goto label_goto_b8;
	// 576    .line 140
label_cond_c4:
	prev = std::make_shared<std::vector<int[]>>(( numChars + 0x1));
	//    .local v30, "prev":[I
	i = 0x0;
label_goto_cb:
	if ( i >  numChars )
		goto label_cond_d5;
	prev[i] = -0x1;
	i = ( i + 0x1);
	goto label_goto_cb;
	// 603    .line 145
label_cond_d5:
	0x14;
	//    .local v21, "maxWordSize":I
	values = std::make_shared<std::vector<int[]>>(numChars);
	//    .local v8, "values":[I
	lengths = std::make_shared<std::vector<int[]>>(numChars);
	//    .local v5, "lengths":[I
	//    .local v19, "is_prev_katakana":Z
	i = 0x0;
	//    .end local v19    # "is_prev_katakana":Z
label_goto_e2:
	if ( i >= numChars )
		goto label_cond_1a4;
	text->setIndex(i);
	if ( bestSnlp[i] != 0x7fffffff )
		goto label_cond_f3;
label_goto_f0:
	i = ( i + 0x1);
	goto label_goto_e2;
	// 649    .line 156
label_cond_f3:
	if ( ( i + 0x14) >= numChars )
		goto label_cond_156;
	maxSearchLength = 0x14;
	//    .local v4, "maxSearchLength":I
label_goto_fb:
	count_ = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v6, "count_":[I
	this->fDictionary->matches(text, maxSearchLength, lengths, count_, maxSearchLength, values);
	count = count_[0x0];
	//    .local v13, "count":I
	text->setIndex(i);
	if ( !(count) )  
		goto label_cond_114;
	if ( lengths[0x0] == 0x1 )
		goto label_cond_134;
label_cond_114:
	if ( android::icu::impl::CharacterIteration::current32(text) == 0x7fffffff )
		goto label_cond_134;
	if ( !(( android::icu::text::CjkBreakEngine::fHangulWordSet->contains(android::icu::impl::CharacterIteration::current32(text)) ^ 0x1)) )  
		goto label_cond_134;
	values[count] = 0xff;
	lengths[count] = 0x1;
label_cond_134:
	j = 0x0;
	//    .local v20, "j":I
label_goto_136:
	if ( j >= count )
		goto label_cond_159;
	newSnlp = (bestSnlp[i] + values[j]);
	//    .local v22, "newSnlp":I
	if ( newSnlp >= bestSnlp[(lengths[j] +  i)] )
		goto label_cond_153;
	bestSnlp[(lengths[j] +  i)] = newSnlp;
	prev[(lengths[j] +  i)] = i;
label_cond_153:
	j = ( j + 0x1);
	goto label_goto_136;
	// 781    .line 156
	// 782    .end local v4    # "maxSearchLength":I
	// 783    .end local v6    # "count_":[I
	// 784    .end local v13    # "count":I
	// 785    .end local v20    # "j":I
	// 786    .end local v22    # "newSnlp":I
label_cond_156:
	maxSearchLength = (numChars - i);
	//    .restart local v4    # "maxSearchLength":I
	goto label_goto_fb;
	// 793    .line 186
	// 794    .restart local v6    # "count_":[I
	// 795    .restart local v13    # "count":I
	// 796    .restart local v20    # "j":I
label_cond_159:
	is_katakana = android::icu::text::CjkBreakEngine::isKatakana(android::icu::impl::CharacterIteration::current32(text));
	//    .local v18, "is_katakana":Z
	if ( is_prev_katakana )     
		goto label_cond_1a0;
	if ( !(is_katakana) )  
		goto label_cond_1a0;
	j = ( i + 0x1);
	android::icu::impl::CharacterIteration::next32(text);
label_goto_16a:
	if ( j >= numChars )
		goto label_cond_186;
	if ( (j - i) >= 0x14 )
		goto label_cond_186;
	if ( !(android::icu::text::CjkBreakEngine::isKatakana(android::icu::impl::CharacterIteration::current32(text))) )  
		goto label_cond_186;
	android::icu::impl::CharacterIteration::next32(text);
	j = ( j + 0x1);
	goto label_goto_16a;
	// 850    .line 195
label_cond_186:
	if ( (j - i) >= 0x14 )
		goto label_cond_1a0;
	newSnlp = (bestSnlp[i] + android::icu::text::CjkBreakEngine::getKatakanaCost((j - i)));
	//    .restart local v22    # "newSnlp":I
	if ( newSnlp >= bestSnlp[j] )
		goto label_cond_1a0;
	bestSnlp[j] = newSnlp;
	prev[j] = i;
	//    .end local v22    # "newSnlp":I
label_cond_1a0:
	//    .local v19, "is_prev_katakana":Z
	goto label_goto_f0;
	// 891    .line 206
	// 892    .end local v4    # "maxSearchLength":I
	// 893    .end local v6    # "count_":[I
	// 894    .end local v13    # "count":I
	// 895    .end local v18    # "is_katakana":Z
	// 896    .end local v19    # "is_prev_katakana":Z
	// 897    .end local v20    # "j":I
label_cond_1a4:
	t_boundary = std::make_shared<std::vector<int[]>>(( numChars + 0x1));
	//    .local v32, "t_boundary":[I
	numBreaks = 0x0;
	//    .local v25, "numBreaks":I
	if ( bestSnlp[numChars] != 0x7fffffff )
		goto label_cond_1fa;
	t_boundary[numBreaks] = numChars;
	numBreaks = 0x1;
label_goto_1b7:
	if ( !(foundBreaks->size()) )  
		goto label_cond_1c5;
	if ( foundBreaks->peek() >= startPos )
		goto label_cond_1cc;
label_cond_1c5:
	numBreaks = ( numBreaks + 0x1);
	//    .end local v25    # "numBreaks":I
	//    .local v26, "numBreaks":I
	t_boundary[numBreaks] = 0x0;
	numBreaks = numBreaks;
	//    .end local v26    # "numBreaks":I
	//    .restart local v25    # "numBreaks":I
label_cond_1cc:
	correctedNumBreaks = 0x0;
	//    .local v12, "correctedNumBreaks":I
	i = ( numBreaks + -0x1);
label_goto_1cf:
	if ( i < 0 ) 
		goto label_cond_216;
	pos = (charPositions[t_boundary[i]] + startPos);
	//    .local v28, "pos":I
	if ( foundBreaks->contains(pos) )     
		goto label_cond_1e7;
	if ( pos != startPos )
		goto label_cond_214;
label_cond_1e7:
	cVar1 = 0x1;
label_goto_1e8:
	if ( cVar1 )     
		goto label_cond_1f7;
	foundBreaks->push((charPositions[t_boundary[i]] + startPos));
	correctedNumBreaks = ( correctedNumBreaks + 0x1);
label_cond_1f7:
	i = ( i + -0x1);
	goto label_goto_1cf;
	// 1015    .line 212
	// 1016    .end local v12    # "correctedNumBreaks":I
	// 1017    .end local v28    # "pos":I
label_cond_1fa:
	i = numChars;
label_goto_1fc:
	if ( i <= 0 )
		goto label_cond_205;
	t_boundary[numBreaks] = i;
	numBreaks = ( numBreaks + 0x1);
	i = prev[i];
	goto label_goto_1fc;
	// 1035    .line 216
label_cond_205:
	if ( prev[t_boundary[( numBreaks + -0x1)]] )     
		goto label_cond_212;
	cVar2 = 0x1;
label_goto_20e:
	android::icu::impl::Assert::assrt(cVar2);
	goto label_goto_1b7;
label_cond_212:
	cVar2 = 0x0;
	goto label_goto_20e;
	// 1057    .line 226
	// 1058    .restart local v12    # "correctedNumBreaks":I
	// 1059    .restart local v28    # "pos":I
label_cond_214:
	cVar1 = 0x0;
	goto label_goto_1e8;
	// 1065    .line 232
	// 1066    .end local v28    # "pos":I
label_cond_216:
	if ( foundBreaks->isEmpty() )     
		goto label_cond_229;
	if ( foundBreaks->peek() != endPos )
		goto label_cond_229;
	foundBreaks->pop();
	correctedNumBreaks = ( correctedNumBreaks + -0x1);
label_cond_229:
	if ( foundBreaks->isEmpty() )     
		goto label_cond_238;
	inText->setIndex(foundBreaks->peek());
label_cond_238:
	return correctedNumBreaks;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::CjkBreakEngine::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<android::icu::text::CjkBreakEngine> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( !(obj->instanceOf("android::icu::text::CjkBreakEngine")) )  
		goto label_cond_10;
	other = obj;
	other->checkCast("android::icu::text::CjkBreakEngine");
	//    .local v0, "other":Landroid/icu/text/CjkBreakEngine;
	return this->fSet->equals(other->fSet);
	// 1137    .line 63
	// 1138    .end local v0    # "other":Landroid/icu/text/CjkBreakEngine;
label_cond_10:
	return 0x0;

}
// .method public hashCode()I
int android::icu::text::CjkBreakEngine::hashCode()
{
	
	return this->getClass()->hashCode();

}


