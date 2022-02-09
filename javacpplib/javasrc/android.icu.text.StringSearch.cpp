// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringSearch.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.CollationElementIterator.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.Normalizer_S_Mode.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.Normalizer.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.SearchIterator_S_ElementComparisonType.h"
#include "android.icu.text.SearchIterator_S_Search.h"
#include "android.icu.text.SearchIterator.h"
#include "android.icu.text.StringSearch_S_CEBuffer.h"
#include "android.icu.text.StringSearch_S_CEI.h"
#include "android.icu.text.StringSearch_S_CollationPCE_S_Range.h"
#include "android.icu.text.StringSearch_S_CollationPCE.h"
#include "android.icu.text.StringSearch_S_Match.h"
#include "android.icu.text.StringSearch_S_Pattern.h"
#include "android.icu.text.StringSearch.h"
#include "android.icu.util.ICUException.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.CharacterIterator.h"
#include "java.text.StringCharacterIterator.h"
#include "java.util.Locale.h"

static android::icu::text::StringSearch::CE_LEVEL2_BASE = 0x0;
static android::icu::text::StringSearch::CE_LEVEL3_BASE = 0x0;
static android::icu::text::StringSearch::CE_MATCH = -0x1;
static android::icu::text::StringSearch::CE_NO_MATCH = 0x0;
static android::icu::text::StringSearch::CE_SKIP_PATN = 0x2;
static android::icu::text::StringSearch::CE_SKIP_TARG = 0x1;
static android::icu::text::StringSearch::INITIAL_ARRAY_SIZE_ = 0x100;
static android::icu::text::StringSearch::PRIMARYORDERMASK = -0x10000;
static android::icu::text::StringSearch::SECONDARYORDERMASK = 0xff00;
static android::icu::text::StringSearch::TERTIARYORDERMASK = 0xff;
// .method static synthetic -get0(Landroid/icu/text/StringSearch;)Landroid/icu/text/StringSearch$Pattern;
std::shared_ptr<android::icu::text::StringSearch_S_Pattern> android::icu::text::StringSearch::_get0(std::shared_ptr<android::icu::text::StringSearch> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/StringSearch;
	return _this->pattern_;

}
// .method static synthetic -get1(Landroid/icu/text/StringSearch;)Landroid/icu/text/StringSearch$CollationPCE;
std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE> android::icu::text::StringSearch::_get1(std::shared_ptr<android::icu::text::StringSearch> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/StringSearch;
	return _this->textProcessedIter_;

}
// .method static synthetic -wrap0(Landroid/icu/text/StringSearch;)Z
bool android::icu::text::StringSearch::_wrap0(std::shared_ptr<android::icu::text::StringSearch> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/StringSearch;
	return _this->initTextProcessedIter();

}
// .method static constructor <clinit>()V
void android::icu::text::StringSearch::static_cinit()
{
	
	android::icu::text::StringSearch::CE_LEVEL2_BASE = 0x5;
	android::icu::text::StringSearch::CE_LEVEL3_BASE = 0x50000;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::text::StringSearch::StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> target)
{
	
	std::shared_ptr<java::text::StringCharacterIterator> cVar0;
	std::shared_ptr<android::icu::text::RuleBasedCollator> cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::text::StringCharacterIterator>(target);
	cVar1 = android::icu::text::Collator::getInstance({const[class].FS-Param});
	cVar1->checkCast("android::icu::text::RuleBasedCollator");
	android::icu::text::StringSearch::(pattern, cVar0, cVar1, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;)V
android::icu::text::StringSearch::StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<android::icu::text::RuleBasedCollator> collator)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/text/CharacterIterator;
	//    .param p3, "collator"    # Landroid/icu/text/RuleBasedCollator;
	android::icu::text::StringSearch::(pattern, target, collator, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;Landroid/icu/text/BreakIterator;)V
android::icu::text::StringSearch::StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<android::icu::text::RuleBasedCollator> collator,std::shared_ptr<android::icu::text::BreakIterator> breakiter)
{
	
	std::shared_ptr<android::icu::text::CollationElementIterator> cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	std::shared_ptr<android::icu::text::StringSearch_S_Pattern> cVar2;
	std::shared_ptr<android::icu::text::CollationElementIterator> cVar3;
	std::shared_ptr<android::icu::util::ULocale> collLocale;
	std::shared_ptr<java::text::CharacterIterator> cVar4;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/text/CharacterIterator;
	//    .param p3, "collator"    # Landroid/icu/text/RuleBasedCollator;
	//    .param p4, "breakiter"    # Landroid/icu/text/BreakIterator;
	cVar0 = 0x0;
	android::icu::text::SearchIterator::(target, breakiter);
	if ( !(collator->getNumericCollation()) )  
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Numeric collation is not supported by StringSearch")));
	// throw
	throw cVar1;
	// 185    .line 187
label_cond_13:
	this->collator_ = collator;
	this->strength_ = collator->getStrength();
	this->ceMask_ = android::icu::text::StringSearch::getMask(this->strength_);
	this->toShift_ = collator->isAlternateHandlingShifted();
	this->variableTop_ = collator->getVariableTop();
	this->nfd_ = android::icu::text::Normalizer2::getNFDInstance({const[class].FS-Param});
	cVar2 = std::make_shared<android::icu::text::StringSearch_S_Pattern>(pattern);
	this->pattern_ = cVar2;
	this->search_->setMatchedLength(0x0);
	this->search_->matchedIndex_ = -0x1;
	this->utilIter_ = cVar0;
	cVar3 = std::make_shared<android::icu::text::CollationElementIterator>(target, collator);
	this->textIter_ = cVar3;
	this->textProcessedIter_ = cVar0;
	collLocale = collator->getLocale(android::icu::util::ULocale::VALID_LOCALE);
	//    .local v0, "collLocale":Landroid/icu/util/ULocale;
	if ( collLocale )     
		goto label_cond_5e;
	//    .end local v0    # "collLocale":Landroid/icu/util/ULocale;
label_cond_5e:
	this->search_->internalBreakIter_ = android::icu::text::BreakIterator::getCharacterInstance(collLocale);
	cVar4 = target->clone();
	cVar4->checkCast("java::text::CharacterIterator");
	this->search_->internalBreakIter_->setText(cVar4);
	this->initialize();
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/util/ULocale;)V
android::icu::text::StringSearch::StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::RuleBasedCollator> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/text/CharacterIterator;
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = android::icu::text::Collator::getInstance(locale);
	cVar0->checkCast("android::icu::text::RuleBasedCollator");
	android::icu::text::StringSearch::(pattern, target, cVar0, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/text/CharacterIterator;Ljava/util/Locale;)V
