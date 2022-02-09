// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet.smali
#include "java2ctype.h"
#include "android.icu.impl.BMPSet.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.impl.RuleCharacterIterator.h"
#include "android.icu.impl.SortedSetRelation.h"
#include "android.icu.impl.StringRange.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.impl.UCaseProps_S_ContextIterator.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "android.icu.impl.UPropertyAliases.h"
#include "android.icu.impl.UnicodeSetStringSpan.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.lang.CharSequences.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.SymbolTable.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeSet_S_ComparisonStyle.h"
#include "android.icu.text.UnicodeSet_S_EntryRange.h"
#include "android.icu.text.UnicodeSet_S_EntryRangeIterable.h"
#include "android.icu.text.UnicodeSet_S_Filter.h"
#include "android.icu.text.UnicodeSet_S_GeneralCategoryMaskFilter.h"
#include "android.icu.text.UnicodeSet_S_IntPropertyFilter.h"
#include "android.icu.text.UnicodeSet_S_NumericValueFilter.h"
#include "android.icu.text.UnicodeSet_S_ScriptExtensionsFilter.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "android.icu.text.UnicodeSet_S_UnicodeSetIterator2.h"
#include "android.icu.text.UnicodeSet_S_VersionFilter.h"
#include "android.icu.text.UnicodeSet_S_XSymbolTable.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.text.UnicodeSetIterator.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "android.icu.util.OutputInt.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.VersionInfo.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.Comparable.h"
#include "java.lang.Double.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.SortedSet.h"
#include "java.util.TreeSet.h"

static android::icu::text::UnicodeSet::_assertionsDisabled;
static android::icu::text::UnicodeSet::ADD_CASE_MAPPINGS = 0x4;
static android::icu::text::UnicodeSet::ALL_CODE_POINTS;
static android::icu::text::UnicodeSet::ANY_ID = std::make_shared<java::lang::String>("ANY");
static android::icu::text::UnicodeSet::ASCII_ID = std::make_shared<java::lang::String>("ASCII");
static android::icu::text::UnicodeSet::ASSIGNED = std::make_shared<java::lang::String>("Assigned");
static android::icu::text::UnicodeSet::CASE = 0x2;
static android::icu::text::UnicodeSet::CASE_INSENSITIVE = 0x2;
static android::icu::text::UnicodeSet::EMPTY;
static android::icu::text::UnicodeSet::GROW_EXTRA = 0x10;
static android::icu::text::UnicodeSet::HIGH = 0x110000;
static android::icu::text::UnicodeSet::IGNORE_SPACE = 0x1;
static android::icu::text::UnicodeSet::INCLUSIONS = nullptr;
static android::icu::text::UnicodeSet::LAST0_START = 0x0;
static android::icu::text::UnicodeSet::LAST1_RANGE = 0x1;
static android::icu::text::UnicodeSet::LAST2_SET = 0x2;
static android::icu::text::UnicodeSet::LOW = 0x0;
static android::icu::text::UnicodeSet::MAX_VALUE = 0x10ffff;
static android::icu::text::UnicodeSet::MIN_VALUE = 0x0;
static android::icu::text::UnicodeSet::MODE0_NONE = 0x0;
static android::icu::text::UnicodeSet::MODE1_INBRACKET = 0x1;
static android::icu::text::UnicodeSet::MODE2_OUTBRACKET = 0x2;
static android::icu::text::UnicodeSet::NO_VERSION;
static android::icu::text::UnicodeSet::SETMODE0_NONE = 0x0;
static android::icu::text::UnicodeSet::SETMODE1_UNICODESET = 0x1;
static android::icu::text::UnicodeSet::SETMODE2_PROPERTYPAT = 0x2;
static android::icu::text::UnicodeSet::SETMODE3_PREPARSED = 0x3;
static android::icu::text::UnicodeSet::START_EXTRA = 0x10;
static android::icu::text::UnicodeSet::XSYMBOL_TABLE;
// .method static synthetic -get0()Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::text::UnicodeSet::_get0()
{
	
	return android::icu::text::UnicodeSet::NO_VERSION;

}
// .method static synthetic -get1(Landroid/icu/text/UnicodeSet;)I
int android::icu::text::UnicodeSet::_get1(std::shared_ptr<android::icu::text::UnicodeSet> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/UnicodeSet;
	return _this->len;

}
// .method static synthetic -get2(Landroid/icu/text/UnicodeSet;)[I
int android::icu::text::UnicodeSet::_get2(std::shared_ptr<android::icu::text::UnicodeSet> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/UnicodeSet;
	return _this->list;

}
// .method static synthetic -wrap0(Ljava/lang/Appendable;IZ)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::UnicodeSet::_wrap0(std::shared_ptr<java::lang::Appendable> buf,int c,bool escapeUnprintable)
{
	
	//    .param p0, "buf"    # Ljava/lang/Appendable;
	//    .param p1, "c"    # I
	//    .param p2, "escapeUnprintable"    # Z
	return android::icu::text::UnicodeSet::_appendToPat(buf, c, escapeUnprintable);

}
// .method static constructor <clinit>()V
void android::icu::text::UnicodeSet::static_cinit()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_XSymbolTable> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar3;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	android::icu::text::UnicodeSet::_assertionsDisabled = ( android::icu::text::UnicodeSet()->desiredAssertionStatus() ^ 0x1);
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	android::icu::text::UnicodeSet::EMPTY = cVar2->freeze();
	cVar3 = std::make_shared<android::icu::text::UnicodeSet>(cVar1, 0x10ffff);
	android::icu::text::UnicodeSet::ALL_CODE_POINTS = cVar3->freeze();
	android::icu::text::UnicodeSet::XSYMBOL_TABLE = cVar0;
	android::icu::text::UnicodeSet::INCLUSIONS = cVar0;
	android::icu::text::UnicodeSet::NO_VERSION = android::icu::util::VersionInfo::getInstance(cVar1, cVar1, cVar1, cVar1);
	return;

}
// .method public constructor <init>()V
android::icu::text::UnicodeSet::UnicodeSet()
{
	
	std::shared_ptr<java::util::TreeSet> cVar0;
	int cVar1;
	
	// 243    invoke-direct {p0}, Landroid/icu/text/UnicodeFilter;-><init>()V
	cVar0 = std::make_shared<java::util::TreeSet>();
	this->strings = cVar0;
	this->pat = 0x0;
	this->list = std::make_shared<std::vector<int[]>>(0x11);
	cVar1 = this->len;
	this->len = ( cVar1 + 0x1);
	this->list[cVar1] = 0x110000;
	return;

}
// .method public constructor <init>(II)V
android::icu::text::UnicodeSet::UnicodeSet(int start,int end)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	// 288    invoke-direct {p0}, Landroid/icu/text/UnicodeSet;-><init>()V
	this->complement(start, end);
	return;

}
// .method public constructor <init>(Landroid/icu/text/UnicodeSet;)V
android::icu::text::UnicodeSet::UnicodeSet(std::shared_ptr<android::icu::text::UnicodeSet> other)
{
	
	std::shared_ptr<java::util::TreeSet> cVar0;
	
	//    .param p1, "other"    # Landroid/icu/text/UnicodeSet;
	// 303    invoke-direct {p0}, Landroid/icu/text/UnicodeFilter;-><init>()V
	cVar0 = std::make_shared<java::util::TreeSet>();
	this->strings = cVar0;
	this->pat = 0x0;
	this->set(other);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::UnicodeSet::UnicodeSet(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::text::ParsePosition> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 332    invoke-direct {p0}, Landroid/icu/text/UnicodeSet;-><init>()V
	this->applyPattern(pattern, cVar0, cVar0, 0x1);
	return;

}
// .method public constructor <init>(Ljava/lang/String;I)V
android::icu::text::UnicodeSet::UnicodeSet(std::shared_ptr<java::lang::String> pattern,int options)
{
	
	std::shared_ptr<java::text::ParsePosition> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "options"    # I
	cVar0 = 0x0;
	// 352    invoke-direct {p0}, Landroid/icu/text/UnicodeSet;-><init>()V
	this->applyPattern(pattern, cVar0, cVar0, options);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;)V
android::icu::text::UnicodeSet::UnicodeSet(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::text::SymbolTable> symbols)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .param p3, "symbols"    # Landroid/icu/text/SymbolTable;
	// 369    invoke-direct {p0}, Landroid/icu/text/UnicodeSet;-><init>()V
	this->applyPattern(pattern, pos, symbols, 0x1);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;I)V
android::icu::text::UnicodeSet::UnicodeSet(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::text::SymbolTable> symbols,int options)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .param p3, "symbols"    # Landroid/icu/text/SymbolTable;
	//    .param p4, "options"    # I
	// 389    invoke-direct {p0}, Landroid/icu/text/UnicodeSet;-><init>()V
	this->applyPattern(pattern, pos, symbols, options);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Z)V
android::icu::text::UnicodeSet::UnicodeSet(std::shared_ptr<java::lang::String> pattern,bool ignoreWhitespace)
{
	
	std::shared_ptr<java::text::ParsePosition> cVar0;
	int cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "ignoreWhitespace"    # Z
	cVar0 = 0x0;
	// 407    invoke-direct {p0}, Landroid/icu/text/UnicodeSet;-><init>()V
	if ( !(ignoreWhitespace) )  
		goto label_cond_b;
	cVar1 = 0x1;
label_goto_7:
	this->applyPattern(pattern, cVar0, cVar0, cVar1);
	return;
	// 420    .line 441
label_cond_b:
	cVar1 = 0x0;
	goto label_goto_7;

}
// .method public varargs constructor <init>([I)V
android::icu::text::UnicodeSet::UnicodeSet(std::shared_ptr<int[]> pairs)
{
	
	std::shared_ptr<java::util::TreeSet> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int last;
	int i;
	int start;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	int end;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	
	//    .param p1, "pairs"    # [I
	// 433    invoke-direct {p0}, Landroid/icu/text/UnicodeFilter;-><init>()V
	cVar0 = std::make_shared<java::util::TreeSet>();
	this->strings = cVar0;
	this->pat = 0x0;
	if ( !(( pairs->size() & 0x1)) )  
		goto label_cond_1b;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Must have even number of integers")));
	// throw
	throw cVar1;
	// 463    .line 398
label_cond_1b:
	this->list = std::make_shared<std::vector<int[]>>(( pairs->size() + 0x1));
	this->len = this->list->size();
	last = -0x1;
	//    .local v3, "last":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_29:
	if ( i >= pairs->size() )
		goto label_cond_57;
	start = pairs[i];
	//    .local v4, "start":I
	if ( last <  start )
		goto label_cond_39;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Must be monotonically increasing.")));
	// throw
	throw cVar2;
	// 510    .line 408
label_cond_39:
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .local v2, "i":I
	start;
	this->list[i] = start;
	end = ( pairs[i] + 0x1);
	//    .local v0, "end":I
	if ( start <  end )
		goto label_cond_4f;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Must be monotonically increasing.")));
	// throw
	throw cVar3;
	// 540    .line 414
label_cond_4f:
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	last = end;
	this->list[i] = end;
	goto label_goto_29;
	// 554    .line 416
	// 555    .end local v0    # "end":I
	// 556    .end local v4    # "start":I
label_cond_57:
	this->list[i] = 0x110000;
	return;

}
// .method private static _appendToPat(Ljava/lang/Appendable;IZ)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::UnicodeSet::_appendToPat(std::shared_ptr<java::lang::Appendable> buf,int c,bool escapeUnprintable)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "c"    # I
	//    .param p2, "escapeUnprintable"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 573        value = {
	// 574            "<T::",
	// 575            "Ljava/lang/Appendable;",
	// 576            ">(TT;IZ)TT;"
	// 577        }
	// 578    .end annotation
	//    .local p0, "buf":Ljava/lang/Appendable;, "TT;"
	if ( !(escapeUnprintable) )  
		goto label_cond_f;
	try {
	//label_try_start_2:
	if ( !(android::icu::impl::Utility::isUnprintable(c)) )  
		goto label_cond_f;
	if ( !(android::icu::impl::Utility::escapeUnprintable(buf, c)) )  
		goto label_cond_f;
	return buf;
	// 602    .line 646
label_cond_f:
	// switch
	{
	auto item = ( c );
	if (item == 0x24) goto label_sswitch_21;
	if (item == 0x26) goto label_sswitch_21;
	if (item == 0x2d) goto label_sswitch_21;
	if (item == 0x3a) goto label_sswitch_21;
	if (item == 0x5b) goto label_sswitch_21;
	if (item == 0x5c) goto label_sswitch_21;
	if (item == 0x5d) goto label_sswitch_21;
	if (item == 0x5e) goto label_sswitch_21;
	if (item == 0x7b) goto label_sswitch_21;
	if (item == 0x7d) goto label_sswitch_21;
	}
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(c)) )  
		goto label_cond_1d;
	buf->append(0x5c);
label_cond_1d:
label_goto_1d:
	android::icu::text::UnicodeSet::appendCodePoint(buf, c);
	return buf;
	// 626    .line 657
label_sswitch_21:
	buf->append(0x5c);
	//label_try_end_26:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27;
	}
	//    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_26} :catch_27
	goto label_goto_1d;
	// 636    .line 668
label_catch_27:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 648    .line 646
	// 649    :sswitch_data_2e
	// 650    .sparse-switch
	// 651        0x24 -> :sswitch_21
	// 652        0x26 -> :sswitch_21
	// 653        0x2d -> :sswitch_21
	// 654        0x3a -> :sswitch_21
	// 655        0x5b -> :sswitch_21
	// 656        0x5c -> :sswitch_21
	// 657        0x5d -> :sswitch_21
	// 658        0x5e -> :sswitch_21
	// 659        0x7b -> :sswitch_21
	// 660        0x7d -> :sswitch_21
	// 661    .end sparse-switch

}
// .method private static _appendToPat(Ljava/lang/Appendable;Ljava/lang/String;Z)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::UnicodeSet::_appendToPat(std::shared_ptr<java::lang::Appendable> buf,std::shared_ptr<java::lang::String> s,bool escapeUnprintable)
{
	
	int i;
	int cp;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "escapeUnprintable"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 669        value = {
	// 670            "<T::",
	// 671            "Ljava/lang/Appendable;",
	// 672            ">(TT;",
	// 673            "Ljava/lang/String;",
	// 674            "Z)TT;"
	// 675        }
	// 676    .end annotation
	//    .local p0, "buf":Ljava/lang/Appendable;, "TT;"
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= s->length() )
		goto label_cond_14;
	cp = s->codePointAt(i);
	//    .local v0, "cp":I
	android::icu::text::UnicodeSet::_appendToPat(buf, cp, escapeUnprintable);
	i = (i +  java::lang::Character::charCount(cp));
	goto label_goto_1;
	// 709    .line 629
	// 710    .end local v0    # "cp":I
label_cond_14:
	return buf;

}
// .method private _toPattern(Ljava/lang/Appendable;Z)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::UnicodeSet::_toPattern(std::shared_ptr<java::lang::Appendable> result,bool escapeUnprintable)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	int oddNumberOfBackslashes;
	int i;
	int c;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p2, "escapeUnprintable"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 719        value = {
	// 720            "<T::",
	// 721            "Ljava/lang/Appendable;",
	// 722            ">(TT;Z)TT;"
	// 723        }
	// 724    .end annotation
	//    .local p1, "result":Ljava/lang/Appendable;, "TT;"
	if ( this->pat )     
		goto label_cond_c;
	return this->appendNewPattern(result, escapeUnprintable, 0x1);
	// 744    .line 698
label_cond_c:
	if ( escapeUnprintable )     
		goto label_cond_14;
	try {
	//label_try_start_e:
	result->append(this->pat);
	return result;
	// 757    .line 702
label_cond_14:
	oddNumberOfBackslashes = 0x0;
	//    .local v3, "oddNumberOfBackslashes":Z
	i = 0x0;
	//    .local v2, "i":I
label_goto_16:
	if ( i >= this->pat->length() )
		goto label_cond_46;
	c = this->pat->codePointAt(i);
	//    .local v0, "c":I
	i = (i +  java::lang::Character::charCount(c));
	if ( !(android::icu::impl::Utility::isUnprintable(c)) )  
		goto label_cond_34;
	android::icu::impl::Utility::escapeUnprintable(result, c);
	0x0;
	goto label_goto_16;
	// 805    .line 712
label_cond_34:
	if ( oddNumberOfBackslashes )     
		goto label_cond_3a;
	if ( c != 0x5c )
		goto label_cond_3a;
	oddNumberOfBackslashes = 0x1;
	goto label_goto_16;
	// 816    .line 716
label_cond_3a:
	if ( !(oddNumberOfBackslashes) )  
		goto label_cond_41;
	result->append(0x5c);
label_cond_41:
	android::icu::text::UnicodeSet::appendCodePoint(result, c);
	oddNumberOfBackslashes = 0x0;
	goto label_goto_16;
	// 834    .line 723
	// 835    .end local v0    # "c":I
label_cond_46:
	if ( !(oddNumberOfBackslashes) )  
		goto label_cond_4d;
	result->append(0x5c);
	//label_try_end_4d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4e;
	}
	//    .catch Ljava/io/IOException; {:try_start_e .. :try_end_4d} :catch_4e
label_cond_4d:
	return result;
	// 850    .line 727
	// 851    .end local v2    # "i":I
	// 852    .end local v3    # "oddNumberOfBackslashes":Z
label_catch_4e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method private add([III)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::add(std::shared_ptr<int[]> other,int otherLen,int polarity)
{
	
	int cVar0;
	int cVar1;
	int a;
	int b;
	int k;
	int j;
	int i;
	int polarity;
	
	//    .param p1, "other"    # [I
	//    .param p2, "otherLen"    # I
	//    .param p3, "polarity"    # I
	cVar0 = 0x0;
	cVar1 = 0x110000;
	this->ensureBufferCapacity((this->len +  otherLen));
	0x0;
	//    .local v2, "i":I
	0x0;
	//    .local v4, "j":I
	//    .local v6, "k":I
	a = this->list[cVar0];
	//    .local v0, "a":I
	b = other[cVar0];
	//    .local v1, "b":I
	k = 0x0;
	//    .end local v6    # "k":I
	//    .local v7, "k":I
	j = 0x1;
	//    .end local v4    # "j":I
	//    .local v5, "j":I
	i = 0x1;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
label_goto_17:
	// switch
	{
	auto item = ( polarity );
	if (item == 0) goto label_pswitch_21;
	if (item == 1) goto label_pswitch_db;
	if (item == 2) goto label_pswitch_10d;
	if (item == 3) goto label_pswitch_b8;
	}
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
label_goto_1d:
	k = k;
	//    .end local v6    # "k":I
	//    .restart local v7    # "k":I
	j = j;
	//    .end local v4    # "j":I
	//    .restart local v5    # "j":I
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_17;
	// 950    .line 2946
label_pswitch_21:
	if ( a >= b )
		goto label_cond_4c;
	if ( k <= 0 )
		goto label_cond_41;
	if ( a >  this->buffer[( k + -0x1)] )
		goto label_cond_41;
	k = ( k + -0x1);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	a = android::icu::text::UnicodeSet::max(this->list[i], this->buffer[k]);
label_goto_3b:
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	polarity = ( polarity ^ 0x1);
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	goto label_goto_1d;
	// 997    .line 2953
	// 998    .end local v2    # "i":I
	// 999    .end local v4    # "j":I
	// 1000    .end local v6    # "k":I
	// 1001    .restart local v3    # "i":I
	// 1002    .restart local v5    # "j":I
	// 1003    .restart local v7    # "k":I
label_cond_41:
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = a;
	a = this->list[i];
	goto label_goto_3b;
	// 1020    .line 2958
	// 1021    .end local v6    # "k":I
	// 1022    .restart local v7    # "k":I
label_cond_4c:
	if ( b >= a )
		goto label_cond_73;
	if ( k <= 0 )
		goto label_cond_6a;
	if ( b >  this->buffer[( k + -0x1)] )
		goto label_cond_6a;
	k = ( k + -0x1);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	b = android::icu::text::UnicodeSet::max(other[j], this->buffer[k]);
label_goto_64:
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	polarity = ( polarity ^ 0x2);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_1d;
	// 1067    .line 2962
	// 1068    .end local v2    # "i":I
	// 1069    .end local v4    # "j":I
	// 1070    .end local v6    # "k":I
	// 1071    .restart local v3    # "i":I
	// 1072    .restart local v5    # "j":I
	// 1073    .restart local v7    # "k":I
label_cond_6a:
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = b;
	b = other[j];
	goto label_goto_64;
	// 1088    .line 2968
	// 1089    .end local v6    # "k":I
	// 1090    .restart local v7    # "k":I
label_cond_73:
	if ( a != cVar1 )
		goto label_cond_89;
label_cond_75:
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = cVar1;
	this->len = ( k + 0x1);
	//    .local v8, "temp":[I
	this->list = this->buffer;
	this->buffer = this->list;
	this->pat = 0x0;
	return this;
	// 1127    .line 2971
	// 1128    .end local v6    # "k":I
	// 1129    .end local v8    # "temp":[I
	// 1130    .restart local v7    # "k":I
label_cond_89:
	if ( k <= 0 )
		goto label_cond_ad;
	if ( a >  this->buffer[( k + -0x1)] )
		goto label_cond_ad;
	k = ( k + -0x1);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	a = android::icu::text::UnicodeSet::max(this->list[i], this->buffer[k]);
label_goto_a1:
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( ( polarity ^ 0x1) ^ 0x2);
	goto label_goto_1d;
	// 1179    .line 2975
	// 1180    .end local v2    # "i":I
	// 1181    .end local v4    # "j":I
	// 1182    .end local v6    # "k":I
	// 1183    .restart local v3    # "i":I
	// 1184    .restart local v5    # "j":I
	// 1185    .restart local v7    # "k":I
label_cond_ad:
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = a;
	a = this->list[i];
	goto label_goto_a1;
	// 1202    .line 2984
	// 1203    .end local v6    # "k":I
	// 1204    .restart local v7    # "k":I
label_pswitch_b8:
	if ( b >  a )
		goto label_cond_d2;
	if ( a == cVar1 )
		goto label_cond_75;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = a;
label_goto_c2:
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( ( polarity ^ 0x1) ^ 0x2);
	goto label_goto_1d;
	// 1244    .line 2988
	// 1245    .end local v2    # "i":I
	// 1246    .end local v4    # "j":I
	// 1247    .end local v6    # "k":I
	// 1248    .restart local v3    # "i":I
	// 1249    .restart local v5    # "j":I
	// 1250    .restart local v7    # "k":I
label_cond_d2:
	if ( b == cVar1 )
		goto label_cond_75;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = b;
	goto label_goto_c2;
	// 1265    .line 2995
	// 1266    .end local v6    # "k":I
	// 1267    .restart local v7    # "k":I
label_pswitch_db:
	if ( a >= b )
		goto label_cond_ee;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = a;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	polarity = ( polarity ^ 0x1);
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	goto label_goto_1d;
	// 1296    .line 2997
	// 1297    .end local v2    # "i":I
	// 1298    .end local v4    # "j":I
	// 1299    .end local v6    # "k":I
	// 1300    .restart local v3    # "i":I
	// 1301    .restart local v5    # "j":I
	// 1302    .restart local v7    # "k":I
label_cond_ee:
	if ( b >= a )
		goto label_cond_fa;
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( polarity ^ 0x2);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_1d;
	// 1325    .line 3000
	// 1326    .end local v2    # "i":I
	// 1327    .end local v4    # "j":I
	// 1328    .end local v6    # "k":I
	// 1329    .restart local v3    # "i":I
	// 1330    .restart local v5    # "j":I
	// 1331    .restart local v7    # "k":I
label_cond_fa:
	if ( a == cVar1 )
		goto label_cond_75;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( ( polarity ^ 0x1) ^ 0x2);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	goto label_goto_1d;
	// 1361    .line 3006
	// 1362    .end local v2    # "i":I
	// 1363    .end local v4    # "j":I
	// 1364    .end local v6    # "k":I
	// 1365    .restart local v3    # "i":I
	// 1366    .restart local v5    # "j":I
	// 1367    .restart local v7    # "k":I
label_pswitch_10d:
	if ( b >= a )
		goto label_cond_11e;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = b;
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( polarity ^ 0x2);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_1d;
	// 1394    .line 3008
	// 1395    .end local v2    # "i":I
	// 1396    .end local v4    # "j":I
	// 1397    .end local v6    # "k":I
	// 1398    .restart local v3    # "i":I
	// 1399    .restart local v5    # "j":I
	// 1400    .restart local v7    # "k":I
label_cond_11e:
	if ( a >= b )
		goto label_cond_12c;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	polarity = ( polarity ^ 0x1);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	goto label_goto_1d;
	// 1425    .line 3011
	// 1426    .end local v2    # "i":I
	// 1427    .end local v4    # "j":I
	// 1428    .end local v6    # "k":I
	// 1429    .restart local v3    # "i":I
	// 1430    .restart local v5    # "j":I
	// 1431    .restart local v7    # "k":I
label_cond_12c:
	if ( a == cVar1 )
		goto label_cond_75;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( ( polarity ^ 0x1) ^ 0x2);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	goto label_goto_1d;
	// 1461    .line 2944
	// 1462    nop
	// 1464    :pswitch_data_140
	// 1465    .packed-switch 0x0
	// 1466        :pswitch_21
	// 1467        :pswitch_db
	// 1468        :pswitch_10d
	// 1469        :pswitch_b8
	// 1470    .end packed-switch

}
// .method public static addAllTo(Ljava/lang/Iterable;Ljava/util/Collection;)Ljava/util/Collection;
template <typename T>
std::shared_ptr<java::util::Collection<T>> android::icu::text::UnicodeSet::addAllTo(std::shared_ptr<java::lang::Iterable<T>> source,std::shared_ptr<java::util::Collection<T>> target)
{
	
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1476        value = {
	// 1477            "<T:",
	// 1478            "Ljava/lang/Object;",
	// 1479            "U::",
	// 1480            "Ljava/util/Collection",
	// 1481            "<TT;>;>(",
	// 1482            "Ljava/lang/Iterable",
	// 1483            "<TT;>;TU;)TU;"
	// 1484        }
	// 1485    .end annotation
	//    .local p0, "source":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	//    .local p1, "target":Ljava/util/Collection;, "TU;"
	item_S_iterator = source->iterator();
	//    .local v1, "item$iterator":Ljava/util/Iterator;
label_goto_4:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_12;
	//    .local v0, "item":Ljava/lang/Object;, "TT;"
	target->add(item_S_iterator->next());
	goto label_goto_4;
	// 1513    .line 4532
	// 1514    .end local v0    # "item":Ljava/lang/Object;, "TT;"
label_cond_12:
	return target;

}
// .method public static addAllTo(Ljava/lang/Iterable;[Ljava/lang/Object;)[Ljava/lang/Object;
template <typename T>
std::shared_ptr<T> android::icu::text::UnicodeSet::addAllTo(std::shared_ptr<java::lang::Iterable<T>> source,std::shared_ptr<std::vector<T>> target)
{
	
	int i;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1522        value = {
	// 1523            "<T:",
	// 1524            "Ljava/lang/Object;",
	// 1525            ">(",
	// 1526            "Ljava/lang/Iterable",
	// 1527            "<TT;>;[TT;)[TT;"
	// 1528        }
	// 1529    .end annotation
	//    .local p0, "source":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	//    .local p1, "target":[Ljava/lang/Object;, "[TT;"
	i = 0x0;
	//    .local v0, "i":I
	item_S_iterator = source->iterator();
	//    .local v3, "item$iterator":Ljava/util/Iterator;
label_goto_5:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_15;
	//    .local v2, "item":Ljava/lang/Object;, "TT;"
	//    .end local v0    # "i":I
	//    .local v1, "i":I
	target[i] = item_S_iterator->next();
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	goto label_goto_5;
	// 1569    .line 4544
	// 1570    .end local v2    # "item":Ljava/lang/Object;, "TT;"
label_cond_15:
	return target;

}
// .method private static final addCaseMapping(Landroid/icu/text/UnicodeSet;ILjava/lang/StringBuilder;)V
void android::icu::text::UnicodeSet::addCaseMapping(std::shared_ptr<android::icu::text::UnicodeSet> set,int result,std::shared_ptr<java::lang::StringBuilder> full)
{
	
	//    .param p0, "set"    # Landroid/icu/text/UnicodeSet;
	//    .param p1, "result"    # I
	//    .param p2, "full"    # Ljava/lang/StringBuilder;
	if ( result < 0 ) 
		goto label_cond_a;
	if ( result <= 0x1f )
		goto label_cond_b;
	set->add(result);
label_cond_a:
label_goto_a:
	return;
	// 1600    .line 3738
label_cond_b:
	set->add(full->toString());
	full->setLength(0x0);
	goto label_goto_a;

}
// .method private final add_unchecked(I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::add_unchecked(int c)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int i;
	int cVar4;
	std::shared_ptr<int[]> cVar5;
	int cVar6;
	std::shared<std::vector<int[]>> temp;
	
	//    .param p1, "c"    # I
	cVar0 = 0x10ffff;
	cVar1 = 0x0;
	if ( c < 0 ) 
		goto label_cond_8;
	if ( c <= cVar0 )
		goto label_cond_28;
label_cond_8:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(c), 0x6))->toString());
	// throw
	throw cVar2;
	// 1662    .line 1217
label_cond_28:
	i = this->findCodePoint(c);
	//    .local v0, "i":I
	if ( !(( i & 0x1)) )  
		goto label_cond_31;
	return this;
	// 1676    .line 1237
label_cond_31:
	if ( c != ( this->list[i] + -0x1) )
		goto label_cond_76;
	this->list[i] = c;
	if ( c != cVar0 )
		goto label_cond_52;
	this->ensureCapacity(( this->len + 0x1));
	cVar4 = this->len;
	this->len = ( cVar4 + 0x1);
	this->list[cVar4] = 0x110000;
label_cond_52:
	if ( i <= 0 )
		goto label_cond_72;
	if ( c != this->list[( i + -0x1)] )
		goto label_cond_72;
	java::lang::System::arraycopy(this->list, ( i + 0x1), this->list, ( i + -0x1), ( (this->len -  i) + -0x1));
	this->len = ( this->len + -0x2);
label_cond_72:
label_goto_72:
	this->pat = 0x0;
	return this;
	// 1760    .line 1256
label_cond_76:
	if ( i <= 0 )
		goto label_cond_8b;
	if ( c != this->list[( i + -0x1)] )
		goto label_cond_8b;
	cVar5 = this->list;
	cVar6 = ( i + -0x1);
	cVar5[cVar6] = ( cVar5[cVar6] + 0x1);
	goto label_goto_72;
	// 1785    .line 1278
label_cond_8b:
	if ( ( this->len + 0x2) <= this->list->size() )
		goto label_cond_c2;
	temp = std::make_shared<std::vector<int[]>>(( ( this->len + 0x2) + 0x10));
	//    .local v1, "temp":[I
	if ( !(i) )  
		goto label_cond_a3;
	java::lang::System::arraycopy(this->list, cVar1, temp, cVar1, i);
label_cond_a3:
	java::lang::System::arraycopy(this->list, i, temp, ( i + 0x2), (this->len -  i));
	this->list = temp;
	//    .end local v1    # "temp":[I
label_goto_af:
	this->list[i] = c;
	this->list[( i + 0x1)] = ( c + 0x1);
	this->len = ( this->len + 0x2);
	goto label_goto_72;
	// 1854    .line 1284
label_cond_c2:
	java::lang::System::arraycopy(this->list, i, this->list, ( i + 0x2), (this->len -  i));
	goto label_goto_af;

}
// .method private add_unchecked(II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::add_unchecked(int start,int end)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	cVar0 = 0x10ffff;
	cVar1 = 0x6;
	if ( start < 0 ) 
		goto label_cond_9;
	if ( start <= cVar0 )
		goto label_cond_28;
