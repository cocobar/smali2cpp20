// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ScientificNumberFormatter$SuperscriptStyle.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.NumberFormat_S_Field.h"
#include "android.icu.text.ScientificNumberFormatter_S_Style.h"
#include "android.icu.text.ScientificNumberFormatter_S_SuperscriptStyle.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.AttributedCharacterIterator.h"
#include "java.util.Map.h"

static android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::SUPERSCRIPT_DIGITS;
static android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::SUPERSCRIPT_MINUS_SIGN = '\u207b';
static android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::SUPERSCRIPT_PLUS_SIGN = '\u207a';
// .method static constructor <clinit>()V
void android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::static_cinit()
{
	
	std::shared<std::vector<char[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<char[]>>(0xa);
	?;
	android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::SUPERSCRIPT_DIGITS = cVar0;
	return;
	// 042    .line 190
	// 043    :array_a
	// 044    .array-data 2
	// 045        0x2070s
	// 046        0xb9s
	// 047        0xb2s
	// 048        0xb3s
	// 049        0x2074s
	// 050        0x2075s
	// 051        0x2076s
	// 052        0x2077s
	// 053        0x2078s
	// 054        0x2079s
	// 055    .end array-data

}
// .method private constructor <init>()V
android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::ScientificNumberFormatter_S_SuperscriptStyle()
{
	
	android::icu::text::ScientificNumberFormatter_S_Style::(0x0);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/ScientificNumberFormatter$SuperscriptStyle;)V
android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::ScientificNumberFormatter_S_SuperscriptStyle(std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/ScientificNumberFormatter$SuperscriptStyle;
	// 075    invoke-direct {p0}, Landroid/icu/text/ScientificNumberFormatter$SuperscriptStyle;-><init>()V
	return;

}
// .method private static char32AtAndAdvance(Ljava/text/AttributedCharacterIterator;)I
int android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::char32AtAndAdvance(std::shared_ptr<java::text::AttributedCharacterIterator> iterator)
{
	
	char c1;
	char c2;
	
	//    .param p0, "iterator"    # Ljava/text/AttributedCharacterIterator;
	c1 = iterator->current();
	//    .local v0, "c1":C
	c2 = iterator->next();
	//    .local v1, "c2":C
	if ( !(android::icu::lang::UCharacter::isHighSurrogate(c1)) )  
		goto label_cond_1c;
	if ( !(android::icu::lang::UCharacter::isLowSurrogate(c2)) )  
		goto label_cond_1c;
	iterator->next();
	return android::icu::lang::UCharacter::toCodePoint(c1, c2);
	// 121    .line 285
label_cond_1c:
	return c1;

}
// .method private static copyAsSuperscript(Ljava/text/AttributedCharacterIterator;IILjava/lang/StringBuilder;)V
void android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::copyAsSuperscript(std::shared_ptr<java::text::AttributedCharacterIterator> iterator,int start,int limit,std::shared_ptr<java::lang::StringBuilder> result)
{
	
	int digit;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "iterator"    # Ljava/text/AttributedCharacterIterator;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "result"    # Ljava/lang/StringBuilder;
	//    .local v2, "oldIndex":I
	iterator->setIndex(start);
label_goto_7:
	if ( iterator->getIndex() >= limit )
		goto label_cond_25;
	//    .local v0, "aChar":I
	digit = android::icu::lang::UCharacter::digit(android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::char32AtAndAdvance(iterator));
	//    .local v1, "digit":I
	if ( digit >= 0 )
		goto label_cond_1d;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 173    .line 269
label_cond_1d:
	result->append(android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::SUPERSCRIPT_DIGITS[digit]);
	goto label_goto_7;
	// 183    .line 271
	// 184    .end local v0    # "aChar":I
	// 185    .end local v1    # "digit":I
label_cond_25:
	iterator->setIndex(iterator->getIndex());
	return;

}
// .method format(Ljava/text/AttributedCharacterIterator;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::format(std::shared_ptr<java::text::AttributedCharacterIterator> iterator,std::shared_ptr<java::lang::String> preExponent)
{
	
	int copyFromOffset;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::util::Map> attributeSet;
	int start;
	int limit;
	int aChar;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "iterator"    # Ljava/text/AttributedCharacterIterator;
	//    .param p2, "preExponent"    # Ljava/lang/String;
	copyFromOffset = 0x0;
	//    .local v2, "copyFromOffset":I
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "result":Ljava/lang/StringBuilder;
	iterator->first();
label_goto_9:
	if ( iterator->current() == 0xffff )
		goto label_cond_9d;
	attributeSet = iterator->getAttributes();
	//    .local v1, "attributeSet":Ljava/util/Map;, "Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;"
	if ( !(attributeSet->containsKey(android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL)) )  
		goto label_cond_34;
	android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::append(iterator, copyFromOffset, iterator->getRunStart(android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL), result);
	copyFromOffset = iterator->getRunLimit(android::icu::text::NumberFormat_S_Field::EXPONENT_SYMBOL);
	iterator->setIndex(copyFromOffset);
	result->append(preExponent);
	goto label_goto_9;
	// 265    .line 217
label_cond_34:
	if ( !(attributeSet->containsKey(android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN)) )  
		goto label_cond_78;
	start = iterator->getRunStart(android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN);
	//    .local v5, "start":I
	limit = iterator->getRunLimit(android::icu::text::NumberFormat_S_Field::EXPONENT_SIGN);
	//    .local v3, "limit":I
	aChar = android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::char32AtAndAdvance(iterator);
	//    .local v0, "aChar":I
	if ( !(android::icu::text::DecimalFormat::minusSigns->contains(aChar)) )  
		goto label_cond_61;
	android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::append(iterator, copyFromOffset, start, result);
	result->append(0x207b);
label_goto_5c:
	copyFromOffset = limit;
	iterator->setIndex(limit);
	goto label_goto_9;
	// 323    .line 228
label_cond_61:
	if ( !(android::icu::text::DecimalFormat::plusSigns->contains(aChar)) )  
		goto label_cond_72;
	android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::append(iterator, copyFromOffset, start, result);
	result->append(0x207a);
	goto label_goto_5c;
	// 343    .line 236
label_cond_72:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 351    .line 240
	// 352    .end local v0    # "aChar":I
	// 353    .end local v3    # "limit":I
	// 354    .end local v5    # "start":I
label_cond_78:
	if ( !(attributeSet->containsKey(android::icu::text::NumberFormat_S_Field::EXPONENT)) )  
		goto label_cond_98;
	start = iterator->getRunStart(android::icu::text::NumberFormat_S_Field::EXPONENT);
	//    .restart local v5    # "start":I
	limit = iterator->getRunLimit(android::icu::text::NumberFormat_S_Field::EXPONENT);
	//    .restart local v3    # "limit":I
	android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::append(iterator, copyFromOffset, start, result);
	android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::copyAsSuperscript(iterator, start, limit, result);
	copyFromOffset = limit;
	iterator->setIndex(limit);
	goto label_goto_9;
	// 394    .line 252
	// 395    .end local v3    # "limit":I
	// 396    .end local v5    # "start":I
label_cond_98:
	iterator->next();
	goto label_goto_9;
	// 402    .line 255
	// 403    .end local v1    # "attributeSet":Ljava/util/Map;, "Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;"
label_cond_9d:
	android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::append(iterator, copyFromOffset, iterator->getEndIndex(), result);
	return result->toString();

}