android::icu::text::StringSearch::StringSearch(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/text/CharacterIterator;
	//    .param p3, "locale"    # Ljava/util/Locale;
	android::icu::text::StringSearch::(pattern, target, android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method private static addToIntArray([IIIII)[I
int android::icu::text::StringSearch::addToIntArray(std::shared_ptr<int[]> cVar1,int offset,int destinationlength,int value,int increments)
{
	
	int cVar0;
	std::shared<std::vector<int[]>> temp;
	std::shared_ptr<int[]> cVar1;
	
	//    .param p0, "destination"    # [I
	//    .param p1, "offset"    # I
	//    .param p2, "destinationlength"    # I
	//    .param p3, "value"    # I
	//    .param p4, "increments"    # I
	cVar0 = 0x0;
	destinationlength;
	//    .local v0, "newlength":I
	if ( ( offset + 0x1) != destinationlength )
		goto label_cond_e;
	temp = std::make_shared<std::vector<int[]>>((destinationlength + increments));
	//    .local v1, "temp":[I
	java::lang::System::arraycopy(cVar1, cVar0, temp, cVar0, offset);
	cVar1 = temp;
	//    .end local v1    # "temp":[I
label_cond_e:
	cVar1[offset] = value;
	return cVar1;

}
// .method private static addToLongArray([JIIJI)[J
long long android::icu::text::StringSearch::addToLongArray(std::shared_ptr<long long[]> cVar1,int offset,int destinationlength,long long value,int increments)
{
	
	int cVar0;
	std::shared<std::vector<long long[]>> temp;
	std::shared_ptr<long long[]> cVar1;
	
	//    .param p0, "destination"    # [J
	//    .param p1, "offset"    # I
	//    .param p2, "destinationlength"    # I
	//    .param p3, "value"    # J
	//    .param p5, "increments"    # I
	cVar0 = 0x0;
	destinationlength;
	//    .local v0, "newlength":I
	if ( ( offset + 0x1) != destinationlength )
		goto label_cond_e;
	temp = std::make_shared<std::vector<long long[]>>((destinationlength + increments));
	//    .local v1, "temp":[J
	java::lang::System::arraycopy(cVar1, cVar0, temp, cVar0, offset);
	cVar1 = temp;
	//    .end local v1    # "temp":[J
label_cond_e:
	cVar1[offset] = value;
	return cVar1;

}
// .method private checkIdentical(II)Z
bool android::icu::text::StringSearch::checkIdentical(int start,int end)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> textstr;
	std::shared_ptr<java::lang::String> patternstr;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	cVar0 = 0x0;
	if ( this->strength_ == 0xf )
		goto label_cond_9;
	return 0x1;
	// 447    .line 862
label_cond_9:
	textstr = android::icu::text::StringSearch::getString(this->targetText, start, (end - start));
	//    .local v1, "textstr":Ljava/lang/String;
	if ( android::icu::text::Normalizer::quickCheck(textstr, android::icu::text::Normalizer::NFD, cVar0) != android::icu::text::Normalizer::NO )
		goto label_cond_1f;
label_cond_1f:
	patternstr = this->pattern_->text_;
	//    .local v0, "patternstr":Ljava/lang/String;
	if ( android::icu::text::Normalizer::quickCheck(patternstr, android::icu::text::Normalizer::NFD, cVar0) != android::icu::text::Normalizer::NO )
		goto label_cond_31;
label_cond_31:
	return textstr->equals(patternstr);

}
// .method private static codePointAt(Ljava/text/CharacterIterator;I)I
int android::icu::text::StringSearch::codePointAt(std::shared_ptr<java::text::CharacterIterator> iter,int index)
{
	
	char codeUnit;
	char nextUnit;
	
	//    .param p0, "iter"    # Ljava/text/CharacterIterator;
	//    .param p1, "index"    # I
	//    .local v2, "currentIterIndex":I
	codeUnit = iter->setIndex(index);
	//    .local v0, "codeUnit":C
	//    .local v1, "cp":I
	if ( !(java::lang::Character::isHighSurrogate(codeUnit)) )  
		goto label_cond_1d;
	nextUnit = iter->next();
	//    .local v3, "nextUnit":C
	if ( !(java::lang::Character::isLowSurrogate(nextUnit)) )  
		goto label_cond_1d;
	//    .end local v3    # "nextUnit":C
label_cond_1d:
	iter->setIndex(iter->getIndex());
	return codeUnit;

}
// .method private static codePointBefore(Ljava/text/CharacterIterator;I)I
int android::icu::text::StringSearch::codePointBefore(std::shared_ptr<java::text::CharacterIterator> iter,int index)
{
	
	char codeUnit;
	char prevUnit;
	
	//    .param p0, "iter"    # Ljava/text/CharacterIterator;
	//    .param p1, "index"    # I
	//    .local v2, "currentIterIndex":I
	iter->setIndex(index);
	codeUnit = iter->previous();
	//    .local v0, "codeUnit":C
	//    .local v1, "cp":I
	if ( !(java::lang::Character::isLowSurrogate(codeUnit)) )  
		goto label_cond_20;
	prevUnit = iter->previous();
	//    .local v3, "prevUnit":C
	if ( !(java::lang::Character::isHighSurrogate(prevUnit)) )  
		goto label_cond_20;
	//    .end local v3    # "prevUnit":C
label_cond_20:
	iter->setIndex(iter->getIndex());
	return codeUnit;

}
// .method private static compareCE64s(JJLandroid/icu/text/SearchIterator$ElementComparisonType;)I
int android::icu::text::StringSearch::compareCE64s(long long targCE,long long patCE,std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> compareType)
{
	
	long long targCEshifted;
	long long patCEshifted;
	int targLev1;
	int patLev1;
	int targLev2;
	int patLev2;
	int cVar0;
	int targLev3;
	int patLev3;
	int cVar2;
	
	//    .param p0, "targCE"    # J
	//    .param p2, "patCE"    # J
	//    .param p4, "compareType"    # Landroid/icu/text/SearchIterator$ElementComparisonType;
	if ( (targCE > patCE) )     
		goto label_cond_6;
	return -0x1;
	// 638    .line 930
label_cond_6:
	if ( compareType != android::icu::text::SearchIterator_S_ElementComparisonType::STANDARD_ELEMENT_COMPARISON )
		goto label_cond_e;
	return 0x0;
	// 651    .line 934
label_cond_e:
	targCEshifted = _ushrll(targCE,0x20);
	//    .local v10, "targCEshifted":J
	patCEshifted = _ushrll(patCE,0x20);
	//    .local v4, "patCEshifted":J
	0xffff0000L;
	//    .local v2, "mask":J
	targLev1 = (int)((0xffff0000L &  targCEshifted));
	//    .local v9, "targLev1":I
	patLev1 = (int)((0xffff0000L &  patCEshifted));
	//    .local v6, "patLev1":I
	if ( targLev1 == patLev1 )
		goto label_cond_3b;
	if ( targLev1 )     
		goto label_cond_2f;
	return 0x1;
	// 696    .line 945
label_cond_2f:
	if ( patLev1 )     
		goto label_cond_39;
	if ( compareType != android::icu::text::SearchIterator_S_ElementComparisonType::ANY_BASE_WEIGHT_IS_WILDCARD )
		goto label_cond_39;
	return 0x2;
	// 712    .line 949
label_cond_39:
	return 0x0;
	// 718    .line 952
label_cond_3b:
	0xffff;
	targLev2 = (int)((0xffff &  targCEshifted));
	//    .local v12, "targLev2":I
	patLev2 = (int)((0xffff &  patCEshifted));
	//    .local v7, "patLev2":I
	if ( targLev2 == patLev2 )
		goto label_cond_6a;
	if ( targLev2 )     
		goto label_cond_4e;
	return 0x1;
	// 750    .line 959
label_cond_4e:
	if ( patLev2 )     
		goto label_cond_58;
	if ( compareType != android::icu::text::SearchIterator_S_ElementComparisonType::ANY_BASE_WEIGHT_IS_WILDCARD )
		goto label_cond_58;
	return 0x2;
	// 766    .line 963
label_cond_58:
	if ( patLev2 == android::icu::text::StringSearch::CE_LEVEL2_BASE )
		goto label_cond_66;
	if ( compareType != android::icu::text::SearchIterator_S_ElementComparisonType::ANY_BASE_WEIGHT_IS_WILDCARD )
		goto label_cond_68;
	if ( targLev2 != android::icu::text::StringSearch::CE_LEVEL2_BASE )
		goto label_cond_68;
label_cond_66:
	cVar0 = -0x1;
label_goto_67:
	return cVar0;
	// 791    .line 965
label_cond_68:
	cVar0 = 0x0;
	goto label_goto_67;
	// 797    .line 968
label_cond_6a:
	0xffff0000L;
	targLev3 = (int)((0xffff0000L & targCE));
	//    .local v13, "targLev3":I
	patLev3 = (int)((0xffff0000L & patCE));
	//    .local v8, "patLev3":I
	if ( targLev3 == patLev3 )
		goto label_cond_93;
	if ( patLev3 == android::icu::text::StringSearch::CE_LEVEL3_BASE )
		goto label_cond_8f;
	if ( compareType != android::icu::text::SearchIterator_S_ElementComparisonType::ANY_BASE_WEIGHT_IS_WILDCARD )
		goto label_cond_91;
	if ( targLev3 != android::icu::text::StringSearch::CE_LEVEL3_BASE )
		goto label_cond_91;
label_cond_8f:
	cVar2 = -0x1;
label_goto_90:
	return cVar2;
	// 845    .line 974
label_cond_91:
	cVar2 = 0x0;
	goto label_goto_90;
	// 851    .line 977
label_cond_93:
	return -0x1;

}
// .method private getCE(I)I
int android::icu::text::StringSearch::getCE(int sourcece)
{
	
	int cVar0;
	int cVar2;
	
	//    .param p1, "sourcece"    # I
	cVar0 = 0x3;
	cVar2 = (sourcece &  this->ceMask_);
	if ( !(this->toShift_) )  
		goto label_cond_16;
	if ( this->variableTop_ <= cVar2 )
		goto label_cond_13;
	if ( this->strength_ <  cVar0 )
		goto label_cond_14;
	cVar2 = (cVar2 &  -0x10000);
label_cond_13:
label_goto_13:
	return cVar2;
	// 895    .line 621
label_cond_14:
	cVar2 = 0x0;
	goto label_goto_13;
	// 901    .line 624
label_cond_16:
	if ( this->strength_ <  cVar0 )
		goto label_cond_13;
	if ( cVar2 )     
		goto label_cond_13;
	cVar2 = 0xffff;
	goto label_goto_13;

}
// .method private static getMask(I)I
int android::icu::text::StringSearch::getMask(int strength)
{
	
	//    .param p0, "strength"    # I
	// switch
	{
	auto item = ( strength );
	if (item == 0) goto label_pswitch_5;
	if (item == 1) goto label_pswitch_8;
	}
	return -0x1;
	// 928    .line 565
label_pswitch_5:
	return -0x10000;
	// 934    .line 567
label_pswitch_8:
	return -0x100;
	// 940    .line 563
	// 941    nop
	// 943    :pswitch_data_c
	// 944    .packed-switch 0x0
	// 945        :pswitch_5
	// 946        :pswitch_8
	// 947    .end packed-switch

}
// .method private static final getString(Ljava/text/CharacterIterator;II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::StringSearch::getString(std::shared_ptr<java::text::CharacterIterator> text,int start,int length)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	
	//    .param p0, "text"    # Ljava/text/CharacterIterator;
	//    .param p1, "start"    # I
	//    .param p2, "length"    # I
	result = std::make_shared<java::lang::StringBuilder>(length);
	//    .local v2, "result":Ljava/lang/StringBuilder;
	//    .local v1, "offset":I
	text->setIndex(start);
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( i >= length )
		goto label_cond_1c;
	result->append(text->current());
	text->next();
	i = ( i + 0x1);
	goto label_goto_d;
	// 994    .line 1588
label_cond_1c:
	text->setIndex(text->getIndex());
	return result->toString();

}
// .method private handleNextCanonical()Z
bool android::icu::text::StringSearch::handleNextCanonical()
{
	
	return this->handleNextCommonImpl();

}
// .method private handleNextCommonImpl()Z
bool android::icu::text::StringSearch::handleNextCommonImpl()
{
	
	std::shared_ptr<android::icu::text::StringSearch_S_Match> match;
	
	//    .local v1, "textOffset":I
	match = std::make_shared<android::icu::text::StringSearch_S_Match>(0x0);
	//    .local v0, "match":Landroid/icu/text/StringSearch$Match;
	if ( !(this->search(this->textIter_->getOffset(), match)) )  
		goto label_cond_24;
	this->search_->matchedIndex_ = match->start_;
	this->search_->setMatchedLength((match->limit_ -  match->start_));
	return 0x1;
	// 1068    .line 1515
label_cond_24:
	this->setMatchNotFound();
	return 0x0;

}
// .method private handleNextExact()Z
bool android::icu::text::StringSearch::handleNextExact()
{
	
	return this->handleNextCommonImpl();

}
// .method private handlePreviousCanonical()Z
bool android::icu::text::StringSearch::handlePreviousCanonical()
{
	
	return this->handlePreviousCommonImpl();

}
// .method private handlePreviousCommonImpl()Z
bool android::icu::text::StringSearch::handlePreviousCommonImpl()
{
	
	std::shared_ptr<android::icu::text::StringSearch_S_Match> cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::StringSearch_S_Match> match;
	int nPCEs;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	if ( !(this->search_->isOverlap_) )  
		goto label_cond_65;
	if ( this->search_->matchedIndex_ == -0x1 )
		goto label_cond_39;
	//    .local v4, "textOffset":I
label_goto_1c:
	match = std::make_shared<android::icu::text::StringSearch_S_Match>(cVar0);
	//    .local v0, "match":Landroid/icu/text/StringSearch$Match;
	if ( !(this->searchBackwards(textOffset, match)) )  
		goto label_cond_6c;
	this->search_->matchedIndex_ = match->start_;
	this->search_->setMatchedLength((match->limit_ -  match->start_));
	return 0x1;
	// 1179    .line 1541
	// 1180    .end local v0    # "match":Landroid/icu/text/StringSearch$Match;
	// 1181    .end local v4    # "textOffset":I
label_cond_39:
	this->initializePatternPCETable();
	if ( this->initTextProcessedIter() )     
		goto label_cond_46;
	this->setMatchNotFound();
	return cVar1;
	// 1198    .line 1546
label_cond_46:
	nPCEs = 0x0;
	//    .local v1, "nPCEs":I
label_goto_47:
	if ( nPCEs >= ( this->pattern_->PCELength_ + -0x1) )
		goto label_cond_5b;
	//    .local v2, "pce":J
	if ( (this->textProcessedIter_->nextProcessed(cVar0) > -0x1) )     
		goto label_cond_62;
	//    .end local v2    # "pce":J
label_cond_5b:
	//    .restart local v4    # "textOffset":I
	goto label_goto_1c;
	// 1239    .line 1546
	// 1240    .end local v4    # "textOffset":I
	// 1241    .restart local v2    # "pce":J
label_cond_62:
	nPCEs = ( nPCEs + 0x1);
	goto label_goto_47;
	// 1247    .line 1556
	// 1248    .end local v1    # "nPCEs":I
	// 1249    .end local v2    # "pce":J
label_cond_65:
	//    .restart local v4    # "textOffset":I
	goto label_goto_1c;
	// 1260    .line 1565
	// 1261    .restart local v0    # "match":Landroid/icu/text/StringSearch$Match;
label_cond_6c:
	this->setMatchNotFound();
	return cVar1;

}
// .method private handlePreviousExact()Z
bool android::icu::text::StringSearch::handlePreviousExact()
{
	
	return this->handlePreviousCommonImpl();

}
// .method private initTextProcessedIter()Z
bool android::icu::text::StringSearch::initTextProcessedIter()
{
	
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE> cVar0;
	
	if ( this->textProcessedIter_ )     
		goto label_cond_f;
	cVar0 = std::make_shared<android::icu::text::StringSearch_S_CollationPCE>(this->textIter_);
	this->textProcessedIter_ = cVar0;
label_goto_d:
	return 0x1;
	// 1305    .line 877
label_cond_f:
	this->textProcessedIter_->init(this->textIter_);
	goto label_goto_d;

}
// .method private initialize()V
void android::icu::text::StringSearch::initialize()
{
	
	this->initializePattern();
	return;

}
// .method private initializePattern()I
int android::icu::text::StringSearch::initializePattern()
{
	
	this->pattern_->PCE_ = 0x0;
	return this->initializePatternCETable();

}
// .method private initializePatternCETable()I
int android::icu::text::StringSearch::initializePatternCETable()
{
	
	std::shared<std::vector<int[]>> cetable;
	std::shared_ptr<android::icu::text::CollationElementIterator> coleiter;
	int offset;
	int result;
	int ce;
	int newce;
	std::shared_ptr<int[]> cetable;
	
	cetable = std::make_shared<std::vector<int[]>>(0x100);
	//    .local v1, "cetable":[I
	//    .local v2, "cetablesize":I
	//    .local v6, "patternlength":I
	coleiter = this->utilIter_;
	//    .local v3, "coleiter":Landroid/icu/text/CollationElementIterator;
	if ( coleiter )     
		goto label_cond_45;
	//    .end local v3    # "coleiter":Landroid/icu/text/CollationElementIterator;
	coleiter = std::make_shared<android::icu::text::CollationElementIterator>(this->pattern_->text_, this->collator_);
	//    .restart local v3    # "coleiter":Landroid/icu/text/CollationElementIterator;
	this->utilIter_ = coleiter;
label_goto_1f:
	offset = 0x0;
	//    .local v5, "offset":I
	result = 0x0;
	//    .local v7, "result":I
label_goto_21:
	ce = coleiter->next();
	//    .local v0, "ce":I
	if ( ce == -0x1 )
		goto label_cond_4d;
	newce = this->getCE(ce);
	//    .local v4, "newce":I
	if ( !(newce) )  
		goto label_cond_3d;
	//    .local v8, "temp":[I
	offset = ( offset + 0x1);
	cetable = android::icu::text::StringSearch::addToIntArray(cetable, offset, cetable->size(), newce, ( (this->pattern_->text_->length() - coleiter->getOffset()) + 0x1));
	//    .end local v8    # "temp":[I
label_cond_3d:
	result = (result +  ( coleiter->getMaxExpansion(ce) + -0x1));
	goto label_goto_21;
	// 1458    .line 700
	// 1459    .end local v0    # "ce":I
	// 1460    .end local v4    # "newce":I
	// 1461    .end local v5    # "offset":I
	// 1462    .end local v7    # "result":I
label_cond_45:
	coleiter->setText(this->pattern_->text_);
	goto label_goto_1f;
	// 1472    .line 718
	// 1473    .restart local v0    # "ce":I
	// 1474    .restart local v5    # "offset":I
	// 1475    .restart local v7    # "result":I
label_cond_4d:
	cetable[offset] = 0x0;
	this->pattern_->CE_ = cetable;
	this->pattern_->CELength_ = offset;
	return result;

}
// .method private initializePatternPCETable()I
int android::icu::text::StringSearch::initializePatternPCETable()
{
	
	std::shared<std::vector<long long[]>> pcetable;
	std::shared_ptr<android::icu::text::CollationElementIterator> coleiter;
	int offset;
	std::shared_ptr<android::icu::text::StringSearch_S_CollationPCE> iter;
	long long pce;
	std::shared_ptr<long long[]> pcetable;
	
	pcetable = std::make_shared<std::vector<long long[]>>(0x100);
	//    .local v1, "pcetable":[J
	//    .local v3, "pcetablesize":I
	//    .local v8, "patternlength":I
	coleiter = this->utilIter_;
	//    .local v0, "coleiter":Landroid/icu/text/CollationElementIterator;
	if ( coleiter )     
		goto label_cond_40;
	//    .end local v0    # "coleiter":Landroid/icu/text/CollationElementIterator;
	coleiter = std::make_shared<android::icu::text::CollationElementIterator>(this->pattern_->text_, this->collator_);
	//    .restart local v0    # "coleiter":Landroid/icu/text/CollationElementIterator;
	this->utilIter_ = coleiter;
label_goto_1f:
	offset = 0x0;
	//    .local v2, "offset":I
	//    .local v9, "result":I
	iter = std::make_shared<android::icu::text::StringSearch_S_CollationPCE>(coleiter);
	//    .local v7, "iter":Landroid/icu/text/StringSearch$CollationPCE;
label_goto_26:
	pce = iter->nextProcessed(0x0);
	//    .local v4, "pce":J
	if ( !((pce > -0x1)) )  
		goto label_cond_48;
	//    .local v10, "temp":[J
	offset = ( offset + 0x1);
	pcetable = android::icu::text::StringSearch::addToLongArray(pcetable, offset, pcetable->size(), pce, ( (this->pattern_->text_->length() - coleiter->getOffset()) + 0x1));
	goto label_goto_26;
	// 1592    .line 743
	// 1593    .end local v2    # "offset":I
	// 1594    .end local v4    # "pce":J
	// 1595    .end local v7    # "iter":Landroid/icu/text/StringSearch$CollationPCE;
	// 1596    .end local v9    # "result":I
	// 1597    .end local v10    # "temp":[J
label_cond_40:
	coleiter->setText(this->pattern_->text_);
	goto label_goto_1f;
	// 1607    .line 761
	// 1608    .restart local v2    # "offset":I
	// 1609    .restart local v4    # "pce":J
	// 1610    .restart local v7    # "iter":Landroid/icu/text/StringSearch$CollationPCE;
	// 1611    .restart local v9    # "result":I
label_cond_48:
	pcetable[offset] = 0x0;
	this->pattern_->PCE_ = pcetable;
	this->pattern_->PCELength_ = offset;
	return 0x0;

}
// .method private isBreakBoundary(I)Z
bool android::icu::text::StringSearch::isBreakBoundary(int index)
{
	
	auto breakiterator;
	std::shared_ptr<android::icu::text::BreakIterator> breakiterator;
	bool cVar0;
	
	//    .param p1, "index"    # I
	breakiterator = this->search_->breakIter();
	//    .local v0, "breakiterator":Landroid/icu/text/BreakIterator;
	if ( breakiterator )     
		goto label_cond_c;
	breakiterator = this->search_->internalBreakIter_;
label_cond_c:
	if ( !(breakiterator) )  
		goto label_cond_13;
	cVar0 = breakiterator->isBoundary(index);
label_goto_12:
	return cVar0;
label_cond_13:
	cVar0 = 0x0;
	goto label_goto_12;

}
// .method private static final isOutOfBounds(III)Z
bool android::icu::text::StringSearch::isOutOfBounds(int textstart,int textlimit,int offset)
{
	
	bool cVar0;
	
	//    .param p0, "textstart"    # I
	//    .param p1, "textlimit"    # I
	//    .param p2, "offset"    # I
	cVar0 = 0x1;
	if ( offset <  textstart )
		goto label_cond_5;
	if ( offset <= textlimit )
		goto label_cond_6;
label_cond_5:
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method private nextBoundaryAfter(I)I
int android::icu::text::StringSearch::nextBoundaryAfter(int startIndex)
{
	
	auto breakiterator;
	std::shared_ptr<android::icu::text::BreakIterator> breakiterator;
	
	//    .param p1, "startIndex"    # I
	breakiterator = this->search_->breakIter();
	//    .local v0, "breakiterator":Landroid/icu/text/BreakIterator;
	if ( breakiterator )     
		goto label_cond_c;
	breakiterator = this->search_->internalBreakIter_;
label_cond_c:
	if ( !(breakiterator) )  
		goto label_cond_13;
	return breakiterator->following(startIndex);
	// 1725    .line 898
label_cond_13:
	return startIndex;

}
// .method private search(ILandroid/icu/text/StringSearch$Match;)Z
bool android::icu::text::StringSearch::search(int startIdx,std::shared_ptr<android::icu::text::StringSearch_S_Match> m)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::text::StringSearch_S_CEBuffer> ceb;
	int targetIx;
	int mLimit;
	int found;
	int targetIxOffset;
	int firstCEI;
	std::shared_ptr<android::icu::util::ICUException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int patIx;
	auto patCE;
	auto targetCEI;
	int ceMatch;
	bool found;
	int lastCEI;
	int mStart;
	int minLimit;
	auto nextCEI;
	int maxLimit;
	int cVar4;
	int nba;
	
	//    .param p1, "startIdx"    # I
	//    .param p2, "m"    # Landroid/icu/text/StringSearch$Match;
	if ( !(this->pattern_->CELength_) )  
		goto label_cond_1e;
	if ( startIdx >= this->search_->beginIndex() )
		goto label_cond_66;
label_cond_1e:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("search(")))->append(startIdx)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", m) - expected position to be between ")))->append(this->search_->beginIndex())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" and ")))->append(this->search_->endIndex())->toString());
	// throw
	throw cVar0;
	// 1844    .line 993