label_cond_9:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(start), cVar1))->toString());
	// throw
	throw cVar2;
	// 1920    .line 1168
label_cond_28:
	if ( end < 0 ) 
		goto label_cond_2c;
	if ( end <= cVar0 )
		goto label_cond_4b;
label_cond_2c:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(end), cVar1))->toString());
	// throw
	throw cVar4;
	// 1958    .line 1171
label_cond_4b:
	if ( start >= end )
		goto label_cond_56;
	this->add(this->range(start, end), 0x2, 0x0);
label_cond_55:
label_goto_55:
	return this;
	// 1976    .line 1173
label_cond_56:
	if ( start != end )
		goto label_cond_55;
	this->add(start);
	goto label_goto_55;

}
// .method private static append(Ljava/lang/Appendable;Ljava/lang/CharSequence;)V
void android::icu::text::UnicodeSet::append(std::shared_ptr<java::lang::Appendable> app,std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "app"    # Ljava/lang/Appendable;
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	try {
	//label_try_start_0:
	app->append(s);
	//label_try_end_3:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_3} :catch_4
	return;
	// 2001    .line 614
label_catch_4:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method private static appendCodePoint(Ljava/lang/Appendable;I)V
void android::icu::text::UnicodeSet::appendCodePoint(std::shared_ptr<java::lang::Appendable> app,int c)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "app"    # Ljava/lang/Appendable;
	//    .param p1, "c"    # I
	if ( android::icu::text::UnicodeSet::_assertionsDisabled )     
		goto label_cond_11;
	if ( c < 0 ) 
		goto label_cond_b;
	if ( c <= 0x10ffff )
		goto label_cond_11;
label_cond_b:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2038    .line 597
label_cond_11:
	if ( c >  0xffff )
		goto label_cond_1b;
	try {
	//label_try_start_17:
	app->append((char)(c));
label_goto_1a:
	return;
	// 2054    .line 600
label_cond_1b:
	app->append(android::icu::text::UTF16::getLeadSurrogate(c))->append(android::icu::text::UTF16::getTrailSurrogate(c));
	//label_try_end_2a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	//    .catch Ljava/io/IOException; {:try_start_17 .. :try_end_2a} :catch_2b
	goto label_goto_1a;
	// 2074    .line 602
label_catch_2b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar1 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method private appendNewPattern(Ljava/lang/Appendable;ZZ)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::UnicodeSet::appendNewPattern(std::shared_ptr<java::lang::Appendable> result,bool escapeUnprintable,bool includeStrings)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	int count;
	int i;
	int start;
	int end;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p2, "escapeUnprintable"    # Z
	//    .param p3, "includeStrings"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 2092        value = {
	// 2093            "<T::",
	// 2094            "Ljava/lang/Appendable;",
	// 2095            ">(TT;ZZ)TT;"
	// 2096        }
	// 2097    .end annotation
	//    .local p1, "result":Ljava/lang/Appendable;, "TT;"
	try {
	//label_try_start_2:
	result->append(0x5b);
	count = this->getRangeCount();
	//    .local v0, "count":I
	if ( count <= 0x1 )
		goto label_cond_48;
	if ( this->getRangeStart(0x0) )     
		goto label_cond_48;
	if ( this->getRangeEnd(( count + -0x1)) != 0x10ffff )
		goto label_cond_48;
	result->append(0x5e);
	i = 0x1;
	//    .local v3, "i":I
label_goto_24:
	if ( i >= count )
		goto label_cond_67;
	start = ( this->getRangeEnd(( i + -0x1)) + 0x1);
	//    .local v6, "start":I
	end = ( this->getRangeStart(i) + -0x1);
	//    .local v2, "end":I
	android::icu::text::UnicodeSet::_appendToPat(result, start, escapeUnprintable);
	if ( start == end )
		goto label_cond_45;
	if ( ( start + 0x1) == end )
		goto label_cond_42;
	result->append(0x2d);
label_cond_42:
	android::icu::text::UnicodeSet::_appendToPat(result, end, escapeUnprintable);
label_cond_45:
	i = ( i + 0x1);
	goto label_goto_24;
	// 2194    .line 786
	// 2195    .end local v2    # "end":I
	// 2196    .end local v3    # "i":I
	// 2197    .end local v6    # "start":I
label_cond_48:
	i = 0x0;
	//    .restart local v3    # "i":I
label_goto_49:
	if ( i >= count )
		goto label_cond_67;
	start = this->getRangeStart(i);
	//    .restart local v6    # "start":I
	end = this->getRangeEnd(i);
	//    .restart local v2    # "end":I
	android::icu::text::UnicodeSet::_appendToPat(result, start, escapeUnprintable);
	if ( start == end )
		goto label_cond_64;
	if ( ( start + 0x1) == end )
		goto label_cond_61;
	result->append(0x2d);
label_cond_61:
	android::icu::text::UnicodeSet::_appendToPat(result, end, escapeUnprintable);
label_cond_64:
	i = ( i + 0x1);
	goto label_goto_49;
	// 2243    .line 799
	// 2244    .end local v2    # "end":I
	// 2245    .end local v6    # "start":I
label_cond_67:
	if ( !(includeStrings) )  
		goto label_cond_98;
	if ( this->strings->size() <= 0 )
		goto label_cond_98;
	s_S_iterator = this->strings->iterator();
	//    .local v5, "s$iterator":Ljava/util/Iterator;
label_goto_77:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_98;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v4, "s":Ljava/lang/String;
	result->append(0x7b);
	android::icu::text::UnicodeSet::_appendToPat(result, s, escapeUnprintable);
	result->append(0x7d);
	//label_try_end_90:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_91;
	}
	//    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_90} :catch_91
	goto label_goto_77;
	// 2296    .line 808
	// 2297    .end local v0    # "count":I
	// 2298    .end local v3    # "i":I
	// 2299    .end local v4    # "s":Ljava/lang/String;
	// 2300    .end local v5    # "s$iterator":Ljava/util/Iterator;
label_catch_91:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 2312    .line 806
	// 2313    .end local v1    # "e":Ljava/io/IOException;
	// 2314    .restart local v0    # "count":I
	// 2315    .restart local v3    # "i":I
label_cond_98:
	try {
	//label_try_start_9a:
	result->append(0x5d);
	//label_try_end_9d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_91;
	}
	//    .catch Ljava/io/IOException; {:try_start_9a .. :try_end_9d} :catch_91
	return result;

}
// .method private applyFilter(Landroid/icu/text/UnicodeSet$Filter;I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::applyFilter(std::shared_ptr<android::icu::text::UnicodeSet_S_Filter> filter,int src)
{
	
	int startHasProperty;
	std::shared_ptr<android::icu::text::UnicodeSet> inclusions;
	int j;
	int ch;
	
	//    .param p1, "filter"    # Landroid/icu/text/UnicodeSet$Filter;
	//    .param p2, "src"    # I
	this->clear();
	startHasProperty = -0x1;
	//    .local v6, "startHasProperty":I
	inclusions = android::icu::text::UnicodeSet::getInclusions(src);
	//    .local v2, "inclusions":Landroid/icu/text/UnicodeSet;
	//    .local v4, "limitRange":I
	j = 0x0;
	//    .local v3, "j":I
label_goto_d:
	if ( j >= inclusions->getRangeCount() )
		goto label_cond_32;
	//    .local v5, "start":I
	//    .local v1, "end":I
	ch = inclusions->getRangeStart(j);
	//    .local v0, "ch":I
label_goto_18:
	if ( ch >  inclusions->getRangeEnd(j) )
		goto label_cond_2f;
	if ( !(filter->contains(ch)) )  
		goto label_cond_26;
	if ( startHasProperty >= 0 )
		goto label_cond_23;
	startHasProperty = ch;
label_cond_23:
label_goto_23:
	ch = ( ch + 0x1);
	goto label_goto_18;
	// 2399    .line 3247
label_cond_26:
	if ( startHasProperty < 0 ) 
		goto label_cond_23;
	this->add_unchecked(startHasProperty, ( ch + -0x1));
	startHasProperty = -0x1;
	goto label_goto_23;
	// 2413    .line 3234
label_cond_2f:
	j = ( j + 0x1);
	goto label_goto_d;
	// 2419    .line 3253
	// 2420    .end local v0    # "ch":I
	// 2421    .end local v1    # "end":I
	// 2422    .end local v5    # "start":I
label_cond_32:
	if ( startHasProperty < 0 ) 
		goto label_cond_3a;
	this->add_unchecked(startHasProperty, 0x10ffff);
label_cond_3a:
	return this;

}
// .method private applyPattern(Landroid/icu/impl/RuleCharacterIterator;Landroid/icu/text/SymbolTable;Ljava/lang/Appendable;I)V
void android::icu::text::UnicodeSet::applyPattern(std::shared_ptr<android::icu::impl::RuleCharacterIterator> chars,std::shared_ptr<android::icu::text::SymbolTable> symbols,std::shared_ptr<java::lang::Appendable> rebuiltPat,int options)
{
	
	int opts;
	std::shared_ptr<java::lang::StringBuilder> patBuf;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int scratch;
	std::shared_ptr<java::lang::Object> backup;
	int lastItem;
	int lastChar;
	int mode;
	int op;
	int cVar0;
	int c;
	int setMode;
	std::shared_ptr<android::icu::text::UnicodeSet> scratch;
	auto nested;
	int cVar4;
	std::shared_ptr<java::lang::CharSequence> curString;
	std::shared_ptr<java::lang::String> cVar2;
	int lastSingle;
	int curSingle;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::CharSequence> cVar2;
	auto cVar0;
	int literal;
	auto m;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	
	//    .param p1, "chars"    # Landroid/icu/impl/RuleCharacterIterator;
	//    .param p2, "symbols"    # Landroid/icu/text/SymbolTable;
	//    .param p3, "rebuiltPat"    # Ljava/lang/Appendable;
	//    .param p4, "options"    # I
	//    .local v24, "opts":I
	if ( !(( options & 0x1)) )  
		goto label_cond_8;
	opts = 0x7;
label_cond_8:
	patBuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v25, "patBuf":Ljava/lang/StringBuilder;
	buf = 0x0;
	//    .local v7, "buf":Ljava/lang/StringBuilder;
	//    .local v28, "usePat":Z
	scratch = 0x0;
	//    .local v26, "scratch":Landroid/icu/text/UnicodeSet;
	backup = 0x0;
	//    .local v6, "backup":Ljava/lang/Object;
	lastItem = 0x0;
	//    .local v15, "lastItem":I
	lastChar = 0x0;
	//    .local v14, "lastChar":I
	mode = 0x0;
	//    .local v20, "mode":I
	op = 0x0;
	//    .local v23, "op":C
	//    .local v13, "invert":Z
	this->clear();
	cVar0 = 0x0;
	//    .end local v6    # "backup":Ljava/lang/Object;
	//    .end local v7    # "buf":Ljava/lang/StringBuilder;
	//    .end local v23    # "op":C
	//    .end local v26    # "scratch":Landroid/icu/text/UnicodeSet;
label_goto_1f:
	if ( mode == 0x2 )
		goto label_cond_99;
	if ( !(( chars->atEnd() ^ 0x1)) )  
		goto label_cond_99;
	c = 0x0;
	//    .local v8, "c":I
	//    .local v18, "literal":Z
	//    .local v21, "nested":Landroid/icu/text/UnicodeSet;
	setMode = 0x0;
	//    .local v27, "setMode":I
	if ( !(android::icu::text::UnicodeSet::resemblesPropertyPattern(chars, opts)) )  
		goto label_cond_d2;
	setMode = 0x2;
	//    .end local v18    # "literal":Z
	//    .end local v21    # "nested":Landroid/icu/text/UnicodeSet;
label_cond_42:
label_goto_42:
	if ( !(setMode) )  
		goto label_cond_1c4;
	if ( lastItem != 0x1 )
		goto label_cond_67;
	if ( !(op) )  
		goto label_cond_56;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Char expected after operator")));
label_cond_56:
	this->add_unchecked(lastChar, lastChar);
	android::icu::text::UnicodeSet::_appendToPat(patBuf, lastChar, 0x0);
	0x0;
	op = 0x0;
label_cond_67:
	if ( op == 0x2d )
		goto label_cond_77;
	if ( op != 0x26 )
		goto label_cond_7e;
label_cond_77:
	patBuf->append(op);
label_cond_7e:
	if ( 0x0 )     
		goto label_cond_89;
	if ( scratch )     
		goto label_cond_87;
	scratch = std::make_shared<android::icu::text::UnicodeSet>();
label_cond_87:
	nested = scratch;
label_cond_89:
	// switch
	{
	auto item = ( setMode );
	if (item == 1) goto label_pswitch_174;
	if (item == 2) goto label_pswitch_183;
	if (item == 3) goto label_pswitch_197;
	}
label_goto_8c:
	if ( mode )     
		goto label_cond_1a4;
	this->set(nested);
	mode = 0x2;
	//    .end local v8    # "c":I
	//    .end local v27    # "setMode":I
label_cond_99:
	if ( mode == 0x2 )
		goto label_cond_ab;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing \']\'")));
label_cond_ab:
	chars->skipIgnored(0x3);
	if ( !(( options & 0x2)) )  
		goto label_cond_bf;
	this->closeOver(0x2);
label_cond_bf:
	if ( !(0x0) )  
		goto label_cond_c4;
	this->complement();
label_cond_c4:
	if ( !(0x0) )  
		goto label_cond_46f;
	android::icu::text::UnicodeSet::append(rebuiltPat, patBuf->toString());
label_goto_d1:
	return;
	// 2732    .line 2467
	// 2733    .restart local v8    # "c":I
	// 2734    .restart local v18    # "literal":Z
	// 2735    .restart local v21    # "nested":Landroid/icu/text/UnicodeSet;
	// 2736    .restart local v27    # "setMode":I
label_cond_d2:
	backup = chars->getPos(backup);
	//    .restart local v6    # "backup":Ljava/lang/Object;
	c = chars->next(opts);
	literal = chars->isEscaped();
	//    .local v18, "literal":Z
	if ( c != 0x5b )
		goto label_cond_153;
	if ( !(( literal ^ 0x1)) )  
		goto label_cond_153;
	if ( mode != 0x1 )
		goto label_cond_ff;
	chars->setPos(backup);
	setMode = 0x1;
	goto label_goto_42;
	// 2790    .line 2477
label_cond_ff:
	mode = 0x1;
	patBuf->append(0x5b);
	backup = chars->getPos(backup);
	c = chars->next(opts);
	if ( c != 0x5e )
		goto label_cond_142;
	if ( !(( chars->isEscaped() ^ 0x1)) )  
		goto label_cond_142;
	0x1;
	patBuf->append(0x5e);
	backup = chars->getPos(backup);
	chars->isEscaped();
label_cond_142:
	if ( c != 0x2d )
		goto label_cond_14c;
	//    .local v18, "literal":Z
	goto label_goto_42;
	// 2882    .line 2495
	// 2883    .local v18, "literal":Z
label_cond_14c:
	chars->setPos(backup);
	goto label_goto_1f;
	// 2891    .line 2499
label_cond_153:
	if ( !(symbols) )  
		goto label_cond_42;
	m = symbols->lookupMatcher(c);
	//    .local v19, "m":Landroid/icu/text/UnicodeMatcher;
	if ( !(m) )  
		goto label_cond_42;
	try {
	//label_try_start_15d:
	cVar1 = m;
	cVar1->checkCast("android::icu::text::UnicodeSet");
	cVar1;
	//label_try_end_163:
	}
	catch (java::lang::ClassCastException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_167;
	}
	//    .catch Ljava/lang/ClassCastException; {:try_start_15d .. :try_end_163} :catch_167
	//    .local v21, "nested":Landroid/icu/text/UnicodeSet;
	setMode = 0x3;
	goto label_goto_42;
	// 2922    .line 2505
	// 2923    .local v21, "nested":Landroid/icu/text/UnicodeSet;
label_catch_167:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v11, "e":Ljava/lang/ClassCastException;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Syntax error")));
	goto label_goto_42;
	// 2939    .line 2538
	// 2940    .end local v6    # "backup":Ljava/lang/Object;
	// 2941    .end local v11    # "e":Ljava/lang/ClassCastException;
	// 2942    .end local v18    # "literal":Z
	// 2943    .end local v19    # "m":Landroid/icu/text/UnicodeMatcher;
	// 2944    .end local v21    # "nested":Landroid/icu/text/UnicodeSet;
label_pswitch_174:
	nested->applyPattern(chars, symbols, patBuf, options);
	goto label_goto_8c;
	// 2960    .line 2541
label_pswitch_183:
	chars->skipIgnored(opts);
	nested->applyPropertyPattern(chars, patBuf, symbols);
	goto label_goto_8c;
	// 2981    .line 2545
label_pswitch_197:
	nested->_toPattern(patBuf, 0x0);
	goto label_goto_8c;
	// 2995    .line 2558
label_cond_1a4:
	// switch
	{
	auto item = ( op );
	if (item == 0x0) goto label_sswitch_1bc;
	if (item == 0x26) goto label_sswitch_1b4;
	if (item == 0x2d) goto label_sswitch_1ac;
	}
label_goto_1a7:
	op = 0x0;
	//    .restart local v23    # "op":C
	lastItem = 0x2;
	goto label_goto_1f;
	// 3010    .line 2560
	// 3011    .end local v23    # "op":C
label_sswitch_1ac:
	this->removeAll(nested);
	goto label_goto_1a7;
	// 3021    .line 2563
label_sswitch_1b4:
	this->retainAll(nested);
	goto label_goto_1a7;
	// 3031    .line 2566
label_sswitch_1bc:
	this->addAll(nested);
	goto label_goto_1a7;
	// 3041    .line 2576
label_cond_1c4:
	if ( mode )     
		goto label_cond_1d0;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing \'[\'")));
label_cond_1d0:
	if ( literal )     
		goto label_cond_1d5;
	// switch
	{
	auto item = ( c );
	if (item == 0x24) goto label_sswitch_39d;
	if (item == 0x26) goto label_sswitch_285;
	if (item == 0x2d) goto label_sswitch_240;
	if (item == 0x5d) goto label_sswitch_1f4;
	if (item == 0x5e) goto label_sswitch_29e;
	if (item == 0x7b) goto label_sswitch_2aa;
	}
label_cond_1d5:
label_goto_1d5:
	// switch
	{
	auto item = ( lastItem );
	if (item == 0) goto label_pswitch_1da;
	if (item == 1) goto label_pswitch_40b;
	if (item == 2) goto label_pswitch_45f;
	}
	goto label_goto_1f;
	// 3068    .line 2726
label_pswitch_1da:
	if ( op != 0x2d )
		goto label_cond_1ee;
	if ( !(cVar0) )  
		goto label_cond_1ee;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid range")));
label_cond_1ee:
	lastItem = 0x1;
	c;
	cVar0 = 0x0;
	//    .local v17, "lastString":Ljava/lang/String;
	goto label_goto_1f;
	// 3103    .line 2587
	// 3104    .end local v17    # "lastString":Ljava/lang/String;
label_sswitch_1f4:
	if ( lastItem != 0x1 )
		goto label_cond_208;
	this->add_unchecked(lastChar, lastChar);
	android::icu::text::UnicodeSet::_appendToPat(patBuf, lastChar, 0x0);
label_cond_208:
	if ( op != 0x2d )
		goto label_cond_22d;
	this->add_unchecked(op, op);
	patBuf->append(op);
label_cond_220:
label_goto_220:
	patBuf->append(0x5d);
	mode = 0x2;
	goto label_goto_1f;
	// 3169    .line 2595
label_cond_22d:
	if ( op != 0x26 )
		goto label_cond_220;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Trailing \'&\'")));
	goto label_goto_220;
	// 3190    .line 2602
label_sswitch_240:
	if ( op )     
		goto label_cond_279;
	if ( !(lastItem) )  
		goto label_cond_249;
	op = (char)(c);
	//    .local v23, "op":C
	goto label_goto_1f;
	// 3206    .line 2606
	// 3207    .end local v23    # "op":C
label_cond_249:
	if ( !(cVar0) )  
		goto label_cond_250;
	op = (char)(c);
	//    .restart local v23    # "op":C
	goto label_goto_1f;
	// 3220    .line 2611
	// 3221    .end local v23    # "op":C
label_cond_250:
	this->add_unchecked(c, c);
	//    .restart local v18    # "literal":Z
	if ( chars->next(opts) != 0x5d )
		goto label_cond_279;
	if ( !(( chars->isEscaped() ^ 0x1)) )  
		goto label_cond_279;
	patBuf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-]")));
	mode = 0x2;
	goto label_goto_1f;
	// 3268    .line 2621
	// 3269    .end local v18    # "literal":Z
label_cond_279:
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("\'-\' not after char, string, or set")));
	goto label_goto_1d5;
	// 3281    .line 2624
