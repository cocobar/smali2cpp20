// CPP L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacter.smali
#include "java2ctype.h"
#include "android.icu.impl.CaseMapImpl.h"
#include "android.icu.impl.IllegalIcuArgumentException.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.impl.UCharacterName.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.impl.UCharacterUtility.h"
#include "android.icu.impl.UPropertyAliases.h"
#include "android.icu.lang.UCharacter_S_DummyValueIterator.h"
#include "android.icu.lang.UCharacter_S_UCharacterTypeIterator.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.lang.UCharacterNameIterator.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.Edits_S_Iterator.h"
#include "android.icu.text.Edits.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.util.RangeValueIterator.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.ValueIterator.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Locale.h"

static android::icu::lang::UCharacter::APPLICATION_PROGRAM_COMMAND_ = 0x9f;
static android::icu::lang::UCharacter::BREAK_MASK = 0x230;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_EIGHT_ = 0x634c;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_FIVE_ = 0x4f0d;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_FOUR_ = 0x8086;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_HUNDRED_ = 0x4f70;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_NINE_ = 0x7396;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_ONE_ = 0x58f9;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_SEVEN_ = 0x67d2;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_SIX_ = 0x9678;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_TEN_ = 0x62fe;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_THOUSAND_ = 0x4edf;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_THREE_ = 0x53c3;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_TWO_ = 0x8cb3;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_COMPLEX_ZERO_ = 0x96f6;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_EIGHTH_ = 0x516b;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_FIFTH_ = 0x4e94;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_FIRST_ = 0x4e00;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_FOURTH_ = 0x56db;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_HUNDRED_ = 0x767e;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_HUNDRED_MILLION_ = 0x5104;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_NINETH_ = 0x4e5d;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_SECOND_ = 0x4e8c;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_SEVENTH_ = 0x4e03;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_SIXTH_ = 0x516d;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_TEN_ = 0x5341;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_TEN_THOUSAND_ = 0x824c;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_THIRD_ = 0x4e09;
static android::icu::lang::UCharacter::CJK_IDEOGRAPH_THOUSAND_ = 0x5343;
static android::icu::lang::UCharacter::DELETE_ = 0x7f;
static android::icu::lang::UCharacter::FIGURE_SPACE_ = 0x2007;
static android::icu::lang::UCharacter::FOLD_CASE_DEFAULT = 0x0;
static android::icu::lang::UCharacter::FOLD_CASE_EXCLUDE_SPECIAL_I = 0x1;
static android::icu::lang::UCharacter::IDEOGRAPHIC_NUMBER_ZERO_ = 0x3007;
static android::icu::lang::UCharacter::LAST_CHAR_MASK_ = 0xffff;
static android::icu::lang::UCharacter::MAX_CODE_POINT = 0x10ffff;
static android::icu::lang::UCharacter::MAX_HIGH_SURROGATE = '\udbff';
static android::icu::lang::UCharacter::MAX_LOW_SURROGATE = '\udfff';
static android::icu::lang::UCharacter::MAX_RADIX = 0x24;
static android::icu::lang::UCharacter::MAX_SURROGATE = '\udfff';
static android::icu::lang::UCharacter::MAX_VALUE = 0x10ffff;
static android::icu::lang::UCharacter::MIN_CODE_POINT = 0x0;
static android::icu::lang::UCharacter::MIN_HIGH_SURROGATE = '\ud800';
static android::icu::lang::UCharacter::MIN_LOW_SURROGATE = '\udc00';
static android::icu::lang::UCharacter::MIN_RADIX = 0x2;
static android::icu::lang::UCharacter::MIN_SUPPLEMENTARY_CODE_POINT = 0x10000;
static android::icu::lang::UCharacter::MIN_SURROGATE = '\ud800';
static android::icu::lang::UCharacter::MIN_VALUE = 0x0;
static android::icu::lang::UCharacter::NARROW_NO_BREAK_SPACE_ = 0x202f;
static android::icu::lang::UCharacter::NO_BREAK_SPACE_ = 0xa0;
static android::icu::lang::UCharacter::NO_NUMERIC_VALUE = -1.23456789E8;
static android::icu::lang::UCharacter::REPLACEMENT_CHAR = 0xfffd;
static android::icu::lang::UCharacter::SUPPLEMENTARY_MIN_VALUE = 0x10000;
static android::icu::lang::UCharacter::TITLECASE_NO_BREAK_ADJUSTMENT = 0x200;
static android::icu::lang::UCharacter::TITLECASE_NO_LOWERCASE = 0x100;
static android::icu::lang::UCharacter::UNIT_SEPARATOR_ = 0x1f;
// .method private constructor <init>()V
android::icu::lang::UCharacter::UCharacter()
{
	
	// 151    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static applyEdits(Ljava/lang/String;Ljava/lang/StringBuilder;Landroid/icu/text/Edits;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::applyEdits(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::StringBuilder> replacementChars,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<android::icu::text::Edits_S_Iterator> ei;
	int i;
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "replacementChars"    # Ljava/lang/StringBuilder;
	//    .param p2, "edits"    # Landroid/icu/text/Edits;
	if ( edits->hasChanges() )     
		goto label_cond_7;
	return str;
	// 174    .line 4389
label_cond_7:
	result = std::make_shared<java::lang::StringBuilder>((str->length() +  edits->lengthDelta()));
	//    .local v2, "result":Ljava/lang/StringBuilder;
	ei = edits->getCoarseIterator();
	//    .local v0, "ei":Landroid/icu/text/Edits$Iterator;
label_goto_19:
	if ( !(ei->next()) )  
		goto label_cond_3f;
	if ( !(ei->hasChange()) )  
		goto label_cond_32;
	i = ei->replacementIndex();
	//    .local v1, "i":I
	result->append(replacementChars, i, (ei->newLength() +  i));
	goto label_goto_19;
	// 228    .line 4395
	// 229    .end local v1    # "i":I
label_cond_32:
	i = ei->sourceIndex();
	//    .restart local v1    # "i":I
	result->append(str, i, (ei->oldLength() +  i));
	goto label_goto_19;
	// 247    .line 4399
	// 248    .end local v1    # "i":I
label_cond_3f:
	return result->toString();

}
// .method public static charCount(I)I
int android::icu::lang::UCharacter::charCount(int cp)
{
	
	//    .param p0, "cp"    # I
	return java::lang::Character::charCount(cp);

}
// .method public static final codePointAt(Ljava/lang/CharSequence;I)I
int android::icu::lang::UCharacter::codePointAt(std::shared_ptr<java::lang::CharSequence> seq,int index)
{
	
	int index;
	char c1;
	char c2;
	
	//    .param p0, "seq"    # Ljava/lang/CharSequence;
	//    .param p1, "index"    # I
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .local v2, "index":I
	c1 = seq->charAt(index);
	//    .local v0, "c1":C
	if ( !(android::icu::lang::UCharacter::isHighSurrogate(c1)) )  
		goto label_cond_21;
	if ( index >= seq->length() )
		goto label_cond_21;
	c2 = seq->charAt(index);
	//    .local v1, "c2":C
	if ( !(android::icu::lang::UCharacter::isLowSurrogate(c2)) )  
		goto label_cond_21;
	return android::icu::lang::UCharacter::toCodePoint(c1, c2);
	// 320    .line 5332
	// 321    .end local v1    # "c2":C
label_cond_21:
	return c1;

}
// .method public static final codePointAt([CI)I
int android::icu::lang::UCharacter::codePointAt(std::shared_ptr<char[]> text,int index)
{
	
	int index;
	char c1;
	char c2;
	
	//    .param p0, "text"    # [C
	//    .param p1, "index"    # I
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .local v2, "index":I
	c1 = text[index];
	//    .local v0, "c1":C
	if ( !(android::icu::lang::UCharacter::isHighSurrogate(c1)) )  
		goto label_cond_1a;
	if ( index >= text->size() )
		goto label_cond_1a;
	c2 = text[index];
	//    .local v1, "c2":C
	if ( !(android::icu::lang::UCharacter::isLowSurrogate(c2)) )  
		goto label_cond_1a;
	return android::icu::lang::UCharacter::toCodePoint(c1, c2);
	// 370    .line 5354
	// 371    .end local v1    # "c2":C
label_cond_1a:
	return c1;

}
// .method public static final codePointAt([CII)I
int android::icu::lang::UCharacter::codePointAt(std::shared_ptr<char[]> text,int index,int limit)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	int index;
	char c1;
	char c2;
	
	//    .param p0, "text"    # [C
	//    .param p1, "index"    # I
	//    .param p2, "limit"    # I
	if ( index >= limit )
		goto label_cond_5;
	if ( limit <= text->size() )
		goto label_cond_b;
label_cond_5:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 398    .line 5371
label_cond_b:
	index = ( index + 0x1);
	//    .end local p1    # "index":I
	//    .local v2, "index":I
	c1 = text[index];
	//    .local v0, "c1":C
	if ( !(android::icu::lang::UCharacter::isHighSurrogate(c1)) )  
		goto label_cond_24;
	if ( index >= limit )
		goto label_cond_24;
	c2 = text[index];
	//    .local v1, "c2":C
	if ( !(android::icu::lang::UCharacter::isLowSurrogate(c2)) )  
		goto label_cond_24;
	return android::icu::lang::UCharacter::toCodePoint(c1, c2);
	// 435    .line 5380
	// 436    .end local v1    # "c2":C