label_cond_66:
	if ( startIdx >  this->search_->endIndex() )
		goto label_cond_1e;
	if ( this->pattern_->PCE_ )     
		goto label_cond_87;
	this->initializePatternPCETable();
label_cond_87:
	this->textIter_->setOffset(startIdx);
	ceb = std::make_shared<android::icu::text::StringSearch_S_CEBuffer>(this);
	//    .local v8, "ceb":Landroid/icu/text/StringSearch$CEBuffer;
	targetIx = 0x0;
	//    .local v23, "targetIx":I
	0x0;
	//    .local v22, "targetCEI":Landroid/icu/text/StringSearch$CEI;
	-0x1;
	//    .local v13, "mStart":I
	mLimit = -0x1;
	//    .local v12, "mLimit":I
	targetIx = 0x0;
	//    .end local v22    # "targetCEI":Landroid/icu/text/StringSearch$CEI;
label_goto_a3:
	found = 0x1;
	//    .local v10, "found":Z
	targetIxOffset = 0x0;
	//    .local v24, "targetIxOffset":I
	0x0;
	//    .local v18, "patCE":J
	firstCEI = ceb->get(targetIx);
	//    .local v9, "firstCEI":Landroid/icu/text/StringSearch$CEI;
	if ( firstCEI )     
		goto label_cond_d5;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::util::ICUException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CEBuffer.get(")))->append(targetIx)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") returned null.")))->toString());
	// throw
	throw cVar2;
	// 1981    .line 1042