label_sswitch_285:
	if ( lastItem != 0x2 )
		goto label_cond_292;
	if ( op )     
		goto label_cond_292;
	op = (char)(c);
	//    .restart local v23    # "op":C
	goto label_goto_1f;
	// 3300    .line 2628
	// 3301    .end local v23    # "op":C
label_cond_292:
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("\'&\' not after set")));
	goto label_goto_1d5;
	// 3313    .line 2631
label_sswitch_29e:
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("\'^\' not after \'[\'")));
	goto label_goto_1d5;
	// 3325    .line 2634
label_sswitch_2aa:
	if ( !(op) )  
		goto label_cond_2be;
	if ( op == 0x2d )
		goto label_cond_2be;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing operand after operator")));
label_cond_2be:
	if ( lastItem != 0x1 )
		goto label_cond_2d2;
	this->add_unchecked(lastChar, lastChar);
	android::icu::text::UnicodeSet::_appendToPat(patBuf, lastChar, 0x0);
label_cond_2d2:
	lastItem = 0x0;
	if ( buf )     
		goto label_cond_365;
	buf = std::make_shared<java::lang::StringBuilder>();
label_goto_2da:
	0x0;
	//    .local v22, "ok":Z
label_goto_2dc:
	if ( chars->atEnd() )     
		goto label_cond_2fa;
	c = chars->next(opts);
	//    .restart local v18    # "literal":Z
	if ( c != 0x7d )
		goto label_cond_36e;
	if ( !(( chars->isEscaped() ^ 0x1)) )  
		goto label_cond_36e;
	//    .end local v18    # "literal":Z
label_cond_2fa:
	if ( buf->length() <  0x1 )
		goto label_cond_30a;
	if ( !(( 0x1 ^ 0x1)) )  
		goto label_cond_314;
label_cond_30a:
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid multicharacter string")));
label_cond_314:
	curString = buf->toString();
	//    .local v10, "curString":Ljava/lang/String;
	if ( op != 0x2d )
		goto label_cond_395;
	if ( cVar0 )     
		goto label_cond_373;
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_325:
	lastSingle = android::icu::lang::CharSequences::getSingleCodePoint(cVar2);
	//    .local v16, "lastSingle":I
	curSingle = android::icu::lang::CharSequences::getSingleCodePoint(curString);
	//    .local v9, "curSingle":I
	if ( lastSingle == 0x7fffffff )
		goto label_cond_376;
	if ( curSingle == 0x7fffffff )
		goto label_cond_376;
	this->add(lastSingle, curSingle);
label_goto_344:
	cVar0 = 0x0;
	//    .restart local v17    # "lastString":Ljava/lang/String;
	op = 0x0;
	//    .end local v9    # "curSingle":I
	//    .end local v16    # "lastSingle":I
	//    .end local v17    # "lastString":Ljava/lang/String;
label_goto_348:
	patBuf->append(0x7b);
	android::icu::text::UnicodeSet::_appendToPat(patBuf, curString, 0x0);
	patBuf->append(0x7d);
	goto label_goto_1f;
	// 3547    .line 2645
	// 3548    .end local v10    # "curString":Ljava/lang/String;
	// 3549    .end local v22    # "ok":Z
label_cond_365:
	buf->setLength(0x0);
	goto label_goto_2da;
	// 3559    .line 2655
	// 3560    .restart local v18    # "literal":Z
	// 3561    .restart local v22    # "ok":Z
label_cond_36e:
	android::icu::text::UnicodeSet::appendCodePoint(buf, c);
	goto label_goto_2dc;
	// 3567    .end local v18    # "literal":Z
	// 3568    .restart local v10    # "curString":Ljava/lang/String;
label_cond_373:
	cVar2 = cVar0;
	goto label_goto_325;
	// 3575    .line 2671
	// 3576    .restart local v9    # "curSingle":I
	// 3577    .restart local v16    # "lastSingle":I
label_cond_376:
	try {
	//label_try_start_376:
	android::icu::impl::StringRange::expand(cVar0, curString, 0x1, this->strings);
	//label_try_end_387:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_388;
	}
	//    .catch Ljava/lang/Exception; {:try_start_376 .. :try_end_387} :catch_388
	goto label_goto_344;
	// 3600    .line 2672
label_catch_388:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v12, "e":Ljava/lang/Exception;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	android::icu::text::UnicodeSet::syntaxError(chars, getCatchExcetionFromList->getMessage());
	goto label_goto_344;
	// 3618    .line 2679
	// 3619    .end local v9    # "curSingle":I
	// 3620    .end local v12    # "e":Ljava/lang/Exception;
	// 3621    .end local v16    # "lastSingle":I
label_cond_395:
	this->add(curString);
	cVar0 = curString;
	//    .local v17, "lastString":Ljava/lang/String;
	goto label_goto_348;
	// 3633    .line 2693
	// 3634    .end local v10    # "curString":Ljava/lang/String;
	// 3635    .end local v17    # "lastString":Ljava/lang/String;
	// 3636    .end local v22    # "ok":Z
label_sswitch_39d:
	backup = chars->getPos(backup);
	//    .restart local v6    # "backup":Ljava/lang/Object;
	//    .restart local v18    # "literal":Z
	if ( chars->next(opts) != 0x5d )
		goto label_cond_3c6;
	cVar4 = ( chars->isEscaped() ^ 0x1);
label_goto_3b7:
	if ( symbols )     
		goto label_cond_3c8;
	if ( !(( cVar4 ^ 0x1)) )  
		goto label_cond_3c8;
	0x24;
	chars->setPos(backup);
	goto label_goto_1d5;
	// 3687    .line 2696
label_cond_3c6:
	cVar4 = 0x0;
	//    .local v5, "anchor":Z
	goto label_goto_3b7;
	// 3694    .line 2702
	// 3695    .end local v5    # "anchor":Z
label_cond_3c8:
	if ( !(cVar4) )  
		goto label_cond_3ff;
	if ( op )     
		goto label_cond_3ff;
	if ( lastItem != 0x1 )
		goto label_cond_3e0;
	this->add_unchecked(lastChar, lastChar);
	android::icu::text::UnicodeSet::_appendToPat(patBuf, lastChar, 0x0);
label_cond_3e0:
	this->add_unchecked(0xffff);
	0x1;
	patBuf->append(0x24)->append(0x5d);
	mode = 0x2;
	goto label_goto_1f;
	// 3756    .line 2713
label_cond_3ff:
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Unquoted \'$\'")));
	goto label_goto_1d5;
	// 3768    .line 2734
	// 3769    .end local v6    # "backup":Ljava/lang/Object;
	// 3770    .end local v18    # "literal":Z
label_pswitch_40b:
	if ( op != 0x2d )
		goto label_cond_44e;
	if ( !(cVar0) )  
		goto label_cond_41f;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid range")));
label_cond_41f:
	if ( lastChar <  c )
		goto label_cond_42b;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid range")));
label_cond_42b:
	this->add_unchecked(lastChar, c);
	android::icu::text::UnicodeSet::_appendToPat(patBuf, lastChar, 0x0);
	patBuf->append(op);
	android::icu::text::UnicodeSet::_appendToPat(patBuf, c, 0x0);
	lastItem = 0x0;
	op = 0x0;
	//    .local v23, "op":C
	goto label_goto_1f;
	// 3845    .line 2750
	// 3846    .end local v23    # "op":C
label_cond_44e:
	this->add_unchecked(lastChar, lastChar);
	android::icu::text::UnicodeSet::_appendToPat(patBuf, lastChar, 0x0);
	lastChar = c;
	goto label_goto_1f;
	// 3866    .line 2756
label_pswitch_45f:
	if ( !(op) )  
		goto label_cond_46b;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Set expected after operator")));
label_cond_46b:
	c;
	lastItem = 0x1;
	goto label_goto_1f;
	// 3889    .line 2789
	// 3890    .end local v8    # "c":I
	// 3891    .end local v27    # "setMode":I
label_cond_46f:
	this->appendNewPattern(rebuiltPat, 0x0, 0x1);
	goto label_goto_d1;
	// 3909    .line 2536
	// 3910    :pswitch_data_480
	// 3911    .packed-switch 0x1
	// 3912        :pswitch_174
	// 3913        :pswitch_183
	// 3914        :pswitch_197
	// 3915    .end packed-switch
	// 3917    .line 2558
	// 3918    :sswitch_data_48a
	// 3919    .sparse-switch
	// 3920        0x0 -> :sswitch_1bc
	// 3921        0x26 -> :sswitch_1b4
	// 3922        0x2d -> :sswitch_1ac
	// 3923    .end sparse-switch
	// 3925    .line 2585
	// 3926    :sswitch_data_498
	// 3927    .sparse-switch
	// 3928        0x24 -> :sswitch_39d
	// 3929        0x26 -> :sswitch_285
	// 3930        0x2d -> :sswitch_240
	// 3931        0x5d -> :sswitch_1f4
	// 3932        0x5e -> :sswitch_29e
	// 3933        0x7b -> :sswitch_2aa
	// 3934    .end sparse-switch
	// 3936    .line 2724
	// 3937    :pswitch_data_4b2
	// 3938    .packed-switch 0x0
	// 3939        :pswitch_1da
	// 3940        :pswitch_40b
	// 3941        :pswitch_45f
	// 3942    .end packed-switch

}
// .method private applyPropertyPattern(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::applyPropertyPattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::ParsePosition> ppos,std::shared_ptr<android::icu::text::SymbolTable> symbols)
{
	
	int pos;
	int posix;
	int isName;
	int invert;
	std::shared_ptr<java::lang::String> cVar0;
	int close;
	int equals;
	auto propName;
	auto valueName;
	int cVar2;
	std::shared_ptr<java::lang::String> valueName;
	std::shared_ptr<java::lang::String> propName;
	int c;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "ppos"    # Ljava/text/ParsePosition;
	//    .param p3, "symbols"    # Landroid/icu/text/SymbolTable;
	pos = ppos->getIndex();
	//    .local v6, "pos":I
	if ( ( pos + 0x5) <= pattern->length() )
		goto label_cond_e;
	return 0x0;
	// 3972    .line 3571
label_cond_e:
	posix = 0x0;
	//    .local v16, "posix":Z
	isName = 0x0;
	//    .local v14, "isName":Z
	invert = 0x0;
	//    .local v13, "invert":Z
	if ( !(pattern->regionMatches(pos, std::make_shared<java::lang::String>(std::make_shared<char[]>("[:")), 0x0, 0x2)) )  
		goto label_cond_4b;
	posix = 0x1;
	pos = android::icu::impl::PatternProps::skipWhiteSpace(pattern, ( pos + 0x2));
	if ( pos >= pattern->length() )
		goto label_cond_3c;
	if ( pattern->charAt(pos) != 0x5e )
		goto label_cond_3c;
	pos = ( pos + 0x1);
	invert = 0x1;
label_cond_3c:
label_goto_3c:
	if ( !(posix) )  
		goto label_cond_9d;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>(":]"));
label_goto_41:
	close = pattern->indexOf(cVar0, pos);
	//    .local v11, "close":I
	if ( close >= 0 )
		goto label_cond_a1;
	return 0x0;
	// 4058    .line 3583
	// 4059    .end local v11    # "close":I
label_cond_4b:
	if ( pattern->regionMatches(0x1, pos, std::make_shared<java::lang::String>(std::make_shared<char[]>("\\p")), 0x0, 0x2) )     
		goto label_cond_66;
	if ( !(pattern->regionMatches(pos, std::make_shared<java::lang::String>(std::make_shared<char[]>("\\N")), 0x0, 0x2)) )  
		goto label_cond_9b;
label_cond_66:
	c = pattern->charAt(( pos + 0x1));
	//    .local v10, "c":C
	if ( c != 0x50 )
		goto label_cond_95;
	invert = 0x1;
label_goto_73:
	if ( c != 0x4e )
		goto label_cond_97;
	isName = 0x1;
label_goto_78:
	pos = android::icu::impl::PatternProps::skipWhiteSpace(pattern, ( pos + 0x2));
	if ( pos == pattern->length() )
		goto label_cond_93;
	pos = ( pos + 0x1);
	//    .end local v6    # "pos":I
	//    .local v15, "pos":I
	if ( pattern->charAt(pos) == 0x7b )
		goto label_cond_99;
	pos;
	//    .end local v15    # "pos":I
	//    .restart local v6    # "pos":I
label_cond_93:
	return 0x0;
	// 4160    .line 3586
label_cond_95:
	0x0;
	goto label_goto_73;
	// 4166    .line 3587
label_cond_97:
	0x0;
	goto label_goto_78;
	// 4172    .end local v6    # "pos":I
	// 4173    .restart local v15    # "pos":I
label_cond_99:
	pos = pos;
	//    .end local v15    # "pos":I
	//    .restart local v6    # "pos":I
	goto label_goto_3c;
	// 4182    .line 3595
	// 4183    .end local v10    # "c":C
label_cond_9b:
	return 0x0;
	// 4189    .line 3599
label_cond_9d:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("}"));
	goto label_goto_41;
	// 4195    .line 3608
	// 4196    .restart local v11    # "close":I
label_cond_a1:
	equals = pattern->indexOf(0x3d, pos);
	//    .local v12, "equals":I
	if ( equals < 0 ) 
		goto label_cond_d9;
	if ( equals >= close )
		goto label_cond_d9;
	if ( !(( isName ^ 0x1)) )  
		goto label_cond_d9;
	propName = pattern->substring(pos, equals);
	//    .local v17, "propName":Ljava/lang/String;
	valueName = pattern->substring(( equals + 0x1), close);
	//    .local v18, "valueName":Ljava/lang/String;
label_cond_bf:
label_goto_bf:
	this->applyPropertyAlias(propName, valueName, symbols);
	if ( !(invert) )  
		goto label_cond_cf;
	this->complement();
label_cond_cf:
	if ( !(posix) )  
		goto label_cond_ea;
	cVar2 = 0x2;
label_goto_d2:
	ppos->setIndex((cVar2 +  close));
	return this;
	// 4269    .line 3618
	// 4270    .end local v17    # "propName":Ljava/lang/String;
	// 4271    .end local v18    # "valueName":Ljava/lang/String;
label_cond_d9:
	propName = pattern->substring(pos, close);
	//    .restart local v17    # "propName":Ljava/lang/String;
	valueName = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .restart local v18    # "valueName":Ljava/lang/String;
	if ( !(isName) )  
		goto label_cond_bf;
	valueName = propName;
	propName = std::make_shared<java::lang::String>(std::make_shared<char[]>("na"));
	goto label_goto_bf;
	// 4295    .line 3640
label_cond_ea:
	cVar2 = 0x1;
	goto label_goto_d2;

}
// .method private applyPropertyPattern(Landroid/icu/impl/RuleCharacterIterator;Ljava/lang/Appendable;Landroid/icu/text/SymbolTable;)V
void android::icu::text::UnicodeSet::applyPropertyPattern(std::shared_ptr<android::icu::impl::RuleCharacterIterator> chars,std::shared_ptr<java::lang::Appendable> rebuiltPat,std::shared_ptr<android::icu::text::SymbolTable> symbols)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> patStr;
	std::shared_ptr<java::text::ParsePosition> pos;
	
	//    .param p1, "chars"    # Landroid/icu/impl/RuleCharacterIterator;
	//    .param p2, "rebuiltPat"    # Ljava/lang/Appendable;
	//    .param p3, "symbols"    # Landroid/icu/text/SymbolTable;
	cVar0 = 0x0;
	patStr = chars->lookahead();
	//    .local v0, "patStr":Ljava/lang/String;
	pos = std::make_shared<java::text::ParsePosition>(cVar0);
	//    .local v1, "pos":Ljava/text/ParsePosition;
	this->applyPropertyPattern(patStr, pos, symbols);
	if ( pos->getIndex() )     
		goto label_cond_19;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid property pattern")));
label_cond_19:
	chars->jumpahead(pos->getIndex());
	android::icu::text::UnicodeSet::append(rebuiltPat, patStr->substring(cVar0, pos->getIndex()));
	return;

}
// .method private checkFrozen()V
void android::icu::text::UnicodeSet::checkFrozen()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen object")));
	// throw
	throw cVar0;
	// 4381    .line 4129
label_cond_f:
	return;

}
// .method public static compare(ILjava/lang/CharSequence;)I
int android::icu::text::UnicodeSet::compare(int codePoint,std::shared_ptr<java::lang::CharSequence> string)
{
	
	//    .param p0, "codePoint"    # I
	//    .param p1, "string"    # Ljava/lang/CharSequence;
	return (0 - android::icu::lang::CharSequences::compare(string, codePoint));

}
// .method public static compare(Ljava/lang/CharSequence;I)I
int android::icu::text::UnicodeSet::compare(std::shared_ptr<java::lang::CharSequence> string,int codePoint)
{
	
	//    .param p0, "string"    # Ljava/lang/CharSequence;
	//    .param p1, "codePoint"    # I
	return android::icu::lang::CharSequences::compare(string, codePoint);

}
// .method public static compare(Ljava/lang/Iterable;Ljava/lang/Iterable;)I
int android::icu::text::UnicodeSet::compare(std::shared_ptr<java::lang::Iterable<java::lang::Comparable<T>>> collection1,std::shared_ptr<java::lang::Iterable<java::lang::Comparable<T>>> collection2)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4419        value = {
	// 4420            "<T::",
	// 4421            "Ljava/lang/Comparable",
	// 4422            "<TT;>;>(",
	// 4423            "Ljava/lang/Iterable",
	// 4424            "<TT;>;",
	// 4425            "Ljava/lang/Iterable",
	// 4426            "<TT;>;)I"
	// 4427        }
	// 4428    .end annotation
	//    .local p0, "collection1":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	//    .local p1, "collection2":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	return android::icu::text::UnicodeSet::compare(collection1->iterator(), collection2->iterator());

}
// .method public static compare(Ljava/util/Collection;Ljava/util/Collection;Landroid/icu/text/UnicodeSet$ComparisonStyle;)I
int android::icu::text::UnicodeSet::compare(std::shared_ptr<java::util::Collection<java::lang::Comparable<T>>> collection1,std::shared_ptr<java::util::Collection<java::lang::Comparable<T>>> collection2,std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> style)
{
	
	int cVar4;
	int cVar3;
	int diff;
	int cVar2;
	
	//    .param p2, "style"    # Landroid/icu/text/UnicodeSet$ComparisonStyle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 4453        value = {
	// 4454            "<T::",
	// 4455            "Ljava/lang/Comparable",
	// 4456            "<TT;>;>(",
	// 4457            "Ljava/util/Collection",
	// 4458            "<TT;>;",
	// 4459            "Ljava/util/Collection",
	// 4460            "<TT;>;",
	// 4461            "Landroid/icu/text/UnicodeSet$ComparisonStyle;",
	// 4462            ")I"
	// 4463        }
	// 4464    .end annotation
	//    .local p0, "collection1":Ljava/util/Collection;, "Ljava/util/Collection<TT;>;"
	//    .local p1, "collection2":Ljava/util/Collection;, "Ljava/util/Collection<TT;>;"
	cVar4 = 0x1;
	cVar3 = 0x0;
	if ( style == android::icu::text::UnicodeSet_S_ComparisonStyle::LEXICOGRAPHIC )
		goto label_cond_20;
	diff = (collection1->size() - collection2->size());
	//    .local v0, "diff":I
	if ( !(diff) )  
		goto label_cond_20;
	if ( diff >= 0 )
		goto label_cond_1e;
	cVar2 = cVar4;
label_goto_15:
	if ( style != android::icu::text::UnicodeSet_S_ComparisonStyle::SHORTER_FIRST )
		goto label_cond_1a;
	cVar3 = cVar4;
label_cond_1a:
	if ( cVar2 != cVar3 )
		goto label_cond_1d;
	cVar4 = -0x1;
label_cond_1d:
	return cVar4;
label_cond_1e:
	cVar2 = cVar3;
	goto label_goto_15;
	// 4518    .line 4521
	// 4519    .end local v0    # "diff":I
label_cond_20:
	return android::icu::text::UnicodeSet::compare(collection1, collection2);

}
// .method public static compare(Ljava/util/Iterator;Ljava/util/Iterator;)I
int android::icu::text::UnicodeSet::compare(std::shared_ptr<java::util::Iterator<java::lang::Comparable<T>>> first,std::shared_ptr<java::util::Iterator<java::lang::Comparable<T>>> other)
{
	
	int cVar1;
	std::shared_ptr<java::lang::Comparable> item1;
	std::shared_ptr<java::lang::Comparable> item2;
	int result;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4531        value = {
	// 4532            "<T::",
	// 4533            "Ljava/lang/Comparable",
	// 4534            "<TT;>;>(",
	// 4535            "Ljava/util/Iterator",
	// 4536            "<TT;>;",
	// 4537            "Ljava/util/Iterator",
	// 4538            "<TT;>;)I"
	// 4539        }
	// 4540    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4543    .end annotation
	//    .local p0, "first":Ljava/util/Iterator;, "Ljava/util/Iterator<TT;>;"
	//    .local p1, "other":Ljava/util/Iterator;, "Ljava/util/Iterator<TT;>;"
	cVar1 = 0x0;
label_cond_1:
	if ( first->hasNext() )     
		goto label_cond_f;
	if ( !(other->hasNext()) )  
		goto label_cond_e;
	cVar1 = -0x1;
label_cond_e:
	return cVar1;
	// 4570    .line 4497
label_cond_f:
	if ( other->hasNext() )     
		goto label_cond_17;
	return 0x1;
	// 4583    .line 4500
label_cond_17:
	item1 = first->next();
	item1->checkCast("java::lang::Comparable");
	//    .local v0, "item1":Ljava/lang/Comparable;, "TT;"
	item2 = other->next();
	item2->checkCast("java::lang::Comparable");
	//    .local v1, "item2":Ljava/lang/Comparable;, "TT;"
	result = item1->compareTo(item2);
	//    .local v2, "result":I
	if ( !(result) )  
		goto label_cond_1;
	return result;

}
// .method private containsAll(Ljava/lang/String;I)Z
bool android::icu::text::UnicodeSet::containsAll(std::shared_ptr<java::lang::String> s,int i)
{
	
	bool cVar0;
	int cp;
	std::shared_ptr<java::util::Iterator> setStr_S_iterator;
	std::shared_ptr<java::lang::String> setStr;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "i"    # I
	cVar0 = 0x1;
	if ( i <  s->length() )
		goto label_cond_8;
	return cVar0;
	// 4631    .line 1952
label_cond_8:
	cp = android::icu::text::UTF16::charAt(s, i);
	//    .local v0, "cp":I
	if ( !(this->contains(cp)) )  
		goto label_cond_1e;
	if ( !(this->containsAll(s, (android::icu::text::UTF16::getCharCount(cp) +  i))) )  
		goto label_cond_1e;
	return cVar0;
	// 4660    .line 1956
label_cond_1e:
	setStr_S_iterator = this->strings->iterator();
	//    .local v2, "setStr$iterator":Ljava/util/Iterator;
label_cond_24:
	if ( !(setStr_S_iterator->hasNext()) )  
		goto label_cond_42;
	setStr = setStr_S_iterator->next();
	setStr->checkCast("java::lang::String");
	//    .local v1, "setStr":Ljava/lang/String;
	if ( !(s->startsWith(setStr, i)) )  
		goto label_cond_24;
	if ( !(this->containsAll(s, (setStr->length() +  i))) )  
		goto label_cond_24;
	return cVar0;
	// 4705    .line 1961
	// 4706    .end local v1    # "setStr":Ljava/lang/String;
label_cond_42:
	return 0x0;

}
// .method private ensureBufferCapacity(I)V
void android::icu::text::UnicodeSet::ensureBufferCapacity(int newLen)
{
	
	//    .param p1, "newLen"    # I
	if ( !(this->buffer) )  
		goto label_cond_a;
	if ( newLen >  this->buffer->size() )
		goto label_cond_a;
	return;
	// 4731    .line 2862
label_cond_a:
	this->buffer = std::make_shared<std::vector<int[]>>(( newLen + 0x10));
	return;

}
// .method private ensureCapacity(I)V
void android::icu::text::UnicodeSet::ensureCapacity(int newLen)
{
	
	int cVar0;
	std::shared<std::vector<int[]>> temp;
	
	//    .param p1, "newLen"    # I
	cVar0 = 0x0;
	if ( newLen >  this->list->size() )
		goto label_cond_7;
	return;
	// 4759    .line 2855
label_cond_7:
	temp = std::make_shared<std::vector<int[]>>(( newLen + 0x10));
	//    .local v0, "temp":[I
	java::lang::System::arraycopy(this->list, cVar0, temp, cVar0, this->len);
	this->list = temp;
	return;

}
// .method private final findCodePoint(I)I
int android::icu::text::UnicodeSet::findCodePoint(int c)
{
	
	int cVar0;
	int lo;
	int hi;
	int i;
	
	//    .param p1, "c"    # I
	cVar0 = 0x0;
	if ( c >= this->list[cVar0] )
		goto label_cond_8;
	return cVar0;
	// 4796    .line 1670
label_cond_8:
	if ( this->len <  0x2 )
		goto label_cond_1c;
	if ( c <  this->list[( this->len + -0x2)] )
		goto label_cond_1c;
	return ( this->len + -0x1);
	// 4820    .line 1671
label_cond_1c:
	lo = 0x0;
	//    .local v2, "lo":I
	hi = ( this->len + -0x1);
	//    .local v0, "hi":I
label_goto_21:
	i = _ushri((lo + hi),0x1);
	//    .local v1, "i":I
	if ( i != lo )
		goto label_cond_28;
	return hi;
	// 4843    .line 1678
label_cond_28:
	if ( c >= this->list[i] )
		goto label_cond_30;
	hi = i;
	goto label_goto_21;
	// 4856    .line 1681
label_cond_30:
	lo = i;
	goto label_goto_21;

}
// .method public static from(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::from(std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	return cVar0->add(s);

}
// .method public static fromAll(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::fromAll(std::shared_ptr<java::lang::CharSequence> s)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	return cVar0->addAll(s);

}
// .method public static getDefaultXSymbolTable()Landroid/icu/text/UnicodeSet$XSymbolTable;
std::shared_ptr<android::icu::text::UnicodeSet_S_XSymbolTable> android::icu::text::UnicodeSet::getDefaultXSymbolTable()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4900    .end annotation
	return android::icu::text::UnicodeSet::XSYMBOL_TABLE;

}
// .method private static declared-synchronized getInclusions(I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::getInclusions(int src)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> incl;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "src"    # I
	cVar0 = android::icu::text::UnicodeSet();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( android::icu::text::UnicodeSet::INCLUSIONS )     
		goto label_cond_d;
	android::icu::text::UnicodeSet::INCLUSIONS = std::make_shared<std::vector<std::vector<android::icu::text::UnicodeSet>>>(0xc);