label_cond_24:
	return c1;

}
// .method public static final codePointBefore(Ljava/lang/CharSequence;I)I
int android::icu::lang::UCharacter::codePointBefore(std::shared_ptr<java::lang::CharSequence> seq,int index)
{
	
	int cVar0;
	char c2;
	char c1;
	
	//    .param p0, "seq"    # Ljava/lang/CharSequence;
	//    .param p1, "index"    # I
	cVar0 = ( index + -0x1);
	c2 = seq->charAt(cVar0);
	//    .local v1, "c2":C
	if ( !(android::icu::lang::UCharacter::isLowSurrogate(c2)) )  
		goto label_cond_1f;
	if ( cVar0 <= 0 )
		goto label_cond_1f;
	c1 = seq->charAt(( cVar0 + -0x1));
	//    .local v0, "c1":C
	if ( !(android::icu::lang::UCharacter::isHighSurrogate(c1)) )  
		goto label_cond_1f;
	return android::icu::lang::UCharacter::toCodePoint(c1, c2);
	// 487    .line 5402
	// 488    .end local v0    # "c1":C
label_cond_1f:
	return c2;

}
// .method public static final codePointBefore([CI)I
int android::icu::lang::UCharacter::codePointBefore(std::shared_ptr<char[]> text,int index)
{
	
	int cVar0;
	char c2;
	char c1;
	
	//    .param p0, "text"    # [C
	//    .param p1, "index"    # I
	cVar0 = ( index + -0x1);
	c2 = text[cVar0];
	//    .local v1, "c2":C
	if ( !(android::icu::lang::UCharacter::isLowSurrogate(c2)) )  
		goto label_cond_1b;
	if ( cVar0 <= 0 )
		goto label_cond_1b;
	c1 = text[( cVar0 + -0x1)];
	//    .local v0, "c1":C
	if ( !(android::icu::lang::UCharacter::isHighSurrogate(c1)) )  
		goto label_cond_1b;
	return android::icu::lang::UCharacter::toCodePoint(c1, c2);
	// 535    .line 5424
	// 536    .end local v0    # "c1":C
label_cond_1b:
	return c2;

}
// .method public static final codePointBefore([CII)I
int android::icu::lang::UCharacter::codePointBefore(std::shared_ptr<char[]> text,int index,int limit)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	int cVar1;
	char c2;
	char c1;
	
	//    .param p0, "text"    # [C
	//    .param p1, "index"    # I
	//    .param p2, "limit"    # I
	if ( index <= limit )
		goto label_cond_4;
	if ( limit >= 0 )
		goto label_cond_a;
label_cond_4:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 561    .line 5441
label_cond_a:
	cVar1 = ( index + -0x1);
	c2 = text[cVar1];
	//    .local v1, "c2":C
	if ( !(android::icu::lang::UCharacter::isLowSurrogate(c2)) )  
		goto label_cond_25;
	if ( cVar1 <= limit )
		goto label_cond_25;
	c1 = text[( cVar1 + -0x1)];
	//    .local v0, "c1":C
	if ( !(android::icu::lang::UCharacter::isHighSurrogate(c1)) )  
		goto label_cond_25;
	return android::icu::lang::UCharacter::toCodePoint(c1, c2);
	// 598    .line 5450
	// 599    .end local v0    # "c1":C
label_cond_25:
	return c2;

}
// .method public static codePointCount(Ljava/lang/CharSequence;II)I
int android::icu::lang::UCharacter::codePointCount(std::shared_ptr<java::lang::CharSequence> text,int start,int limit)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int len;
	int limit;
	int ch;
	
	//    .param p0, "text"    # Ljava/lang/CharSequence;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	if ( start < 0 ) 
		goto label_cond_4;
	if ( limit >= start )
		goto label_cond_38;
label_cond_4:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("start (")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") or limit (")))->append(limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") invalid or out of range 0, ")))->append(text->length())->toString());
	// throw
	throw cVar0;
	// 672    .line 5511
label_cond_38:
	if ( limit >  text->length() )
		goto label_cond_4;
	len = (limit - start);
	//    .local v1, "len":I
label_cond_40:
label_goto_40:
	if ( limit <= start )
		goto label_cond_67;
	limit = ( limit + -0x1);
	ch = text->charAt(limit);
	//    .local v0, "ch":C
label_cond_48:
	if ( ch <  0xdc00 )
		goto label_cond_40;
	if ( ch >  0xdfff )
		goto label_cond_40;
	if ( limit <= start )
		goto label_cond_40;
	limit = ( limit + -0x1);
	ch = text->charAt(limit);
	if ( ch <  0xd800 )
		goto label_cond_48;
	if ( ch >  0xdbff )
		goto label_cond_48;
	len = ( len + -0x1);
	goto label_goto_40;
	// 731    .line 5528
	// 732    .end local v0    # "ch":C
label_cond_67:
	return len;

}
// .method public static codePointCount([CII)I
int android::icu::lang::UCharacter::codePointCount(std::shared_ptr<char[]> text,int start,int limit)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int len;
	int limit;
	char ch;
	
	//    .param p0, "text"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	if ( start < 0 ) 
		goto label_cond_4;
	if ( limit >= start )
		goto label_cond_35;
label_cond_4:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("start (")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") or limit (")))->append(limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") invalid or out of range 0, ")))->append(text->size())->toString());
	// throw
	throw cVar0;
	// 803    .line 5540
label_cond_35:
	if ( limit >  text->size() )
		goto label_cond_4;
	len = (limit - start);
	//    .local v1, "len":I
label_cond_3a:
label_goto_3a:
	if ( limit <= start )
		goto label_cond_5d;
	limit = ( limit + -0x1);
	ch = text[limit];
	//    .local v0, "ch":C
label_cond_40:
	if ( ch <  0xdc00 )
		goto label_cond_3a;
	if ( ch >  0xdfff )
		goto label_cond_3a;
	if ( limit <= start )
		goto label_cond_3a;
	limit = ( limit + -0x1);
	ch = text[limit];
	if ( ch <  0xd800 )
		goto label_cond_40;
	if ( ch >  0xdbff )
		goto label_cond_40;
	len = ( len + -0x1);
	goto label_goto_3a;
	// 856    .line 5557
	// 857    .end local v0    # "ch":C
label_cond_5d:
	return len;

}
// .method public static digit(I)I
int android::icu::lang::UCharacter::digit(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCharacterProperty::INSTANCE->digit(ch);

}
// .method public static digit(II)I
int android::icu::lang::UCharacter::digit(int ch,int radix)
{
	
	int cVar0;
	int value;
	
	//    .param p0, "ch"    # I
	//    .param p1, "radix"    # I
	cVar0 = -0x1;
	if ( 0x2 >  radix )
		goto label_cond_17;
	if ( radix >  0x24 )
		goto label_cond_17;
	value = android::icu::lang::UCharacter::digit(ch);
	//    .local v0, "value":I
	if ( value >= 0 )
		goto label_cond_12;
	value = android::icu::impl::UCharacterProperty::getEuropeanDigit(ch);
label_cond_12:
	if ( value >= radix )
		goto label_cond_15;
	//    .end local v0    # "value":I
label_goto_14:
	return value;
	// 916    .restart local v0    # "value":I
label_cond_15:
	value = cVar0;
	goto label_goto_14;
	// 922    .line 3139
	// 923    .end local v0    # "value":I
label_cond_17:
	return cVar0;

}
// .method public static foldCase(II)I
int android::icu::lang::UCharacter::foldCase(int ch,int options)
{
	
	//    .param p0, "ch"    # I
	//    .param p1, "options"    # I
	return android::icu::impl::UCaseProps::INSTANCE->fold(ch, options);

}
// .method public static foldCase(IZ)I
int android::icu::lang::UCharacter::foldCase(int ch,bool defaultmapping)
{
	
	int cVar0;
	
	//    .param p0, "ch"    # I
	//    .param p1, "defaultmapping"    # Z
	if ( !(defaultmapping) )  
		goto label_cond_8;
	cVar0 = 0x0;
label_goto_3:
	return android::icu::lang::UCharacter::foldCase(ch, cVar0);
label_cond_8:
	cVar0 = 0x1;
	goto label_goto_3;

}
// .method public static final foldCase(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::foldCase(std::shared_ptr<java::lang::String> str,int options)
{
	
	std::shared_ptr<android::icu::text::Edits> edits;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> replacementChars;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "options"    # I
	if ( str->length() >  0x64 )
		goto label_cond_26;
	if ( !(str->isEmpty()) )  
		goto label_cond_f;
	return str;
	// 993    .line 4748
label_cond_f:
	edits = std::make_shared<android::icu::text::Edits>();
	//    .local v0, "edits":Landroid/icu/text/Edits;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	replacementChars = android::icu::impl::CaseMapImpl::fold(( options | 0x4000), str, cVar0, edits);
	replacementChars->checkCast("java::lang::StringBuilder");
	//    .local v1, "replacementChars":Ljava/lang/StringBuilder;
	return android::icu::lang::UCharacter::applyEdits(str, replacementChars, edits);
	// 1022    .line 4753
	// 1023    .end local v0    # "edits":Landroid/icu/text/Edits;
	// 1024    .end local v1    # "replacementChars":Ljava/lang/StringBuilder;
label_cond_26:
	cVar1 = std::make_shared<java::lang::StringBuilder>(str->length());
	cVar2 = android::icu::impl::CaseMapImpl::fold(options, str, cVar1, 0x0);
	cVar2->checkCast("java::lang::StringBuilder");
	return cVar2->toString();

}
// .method public static foldCase(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::foldCase(std::shared_ptr<java::lang::String> str,bool defaultmapping)
{
	
	int cVar0;
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "defaultmapping"    # Z
	if ( !(defaultmapping) )  
		goto label_cond_8;
	cVar0 = 0x0;
label_goto_3:
	return android::icu::lang::UCharacter::foldCase(str, cVar0);
label_cond_8:
	cVar0 = 0x1;
	goto label_goto_3;

}
// .method public static forDigit(II)C
char android::icu::lang::UCharacter::forDigit(int digit,int radix)
{
	
	//    .param p0, "digit"    # I
	//    .param p1, "radix"    # I
	return java::lang::Character::forDigit(digit, radix);

}
// .method public static getAge(I)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::lang::UCharacter::getAge(int ch)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "ch"    # I
	if ( ch < 0 ) 
		goto label_cond_7;
	if ( ch <= 0x10ffff )
		goto label_cond_10;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Codepoint out of bounds")));
	// throw
	throw cVar0;
	// 1109    .line 4971