label_cond_d5:
	patIx = 0x0;
	//    .local v20, "patIx":I
label_goto_d7:
	if ( patIx >= this->pattern_->PCELength_ )
		goto label_cond_120;
	patCE = this->pattern_->PCE_[patIx];
	targetCEI = ceb->get(((targetIx + patIx) + targetIxOffset));
	//    .local v22, "targetCEI":Landroid/icu/text/StringSearch$CEI;
	ceMatch = android::icu::text::StringSearch::compareCE64s(targetCEI->ce_, patCE, this->search_->elementComparisonType_);
	//    .local v7, "ceMatch":I
	if ( ceMatch )     
		goto label_cond_142;
	found = 0x0;
	//    .end local v7    # "ceMatch":I
	//    .end local v22    # "targetCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_120:
	targetIxOffset = (targetIxOffset + this->pattern_->PCELength_);
	if ( found )     
		goto label_cond_154;
	if ( !(targetCEI) )  
		goto label_cond_13e;
	if ( !((targetCEI->ce_ > -0x1)) )  
		goto label_cond_154;
label_cond_13e:
	targetIx = ( targetIx + 0x1);
	goto label_goto_a3;
	// 2109    .line 1052
	// 2110    .restart local v7    # "ceMatch":I
	// 2111    .restart local v22    # "targetCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_142:
	if ( ceMatch <= 0 )
		goto label_cond_14e;
	if ( ceMatch != 0x1 )
		goto label_cond_151;
	patIx = ( patIx + -0x1);
	targetIxOffset = ( targetIxOffset + 0x1);