label_cond_d:
	if ( android::icu::text::UnicodeSet::INCLUSIONS[src] )     
		goto label_cond_48;
	incl = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v0, "incl":Landroid/icu/text/UnicodeSet;
	// switch
	{
	auto item = ( src );
	if (item == 1) goto label_pswitch_3f;
	if (item == 2) goto label_pswitch_4e;
	if (item == 3) goto label_pswitch_1b;
	if (item == 4) goto label_pswitch_96;
	if (item == 5) goto label_pswitch_9c;
	if (item == 6) goto label_pswitch_54;
	if (item == 7) goto label_pswitch_5f;
	if (item == 8) goto label_pswitch_6e;
	if (item == 9) goto label_pswitch_78;
	if (item == 10) goto label_pswitch_82;
	if (item == 11) goto label_pswitch_8c;
	}
label_pswitch_1b:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalStateException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("UnicodeSet.getInclusions(unknown src ")))->append(src)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar1;
	// 4979    :try_end_3c
	// 4980    .catchall {:try_start_3 .. :try_end_3c} :catchall_3c
	// 4982    .end local v0    # "incl":Landroid/icu/text/UnicodeSet;
label_catchall_3c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 4990    .line 3175
	// 4991    .restart local v0    # "incl":Landroid/icu/text/UnicodeSet;
label_pswitch_3f:
	try {
	//label_try_start_3f:
	android::icu::impl::UCharacterProperty::INSTANCE->addPropertyStarts(incl);
label_goto_44:
	android::icu::text::UnicodeSet::INCLUSIONS[src] = incl;
	//    .end local v0    # "incl":Landroid/icu/text/UnicodeSet;
label_cond_48:
	//label_try_end_4c:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_3f .. :try_end_4c} :catchall_3c
	cVar0->monitor_exit();
	return android::icu::text::UnicodeSet::INCLUSIONS[src];
	// 5017    .line 3178
	// 5018    .restart local v0    # "incl":Landroid/icu/text/UnicodeSet;
label_pswitch_4e:
	try {
	//label_try_start_4e:
	android::icu::impl::UCharacterProperty::INSTANCE->upropsvec_addPropertyStarts(incl);
	goto label_goto_44;
	// 5027    .line 3181
label_pswitch_54:
	android::icu::impl::UCharacterProperty::INSTANCE->addPropertyStarts(incl);
	android::icu::impl::UCharacterProperty::INSTANCE->upropsvec_addPropertyStarts(incl);
	goto label_goto_44;
	// 5040    .line 3185
label_pswitch_5f:
	android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl->addPropertyStarts(incl);
	android::icu::impl::UCaseProps::INSTANCE->addPropertyStarts(incl);
	goto label_goto_44;
	// 5057    .line 3189
label_pswitch_6e:
	android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl->addPropertyStarts(incl);
	goto label_goto_44;
	// 5069    .line 3192
label_pswitch_78:
	android::icu::impl::Norm2AllModes::getNFKCInstance({const[class].FS-Param})->impl->addPropertyStarts(incl);
	goto label_goto_44;
	// 5081    .line 3195
label_pswitch_82:
	android::icu::impl::Norm2AllModes::getNFKC_CFInstance({const[class].FS-Param})->impl->addPropertyStarts(incl);
	goto label_goto_44;
	// 5093    .line 3198
label_pswitch_8c:
	android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl->addCanonIterPropertyStarts(incl);
	goto label_goto_44;
	// 5105    .line 3201
label_pswitch_96:
	android::icu::impl::UCaseProps::INSTANCE->addPropertyStarts(incl);
	goto label_goto_44;
	// 5113    .line 3204
label_pswitch_9c:
	android::icu::impl::UBiDiProps::INSTANCE->addPropertyStarts(incl);
	//label_try_end_a1:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_4e .. :try_end_a1} :catchall_3c
	goto label_goto_44;
	// 5123    .line 3173
	// 5124    :pswitch_data_a2
	// 5125    .packed-switch 0x1
	// 5126        :pswitch_3f
	// 5127        :pswitch_4e
	// 5128        :pswitch_1b
	// 5129        :pswitch_96
	// 5130        :pswitch_9c
	// 5131        :pswitch_54
	// 5132        :pswitch_5f
	// 5133        :pswitch_6e
	// 5134        :pswitch_78
	// 5135        :pswitch_82
	// 5136        :pswitch_8c
	// 5137    .end packed-switch

}
// .method private static getSingleCP(Ljava/lang/CharSequence;)I
int android::icu::text::UnicodeSet::getSingleCP(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	int cp;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = -0x1;
	if ( s->length() >= cVar0 )
		goto label_cond_12;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t use zero-length strings in UnicodeSet")));
	// throw
	throw cVar3;
	// 5167    .line 1328
label_cond_12:
	if ( s->length() <= 0x2 )
		goto label_cond_1a;
	return cVar2;
	// 5179    .line 1329
label_cond_1a:
	if ( s->length() != cVar0 )
		goto label_cond_25;
	return s->charAt(cVar1);
	// 5193    .line 1332
label_cond_25:
	cp = android::icu::text::UTF16::charAt(s, cVar1);
	//    .local v0, "cp":I
	if ( cp <= 0xffff )
		goto label_cond_2f;
	return cp;
	// 5208    .line 1336
label_cond_2f:
	return cVar2;

}
// .method public static getSingleCodePoint(Ljava/lang/CharSequence;)I
int android::icu::text::UnicodeSet::getSingleCodePoint(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5217    .end annotation
	return android::icu::lang::CharSequences::getSingleCodePoint(s);

}
// .method private static matchRest(Landroid/icu/text/Replaceable;IILjava/lang/String;)I
int android::icu::text::UnicodeSet::matchRest(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit,std::shared_ptr<java::lang::String> s)
{
	
	int cVar0;
	int slen;
	int maxLen;
	int i;
	
	//    .param p0, "text"    # Landroid/icu/text/Replaceable;
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "s"    # Ljava/lang/String;
	cVar0 = 0x0;
	slen = s->length();
	//    .local v2, "slen":I
	if ( start >= limit )
		goto label_cond_1f;
	maxLen = (limit - start);
	//    .local v1, "maxLen":I
	if ( maxLen <= slen )
		goto label_cond_c;
	maxLen = slen;
label_cond_c:
	i = 0x1;
	//    .local v0, "i":I
label_goto_d:
	if ( i >= maxLen )
		goto label_cond_3b;
	if ( text->charAt((start + i)) == s->charAt(i) )
		goto label_cond_1c;
	return cVar0;
	// 5279    .line 996
label_cond_1c:
	i = ( i + 0x1);
	goto label_goto_d;
	// 5285    .line 1000
	// 5286    .end local v0    # "i":I
	// 5287    .end local v1    # "maxLen":I
label_cond_1f:
	maxLen = (start - limit);
	//    .restart local v1    # "maxLen":I
	if ( maxLen <= slen )
		goto label_cond_24;
	maxLen = slen;
label_cond_24:
	i = 0x1;
	//    .restart local v0    # "i":I
label_goto_27:
	if ( i >= maxLen )
		goto label_cond_3b;
	if ( text->charAt((start - i)) == s->charAt((( slen + -0x1) - i)) )
		goto label_cond_38;
	return cVar0;
	// 5325    .line 1003
label_cond_38:
	i = ( i + 0x1);
	goto label_goto_27;
	// 5331    .line 1007
label_cond_3b:
	return maxLen;

}
// .method private static matchesAt(Ljava/lang/CharSequence;ILjava/lang/CharSequence;)I
int android::icu::text::UnicodeSet::matchesAt(std::shared_ptr<java::lang::CharSequence> text,int offsetInText,std::shared_ptr<java::lang::CharSequence> substring)
{
	
	int cVar0;
	int len;
	int i;
	int j;
	
	//    .param p0, "text"    # Ljava/lang/CharSequence;
	//    .param p1, "offsetInText"    # I
	//    .param p2, "substring"    # Ljava/lang/CharSequence;
	cVar0 = -0x1;
	len = substring->length();
	//    .local v2, "len":I
	//    .local v5, "textLength":I
	if ( (text->length() + offsetInText) <= len )
		goto label_cond_e;
	return cVar0;
	// 5365    .line 1064
label_cond_e:
	i = 0x0;
	//    .local v0, "i":I
	j = offsetInText;
	//    .local v1, "j":I
label_goto_10:
	if ( i >= len )
		goto label_cond_22;
	//    .local v3, "pc":C
	//    .local v4, "tc":C
	if ( substring->charAt(i) == text->charAt(j) )
		goto label_cond_1d;
	return cVar0;
	// 5394    .line 1065
label_cond_1d:
	i = ( i + 0x1);
	j = ( j + 0x1);
	goto label_goto_10;
	// 5402    .line 1070
	// 5403    .end local v3    # "pc":C
	// 5404    .end local v4    # "tc":C
label_cond_22:
	return i;

}
// .method private static final max(II)I
int android::icu::text::UnicodeSet::max(int a,int b)
{
	
	int a;
	
	//    .param p0, "a"    # I
	//    .param p1, "b"    # I
	if ( a <= b )
		goto label_cond_3;
	//    .end local p0    # "a":I
label_goto_2:
	return a;
	// 5422    .restart local p0    # "a":I
label_cond_3:
	a = b;
	goto label_goto_2;

}
// .method private static mungeCharName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSet::mungeCharName(std::shared_ptr<java::lang::String> source)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int i;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "source"    # Ljava/lang/String;
	cVar0 = android::icu::impl::PatternProps::trimWhiteSpace(source);
	buf = 0x0;
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .end local v0    # "buf":Ljava/lang/StringBuilder;
	//    .local v2, "i":I
label_goto_6:
	if ( i >= cVar0->length() )
		goto label_cond_3b;
	//    .local v1, "ch":C
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(cVar0->charAt(i))) )  
		goto label_cond_24;
	if ( buf )     
		goto label_cond_2c;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	buf = cVar1->append(cVar0, 0x0, i);
label_cond_22:
	//    .end local v1    # "ch":C
label_cond_24:
	if ( !(buf) )  
		goto label_cond_29;
	buf->append(0x20);
label_cond_29:
label_goto_29:
	i = ( i + 0x1);
	goto label_goto_6;
	// 5501    .line 3273
	// 5502    .restart local v1    # "ch":C
label_cond_2c:
	if ( buf->charAt(( buf->length() + -0x1)) != 0x20 )
		goto label_cond_22;
	goto label_goto_29;
	// 5520    .line 3282
	// 5521    .end local v1    # "ch":C
label_cond_3b:
	if ( buf )     
		goto label_cond_3e;
	//    .end local p0    # "source":Ljava/lang/String;
label_goto_3d:
	return cVar0;
	// 5529    .restart local p0    # "source":Ljava/lang/String;
label_cond_3e:
	cVar0 = buf->toString();
	goto label_goto_3d;

}
// .method private range(II)[I
int android::icu::text::UnicodeSet::range(int start,int end)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> cVar2;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->rangeList )     
		goto label_cond_19;
	cVar2 = std::make_shared<std::vector<int[]>>(0x3);
	cVar2[cVar1] = start;
	cVar2[cVar0] = ( end + 0x1);
	cVar2[0x2] = 0x110000;
	this->rangeList = cVar2;
label_goto_16:
	return this->rangeList;
	// 5578    .line 2872
label_cond_19:
	this->rangeList[cVar1] = start;
	this->rangeList[cVar0] = ( end + 0x1);
	goto label_goto_16;

}
// .method public static resemblesPattern(Ljava/lang/String;I)Z
bool android::icu::text::UnicodeSet::resemblesPattern(std::shared_ptr<java::lang::String> pattern,int pos)
{
	
	bool cVar0;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .param p1, "pos"    # I
	if ( ( pos + 0x1) >= pattern->length() )
		goto label_cond_12;
	if ( pattern->charAt(pos) != 0x5b )
		goto label_cond_12;
	cVar0 = 0x1;
label_goto_11:
	return cVar0;
	// 5624    .line 586
label_cond_12:
	cVar0 = android::icu::text::UnicodeSet::resemblesPropertyPattern(pattern, pos);
	goto label_goto_11;

}
// .method private static resemblesPropertyPattern(Landroid/icu/impl/RuleCharacterIterator;I)Z
bool android::icu::text::UnicodeSet::resemblesPropertyPattern(std::shared_ptr<android::icu::impl::RuleCharacterIterator> chars,int iterOpts)
{
	
	int cVar0;
	bool result;
	int cVar1;
	int c;
	int d;
	
	//    .param p0, "chars"    # Landroid/icu/impl/RuleCharacterIterator;
	//    .param p1, "iterOpts"    # I
	cVar0 = 0x5b;
	result = 0x0;
	//    .local v3, "result":Z
	cVar1 = ( iterOpts & -0x3);
	//    .local v2, "pos":Ljava/lang/Object;
	c = chars->next(cVar1);
	//    .local v0, "c":I
	if ( c == cVar0 )
		goto label_cond_14;
	if ( c != 0x5c )
		goto label_cond_21;
label_cond_14:
	d = chars->next(( cVar1 & -0x5));
	//    .local v1, "d":I
	if ( c != cVar0 )
		goto label_cond_27;
	if ( d != 0x3a )
		goto label_cond_25;
	result = 0x1;
	//    .end local v1    # "d":I
label_cond_21:
label_goto_21:
	chars->setPos(chars->getPos(0x0));
	return result;
	// 5696    .line 3550
	// 5697    .restart local v1    # "d":I
label_cond_25:
	result = 0x0;
	goto label_goto_21;
	// 5703    .line 3551
label_cond_27:
	if ( d == 0x4e )
		goto label_cond_2f;
	if ( d != 0x70 )
		goto label_cond_31;
label_cond_2f:
	result = 0x1;
	goto label_goto_21;
label_cond_31:
	if ( d == 0x50 )
		goto label_cond_2f;
	result = 0x0;
	goto label_goto_21;

}
// .method private static resemblesPropertyPattern(Ljava/lang/String;I)Z
bool android::icu::text::UnicodeSet::resemblesPropertyPattern(std::shared_ptr<java::lang::String> pattern,int pos)
{
	
	bool cVar3;
	int cVar1;
	bool cVar2;
	
	//    .param p0, "pattern"    # Ljava/lang/String;
	//    .param p1, "pos"    # I
	cVar3 = 0x1;
	cVar1 = 0x2;
	cVar2 = 0x0;
	if ( ( pos + 0x5) <= pattern->length() )
		goto label_cond_c;
	return cVar2;
	// 5752    .line 3529
label_cond_c:
	if ( pattern->regionMatches(pos, std::make_shared<java::lang::String>(std::make_shared<char[]>("[:")), cVar2, cVar1) )     
		goto label_cond_27;
	if ( pattern->regionMatches(cVar3, pos, std::make_shared<java::lang::String>(std::make_shared<char[]>("\\p")), cVar2, cVar1) )     
		goto label_cond_27;
	cVar3 = pattern->regionMatches(pos, std::make_shared<java::lang::String>(std::make_shared<char[]>("\\N")), cVar2, cVar1);
label_cond_27:
	return cVar3;

}
// .method private retain([III)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::retain(std::shared_ptr<int[]> other,int otherLen,int polarity)
{
	
	int cVar0;
	int cVar1;
	int a;
	int b;
	int k;
	int j;
	int i;
	int polarity;
	
	//    .param p1, "other"    # [I
	//    .param p2, "otherLen"    # I
	//    .param p3, "polarity"    # I
	cVar0 = 0x0;
	cVar1 = 0x110000;
	this->ensureBufferCapacity((this->len +  otherLen));
	0x0;
	//    .local v2, "i":I
	0x0;
	//    .local v4, "j":I
	//    .local v6, "k":I
	a = this->list[cVar0];
	//    .local v0, "a":I
	b = other[cVar0];
	//    .local v1, "b":I
	k = 0x0;
	//    .end local v6    # "k":I
	//    .local v7, "k":I
	j = 0x1;
	//    .end local v4    # "j":I
	//    .local v5, "j":I
	i = 0x1;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
label_goto_17:
	// switch
	{
	auto item = ( polarity );
	if (item == 0) goto label_pswitch_21;
	if (item == 1) goto label_pswitch_9d;
	if (item == 2) goto label_pswitch_cf;
	if (item == 3) goto label_pswitch_64;
	}
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
label_goto_1d:
	k = k;
	//    .end local v6    # "k":I
	//    .restart local v7    # "k":I
	j = j;
	//    .end local v4    # "j":I
	//    .restart local v5    # "j":I
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_17;
	// 5873    .line 3044
label_pswitch_21:
	if ( a >= b )
		goto label_cond_2e;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	polarity = ( polarity ^ 0x1);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	goto label_goto_1d;
	// 5898    .line 3046
	// 5899    .end local v2    # "i":I
	// 5900    .end local v4    # "j":I
	// 5901    .end local v6    # "k":I
	// 5902    .restart local v3    # "i":I
	// 5903    .restart local v5    # "j":I
	// 5904    .restart local v7    # "k":I
label_cond_2e:
	if ( b >= a )
		goto label_cond_39;
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( polarity ^ 0x2);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_1d;
	// 5927    .line 3049
	// 5928    .end local v2    # "i":I
	// 5929    .end local v4    # "j":I
	// 5930    .end local v6    # "k":I
	// 5931    .restart local v3    # "i":I
	// 5932    .restart local v5    # "j":I
	// 5933    .restart local v7    # "k":I
label_cond_39:
	if ( a != cVar1 )
		goto label_cond_4f;
label_cond_3b:
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = cVar1;
	this->len = ( k + 0x1);
	//    .local v8, "temp":[I
	this->list = this->buffer;
	this->buffer = this->list;
	this->pat = 0x0;
	return this;
	// 5970    .line 3050
	// 5971    .end local v6    # "k":I
	// 5972    .end local v8    # "temp":[I
	// 5973    .restart local v7    # "k":I
label_cond_4f:
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = a;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( ( polarity ^ 0x1) ^ 0x2);
	goto label_goto_1d;
	// 6004    .line 3055
	// 6005    .end local v2    # "i":I
	// 6006    .end local v4    # "j":I
	// 6007    .end local v6    # "k":I
	// 6008    .restart local v3    # "i":I
	// 6009    .restart local v5    # "j":I
	// 6010    .restart local v7    # "k":I
label_pswitch_64:
	if ( a >= b )
		goto label_cond_76;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = a;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	polarity = ( polarity ^ 0x1);
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	goto label_goto_1d;
	// 6039    .line 3057
	// 6040    .end local v2    # "i":I
	// 6041    .end local v4    # "j":I
	// 6042    .end local v6    # "k":I
	// 6043    .restart local v3    # "i":I
	// 6044    .restart local v5    # "j":I
	// 6045    .restart local v7    # "k":I
label_cond_76:
	if ( b >= a )
		goto label_cond_86;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = b;
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( polarity ^ 0x2);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_1d;
	// 6072    .line 3060
	// 6073    .end local v2    # "i":I
	// 6074    .end local v4    # "j":I
	// 6075    .end local v6    # "k":I
	// 6076    .restart local v3    # "i":I
	// 6077    .restart local v5    # "j":I
	// 6078    .restart local v7    # "k":I
label_cond_86:
	if ( a == cVar1 )
		goto label_cond_3b;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = a;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( ( polarity ^ 0x1) ^ 0x2);
	goto label_goto_1d;
	// 6112    .line 3066
	// 6113    .end local v2    # "i":I
	// 6114    .end local v4    # "j":I
	// 6115    .end local v6    # "k":I
	// 6116    .restart local v3    # "i":I
	// 6117    .restart local v5    # "j":I
	// 6118    .restart local v7    # "k":I
label_pswitch_9d:
	if ( a >= b )
		goto label_cond_ab;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	polarity = ( polarity ^ 0x1);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	goto label_goto_1d;
	// 6143    .line 3068
	// 6144    .end local v2    # "i":I
	// 6145    .end local v4    # "j":I
	// 6146    .end local v6    # "k":I
	// 6147    .restart local v3    # "i":I
	// 6148    .restart local v5    # "j":I
	// 6149    .restart local v7    # "k":I
label_cond_ab:
	if ( b >= a )
		goto label_cond_bc;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = b;
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( polarity ^ 0x2);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_1d;
	// 6176    .line 3071
	// 6177    .end local v2    # "i":I
	// 6178    .end local v4    # "j":I
	// 6179    .end local v6    # "k":I
	// 6180    .restart local v3    # "i":I
	// 6181    .restart local v5    # "j":I
	// 6182    .restart local v7    # "k":I
label_cond_bc:
	if ( a == cVar1 )
		goto label_cond_3b;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( ( polarity ^ 0x1) ^ 0x2);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	goto label_goto_1d;
	// 6212    .line 3077
	// 6213    .end local v2    # "i":I
	// 6214    .end local v4    # "j":I
	// 6215    .end local v6    # "k":I
	// 6216    .restart local v3    # "i":I
	// 6217    .restart local v5    # "j":I
	// 6218    .restart local v7    # "k":I
label_pswitch_cf:
	if ( b >= a )
		goto label_cond_db;
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( polarity ^ 0x2);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_1d;
	// 6241    .line 3079
	// 6242    .end local v2    # "i":I
	// 6243    .end local v4    # "j":I
	// 6244    .end local v6    # "k":I
	// 6245    .restart local v3    # "i":I
	// 6246    .restart local v5    # "j":I
	// 6247    .restart local v7    # "k":I
label_cond_db:
	if ( a >= b )
		goto label_cond_ee;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = a;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	polarity = ( polarity ^ 0x1);
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	goto label_goto_1d;
	// 6276    .line 3082
	// 6277    .end local v2    # "i":I
	// 6278    .end local v4    # "j":I
	// 6279    .end local v6    # "k":I
	// 6280    .restart local v3    # "i":I
	// 6281    .restart local v5    # "j":I
	// 6282    .restart local v7    # "k":I
label_cond_ee:
	if ( a == cVar1 )
		goto label_cond_3b;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	polarity = ( ( polarity ^ 0x1) ^ 0x2);
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	goto label_goto_1d;
	// 6312    .line 3042
	// 6313    nop
	// 6315    :pswitch_data_102
	// 6316    .packed-switch 0x0
	// 6317        :pswitch_21
	// 6318        :pswitch_9d
	// 6319        :pswitch_cf
	// 6320        :pswitch_64
	// 6321    .end packed-switch

}
// .method public static setDefaultXSymbolTable(Landroid/icu/text/UnicodeSet$XSymbolTable;)V
void android::icu::text::UnicodeSet::setDefaultXSymbolTable(std::shared_ptr<android::icu::text::UnicodeSet_S_XSymbolTable> xSymbolTable)
{
	
	//    .param p0, "xSymbolTable"    # Landroid/icu/text/UnicodeSet$XSymbolTable;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 6328    .end annotation
	android::icu::text::UnicodeSet::INCLUSIONS = 0x0;
	android::icu::text::UnicodeSet::XSYMBOL_TABLE = xSymbolTable;
	return;

}
// .method private spanCodePointsAndCount(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;Landroid/icu/util/OutputInt;)I
int android::icu::text::UnicodeSet::spanCodePointsAndCount(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition,std::shared_ptr<android::icu::util::OutputInt> outCount)
{
	
	int next;
	int count;
	int c;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	//    .param p4, "outCount"    # Landroid/icu/util/OutputInt;
	if ( spanCondition == android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_1a;
	//    .local v4, "spanContained":Z
label_goto_5:
	next = start;
	//    .local v3, "next":I
	//    .local v2, "length":I
	count = 0x0;
	//    .local v1, "count":I
label_goto_b:
	c = java::lang::Character::codePointAt(s, next);
	//    .local v0, "c":I
	if ( spanContained == this->contains(c) )
		goto label_cond_1c;
label_cond_15:
	if ( !(outCount) )  
		goto label_cond_19;
	outCount->value = count;
label_cond_19:
	return next;
	// 6398    .line 4036
	// 6399    .end local v0    # "c":I
	// 6400    .end local v1    # "count":I
	// 6401    .end local v2    # "length":I
	// 6402    .end local v3    # "next":I
	// 6403    .end local v4    # "spanContained":Z
label_cond_1a:
	//    .restart local v4    # "spanContained":Z
	goto label_goto_5;
	// 6410    .line 4047
	// 6411    .restart local v0    # "c":I
	// 6412    .restart local v1    # "count":I
	// 6413    .restart local v2    # "length":I
	// 6414    .restart local v3    # "next":I
label_cond_1c:
	count = ( count + 0x1);
	next = (next +  java::lang::Character::charCount(c));
	if ( next >= s->length() )
		goto label_cond_15;
	goto label_goto_b;

}
// .method private static syntaxError(Landroid/icu/impl/RuleCharacterIterator;Ljava/lang/String;)V
void android::icu::text::UnicodeSet::syntaxError(std::shared_ptr<android::icu::impl::RuleCharacterIterator> chars,std::shared_ptr<java::lang::String> msg)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "chars"    # Landroid/icu/impl/RuleCharacterIterator;
	//    .param p1, "msg"    # Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error: ")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" at \")))->append(android::icu::impl::Utility::escape(chars->toString()))->append(0x22)->toString());
	// throw
	throw cVar0;

}
// .method public static toArray(Landroid/icu/text/UnicodeSet;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSet::toArray(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p0, "set"    # Landroid/icu/text/UnicodeSet;
	cVar0 = android::icu::text::UnicodeSet::addAllTo(set, std::make_shared<std::vector<std::vector<java::lang::String>>>(set->size()));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method private xor([III)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::xor(std::shared_ptr<int[]> other,int otherLen,int polarity)
{
	
	int cVar0;
	int cVar1;
	int j;
	int k;
	int i;
	int a;
	int b;
	
	//    .param p1, "other"    # [I
	//    .param p2, "otherLen"    # I
	//    .param p3, "polarity"    # I
	cVar0 = 0x110000;
	cVar1 = 0x0;
	this->ensureBufferCapacity((this->len +  otherLen));
	0x0;
	//    .local v2, "i":I
	j = 0x0;
	//    .local v4, "j":I
	k = 0x0;
	//    .local v6, "k":I
	i = 0x1;
	a = this->list[cVar1];
	//    .local v0, "a":I
	if ( polarity == 0x1 )
		goto label_cond_17;
	if ( polarity != 0x2 )
		goto label_cond_35;
label_cond_17:
	b = 0x0;
	//    .local v1, "b":I
	if ( other[j] )     
		goto label_cond_1f;
	j = 0x1;
	b = other[j];
label_cond_1f:
	k = k;
	//    .end local v6    # "k":I
	//    .local v7, "k":I
	j = j;
	//    .end local v4    # "j":I
	//    .local v5, "j":I
	i = i;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
label_goto_22:
	if ( a >= b )
		goto label_cond_3c;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = a;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
label_goto_31:
	k = k;
	//    .end local v6    # "k":I
	//    .restart local v7    # "k":I
	j = j;
	//    .end local v4    # "j":I
	//    .restart local v5    # "j":I
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_22;
	// 6627    .line 2901
	// 6628    .end local v1    # "b":I
	// 6629    .end local v3    # "i":I
	// 6630    .end local v5    # "j":I
	// 6631    .end local v7    # "k":I
	// 6632    .restart local v2    # "i":I
	// 6633    .restart local v4    # "j":I
	// 6634    .restart local v6    # "k":I
label_cond_35:
	b = other[cVar1];
	//    .restart local v1    # "b":I
	k = k;
	//    .end local v6    # "k":I
	//    .restart local v7    # "k":I
	0x1;
	//    .end local v4    # "j":I
	//    .restart local v5    # "j":I
	i;
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_22;
	// 6655    .line 2909
label_cond_3c:
	if ( b >= a )
		goto label_cond_4a;
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = b;
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_31;
	// 6681    .line 2912
	// 6682    .end local v2    # "i":I
	// 6683    .end local v4    # "j":I
	// 6684    .end local v6    # "k":I
	// 6685    .restart local v3    # "i":I
	// 6686    .restart local v5    # "j":I
	// 6687    .restart local v7    # "k":I
label_cond_4a:
	if ( a == cVar0 )
		goto label_cond_58;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	a = this->list[i];
	//    .end local v5    # "j":I
	//    .restart local v4    # "j":I
	b = other[j];
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	goto label_goto_31;
	// 6713    .line 2917
	// 6714    .end local v2    # "i":I
	// 6715    .end local v4    # "j":I
	// 6716    .end local v6    # "k":I
	// 6717    .restart local v3    # "i":I
	// 6718    .restart local v5    # "j":I
	// 6719    .restart local v7    # "k":I
label_cond_58:
	//    .end local v7    # "k":I
	//    .restart local v6    # "k":I
	this->buffer[k] = cVar0;
	this->len = ( k + 0x1);
	//    .local v8, "temp":[I
	this->list = this->buffer;
	this->buffer = this->list;
	this->pat = 0x0;
	return this;

}
// .method public _generatePattern(Ljava/lang/StringBuffer;Z)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::UnicodeSet::_generatePattern(std::shared_ptr<java::lang::StringBuffer> result,bool escapeUnprintable)
{
	
	//    .param p1, "result"    # Ljava/lang/StringBuffer;
	//    .param p2, "escapeUnprintable"    # Z
	return this->_generatePattern(result, escapeUnprintable, 0x1);

}
// .method public _generatePattern(Ljava/lang/StringBuffer;ZZ)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::UnicodeSet::_generatePattern(std::shared_ptr<java::lang::StringBuffer> result,bool escapeUnprintable,bool includeStrings)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	
	//    .param p1, "result"    # Ljava/lang/StringBuffer;
	//    .param p2, "escapeUnprintable"    # Z
	//    .param p3, "includeStrings"    # Z
	cVar0 = this->appendNewPattern(result, escapeUnprintable, includeStrings);
	cVar0->checkCast("java::lang::StringBuffer");
	return cVar0;

}
// .method public final add(I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::add(int c)
{
	
	//    .param p1, "c"    # I
	this->checkFrozen();
	return this->add_unchecked(c);

}
// .method public add(II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::add(int start,int end)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	this->checkFrozen();
	return this->add_unchecked(start, end);

}
// .method public final add(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::add(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cp;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	this->checkFrozen();
	cp = android::icu::text::UnicodeSet::getSingleCP(s);
	//    .local v0, "cp":I
	if ( cp >= 0 )
		goto label_cond_16;
	this->strings->add(s->toString());
	this->pat = 0x0;