label_cond_10:
	return android::icu::impl::UCharacterProperty::INSTANCE->getAge(ch);

}
// .method public static getBidiPairedBracket(I)I
int android::icu::lang::UCharacter::getBidiPairedBracket(int c)
{
	
	//    .param p0, "c"    # I
	return android::icu::impl::UBiDiProps::INSTANCE->getPairedBracket(c);

}
// .method private static getCaseLocale(Landroid/icu/util/ULocale;)I
int android::icu::lang::UCharacter::getCaseLocale(std::shared_ptr<android::icu::util::ULocale> cVar0)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = android::icu::util::ULocale::getDefault({const[class].FS-Param});
label_cond_6:
	return android::icu::impl::UCaseProps::getCaseLocale(cVar0);

}
// .method private static getCaseLocale(Ljava/util/Locale;)I
int android::icu::lang::UCharacter::getCaseLocale(std::shared_ptr<java::util::Locale> cVar0)
{
	
	std::shared_ptr<java::util::Locale> cVar0;
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = java::util::Locale::getDefault({const[class].FS-Param});
label_cond_6:
	return android::icu::impl::UCaseProps::getCaseLocale(cVar0);

}
// .method public static getCharFromExtendedName(Ljava/lang/String;)I
int android::icu::lang::UCharacter::getCharFromExtendedName(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	return android::icu::impl::UCharacterName::INSTANCE->getCharFromName(0x2, name);

}
// .method public static getCharFromName(Ljava/lang/String;)I
int android::icu::lang::UCharacter::getCharFromName(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	return android::icu::impl::UCharacterName::INSTANCE->getCharFromName(0x0, name);

}
// .method public static getCharFromName1_0(Ljava/lang/String;)I
int android::icu::lang::UCharacter::getCharFromName1_0(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1221    .end annotation
	return -0x1;

}
// .method public static getCharFromNameAlias(Ljava/lang/String;)I
int android::icu::lang::UCharacter::getCharFromNameAlias(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	return android::icu::impl::UCharacterName::INSTANCE->getCharFromName(0x3, name);

}
// .method public static getCodePoint(C)I
int android::icu::lang::UCharacter::getCodePoint(char char16)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "char16"    # C
	if ( !(android::icu::lang::UCharacter::isLegal(char16)) )  
		goto label_cond_7;
	return char16;
	// 1262    .line 4268
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal codepoint")));
	// throw
	throw cVar0;

}
// .method public static getCodePoint(CC)I
int android::icu::lang::UCharacter::getCodePoint(char lead,char trail)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "lead"    # C
	//    .param p1, "trail"    # C
	if ( !(java::lang::Character::isSurrogatePair(lead, trail)) )  
		goto label_cond_b;
	return java::lang::Character::toCodePoint(lead, trail);
	// 1293    .line 4252
label_cond_b:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal surrogate characters")));
	// throw
	throw cVar0;

}
// .method public static getCombiningClass(I)I
int android::icu::lang::UCharacter::getCombiningClass(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::text::Normalizer2::getNFDInstance({const[class].FS-Param})->getCombiningClass(ch);

}
// .method private static getDefaultCaseLocale()I
int android::icu::lang::UCharacter::getDefaultCaseLocale()
{
	
	return android::icu::impl::UCaseProps::getCaseLocale(java::util::Locale::getDefault({const[class].FS-Param}));

}
// .method public static getDirection(I)I
int android::icu::lang::UCharacter::getDirection(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UBiDiProps::INSTANCE->getClass(ch);

}
// .method public static getDirectionality(I)B
unsigned char android::icu::lang::UCharacter::getDirectionality(int cp)
{
	
	//    .param p0, "cp"    # I
	return (unsigned char)(android::icu::lang::UCharacter::getDirection(cp));

}
// .method public static getExtendedName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::getExtendedName(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCharacterName::INSTANCE->getName(ch, 0x2);

}
// .method public static getExtendedNameIterator()Landroid/icu/util/ValueIterator;
std::shared_ptr<android::icu::util::ValueIterator> android::icu::lang::UCharacter::getExtendedNameIterator()
{
	
	std::shared_ptr<android::icu::lang::UCharacterNameIterator> cVar0;
	
	cVar0 = std::make_shared<android::icu::lang::UCharacterNameIterator>(android::icu::impl::UCharacterName::INSTANCE, 0x2);
	return cVar0;

}
// .method public static getHanNumericValue(I)I
int android::icu::lang::UCharacter::getHanNumericValue(int ch)
{
	
	//    .param p0, "ch"    # I
	// switch
	{
	auto item = ( ch );
	if (item == 0x3007) goto label_sswitch_5;
	if (item == 0x4e00) goto label_sswitch_7;
	if (item == 0x4e03) goto label_sswitch_13;
	if (item == 0x4e09) goto label_sswitch_b;
	if (item == 0x4e5d) goto label_sswitch_18;
	if (item == 0x4e8c) goto label_sswitch_9;
	if (item == 0x4e94) goto label_sswitch_f;
	if (item == 0x4edf) goto label_sswitch_21;
	if (item == 0x4f0d) goto label_sswitch_f;
	if (item == 0x4f70) goto label_sswitch_1e;
	if (item == 0x5104) goto label_sswitch_27;
	if (item == 0x516b) goto label_sswitch_15;
	if (item == 0x516d) goto label_sswitch_11;
	if (item == 0x5341) goto label_sswitch_1b;
	if (item == 0x5343) goto label_sswitch_21;
	if (item == 0x53c3) goto label_sswitch_b;
	if (item == 0x56db) goto label_sswitch_d;
	if (item == 0x58f9) goto label_sswitch_7;
	if (item == 0x62fe) goto label_sswitch_1b;
	if (item == 0x634c) goto label_sswitch_15;
	if (item == 0x67d2) goto label_sswitch_13;
	if (item == 0x7396) goto label_sswitch_18;
	if (item == 0x767e) goto label_sswitch_1e;
	if (item == 0x8086) goto label_sswitch_d;
	if (item == 0x824c) goto label_sswitch_24;
	if (item == 0x8cb3) goto label_sswitch_9;
	if (item == 0x9678) goto label_sswitch_11;
	if (item == 0x96f6) goto label_sswitch_5;
	}
	return -0x1;
	// 1415    .line 4782
label_sswitch_5:
	return 0x0;
	// 1421    .line 4785
label_sswitch_7:
	return 0x1;
	// 1427    .line 4788
label_sswitch_9:
	return 0x2;
	// 1433    .line 4791
label_sswitch_b:
	return 0x3;
	// 1439    .line 4794
label_sswitch_d:
	return 0x4;
	// 1445    .line 4797
label_sswitch_f:
	return 0x5;
	// 1451    .line 4800
label_sswitch_11:
	return 0x6;
	// 1457    .line 4803
label_sswitch_13:
	return 0x7;
	// 1463    .line 4806
label_sswitch_15:
	return 0x8;
	// 1469    .line 4809
label_sswitch_18:
	return 0x9;
	// 1475    .line 4812
label_sswitch_1b:
	return 0xa;
	// 1481    .line 4815
label_sswitch_1e:
	return 0x64;
	// 1487    .line 4818
label_sswitch_21:
	return 0x3e8;
	// 1493    .line 4820
label_sswitch_24:
	return 0x2710;
	// 1499    .line 4822
label_sswitch_27:
	return 0x5f5e100;
	// 1505    .line 4778
	// 1506    nop
	// 1508    :sswitch_data_2c
	// 1509    .sparse-switch
	// 1510        0x3007 -> :sswitch_5
	// 1511        0x4e00 -> :sswitch_7
	// 1512        0x4e03 -> :sswitch_13
	// 1513        0x4e09 -> :sswitch_b
	// 1514        0x4e5d -> :sswitch_18
	// 1515        0x4e8c -> :sswitch_9
	// 1516        0x4e94 -> :sswitch_f
	// 1517        0x4edf -> :sswitch_21
	// 1518        0x4f0d -> :sswitch_f
	// 1519        0x4f70 -> :sswitch_1e
	// 1520        0x5104 -> :sswitch_27
	// 1521        0x516b -> :sswitch_15
	// 1522        0x516d -> :sswitch_11
	// 1523        0x5341 -> :sswitch_1b
	// 1524        0x5343 -> :sswitch_21
	// 1525        0x53c3 -> :sswitch_b
	// 1526        0x56db -> :sswitch_d
	// 1527        0x58f9 -> :sswitch_7
	// 1528        0x62fe -> :sswitch_1b
	// 1529        0x634c -> :sswitch_15
	// 1530        0x67d2 -> :sswitch_13
	// 1531        0x7396 -> :sswitch_18
	// 1532        0x767e -> :sswitch_1e
	// 1533        0x8086 -> :sswitch_d
	// 1534        0x824c -> :sswitch_24
	// 1535        0x8cb3 -> :sswitch_9
	// 1536        0x9678 -> :sswitch_11
	// 1537        0x96f6 -> :sswitch_5
	// 1538    .end sparse-switch

}
// .method public static getISOComment(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::getISOComment(int ch)
{
	
	//    .param p0, "ch"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1545    .end annotation
	return 0x0;

}
// .method public static getIntPropertyMaxValue(I)I
int android::icu::lang::UCharacter::getIntPropertyMaxValue(int type)
{
	
	//    .param p0, "type"    # I
	return android::icu::impl::UCharacterProperty::INSTANCE->getIntPropertyMaxValue(type);

}
// .method public static getIntPropertyMinValue(I)I
int android::icu::lang::UCharacter::getIntPropertyMinValue(int type)
{
	
	//    .param p0, "type"    # I
	return 0x0;

}
// .method public static getIntPropertyValue(II)I
int android::icu::lang::UCharacter::getIntPropertyValue(int ch,int type)
{
	
	//    .param p0, "ch"    # I
	//    .param p1, "type"    # I
	return android::icu::impl::UCharacterProperty::INSTANCE->getIntPropertyValue(ch, type);

}
// .method public static getMirror(I)I
int android::icu::lang::UCharacter::getMirror(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UBiDiProps::INSTANCE->getMirror(ch);

}
// .method public static getName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::getName(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCharacterName::INSTANCE->getName(ch, 0x0);

}
// .method public static getName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::getName(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::String> separator)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	int cp;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "separator"    # Ljava/lang/String;
	if ( s->length() != 0x1 )
		goto label_cond_11;
	return android::icu::lang::UCharacter::getName(s->charAt(0x0));
	// 1656    .line 3906