label_cond_14e:
label_goto_14e:
	patIx = ( patIx + 0x1);
	goto label_goto_d7;
	// 2135    .line 1059
label_cond_151:
	targetIxOffset = ( targetIxOffset + -0x1);
	goto label_goto_14e;
	// 2141    .line 1070
	// 2142    .end local v7    # "ceMatch":I
	// 2143    .end local v22    # "targetCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_154:
	if ( found )     
		goto label_cond_165;
label_goto_156:
	if ( found )     
		goto label_cond_15a;
	mLimit = -0x1;
label_cond_15a:
	if ( !(m) )  
		goto label_cond_164;
	m->start_ = -0x1;
	m->limit_ = mLimit;
label_cond_164:
	return found;
	// 2175    .line 1080
label_cond_165:
	lastCEI = ceb->get(( (targetIx + targetIxOffset) + -0x1));
	//    .local v11, "lastCEI":Landroid/icu/text/StringSearch$CEI;
	mStart = firstCEI->lowIndex_;
	minLimit = lastCEI->lowIndex_;
	//    .local v15, "minLimit":I
	0x0;
	//    .local v17, "nextCEI":Landroid/icu/text/StringSearch$CEI;
	if ( this->search_->elementComparisonType_ != android::icu::text::SearchIterator_S_ElementComparisonType::STANDARD_ELEMENT_COMPARISON )
		goto label_cond_256;
	nextCEI = ceb->get((targetIx + targetIxOffset));
	//    .local v17, "nextCEI":Landroid/icu/text/StringSearch$CEI;
	maxLimit = nextCEI->lowIndex_;
	//    .local v14, "maxLimit":I
	if ( nextCEI->lowIndex_ != nextCEI->highIndex_ )
		goto label_cond_1b4;
	if ( !((nextCEI->ce_ > -0x1)) )  
		goto label_cond_1b4;
	found = 0x0;
label_cond_1b4:
label_goto_1b4:
	if ( this->isBreakBoundary(mStart) )     
		goto label_cond_1bd;
	found = 0x0;
label_cond_1bd:
	//    .local v21, "secondIx":I
	if ( mStart != firstCEI->highIndex_ )
		goto label_cond_1c6;
	found = 0x0;
label_cond_1c6:
	if ( this->breakIterator )     
		goto label_cond_2c4;
	if ( !(((_ushrll(nextCEI->ce_,0x20) & 0xffff0000L) > 0x0)) )  
		goto label_cond_2c4;
	if ( maxLimit <  lastCEI->highIndex_ )
		goto label_cond_2c4;
	if ( nextCEI->highIndex_ <= maxLimit )
		goto label_cond_2c4;
	if ( this->nfd_->hasBoundaryBefore(android::icu::text::StringSearch::codePointAt(this->targetText, maxLimit)) )     
		goto label_cond_2c1;
	cVar4 = this->nfd_->hasBoundaryAfter(android::icu::text::StringSearch::codePointBefore(this->targetText, maxLimit));
label_goto_225:
	mLimit = maxLimit;
	if ( minLimit >= maxLimit )
		goto label_cond_239;
	if ( minLimit != lastCEI->highIndex_ )
		goto label_cond_2c7;
	if ( !(this->isBreakBoundary(minLimit)) )  
		goto label_cond_2c7;
	mLimit = minLimit;
label_cond_239:
label_goto_239:
	if ( cVar4 )     
		goto label_cond_247;
	if ( mLimit <= maxLimit )
		goto label_cond_23e;
	found = 0x0;
label_cond_23e:
	if ( this->isBreakBoundary(mLimit) )     
		goto label_cond_247;
	found = 0x0;
label_cond_247:
	if ( this->checkIdentical(mStart, mLimit) )     
		goto label_cond_250;
	found = 0x0;
label_cond_250:
	if ( !(found) )  
		goto label_cond_13e;
	goto label_goto_156;
	// 2467    .line 1101
	// 2468    .end local v21    # "secondIx":I
	// 2469    .restart local v7    # "ceMatch":I