label_goto_15:
	return this;
	// 6856    .line 1312
label_cond_16:
	this->add_unchecked(cp, cp);
	goto label_goto_15;

}
// .method public add(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::add(std::shared_ptr<java::lang::Iterable<java::lang::Object>> source)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 6866        value = {
	// 6867            "(",
	// 6868            "Ljava/lang/Iterable",
	// 6869            "<*>;)",
	// 6870            "Landroid/icu/text/UnicodeSet;"
	// 6871        }
	// 6872    .end annotation
	//    .local p1, "source":Ljava/lang/Iterable;, "Ljava/lang/Iterable<*>;"
	return this->addAll(source);

}
// .method public addAll(II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::addAll(int start,int end)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	this->checkFrozen();
	return this->add_unchecked(start, end);

}
// .method public addAll(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::addAll(std::shared_ptr<android::icu::text::UnicodeSet> c)
{
	
	//    .param p1, "c"    # Landroid/icu/text/UnicodeSet;
	this->checkFrozen();
	this->add(c->list, c->len, 0x0);
	this->strings->addAll(c->strings);
	return this;

}
// .method public final addAll(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::addAll(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int i;
	int cp;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	this->checkFrozen();
	i = 0x0;
	//    .local v1, "i":I
label_goto_4:
	if ( i >= s->length() )
		goto label_cond_17;
	cp = android::icu::text::UTF16::charAt(s, i);
	//    .local v0, "cp":I
	this->add_unchecked(cp, cp);
	i = (i +  android::icu::text::UTF16::getCharCount(cp));
	goto label_goto_4;
	// 6966    .line 1352
	// 6967    .end local v0    # "cp":I
label_cond_17:
	return this;

}
// .method public addAll(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::addAll(std::shared_ptr<java::lang::Iterable<java::lang::Object>> source)
{
	
	std::shared_ptr<java::util::Iterator> o_S_iterator;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 6975        value = {
	// 6976            "(",
	// 6977            "Ljava/lang/Iterable",
	// 6978            "<*>;)",
	// 6979            "Landroid/icu/text/UnicodeSet;"
	// 6980        }
	// 6981    .end annotation
	//    .local p1, "source":Ljava/lang/Iterable;, "Ljava/lang/Iterable<*>;"
	this->checkFrozen();
	o_S_iterator = source->iterator();
	//    .local v1, "o$iterator":Ljava/util/Iterator;
label_goto_7:
	if ( !(o_S_iterator->hasNext()) )  
		goto label_cond_19;
	//    .local v0, "o":Ljava/lang/Object;
	this->add(o_S_iterator->next()->toString());
	goto label_goto_7;
	// 7015    .line 2846
	// 7016    .end local v0    # "o":Ljava/lang/Object;
label_cond_19:
	return this;

}
// .method public varargs addAll([Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::addAll(std::shared_ptr<std::vector<java::lang::CharSequence>> collection)
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 7024        value = {
	// 7025            "<T::",
	// 7026            "Ljava/lang/CharSequence;",
	// 7027            ">([TT;)",
	// 7028            "Landroid/icu/text/UnicodeSet;"
	// 7029        }
	// 7030    .end annotation
	//    .local p1, "collection":[Ljava/lang/CharSequence;, "[TT;"
	this->checkFrozen();
	cVar0 = 0x0;
label_goto_5:
	if ( cVar0 >= collection->size() )
		goto label_cond_f;
	//    .local v0, "str":Ljava/lang/CharSequence;, "TT;"
	this->add(collection[cVar0]);
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_5;
	// 7056    .line 4352
	// 7057    .end local v0    # "str":Ljava/lang/CharSequence;, "TT;"
label_cond_f:
	return this;

}
// .method public addAllTo(Ljava/util/Collection;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::String>> android::icu::text::UnicodeSet::addAllTo(std::shared_ptr<java::util::Collection<java::lang::String>> target)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 7065        value = {
	// 7066            "<T::",
	// 7067            "Ljava/util/Collection",
	// 7068            "<",
	// 7069            "Ljava/lang/String;",
	// 7070            ">;>(TT;)TT;"
	// 7071        }
	// 7072    .end annotation
	//    .local p1, "target":Ljava/util/Collection;, "TT;"
	return android::icu::text::UnicodeSet::addAllTo(this, target);

}
// .method public addAllTo([Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSet::addAllTo(std::shared_ptr<std::vector<java::lang::String>> target)
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p1, "target"    # [Ljava/lang/String;
	cVar0 = android::icu::text::UnicodeSet::addAllTo(this, target);
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public addBridges(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::addBridges(std::shared_ptr<android::icu::text::UnicodeSet> dontCare)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSetIterator> it;
	
	//    .param p1, "dontCare"    # Landroid/icu/text/UnicodeSet;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 7103    .end annotation
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(this);
	//    .local v1, "notInInput":Landroid/icu/text/UnicodeSet;
	it = std::make_shared<android::icu::text::UnicodeSetIterator>(cVar0->complement());
	//    .local v0, "it":Landroid/icu/text/UnicodeSetIterator;
label_cond_e:
label_goto_e:
	if ( !(it->nextRange()) )  
		goto label_cond_37;
	if ( !(it->codepoint) )  
		goto label_cond_e;
	if ( it->codepoint == android::icu::text::UnicodeSetIterator::IS_STRING )
		goto label_cond_e;
	if ( it->codepointEnd == 0x10ffff )
		goto label_cond_e;
	if ( !(dontCare->contains(it->codepoint, it->codepointEnd)) )  
		goto label_cond_e;
	this->add(it->codepoint, it->codepointEnd);
	goto label_goto_e;
	// 7166    .line 4588
label_cond_37:
	return this;

}
// .method public addMatchSetTo(Landroid/icu/text/UnicodeSet;)V
void android::icu::text::UnicodeSet::addMatchSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo)
{
	
	//    .param p1, "toUnionTo"    # Landroid/icu/text/UnicodeSet;
	toUnionTo->addAll(this);
	return;

}
// .method public applyIntPropertyValue(II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::applyIntPropertyValue(int prop,int value)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_GeneralCategoryMaskFilter> cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet_S_ScriptExtensionsFilter> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet_S_IntPropertyFilter> cVar2;
	
	//    .param p1, "prop"    # I
	//    .param p2, "value"    # I
	this->checkFrozen();
	if ( prop != 0x2000 )
		goto label_cond_11;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet_S_GeneralCategoryMaskFilter>(value);
	this->applyFilter(cVar0, 0x1);
label_goto_10:
	return this;
	// 7210    .line 3314
label_cond_11:
	if ( prop != 0x7000 )
		goto label_cond_1f;
	cVar1 = std::make_shared<android::icu::text::UnicodeSet_S_ScriptExtensionsFilter>(value);
	this->applyFilter(cVar1, 0x2);
	goto label_goto_10;
	// 7227    .line 3317
label_cond_1f:
	cVar2 = std::make_shared<android::icu::text::UnicodeSet_S_IntPropertyFilter>(prop, value);
	this->applyFilter(cVar2, android::icu::impl::UCharacterProperty::INSTANCE->getSource(prop));
	goto label_goto_10;

}
// .method public final applyPattern(Ljava/lang/String;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::applyPattern(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::text::ParsePosition> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->checkFrozen();
	return this->applyPattern(pattern, cVar0, cVar0, 0x1);

}
// .method public applyPattern(Ljava/lang/String;I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::applyPattern(std::shared_ptr<java::lang::String> pattern,int options)
{
	
	std::shared_ptr<java::text::ParsePosition> cVar0;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "options"    # I
	cVar0 = 0x0;
	this->checkFrozen();
	return this->applyPattern(pattern, cVar0, cVar0, options);

}
// .method public applyPattern(Ljava/lang/String;Ljava/text/ParsePosition;Landroid/icu/text/SymbolTable;I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::applyPattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::text::ParsePosition> pos,std::shared_ptr<android::icu::text::SymbolTable> symbols,int options)
{
	
	int parsePositionWasNull;
	std::shared_ptr<java::text::ParsePosition> pos;
	std::shared_ptr<java::lang::StringBuilder> rebuiltPat;
	std::shared_ptr<android::icu::impl::RuleCharacterIterator> chars;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	//    .param p3, "symbols"    # Landroid/icu/text/SymbolTable;
	//    .param p4, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 7290    .end annotation
	if ( pos )     
		goto label_cond_63;
	parsePositionWasNull = 0x1;
	//    .local v2, "parsePositionWasNull":Z
label_goto_4:
	if ( !(parsePositionWasNull) )  
		goto label_cond_b;
	//    .end local p2    # "pos":Ljava/text/ParsePosition;
	pos = std::make_shared<java::text::ParsePosition>(0x0);
	//    .restart local p2    # "pos":Ljava/text/ParsePosition;
label_cond_b:
	rebuiltPat = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "rebuiltPat":Ljava/lang/StringBuilder;
	chars = std::make_shared<android::icu::impl::RuleCharacterIterator>(pattern, symbols, pos);
	//    .local v0, "chars":Landroid/icu/impl/RuleCharacterIterator;
	this->applyPattern(chars, symbols, rebuiltPat, options);
	if ( !(chars->inVariable()) )  
		goto label_cond_24;
	android::icu::text::UnicodeSet::syntaxError(chars, std::make_shared<java::lang::String>(std::make_shared<char[]>("Extra chars in variable value")));
label_cond_24:
	this->pat = rebuiltPat->toString();
	if ( !(parsePositionWasNull) )  
		goto label_cond_65;
	i = pos->getIndex();
	//    .local v1, "i":I
	if ( !(( options & 0x1)) )  
		goto label_cond_38;
	i = android::icu::impl::PatternProps::skipWhiteSpace(pattern, i);
label_cond_38:
	if ( i == pattern->length() )
		goto label_cond_65;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parse of \")))->append(pattern)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(i)->toString());
	// throw
	throw cVar0;
	// 7412    .line 2347
	// 7413    .end local v0    # "chars":Landroid/icu/impl/RuleCharacterIterator;
	// 7414    .end local v1    # "i":I
	// 7415    .end local v2    # "parsePositionWasNull":Z
	// 7416    .end local v3    # "rebuiltPat":Ljava/lang/StringBuilder;
label_cond_63:
	parsePositionWasNull = 0x0;
	//    .restart local v2    # "parsePositionWasNull":Z
	goto label_goto_4;
	// 7423    .line 2373
	// 7424    .restart local v0    # "chars":Landroid/icu/impl/RuleCharacterIterator;
	// 7425    .restart local v3    # "rebuiltPat":Ljava/lang/StringBuilder;
label_cond_65:
	return this;

}
// .method public applyPattern(Ljava/lang/String;Z)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::applyPattern(std::shared_ptr<java::lang::String> pattern,bool ignoreWhitespace)
{
	
	std::shared_ptr<java::text::ParsePosition> cVar0;
	int cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "ignoreWhitespace"    # Z
	cVar0 = 0x0;
	this->checkFrozen();
	if ( !(ignoreWhitespace) )  
		goto label_cond_c;
	cVar1 = 0x1;
label_goto_7:
	return this->applyPattern(pattern, cVar0, cVar0, cVar1);
label_cond_c:
	cVar1 = 0x0;
	goto label_goto_7;

}
// .method public applyPropertyAlias(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::applyPropertyAlias(std::shared_ptr<java::lang::String> propertyAlias,std::shared_ptr<java::lang::String> valueAlias)
{
	
	//    .param p1, "propertyAlias"    # Ljava/lang/String;
	//    .param p2, "valueAlias"    # Ljava/lang/String;
	return this->applyPropertyAlias(propertyAlias, valueAlias, 0x0);

}
// .method public applyPropertyAlias(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/SymbolTable;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::applyPropertyAlias(std::shared_ptr<java::lang::String> propertyAlias,std::shared_ptr<java::lang::String> valueAlias,std::shared_ptr<android::icu::text::SymbolTable> symbols)
{
	
	int invert;
	int p;
	std::any e;
	int v;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet_S_NumericValueFilter> cVar2;
	std::shared_ptr<android::icu::text::UnicodeSet_S_VersionFilter> cVar5;
	int ch;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<android::icu::impl::UPropertyAliases> pnames;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar8;
	
	//    .param p1, "propertyAlias"    # Ljava/lang/String;
	//    .param p2, "valueAlias"    # Ljava/lang/String;
	//    .param p3, "symbols"    # Landroid/icu/text/SymbolTable;
	this->checkFrozen();
	//    .local v8, "mustNotBeEmpty":Z
	invert = 0x0;
	//    .local v7, "invert":Z
	if ( !(symbols) )  
		goto label_cond_1e;
	if ( !(symbols->instanceOf("android::icu::text::UnicodeSet_S_XSymbolTable")) )  
		goto label_cond_1e;
	symbols->checkCast("android::icu::text::UnicodeSet_S_XSymbolTable");
	//    .end local p3    # "symbols":Landroid/icu/text/SymbolTable;
	if ( !(symbols->applyPropertyAlias(propertyAlias, valueAlias, this)) )  
		goto label_cond_1e;
	return this;
	// 7525    .line 3376
label_cond_1e:
	if ( !(android::icu::text::UnicodeSet::XSYMBOL_TABLE) )  
		goto label_cond_31;
	if ( !(android::icu::text::UnicodeSet::XSYMBOL_TABLE->applyPropertyAlias(propertyAlias, valueAlias, this)) )  
		goto label_cond_31;
	return this;
	// 7549    .line 3382
label_cond_31:
	if ( valueAlias->length() <= 0 )
		goto label_cond_ff;
	p = android::icu::lang::UCharacter::getPropertyEnum(propertyAlias);
	//    .local v9, "p":I
	if ( p != 0x1005 )
		goto label_cond_41;
	p = 0x2000;
label_cond_41:
	if ( p < 0 ) 
		goto label_cond_68;
	if ( p >= 0x3d )
		goto label_cond_68;
label_cond_47:
	try {
	//label_try_start_47:
	//label_try_end_4c:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_84;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_47 .. :try_end_4c} :catch_84
	v = android::icu::lang::UCharacter::getPropertyValueEnum(p, valueAlias);
	//    .local v11, "v":I
label_cond_4d:
label_goto_4d:
	this->applyIntPropertyValue(p, v);
	if ( !(invert) )  
		goto label_cond_57;
	this->complement();
label_cond_57:
	if ( !(0x0) )  
		goto label_cond_1a1;
	if ( !(this->isEmpty()) )  
		goto label_cond_1a1;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid property value")));
	// throw
	throw cVar0;
	// 7623    .line 3391
	// 7624    .end local v11    # "v":I
label_cond_68:
	if ( p <  0x1000 )
		goto label_cond_70;
	if ( p <  0x1016 )
		goto label_cond_47;
label_cond_70:
	if ( p <  0x2000 )
		goto label_cond_78;
	if ( p <  0x2001 )
		goto label_cond_47;
label_cond_78:
	// switch
	{
	auto item = ( p );
	if (item == 0x3000) goto label_sswitch_a1;
	if (item == 0x4000) goto label_sswitch_de;
	if (item == 0x4005) goto label_sswitch_b8;
	if (item == 0x400b) goto label_sswitch_d5;
	if (item == 0x7000) goto label_sswitch_f5;
	}
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported property")));
	// throw
	throw cVar1;
	// 7657    .line 3395
label_catch_84:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v6, "e":Ljava/lang/IllegalArgumentException;
	if ( p == 0x1002 )
		goto label_cond_8d;
	if ( p != 0x1010 )
		goto label_cond_9c;
label_cond_8d:
	v = java::lang::Integer::parseInt(android::icu::impl::PatternProps::trimWhiteSpace(valueAlias));
	//    .restart local v11    # "v":I
	if ( v < 0 ) 
		goto label_cond_9b;
	if ( v <= 0xff )
		goto label_cond_4d;
label_cond_9b:
	// throw
	throw e;
	// 7693    .line 3399
	// 7694    .end local v11    # "v":I
label_cond_9c:
	if ( p == 0x1011 )
		goto label_cond_8d;
	// throw
	throw e;
	// 7703    .line 3416
	// 7704    .end local v6    # "e":Ljava/lang/IllegalArgumentException;
label_sswitch_a1:
	//    .local v12, "value":D
	cVar2 = std::make_shared<android::icu::text::UnicodeSet_S_NumericValueFilter>(java::lang::Double::parseDouble(android::icu::impl::PatternProps::trimWhiteSpace(valueAlias)));
	this->applyFilter(cVar2, 0x1);
	return this;
	// 7731    .line 3425
	// 7732    .end local v12    # "value":D
label_sswitch_b8:
	//    .local v4, "buf":Ljava/lang/String;
	ch = android::icu::lang::UCharacter::getCharFromExtendedName(android::icu::text::UnicodeSet::mungeCharName(valueAlias));
	//    .local v5, "ch":I
	if ( ch != -0x1 )
		goto label_cond_cc;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid character name")));
	// throw
	throw cVar3;
	// 7759    .line 3430
label_cond_cc:
	this->clear();
	this->add_unchecked(ch);
	return this;
	// 7771    .line 3436
	// 7772    .end local v4    # "buf":Ljava/lang/String;
	// 7773    .end local v5    # "ch":I
label_sswitch_d5:
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unicode_1_Name (na1) not supported")));
	// throw
	throw cVar4;
	// 7783    .line 3442
label_sswitch_de:
	//    .local v14, "version":Landroid/icu/util/VersionInfo;
	cVar5 = std::make_shared<android::icu::text::UnicodeSet_S_VersionFilter>(android::icu::util::VersionInfo::getInstance(android::icu::text::UnicodeSet::mungeCharName(valueAlias)));
	this->applyFilter(cVar5, 0x2);
	return this;
	// 7810    .line 3447
	// 7811    .end local v14    # "version":Landroid/icu/util/VersionInfo;
label_sswitch_f5:
	v = android::icu::lang::UCharacter::getPropertyValueEnum(0x100a, valueAlias);
	//    .restart local v11    # "v":I
	goto label_goto_4d;
	// 7824    .line 3462
	// 7825    .end local v9    # "p":I
	// 7826    .end local v11    # "v":I
label_cond_ff:
	pnames = android::icu::impl::UPropertyAliases::INSTANCE;
	//    .local v10, "pnames":Landroid/icu/impl/UPropertyAliases;
	p = 0x2000;
	//    .restart local v9    # "p":I
	v = pnames->getPropertyValueEnum(p, propertyAlias);
	//    .restart local v11    # "v":I
	if ( v != -0x1 )
		goto label_cond_4d;
	p = 0x100a;
	v = pnames->getPropertyValueEnum(p, propertyAlias);
	if ( v != -0x1 )
		goto label_cond_4d;
	p = pnames->getPropertyEnum(propertyAlias);
	if ( p != -0x1 )
		goto label_cond_121;
	p = -0x1;
label_cond_121:
	if ( p < 0 ) 
		goto label_cond_12a;
	if ( p >= 0x3d )
		goto label_cond_12a;
	v = 0x1;
	goto label_goto_4d;
	// 7892    .line 3475
label_cond_12a:
	if ( p != -0x1 )
		goto label_cond_198;
	if ( android::icu::impl::UPropertyAliases::compare(std::make_shared<java::lang::String>(std::make_shared<char[]>("ANY")), propertyAlias) )     
		goto label_cond_144;
	this->set(0x0, 0x10ffff);
	return this;
	// 7923    .line 3479
label_cond_144:
	if ( android::icu::impl::UPropertyAliases::compare(std::make_shared<java::lang::String>(std::make_shared<char[]>("ASCII")), propertyAlias) )     
		goto label_cond_15a;
	this->set(0x0, 0x7f);
	return this;
	// 7949    .line 3482
label_cond_15a:
	if ( android::icu::impl::UPropertyAliases::compare(std::make_shared<java::lang::String>(std::make_shared<char[]>("Assigned")), propertyAlias) )     
		goto label_cond_16b;
	p = 0x2000;
	v = 0x1;
	invert = 0x1;
	goto label_goto_4d;
	// 7972    .line 3489
label_cond_16b:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid property alias: ")))->append(propertyAlias)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")))->append(valueAlias)->toString());
	// throw
	throw cVar6;
	// 8016    .line 3494
