// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CaseMapImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.CaseMapImpl_S_GreekUpper.h"
#include "android.icu.impl.CaseMapImpl_S_StringContextIterator.h"
#include "android.icu.impl.CaseMapImpl.h"
#include "android.icu.impl.UCaseProps_S_ContextIterator.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.Edits.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Throwable.h"

static android::icu::impl::CaseMapImpl::_assertionsDisabled;
static android::icu::impl::CaseMapImpl::OMIT_UNCHANGED_TEXT = 0x4000;
// .method static synthetic -wrap0(ILjava/lang/Appendable;IILandroid/icu/text/Edits;)V
void android::icu::impl::CaseMapImpl::_wrap0(int result,std::shared_ptr<java::lang::Appendable> dest,int cpLength,int options,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	//    .param p0, "result"    # I
	//    .param p1, "dest"    # Ljava/lang/Appendable;
	//    .param p2, "cpLength"    # I
	//    .param p3, "options"    # I
	//    .param p4, "edits"    # Landroid/icu/text/Edits;
	android::icu::impl::CaseMapImpl::appendResult(result, dest, cpLength, options, edits);
	return;

}
// .method static constructor <clinit>()V
void android::icu::impl::CaseMapImpl::static_cinit()
{
	
	android::icu::impl::CaseMapImpl::_assertionsDisabled = ( android::icu::impl::CaseMapImpl()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::impl::CaseMapImpl::CaseMapImpl()
{
	
	// 059    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static appendCodePoint(Ljava/lang/Appendable;I)I
int android::icu::impl::CaseMapImpl::appendCodePoint(std::shared_ptr<java::lang::Appendable> a,int c)
{
	
	//    .param p0, "a"    # Ljava/lang/Appendable;
	//    .param p1, "c"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 069        value = {
	// 070            Ljava/io/IOException;
	// 071        }
	// 072    .end annotation
	if ( c >  0xffff )
		goto label_cond_b;
	a->append((char)(c));
	return 0x1;
	// 090    .line 151
label_cond_b:
	a->append((char)((_shri(c,0xa) +  0xd7c0)));
	a->append((char)((( c & 0x3ff) +  0xdc00)));
	return 0x2;

}
// .method private static appendResult(ILjava/lang/Appendable;IILandroid/icu/text/Edits;)V
void android::icu::impl::CaseMapImpl::appendResult(int result,std::shared_ptr<java::lang::Appendable> dest,int cpLength,int options,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	//    .param p0, "result"    # I
	//    .param p1, "dest"    # Ljava/lang/Appendable;
	//    .param p2, "cpLength"    # I
	//    .param p3, "options"    # I
	//    .param p4, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Throws;
	// 127        value = {
	// 128            Ljava/io/IOException;
	// 129        }
	// 130    .end annotation
	if ( result >= 0 )
		goto label_cond_11;
	if ( !(edits) )  
		goto label_cond_c;
	edits->addUnchanged(cpLength);
	if ( !(( options & 0x4000)) )  
		goto label_cond_c;
	return;
	// 150    .line 172
label_cond_c:
	android::icu::impl::CaseMapImpl::appendCodePoint(dest, (~result));
label_cond_10:
label_goto_10:
	return;
	// 161    .line 173
label_cond_11:
	if ( result >  0x1f )
		goto label_cond_1b;
	if ( !(edits) )  
		goto label_cond_10;
	edits->addReplace(cpLength, result);
	goto label_goto_10;
	// 175    .line 180
label_cond_1b:
	//    .local v0, "length":I
	if ( !(edits) )  
		goto label_cond_10;
	edits->addReplace(cpLength, android::icu::impl::CaseMapImpl::appendCodePoint(dest, result));
	goto label_goto_10;

}
// .method private static final appendUnchanged(Ljava/lang/CharSequence;IILjava/lang/Appendable;ILandroid/icu/text/Edits;)V
void android::icu::impl::CaseMapImpl::appendUnchanged(std::shared_ptr<java::lang::CharSequence> src,int start,int length,std::shared_ptr<java::lang::Appendable> dest,int options,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	//    .param p0, "src"    # Ljava/lang/CharSequence;
	//    .param p1, "start"    # I
	//    .param p2, "length"    # I
	//    .param p3, "dest"    # Ljava/lang/Appendable;
	//    .param p4, "options"    # I
	//    .param p5, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Throws;
	// 200        value = {
	// 201            Ljava/io/IOException;
	// 202        }
	// 203    .end annotation
	if ( length <= 0 )
		goto label_cond_11;
	if ( !(edits) )  
		goto label_cond_c;
	edits->addUnchanged(length);
	if ( !(( options & 0x4000)) )  
		goto label_cond_c;
	return;
	// 223    .line 196
label_cond_c:
	dest->append(src, start, (start + length));
label_cond_11:
	return;

}
// .method public static fold(ILjava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::CaseMapImpl::fold(int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	int i;
	int c;
	int cpLength;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "options"    # I
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p3, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Signature;
	// 240        value = {
	// 241            "<A::",
	// 242            "Ljava/lang/Appendable;",
	// 243            ">(I",
	// 244            "Ljava/lang/CharSequence;",
	// 245            "TA;",
	// 246            "Landroid/icu/text/Edits;",
	// 247            ")TA;"
	// 248        }
	// 249    .end annotation
	//    .local p2, "dest":Ljava/lang/Appendable;, "TA;"
	if ( !(edits) )  
		goto label_cond_5;
	try {
	//label_try_start_2:
	edits->reset();
label_cond_5:
	//    .local v4, "length":I
	i = 0x0;
	//    .local v3, "i":I
label_goto_a:
	if ( i >= src->length() )
		goto label_cond_26;
	c = java::lang::Character::codePointAt(src, i);
	//    .local v0, "c":I
	cpLength = java::lang::Character::charCount(c);
	//    .local v1, "cpLength":I
	i = (i +  cpLength);
	android::icu::impl::CaseMapImpl::appendResult(android::icu::impl::UCaseProps::INSTANCE->toFullFolding(c, dest, options), dest, cpLength, options, edits);
	//label_try_end_1e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	//    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_1e} :catch_1f
	goto label_goto_a;
	// 303    .line 369
	// 304    .end local v0    # "c":I
	// 305    .end local v1    # "cpLength":I
	// 306    .end local v3    # "i":I
	// 307    .end local v4    # "length":I
label_catch_1f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 319    .line 368
	// 320    .end local v2    # "e":Ljava/io/IOException;
	// 321    .restart local v3    # "i":I
	// 322    .restart local v4    # "length":I
label_cond_26:
	return dest;

}
// .method private static internalToLower(IILandroid/icu/impl/CaseMapImpl$StringContextIterator;Ljava/lang/Appendable;Landroid/icu/text/Edits;)V
void android::icu::impl::CaseMapImpl::internalToLower(int caseLocale,int options,std::shared_ptr<android::icu::impl::CaseMapImpl_S_StringContextIterator> iter,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	int c;
	
	//    .param p0, "caseLocale"    # I
	//    .param p1, "options"    # I
	//    .param p2, "iter"    # Landroid/icu/impl/CaseMapImpl$StringContextIterator;
	//    .param p3, "dest"    # Ljava/lang/Appendable;
	//    .param p4, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Throws;
	// 335        value = {
	// 336            Ljava/io/IOException;
	// 337        }
	// 338    .end annotation
label_goto_0:
	c = iter->nextCaseMapCP();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_14;
	android::icu::impl::CaseMapImpl::appendResult(android::icu::impl::UCaseProps::INSTANCE->toFullLower(c, iter, dest, caseLocale), dest, iter->getCPLength(), options, edits);
	goto label_goto_0;
	// 366    .line 207
label_cond_14:
	return;

}
// .method public static toLower(IILjava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::CaseMapImpl::toLower(int caseLocale,int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::shared_ptr<android::icu::impl::CaseMapImpl_S_StringContextIterator> iter;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "caseLocale"    # I
	//    .param p1, "options"    # I
	//    .param p2, "src"    # Ljava/lang/CharSequence;
	//    .param p4, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Signature;
	// 378        value = {
	// 379            "<A::",
	// 380            "Ljava/lang/Appendable;",
	// 381            ">(II",
	// 382            "Ljava/lang/CharSequence;",
	// 383            "TA;",
	// 384            "Landroid/icu/text/Edits;",
	// 385            ")TA;"
	// 386        }
	// 387    .end annotation
	//    .local p3, "dest":Ljava/lang/Appendable;, "TA;"
	if ( !(edits) )  
		goto label_cond_5;
	try {
	//label_try_start_2:
	edits->reset();
label_cond_5:
	iter = std::make_shared<android::icu::impl::CaseMapImpl_S_StringContextIterator>(src);
	//    .local v1, "iter":Landroid/icu/impl/CaseMapImpl$StringContextIterator;
	android::icu::impl::CaseMapImpl::internalToLower(caseLocale, options, iter, dest, edits);
	//label_try_end_d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e;
	}
	//    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_d} :catch_e
	return dest;
	// 413    .line 218
	// 414    .end local v1    # "iter":Landroid/icu/impl/CaseMapImpl$StringContextIterator;
label_catch_e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public static toTitle(IILandroid/icu/text/BreakIterator;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::CaseMapImpl::toTitle(int caseLocale,int options,std::shared_ptr<android::icu::text::BreakIterator> titleIter,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar1;
	std::shared_ptr<android::icu::impl::CaseMapImpl_S_StringContextIterator> iter;
	int srcLength;
	int prev;
	int isFirstIndex;
	int index;
	int c;
	int titleStart;
	int titleLimit;
	int c1;
	int c2;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	
	//    .param p0, "caseLocale"    # I
	//    .param p1, "options"    # I
	//    .param p2, "titleIter"    # Landroid/icu/text/BreakIterator;
	//    .param p3, "src"    # Ljava/lang/CharSequence;
	//    .param p5, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Signature;
	// 435        value = {
	// 436            "<A::",
	// 437            "Ljava/lang/Appendable;",
	// 438            ">(II",
	// 439            "Landroid/icu/text/BreakIterator;",
	// 440            "Ljava/lang/CharSequence;",
	// 441            "TA;",
	// 442            "Landroid/icu/text/Edits;",
	// 443            ")TA;"
	// 444        }
	// 445    .end annotation
	//    .local p4, "dest":Ljava/lang/Appendable;, "TA;"
	if ( !(edits) )  
		goto label_cond_5;
	try {
	//label_try_start_2:
	edits->reset();
label_cond_5:
	var8 = iter(src);
	//    .local v19, "iter":Landroid/icu/impl/CaseMapImpl$StringContextIterator;
	srcLength = src->length();
	//    .local v20, "srcLength":I
	prev = 0x0;
	//    .local v6, "prev":I
	isFirstIndex = 0x1;
	//    .local v18, "isFirstIndex":Z
label_goto_15:
	if ( prev >= srcLength )
		goto label_cond_15c;
	if ( !(isFirstIndex) )  
		goto label_cond_e1;
	isFirstIndex = 0x0;
	index = titleIter->first();
	//    .local v17, "index":I
label_goto_21:
	if ( index == -0x1 )
		goto label_cond_2c;
	if ( index <= srcLength )
		goto label_cond_2e;
label_cond_2c:
	index = srcLength;
label_cond_2e:
	if ( prev >= index )
		goto label_cond_100;
	//    .local v22, "titleStart":I
	iter->setLimit(index);
	//    .local v13, "c":I
	if ( ( options & 0x200) )     
		goto label_cond_6c;
	if ( android::icu::impl::UCaseProps::INSTANCE->getType(iter->nextCaseMapCP()) )     
		goto label_cond_6c;
label_cond_4d:
	c = iter->nextCaseMapCP();
	if ( c < 0 ) 
		goto label_cond_5b;
	if ( !(android::icu::impl::UCaseProps::INSTANCE->getType(c)) )  
		goto label_cond_4d;
label_cond_5b:
	titleStart = iter->getCPStart();
	android::icu::impl::CaseMapImpl::appendUnchanged(src, prev, (titleStart - prev), dest, options, edits);
label_cond_6c:
	if ( prev >= index )
		goto label_cond_100;
	titleLimit = iter->getCPLimit();
	//    .local v21, "titleLimit":I
	android::icu::impl::CaseMapImpl::appendResult(android::icu::impl::UCaseProps::INSTANCE->toFullTitle(c, iter, dest, caseLocale), dest, iter->getCPLength(), options, edits);
	if ( ( titleStart + 0x1) >= index )
		goto label_cond_e7;
	if ( caseLocale != 0x5 )
		goto label_cond_e7;
	c1 = src->charAt(titleStart);
	//    .local v14, "c1":C
	if ( c1 == 0x69 )
		goto label_cond_aa;
	if ( c1 != 0x49 )
		goto label_cond_104;
label_cond_aa:
	c2 = src->charAt(( titleStart + 0x1));
	//    .local v15, "c2":C
	if ( c2 != 0x6a )
		goto label_cond_117;
	dest->append(0x4a);
	if ( !(edits) )  
		goto label_cond_c6;
	edits->addReplace(0x1, 0x1);
label_cond_c6:
	titleLimit = ( titleLimit + 0x1);
	//    .end local v21    # "titleLimit":I
	//    .local v8, "titleLimit":I
	if ( android::icu::impl::CaseMapImpl::_assertionsDisabled )     
		goto label_cond_107;
	if ( iter->nextCaseMapCP() == c2 )
		goto label_cond_107;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 722    :try_end_d8
	// 723    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_d8} :catch_d8
	// 725    .line 349
	// 726    .end local v6    # "prev":I
	// 727    .end local v8    # "titleLimit":I
	// 728    .end local v13    # "c":I
	// 729    .end local v14    # "c1":C
	// 730    .end local v15    # "c2":C
	// 731    .end local v17    # "index":I
	// 732    .end local v18    # "isFirstIndex":Z
	// 733    .end local v19    # "iter":Landroid/icu/impl/CaseMapImpl$StringContextIterator;
	// 734    .end local v20    # "srcLength":I
	// 735    .end local v22    # "titleStart":I
label_catch_d8:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v16, "e":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 749    .line 266
	// 750    .end local v16    # "e":Ljava/io/IOException;
	// 751    .restart local v6    # "prev":I
	// 752    .restart local v18    # "isFirstIndex":Z
	// 753    .restart local v19    # "iter":Landroid/icu/impl/CaseMapImpl$StringContextIterator;
	// 754    .restart local v20    # "srcLength":I
label_cond_e1:
	try {
	//label_try_start_e1:
	//    .restart local v17    # "index":I
	goto label_goto_21;
	// 764    .restart local v13    # "c":I
	// 765    .restart local v21    # "titleLimit":I
	// 766    .restart local v22    # "titleStart":I
label_cond_e7:
	//    .end local v21    # "titleLimit":I
	//    .restart local v8    # "titleLimit":I
label_cond_e9:
label_goto_e9:
	if ( titleLimit >= index )
		goto label_cond_100;
	if ( ( options & 0x100) )     
		goto label_cond_14b;
	android::icu::impl::CaseMapImpl::internalToLower(caseLocale, options, iter, dest, edits);
	//    .end local v8    # "titleLimit":I
	//    .end local v13    # "c":I
	//    .end local v22    # "titleStart":I
label_cond_100:
label_goto_100:
	prev = index;
	goto label_goto_15;
	// 809    .restart local v13    # "c":I
	// 810    .restart local v14    # "c1":C
	// 811    .restart local v21    # "titleLimit":I
	// 812    .restart local v22    # "titleStart":I
label_cond_104:
	//    .end local v21    # "titleLimit":I
	//    .restart local v8    # "titleLimit":I
	goto label_goto_e9;
	// 821    .line 320
	// 822    .restart local v15    # "c2":C
label_cond_107:
	if ( android::icu::impl::CaseMapImpl::_assertionsDisabled )     
		goto label_cond_e9;
	if ( titleLimit == iter->getCPLimit() )
		goto label_cond_e9;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 840    .line 321
	// 841    .end local v8    # "titleLimit":I
	// 842    .restart local v21    # "titleLimit":I
label_cond_117:
	if ( c2 != 0x4a )
		goto label_cond_15d;
	android::icu::impl::CaseMapImpl::appendUnchanged(src, ( titleStart + 0x1), 0x1, dest, options, edits);
	titleLimit = ( titleLimit + 0x1);
	//    .end local v21    # "titleLimit":I
	//    .restart local v8    # "titleLimit":I
	if ( android::icu::impl::CaseMapImpl::_assertionsDisabled )     
		goto label_cond_13b;
	if ( iter->nextCaseMapCP() == c2 )
		goto label_cond_13b;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 886    .line 327
label_cond_13b:
	if ( android::icu::impl::CaseMapImpl::_assertionsDisabled )     
		goto label_cond_e9;
	if ( titleLimit == iter->getCPLimit() )
		goto label_cond_e9;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 904    .line 339
	// 905    .end local v14    # "c1":C
	// 906    .end local v15    # "c2":C
label_cond_14b:
	android::icu::impl::CaseMapImpl::appendUnchanged(src, titleLimit, (index - titleLimit), dest, options, edits);
	iter->moveToLimit();
	//label_try_end_15b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d8;
	}
	//    .catch Ljava/io/IOException; {:try_start_e1 .. :try_end_15b} :catch_d8
	goto label_goto_100;
	// 927    .line 348
	// 928    .end local v8    # "titleLimit":I
	// 929    .end local v13    # "c":I
	// 930    .end local v17    # "index":I
	// 931    .end local v22    # "titleStart":I
label_cond_15c:
	return dest;
	// 935    .restart local v13    # "c":I
	// 936    .restart local v14    # "c1":C
	// 937    .restart local v15    # "c2":C
	// 938    .restart local v17    # "index":I
	// 939    .restart local v21    # "titleLimit":I
	// 940    .restart local v22    # "titleStart":I
label_cond_15d:
	//    .end local v21    # "titleLimit":I
	//    .restart local v8    # "titleLimit":I
	goto label_goto_e9;

}
// .method public static toUpper(IILjava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::CaseMapImpl::toUpper(int caseLocale,int options,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::shared_ptr<android::icu::impl::CaseMapImpl_S_StringContextIterator> iter;
	int c;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "caseLocale"    # I
	//    .param p1, "options"    # I
	//    .param p2, "src"    # Ljava/lang/CharSequence;
	//    .param p4, "edits"    # Landroid/icu/text/Edits;
	//    .annotation system Ldalvik/annotation/Signature;
	// 956        value = {
	// 957            "<A::",
	// 958            "Ljava/lang/Appendable;",
	// 959            ">(II",
	// 960            "Ljava/lang/CharSequence;",
	// 961            "TA;",
	// 962            "Landroid/icu/text/Edits;",
	// 963            ")TA;"
	// 964        }
	// 965    .end annotation
	//    .local p3, "dest":Ljava/lang/Appendable;, "TA;"
	if ( !(edits) )  
		goto label_cond_5;
	try {
	//label_try_start_2:
	edits->reset();
label_cond_5:
	if ( caseLocale != 0x4 )
		goto label_cond_d;
	return android::icu::impl::CaseMapImpl_S_GreekUpper::-wrap0(options, src, dest, edits);
	// 989    .line 232
label_cond_d:
	iter = std::make_shared<android::icu::impl::CaseMapImpl_S_StringContextIterator>(src);
	//    .local v2, "iter":Landroid/icu/impl/CaseMapImpl$StringContextIterator;
label_goto_12:
	c = iter->nextCaseMapCP();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_2d;
	android::icu::impl::CaseMapImpl::appendResult(android::icu::impl::UCaseProps::INSTANCE->toFullUpper(c, iter, dest, caseLocale), dest, iter->getCPLength(), options, edits);
	//label_try_end_25:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_26;
	}
	//    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_25} :catch_26
	goto label_goto_12;
	// 1023    .line 239
	// 1024    .end local v0    # "c":I
	// 1025    .end local v2    # "iter":Landroid/icu/impl/CaseMapImpl$StringContextIterator;
label_catch_26:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 1037    .line 238
	// 1038    .end local v1    # "e":Ljava/io/IOException;
	// 1039    .restart local v0    # "c":I
	// 1040    .restart local v2    # "iter":Landroid/icu/impl/CaseMapImpl$StringContextIterator;
label_cond_2d:
	return dest;

}