label_cond_11:
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v1, "i":I
label_goto_17:
	if ( i >= s->length() )
		goto label_cond_33;
	cp = s->codePointAt(i);
	//    .local v0, "cp":I
	if ( !(i) )  
		goto label_cond_26;
	sb->append(separator);
label_cond_26:
	sb->append(android::icu::lang::UCharacter::getName(cp));
	i = (i +  java::lang::Character::charCount(cp));
	goto label_goto_17;
	// 1702    .line 3912
	// 1703    .end local v0    # "cp":I
label_cond_33:
	return sb->toString();

}
// .method public static getName1_0(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::getName1_0(int ch)
{
	
	//    .param p0, "ch"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1716    .end annotation
	return 0x0;

}
// .method public static getName1_0Iterator()Landroid/icu/util/ValueIterator;
std::shared_ptr<android::icu::util::ValueIterator> android::icu::lang::UCharacter::getName1_0Iterator()
{
	
	std::shared_ptr<android::icu::lang::UCharacter_S_DummyValueIterator> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1728    .end annotation
	cVar0 = std::make_shared<android::icu::lang::UCharacter_S_DummyValueIterator>(0x0);
	return cVar0;

}
// .method public static getNameAlias(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::getNameAlias(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCharacterName::INSTANCE->getName(ch, 0x3);

}
// .method public static getNameIterator()Landroid/icu/util/ValueIterator;
std::shared_ptr<android::icu::util::ValueIterator> android::icu::lang::UCharacter::getNameIterator()
{
	
	std::shared_ptr<android::icu::lang::UCharacterNameIterator> cVar0;
	
	cVar0 = std::make_shared<android::icu::lang::UCharacterNameIterator>(android::icu::impl::UCharacterName::INSTANCE, 0x0);
	return cVar0;

}
// .method public static getNumericValue(I)I
int android::icu::lang::UCharacter::getNumericValue(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCharacterProperty::INSTANCE->getNumericValue(ch);

}
// .method public static getPropertyEnum(Ljava/lang/CharSequence;)I
int android::icu::lang::UCharacter::getPropertyEnum(std::shared_ptr<java::lang::CharSequence> propertyAlias)
{
	
	int propEnum;
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "propertyAlias"    # Ljava/lang/CharSequence;
	propEnum = android::icu::impl::UPropertyAliases::INSTANCE->getPropertyEnum(propertyAlias);
	//    .local v0, "propEnum":I
	if ( propEnum != -0x1 )
		goto label_cond_23;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid name: ")))->append(propertyAlias)->toString());
	// throw
	throw cVar0;
	// 1834    .line 4110
label_cond_23:
	return propEnum;

}
// .method public static getPropertyName(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::getPropertyName(int property,int nameChoice)
{
	
	//    .param p0, "property"    # I
	//    .param p1, "nameChoice"    # I
	return android::icu::impl::UPropertyAliases::INSTANCE->getPropertyName(property, nameChoice);

}
// .method public static getPropertyValueEnum(ILjava/lang/CharSequence;)I
int android::icu::lang::UCharacter::getPropertyValueEnum(int property,std::shared_ptr<java::lang::CharSequence> valueAlias)
{
	
	int propEnum;
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "property"    # I
	//    .param p1, "valueAlias"    # Ljava/lang/CharSequence;
	propEnum = android::icu::impl::UPropertyAliases::INSTANCE->getPropertyValueEnum(property, valueAlias);
	//    .local v0, "propEnum":I
	if ( propEnum != -0x1 )
		goto label_cond_23;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid name: ")))->append(valueAlias)->toString());
	// throw
	throw cVar0;
	// 1899    .line 4220
label_cond_23:
	return propEnum;

}
// .method public static getPropertyValueEnumNoThrow(ILjava/lang/CharSequence;)I
int android::icu::lang::UCharacter::getPropertyValueEnumNoThrow(int property,std::shared_ptr<java::lang::CharSequence> valueAlias)
{
	
	//    .param p0, "property"    # I
	//    .param p1, "valueAlias"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1909    .end annotation
	return android::icu::impl::UPropertyAliases::INSTANCE->getPropertyValueEnumNoThrow(property, valueAlias);

}
// .method public static getPropertyValueName(III)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::getPropertyValueName(int property,int value,int nameChoice)
{
	
	int cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "property"    # I
	//    .param p1, "value"    # I
	//    .param p2, "nameChoice"    # I
	cVar0 = 0x1002;
	if ( property == cVar0 )
		goto label_cond_8;
	if ( property != 0x1010 )
		goto label_cond_20;
label_cond_8:
	if ( value <  android::icu::lang::UCharacter::getIntPropertyMinValue(cVar0) )
		goto label_cond_24;
	if ( value >  android::icu::lang::UCharacter::getIntPropertyMaxValue(cVar0) )
		goto label_cond_24;
	if ( nameChoice < 0 ) 
		goto label_cond_24;
	if ( nameChoice >= 0x2 )
		goto label_cond_24;
	try {
	//label_try_start_19:
	//label_try_end_1e:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_19 .. :try_end_1e} :catch_2b
	return android::icu::impl::UPropertyAliases::INSTANCE->getPropertyValueName(property, value, nameChoice);
	// 1973    .line 4166
label_cond_20:
	if ( property == 0x1011 )
		goto label_cond_8;
label_cond_24:
	return android::icu::impl::UPropertyAliases::INSTANCE->getPropertyValueName(property, value, nameChoice);
	// 1989    .line 4178
label_catch_2b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalArgumentException;
	return 0x0;

}
// .method public static getStringPropertyValue(III)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::getStringPropertyValue(int propertyEnum,int codepoint,int nameChoice)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p0, "propertyEnum"    # I
	//    .param p1, "codepoint"    # I
	//    .param p2, "nameChoice"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2006    .end annotation
	cVar0 = 0x1;
	if ( propertyEnum < 0 ) 
		goto label_cond_10;
	if ( propertyEnum >= 0x3d )
		goto label_cond_10;
label_cond_7:
	return android::icu::lang::UCharacter::getPropertyValueName(propertyEnum, android::icu::lang::UCharacter::getIntPropertyValue(codepoint, propertyEnum), nameChoice);
	// 2030    .line 5104
label_cond_10:
	if ( propertyEnum <  0x1000 )
		goto label_cond_18;
	if ( propertyEnum <  0x1016 )
		goto label_cond_7;
label_cond_18:
	if ( propertyEnum != 0x3000 )
		goto label_cond_25;
	return java::lang::String::valueOf(android::icu::lang::UCharacter::getUnicodeNumericValue(codepoint));
	// 2057    .line 5112
label_cond_25:
	// switch
	{
	auto item = ( propertyEnum );
	if (item == 16384) goto label_pswitch_31;
	if (item == 16385) goto label_pswitch_3f;
	if (item == 16386) goto label_pswitch_48;
	if (item == 16387) goto label_pswitch_3a;
	if (item == 16388) goto label_pswitch_51;
	if (item == 16389) goto label_pswitch_5a;
	if (item == 16390) goto label_pswitch_5f;
	if (item == 16391) goto label_pswitch_68;
	if (item == 16392) goto label_pswitch_71;
	if (item == 16393) goto label_pswitch_7a;
	if (item == 16394) goto label_pswitch_83;
	if (item == 16395) goto label_pswitch_8c;
	if (item == 16396) goto label_pswitch_91;
	}
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal Property Enum")));
	// throw
	throw cVar1;
	// 2070    .line 5113
label_pswitch_31:
	return android::icu::lang::UCharacter::getAge(codepoint)->toString();
	// 2082    .line 5114
label_pswitch_3a:
	return android::icu::lang::UCharacter::getISOComment(codepoint);
	// 2090    .line 5115
label_pswitch_3f:
	return android::icu::lang::UCharacter::toString(android::icu::lang::UCharacter::getMirror(codepoint));
	// 2102    .line 5116
label_pswitch_48:
	return android::icu::lang::UCharacter::toString(android::icu::lang::UCharacter::foldCase(codepoint, cVar0));
	// 2114    .line 5117
label_pswitch_51:
	return android::icu::lang::UCharacter::toString(android::icu::lang::UCharacter::toLowerCase(codepoint));
	// 2126    .line 5118
label_pswitch_5a:
	return android::icu::lang::UCharacter::getName(codepoint);
	// 2134    .line 5119
label_pswitch_5f:
	return android::icu::lang::UCharacter::toString(android::icu::lang::UCharacter::foldCase(codepoint, cVar0));
	// 2146    .line 5120
label_pswitch_68:
	return android::icu::lang::UCharacter::toString(android::icu::lang::UCharacter::toLowerCase(codepoint));
	// 2158    .line 5121
label_pswitch_71:
	return android::icu::lang::UCharacter::toString(android::icu::lang::UCharacter::toTitleCase(codepoint));
	// 2170    .line 5122
label_pswitch_7a:
	return android::icu::lang::UCharacter::toString(android::icu::lang::UCharacter::toUpperCase(codepoint));
	// 2182    .line 5123
label_pswitch_83:
	return android::icu::lang::UCharacter::toString(android::icu::lang::UCharacter::toTitleCase(codepoint));
	// 2194    .line 5124
label_pswitch_8c:
	return android::icu::lang::UCharacter::getName1_0(codepoint);
	// 2202    .line 5125
label_pswitch_91:
	return android::icu::lang::UCharacter::toString(android::icu::lang::UCharacter::toUpperCase(codepoint));
	// 2214    .line 5112
	// 2215    :pswitch_data_9a
	// 2216    .packed-switch 0x4000
	// 2217        :pswitch_31
	// 2218        :pswitch_3f
	// 2219        :pswitch_48
	// 2220        :pswitch_3a
	// 2221        :pswitch_51
	// 2222        :pswitch_5a
	// 2223        :pswitch_5f
	// 2224        :pswitch_68
	// 2225        :pswitch_71
	// 2226        :pswitch_7a
	// 2227        :pswitch_83
	// 2228        :pswitch_8c
	// 2229        :pswitch_91
	// 2230    .end packed-switch

}
// .method public static getType(I)I
int android::icu::lang::UCharacter::getType(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCharacterProperty::INSTANCE->getType(ch);

}
// .method public static getTypeIterator()Landroid/icu/util/RangeValueIterator;
std::shared_ptr<android::icu::util::RangeValueIterator> android::icu::lang::UCharacter::getTypeIterator()
{
	
	std::shared_ptr<android::icu::lang::UCharacter_S_UCharacterTypeIterator> cVar0;
	
	cVar0 = std::make_shared<android::icu::lang::UCharacter_S_UCharacterTypeIterator>();
	return cVar0;

}
// .method public static getUnicodeNumericValue(I)D
double android::icu::lang::UCharacter::getUnicodeNumericValue(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCharacterProperty::INSTANCE->getUnicodeNumericValue(ch);

}
// .method public static getUnicodeVersion()Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::lang::UCharacter::getUnicodeVersion()
{
	
	return android::icu::impl::UCharacterProperty::INSTANCE->m_unicodeVersion_;

}
// .method public static hasBinaryProperty(II)Z
bool android::icu::lang::UCharacter::hasBinaryProperty(int ch,int property)
{
	
	//    .param p0, "ch"    # I
	//    .param p1, "property"    # I
	return android::icu::impl::UCharacterProperty::INSTANCE->hasBinaryProperty(ch, property);

}
// .method public static isBMP(I)Z
bool android::icu::lang::UCharacter::isBMP(int ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # I
	cVar1 = 0x0;
	if ( ch < 0 ) 
		goto label_cond_9;
	if ( ch >  0xffff )
		goto label_cond_9;
	cVar1 = 0x1;
label_cond_9:
	return cVar1;

}
// .method public static isBaseForm(I)Z
bool android::icu::lang::UCharacter::isBaseForm(int ch)
{
	
	bool cVar0;
	int cat;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	cat = android::icu::lang::UCharacter::getType(ch);
	//    .local v0, "cat":I
	if ( cat == 0x9 )
		goto label_cond_d;
	if ( cat != 0xb )
		goto label_cond_e;
label_cond_d:
label_goto_d:
	return cVar0;
	// 2351    .line 3732
label_cond_e:
	if ( cat == 0xa )
		goto label_cond_d;
	if ( cat == cVar0 )
		goto label_cond_d;
	if ( cat == 0x2 )
		goto label_cond_d;
	if ( cat == 0x3 )
		goto label_cond_d;
	if ( cat == 0x4 )
		goto label_cond_d;
	if ( cat == 0x5 )
		goto label_cond_d;
	if ( cat == 0x6 )
		goto label_cond_d;
	if ( cat == 0x7 )
		goto label_cond_d;
	if ( cat == 0x8 )
		goto label_cond_d;
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method public static isDefined(I)Z
bool android::icu::lang::UCharacter::isDefined(int ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # I
	cVar1 = 0x0;
	if ( !(android::icu::lang::UCharacter::getType(ch)) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public static isDigit(I)Z
bool android::icu::lang::UCharacter::isDigit(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	if ( android::icu::lang::UCharacter::getType(ch) != 0x9 )
		goto label_cond_a;
	cVar0 = 0x1;
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public static isHighSurrogate(C)Z
bool android::icu::lang::UCharacter::isHighSurrogate(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isHighSurrogate(ch);

}
// .method public static isISOControl(I)Z
bool android::icu::lang::UCharacter::isISOControl(int ch)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( ch < 0 ) 
		goto label_cond_13;
	if ( ch >  0x9f )
		goto label_cond_13;
	if ( ch <= 0x1f )
		goto label_cond_10;
	if ( ch <  0x7f )
		goto label_cond_11;
label_cond_10:
label_goto_10:
	return cVar0;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_10;
label_cond_13:
	cVar0 = cVar1;
	goto label_goto_10;

}
// .method public static isIdentifierIgnorable(I)Z
bool android::icu::lang::UCharacter::isIdentifierIgnorable(int ch)
{
	
	bool cVar0;
	bool cVar2;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	cVar2 = 0x0;
	if ( ch >  0x9f )
		goto label_cond_20;
	if ( !(android::icu::lang::UCharacter::isISOControl(ch)) )  
		goto label_cond_1d;
	if ( ch <  0x9 )
		goto label_cond_14;
	if ( ch <= 0xd )
		goto label_cond_1d;
label_cond_14:
	if ( ch <  0x1c )
		goto label_cond_1c;
	if ( ch <= 0x1f )
		goto label_cond_1e;
label_cond_1c:
label_goto_1c:
	cVar2 = cVar0;
label_cond_1d:
	return cVar2;
label_cond_1e:
	cVar0 = cVar2;
	goto label_goto_1c;
	// 2555    .line 3558
label_cond_20:
	if ( android::icu::lang::UCharacter::getType(ch) != 0x10 )
		goto label_cond_29;
label_goto_28:
	return cVar0;
label_cond_29:
	cVar0 = cVar2;
	goto label_goto_28;

}
// .method public static isJavaIdentifierPart(I)Z
bool android::icu::lang::UCharacter::isJavaIdentifierPart(int cp)
{
	
	//    .param p0, "cp"    # I
	return java::lang::Character::isJavaIdentifierPart((char)(cp));

}
// .method public static isJavaIdentifierStart(I)Z
bool android::icu::lang::UCharacter::isJavaIdentifierStart(int cp)
{
	
	//    .param p0, "cp"    # I
	return java::lang::Character::isJavaIdentifierStart((char)(cp));

}
// .method public static isJavaLetter(I)Z
bool android::icu::lang::UCharacter::isJavaLetter(int cp)
{
	
	//    .param p0, "cp"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2608    .end annotation
	return android::icu::lang::UCharacter::isJavaIdentifierStart(cp);

}
// .method public static isJavaLetterOrDigit(I)Z
bool android::icu::lang::UCharacter::isJavaLetterOrDigit(int cp)
{
	
	//    .param p0, "cp"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2623    .end annotation
	return android::icu::lang::UCharacter::isJavaIdentifierPart(cp);

}
// .method public static isLegal(I)Z
bool android::icu::lang::UCharacter::isLegal(int ch)
{
	
	bool cVar0;
	bool cVar1;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( ch >= 0 )
		goto label_cond_5;
	return cVar1;
	// 2649    .line 3833
label_cond_5:
	if ( ch >= 0xd800 )
		goto label_cond_b;
	return cVar0;
	// 2658    .line 3836
label_cond_b:
	if ( ch >  0xdfff )
		goto label_cond_11;
	return cVar1;
	// 2667    .line 3839
label_cond_11:
	if ( !(android::icu::impl::UCharacterUtility::isNonCharacter(ch)) )  
		goto label_cond_18;
	return cVar1;
	// 2678    .line 3842
label_cond_18:
	if ( ch >  0x10ffff )
		goto label_cond_1e;
label_goto_1d:
	return cVar0;
label_cond_1e:
	cVar0 = cVar1;
	goto label_goto_1d;

}
// .method public static isLegal(Ljava/lang/String;)Z
bool android::icu::lang::UCharacter::isLegal(std::shared_ptr<java::lang::String> str)
{
	
	int i;
	int codepoint;
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .local v2, "size":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= str->length() )
		goto label_cond_19;
	codepoint = str->codePointAt(i);
	//    .local v0, "codepoint":I
	if ( android::icu::lang::UCharacter::isLegal(codepoint) )     
		goto label_cond_13;
	return 0x0;
	// 2729    .line 3861
label_cond_13:
	i = (i +  java::lang::Character::charCount(codepoint));
	goto label_goto_5;
	// 2739    .line 3868
	// 2740    .end local v0    # "codepoint":I
label_cond_19:
	return 0x1;

}
// .method public static isLetter(I)Z
bool android::icu::lang::UCharacter::isLetter(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	if ( !(( (cVar0 << android::icu::lang::UCharacter::getType(ch)) & 0x3e)) )  
		goto label_cond_d;
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public static isLetterOrDigit(I)Z
bool android::icu::lang::UCharacter::isLetterOrDigit(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	if ( !(( (cVar0 << android::icu::lang::UCharacter::getType(ch)) & 0x23e)) )  
		goto label_cond_d;
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public static isLowSurrogate(C)Z
bool android::icu::lang::UCharacter::isLowSurrogate(char ch)
{
	
	//    .param p0, "ch"    # C
	return java::lang::Character::isLowSurrogate(ch);

}
// .method public static isLowerCase(I)Z
bool android::icu::lang::UCharacter::isLowerCase(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	if ( android::icu::lang::UCharacter::getType(ch) != 0x2 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method public static isMirrored(I)Z
bool android::icu::lang::UCharacter::isMirrored(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UBiDiProps::INSTANCE->isMirrored(ch);

}
// .method public static isPrintable(I)Z
bool android::icu::lang::UCharacter::isPrintable(int ch)
{
	
	bool cVar1;
	int cat;
	
	//    .param p0, "ch"    # I
	cVar1 = 0x0;
	cat = android::icu::lang::UCharacter::getType(ch);
	//    .local v0, "cat":I
	if ( !(cat) )  
		goto label_cond_1a;
	if ( cat == 0xf )
		goto label_cond_1a;
	if ( cat == 0x10 )
		goto label_cond_1a;
	if ( cat == 0x11 )
		goto label_cond_1a;
	if ( cat == 0x12 )
		goto label_cond_1a;
	if ( !(cat) )  
		goto label_cond_1a;
	cVar1 = 0x1;
label_cond_1a:
	return cVar1;

}
// .method public static isSpace(I)Z
bool android::icu::lang::UCharacter::isSpace(int ch)
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	
	//    .param p0, "ch"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2908    .end annotation
	cVar0 = 0x20;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( ch >  cVar0 )
		goto label_cond_1b;
	if ( ch == cVar0 )
		goto label_cond_c;
	if ( ch != 0x9 )
		goto label_cond_d;
label_cond_c:
label_goto_c:
	return cVar1;
	// 2932    .line 3212
label_cond_d:
	if ( ch == 0xa )
		goto label_cond_c;
	if ( ch == 0xc )
		goto label_cond_c;
	if ( ch == 0xd )
		goto label_cond_c;
	cVar1 = cVar2;
	goto label_goto_c;
label_cond_1b:
	cVar1 = cVar2;
	goto label_goto_c;

}
// .method public static isSpaceChar(I)Z
bool android::icu::lang::UCharacter::isSpaceChar(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	if ( !(( (cVar0 << android::icu::lang::UCharacter::getType(ch)) & 0x7000)) )  
		goto label_cond_d;
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public static isSupplementary(I)Z
bool android::icu::lang::UCharacter::isSupplementary(int ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # I
	cVar1 = 0x0;
	if ( ch <  0x10000 )
		goto label_cond_b;
	if ( ch >  0x10ffff )
		goto label_cond_b;
	cVar1 = 0x1;
label_cond_b:
	return cVar1;

}
// .method public static final isSupplementaryCodePoint(I)Z
bool android::icu::lang::UCharacter::isSupplementaryCodePoint(int cp)
{
	
	//    .param p0, "cp"    # I
	return java::lang::Character::isSupplementaryCodePoint(cp);

}
// .method public static final isSurrogatePair(CC)Z
bool android::icu::lang::UCharacter::isSurrogatePair(char high,char low)
{
	
	//    .param p0, "high"    # C
	//    .param p1, "low"    # C
	return java::lang::Character::isSurrogatePair(high, low);

}
// .method public static isTitleCase(I)Z
bool android::icu::lang::UCharacter::isTitleCase(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	if ( android::icu::lang::UCharacter::getType(ch) != 0x3 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method public static isUAlphabetic(I)Z
bool android::icu::lang::UCharacter::isUAlphabetic(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::lang::UCharacter::hasBinaryProperty(ch, 0x0);

}
// .method public static isULowercase(I)Z
bool android::icu::lang::UCharacter::isULowercase(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::lang::UCharacter::hasBinaryProperty(ch, 0x16);

}
// .method public static isUUppercase(I)Z
bool android::icu::lang::UCharacter::isUUppercase(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::lang::UCharacter::hasBinaryProperty(ch, 0x1e);

}
// .method public static isUWhiteSpace(I)Z
bool android::icu::lang::UCharacter::isUWhiteSpace(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::lang::UCharacter::hasBinaryProperty(ch, 0x1f);

}
// .method public static isUnicodeIdentifierPart(I)Z
bool android::icu::lang::UCharacter::isUnicodeIdentifierPart(int ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # I
	cVar1 = 0x1;
	if ( ((cVar1 << android::icu::lang::UCharacter::getType(ch)) &  0x40077e) )     
		goto label_cond_11;
	cVar1 = android::icu::lang::UCharacter::isIdentifierIgnorable(ch);
label_cond_11:
	return cVar1;

}
// .method public static isUnicodeIdentifierStart(I)Z
bool android::icu::lang::UCharacter::isUnicodeIdentifierStart(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	if ( !(( (cVar0 << android::icu::lang::UCharacter::getType(ch)) & 0x43e)) )  
		goto label_cond_d;
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public static isUpperCase(I)Z
bool android::icu::lang::UCharacter::isUpperCase(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	if ( android::icu::lang::UCharacter::getType(ch) != cVar0 )
		goto label_cond_8;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public static final isValidCodePoint(I)Z
bool android::icu::lang::UCharacter::isValidCodePoint(int cp)
{
	
	bool cVar1;
	
	//    .param p0, "cp"    # I
	cVar1 = 0x0;
	if ( cp < 0 ) 
		goto label_cond_9;
	if ( cp >  0x10ffff )
		goto label_cond_9;
	cVar1 = 0x1;
label_cond_9:
	return cVar1;

}
// .method public static isWhitespace(I)Z
bool android::icu::lang::UCharacter::isWhitespace(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	cVar0 = 0x1;
	if ( !(( (cVar0 << android::icu::lang::UCharacter::getType(ch)) & 0x7000)) )  
		goto label_cond_19;
	if ( ch == 0xa0 )
		goto label_cond_19;
	if ( ch == 0x2007 )
		goto label_cond_19;
	if ( ch == 0x202f )
		goto label_cond_19;
label_cond_18:
label_goto_18:
	return cVar0;
	// 3264    .line 3422
label_cond_19:
	if ( ch <  0x9 )
		goto label_cond_21;
	if ( ch <= 0xd )
		goto label_cond_18;
label_cond_21:
	if ( ch <  0x1c )
		goto label_cond_29;
	if ( ch <= 0x1f )
		goto label_cond_18;
label_cond_29:
	cVar0 = 0x0;
	goto label_goto_18;

}
// .method public static offsetByCodePoints(Ljava/lang/CharSequence;II)I
int android::icu::lang::UCharacter::offsetByCodePoints(std::shared_ptr<java::lang::CharSequence> text,int cVar7,int cVar6)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	int cVar6;
	int cVar7;
	int ch;
	int cVar10;
	
	//    .param p0, "text"    # Ljava/lang/CharSequence;
	//    .param p1, "index"    # I
	//    .param p2, "codePointOffset"    # I
	cVar0 = 0xdfff;
	cVar1 = 0xdc00;
	cVar2 = 0xdbff;
	cVar3 = 0xd800;
	if ( cVar7 < 0 ) 
		goto label_cond_14;
	if ( cVar7 <= text->length() )
		goto label_cond_3d;
label_cond_14:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("index ( ")))->append(cVar7)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") out of range 0, ")))->append(text->length())->toString());
	// throw
	throw cVar4;
	// 3357    .line 5574
label_cond_3d:
	if ( cVar6 >= 0 )
		goto label_cond_60;
label_cond_3f:
	cVar6 = ( cVar6 + 0x1);
	if ( cVar6 > 0 ) 
		goto label_cond_8a;
	cVar7 = ( cVar7 + -0x1);
	ch = text->charAt(cVar7);
	//    .local v0, "ch":C
label_cond_49:
	if ( ch <  cVar1 )
		goto label_cond_3f;
	if ( ch >  cVar0 )
		goto label_cond_3f;
	if ( cVar7 <= 0 )
		goto label_cond_3f;
	cVar7 = ( cVar7 + -0x1);
	ch = text->charAt(cVar7);
	if ( ch <  cVar3 )
		goto label_cond_59;
	if ( ch <= cVar2 )
		goto label_cond_49;
label_cond_59:
	cVar6 = ( cVar6 + 0x1);
	if ( cVar6 <= 0 )
		goto label_cond_49;
	return ( cVar7 + 0x1);
	// 3406    .line 5587
	// 3407    .end local v0    # "ch":C
label_cond_60:
	//    .local v2, "limit":I
	cVar7 = cVar7;
	//    .end local p1    # "index":I
	//    .local v1, "index":I
label_cond_65:
	cVar10 = ( cVar6 + -0x1);
	if ( cVar10 < 0 ) 
		goto label_cond_89;
	cVar7 = ( cVar7 + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	ch = text->charAt(cVar7);
	//    .restart local v0    # "ch":C
	cVar7 = cVar7;
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
label_goto_70:
	if ( ch <  cVar3 )
		goto label_cond_65;
	if ( ch >  cVar2 )
		goto label_cond_65;
	if ( cVar7 >= text->length() )
		goto label_cond_65;
	cVar7 = ( cVar7 + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p1    # "index":I
	ch = text->charAt(cVar7);
	if ( ch <  cVar1 )
		goto label_cond_80;
	if ( ch <= cVar0 )
		goto label_cond_87;
label_cond_80:
	cVar10 = ( cVar10 + -0x1);
	if ( cVar10 >= 0 )
		goto label_cond_87;
	return ( cVar7 + -0x1);
label_cond_87:
	cVar7 = cVar7;
	//    .end local p1    # "index":I
	//    .restart local v1    # "index":I
	goto label_goto_70;
	// 3478    .end local v0    # "ch":C
label_cond_89:
	cVar7 = cVar7;
	//    .end local v1    # "index":I
	//    .end local v2    # "limit":I
	//    .restart local p1    # "index":I
label_cond_8a:
	return cVar7;

}
// .method public static offsetByCodePoints([CIIII)I
int android::icu::lang::UCharacter::offsetByCodePoints(std::shared_ptr<char[]> text,int start,int count,int cVar7,int cVar6)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int limit;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	int cVar6;
	int cVar7;
	char ch;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	int cVar12;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar13;
	std::shared_ptr<java::lang::StringBuilder> cVar14;
	
	//    .param p0, "text"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "count"    # I
	//    .param p3, "index"    # I
	//    .param p4, "codePointOffset"    # I
	cVar0 = 0xdfff;
	cVar1 = 0xdc00;
	cVar2 = 0xdbff;
	cVar3 = 0xd800;
	limit = (start + count);
	//    .local v2, "limit":I
	if ( start < 0 ) 
		goto label_cond_12;
	if ( limit >= start )
		goto label_cond_4e;
label_cond_12:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("index ( ")))->append(cVar7)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") out of range ")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in array 0, ")))->append(text->size())->toString());
	// throw
	throw cVar4;
	// 3582    .line 5618
label_cond_4e:
	if ( limit >  text->size() )
		goto label_cond_12;
	if ( cVar7 <  start )
		goto label_cond_12;
	if ( cVar7 >  limit )
		goto label_cond_12;
	if ( cVar6 >= 0 )
		goto label_cond_a2;
label_cond_57:
	cVar6 = ( cVar6 + 0x1);
	if ( cVar6 > 0 ) 
		goto label_cond_f0;
	cVar7 = ( cVar7 + -0x1);
	ch = text[cVar7];
	//    .local v0, "ch":C
	if ( cVar7 >= start )
		goto label_cond_8d;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("index ( ")))->append(cVar7)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") < start (")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar8;
	// 3655    .line 5633