label_cond_198:
	cVar8 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing property value")));
	// throw
	throw cVar8;
	// 8026    .line 3511
	// 8027    .end local v10    # "pnames":Landroid/icu/impl/UPropertyAliases;
label_cond_1a1:
	return this;
	// 8031    .line 3413
	// 8032    :sswitch_data_1a2
	// 8033    .sparse-switch
	// 8034        0x3000 -> :sswitch_a1
	// 8035        0x4000 -> :sswitch_de
	// 8036        0x4005 -> :sswitch_b8
	// 8037        0x400b -> :sswitch_d5
	// 8038        0x7000 -> :sswitch_f5
	// 8039    .end sparse-switch

}
// .method public charAt(I)I
int android::icu::text::UnicodeSet::charAt(int index)
{
	
	int i;
	int start;
	int count;
	int index;
	
	//    .param p1, "index"    # I
	if ( index < 0 ) 
		goto label_cond_1f;
	//    .local v3, "len2":I
	//    .local v1, "i":I
	i = 0x0;
	//    .end local v1    # "i":I
	//    .local v2, "i":I
label_goto_8:
	if ( i >= ( this->len & -0x2) )
		goto label_cond_1f;
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	start = this->list[i];
	//    .local v4, "start":I
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .restart local v2    # "i":I
	count = (this->list[i] - start);
	//    .local v0, "count":I
	if ( index >= count )
		goto label_cond_1d;
	return (start + index);
	// 8097    .line 1130
label_cond_1d:
	index = (index -  count);
	goto label_goto_8;
	// 8103    .line 1133
	// 8104    .end local v0    # "count":I
	// 8105    .end local v2    # "i":I
	// 8106    .end local v3    # "len2":I
	// 8107    .end local v4    # "start":I
label_cond_1f:
	return -0x1;

}
// .method public clear()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::clear()
{
	
	this->checkFrozen();
	this->list[0x0] = 0x110000;
	this->len = 0x1;
	this->pat = 0x0;
	this->strings->clear();
	return this;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::UnicodeSet::clone()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> result;
	
	if ( !(this->isFrozen()) )  
		goto label_cond_7;
	return this;
	// 8163    .line 501
label_cond_7:
	result = std::make_shared<android::icu::text::UnicodeSet>(this);
	//    .local v0, "result":Landroid/icu/text/UnicodeSet;
	result->bmpSet = this->bmpSet;
	result->stringSpan = this->stringSpan;
	return result;

}
// .method public cloneAsThawed()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> result;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	result = std::make_shared<android::icu::text::UnicodeSet>(this);
	//    .local v0, "result":Landroid/icu/text/UnicodeSet;
	if ( android::icu::text::UnicodeSet::_assertionsDisabled )     
		goto label_cond_15;
	if ( !(result->isFrozen()) )  
		goto label_cond_15;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 8211    .line 4121
label_cond_15:
	return result;

}
// .method public closeOver(I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::closeOver(int attribute)
{
	
	std::shared_ptr<android::icu::impl::UCaseProps> csp;
	std::shared_ptr<android::icu::text::UnicodeSet> foldSet;
	std::shared_ptr<android::icu::util::ULocale> root;
	std::shared_ptr<java::lang::StringBuilder> full;
	int i;
	int start;
	int end;
	int cp;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::String> str;
	std::shared_ptr<java::util::Iterator> str_S_iterator;
	
	//    .param p1, "attribute"    # I
	this->checkFrozen();
	if ( !(( attribute & 0x6)) )  
		goto label_cond_103;
	csp = android::icu::impl::UCaseProps::INSTANCE;
	//    .local v4, "csp":Landroid/icu/impl/UCaseProps;
	foldSet = std::make_shared<android::icu::text::UnicodeSet>(this);
	//    .local v6, "foldSet":Landroid/icu/text/UnicodeSet;
	root = android::icu::util::ULocale::ROOT;
	//    .local v11, "root":Landroid/icu/util/ULocale;
	if ( !(( attribute & 0x2)) )  
		goto label_cond_1d;
	foldSet->strings->clear();
label_cond_1d:
	//    .local v9, "n":I
	full = std::make_shared<java::lang::StringBuilder>();
	//    .local v7, "full":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v8, "i":I
label_goto_27:
	if ( i >= this->getRangeCount() )
		goto label_cond_83;
	start = this->getRangeStart(i);
	//    .local v14, "start":I
	end = this->getRangeEnd(i);
	//    .local v5, "end":I
	if ( !(( attribute & 0x2)) )  
		goto label_cond_42;
	cp = start;
	//    .local v3, "cp":I
label_goto_3a:
	if ( cp >  end )
		goto label_cond_80;
	csp->addCaseClosure(cp, foldSet);
	cp = ( cp + 0x1);
	goto label_goto_3a;
	// 8325    .line 3799
	// 8326    .end local v3    # "cp":I
label_cond_42:
	cp = start;
	//    .restart local v3    # "cp":I
label_goto_43:
	if ( cp >  end )
		goto label_cond_80;
	//    .local v10, "result":I
	android::icu::text::UnicodeSet::addCaseMapping(foldSet, csp->toFullLower(cp, 0x0, full, 0x1), full);
	android::icu::text::UnicodeSet::addCaseMapping(foldSet, csp->toFullTitle(cp, 0x0, full, 0x1), full);
	android::icu::text::UnicodeSet::addCaseMapping(foldSet, csp->toFullUpper(cp, 0x0, full, 0x1), full);
	android::icu::text::UnicodeSet::addCaseMapping(foldSet, csp->toFullFolding(cp, full, 0x0), full);
	cp = ( cp + 0x1);
	goto label_goto_43;
	// 8400    .line 3787
	// 8401    .end local v10    # "result":I
label_cond_80:
	i = ( i + 0x1);
	goto label_goto_27;
	// 8407    .line 3814
	// 8408    .end local v3    # "cp":I
	// 8409    .end local v5    # "end":I
	// 8410    .end local v14    # "start":I
label_cond_83:
	if ( this->strings->isEmpty() )     
		goto label_cond_fe;
	if ( !(( attribute & 0x2)) )  
		goto label_cond_bb;
	s_S_iterator = this->strings->iterator();
	//    .local v13, "s$iterator":Ljava/util/Iterator;
label_cond_9d:
label_goto_9d:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_fe;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v12, "s":Ljava/lang/String;
	str = android::icu::lang::UCharacter::foldCase(s, 0x0);
	//    .local v15, "str":Ljava/lang/String;
	if ( csp->addStringCaseClosure(str, foldSet) )     
		goto label_cond_9d;
	foldSet->add(str);
	goto label_goto_9d;
	// 8478    .line 3823
	// 8479    .end local v12    # "s":Ljava/lang/String;
	// 8480    .end local v13    # "s$iterator":Ljava/util/Iterator;
	// 8481    .end local v15    # "str":Ljava/lang/String;
label_cond_bb:
	//    .local v2, "bi":Landroid/icu/text/BreakIterator;
	str_S_iterator = this->strings->iterator();
	//    .local v16, "str$iterator":Ljava/util/Iterator;
label_goto_c9:
	if ( !(str_S_iterator->hasNext()) )  
		goto label_cond_fe;
	str = str_S_iterator->next();
	str->checkCast("java::lang::String");
	//    .restart local v15    # "str":Ljava/lang/String;
	foldSet->add(android::icu::lang::UCharacter::toLowerCase(root, str));
	foldSet->add(android::icu::lang::UCharacter::toTitleCase(root, str, android::icu::text::BreakIterator::getWordInstance(root)));
	foldSet->add(android::icu::lang::UCharacter::toUpperCase(root, str));
	foldSet->add(android::icu::lang::UCharacter::foldCase(str, 0x0));
	goto label_goto_c9;
	// 8556    .line 3833
	// 8557    .end local v2    # "bi":Landroid/icu/text/BreakIterator;
	// 8558    .end local v15    # "str":Ljava/lang/String;
	// 8559    .end local v16    # "str$iterator":Ljava/util/Iterator;
label_cond_fe:
	this->set(foldSet);
	//    .end local v4    # "csp":Landroid/icu/impl/UCaseProps;
	//    .end local v6    # "foldSet":Landroid/icu/text/UnicodeSet;
	//    .end local v7    # "full":Ljava/lang/StringBuilder;
	//    .end local v8    # "i":I
	//    .end local v9    # "n":I
	//    .end local v11    # "root":Landroid/icu/util/ULocale;
label_cond_103:
	return this;

}
// .method public compact()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::compact()
{
	
	std::shared_ptr<int[]> cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> temp;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	this->checkFrozen();
	if ( this->len == this->list->size() )
		goto label_cond_19;
	temp = std::make_shared<std::vector<int[]>>(this->len);
	//    .local v0, "temp":[I
	java::lang::System::arraycopy(this->list, cVar1, temp, cVar1, this->len);
	this->list = temp;
	//    .end local v0    # "temp":[I
label_cond_19:
	this->rangeList = cVar0;
	this->buffer = cVar0;
	return this;

}
// .method public compareTo(Landroid/icu/text/UnicodeSet;)I
int android::icu::text::UnicodeSet::compareTo(std::shared_ptr<android::icu::text::UnicodeSet> o)
{
	
	//    .param p1, "o"    # Landroid/icu/text/UnicodeSet;
	return this->compareTo(o, android::icu::text::UnicodeSet_S_ComparisonStyle::SHORTER_FIRST);

}
// .method public compareTo(Landroid/icu/text/UnicodeSet;Landroid/icu/text/UnicodeSet$ComparisonStyle;)I
int android::icu::text::UnicodeSet::compareTo(std::shared_ptr<android::icu::text::UnicodeSet> o,std::shared_ptr<android::icu::text::UnicodeSet_S_ComparisonStyle> style)
{
	
	int cVar0;
	int cVar1;
	int cVar6;
	int cVar5;
	int diff;
	int cVar4;
	int i;
	int result;
	std::shared_ptr<java::lang::String> item;
	int compareResult;
	
	//    .param p1, "o"    # Landroid/icu/text/UnicodeSet;
	//    .param p2, "style"    # Landroid/icu/text/UnicodeSet$ComparisonStyle;
	cVar0 = 0x110000;
	cVar1 = -0x1;
	cVar6 = 0x1;
	cVar5 = 0x0;
	if ( style == android::icu::text::UnicodeSet_S_ComparisonStyle::LEXICOGRAPHIC )
		goto label_cond_23;
	diff = (this->size() - o->size());
	//    .local v1, "diff":I
	if ( !(diff) )  
		goto label_cond_23;
	if ( diff >= 0 )
		goto label_cond_21;
	cVar4 = cVar6;
label_goto_18:
	if ( style != android::icu::text::UnicodeSet_S_ComparisonStyle::SHORTER_FIRST )
		goto label_cond_1d;
	cVar5 = cVar6;
label_cond_1d:
	if ( cVar4 != cVar5 )
		goto label_cond_20;
	cVar6 = cVar1;
label_cond_20:
	return cVar6;
label_cond_21:
	cVar4 = cVar5;
	goto label_goto_18;
	// 8698    .line 4415
	// 8699    .end local v1    # "diff":I
label_cond_23:
	i = 0x0;
	//    .local v2, "i":I
label_goto_24:
	result = (this->list[i] - o->list[i]);
	//    .local v4, "result":I
	if ( !(result) )  
		goto label_cond_7f;
	if ( this->list[i] != cVar0 )
		goto label_cond_50;
	if ( !(this->strings->isEmpty()) )  
		goto label_cond_3f;
	return cVar6;
	// 8737    .line 4420
label_cond_3f:
	item = this->strings->first();
	item->checkCast("java::lang::String");
	//    .local v3, "item":Ljava/lang/String;
	return android::icu::text::UnicodeSet::compare(item, o->list[i]);
	// 8759    .line 4423
	// 8760    .end local v3    # "item":Ljava/lang/String;
label_cond_50:
	if ( o->list[i] != cVar0 )
		goto label_cond_78;
	if ( !(o->strings->isEmpty()) )  
		goto label_cond_5f;
	return cVar1;
	// 8779    .line 4425
label_cond_5f:
	item = o->strings->first();
	item->checkCast("java::lang::String");
	//    .restart local v3    # "item":Ljava/lang/String;
	compareResult = android::icu::text::UnicodeSet::compare(item, this->list[i]);
	//    .local v0, "compareResult":I
	if ( compareResult <= 0 )
		goto label_cond_72;
label_goto_71:
	return cVar1;
label_cond_72:
	if ( compareResult >= 0 )
		goto label_cond_76;
	cVar1 = cVar6;
	goto label_goto_71;
label_cond_76:
	cVar1 = cVar5;
	goto label_goto_71;
	// 8818    .line 4430
	// 8819    .end local v0    # "compareResult":I
	// 8820    .end local v3    # "item":Ljava/lang/String;
label_cond_78:
	if ( ( i & 0x1) )     
		goto label_cond_7d;
	//    .end local v4    # "result":I
label_goto_7c:
	return result;
	// 8830    .restart local v4    # "result":I
label_cond_7d:
	result = (0 - result);
	goto label_goto_7c;
	// 8836    .line 4432
label_cond_7f:
	if ( this->list[i] != cVar0 )
		goto label_cond_8e;
	return android::icu::text::UnicodeSet::compare(this->strings, o->strings);
	// 8855    .line 4415
label_cond_8e:
	i = ( i + 0x1);
	goto label_goto_24;

}
// .method public compareTo(Ljava/lang/Iterable;)I
int android::icu::text::UnicodeSet::compareTo(std::shared_ptr<java::lang::Iterable<java::lang::String>> other)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 8865        value = {
	// 8866            "(",
	// 8867            "Ljava/lang/Iterable",
	// 8868            "<",
	// 8869            "Ljava/lang/String;",
	// 8870            ">;)I"
	// 8871        }
	// 8872    .end annotation
	//    .local p1, "other":Ljava/lang/Iterable;, "Ljava/lang/Iterable<Ljava/lang/String;>;"
	return android::icu::text::UnicodeSet::compare(this, other);

}
// .method public complement()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::complement()
{
	
	int cVar0;
	int cVar1;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	this->checkFrozen();
	if ( this->list[cVar1] )     
		goto label_cond_20;
	java::lang::System::arraycopy(this->list, cVar0, this->list, cVar1, ( this->len + -0x1));
	this->len = ( this->len + -0x1);
label_goto_1c:
	this->pat = 0x0;
	return this;
	// 8943    .line 1580
label_cond_20:
	this->ensureCapacity(( this->len + 0x1));
	java::lang::System::arraycopy(this->list, cVar1, this->list, cVar0, this->len);
	this->list[cVar1] = cVar1;
	this->len = ( this->len + 0x1);
	goto label_goto_1c;

}
// .method public final complement(I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::complement(int c)
{
	
	//    .param p1, "c"    # I
	return this->complement(c, c);

}
// .method public complement(II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::complement(int start,int end)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	cVar0 = 0x10ffff;
	cVar1 = 0x6;
	this->checkFrozen();
	if ( start < 0 ) 
		goto label_cond_c;
	if ( start <= cVar0 )
		goto label_cond_2b;
label_cond_c:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(start), cVar1))->toString());
	// throw
	throw cVar2;
	// 9040    .line 1551
label_cond_2b:
	if ( end < 0 ) 
		goto label_cond_2f;
	if ( end <= cVar0 )
		goto label_cond_4e;
label_cond_2f:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(end), cVar1))->toString());
	// throw
	throw cVar4;
	// 9078    .line 1554
label_cond_4e:
	if ( start >  end )
		goto label_cond_58;
	this->xor(this->range(start, end), 0x2, 0x0);
label_cond_58:
	this->pat = 0x0;
	return this;

}
// .method public final complement(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::complement(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cp;
	std::shared_ptr<java::lang::Object> s2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	this->checkFrozen();
	cp = android::icu::text::UnicodeSet::getSingleCP(s);
	//    .local v0, "cp":I
	if ( cp >= 0 )
		goto label_cond_24;
	s2 = s->toString();
	//    .local v1, "s2":Ljava/lang/String;
	if ( !(this->strings->contains(s2)) )  
		goto label_cond_1e;
	this->strings->remove(s2);
label_goto_1a:
	this->pat = 0x0;
	//    .end local v1    # "s2":Ljava/lang/String;
label_goto_1d:
	return this;
	// 9149    .line 1605
	// 9150    .restart local v1    # "s2":Ljava/lang/String;
label_cond_1e:
	this->strings->add(s2);
	goto label_goto_1a;
	// 9158    .line 1609
	// 9159    .end local v1    # "s2":Ljava/lang/String;
label_cond_24:
	this->complement(cp, cp);
	goto label_goto_1d;

}
// .method public complementAll(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::complementAll(std::shared_ptr<android::icu::text::UnicodeSet> c)
{
	
	//    .param p1, "c"    # Landroid/icu/text/UnicodeSet;
	this->checkFrozen();
	this->xor(c->list, c->len, 0x0);
	android::icu::impl::SortedSetRelation::doOperation(this->strings, 0x5, c->strings);
	return this;

}
// .method public final complementAll(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::complementAll(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return this->complementAll(android::icu::text::UnicodeSet::fromAll(s));

}
// .method public contains(I)Z
bool android::icu::text::UnicodeSet::contains(int c)
{
	
	bool cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "c"    # I
	cVar3 = 0x0;
	if ( c < 0 ) 
		goto label_cond_8;
	if ( c <= 0x10ffff )
		goto label_cond_28;
label_cond_8:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(c), 0x6))->toString());
	// throw
	throw cVar1;
	// 9261    .line 1624
label_cond_28:
	if ( !(this->bmpSet) )  
		goto label_cond_33;
	return this->bmpSet->contains(c);
	// 9276    .line 1627
label_cond_33:
	if ( !(this->stringSpan) )  
		goto label_cond_3e;
	return this->stringSpan->contains(c);
	// 9291    .line 1640
label_cond_3e:
	//    .local v0, "i":I
	if ( !(( this->findCodePoint(c) & 0x1)) )  
		goto label_cond_47;
	cVar3 = 0x1;
label_cond_47:
	return cVar3;

}
// .method public contains(II)Z
bool android::icu::text::UnicodeSet::contains(int start,int end)
{
	
	int cVar0;
	int cVar1;
	bool cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	int i;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	cVar0 = 0x10ffff;
	cVar1 = 0x6;
	cVar7 = 0x0;
	if ( start < 0 ) 
		goto label_cond_9;
	if ( start <= cVar0 )
		goto label_cond_28;
label_cond_9:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(start), cVar1))->toString());
	// throw
	throw cVar3;
	// 9358    .line 1812
label_cond_28:
	if ( end < 0 ) 
		goto label_cond_2c;
	if ( end <= cVar0 )
		goto label_cond_4b;
label_cond_2c:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(end), cVar1))->toString());
	// throw
	throw cVar5;
	// 9396    .line 1819
label_cond_4b:
	i = this->findCodePoint(start);
	//    .local v0, "i":I
	if ( !(( i & 0x1)) )  
		goto label_cond_5a;
	if ( end >= this->list[i] )
		goto label_cond_5a;
	cVar7 = 0x1;