label_cond_254:
	targetIxOffset = ( targetIxOffset + 0x1);
	//    .end local v7    # "ceMatch":I
	//    .end local v14    # "maxLimit":I
	//    .end local v17    # "nextCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_256:
	nextCEI = ceb->get((targetIx + targetIxOffset));
	//    .restart local v17    # "nextCEI":Landroid/icu/text/StringSearch$CEI;
	maxLimit = nextCEI->lowIndex_;
	//    .restart local v14    # "maxLimit":I
	if ( !((nextCEI->ce_ > -0x1)) )  
		goto label_cond_1b4;
	if ( ((_ushrll(nextCEI->ce_,0x20) & 0xffff0000L) > 0x0) )     
		goto label_cond_2ac;
	ceMatch = android::icu::text::StringSearch::compareCE64s(nextCEI->ce_, patCE, this->search_->elementComparisonType_);
	//    .restart local v7    # "ceMatch":I
	if ( !(ceMatch) )  
		goto label_cond_2a9;
	if ( ceMatch != 0x2 )
		goto label_cond_254;
label_cond_2a9:
	found = 0x0;
	goto label_goto_1b4;
	// 2573    .line 1119
	// 2574    .end local v7    # "ceMatch":I
label_cond_2ac:
	if ( nextCEI->lowIndex_ != nextCEI->highIndex_ )
		goto label_cond_1b4;
	found = 0x0;
	goto label_goto_1b4;
	// 2600    .line 1164
	// 2601    .restart local v21    # "secondIx":I
label_cond_2c1:
	cVar4 = 0x1;
	//    .local v6, "allowMidclusterMatch":Z
	goto label_goto_225;
	// 2608    .line 1161
	// 2609    .end local v6    # "allowMidclusterMatch":Z
label_cond_2c4:
	cVar4 = 0x0;
	//    .restart local v6    # "allowMidclusterMatch":Z
	goto label_goto_225;
	// 2616    .line 1188
	// 2617    .end local v6    # "allowMidclusterMatch":Z
label_cond_2c7:
	nba = this->nextBoundaryAfter(minLimit);
	//    .local v16, "nba":I
	if ( nba <  lastCEI->highIndex_ )
		goto label_cond_239;
	if ( !(cVar4) )  
		goto label_cond_2dd;
	if ( nba >= maxLimit )
		goto label_cond_239;
label_cond_2dd:
	mLimit = nba;
	goto label_goto_239;

}
// .method private searchBackwards(ILandroid/icu/text/StringSearch$Match;)Z
bool android::icu::text::StringSearch::searchBackwards(int startIdx,std::shared_ptr<android::icu::text::StringSearch_S_Match> m)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::text::StringSearch_S_CEBuffer> ceb;
	int targetIx;
	int mLimit;
	int found;
	int lastCEI;
	std::shared_ptr<android::icu::util::ICUException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int targetIxOffset;
	int patIx;
	auto targetCEI;
	int ceMatch;
	bool found;
	int firstCEI;
	int mStart;
	int minLimit;
	auto nextCEI;
	int maxLimit;
	int cVar4;
	int nba;
	
	//    .param p1, "startIdx"    # I
	//    .param p2, "m"    # Landroid/icu/text/StringSearch$Match;
	if ( !(this->pattern_->CELength_) )  
		goto label_cond_1e;
	if ( startIdx >= this->search_->beginIndex() )
		goto label_cond_66;
label_cond_1e:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("searchBackwards(")))->append(startIdx)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", m) - expected position to be between ")))->append(this->search_->beginIndex())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" and ")))->append(this->search_->endIndex())->toString());
	// throw
	throw cVar0;
	// 2764    .line 1269
label_cond_66:
	if ( startIdx >  this->search_->endIndex() )
		goto label_cond_1e;
	if ( this->pattern_->PCE_ )     
		goto label_cond_87;
	this->initializePatternPCETable();
label_cond_87:
	ceb = std::make_shared<android::icu::text::StringSearch_S_CEBuffer>(this);
	//    .local v9, "ceb":Landroid/icu/text/StringSearch$CEBuffer;
	targetIx = 0x0;
	//    .local v25, "targetIx":I
	if ( startIdx >= this->search_->endIndex() )
		goto label_cond_108;
	//    .local v7, "bi":Landroid/icu/text/BreakIterator;
	//    .local v19, "next":I
	this->textIter_->setOffset(this->search_->internalBreakIter_->following(startIdx));
	targetIx = 0x0;
label_goto_bf:
	if ( ceb->getPrevious(targetIx)->lowIndex_ >= startIdx )
		goto label_cond_105;
	//    .end local v7    # "bi":Landroid/icu/text/BreakIterator;
	//    .end local v19    # "next":I
label_goto_d1:
	0x0;
	//    .local v24, "targetCEI":Landroid/icu/text/StringSearch$CEI;
	targetIx;
	//    .local v13, "limitIx":I
	-0x1;
	//    .local v15, "mStart":I
	mLimit = -0x1;
	//    .end local v24    # "targetCEI":Landroid/icu/text/StringSearch$CEI;
	//    .local v14, "mLimit":I
label_goto_d7:
	found = 0x1;
	//    .local v11, "found":Z
	lastCEI = ceb->getPrevious(targetIx);
	//    .local v12, "lastCEI":Landroid/icu/text/StringSearch$CEI;
	if ( lastCEI )     
		goto label_cond_116;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::util::ICUException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CEBuffer.getPrevious(")))->append(targetIx)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") returned null.")))->toString());
	// throw
	throw cVar2;
	// 2957    .line 1296
	// 2958    .end local v11    # "found":Z
	// 2959    .end local v12    # "lastCEI":Landroid/icu/text/StringSearch$CEI;
	// 2960    .end local v13    # "limitIx":I
	// 2961    .end local v14    # "mLimit":I
	// 2962    .end local v15    # "mStart":I
	// 2963    .restart local v7    # "bi":Landroid/icu/text/BreakIterator;
	// 2964    .restart local v19    # "next":I
label_cond_105:
	targetIx = ( targetIx + 0x1);
	goto label_goto_bf;
	// 2970    .line 1302
	// 2971    .end local v7    # "bi":Landroid/icu/text/BreakIterator;
	// 2972    .end local v19    # "next":I
label_cond_108:
	this->textIter_->setOffset(startIdx);
	goto label_goto_d1;
	// 2988    .line 1332
	// 2989    .restart local v11    # "found":Z
	// 2990    .restart local v12    # "lastCEI":Landroid/icu/text/StringSearch$CEI;
	// 2991    .restart local v13    # "limitIx":I
	// 2992    .restart local v14    # "mLimit":I
	// 2993    .restart local v15    # "mStart":I
label_cond_116:
	targetIxOffset = 0x0;
	//    .local v26, "targetIxOffset":I
	patIx = ( this->pattern_->PCELength_ + -0x1);
	//    .local v21, "patIx":I
label_goto_126:
	if ( patIx < 0 ) 
		goto label_cond_16f;
	//    .local v22, "patCE":J
	targetCEI = ceb->getPrevious(((( (this->pattern_->PCELength_ + targetIx) + -0x1) - patIx) + targetIxOffset));
	//    .local v24, "targetCEI":Landroid/icu/text/StringSearch$CEI;
	ceMatch = android::icu::text::StringSearch::compareCE64s(targetCEI->ce_, this->pattern_->PCE_[patIx], this->search_->elementComparisonType_);
	//    .local v8, "ceMatch":I
	if ( ceMatch )     
		goto label_cond_183;
	found = 0x0;
	//    .end local v8    # "ceMatch":I
	//    .end local v22    # "patCE":J
	//    .end local v24    # "targetCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_16f:
	if ( found )     
		goto label_cond_195;
	if ( !(targetCEI) )  
		goto label_cond_17f;
	if ( !((targetCEI->ce_ > -0x1)) )  
		goto label_cond_195;