label_cond_8d:
	if ( ch <  cVar1 )
		goto label_cond_57;
	if ( ch >  cVar0 )
		goto label_cond_57;
	if ( cVar7 <= start )
		goto label_cond_57;
	cVar7 = ( cVar7 + -0x1);
	ch = text[cVar7];
	if ( ch <  cVar3 )
		goto label_cond_9b;
	if ( ch <= cVar2 )
		goto label_cond_8d;
label_cond_9b:
	cVar6 = ( cVar6 + 0x1);
	if ( cVar6 <= 0 )
		goto label_cond_8d;
	return ( cVar7 + 0x1);
	// 3684    .end local v0    # "ch":C
label_cond_a2:
	cVar7 = cVar7;
	//    .end local p3    # "index":I
	//    .local v1, "index":I
label_cond_a3:
	cVar12 = ( cVar6 + -0x1);
	if ( cVar12 < 0 ) 
		goto label_cond_ef;
	cVar7 = ( cVar7 + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p3    # "index":I
	ch = text[cVar7];
	//    .restart local v0    # "ch":C
	if ( cVar7 <= limit )
		goto label_cond_d9;
	cVar14 = std::make_shared<java::lang::StringBuilder>();
	cVar13 = std::make_shared<java::lang::IndexOutOfBoundsException>(cVar14->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("index ( ")))->append(cVar7)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") > limit (")))->append(limit)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar13;