label_cond_5a:
	return cVar7;

}
// .method public final contains(Ljava/lang/CharSequence;)Z
bool android::icu::text::UnicodeSet::contains(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cp;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	cp = android::icu::text::UnicodeSet::getSingleCP(s);
	//    .local v0, "cp":I
	if ( cp >= 0 )
		goto label_cond_11;
	return this->strings->contains(s->toString());
	// 9447    .line 1835
label_cond_11:
	return this->contains(cp);

}
// .method public containsAll(Landroid/icu/text/UnicodeSet;)Z
bool android::icu::text::UnicodeSet::containsAll(std::shared_ptr<android::icu::text::UnicodeSet> b)
{
	
	std::shared_ptr<int[]> listB;
	int needA;
	int needB;
	int bLen;
	int startB;
	int bPtr;
	int aPtr;
	int limitA;
	
	//    .param p1, "b"    # Landroid/icu/text/UnicodeSet;
	listB = b->list;
	//    .local v9, "listB":[I
	needA = 0x1;
	//    .local v10, "needA":Z
	needB = 0x1;
	//    .local v11, "needB":Z
	//    .local v2, "aPtr":I
	//    .local v5, "bPtr":I
	//    .local v1, "aLen":I
	bLen = ( b->len + -0x1);
	//    .local v4, "bLen":I
	//    .local v12, "startA":I
	startB = 0x0;
	//    .local v13, "startB":I
	//    .local v7, "limitA":I
	0x0;
	//    .local v8, "limitB":I
	bPtr = 0x0;
	//    .end local v5    # "bPtr":I
	//    .local v6, "bPtr":I
	aPtr = 0x0;
	//    .end local v2    # "aPtr":I
	//    .local v3, "aPtr":I
label_goto_1a:
	if ( !(needA) )  
		goto label_cond_69;
	if ( aPtr <  ( this->len + -0x1) )
		goto label_cond_35;
	if ( !(needB) )  
		goto label_cond_33;
	if ( bPtr <  bLen )
		goto label_cond_33;
	aPtr;
	//    .end local v3    # "aPtr":I
	//    .restart local v2    # "aPtr":I
label_cond_23:
	if ( this->strings->containsAll(b->strings) )     
		goto label_cond_65;
	return 0x0;
	// 9556    .line 1866
	// 9557    .end local v2    # "aPtr":I
	// 9558    .restart local v3    # "aPtr":I
label_cond_33:
	return 0x0;
	// 9564    .line 1868
label_cond_35:
	aPtr = ( aPtr + 0x1);
	//    .end local v3    # "aPtr":I
	//    .restart local v2    # "aPtr":I
	//    .end local v2    # "aPtr":I
	//    .restart local v3    # "aPtr":I
	limitA = this->list[aPtr];
	aPtr = ( aPtr + 0x1);
	//    .end local v3    # "aPtr":I
	//    .restart local v2    # "aPtr":I
label_goto_46:
	if ( !(needB) )  
		goto label_cond_67;
	if ( bPtr >= bLen )
		goto label_cond_23;
	bPtr = ( bPtr + 0x1);
	//    .end local v6    # "bPtr":I
	//    .restart local v5    # "bPtr":I
	startB = listB[bPtr];
	//    .end local v5    # "bPtr":I
	//    .restart local v6    # "bPtr":I
	bPtr = ( bPtr + 0x1);
	//    .end local v6    # "bPtr":I
	//    .restart local v5    # "bPtr":I
label_goto_53:
	if ( startB <  0x0 )
		goto label_cond_5a;
	needA = 0x1;
	needB = 0x0;
	bPtr = bPtr;
	//    .end local v5    # "bPtr":I
	//    .restart local v6    # "bPtr":I
	aPtr = aPtr;
	//    .end local v2    # "aPtr":I
	//    .restart local v3    # "aPtr":I
	goto label_goto_1a;
	// 9637    .line 1886
	// 9638    .end local v3    # "aPtr":I
	// 9639    .end local v6    # "bPtr":I
	// 9640    .restart local v2    # "aPtr":I
	// 9641    .restart local v5    # "bPtr":I
label_cond_5a:
	if ( startB <  0x0 )
		goto label_cond_63;
	if ( listB[bPtr] >  limitA )
		goto label_cond_63;
	needA = 0x0;
	needB = 0x1;
	bPtr = bPtr;
	//    .end local v5    # "bPtr":I
	//    .restart local v6    # "bPtr":I
	aPtr = aPtr;
	//    .end local v2    # "aPtr":I
	//    .restart local v3    # "aPtr":I
	goto label_goto_1a;
	// 9664    .line 1892
	// 9665    .end local v3    # "aPtr":I
	// 9666    .end local v6    # "bPtr":I
	// 9667    .restart local v2    # "aPtr":I
	// 9668    .restart local v5    # "bPtr":I
label_cond_63:
	return 0x0;
	// 9674    .line 1896
	// 9675    .end local v5    # "bPtr":I
	// 9676    .restart local v6    # "bPtr":I
label_cond_65:
	return 0x1;
label_cond_67:
	bPtr;
	//    .end local v6    # "bPtr":I
	//    .restart local v5    # "bPtr":I
	goto label_goto_53;
	// 9689    .end local v2    # "aPtr":I
	// 9690    .end local v5    # "bPtr":I
	// 9691    .restart local v3    # "aPtr":I
	// 9692    .restart local v6    # "bPtr":I
label_cond_69:
	aPtr;
	//    .end local v3    # "aPtr":I
	//    .restart local v2    # "aPtr":I
	goto label_goto_46;

}
// .method public containsAll(Ljava/lang/Iterable;)Z
bool android::icu::text::UnicodeSet::containsAll(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection)
{
	
	std::shared_ptr<java::util::Iterator> o_S_iterator;
	std::shared_ptr<java::lang::CharSequence> o;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 9704        value = {
	// 9705            "<T::",
	// 9706            "Ljava/lang/CharSequence;",
	// 9707            ">(",
	// 9708            "Ljava/lang/Iterable",
	// 9709            "<TT;>;)Z"
	// 9710        }
	// 9711    .end annotation
	//    .local p1, "collection":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	o_S_iterator = collection->iterator();
	//    .local v1, "o$iterator":Ljava/util/Iterator;
label_cond_4:
	if ( !(o_S_iterator->hasNext()) )  
		goto label_cond_18;
	o = o_S_iterator->next();
	o->checkCast("java::lang::CharSequence");
	//    .local v0, "o":Ljava/lang/CharSequence;, "TT;"
	if ( this->contains(o) )     
		goto label_cond_4;
	return 0x0;
	// 9747    .line 4321
	// 9748    .end local v0    # "o":Ljava/lang/CharSequence;, "TT;"
label_cond_18:
	return 0x1;

}
// .method public containsAll(Ljava/lang/String;)Z
bool android::icu::text::UnicodeSet::containsAll(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	int i;
	int cp;
	
	//    .param p1, "s"    # Ljava/lang/String;
	cVar0 = 0x0;
	i = 0x0;
	//    .local v1, "i":I
label_goto_2:
	if ( i >= s->length() )
		goto label_cond_26;
	cp = android::icu::text::UTF16::charAt(s, i);
	//    .local v0, "cp":I
	if ( this->contains(cp) )     
		goto label_cond_20;
	if ( this->strings->size() )     
		goto label_cond_1b;
	return cVar0;
	// 9798    .line 1936
label_cond_1b:
	return this->containsAll(s, cVar0);
	// 9806    .line 1930
label_cond_20:
	i = (i +  android::icu::text::UTF16::getCharCount(cp));
	goto label_goto_2;
	// 9816    .line 1939
	// 9817    .end local v0    # "cp":I
label_cond_26:
	return 0x1;

}
// .method public containsNone(II)Z
bool android::icu::text::UnicodeSet::containsNone(int start,int end)
{
	
	int cVar0;
	int cVar1;
	bool cVar7;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	int i;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	cVar0 = 0x10ffff;
	cVar1 = 0x6;
	cVar7 = 0x0;
	if ( start < 0 ) 
		goto label_cond_9;
	if ( start <= cVar0 )
		goto label_cond_28;
label_cond_9:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(start), cVar1))->toString());
	// throw
	throw cVar3;
	// 9873    .line 1997
label_cond_28:
	if ( end < 0 ) 
		goto label_cond_2c;
	if ( end <= cVar0 )
		goto label_cond_4b;
label_cond_2c:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(end), cVar1))->toString());
	// throw
	throw cVar5;
	// 9911    .line 2000
label_cond_4b:
	//    .local v0, "i":I
label_cond_4c:
	i = ( i + 0x1);
	if ( start >= this->list[i] )
		goto label_cond_4c;
	if ( ( i & 0x1) )     
		goto label_cond_5f;
	if ( end >= this->list[i] )
		goto label_cond_5f;
	cVar7 = 0x1;
label_cond_5f:
	return cVar7;

}
// .method public containsNone(Landroid/icu/text/UnicodeSet;)Z
bool android::icu::text::UnicodeSet::containsNone(std::shared_ptr<android::icu::text::UnicodeSet> b)
{
	
	std::shared_ptr<int[]> listB;
	int needA;
	int needB;
	int bPtr;
	int aPtr;
	
	//    .param p1, "b"    # Landroid/icu/text/UnicodeSet;
	listB = b->list;
	//    .local v9, "listB":[I
	needA = 0x1;
	//    .local v10, "needA":Z
	needB = 0x1;
	//    .local v11, "needB":Z
	//    .local v2, "aPtr":I
	//    .local v5, "bPtr":I
	//    .local v1, "aLen":I
	//    .local v4, "bLen":I
	//    .local v12, "startA":I
	//    .local v13, "startB":I
	//    .local v7, "limitA":I
	//    .local v8, "limitB":I
	bPtr = 0x0;
	//    .end local v5    # "bPtr":I
	//    .local v6, "bPtr":I
	aPtr = 0x0;
	//    .end local v2    # "aPtr":I
	//    .local v3, "aPtr":I
label_goto_1a:
	if ( !(needA) )  
		goto label_cond_65;
	if ( aPtr <  ( this->len + -0x1) )
		goto label_cond_33;
	aPtr;
	//    .end local v3    # "aPtr":I
	//    .restart local v2    # "aPtr":I
label_cond_1f:
	if ( android::icu::impl::SortedSetRelation::hasRelation(this->strings, 0x5, b->strings) )     
		goto label_cond_61;
	return 0x0;
	// 10042    .line 2033
	// 10043    .end local v2    # "aPtr":I
	// 10044    .restart local v3    # "aPtr":I
label_cond_33:
	aPtr = ( aPtr + 0x1);
	//    .end local v3    # "aPtr":I
	//    .restart local v2    # "aPtr":I
	//    .end local v2    # "aPtr":I
	//    .restart local v3    # "aPtr":I
	aPtr = ( aPtr + 0x1);
	//    .end local v3    # "aPtr":I
	//    .restart local v2    # "aPtr":I
label_goto_44:
	if ( !(needB) )  
		goto label_cond_63;
	if ( bPtr >= ( b->len + -0x1) )
		goto label_cond_1f;
	bPtr = ( bPtr + 0x1);
	//    .end local v6    # "bPtr":I
	//    .restart local v5    # "bPtr":I
	//    .end local v5    # "bPtr":I
	//    .restart local v6    # "bPtr":I
	bPtr = ( bPtr + 0x1);
	//    .end local v6    # "bPtr":I
	//    .restart local v5    # "bPtr":I
label_goto_51:
	if ( 0x0 <  0x0 )
		goto label_cond_58;
	needA = 0x1;
	needB = 0x0;
	bPtr = bPtr;
	//    .end local v5    # "bPtr":I
	//    .restart local v6    # "bPtr":I
	aPtr = aPtr;
	//    .end local v2    # "aPtr":I
	//    .restart local v3    # "aPtr":I
	goto label_goto_1a;
	// 10117    .line 2051
	// 10118    .end local v3    # "aPtr":I
	// 10119    .end local v6    # "bPtr":I
	// 10120    .restart local v2    # "aPtr":I
	// 10121    .restart local v5    # "bPtr":I
label_cond_58:
	if ( 0x0 <  0x0 )
		goto label_cond_5f;
	needA = 0x0;
	needB = 0x1;
	bPtr = bPtr;
	//    .end local v5    # "bPtr":I
	//    .restart local v6    # "bPtr":I
	aPtr = aPtr;
	//    .end local v2    # "aPtr":I
	//    .restart local v3    # "aPtr":I
	goto label_goto_1a;
	// 10142    .line 2057
	// 10143    .end local v3    # "aPtr":I
	// 10144    .end local v6    # "bPtr":I
	// 10145    .restart local v2    # "aPtr":I
	// 10146    .restart local v5    # "bPtr":I
label_cond_5f:
	return 0x0;
	// 10152    .line 2061
	// 10153    .end local v5    # "bPtr":I
	// 10154    .restart local v6    # "bPtr":I
label_cond_61:
	return 0x1;
label_cond_63:
	bPtr;
	//    .end local v6    # "bPtr":I
	//    .restart local v5    # "bPtr":I
	goto label_goto_51;
	// 10167    .end local v2    # "aPtr":I
	// 10168    .end local v5    # "bPtr":I
	// 10169    .restart local v3    # "aPtr":I
	// 10170    .restart local v6    # "bPtr":I
label_cond_65:
	aPtr;
	//    .end local v3    # "aPtr":I
	//    .restart local v2    # "aPtr":I
	goto label_goto_44;

}
// .method public containsNone(Ljava/lang/CharSequence;)Z
bool android::icu::text::UnicodeSet::containsNone(std::shared_ptr<java::lang::CharSequence> s)
{
	
	bool cVar0;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	if ( this->span(s, android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED) != s->length() )
		goto label_cond_e;
	cVar0 = 0x1;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method public containsNone(Ljava/lang/Iterable;)Z
bool android::icu::text::UnicodeSet::containsNone(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection)
{
	
	std::shared_ptr<java::util::Iterator> o_S_iterator;
	std::shared_ptr<java::lang::CharSequence> o;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 10211        value = {
	// 10212            "<T::",
	// 10213            "Ljava/lang/CharSequence;",
	// 10214            ">(",
	// 10215            "Ljava/lang/Iterable",
	// 10216            "<TT;>;)Z"
	// 10217        }
	// 10218    .end annotation
	//    .local p1, "collection":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	o_S_iterator = collection->iterator();
	//    .local v1, "o$iterator":Ljava/util/Iterator;
label_cond_4:
	if ( !(o_S_iterator->hasNext()) )  
		goto label_cond_18;
	o = o_S_iterator->next();
	o->checkCast("java::lang::CharSequence");
	//    .local v0, "o":Ljava/lang/CharSequence;, "TT;"
	if ( !(this->contains(o)) )  
		goto label_cond_4;
	return 0x0;
	// 10254    .line 4333
	// 10255    .end local v0    # "o":Ljava/lang/CharSequence;, "TT;"
label_cond_18:
	return 0x1;

}
// .method public final containsSome(II)Z
bool android::icu::text::UnicodeSet::containsSome(int start,int end)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	return ( this->containsNone(start, end) ^ 0x1);

}
// .method public final containsSome(Landroid/icu/text/UnicodeSet;)Z
bool android::icu::text::UnicodeSet::containsSome(std::shared_ptr<android::icu::text::UnicodeSet> s)
{
	
	//    .param p1, "s"    # Landroid/icu/text/UnicodeSet;
	return ( this->containsNone(s) ^ 0x1);

}
// .method public final containsSome(Ljava/lang/CharSequence;)Z
bool android::icu::text::UnicodeSet::containsSome(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return ( this->containsNone(s) ^ 0x1);

}
// .method public final containsSome(Ljava/lang/Iterable;)Z
bool android::icu::text::UnicodeSet::containsSome(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 10311        value = {
	// 10312            "<T::",
	// 10313            "Ljava/lang/CharSequence;",
	// 10314            ">(",
	// 10315            "Ljava/lang/Iterable",
	// 10316            "<TT;>;)Z"
	// 10317        }
	// 10318    .end annotation
	//    .local p1, "collection":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	return ( this->containsNone(collection) ^ 0x1);

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::UnicodeSet::equals(std::shared_ptr<java::lang::Object> o)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	int that;
	int i;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "o"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( o )     
		goto label_cond_5;
	return cVar1;
	// 10347    .line 2270
label_cond_5:
	if ( this != o )
		goto label_cond_8;
	return cVar0;
	// 10354    .line 2274
label_cond_8:
	try {
	//label_try_start_8:
	cVar2 = o;
	cVar2->checkCast("android::icu::text::UnicodeSet");
	that = cVar2;
	//    .local v3, "that":Landroid/icu/text/UnicodeSet;
	if ( this->len == that->len )
		goto label_cond_13;
	return cVar1;
	// 10373    .line 2276
label_cond_13:
	i = 0x0;
	//    .local v2, "i":I
label_goto_14:
	if ( i >= this->len )
		goto label_cond_26;
	if ( this->list[i] == that->list[i] )
		goto label_cond_23;
	return cVar1;
	// 10396    .line 2276
label_cond_23:
	i = ( i + 0x1);
	goto label_goto_14;
	// 10402    .line 2279
label_cond_26:
	//label_try_end_2d:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	//    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_2d} :catch_31
	if ( this->strings->equals(that->strings) )     
		goto label_cond_33;
	return cVar1;
	// 10418    .line 2280
	// 10419    .end local v2    # "i":I
	// 10420    .end local v3    # "that":Landroid/icu/text/UnicodeSet;
label_catch_31:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	return cVar1;
	// 10428    .line 2283
	// 10429    .end local v1    # "e":Ljava/lang/Exception;
	// 10430    .restart local v2    # "i":I
	// 10431    .restart local v3    # "that":Landroid/icu/text/UnicodeSet;
label_cond_33:
	return cVar0;

}
// .method public findIn(Ljava/lang/CharSequence;IZ)I
int android::icu::text::UnicodeSet::findIn(std::shared_ptr<java::lang::CharSequence> value,int fromIndex,bool findNot)
{
	
	int cp;
	int fromIndex;
	
	//    .param p1, "value"    # Ljava/lang/CharSequence;
	//    .param p2, "fromIndex"    # I
	//    .param p3, "findNot"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 10442    .end annotation
label_goto_0:
	if ( fromIndex >= value->length() )
		goto label_cond_10;
	cp = android::icu::text::UTF16::charAt(value, fromIndex);
	//    .local v0, "cp":I
	if ( this->contains(cp) == findNot )
		goto label_cond_11;
	//    .end local v0    # "cp":I
label_cond_10:
	return fromIndex;
	// 10471    .line 4603
	// 10472    .restart local v0    # "cp":I
label_cond_11:
	fromIndex = (fromIndex +  android::icu::text::UTF16::getCharCount(cp));
	goto label_goto_0;

}
// .method public findLastIn(Ljava/lang/CharSequence;IZ)I
int android::icu::text::UnicodeSet::findLastIn(std::shared_ptr<java::lang::CharSequence> value,int fromIndex,bool findNot)
{
	
	int cVar1;
	int cp;
	
	//    .param p1, "value"    # Ljava/lang/CharSequence;
	//    .param p2, "fromIndex"    # I
	//    .param p3, "findNot"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 10489    .end annotation
	cVar1 = ( fromIndex + -0x1);
label_goto_2:
	if ( cVar1 < 0 ) 
		goto label_cond_e;
	cp = android::icu::text::UTF16::charAt(value, cVar1);
	//    .local v0, "cp":I
	if ( this->contains(cp) == findNot )
		goto label_cond_12;
	//    .end local v0    # "cp":I
label_cond_e:
	if ( cVar1 >= 0 )
		goto label_cond_11;
	cVar1 = -0x1;
	//    .end local p2    # "fromIndex":I
label_cond_11:
	return cVar1;
	// 10523    .line 4626
	// 10524    .restart local v0    # "cp":I
	// 10525    .restart local p2    # "fromIndex":I
label_cond_12:
	cVar1 = (cVar1 -  android::icu::text::UTF16::getCharCount(cp));
	goto label_goto_2;

}
// .method public freeze()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::freeze()
{
	
	int capacity;
	int i;
	std::shared_ptr<android::icu::impl::UnicodeSetStringSpan> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	std::shared_ptr<android::icu::impl::BMPSet> cVar2;
	
	if ( this->isFrozen() )     
		goto label_cond_5f;
	this->buffer = 0x0;
	if ( this->list->size() <= ( this->len + 0x10) )
		goto label_cond_2e;
	if ( this->len )     
		goto label_cond_2b;
	capacity = 0x1;
	//    .local v0, "capacity":I
label_goto_17:
	//    .local v3, "oldList":[I
	this->list = std::make_shared<std::vector<int[]>>(capacity);
	//    .local v1, "i":I
	i = capacity;
	//    .end local v1    # "i":I
	//    .local v2, "i":I
label_goto_1f:
	i = ( i + -0x1);
	//    .end local v2    # "i":I
	//    .restart local v1    # "i":I
	if ( i <= 0 )
		goto label_cond_2e;
	this->list[i] = this->list[i];
	i = i;
	//    .end local v1    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_1f;
	// 10609    .line 3925
	// 10610    .end local v0    # "capacity":I
	// 10611    .end local v2    # "i":I
	// 10612    .end local v3    # "oldList":[I
label_cond_2b:
	capacity = this->len;
	//    .restart local v0    # "capacity":I
	goto label_goto_17;
	// 10619    .line 3934
	// 10620    .end local v0    # "capacity":I
label_cond_2e:
	if ( this->strings->isEmpty() )     
		goto label_cond_46;
	cVar1 = std::make_shared<java::util::ArrayList>(this->strings);
	cVar0 = std::make_shared<android::icu::impl::UnicodeSetStringSpan>(this, cVar1, 0x7f);
	this->stringSpan = cVar0;
label_cond_46:
	if ( !(this->stringSpan) )  
		goto label_cond_54;
	if ( !(( this->stringSpan->needsStringSpanUTF16() ^ 0x1)) )  
		goto label_cond_5f;
label_cond_54:
	cVar2 = std::make_shared<android::icu::impl::BMPSet>(this->list, this->len);
	this->bmpSet = cVar2;
label_cond_5f:
	return this;

}
// .method public getRangeCount()I
int android::icu::text::UnicodeSet::getRangeCount()
{
	
	return ( this->len / 0x2);

}
// .method public getRangeEnd(I)I
int android::icu::text::UnicodeSet::getRangeEnd(int index)
{
	
	//    .param p1, "index"    # I
	return ( this->list[( ( index * 0x2) + 0x1)] + -0x1);

}
// .method public getRangeStart(I)I
int android::icu::text::UnicodeSet::getRangeStart(int index)
{
	
	//    .param p1, "index"    # I
	return this->list[( index * 0x2)];

}
// .method public getRegexEquivalent()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSet::getRegexEquivalent()
{
	
	bool cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 10739    .end annotation
	cVar0 = 0x1;
	if ( this->strings->size() )     
		goto label_cond_f;
	return this->toString();
	// 10762    .line 1977
label_cond_f:
	result = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("(?:")));
	//    .local v0, "result":Ljava/lang/StringBuilder;
	this->appendNewPattern(result, cVar0, 0x0);
	s_S_iterator = this->strings->iterator();
	//    .local v2, "s$iterator":Ljava/util/Iterator;
label_goto_20:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_35;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v1, "s":Ljava/lang/String;
	result->append(0x7c);
	android::icu::text::UnicodeSet::_appendToPat(result, s, cVar0);
	goto label_goto_20;
	// 10806    .line 1983
	// 10807    .end local v1    # "s":Ljava/lang/String;
label_cond_35:
	return result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString();

}
// .method public hashCode()I
int android::icu::text::UnicodeSet::hashCode()
{
	
	int result;
	int i;
	
	result = this->len;
	//    .local v1, "result":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_3:
	if ( i >= this->len )
		goto label_cond_13;
	result = (result *  0xf4243);
	result = (result +  this->list[i]);
	i = ( i + 0x1);
	goto label_goto_3;
	// 10856    .line 2299
label_cond_13:
	return result;

}
// .method public indexOf(I)I
int android::icu::text::UnicodeSet::indexOf(int c)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int i;
	int n;
	int start;
	int limit;
	
	//    .param p1, "c"    # I
	if ( c < 0 ) 
		goto label_cond_7;
	if ( c <= 0x10ffff )
		goto label_cond_27;
label_cond_7:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(c), 0x6))->toString());
	// throw
	throw cVar0;
	// 10907    .line 1095
label_cond_27:
	i = 0x0;
	//    .local v0, "i":I
	n = 0x0;
	//    .local v3, "n":I
label_goto_29:
	i = ( i + 0x1);
	//    .end local v0    # "i":I
	//    .local v1, "i":I
	start = this->list[i];
	//    .local v4, "start":I
	if ( c >= start )
		goto label_cond_33;
	return -0x1;
	// 10935    .line 1102
label_cond_33:
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	limit = this->list[i];
	//    .local v2, "limit":I
	if ( c >= limit )
		goto label_cond_3f;
	return ((n + c) -  start);
	// 10956    .line 1106