label_cond_17f:
	targetIx = ( targetIx + 0x1);
	goto label_goto_d7;
	// 3124    .line 1344
	// 3125    .restart local v8    # "ceMatch":I
	// 3126    .restart local v22    # "patCE":J
	// 3127    .restart local v24    # "targetCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_183:
	if ( ceMatch <= 0 )
		goto label_cond_18f;
	if ( ceMatch != 0x1 )
		goto label_cond_192;
	patIx = ( patIx + 0x1);
	targetIxOffset = ( targetIxOffset + 0x1);
label_cond_18f:
label_goto_18f:
	patIx = ( patIx + -0x1);
	goto label_goto_126;
	// 3151    .line 1351
label_cond_192:
	targetIxOffset = ( targetIxOffset + -0x1);
	goto label_goto_18f;
	// 3157    .line 1361
	// 3158    .end local v8    # "ceMatch":I
	// 3159    .end local v22    # "patCE":J
	// 3160    .end local v24    # "targetCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_195:
	if ( found )     
		goto label_cond_1a6;
label_goto_197:
	if ( found )     
		goto label_cond_19b;
	mLimit = -0x1;
label_cond_19b:
	if ( !(m) )  
		goto label_cond_1a5;
	m->start_ = -0x1;
	m->limit_ = mLimit;
label_cond_1a5:
	return found;
	// 3192    .line 1371
label_cond_1a6:
	firstCEI = ceb->getPrevious((( (this->pattern_->PCELength_ + targetIx) + -0x1) + targetIxOffset));
	//    .local v10, "firstCEI":Landroid/icu/text/StringSearch$CEI;
	mStart = firstCEI->lowIndex_;
	if ( this->isBreakBoundary(mStart) )     
		goto label_cond_1c9;
	found = 0x0;
label_cond_1c9:
	if ( mStart != firstCEI->highIndex_ )
		goto label_cond_1d2;
	found = 0x0;
label_cond_1d2:
	minLimit = lastCEI->lowIndex_;
	//    .local v17, "minLimit":I
	if ( targetIx <= 0 )
		goto label_cond_2b1;
	nextCEI = ceb->getPrevious(( targetIx + -0x1));
	//    .local v20, "nextCEI":Landroid/icu/text/StringSearch$CEI;
	if ( nextCEI->lowIndex_ != nextCEI->highIndex_ )
		goto label_cond_1ff;
	if ( !((nextCEI->ce_ > -0x1)) )  
		goto label_cond_1ff;
	found = 0x0;
label_cond_1ff:
	maxLimit = nextCEI->lowIndex_;
	//    .local v16, "maxLimit":I
	mLimit = maxLimit;
	if ( this->breakIterator )     
		goto label_cond_2af;
	if ( !(((_ushrll(nextCEI->ce_,0x20) & 0xffff0000L) > 0x0)) )  
		goto label_cond_2af;
	if ( maxLimit <  lastCEI->highIndex_ )
		goto label_cond_2af;
	if ( nextCEI->highIndex_ <= maxLimit )
		goto label_cond_2af;
	if ( this->nfd_->hasBoundaryBefore(android::icu::text::StringSearch::codePointAt(this->targetText, maxLimit)) )     
		goto label_cond_2ad;
	cVar4 = this->nfd_->hasBoundaryAfter(android::icu::text::StringSearch::codePointBefore(this->targetText, maxLimit));
label_goto_26e:
	if ( minLimit >= maxLimit )
		goto label_cond_290;
	nba = this->nextBoundaryAfter(minLimit);
	//    .local v18, "nba":I
	if ( nba <  lastCEI->highIndex_ )
		goto label_cond_290;
	if ( !(cVar4) )  
		goto label_cond_28e;
	if ( nba >= maxLimit )
		goto label_cond_290;
label_cond_28e:
	mLimit = nba;
	//    .end local v18    # "nba":I
label_cond_290:
	if ( cVar4 )     
		goto label_cond_2a0;
	if ( mLimit <= maxLimit )
		goto label_cond_297;
	found = 0x0;
label_cond_297:
	if ( this->isBreakBoundary(mLimit) )     
		goto label_cond_2a0;
	found = 0x0;
	//    .end local v20    # "nextCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_2a0:
label_goto_2a0:
	if ( this->checkIdentical(mStart, mLimit) )     
		goto label_cond_2a9;
	found = 0x0;
label_cond_2a9:
	if ( !(found) )  
		goto label_cond_17f;
	goto label_goto_197;
	// 3505    .line 1424
	// 3506    .restart local v20    # "nextCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_2ad:
	cVar4 = 0x1;
	//    .local v6, "allowMidclusterMatch":Z
	goto label_goto_26e;
	// 3513    .line 1421
	// 3514    .end local v6    # "allowMidclusterMatch":Z
label_cond_2af:
	cVar4 = 0x0;
	//    .restart local v6    # "allowMidclusterMatch":Z
	goto label_goto_26e;
	// 3521    .line 1465
	// 3522    .end local v6    # "allowMidclusterMatch":Z
	// 3523    .end local v16    # "maxLimit":I
	// 3524    .end local v20    # "nextCEI":Landroid/icu/text/StringSearch$CEI;
label_cond_2b1:
	nba = this->nextBoundaryAfter(minLimit);
	//    .restart local v18    # "nba":I
	if ( nba <= 0 )
		goto label_cond_2c6;
	if ( startIdx <= nba )
		goto label_cond_2c6;
	maxLimit = nba;
	//    .restart local v16    # "maxLimit":I
label_goto_2c3:
	mLimit = maxLimit;
	goto label_goto_2a0;
	// 3552    .end local v16    # "maxLimit":I
label_cond_2c6:
	maxLimit = startIdx;
	goto label_goto_2c3;

}
// .method public getCollator()Landroid/icu/text/RuleBasedCollator;
std::shared_ptr<android::icu::text::RuleBasedCollator> android::icu::text::StringSearch::getCollator()
{
	
	return this->collator_;

}
// .method public getIndex()I
int android::icu::text::StringSearch::getIndex()
{
	
	int result;
	
	result = this->textIter_->getOffset();
	//    .local v0, "result":I
	if ( !(android::icu::text::StringSearch::isOutOfBounds(this->search_->beginIndex(), this->search_->endIndex(), result)) )  
		goto label_cond_1a;
	return -0x1;
	// 3607    .line 395
label_cond_1a:
	return result;

}
// .method public getPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::StringSearch::getPattern()
{
	
	return this->pattern_->text_;

}
// .method protected handleNext(I)I
int android::icu::text::StringSearch::handleNext(int position)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "position"    # I
	cVar0 = -0x1;
	if ( this->pattern_->CELength_ )     
		goto label_cond_3c;
	if ( this->search_->matchedIndex_ != cVar0 )
		goto label_cond_35;
	cVar1 = this->getIndex();
label_goto_14:
	this->search_->matchedIndex_ = cVar1;
	this->search_->setMatchedLength(0x0);
	this->textIter_->setOffset(this->search_->matchedIndex_);
	if ( this->search_->matchedIndex_ != this->search_->endIndex() )
		goto label_cond_34;
	this->search_->matchedIndex_ = cVar0;
label_cond_34:
	return cVar0;
	// 3694    .line 473
label_cond_35:
	cVar1 = ( this->search_->matchedIndex_ + 0x1);
	goto label_goto_14;
	// 3704    .line 480
label_cond_3c:
	if ( this->search_->matchedLength() > 0 ) 
		goto label_cond_4a;
	this->search_->matchedIndex_ = ( position + -0x1);
label_cond_4a:
	this->textIter_->setOffset(position);
	if ( !(this->search_->isCanonicalMatch_) )  
		goto label_cond_6e;
	this->handleNextCanonical();
label_goto_58:
	if ( this->search_->matchedIndex_ != cVar0 )
		goto label_cond_72;
	this->textIter_->setOffset(this->search_->endIndex());
label_goto_69:
	return this->search_->matchedIndex_;
	// 3764    .line 500