label_cond_d9:
	cVar7 = cVar7;
	//    .end local p3    # "index":I
	//    .restart local v1    # "index":I
	if ( ch <  cVar3 )
		goto label_cond_a3;
	if ( ch >  cVar2 )
		goto label_cond_a3;
	if ( cVar7 >= limit )
		goto label_cond_a3;
	cVar7 = ( cVar7 + 0x1);
	//    .end local v1    # "index":I
	//    .restart local p3    # "index":I
	ch = text[cVar7];
	if ( ch <  cVar1 )
		goto label_cond_e8;
	if ( ch <= cVar0 )
		goto label_cond_d9;
label_cond_e8:
	cVar12 = ( cVar12 + -0x1);
	if ( cVar12 >= 0 )
		goto label_cond_d9;
	return ( cVar7 + -0x1);
	// 3787    .end local v0    # "ch":C
	// 3788    .end local p3    # "index":I
	// 3789    .restart local v1    # "index":I
label_cond_ef:
	cVar7 = cVar7;
	//    .end local v1    # "index":I
	//    .restart local p3    # "index":I
label_cond_f0:
	return cVar7;

}
// .method public static final toChars(I[CI)I
int android::icu::lang::UCharacter::toChars(int cp,std::shared_ptr<char[]> dst,int dstIndex)
{
	
	//    .param p0, "cp"    # I
	//    .param p1, "dst"    # [C
	//    .param p2, "dstIndex"    # I
	return java::lang::Character::toChars(cp, dst, dstIndex);

}
// .method public static final toChars(I)[C
char android::icu::lang::UCharacter::toChars(int cp)
{
	
	//    .param p0, "cp"    # I
	return java::lang::Character::toChars(cp);

}
// .method public static final toCodePoint(CC)I
int android::icu::lang::UCharacter::toCodePoint(char high,char low)
{
	
	//    .param p0, "high"    # C
	//    .param p1, "low"    # C
	return java::lang::Character::toCodePoint(high, low);

}
// .method public static toLowerCase(I)I
int android::icu::lang::UCharacter::toLowerCase(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCaseProps::INSTANCE->tolower(ch);

}
// .method private static toLowerCase(ILjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toLowerCase(int caseLocale,std::shared_ptr<java::lang::String> str)
{
	
	std::shared_ptr<android::icu::text::Edits> edits;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> replacementChars;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "caseLocale"    # I
	//    .param p1, "str"    # Ljava/lang/String;
	if ( str->length() >  0x64 )
		goto label_cond_26;
	if ( !(str->isEmpty()) )  
		goto label_cond_f;
	return str;
	// 3882    .line 4340
label_cond_f:
	edits = std::make_shared<android::icu::text::Edits>();
	//    .local v0, "edits":Landroid/icu/text/Edits;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	replacementChars = android::icu::impl::CaseMapImpl::toLower(caseLocale, 0x4000, str, cVar0, edits);
	replacementChars->checkCast("java::lang::StringBuilder");
	//    .local v1, "replacementChars":Ljava/lang/StringBuilder;
	return android::icu::lang::UCharacter::applyEdits(str, replacementChars, edits);
	// 3911    .line 4346
	// 3912    .end local v0    # "edits":Landroid/icu/text/Edits;
	// 3913    .end local v1    # "replacementChars":Ljava/lang/StringBuilder;
label_cond_26:
	cVar1 = std::make_shared<java::lang::StringBuilder>(str->length());
	cVar2 = android::icu::impl::CaseMapImpl::toLower(caseLocale, 0x0, str, cVar1, 0x0);
	cVar2->checkCast("java::lang::StringBuilder");
	return cVar2->toString();

}
// .method public static toLowerCase(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toLowerCase(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> str)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "str"    # Ljava/lang/String;
	return android::icu::lang::UCharacter::toLowerCase(android::icu::lang::UCharacter::getCaseLocale(locale), str);

}
// .method public static toLowerCase(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toLowerCase(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p0, "str"    # Ljava/lang/String;
	return android::icu::lang::UCharacter::toLowerCase(android::icu::lang::UCharacter::getDefaultCaseLocale(android::icu::lang::UCharacter::getDefaultCaseLocale({const[class].FS-Param}), str), str);

}
// .method public static toLowerCase(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toLowerCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> str)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "str"    # Ljava/lang/String;
	return android::icu::lang::UCharacter::toLowerCase(android::icu::lang::UCharacter::getCaseLocale(locale), str);

}
// .method public static toString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toString(int ch)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "ch"    # I
	if ( ch < 0 ) 
		goto label_cond_7;
	if ( ch <= 0x10ffff )
		goto label_cond_9;