label_cond_3f:
	n = (n +  (limit - start));
	goto label_goto_29;

}
// .method public isEmpty()Z
bool android::icu::text::UnicodeSet::isEmpty()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( this->len != cVar0 )
		goto label_cond_f;
	if ( this->strings->size() )     
		goto label_cond_f;
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method public isFrozen()Z
bool android::icu::text::UnicodeSet::isFrozen()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( this->bmpSet )     
		goto label_cond_9;
	if ( !(this->stringSpan) )  
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::lang::String>> android::icu::text::UnicodeSet::iterator()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_UnicodeSetIterator2> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 11023        value = {
	// 11024            "()",
	// 11025            "Ljava/util/Iterator",
	// 11026            "<",
	// 11027            "Ljava/lang/String;",
	// 11028            ">;"
	// 11029        }
	// 11030    .end annotation
	cVar0 = std::make_shared<android::icu::text::UnicodeSet_S_UnicodeSetIterator2>(this);
	return cVar0;

}
// .method public matches(Landroid/icu/text/Replaceable;[IIZ)I
int android::icu::text::UnicodeSet::matches(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<int[]> offset,int limit,bool incremental)
{
	
	int cVar0;
	int forward;
	int firstChar;
	int highWaterLength;
	std::shared_ptr<java::util::Iterator> trial_S_iterator;
	std::shared_ptr<java::lang::String> trial;
	int cVar2;
	int c;
	int cVar3;
	int length;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offset"    # [I
	//    .param p3, "limit"    # I
	//    .param p4, "incremental"    # Z
	if ( offset[0x0] != limit )
		goto label_cond_16;
	if ( !(this->contains(0xffff)) )  
		goto label_cond_14;
	if ( !(incremental) )  
		goto label_cond_12;
	cVar0 = 0x1;
label_goto_11:
	return cVar0;
label_cond_12:
	cVar0 = 0x2;
	goto label_goto_11;
	// 11078    .line 898
label_cond_14:
	return 0x0;
	// 11084    .line 901
label_cond_16:
	if ( !(this->strings->size()) )  
		goto label_cond_8a;
	if ( offset[0x0] >= limit )
		goto label_cond_55;
	forward = 0x1;
	//    .local v2, "forward":Z
label_goto_24:
	firstChar = text->charAt(offset[0x0]);
	//    .local v1, "firstChar":C
	highWaterLength = 0x0;
	//    .local v3, "highWaterLength":I
	trial_S_iterator = this->strings->iterator();
	//    .local v7, "trial$iterator":Ljava/util/Iterator;
label_cond_32:
	if ( !(trial_S_iterator->hasNext()) )  
		goto label_cond_49;
	trial = trial_S_iterator->next();
	trial->checkCast("java::lang::String");
	//    .local v6, "trial":Ljava/lang/String;
	if ( !(forward) )  
		goto label_cond_57;
	cVar2 = 0x0;
label_goto_41:
	c = trial->charAt(cVar2);
	//    .local v0, "c":C
	if ( !(forward) )  
		goto label_cond_5e;
	if ( c <= firstChar )
		goto label_cond_5e;
	//    .end local v0    # "c":C
	//    .end local v6    # "trial":Ljava/lang/String;
label_cond_49:
label_goto_49:
	if ( !(highWaterLength) )  
		goto label_cond_8a;
	cVar3 = 0x0;
	if ( !(forward) )  
		goto label_cond_88;
	//    .end local v3    # "highWaterLength":I
label_goto_50:
	offset[cVar3] = (offset[cVar3] +  highWaterLength);
	return 0x2;
	// 11182    .line 910
	// 11183    .end local v1    # "firstChar":C
	// 11184    .end local v2    # "forward":Z
	// 11185    .end local v7    # "trial$iterator":Ljava/util/Iterator;
label_cond_55:
	0x0;
	//    .restart local v2    # "forward":Z
	goto label_goto_24;
	// 11192    .line 927
	// 11193    .restart local v1    # "firstChar":C
	// 11194    .restart local v3    # "highWaterLength":I
	// 11195    .restart local v6    # "trial":Ljava/lang/String;
	// 11196    .restart local v7    # "trial$iterator":Ljava/util/Iterator;
label_cond_57:
	cVar2 = ( trial->length() + -0x1);
	goto label_goto_41;
	// 11206    .line 932
	// 11207    .restart local v0    # "c":C
label_cond_5e:
	if ( c != firstChar )
		goto label_cond_32;
	length = android::icu::text::UnicodeSet::matchRest(text, offset[0x0], limit, trial);
	//    .local v4, "length":I
	if ( !(incremental) )  
		goto label_cond_7a;
	if ( !(forward) )  
		goto label_cond_74;
	//    .local v5, "maxLen":I
label_goto_70:
	if ( length != maxLen )
		goto label_cond_7a;
	return 0x1;
	// 11243    .line 937
	// 11244    .end local v5    # "maxLen":I
label_cond_74:
	//    .restart local v5    # "maxLen":I
	goto label_goto_70;
	// 11255    .line 944
	// 11256    .end local v5    # "maxLen":I
label_cond_7a:
	if ( length != trial->length() )
		goto label_cond_32;
	if ( length <= highWaterLength )
		goto label_cond_83;
	highWaterLength = length;
label_cond_83:
	if ( !(forward) )  
		goto label_cond_32;
	if ( length >= highWaterLength )
		goto label_cond_32;
	goto label_goto_49;
	// 11278    .line 961
	// 11279    .end local v0    # "c":C
	// 11280    .end local v4    # "length":I
	// 11281    .end local v6    # "trial":Ljava/lang/String;
label_cond_88:
	highWaterLength = (0 - highWaterLength);
	goto label_goto_50;
	// 11287    .line 965
	// 11288    .end local v1    # "firstChar":C
	// 11289    .end local v2    # "forward":Z
	// 11290    .end local v3    # "highWaterLength":I
	// 11291    .end local v7    # "trial$iterator":Ljava/util/Iterator;
label_cond_8a:
	return this->matches(text, offset, limit, incremental);

}
// .method public matchesAt(Ljava/lang/CharSequence;I)I
int android::icu::text::UnicodeSet::matchesAt(std::shared_ptr<java::lang::CharSequence> text,int offset)
{
	
	int lastLen;
	int firstChar;
	std::shared_ptr<java::util::Iterator> it;
	std::shared_ptr<java::lang::String> trial;
	int firstStringChar;
	int cp;
	int tempLen;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "offset"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 11305    .end annotation
	lastLen = -0x1;
	//    .local v4, "lastLen":I
	if ( !(this->strings->size()) )  
		goto label_cond_29;
	firstChar = text->charAt(offset);
	//    .local v1, "firstChar":C
	//    .local v6, "trial":Ljava/lang/String;
	it = this->strings->iterator();
	//    .end local v6    # "trial":Ljava/lang/String;
	//    .local v3, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
label_cond_15:
	if ( !(it->hasNext()) )  
		goto label_cond_43;
	trial = it->next();
	trial->checkCast("java::lang::String");
	//    .local v6, "trial":Ljava/lang/String;
	firstStringChar = trial->charAt(0x0);
	//    .local v2, "firstStringChar":C
	if ( firstStringChar <  firstChar )
		goto label_cond_15;
	if ( firstStringChar <= firstChar )
		goto label_cond_15;
	//    .end local v1    # "firstChar":C
	//    .end local v2    # "firstStringChar":C
	//    .end local v3    # "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	//    .end local v6    # "trial":Ljava/lang/String;
label_cond_29:
label_goto_29:
	if ( lastLen >= 0x2 )
		goto label_cond_3a;
	cp = android::icu::text::UTF16::charAt(text, offset);
	//    .local v0, "cp":I
	if ( !(this->contains(cp)) )  
		goto label_cond_3a;
	lastLen = android::icu::text::UTF16::getCharCount(cp);
	//    .end local v0    # "cp":I
label_cond_3a:
	return (offset + lastLen);
	// 11405    .line 1038
	// 11406    .restart local v1    # "firstChar":C
	// 11407    .restart local v3    # "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	// 11408    .local v5, "tempLen":I
label_cond_3d:
	trial = it->next();
	trial->checkCast("java::lang::String");
	//    .end local v5    # "tempLen":I
label_cond_43:
	tempLen = android::icu::text::UnicodeSet::matchesAt(text, offset, trial);
	//    .restart local v5    # "tempLen":I
	if ( lastLen >  tempLen )
		goto label_cond_29;
	lastLen = tempLen;
	if ( it->hasNext() )     
		goto label_cond_3d;
	goto label_goto_29;

}
// .method public matchesIndexValue(I)Z
bool android::icu::text::UnicodeSet::matchesIndexValue(int v)
{
	
	bool cVar0;
	int cVar1;
	int i;
	int low;
	int high;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "v"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	i = 0x0;
	//    .local v2, "i":I
label_goto_3:
	if ( i >= this->getRangeCount() )
		goto label_cond_2c;
	low = this->getRangeStart(i);
	//    .local v3, "low":I
	high = this->getRangeEnd(i);
	//    .local v1, "high":I
	if ( ( low & -0x100) != ( high & -0x100) )
		goto label_cond_20;
	if ( ( low & 0xff) >  v )
		goto label_cond_29;
	if ( v >  ( high & 0xff) )
		goto label_cond_29;
	return cVar0;
	// 11491    .line 861
label_cond_20:
	if ( ( low & 0xff) <= v )
		goto label_cond_28;
	if ( v >  ( high & 0xff) )
		goto label_cond_29;
label_cond_28:
	return cVar0;
	// 11505    .line 854
label_cond_29:
	i = ( i + 0x1);
	goto label_goto_3;
	// 11511    .line 865
	// 11512    .end local v1    # "high":I
	// 11513    .end local v3    # "low":I
label_cond_2c:
	if ( !(this->strings->size()) )  
		goto label_cond_4f;
	s_S_iterator = this->strings->iterator();
	//    .local v5, "s$iterator":Ljava/util/Iterator;
label_cond_3a:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_4f;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v4, "s":Ljava/lang/String;
	//    .local v0, "c":I
	if ( ( android::icu::text::UTF16::charAt(s, cVar1) & 0xff) != v )
		goto label_cond_3a;
	return cVar0;
	// 11559    .line 878
	// 11560    .end local v0    # "c":I
	// 11561    .end local v4    # "s":Ljava/lang/String;
	// 11562    .end local v5    # "s$iterator":Ljava/util/Iterator;
label_cond_4f:
	return cVar1;

}
// .method public ranges()Ljava/lang/Iterable;
std::shared_ptr<java::lang::Iterable<android::icu::text::UnicodeSet_S_EntryRange>> android::icu::text::UnicodeSet::ranges()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRangeIterable> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 11570        value = {
	// 11571            "()",
	// 11572            "Ljava/lang/Iterable",
	// 11573            "<",
	// 11574            "Landroid/icu/text/UnicodeSet$EntryRange;",
	// 11575            ">;"
	// 11576        }
	// 11577    .end annotation
	cVar0 = std::make_shared<android::icu::text::UnicodeSet_S_EntryRangeIterable>(this, 0x0);
	return cVar0;

}
// .method public final remove(I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::remove(int c)
{
	
	//    .param p1, "c"    # I
	return this->remove(c, c);

}
// .method public remove(II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::remove(int start,int end)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	cVar0 = 0x10ffff;
	cVar1 = 0x6;
	cVar2 = 0x2;
	this->checkFrozen();
	if ( start < 0 ) 
		goto label_cond_c;
	if ( start <= cVar0 )
		goto label_cond_2b;
label_cond_c:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(start), cVar1))->toString());
	// throw
	throw cVar3;
	// 11655    .line 1497
label_cond_2b:
	if ( end < 0 ) 
		goto label_cond_2f;
	if ( end <= cVar0 )
		goto label_cond_4e;
label_cond_2f:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(end), cVar1))->toString());
	// throw
	throw cVar5;
	// 11693    .line 1500
label_cond_4e:
	if ( start >  end )
		goto label_cond_57;
	this->retain(this->range(start, end), cVar2, cVar2);
label_cond_57:
	return this;

}
// .method public final remove(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::remove(std::shared_ptr<java::lang::CharSequence> s)
{
	
	int cp;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	cp = android::icu::text::UnicodeSet::getSingleCP(s);
	//    .local v0, "cp":I
	if ( cp >= 0 )
		goto label_cond_13;
	this->strings->remove(s->toString());
	this->pat = 0x0;
label_goto_12:
	return this;
	// 11741    .line 1530
label_cond_13:
	this->remove(cp, cp);
	goto label_goto_12;

}
// .method public removeAll(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::removeAll(std::shared_ptr<android::icu::text::UnicodeSet> c)
{
	
	//    .param p1, "c"    # Landroid/icu/text/UnicodeSet;
	this->checkFrozen();
	this->retain(c->list, c->len, 0x2);
	this->strings->removeAll(c->strings);
	return this;

}
// .method public final removeAll(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::removeAll(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return this->removeAll(android::icu::text::UnicodeSet::fromAll(s));

}
// .method public removeAll(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::removeAll(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection)
{
	
	std::shared_ptr<java::util::Iterator> o_S_iterator;
	std::shared_ptr<java::lang::CharSequence> o;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 11796        value = {
	// 11797            "<T::",
	// 11798            "Ljava/lang/CharSequence;",
	// 11799            ">(",
	// 11800            "Ljava/lang/Iterable",
	// 11801            "<TT;>;)",
	// 11802            "Landroid/icu/text/UnicodeSet;"
	// 11803        }
	// 11804    .end annotation
	//    .local p1, "collection":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	this->checkFrozen();
	o_S_iterator = collection->iterator();
	//    .local v1, "o$iterator":Ljava/util/Iterator;
label_goto_7:
	if ( !(o_S_iterator->hasNext()) )  
		goto label_cond_17;
	o = o_S_iterator->next();
	o->checkCast("java::lang::CharSequence");
	//    .local v0, "o":Ljava/lang/CharSequence;, "TT;"
	this->remove(o);
	goto label_goto_7;
	// 11836    .line 4364
	// 11837    .end local v0    # "o":Ljava/lang/CharSequence;, "TT;"
label_cond_17:
	return this;

}
// .method public final removeAllStrings()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::removeAllStrings()
{
	
	this->checkFrozen();
	if ( !(this->strings->size()) )  
		goto label_cond_13;
	this->strings->clear();
	this->pat = 0x0;
label_cond_13:
	return this;

}
// .method public final retain(I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::retain(int c)
{
	
	//    .param p1, "c"    # I
	return this->retain(c, c);

}
// .method public retain(II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::retain(int start,int end)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	cVar0 = 0x10ffff;
	cVar1 = 0x6;
	this->checkFrozen();
	if ( start < 0 ) 
		goto label_cond_c;
	if ( start <= cVar0 )
		goto label_cond_2b;
label_cond_c:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(start), cVar1))->toString());
	// throw
	throw cVar2;
	// 11938    .line 1434
label_cond_2b:
	if ( end < 0 ) 
		goto label_cond_2f;
	if ( end <= cVar0 )
		goto label_cond_4e;
label_cond_2f:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point U+")))->append(android::icu::impl::Utility::hex((long long)(end), cVar1))->toString());
	// throw
	throw cVar4;
	// 11976    .line 1437
label_cond_4e:
	if ( start >  end )
		goto label_cond_59;
	this->retain(this->range(start, end), 0x2, 0x0);
label_goto_58:
	return this;
	// 11993    .line 1440
label_cond_59:
	this->clear();
	goto label_goto_58;

}
// .method public final retain(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::retain(std::shared_ptr<java::lang::CharSequence> cs)
{
	
	int cp;
	std::shared_ptr<java::lang::Object> s;
	
	//    .param p1, "cs"    # Ljava/lang/CharSequence;
	cp = android::icu::text::UnicodeSet::getSingleCP(cs);
	//    .local v0, "cp":I
	if ( cp >= 0 )
		goto label_cond_26;
	s = cs->toString();
	//    .local v2, "s":Ljava/lang/String;
	//    .local v1, "isIn":Z
	if ( !(this->strings->contains(s)) )  
		goto label_cond_1a;
	if ( this->size() != 0x1 )
		goto label_cond_1a;
	return this;
	// 12042    .line 1472
label_cond_1a:
	this->clear();
	this->strings->add(s);
	this->pat = 0x0;
	//    .end local v1    # "isIn":Z
	//    .end local v2    # "s":Ljava/lang/String;
label_goto_25:
	return this;
	// 12062    .line 1476
label_cond_26:
	this->retain(cp, cp);
	goto label_goto_25;

}
// .method public retainAll(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::retainAll(std::shared_ptr<android::icu::text::UnicodeSet> c)
{
	
	//    .param p1, "c"    # Landroid/icu/text/UnicodeSet;
	this->checkFrozen();
	this->retain(c->list, c->len, 0x0);
	this->strings->retainAll(c->strings);
	return this;

}
// .method public final retainAll(Ljava/lang/CharSequence;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::retainAll(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return this->retainAll(android::icu::text::UnicodeSet::fromAll(s));

}
// .method public retainAll(Ljava/lang/Iterable;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::retainAll(std::shared_ptr<java::lang::Iterable<java::lang::CharSequence>> collection)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> toRetain;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 12117        value = {
	// 12118            "<T::",
	// 12119            "Ljava/lang/CharSequence;",
	// 12120            ">(",
	// 12121            "Ljava/lang/Iterable",
	// 12122            "<TT;>;)",
	// 12123            "Landroid/icu/text/UnicodeSet;"
	// 12124        }
	// 12125    .end annotation
	//    .local p1, "collection":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	this->checkFrozen();
	toRetain = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v0, "toRetain":Landroid/icu/text/UnicodeSet;
	toRetain->addAll(collection);
	this->retainAll(toRetain);
	return this;

}
// .method public set(II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::set(int start,int end)
{
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	this->checkFrozen();
	this->clear();
	this->complement(start, end);
	return this;

}
// .method public set(Landroid/icu/text/UnicodeSet;)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::UnicodeSet::set(std::shared_ptr<android::icu::text::UnicodeSet> other)
{
	
	std::shared_ptr<int[]> cVar0;
	std::shared_ptr<java::util::TreeSet> cVar1;
	
	//    .param p1, "other"    # Landroid/icu/text/UnicodeSet;
	this->checkFrozen();
	cVar0 = other->list->clone();
	cVar0->checkCast("int[]");
	this->list = cVar0;
	this->len = other->len;
	this->pat = other->pat;
	cVar1 = std::make_shared<java::util::TreeSet>(other->strings);
	this->strings = cVar1;
	return this;

}
// .method public size()I
int android::icu::text::UnicodeSet::size()
{
	
	int n;
	int i;
	
	n = 0x0;
	//    .local v2, "n":I
	//    .local v0, "count":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_6:
	if ( i >= this->getRangeCount() )
		goto label_cond_17;
	n = (n +  ( (this->getRangeEnd(i) -  this->getRangeStart(i)) + 0x1));
	i = ( i + 0x1);
	goto label_goto_6;
	// 12250    .line 826
label_cond_17:
	return (this->strings->size() +  n);

}
// .method public span(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I
int android::icu::text::UnicodeSet::span(std::shared_ptr<java::lang::CharSequence> s,int cVar1,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	std::shared_ptr<android::icu::util::OutputInt> cVar0;
	int end;
	int cVar1;
	std::shared_ptr<android::icu::impl::UnicodeSetStringSpan> strSpan;
	std::shared_ptr<java::util::ArrayList> cVar2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	cVar0 = 0x0;
	end = s->length();
	//    .local v0, "end":I
	if ( cVar1 >= 0 )
		goto label_cond_13;
	cVar1 = 0x0;
label_cond_8:
	if ( !(this->bmpSet) )  
		goto label_cond_16;
	return this->bmpSet->span(s, cVar1, spanCondition, cVar0);
	// 12299    .line 3975
label_cond_13:
	if ( cVar1 <  end )
		goto label_cond_8;
	return end;
	// 12306    .line 3982
label_cond_16:
	if ( !(this->stringSpan) )  
		goto label_cond_21;
	return this->stringSpan->span(s, cVar1, spanCondition);
	// 12321    .line 3984
label_cond_21:
	if ( this->strings->isEmpty() )     
		goto label_cond_49;
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_46;
	//    .local v2, "which":I
label_goto_2f:
	cVar2 = std::make_shared<java::util::ArrayList>(this->strings);
	strSpan = std::make_shared<android::icu::impl::UnicodeSetStringSpan>(this, cVar2, which);
	//    .local v1, "strSpan":Landroid/icu/impl/UnicodeSetStringSpan;
	if ( !(strSpan->needsStringSpanUTF16()) )  
		goto label_cond_49;
	return strSpan->span(s, cVar1, spanCondition);
	// 12366    .line 3986
	// 12367    .end local v1    # "strSpan":Landroid/icu/impl/UnicodeSetStringSpan;
	// 12368    .end local v2    # "which":I
label_cond_46:
	//    .restart local v2    # "which":I
	goto label_goto_2f;
	// 12375    .line 3993
	// 12376    .end local v2    # "which":I
label_cond_49:
	return this->spanCodePointsAndCount(s, cVar1, spanCondition, cVar0);

}
// .method public span(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I
int android::icu::text::UnicodeSet::span(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	return this->span(s, 0x0, spanCondition);

}
// .method public spanAndCount(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;Landroid/icu/util/OutputInt;)I
int android::icu::text::UnicodeSet::spanAndCount(std::shared_ptr<java::lang::CharSequence> s,int cVar1,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition,std::shared_ptr<android::icu::util::OutputInt> outCount)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int end;
	int cVar1;
	std::shared_ptr<android::icu::impl::UnicodeSetStringSpan> strSpan;
	std::shared_ptr<java::util::ArrayList> cVar2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	//    .param p4, "outCount"    # Landroid/icu/util/OutputInt;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 12408    .end annotation
	if ( outCount )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("outCount must not be null")));
	// throw
	throw cVar0;
	// 12423    .line 4010
label_cond_b:
	end = s->length();
	//    .local v0, "end":I
	if ( cVar1 >= 0 )
		goto label_cond_1d;
	cVar1 = 0x0;
label_cond_12:
	if ( !(this->stringSpan) )  
		goto label_cond_20;
	return this->stringSpan->spanAndCount(s, cVar1, spanCondition, outCount);
	// 12451    .line 4013
label_cond_1d:
	if ( cVar1 <  end )
		goto label_cond_12;
	return end;
	// 12458    .line 4020
label_cond_20:
	if ( !(this->bmpSet) )  
		goto label_cond_2b;
	return this->bmpSet->span(s, cVar1, spanCondition, outCount);
	// 12473    .line 4022
label_cond_2b:
	if ( this->strings->isEmpty() )     
		goto label_cond_4f;
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_4c;
	//    .local v2, "which":I
label_goto_39:
	cVar2 = std::make_shared<java::util::ArrayList>(this->strings);
	strSpan = std::make_shared<android::icu::impl::UnicodeSetStringSpan>(this, cVar2, ( which | 0x40));
	//    .local v1, "strSpan":Landroid/icu/impl/UnicodeSetStringSpan;
	return strSpan->spanAndCount(s, cVar1, spanCondition, outCount);
	// 12514    .line 4024
	// 12515    .end local v1    # "strSpan":Landroid/icu/impl/UnicodeSetStringSpan;
	// 12516    .end local v2    # "which":I
label_cond_4c:
	//    .restart local v2    # "which":I
	goto label_goto_39;
	// 12523    .line 4030
	// 12524    .end local v2    # "which":I
label_cond_4f:
	return this->spanCodePointsAndCount(s, cVar1, spanCondition, outCount);

}
// .method public spanBack(Ljava/lang/CharSequence;ILandroid/icu/text/UnicodeSet$SpanCondition;)I
int android::icu::text::UnicodeSet::spanBack(std::shared_ptr<java::lang::CharSequence> s,int cVar0,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::UnicodeSetStringSpan> strSpan;
	std::shared_ptr<java::util::ArrayList> cVar1;
	int prev;
	int c;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "fromIndex"    # I
	//    .param p3, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	if ( cVar0 > 0 ) 
		goto label_cond_4;
	return 0x0;
	// 12548    .line 4079
label_cond_4:
	if ( cVar0 <= s->length() )
		goto label_cond_e;
	cVar0 = s->length();
label_cond_e:
	if ( !(this->bmpSet) )  
		goto label_cond_19;
	return this->bmpSet->spanBack(s, cVar0, spanCondition);
	// 12576    .line 4086
label_cond_19:
	if ( !(this->stringSpan) )  
		goto label_cond_24;
	return this->stringSpan->spanBack(s, cVar0, spanCondition);
	// 12591    .line 4088
label_cond_24:
	if ( this->strings->isEmpty() )     
		goto label_cond_4c;
	if ( spanCondition != android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_49;
	//    .local v4, "which":I
label_goto_32:
	cVar1 = std::make_shared<java::util::ArrayList>(this->strings);
	strSpan = std::make_shared<android::icu::impl::UnicodeSetStringSpan>(this, cVar1, which);
	//    .local v3, "strSpan":Landroid/icu/impl/UnicodeSetStringSpan;
	if ( !(strSpan->needsStringSpanUTF16()) )  
		goto label_cond_4c;
	return strSpan->spanBack(s, cVar0, spanCondition);
	// 12637    .line 4091
	// 12638    .end local v3    # "strSpan":Landroid/icu/impl/UnicodeSetStringSpan;
	// 12639    .end local v4    # "which":I
label_cond_49:
	//    .restart local v4    # "which":I
	goto label_goto_32;
	// 12646    .line 4099
	// 12647    .end local v4    # "which":I
label_cond_4c:
	if ( spanCondition == android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED )
		goto label_cond_5d;
	//    .local v2, "spanContained":Z
label_goto_51:
	prev = cVar0;
	//    .local v1, "prev":I
label_goto_52:
	c = java::lang::Character::codePointBefore(s, prev);
	//    .local v0, "c":I
	if ( spanContained == this->contains(c) )
		goto label_cond_5f;
label_cond_5c:
	return prev;
	// 12679    .line 4099
	// 12680    .end local v0    # "c":I
	// 12681    .end local v1    # "prev":I
	// 12682    .end local v2    # "spanContained":Z
label_cond_5d:
	//    .restart local v2    # "spanContained":Z
	goto label_goto_51;
	// 12689    .line 4108
	// 12690    .restart local v0    # "c":I
	// 12691    .restart local v1    # "prev":I
label_cond_5f:
	prev = (prev -  java::lang::Character::charCount(c));
	if ( prev <= 0 )
		goto label_cond_5c;
	goto label_goto_52;

}
// .method public spanBack(Ljava/lang/CharSequence;Landroid/icu/text/UnicodeSet$SpanCondition;)I
int android::icu::text::UnicodeSet::spanBack(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> spanCondition)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "spanCondition"    # Landroid/icu/text/UnicodeSet$SpanCondition;
	return this->spanBack(s, s->length(), spanCondition);

}
// .method public strings()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::String>> android::icu::text::UnicodeSet::strings()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 12726        value = {
	// 12727            "()",
	// 12728            "Ljava/util/Collection",
	// 12729            "<",
	// 12730            "Ljava/lang/String;",
	// 12731            ">;"
	// 12732        }
	// 12733    .end annotation
	return java::util::Collections::unmodifiableSortedSet(this->strings);

}
// .method public stripFrom(Ljava/lang/CharSequence;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSet::stripFrom(std::shared_ptr<java::lang::CharSequence> source,bool matches)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int pos;
	int inside;
	
	//    .param p1, "source"    # Ljava/lang/CharSequence;
	//    .param p2, "matches"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 12751    .end annotation
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "result":Ljava/lang/StringBuilder;
	pos = 0x0;
	//    .local v1, "pos":I
label_goto_6:
	if ( pos >= source->length() )
		goto label_cond_1e;
	inside = this->findIn(source, pos, ( matches ^ 0x1));
	//    .local v0, "inside":I
	result->append(source->subSequence(pos, inside));
	pos = this->findIn(source, inside, matches);
	goto label_goto_6;
	// 12793    .line 4652
	// 12794    .end local v0    # "inside":I
label_cond_1e:
	return result->toString();

}
// .method public toPattern(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSet::toPattern(bool escapeUnprintable)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "escapeUnprintable"    # Z
	if ( !(this->pat) )  
		goto label_cond_b;
	if ( !(( escapeUnprintable ^ 0x1)) )  
		goto label_cond_b;
	return this->pat;
	// 12822    .line 683
label_cond_b:
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "result":Ljava/lang/StringBuilder;
	cVar0 = this->_toPattern(result, escapeUnprintable);
	cVar0->checkCast("java::lang::StringBuilder");
	return cVar0->toString();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSet::toString()
{
	
	return this->toPattern(0x1);

}