label_cond_6e:
	this->handleNextExact();
	goto label_goto_58;
	// 3770    .line 506
label_cond_72:
	this->textIter_->setOffset(this->search_->matchedIndex_);
	goto label_goto_69;

}
// .method protected handlePrevious(I)I
int android::icu::text::StringSearch::handlePrevious(int position)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::SearchIterator_S_Search> cVar2;
	
	//    .param p1, "position"    # I
	if ( this->pattern_->CELength_ )     
		goto label_cond_46;
	if ( this->search_->matchedIndex_ != -0x1 )
		goto label_cond_2a;
	cVar0 = this->getIndex();
label_goto_14:
	this->search_->matchedIndex_ = cVar0;
	if ( this->search_->matchedIndex_ != this->search_->beginIndex() )
		goto label_cond_2f;
	this->setMatchNotFound();
label_goto_25:
	return this->search_->matchedIndex_;
	// 3841    .line 522
label_cond_2a:
	cVar0 = this->search_->matchedIndex_;
	goto label_goto_14;
	// 3849    .line 526
label_cond_2f:
	cVar2 = this->search_;
	cVar2->matchedIndex_ = ( cVar2->matchedIndex_ + -0x1);
	this->textIter_->setOffset(this->search_->matchedIndex_);
	this->search_->setMatchedLength(0x0);
	goto label_goto_25;
	// 3875    .line 531
label_cond_46:
	this->textIter_->setOffset(position);
	if ( !(this->search_->isCanonicalMatch_) )  
		goto label_cond_55;
	this->handlePreviousCanonical();
	goto label_goto_25;
	// 3893    .line 537
label_cond_55:
	this->handlePreviousExact();
	goto label_goto_25;

}
// .method public isCanonical()Z
bool android::icu::text::StringSearch::isCanonical()
{
	
	return this->search_->isCanonicalMatch_;

}
// .method public reset()V
void android::icu::text::StringSearch::reset()
{
	
	bool cVar0;
	int cVar1;
	int cVar2;
	int sameCollAttribute;
	int newStrength;
	int ceMask;
	bool shift;
	int varTop;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x3;
	sameCollAttribute = 0x1;
	//    .local v2, "sameCollAttribute":Z
	newStrength = this->collator_->getStrength();
	//    .local v1, "newStrength":I
	if ( this->strength_ >= cVar2 )
		goto label_cond_71;
	if ( newStrength <  cVar2 )
		goto label_cond_71;
label_goto_10:
	sameCollAttribute = 0x0;
label_cond_11:
	this->strength_ = this->collator_->getStrength();
	ceMask = android::icu::text::StringSearch::getMask(this->strength_);
	//    .local v0, "ceMask":I
	if ( this->ceMask_ == ceMask )
		goto label_cond_26;
	this->ceMask_ = ceMask;
	sameCollAttribute = 0x0;
label_cond_26:
	shift = this->collator_->isAlternateHandlingShifted();
	//    .local v3, "shift":Z
	if ( this->toShift_ == shift )
		goto label_cond_33;
	this->toShift_ = shift;
	sameCollAttribute = 0x0;
label_cond_33:
	varTop = this->collator_->getVariableTop();
	//    .local v4, "varTop":I
	if ( this->variableTop_ == varTop )
		goto label_cond_40;
	this->variableTop_ = varTop;
	sameCollAttribute = 0x0;
label_cond_40:
	if ( sameCollAttribute )     
		goto label_cond_45;
	this->initialize();
label_cond_45:
	this->textIter_->setText(this->search_->text());
	this->search_->setMatchedLength(cVar1);
	this->search_->matchedIndex_ = -0x1;
	this->search_->isOverlap_ = cVar1;
	this->search_->isCanonicalMatch_ = cVar1;
	this->search_->elementComparisonType_ = android::icu::text::SearchIterator_S_ElementComparisonType::STANDARD_ELEMENT_COMPARISON;
	this->search_->isForwardSearching_ = cVar0;
	this->search_->reset_ = cVar0;
	return;
	// 4075    .line 428
	// 4076    .end local v0    # "ceMask":I
	// 4077    .end local v3    # "shift":Z
	// 4078    .end local v4    # "varTop":I
label_cond_71:
	if ( this->strength_ <  cVar2 )
		goto label_cond_11;
	if ( newStrength >= cVar2 )
		goto label_cond_11;
	goto label_goto_10;

}
// .method public setCanonical(Z)V
void android::icu::text::StringSearch::setCanonical(bool allowCanonical)
{
	
	//    .param p1, "allowCanonical"    # Z
	this->search_->isCanonicalMatch_ = allowCanonical;
	return;

}
// .method public setCollator(Landroid/icu/text/RuleBasedCollator;)V
void android::icu::text::StringSearch::setCollator(std::shared_ptr<android::icu::text::RuleBasedCollator> collator)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::util::ULocale> collLocale;
	std::shared_ptr<java::text::CharacterIterator> cVar1;
	std::shared_ptr<android::icu::text::CollationElementIterator> cVar2;
	std::shared_ptr<android::icu::text::CollationElementIterator> cVar3;
	
	//    .param p1, "collator"    # Landroid/icu/text/RuleBasedCollator;
	if ( collator )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Collator can not be null")));
	// throw
	throw cVar0;
	// 4120    .line 313
label_cond_b:
	this->collator_ = collator;
	this->ceMask_ = android::icu::text::StringSearch::getMask(this->collator_->getStrength());
	collLocale = collator->getLocale(android::icu::util::ULocale::VALID_LOCALE);
	//    .local v0, "collLocale":Landroid/icu/util/ULocale;
	if ( collLocale )     
		goto label_cond_25;
	//    .end local v0    # "collLocale":Landroid/icu/util/ULocale;
label_cond_25:
	this->search_->internalBreakIter_ = android::icu::text::BreakIterator::getCharacterInstance(collLocale);
	cVar1 = this->search_->text()->clone();
	cVar1->checkCast("java::text::CharacterIterator");
	this->search_->internalBreakIter_->setText(cVar1);
	this->toShift_ = collator->isAlternateHandlingShifted();
	this->variableTop_ = collator->getVariableTop();
	cVar2 = std::make_shared<android::icu::text::CollationElementIterator>(this->pattern_->text_, collator);
	this->textIter_ = cVar2;
	cVar3 = std::make_shared<android::icu::text::CollationElementIterator>(this->pattern_->text_, collator);
	this->utilIter_ = cVar3;
	this->initialize();
	return;

}
// .method public setIndex(I)V
void android::icu::text::StringSearch::setIndex(int position)
{
	
	//    .param p1, "position"    # I
	this->setIndex(position);
	this->textIter_->setOffset(position);
	return;

}
// .method protected setMatchNotFound()V
void android::icu::text::StringSearch::setMatchNotFound()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4242    .end annotation
	this->setMatchNotFound();
	if ( !(this->search_->isForwardSearching_) )  
		goto label_cond_19;
	this->textIter_->setOffset(this->search_->text()->getEndIndex());
label_goto_18:
	return;
	// 4274    .line 835
label_cond_19:
	this->textIter_->setOffset(0x0);
	goto label_goto_18;

}
// .method public setPattern(Ljava/lang/String;)V
void android::icu::text::StringSearch::setPattern(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	if ( !(pattern) )  
		goto label_cond_8;
	if ( pattern->length() > 0 ) 
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Pattern to search for can not be null or of length 0")));
	// throw
	throw cVar0;
	// 4311    .line 350
label_cond_11:
	this->pattern_->text_ = pattern;
	this->initialize();
	return;

}
// .method public setTarget(Ljava/text/CharacterIterator;)V
void android::icu::text::StringSearch::setTarget(std::shared_ptr<java::text::CharacterIterator> text)
{
	
	//    .param p1, "text"    # Ljava/text/CharacterIterator;
	this->setTarget(text);
	this->textIter_->setText(text);
	return;

}