label_cond_7:
	return 0x0;
	// 4014    .line 3622
label_cond_9:
	if ( ch >= 0x10000 )
		goto label_cond_13;
	return java::lang::String::valueOf((char)(ch));
	// 4029    .line 3626
label_cond_13:
	cVar0 = std::make_shared<java::lang::String>(java::lang::Character::toChars(ch));
	return cVar0;

}
// .method public static toTitleCase(I)I
int android::icu::lang::UCharacter::toTitleCase(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCaseProps::INSTANCE->totitle(ch);

}
// .method private static toTitleCase(IILandroid/icu/text/BreakIterator;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toTitleCase(int caseLocale,int options,std::shared_ptr<android::icu::text::BreakIterator> titleIter,std::shared_ptr<java::lang::String> str)
{
	
	std::shared_ptr<android::icu::text::Edits> edits;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> replacementChars;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "caseLocale"    # I
	//    .param p1, "options"    # I
	//    .param p2, "titleIter"    # Landroid/icu/text/BreakIterator;
	//    .param p3, "str"    # Ljava/lang/String;
	if ( str->length() >  0x64 )
		goto label_cond_2d;
	if ( !(str->isEmpty()) )  
		goto label_cond_f;
	return str;
	// 4084    .line 4374
label_cond_f:
	edits = std::make_shared<android::icu::text::Edits>();
	//    .local v6, "edits":Landroid/icu/text/Edits;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	replacementChars = android::icu::impl::CaseMapImpl::toTitle(caseLocale, ( options | 0x4000), titleIter, str, cVar0, edits);
	replacementChars->checkCast("java::lang::StringBuilder");
	//    .local v13, "replacementChars":Ljava/lang/StringBuilder;
	return android::icu::lang::UCharacter::applyEdits(str, replacementChars, edits);
	// 4122    .line 4381
	// 4123    .end local v6    # "edits":Landroid/icu/text/Edits;
	// 4124    .end local v13    # "replacementChars":Ljava/lang/StringBuilder;
label_cond_2d:
	cVar1 = std::make_shared<java::lang::StringBuilder>(str->length());
	cVar2 = android::icu::impl::CaseMapImpl::toTitle(caseLocale, options, titleIter, str, cVar1, 0x0);
	cVar2->checkCast("java::lang::StringBuilder");
	return cVar2->toString();

}
// .method public static toTitleCase(Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toTitleCase(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> titleIter)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "titleIter"    # Landroid/icu/text/BreakIterator;
	return android::icu::lang::UCharacter::toTitleCase(locale, str, titleIter, 0x0);

}
// .method public static toTitleCase(Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/text/BreakIterator;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toTitleCase(std::shared_ptr<android::icu::util::ULocale> cVar0,std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> cVar1,int options)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::text::BreakIterator> cVar1;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "titleIter"    # Landroid/icu/text/BreakIterator;
	//    .param p3, "options"    # I
	if ( cVar1 )     
		goto label_cond_c;
	if ( cVar0 )     
		goto label_cond_8;
	cVar0 = android::icu::util::ULocale::getDefault({const[class].FS-Param});
label_cond_8:
	cVar1 = android::icu::text::BreakIterator::getWordInstance(cVar0);
label_cond_c:
	cVar1->setText(str);
	return android::icu::lang::UCharacter::toTitleCase(android::icu::lang::UCharacter::getCaseLocale(cVar0), options, cVar1, str);

}
// .method public static toTitleCase(Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toTitleCase(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> breakiter)
{
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "breakiter"    # Landroid/icu/text/BreakIterator;
	return android::icu::lang::UCharacter::toTitleCase(java::util::Locale::getDefault(java::util::Locale::getDefault(java::util::Locale::getDefault(java::util::Locale::getDefault({const[class].FS-Param}), str, breakiter, 0x0), str, breakiter, 0x0), str, breakiter, 0x0), str, breakiter, 0x0);

}
// .method public static toTitleCase(Ljava/util/Locale;Ljava/lang/String;Landroid/icu/text/BreakIterator;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toTitleCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> breakiter)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "breakiter"    # Landroid/icu/text/BreakIterator;
	return android::icu::lang::UCharacter::toTitleCase(locale, str, breakiter, 0x0);

}
// .method public static toTitleCase(Ljava/util/Locale;Ljava/lang/String;Landroid/icu/text/BreakIterator;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toTitleCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::BreakIterator> cVar0,int options)
{
	
	std::shared_ptr<android::icu::text::BreakIterator> cVar0;
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "titleIter"    # Landroid/icu/text/BreakIterator;
	//    .param p3, "options"    # I
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = android::icu::text::BreakIterator::getWordInstance(locale);
label_cond_6:
	cVar0->setText(str);
	return android::icu::lang::UCharacter::toTitleCase(android::icu::lang::UCharacter::getCaseLocale(locale), options, cVar0, str);

}
// .method public static toTitleFirst(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toTitleFirst(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> str)
{
	
	int cVar0;
	int i;
	int c;
	std::shared_ptr<java::lang::String> titled;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> result;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "str"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4290    .end annotation
	cVar0 = 0x0;
	0x0;
	//    .local v0, "c":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_3:
	if ( i >= str->length() )
		goto label_cond_17;
	c = android::icu::lang::UCharacter::codePointAt(str, i);
	//    .local v2, "propertyMask":I
	if ( !(( android::icu::lang::UCharacter::getIntPropertyValue(c, 0x2000) & 0x230)) )  
		goto label_cond_18;
	//    .end local v2    # "propertyMask":I
label_cond_17:
	return str;
	// 4333    .line 4566
	// 4334    .restart local v2    # "propertyMask":I
label_cond_18:
	if ( android::icu::impl::UCaseProps::INSTANCE->getType(c) )     
		goto label_cond_26;
	i = (i +  android::icu::lang::UCharacter::charCount(c));
	goto label_goto_3;
	// 4353    .line 4577
label_cond_26:
	//    .local v5, "substring":Ljava/lang/String;
	titled = android::icu::lang::UCharacter::toTitleCase(locale, str->substring(i, (android::icu::lang::UCharacter::charCount(c) +  i)), android::icu::text::BreakIterator::getSentenceInstance(locale), cVar0);
	//    .local v6, "titled":Ljava/lang/String;
	if ( titled->codePointAt(cVar0) == c )
		goto label_cond_17;
	cVar1 = std::make_shared<java::lang::StringBuilder>(str->length());
	result = cVar1->append(str, cVar0, i);
	//    .local v3, "result":Ljava/lang/StringBuilder;
	if ( c != 0x69 )
		goto label_cond_7f;
	if ( !(locale->getLanguage()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("nl")))) )  
		goto label_cond_7f;
	if ( i >= str->length() )
		goto label_cond_7f;
	if ( str->charAt(( i + 0x1)) != 0x6a )
		goto label_cond_7f;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IJ")));
	//    .local v4, "startOfSuffix":I
label_goto_72:
	return result->append(str, startOfSuffix, str->length())->toString();
	// 4455    .line 4594
	// 4456    .end local v4    # "startOfSuffix":I
label_cond_7f:
	result->append(titled);
	//    .restart local v4    # "startOfSuffix":I
	goto label_goto_72;

}
// .method public static toUpperCase(I)I
int android::icu::lang::UCharacter::toUpperCase(int ch)
{
	
	//    .param p0, "ch"    # I
	return android::icu::impl::UCaseProps::INSTANCE->toupper(ch);

}
// .method private static toUpperCase(ILjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toUpperCase(int caseLocale,std::shared_ptr<java::lang::String> str)
{
	
	std::shared_ptr<android::icu::text::Edits> edits;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> replacementChars;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "caseLocale"    # I
	//    .param p1, "str"    # Ljava/lang/String;
	if ( str->length() >  0x64 )
		goto label_cond_26;
	if ( !(str->isEmpty()) )  
		goto label_cond_f;
	return str;
	// 4511    .line 4357
label_cond_f:
	edits = std::make_shared<android::icu::text::Edits>();
	//    .local v0, "edits":Landroid/icu/text/Edits;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	replacementChars = android::icu::impl::CaseMapImpl::toUpper(caseLocale, 0x4000, str, cVar0, edits);
	replacementChars->checkCast("java::lang::StringBuilder");
	//    .local v1, "replacementChars":Ljava/lang/StringBuilder;
	return android::icu::lang::UCharacter::applyEdits(str, replacementChars, edits);
	// 4540    .line 4363
	// 4541    .end local v0    # "edits":Landroid/icu/text/Edits;
	// 4542    .end local v1    # "replacementChars":Ljava/lang/StringBuilder;
label_cond_26:
	cVar1 = std::make_shared<java::lang::StringBuilder>(str->length());
	cVar2 = android::icu::impl::CaseMapImpl::toUpper(caseLocale, 0x0, str, cVar1, 0x0);
	cVar2->checkCast("java::lang::StringBuilder");
	return cVar2->toString();

}
// .method public static toUpperCase(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toUpperCase(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> str)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "str"    # Ljava/lang/String;
	return android::icu::lang::UCharacter::toUpperCase(android::icu::lang::UCharacter::getCaseLocale(locale), str);

}
// .method public static toUpperCase(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toUpperCase(std::shared_ptr<java::lang::String> str)
{
	
	//    .param p0, "str"    # Ljava/lang/String;
	return android::icu::lang::UCharacter::toUpperCase(android::icu::lang::UCharacter::getDefaultCaseLocale(android::icu::lang::UCharacter::getDefaultCaseLocale({const[class].FS-Param}), str), str);

}
// .method public static toUpperCase(Ljava/util/Locale;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::lang::UCharacter::toUpperCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> str)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "str"    # Ljava/lang/String;
	return android::icu::lang::UCharacter::toUpperCase(android::icu::lang::UCharacter::getCaseLocale(locale), str);

}


