// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_Normalizer2WithImpl.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl_S_UTF16Plus.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.UCaseProps.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.Normalizer_S_CharsAppendable.h"
#include "android.icu.text.Normalizer_S_CmpEquivLevel.h"
#include "android.icu.text.Normalizer_S_FCDMode.h"
#include "android.icu.text.Normalizer_S_Mode.h"
#include "android.icu.text.Normalizer_S_ModeImpl.h"
#include "android.icu.text.Normalizer_S_NFCMode.h"
#include "android.icu.text.Normalizer_S_NFDMode.h"
#include "android.icu.text.Normalizer_S_NFKCMode.h"
#include "android.icu.text.Normalizer_S_NFKCModeImpl.h"
#include "android.icu.text.Normalizer_S_NFKDMode.h"
#include "android.icu.text.Normalizer_S_NONEMode.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.Normalizer.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.nio.CharBuffer.h"
#include "java.text.CharacterIterator.h"

static android::icu::text::Normalizer::COMPARE_CODE_POINT_ORDER = 0x8000;
static android::icu::text::Normalizer::COMPARE_EQUIV = 0x80000;
static android::icu::text::Normalizer::COMPARE_IGNORE_CASE = 0x10000;
static android::icu::text::Normalizer::COMPARE_NORM_OPTIONS_SHIFT = 0x14;
static android::icu::text::Normalizer::COMPOSE;
static android::icu::text::Normalizer::COMPOSE_COMPAT;
static android::icu::text::Normalizer::DECOMP;
static android::icu::text::Normalizer::DECOMP_COMPAT;
static android::icu::text::Normalizer::DEFAULT;
static android::icu::text::Normalizer::DONE = -0x1;
static android::icu::text::Normalizer::FCD;
static android::icu::text::Normalizer::FOLD_CASE_DEFAULT = 0x0;
static android::icu::text::Normalizer::FOLD_CASE_EXCLUDE_SPECIAL_I = 0x1;
static android::icu::text::Normalizer::IGNORE_HANGUL = 0x1;
static android::icu::text::Normalizer::INPUT_IS_FCD = 0x20000;
static android::icu::text::Normalizer::MAYBE;
static android::icu::text::Normalizer::NFC;
static android::icu::text::Normalizer::NFD;
static android::icu::text::Normalizer::NFKC;
static android::icu::text::Normalizer::NFKD;
static android::icu::text::Normalizer::NO;
static android::icu::text::Normalizer::NONE;
static android::icu::text::Normalizer::NO_OP;
static android::icu::text::Normalizer::UNICODE_3_2 = 0x20;
static android::icu::text::Normalizer::YES;
// .method static constructor <clinit>()V
void android::icu::text::Normalizer::static_cinit()
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_NONEMode> cVar0;
	std::shared_ptr<android::icu::text::Normalizer_S_NONEMode> cVar1;
	std::shared_ptr<android::icu::text::Normalizer_S_NFDMode> cVar2;
	std::shared_ptr<android::icu::text::Normalizer_S_NFKDMode> cVar3;
	std::shared_ptr<android::icu::text::Normalizer_S_NFCMode> cVar4;
	std::shared_ptr<android::icu::text::Normalizer_S_NFKCMode> cVar5;
	std::shared_ptr<android::icu::text::Normalizer_S_FCDMode> cVar6;
	std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> cVar7;
	std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> cVar8;
	std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> cVar9;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::text::Normalizer_S_NONEMode>(cVar0);
	android::icu::text::Normalizer::NONE = cVar1;
	cVar2 = std::make_shared<android::icu::text::Normalizer_S_NFDMode>(cVar0);
	android::icu::text::Normalizer::NFD = cVar2;
	cVar3 = std::make_shared<android::icu::text::Normalizer_S_NFKDMode>(cVar0);
	android::icu::text::Normalizer::NFKD = cVar3;
	cVar4 = std::make_shared<android::icu::text::Normalizer_S_NFCMode>(cVar0);
	android::icu::text::Normalizer::NFC = cVar4;
	android::icu::text::Normalizer::DEFAULT = android::icu::text::Normalizer::NFC;
	cVar5 = std::make_shared<android::icu::text::Normalizer_S_NFKCMode>(cVar0);
	android::icu::text::Normalizer::NFKC = cVar5;
	cVar6 = std::make_shared<android::icu::text::Normalizer_S_FCDMode>(cVar0);
	android::icu::text::Normalizer::FCD = cVar6;
	android::icu::text::Normalizer::NO_OP = android::icu::text::Normalizer::NONE;
	android::icu::text::Normalizer::COMPOSE = android::icu::text::Normalizer::NFC;
	android::icu::text::Normalizer::COMPOSE_COMPAT = android::icu::text::Normalizer::NFKC;
	android::icu::text::Normalizer::DECOMP = android::icu::text::Normalizer::NFD;
	android::icu::text::Normalizer::DECOMP_COMPAT = android::icu::text::Normalizer::NFKD;
	cVar7 = std::make_shared<android::icu::text::Normalizer_S_QuickCheckResult>(0x0, cVar0);
	android::icu::text::Normalizer::NO = cVar7;
	cVar8 = std::make_shared<android::icu::text::Normalizer_S_QuickCheckResult>(0x1, cVar0);
	android::icu::text::Normalizer::YES = cVar8;
	cVar9 = std::make_shared<android::icu::text::Normalizer_S_QuickCheckResult>(0x2, cVar0);
	android::icu::text::Normalizer::MAYBE = cVar9;
	return;

}
// .method public constructor <init>(Landroid/icu/text/UCharacterIterator;Landroid/icu/text/Normalizer$Mode;I)V
android::icu::text::Normalizer::Normalizer(std::shared_ptr<android::icu::text::UCharacterIterator> iter,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar2;
	std::shared_ptr<android::icu::text::UCharacterIterator> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "iter"    # Landroid/icu/text/UCharacterIterator;
	//    .param p2, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p3, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 272    .end annotation
	// 276    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	try {
	//label_try_start_3:
	cVar0 = iter->clone();
	cVar0->checkCast("android::icu::text::UCharacterIterator");
	this->text = cVar0;
	this->mode = mode;
	this->options = options;
	this->norm2 = mode->getNormalizer2(options);
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->buffer = cVar1;
	//label_try_end_1c:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_3 .. :try_end_1c} :catch_1d
	return;
	// 313    .line 629
label_catch_1d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar2 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/Normalizer$Mode;I)V
android::icu::text::Normalizer::Normalizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int opt)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p3, "opt"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 332    .end annotation
	// 336    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->text = android::icu::text::UCharacterIterator::getInstance(str);
	this->mode = mode;
	this->options = opt;
	this->norm2 = mode->getNormalizer2(opt);
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->buffer = cVar0;
	return;

}
// .method public constructor <init>(Ljava/text/CharacterIterator;Landroid/icu/text/Normalizer$Mode;I)V
android::icu::text::Normalizer::Normalizer(std::shared_ptr<java::text::CharacterIterator> iter,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int opt)
{
	
	std::shared_ptr<java::text::CharacterIterator> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "iter"    # Ljava/text/CharacterIterator;
	//    .param p2, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p3, "opt"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 375    .end annotation
	// 379    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = iter->clone();
	cVar0->checkCast("java::text::CharacterIterator");
	this->text = android::icu::text::UCharacterIterator::getInstance(cVar0);
	this->mode = mode;
	this->options = opt;
	this->norm2 = mode->getNormalizer2(opt);
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->buffer = cVar1;
	return;

}
// .method private clearBuffer()V
void android::icu::text::Normalizer::clearBuffer()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->buffer->setLength(cVar0);
	this->bufferPos = cVar0;
	return;

}
// .method static cmpEquivFold(Ljava/lang/CharSequence;Ljava/lang/CharSequence;I)I
int android::icu::text::Normalizer::cmpEquivFold(std::shared_ptr<java::lang::CharSequence> cs1,std::shared_ptr<java::lang::CharSequence> cs2,int options)
{
	
	int stack1;
	int stack2;
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<android::icu::impl::UCaseProps> csp;
	std::shared_ptr<java::lang::StringBuilder> fold1;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int s1;
	int limit1;
	int s2;
	int limit2;
	int level2;
	int level1;
	int c2;
	int c1;
	char c;
	int cp1;
	int cp2;
	int length;
	auto stack1;
	std::shared_ptr<java::lang::Object> cs1;
	auto stack2;
	std::shared_ptr<java::lang::Object> cs2;
	std::shared_ptr<java::lang::String> decomp1;
	std::shared_ptr<java::lang::String> decomp2;
	std::shared_ptr<java::lang::CharSequence> cVar3;
	std::shared_ptr<java::lang::CharSequence> cVar2;
	
	//    .param p0, "cs1"    # Ljava/lang/CharSequence;
	//    .param p1, "cs2"    # Ljava/lang/CharSequence;
	//    .param p2, "options"    # I
	stack1 = 0x0;
	//    .local v24, "stack1":[Landroid/icu/text/Normalizer$CmpEquivLevel;
	stack2 = 0x0;
	//    .local v25, "stack2":[Landroid/icu/text/Normalizer$CmpEquivLevel;
	if ( !((0x80000 & options)) )  
		goto label_cond_5b;
	cVar0 = android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl;
label_goto_14:
	if ( !((0x10000 & options)) )  
		goto label_cond_5e;
	csp = android::icu::impl::UCaseProps::INSTANCE;
	//    .local v7, "csp":Landroid/icu/impl/UCaseProps;
	fold1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v10, "fold1":Ljava/lang/StringBuilder;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .end local v7    # "csp":Landroid/icu/impl/UCaseProps;
	//    .end local v10    # "fold1":Ljava/lang/StringBuilder;
label_goto_26:
	s1 = 0x0;
	//    .local v20, "s1":I
	limit1 = cs1->length();
	//    .local v17, "limit1":I
	s2 = 0x0;
	//    .local v22, "s2":I
	limit2 = cs2->length();
	//    .local v18, "limit2":I
	level2 = 0x0;
	//    .local v15, "level2":I
	level1 = 0x0;
	//    .local v13, "level1":I
	c2 = -0x1;
	//    .local v4, "c2":I
	c1 = -0x1;
	//    .end local v24    # "stack1":[Landroid/icu/text/Normalizer$CmpEquivLevel;
	//    .end local v25    # "stack2":[Landroid/icu/text/Normalizer$CmpEquivLevel;
	//    .local v3, "c1":I
label_goto_36:
	if ( c1 >= 0 )
		goto label_cond_45;
label_goto_38:
	s1 = s1;
	//    .end local v20    # "s1":I
	//    .local v21, "s1":I
	if ( s1 != limit1 )
		goto label_cond_62;
	if ( level1 )     
		goto label_cond_6d;
	c1 = -0x1;
	s1 = s1;
	//    .end local v21    # "s1":I
	//    .restart local v20    # "s1":I
label_cond_45:
label_goto_45:
	if ( c2 >= 0 )
		goto label_cond_54;
label_goto_47:
	s2 = s2;
	//    .end local v22    # "s2":I
	//    .local v23, "s2":I
	if ( s2 != limit2 )
		goto label_cond_86;
	if ( level2 )     
		goto label_cond_91;
	c2 = -0x1;
	s2 = s2;
	//    .end local v23    # "s2":I
	//    .restart local v22    # "s2":I
label_cond_54:
label_goto_54:
	if ( c1 != c2 )
		goto label_cond_ad;
	if ( c1 >= 0 )
		goto label_cond_aa;
	return 0x0;
	// 596    .line 2198
	// 597    .end local v3    # "c1":I
	// 598    .end local v4    # "c2":I
	// 599    .end local v13    # "level1":I
	// 600    .end local v15    # "level2":I
	// 601    .end local v17    # "limit1":I
	// 602    .end local v18    # "limit2":I
	// 603    .end local v20    # "s1":I
	// 604    .end local v22    # "s2":I
	// 605    .restart local v24    # "stack1":[Landroid/icu/text/Normalizer$CmpEquivLevel;
	// 606    .restart local v25    # "stack2":[Landroid/icu/text/Normalizer$CmpEquivLevel;
label_cond_5b:
	0x0;
	//    .local v19, "nfcImpl":Landroid/icu/impl/Normalizer2Impl;
	goto label_goto_14;
	// 613    .line 2205
	// 614    .end local v19    # "nfcImpl":Landroid/icu/impl/Normalizer2Impl;
label_cond_5e:
	0x0;
	//    .local v7, "csp":Landroid/icu/impl/UCaseProps;
	0x0;
	//    .local v11, "fold2":Ljava/lang/StringBuilder;
	0x0;
	//    .local v10, "fold1":Ljava/lang/StringBuilder;
	goto label_goto_26;
	// 628    .line 2234
	// 629    .end local v7    # "csp":Landroid/icu/impl/UCaseProps;
	// 630    .end local v10    # "fold1":Ljava/lang/StringBuilder;
	// 631    .end local v11    # "fold2":Ljava/lang/StringBuilder;
	// 632    .end local v24    # "stack1":[Landroid/icu/text/Normalizer$CmpEquivLevel;
	// 633    .end local v25    # "stack2":[Landroid/icu/text/Normalizer$CmpEquivLevel;
	// 634    .restart local v3    # "c1":I
	// 635    .restart local v4    # "c2":I
	// 636    .restart local v13    # "level1":I
	// 637    .restart local v15    # "level2":I
	// 638    .restart local v17    # "limit1":I
	// 639    .restart local v18    # "limit2":I
	// 640    .restart local v21    # "s1":I
	// 641    .restart local v22    # "s2":I
label_cond_62:
	s1 = ( s1 + 0x1);
	//    .end local v21    # "s1":I
	//    .restart local v20    # "s1":I
	c1 = cs1->charAt(s1);
	goto label_goto_45;
	// 658    .line 2240
	// 659    .end local v20    # "s1":I
	// 660    .restart local v21    # "s1":I
label_cond_6d:
	level1 = ( level1 + -0x1);
	cVar2 = stack1[level1]->cs;
	if ( !(cVar2) )  
		goto label_cond_6d;
	s1 = stack1[level1]->s;
	//    .end local v21    # "s1":I
	//    .restart local v20    # "s1":I
	limit1 = cVar2->length();
	goto label_goto_38;
	// 694    .line 2257
	// 695    .end local v22    # "s2":I
	// 696    .restart local v23    # "s2":I
label_cond_86:
	s2 = ( s2 + 0x1);
	//    .end local v23    # "s2":I
	//    .restart local v22    # "s2":I
	c2 = cs2->charAt(s2);
	goto label_goto_54;
	// 713    .line 2263
	// 714    .end local v22    # "s2":I
	// 715    .restart local v23    # "s2":I
label_cond_91:
	level2 = ( level2 + -0x1);
	cVar3 = stack2[level2]->cs;
	if ( !(cVar3) )  
		goto label_cond_91;
	s2 = stack2[level2]->s;
	//    .end local v23    # "s2":I
	//    .restart local v22    # "s2":I
	limit2 = cVar3->length();
	goto label_goto_47;
	// 749    .line 2279
label_cond_aa:
	c2 = -0x1;
	c1 = -0x1;
	goto label_goto_36;
	// 758    .line 2281
label_cond_ad:
	if ( c1 >= 0 )
		goto label_cond_b2;
	return -0x1;
	// 767    .line 2283
label_cond_b2:
	if ( c2 >= 0 )
		goto label_cond_b7;
	return 0x1;
	// 776    .line 2289
label_cond_b7:
	c1;
	//    .local v5, "cp1":I
	if ( !(android::icu::text::UTF16::isSurrogate((char)(c1))) )  
		goto label_cond_e4;
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c1)) )  
		goto label_cond_16e;
	if ( s1 == limit1 )
		goto label_cond_e4;
	c = cs1->charAt(s1);
	//    .local v2, "c":C
	if ( !(java::lang::Character::isLowSurrogate(c)) )  
		goto label_cond_e4;
	cp1 = java::lang::Character::toCodePoint((char)(c1), c);
	//    .end local v2    # "c":C
label_cond_e4:
label_goto_e4:
	c2;
	//    .local v6, "cp2":I
	if ( !(android::icu::text::UTF16::isSurrogate((char)(c2))) )  
		goto label_cond_111;
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c2)) )  
		goto label_cond_18d;
	if ( s2 == limit2 )
		goto label_cond_111;
	c = cs2->charAt(s2);
	//    .restart local v2    # "c":C
	if ( !(java::lang::Character::isLowSurrogate(c)) )  
		goto label_cond_111;
	cp2 = java::lang::Character::toCodePoint((char)(c2), c);
	//    .end local v2    # "c":C
label_cond_111:
label_goto_111:
	if ( level1 )     
		goto label_cond_1c5;
	if ( !((0x10000 & options)) )  
		goto label_cond_1c5;
	length = csp->toFullFolding(cp1, fold1, options);
	//    .local v12, "length":I
	if ( length < 0 ) 
		goto label_cond_1c5;
	if ( !(android::icu::text::UTF16::isSurrogate((char)(c1))) )  
		goto label_cond_132;
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c1)) )  
		goto label_cond_1ac;
	s1 = ( s1 + 0x1);
label_cond_132:
label_goto_132:
	if ( stack1 )     
		goto label_cond_138;
	stack1 = android::icu::text::Normalizer::createCmpEquivLevelStack({const[class].FS-Param});
label_cond_138:
	stack1[0x0]->cs = cs1;
	stack1[0x0]->s = s1;
	level1 = ( level1 + 0x1);
	if ( length >  0x1f )
		goto label_cond_1ba;
	fold1->delete(0x0, (fold1->length() - length));
label_goto_163:
	cs1 = fold1;
	s1 = 0x0;
	limit1 = fold1->length();
	c1 = -0x1;
	goto label_goto_36;
	// 1009    .line 2299
	// 1010    .end local v6    # "cp2":I
	// 1011    .end local v12    # "length":I
label_cond_16e:
	if ( ( s1 + -0x2) < 0 ) 
		goto label_cond_e4;
	c = cs1->charAt(( s1 + -0x2));
	//    .restart local v2    # "c":C
	if ( !(java::lang::Character::isHighSurrogate(c)) )  
		goto label_cond_e4;
	java::lang::Character::toCodePoint(c, (char)(c1));
	goto label_goto_e4;
	// 1047    .line 2315
	// 1048    .end local v2    # "c":C
	// 1049    .restart local v6    # "cp2":I
label_cond_18d:
	if ( ( s2 + -0x2) < 0 ) 
		goto label_cond_111;
	c = cs2->charAt(( s2 + -0x2));
	//    .restart local v2    # "c":C
	if ( !(java::lang::Character::isHighSurrogate(c)) )  
		goto label_cond_111;
	java::lang::Character::toCodePoint(c, (char)(c2));
	goto label_goto_111;
	// 1085    .line 2342
	// 1086    .end local v2    # "c":C
	// 1087    .restart local v12    # "length":I
label_cond_1ac:
	s2 = ( s2 + -0x1);
	c2 = cs2->charAt(( s2 + -0x1));
	goto label_goto_132;
	// 1104    .line 2360
label_cond_1ba:
	fold1->setLength(0x0);
	fold1->appendCodePoint(length);
	goto label_goto_163;
	// 1117    .line 2374
	// 1118    .end local v12    # "length":I
label_cond_1c5:
	if ( level2 )     
		goto label_cond_23a;
	if ( !((0x10000 & options)) )  
		goto label_cond_23a;
	length = csp->toFullFolding(cp2, cVar1, options);
	//    .restart local v12    # "length":I
	if ( length < 0 ) 
		goto label_cond_23a;
	if ( !(android::icu::text::UTF16::isSurrogate((char)(c2))) )  
		goto label_cond_1e6;
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c2)) )  
		goto label_cond_222;
	s2 = ( s2 + 0x1);
label_cond_1e6:
label_goto_1e6:
	if ( stack2 )     
		goto label_cond_1ec;
	stack2 = android::icu::text::Normalizer::createCmpEquivLevelStack({const[class].FS-Param});
label_cond_1ec:
	stack2[0x0]->cs = cs2;
	stack2[0x0]->s = s2;
	level2 = ( level2 + 0x1);
	if ( length >  0x1f )
		goto label_cond_22f;
	cVar1->delete(0x0, (cVar1->length() - length));
label_goto_217:
	cs2 = cVar1;
	s2 = 0x0;
	limit2 = cVar1->length();
	c2 = -0x1;
	goto label_goto_36;
	// 1235    .line 2390
label_cond_222:
	s1 = ( s1 + -0x1);
	c1 = cs1->charAt(( s1 + -0x1));
	goto label_goto_1e6;
	// 1252    .line 2408
label_cond_22f:
	cVar1->setLength(0x0);
	cVar1->appendCodePoint(length);
	goto label_goto_217;
	// 1265    .line 2422
	// 1266    .end local v12    # "length":I
label_cond_23a:
	if ( level1 >= 0x2 )
		goto label_cond_2a2;
	if ( !((0x80000 & options)) )  
		goto label_cond_2a2;
	decomp1 = cVar0->getDecomposition(cp1);
	//    .local v8, "decomp1":Ljava/lang/String;
	if ( !(decomp1) )  
		goto label_cond_2a2;
	if ( !(android::icu::text::UTF16::isSurrogate((char)(c1))) )  
		goto label_cond_25f;
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c1)) )  
		goto label_cond_295;
	s1 = ( s1 + 0x1);
label_cond_25f:
label_goto_25f:
	if ( stack1 )     
		goto label_cond_265;
	stack1 = android::icu::text::Normalizer::createCmpEquivLevelStack({const[class].FS-Param});
label_cond_265:
	stack1[level1]->cs = cs1;
	stack1[level1]->s = s1;
	level1 = ( level1 + 0x1);
	if ( level1 >= 0x2 )
		goto label_cond_28a;
	level1 = ( level1 + 0x1);
	//    .end local v13    # "level1":I
	//    .local v14, "level1":I
	stack1[level1]->cs = 0x0;
	level1 = level1;
	//    .end local v14    # "level1":I
	//    .restart local v13    # "level1":I
label_cond_28a:
	cs1 = decomp1;
	s1 = 0x0;
	limit1 = decomp1->length();
	c1 = -0x1;
	goto label_goto_36;
	// 1387    .line 2438
label_cond_295:
	s2 = ( s2 + -0x1);
	c2 = cs2->charAt(( s2 + -0x1));
	goto label_goto_25f;
	// 1404    .line 2466
	// 1405    .end local v8    # "decomp1":Ljava/lang/String;
label_cond_2a2:
	if ( level2 >= 0x2 )
		goto label_cond_30b;
	if ( !((0x80000 & options)) )  
		goto label_cond_30b;
	decomp2 = cVar0->getDecomposition(cp2);
	//    .local v9, "decomp2":Ljava/lang/String;
	if ( !(decomp2) )  
		goto label_cond_30b;
	if ( !(android::icu::text::UTF16::isSurrogate((char)(c2))) )  
		goto label_cond_2c7;
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c2)) )  
		goto label_cond_2fe;
	s2 = ( s2 + 0x1);
label_cond_2c7:
label_goto_2c7:
	if ( stack2 )     
		goto label_cond_2cd;
	stack2 = android::icu::text::Normalizer::createCmpEquivLevelStack({const[class].FS-Param});
label_cond_2cd:
	stack2[level2]->cs = cs2;
	stack2[level2]->s = s2;
	level2 = ( level2 + 0x1);
	if ( level2 >= 0x2 )
		goto label_cond_2f3;
	level2 = ( level2 + 0x1);
	//    .end local v15    # "level2":I
	//    .local v16, "level2":I
	stack2[level2]->cs = 0x0;
	level2 = level2;
	//    .end local v16    # "level2":I
	//    .restart local v15    # "level2":I
label_cond_2f3:
	cs2 = decomp2;
	s2 = 0x0;
	limit2 = decomp2->length();
	c2 = -0x1;
	goto label_goto_36;
	// 1526    .line 2482
label_cond_2fe:
	s1 = ( s1 + -0x1);
	c1 = cs1->charAt(( s1 + -0x1));
	goto label_goto_2c7;
	// 1543    .line 2527
	// 1544    .end local v9    # "decomp2":Ljava/lang/String;
label_cond_30b:
	if ( c1 <  0xd800 )
		goto label_cond_390;
	if ( c2 <  0xd800 )
		goto label_cond_390;
	if ( !((0x8000 & options)) )  
		goto label_cond_390;
	if ( c1 >  0xdbff )
		goto label_cond_33b;
	if ( s1 == limit1 )
		goto label_cond_33b;
	if ( java::lang::Character::isLowSurrogate(cs1->charAt(s1)) )     
		goto label_cond_358;
label_cond_33b:
	if ( !(java::lang::Character::isLowSurrogate((char)(c1))) )  
		goto label_cond_393;
	if ( !(( s1 + -0x1)) )  
		goto label_cond_393;
	if ( !(java::lang::Character::isHighSurrogate(cs1->charAt(( s1 + -0x2)))) )  
		goto label_cond_393;
label_cond_358:
label_goto_358:
	if ( c2 >  0xdbff )
		goto label_cond_373;
	if ( s2 == limit2 )
		goto label_cond_373;
	if ( java::lang::Character::isLowSurrogate(cs2->charAt(s2)) )     
		goto label_cond_390;
label_cond_373:
	if ( !(java::lang::Character::isLowSurrogate((char)(c2))) )  
		goto label_cond_396;
	if ( !(( s2 + -0x1)) )  
		goto label_cond_396;
	if ( !(java::lang::Character::isHighSurrogate(cs2->charAt(( s2 + -0x2)))) )  
		goto label_cond_396;
label_cond_390:
label_goto_390:
	return (c1 - c2);
	// 1693    .line 2536
label_cond_393:
	c1 = ( c1 + -0x2800);
	goto label_goto_358;
	// 1699    .line 2546
label_cond_396:
	c2 = ( c2 + -0x2800);
	goto label_goto_390;

}
// .method public static compare(III)I
int android::icu::text::Normalizer::compare(int char32a,int char32b,int options)
{
	
	//    .param p0, "char32a"    # I
	//    .param p1, "char32b"    # I
	//    .param p2, "options"    # I
	return android::icu::text::Normalizer::internalCompare(android::icu::text::UTF16::valueOf(char32a), android::icu::text::UTF16::valueOf(char32b), (0x20000 |  options));

}
// .method public static compare(ILjava/lang/String;I)I
int android::icu::text::Normalizer::compare(int char32a,std::shared_ptr<java::lang::String> str2,int options)
{
	
	//    .param p0, "char32a"    # I
	//    .param p1, "str2"    # Ljava/lang/String;
	//    .param p2, "options"    # I
	return android::icu::text::Normalizer::internalCompare(android::icu::text::UTF16::valueOf(char32a), str2, options);

}
// .method public static compare(Ljava/lang/String;Ljava/lang/String;I)I
int android::icu::text::Normalizer::compare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2,int options)
{
	
	//    .param p0, "s1"    # Ljava/lang/String;
	//    .param p1, "s2"    # Ljava/lang/String;
	//    .param p2, "options"    # I
	return android::icu::text::Normalizer::internalCompare(s1, s2, options);

}
// .method public static compare([CII[CIII)I
int android::icu::text::Normalizer::compare(std::shared_ptr<char[]> s1,int s1Start,int s1Limit,std::shared_ptr<char[]> s2,int s2Start,int s2Limit,int options)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "s1"    # [C
	//    .param p1, "s1Start"    # I
	//    .param p2, "s1Limit"    # I
	//    .param p3, "s2"    # [C
	//    .param p4, "s2Start"    # I
	//    .param p5, "s2Limit"    # I
	//    .param p6, "options"    # I
	if ( !(s1) )  
		goto label_cond_4;
	if ( s1Start >= 0 )
		goto label_cond_a;
label_cond_4:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 1791    .line 1184
label_cond_a:
	if ( s1Limit < 0 ) 
		goto label_cond_4;
	if ( !(s2) )  
		goto label_cond_4;
	if ( s2Start < 0 ) 
		goto label_cond_4;
	if ( s2Limit < 0 ) 
		goto label_cond_4;
	if ( s1Limit <  s1Start )
		goto label_cond_4;
	if ( s2Limit <  s2Start )
		goto label_cond_4;
	return android::icu::text::Normalizer::internalCompare(java::nio::CharBuffer::wrap(s1, s1Start, (s1Limit - s1Start)), java::nio::CharBuffer::wrap(s2, s2Start, (s2Limit - s2Start)), options);

}
// .method public static compare([C[CI)I
int android::icu::text::Normalizer::compare(std::shared_ptr<char[]> s1,std::shared_ptr<char[]> s2,int options)
{
	
	//    .param p0, "s1"    # [C
	//    .param p1, "s2"    # [C
	//    .param p2, "options"    # I
	return android::icu::text::Normalizer::internalCompare(java::nio::CharBuffer::wrap(s1), java::nio::CharBuffer::wrap(s2), options);

}
// .method public static compose([CII[CIIZI)I
int android::icu::text::Normalizer::compose(std::shared_ptr<char[]> src,int srcStart,int srcLimit,std::shared_ptr<char[]> dest,int destStart,int destLimit,bool compat,int options)
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_CharsAppendable> app;
	
	//    .param p0, "src"    # [C
	//    .param p1, "srcStart"    # I
	//    .param p2, "srcLimit"    # I
	//    .param p3, "dest"    # [C
	//    .param p4, "destStart"    # I
	//    .param p5, "destLimit"    # I
	//    .param p6, "compat"    # Z
	//    .param p7, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1863    .end annotation
	//    .local v1, "srcBuffer":Ljava/nio/CharBuffer;
	app = std::make_shared<android::icu::text::Normalizer_S_CharsAppendable>(dest, destStart, destLimit);
	//    .local v0, "app":Landroid/icu/text/Normalizer$CharsAppendable;
	android::icu::text::Normalizer::getComposeNormalizer2(compat, options)->normalize(java::nio::CharBuffer::wrap(src, srcStart, (srcLimit - srcStart)), app);
	return app->length();

}
// .method public static compose([C[CZI)I
int android::icu::text::Normalizer::compose(std::shared_ptr<char[]> source,std::shared_ptr<char[]> target,bool compat,int options)
{
	
	int cVar0;
	
	//    .param p0, "source"    # [C
	//    .param p1, "target"    # [C
	//    .param p2, "compat"    # Z
	//    .param p3, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1902    .end annotation
	cVar0 = 0x0;
	return android::icu::text::Normalizer::compose(source, cVar0, source->size(), target, cVar0, target->size(), compat, options);

}
// .method public static compose(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::compose(std::shared_ptr<java::lang::String> str,bool compat)
{
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "compat"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1934    .end annotation
	return android::icu::text::Normalizer::compose(str, compat, 0x0);

}
// .method public static compose(Ljava/lang/String;ZI)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::compose(std::shared_ptr<java::lang::String> str,bool compat,int options)
{
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "compat"    # Z
	//    .param p2, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1953    .end annotation
	return android::icu::text::Normalizer::getComposeNormalizer2(compat, options)->normalize(str);

}
// .method public static concatenate([CII[CII[CIILandroid/icu/text/Normalizer$Mode;I)I
int android::icu::text::Normalizer::concatenate(std::shared_ptr<char[]> left,int leftStart,int leftLimit,std::shared_ptr<char[]> right,int rightStart,int rightLimit,std::shared_ptr<char[]> dest,int destStart,int destLimit,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> destBuilder;
	int destLength;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	
	//    .param p0, "left"    # [C
	//    .param p1, "leftStart"    # I
	//    .param p2, "leftLimit"    # I
	//    .param p3, "right"    # [C
	//    .param p4, "rightStart"    # I
	//    .param p5, "rightLimit"    # I
	//    .param p6, "dest"    # [C
	//    .param p7, "destStart"    # I
	//    .param p8, "destLimit"    # I
	//    .param p9, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p10, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1982    .end annotation
	if ( dest )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 1995    .line 1352
label_cond_8:
	if ( right != dest )
		goto label_cond_17;
	if ( rightStart >= destLimit )
		goto label_cond_17;
	if ( destStart >= rightLimit )
		goto label_cond_17;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("overlapping right and dst ranges")));
	// throw
	throw cVar1;
	// 2012    .line 1357
label_cond_17:
	destBuilder = std::make_shared<java::lang::StringBuilder>(( (((leftLimit - leftStart) +  rightLimit) -  rightStart) + 0x10));
	//    .local v0, "destBuilder":Ljava/lang/StringBuilder;
	destBuilder->append(left, leftStart, (leftLimit - leftStart));
	//    .local v2, "rightBuffer":Ljava/nio/CharBuffer;
	mode->getNormalizer2(options)->append(destBuilder, java::nio::CharBuffer::wrap(right, rightStart, (rightLimit - rightStart)));
	destLength = destBuilder->length();
	//    .local v1, "destLength":I
	if ( destLength >  (destLimit - destStart) )
		goto label_cond_41;
	destBuilder->getChars(0x0, destLength, dest, destStart);
	return destLength;
	// 2066    .line 1366
label_cond_41:
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>(java::lang::Integer::toString(destLength));
	// throw
	throw cVar2;

}
// .method public static concatenate(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/Normalizer$Mode;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::concatenate(std::shared_ptr<java::lang::String> left,std::shared_ptr<java::lang::String> right,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "left"    # Ljava/lang/String;
	//    .param p1, "right"    # Ljava/lang/String;
	//    .param p2, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p3, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2086    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>(( (left->length() +  right->length()) + 0x10));
	//    .local v0, "dest":Ljava/lang/StringBuilder;
	return mode->getNormalizer2(options)->append(cVar0->append(left), right)->toString();

}
// .method public static concatenate([C[CLandroid/icu/text/Normalizer$Mode;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::concatenate(std::shared_ptr<char[]> left,std::shared_ptr<char[]> right,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "left"    # [C
	//    .param p1, "right"    # [C
	//    .param p2, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p3, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2134    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>(( (left->size() +  right->size()) + 0x10));
	//    .local v0, "dest":Ljava/lang/StringBuilder;
	return mode->getNormalizer2(options)->append(cVar0->append(left), java::nio::CharBuffer::wrap(right))->toString();

}
// .method private static final createCmpEquivLevelStack()[Landroid/icu/text/Normalizer$CmpEquivLevel;
std::shared_ptr<android::icu::text::Normalizer_S_CmpEquivLevel> android::icu::text::Normalizer::createCmpEquivLevelStack()
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_CmpEquivLevel> cVar0;
	std::shared<std::vector<std::vector<android::icu::text::Normalizer_S_CmpEquivLevel>>> cVar1;
	std::shared_ptr<android::icu::text::Normalizer_S_CmpEquivLevel> cVar2;
	std::shared_ptr<android::icu::text::Normalizer_S_CmpEquivLevel> cVar3;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<std::vector<std::vector<android::icu::text::Normalizer_S_CmpEquivLevel>>>(0x2);
	cVar2 = std::make_shared<android::icu::text::Normalizer_S_CmpEquivLevel>(cVar0);
	cVar1[0x0] = cVar2;
	cVar3 = std::make_shared<android::icu::text::Normalizer_S_CmpEquivLevel>(cVar0);
	cVar1[0x1] = cVar3;
	return cVar1;

}
// .method public static decompose([CII[CIIZI)I
int android::icu::text::Normalizer::decompose(std::shared_ptr<char[]> src,int srcStart,int srcLimit,std::shared_ptr<char[]> dest,int destStart,int destLimit,bool compat,int options)
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_CharsAppendable> app;
	
	//    .param p0, "src"    # [C
	//    .param p1, "srcStart"    # I
	//    .param p2, "srcLimit"    # I
	//    .param p3, "dest"    # [C
	//    .param p4, "destStart"    # I
	//    .param p5, "destLimit"    # I
	//    .param p6, "compat"    # Z
	//    .param p7, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2218    .end annotation
	//    .local v1, "srcBuffer":Ljava/nio/CharBuffer;
	app = std::make_shared<android::icu::text::Normalizer_S_CharsAppendable>(dest, destStart, destLimit);
	//    .local v0, "app":Landroid/icu/text/Normalizer$CharsAppendable;
	android::icu::text::Normalizer::getDecomposeNormalizer2(compat, options)->normalize(java::nio::CharBuffer::wrap(src, srcStart, (srcLimit - srcStart)), app);
	return app->length();

}
// .method public static decompose([C[CZI)I
int android::icu::text::Normalizer::decompose(std::shared_ptr<char[]> source,std::shared_ptr<char[]> target,bool compat,int options)
{
	
	int cVar0;
	
	//    .param p0, "source"    # [C
	//    .param p1, "target"    # [C
	//    .param p2, "compat"    # Z
	//    .param p3, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2257    .end annotation
	cVar0 = 0x0;
	return android::icu::text::Normalizer::decompose(source, cVar0, source->size(), target, cVar0, target->size(), compat, options);

}
// .method public static decompose(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::decompose(std::shared_ptr<java::lang::String> str,bool compat)
{
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "compat"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2289    .end annotation
	return android::icu::text::Normalizer::decompose(str, compat, 0x0);

}
// .method public static decompose(Ljava/lang/String;ZI)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::decompose(std::shared_ptr<java::lang::String> str,bool compat,int options)
{
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "compat"    # Z
	//    .param p2, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2308    .end annotation
	return android::icu::text::Normalizer::getDecomposeNormalizer2(compat, options)->normalize(str);

}
// .method private static final getComposeNormalizer2(ZI)Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer::getComposeNormalizer2(bool compat,int options)
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_Mode> cVar0;
	
	//    .param p0, "compat"    # Z
	//    .param p1, "options"    # I
	if ( !(compat) )  
		goto label_cond_9;
	cVar0 = android::icu::text::Normalizer::NFKC;
label_goto_4:
	return cVar0->getNormalizer2(options);
label_cond_9:
	cVar0 = android::icu::text::Normalizer::NFC;
	goto label_goto_4;

}
// .method private static final getDecomposeNormalizer2(ZI)Landroid/icu/text/Normalizer2;
std::shared_ptr<android::icu::text::Normalizer2> android::icu::text::Normalizer::getDecomposeNormalizer2(bool compat,int options)
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_Mode> cVar0;
	
	//    .param p0, "compat"    # Z
	//    .param p1, "options"    # I
	if ( !(compat) )  
		goto label_cond_9;
	cVar0 = android::icu::text::Normalizer::NFKD;
label_goto_4:
	return cVar0->getNormalizer2(options);
label_cond_9:
	cVar0 = android::icu::text::Normalizer::NFD;
	goto label_goto_4;

}
// .method public static getFC_NFKC_Closure(I[C)I
int android::icu::text::Normalizer::getFC_NFKC_Closure(int c,std::shared_ptr<char[]> dest)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> closure;
	int length;
	
	//    .param p0, "c"    # I
	//    .param p1, "dest"    # [C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2376    .end annotation
	cVar0 = 0x0;
	closure = android::icu::text::Normalizer::getFC_NFKC_Closure(c);
	//    .local v0, "closure":Ljava/lang/String;
	length = closure->length();
	//    .local v1, "length":I
	if ( !(length) )  
		goto label_cond_13;
	if ( !(dest) )  
		goto label_cond_13;
	if ( length >  dest->size() )
		goto label_cond_13;
	closure->getChars(cVar0, length, dest, cVar0);
label_cond_13:
	return length;

}
// .method public static getFC_NFKC_Closure(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::getFC_NFKC_Closure(int c)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::Normalizer2> nfkc;
	std::shared_ptr<java::lang::StringBuilder> folded;
	int folded1Length;
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl> cVar1;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> nfkcImpl;
	std::shared_ptr<java::lang::String> kc1;
	std::shared_ptr<java::lang::Object> kc2;
	
	//    .param p0, "c"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2414    .end annotation
	cVar0 = 0x0;
	nfkc = android::icu::text::Normalizer_S_ModeImpl::-get0(android::icu::text::Normalizer_S_NFKCModeImpl::-get0({const[class].FS-Param}));
	//    .local v5, "nfkc":Landroid/icu/text/Normalizer2;
	//    .local v0, "csp":Landroid/icu/impl/UCaseProps;
	folded = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "folded":Ljava/lang/StringBuilder;
	folded1Length = android::icu::impl::UCaseProps::INSTANCE->toFullFolding(c, folded, cVar0);
	//    .local v2, "folded1Length":I
	if ( folded1Length >= 0 )
		goto label_cond_42;
	cVar1 = nfkc;
	cVar1->checkCast("android::icu::impl::Norm2AllModes_S_Normalizer2WithImpl");
	nfkcImpl = cVar1->impl;
	//    .local v6, "nfkcImpl":Landroid/icu/impl/Normalizer2Impl;
	if ( !(nfkcImpl->getCompQuickCheck(nfkcImpl->getNorm16(c))) )  
		goto label_cond_29;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 2472    .line 1484
label_cond_29:
	folded->appendCodePoint(c);
	//    .end local v6    # "nfkcImpl":Landroid/icu/impl/Normalizer2Impl;
label_cond_2c:
label_goto_2c:
	kc1 = nfkc->normalize(folded);
	//    .local v3, "kc1":Ljava/lang/String;
	kc2 = nfkc->normalize(android::icu::lang::UCharacter::foldCase(kc1, cVar0));
	//    .local v4, "kc2":Ljava/lang/String;
	if ( !(kc1->equals(kc2)) )  
		goto label_cond_4a;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 2507    .line 1486
	// 2508    .end local v3    # "kc1":Ljava/lang/String;
	// 2509    .end local v4    # "kc2":Ljava/lang/String;
label_cond_42:
	if ( folded1Length <= 0x1f )
		goto label_cond_2c;
	folded->appendCodePoint(folded1Length);
	goto label_goto_2c;
	// 2520    .line 1497
	// 2521    .restart local v3    # "kc1":Ljava/lang/String;
	// 2522    .restart local v4    # "kc2":Ljava/lang/String;
label_cond_4a:
	return kc2;

}
// .method private static internalCompare(Ljava/lang/CharSequence;Ljava/lang/CharSequence;I)I
int android::icu::text::Normalizer::internalCompare(std::shared_ptr<java::lang::CharSequence> cVar3,std::shared_ptr<java::lang::CharSequence> cVar5,int options)
{
	
	int cVar0;
	int normOptions;
	int cVar1;
	std::shared_ptr<android::icu::text::Normalizer2> n2;
	int spanQCYes1;
	int spanQCYes2;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::CharSequence> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::CharSequence> cVar5;
	
	//    .param p0, "s1"    # Ljava/lang/CharSequence;
	//    .param p1, "s2"    # Ljava/lang/CharSequence;
	//    .param p2, "options"    # I
	cVar0 = 0x0;
	normOptions = _ushri(options,0x14);
	//    .local v3, "normOptions":I
	cVar1 = (options |  0x80000);
	if ( !((0x20000 &  cVar1)) )  
		goto label_cond_f;
	if ( !(( cVar1 & 0x1)) )  
		goto label_cond_63;
label_cond_f:
	if ( !(( cVar1 & 0x1)) )  
		goto label_cond_68;
	n2 = android::icu::text::Normalizer::NFD->getNormalizer2(normOptions);
	//    .local v2, "n2":Landroid/icu/text/Normalizer2;
label_goto_19:
	spanQCYes1 = n2->spanQuickCheckYes(cVar3);
	//    .local v4, "spanQCYes1":I
	spanQCYes2 = n2->spanQuickCheckYes(cVar5);
	//    .local v5, "spanQCYes2":I
	if ( spanQCYes1 >= cVar3->length() )
		goto label_cond_42;
	cVar2 = std::make_shared<java::lang::StringBuilder>(( cVar3->length() + 0x10));
	//    .local v0, "fcd1":Ljava/lang/StringBuilder;
	cVar3 = n2->normalizeSecondAndAppend(cVar2->append(cVar3, cVar0, spanQCYes1), cVar3->subSequence(spanQCYes1, cVar3->length()));
	//    .end local v0    # "fcd1":Ljava/lang/StringBuilder;
label_cond_42:
	if ( spanQCYes2 >= cVar5->length() )
		goto label_cond_63;
	cVar4 = std::make_shared<java::lang::StringBuilder>(( cVar5->length() + 0x10));
	//    .local v1, "fcd2":Ljava/lang/StringBuilder;
	cVar5 = n2->normalizeSecondAndAppend(cVar4->append(cVar5, cVar0, spanQCYes2), cVar5->subSequence(spanQCYes2, cVar5->length()));
	//    .end local v1    # "fcd2":Ljava/lang/StringBuilder;
	//    .end local v2    # "n2":Landroid/icu/text/Normalizer2;
	//    .end local v4    # "spanQCYes1":I
	//    .end local v5    # "spanQCYes2":I
label_cond_63:
	return android::icu::text::Normalizer::cmpEquivFold(cVar3, cVar5, cVar1);
	// 2669    .line 2024
label_cond_68:
	n2 = android::icu::text::Normalizer::FCD->getNormalizer2(normOptions);
	//    .restart local v2    # "n2":Landroid/icu/text/Normalizer2;
	goto label_goto_19;

}
// .method public static isNormalized(ILandroid/icu/text/Normalizer$Mode;I)Z
bool android::icu::text::Normalizer::isNormalized(int char32,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	//    .param p0, "char32"    # I
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p2, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2687    .end annotation
	return android::icu::text::Normalizer::isNormalized(android::icu::text::UTF16::valueOf(char32), mode, options);

}
// .method public static isNormalized(Ljava/lang/String;Landroid/icu/text/Normalizer$Mode;I)Z
bool android::icu::text::Normalizer::isNormalized(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p2, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2708    .end annotation
	return mode->getNormalizer2(options)->isNormalized(str);

}
// .method public static isNormalized([CIILandroid/icu/text/Normalizer$Mode;I)Z
bool android::icu::text::Normalizer::isNormalized(std::shared_ptr<char[]> src,int start,int limit,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	//    .param p0, "src"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p4, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2731    .end annotation
	//    .local v0, "srcBuffer":Ljava/nio/CharBuffer;
	return mode->getNormalizer2(options)->isNormalized(java::nio::CharBuffer::wrap(src, start, (limit - start)));

}
// .method private nextNormalize()Z
bool android::icu::text::Normalizer::nextNormalize()
{
	
	bool cVar2;
	int c;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::CharSequence> segment;
	
	cVar2 = 0x0;
	this->clearBuffer();
	this->currentIndex = this->nextIndex;
	this->text->setIndex(this->nextIndex);
	c = this->text->nextCodePoint();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_18;
	return cVar2;
	// 2789    .line 1956
label_cond_18:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	segment = cVar1->appendCodePoint(c);
	//    .local v1, "segment":Ljava/lang/StringBuilder;
label_goto_21:
	c = this->text->nextCodePoint();
	if ( c < 0 ) 
		goto label_cond_37;
	if ( !(this->norm2->hasBoundaryBefore(c)) )  
		goto label_cond_50;
	this->text->moveCodePointIndex(-0x1);
label_cond_37:
	this->nextIndex = this->text->getIndex();
	this->norm2->normalize(segment, this->buffer);
	if ( !(this->buffer->length()) )  
		goto label_cond_4f;
	cVar2 = 0x1;
label_cond_4f:
	return cVar2;
	// 2857    .line 1962
label_cond_50:
	segment->appendCodePoint(c);
	goto label_goto_21;

}
// .method public static normalize([CII[CIILandroid/icu/text/Normalizer$Mode;I)I
int android::icu::text::Normalizer::normalize(std::shared_ptr<char[]> src,int srcStart,int srcLimit,std::shared_ptr<char[]> dest,int destStart,int destLimit,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	std::shared_ptr<android::icu::text::Normalizer_S_CharsAppendable> app;
	
	//    .param p0, "src"    # [C
	//    .param p1, "srcStart"    # I
	//    .param p2, "srcLimit"    # I
	//    .param p3, "dest"    # [C
	//    .param p4, "destStart"    # I
	//    .param p5, "destLimit"    # I
	//    .param p6, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p7, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2875    .end annotation
	//    .local v1, "srcBuffer":Ljava/nio/CharBuffer;
	app = std::make_shared<android::icu::text::Normalizer_S_CharsAppendable>(dest, destStart, destLimit);
	//    .local v0, "app":Landroid/icu/text/Normalizer$CharsAppendable;
	mode->getNormalizer2(options)->normalize(java::nio::CharBuffer::wrap(src, srcStart, (srcLimit - srcStart)), app);
	return app->length();

}
// .method public static normalize([C[CLandroid/icu/text/Normalizer$Mode;I)I
int android::icu::text::Normalizer::normalize(std::shared_ptr<char[]> source,std::shared_ptr<char[]> target,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	int cVar0;
	
	//    .param p0, "source"    # [C
	//    .param p1, "target"    # [C
	//    .param p2, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p3, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2914    .end annotation
	cVar0 = 0x0;
	return android::icu::text::Normalizer::normalize(source, cVar0, source->size(), target, cVar0, target->size(), mode, options);

}
// .method public static normalize(ILandroid/icu/text/Normalizer$Mode;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::normalize(int char32,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode)
{
	
	//    .param p0, "char32"    # I
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2946    .end annotation
	return android::icu::text::Normalizer::normalize(char32, mode, 0x0);

}
// .method public static normalize(ILandroid/icu/text/Normalizer$Mode;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::normalize(int char32,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	std::shared_ptr<java::lang::String> decomposition;
	
	//    .param p0, "char32"    # I
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p2, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2965    .end annotation
	if ( mode != android::icu::text::Normalizer::NFD )
		goto label_cond_15;
	if ( options )     
		goto label_cond_15;
	decomposition = android::icu::text::Normalizer2::getNFCInstance({const[class].FS-Param})->getDecomposition(char32);
	//    .local v0, "decomposition":Ljava/lang/String;
	if ( decomposition )     
		goto label_cond_14;
label_cond_14:
	return decomposition;
	// 2997    .line 955
	// 2998    .end local v0    # "decomposition":Ljava/lang/String;
label_cond_15:
	return android::icu::text::Normalizer::normalize(android::icu::text::UTF16::valueOf(char32), mode, options);

}
// .method public static normalize(Ljava/lang/String;Landroid/icu/text/Normalizer$Mode;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::normalize(std::shared_ptr<java::lang::String> src,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode)
{
	
	//    .param p0, "src"    # Ljava/lang/String;
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3016    .end annotation
	return android::icu::text::Normalizer::normalize(src, mode, 0x0);

}
// .method public static normalize(Ljava/lang/String;Landroid/icu/text/Normalizer$Mode;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::normalize(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p2, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3035    .end annotation
	return mode->getNormalizer2(options)->normalize(str);

}
// .method private previousNormalize()Z
bool android::icu::text::Normalizer::previousNormalize()
{
	
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> segment;
	int c;
	bool cVar1;
	
	cVar1 = 0x0;
	this->clearBuffer();
	this->nextIndex = this->currentIndex;
	this->text->setIndex(this->currentIndex);
	segment = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "segment":Ljava/lang/StringBuilder;
label_cond_14:
	c = this->text->previousCodePoint();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_2d;
	if ( c >  0xffff )
		goto label_cond_4e;
	segment->insert(cVar1, (char)(c));
label_goto_25:
	if ( !(this->norm2->hasBoundaryBefore(c)) )  
		goto label_cond_14;
label_cond_2d:
	this->currentIndex = this->text->getIndex();
	this->norm2->normalize(segment, this->buffer);
	this->bufferPos = this->buffer->length();
	if ( !(this->buffer->length()) )  
		goto label_cond_4d;
	cVar1 = 0x1;
label_cond_4d:
	return cVar1;
	// 3148    .line 1979
label_cond_4e:
	segment->insert(cVar1, java::lang::Character::toChars(c));
	goto label_goto_25;

}
// .method public static quickCheck(Ljava/lang/String;Landroid/icu/text/Normalizer$Mode;)Landroid/icu/text/Normalizer$QuickCheckResult;
std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> android::icu::text::Normalizer::quickCheck(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode)
{
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3164    .end annotation
	return android::icu::text::Normalizer::quickCheck(source, mode, 0x0);

}
// .method public static quickCheck(Ljava/lang/String;Landroid/icu/text/Normalizer$Mode;I)Landroid/icu/text/Normalizer$QuickCheckResult;
std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> android::icu::text::Normalizer::quickCheck(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	//    .param p0, "source"    # Ljava/lang/String;
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p2, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3183    .end annotation
	return mode->getNormalizer2(options)->quickCheck(source);

}
// .method public static quickCheck([CIILandroid/icu/text/Normalizer$Mode;I)Landroid/icu/text/Normalizer$QuickCheckResult;
std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> android::icu::text::Normalizer::quickCheck(std::shared_ptr<char[]> source,int start,int limit,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	//    .param p0, "source"    # [C
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p4, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3206    .end annotation
	//    .local v0, "srcBuffer":Ljava/nio/CharBuffer;
	return mode->getNormalizer2(options)->quickCheck(java::nio::CharBuffer::wrap(source, start, (limit - start)));

}
// .method public static quickCheck([CLandroid/icu/text/Normalizer$Mode;I)Landroid/icu/text/Normalizer$QuickCheckResult;
std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> android::icu::text::Normalizer::quickCheck(std::shared_ptr<char[]> source,std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode,int options)
{
	
	//    .param p0, "source"    # [C
	//    .param p1, "mode"    # Landroid/icu/text/Normalizer$Mode;
	//    .param p2, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3235    .end annotation
	return android::icu::text::Normalizer::quickCheck(source, 0x0, source->size(), mode, options);

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::Normalizer::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar2;
	std::shared_ptr<android::icu::text::Normalizer> copy;
	std::shared_ptr<android::icu::text::UCharacterIterator> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3255    .end annotation
	try {
	//label_try_start_0:
	copy = this->clone();
	copy->checkCast("android::icu::text::Normalizer");
	//    .local v0, "copy":Landroid/icu/text/Normalizer;
	cVar0 = this->text->clone();
	cVar0->checkCast("android::icu::text::UCharacterIterator");
	copy->text = cVar0;
	copy->mode = this->mode;
	copy->options = this->options;
	copy->norm2 = this->norm2;
	cVar1 = std::make_shared<java::lang::StringBuilder>(this->buffer);
	copy->buffer = cVar1;
	copy->bufferPos = this->bufferPos;
	copy->currentIndex = this->currentIndex;
	copy->nextIndex = this->nextIndex;
	//label_try_end_31:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_32;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_31} :catch_32
	return copy;
	// 3322    .line 661
	// 3323    .end local v0    # "copy":Landroid/icu/text/Normalizer;
label_catch_32:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/CloneNotSupportedException;
	cVar2 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public current()I
int android::icu::text::Normalizer::current()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3339    .end annotation
	if ( this->bufferPos <  this->buffer->length() )
		goto label_cond_10;
	if ( !(this->nextNormalize()) )  
		goto label_cond_19;
label_cond_10:
	return this->buffer->codePointAt(this->bufferPos);
	// 3371    .line 1516
label_cond_19:
	return -0x1;

}
// .method public endIndex()I
int android::icu::text::Normalizer::endIndex()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3381    .end annotation
	return this->text->getLength();

}
// .method public first()I
int android::icu::text::Normalizer::first()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3397    .end annotation
	this->reset();
	return this->next();

}
// .method public getBeginIndex()I
int android::icu::text::Normalizer::getBeginIndex()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3414    .end annotation
	return 0x0;

}
// .method public getEndIndex()I
int android::icu::text::Normalizer::getEndIndex()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3426    .end annotation
	return this->endIndex();

}
// .method public getIndex()I
int android::icu::text::Normalizer::getIndex()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3440    .end annotation
	if ( this->bufferPos >= this->buffer->length() )
		goto label_cond_d;
	return this->currentIndex;
	// 3459    .line 1695
label_cond_d:
	return this->nextIndex;

}
// .method public getLength()I
int android::icu::text::Normalizer::getLength()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3469    .end annotation
	return this->text->getLength();

}
// .method public getMode()Landroid/icu/text/Normalizer$Mode;
std::shared_ptr<android::icu::text::Normalizer_S_Mode> android::icu::text::Normalizer::getMode()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3485    .end annotation
	return this->mode;

}
// .method public getOption(I)I
int android::icu::text::Normalizer::getOption(int option)
{
	
	//    .param p1, "option"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3498    .end annotation
	if ( !((this->options &  option)) )  
		goto label_cond_8;
	return 0x1;
	// 3515    .line 1812
label_cond_8:
	return 0x0;

}
// .method public getText([C)I
int android::icu::text::Normalizer::getText(std::shared_ptr<char[]> fillIn)
{
	
	//    .param p1, "fillIn"    # [C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3524    .end annotation
	return this->text->getText(fillIn);

}
// .method public getText()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Normalizer::getText()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3540    .end annotation
	return this->text->getText();

}
// .method public last()I
int android::icu::text::Normalizer::last()
{
	
	int cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3556    .end annotation
	this->text->setToLimit();
	cVar0 = this->text->getIndex();
	this->nextIndex = cVar0;
	this->currentIndex = cVar0;
	this->clearBuffer();
	return this->previous();

}
// .method public next()I
int android::icu::text::Normalizer::next()
{
	
	int c;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3589    .end annotation
	if ( this->bufferPos <  this->buffer->length() )
		goto label_cond_10;
	if ( !(this->nextNormalize()) )  
		goto label_cond_22;
label_cond_10:
	c = this->buffer->codePointAt(this->bufferPos);
	//    .local v0, "c":I
	this->bufferPos = (this->bufferPos +  java::lang::Character::charCount(c));
	return c;
	// 3634    .line 1535
	// 3635    .end local v0    # "c":I
label_cond_22:
	return -0x1;

}
// .method public previous()I
int android::icu::text::Normalizer::previous()
{
	
	int c;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3645    .end annotation
	if ( this->bufferPos > 0 ) 
		goto label_cond_a;
	if ( !(this->previousNormalize()) )  
		goto label_cond_1c;
label_cond_a:
	c = this->buffer->codePointBefore(this->bufferPos);
	//    .local v0, "c":I
	this->bufferPos = (this->bufferPos -  java::lang::Character::charCount(c));
	return c;
	// 3684    .line 1555
	// 3685    .end local v0    # "c":I
label_cond_1c:
	return -0x1;

}
// .method public reset()V
void android::icu::text::Normalizer::reset()
{
	
	int cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3695    .end annotation
	cVar0 = 0x0;
	this->text->setToStart();
	this->nextIndex = cVar0;
	this->currentIndex = cVar0;
	this->clearBuffer();
	return;

}
// .method public setIndex(I)I
int android::icu::text::Normalizer::setIndex(int index)
{
	
	//    .param p1, "index"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3721    .end annotation
	this->setIndexOnly(index);
	return this->current();

}
// .method public setIndexOnly(I)V
void android::icu::text::Normalizer::setIndexOnly(int index)
{
	
	//    .param p1, "index"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3739    .end annotation
	this->text->setIndex(index);
	this->nextIndex = index;
	this->currentIndex = index;
	this->clearBuffer();
	return;

}
// .method public setMode(Landroid/icu/text/Normalizer$Mode;)V
void android::icu::text::Normalizer::setMode(std::shared_ptr<android::icu::text::Normalizer_S_Mode> newMode)
{
	
	//    .param p1, "newMode"    # Landroid/icu/text/Normalizer$Mode;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3763    .end annotation
	this->mode = newMode;
	this->norm2 = this->mode->getNormalizer2(this->options);
	return;

}
// .method public setOption(IZ)V
void android::icu::text::Normalizer::setOption(int option,bool value)
{
	
	//    .param p1, "option"    # I
	//    .param p2, "value"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3789    .end annotation
	if ( !(value) )  
		goto label_cond_12;
	this->options = (this->options |  option);
label_goto_7:
	this->norm2 = this->mode->getNormalizer2(this->options);
	return;
	// 3817    .line 1795
label_cond_12:
	this->options = (this->options &  (~option));
	goto label_goto_7;

}
// .method public setText(Landroid/icu/text/UCharacterIterator;)V
void android::icu::text::Normalizer::setText(std::shared_ptr<android::icu::text::UCharacterIterator> newText)
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar1;
	std::shared_ptr<android::icu::text::UCharacterIterator> newIter;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "newText"    # Landroid/icu/text/UCharacterIterator;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3834    .end annotation
	try {
	//label_try_start_0:
	newIter = newText->clone();
	newIter->checkCast("android::icu::text::UCharacterIterator");
	//    .local v1, "newIter":Landroid/icu/text/UCharacterIterator;
	if ( newIter )     
		goto label_cond_1b;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not create a new UCharacterIterator")));
	// throw
	throw cVar0;
	// 3857    :try_end_11
	// 3858    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_11} :catch_11
	// 3860    .line 1937
	// 3861    .end local v1    # "newIter":Landroid/icu/text/UCharacterIterator;
label_catch_11:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar1 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not clone the UCharacterIterator")), getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 3875    .line 1935
	// 3876    .end local v0    # "e":Ljava/lang/CloneNotSupportedException;
	// 3877    .restart local v1    # "newIter":Landroid/icu/text/UCharacterIterator;
label_cond_1b:
	try {
	//label_try_start_1b:
	this->text = newIter;
	this->reset();
	//label_try_end_20:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_1b .. :try_end_20} :catch_11
	return;

}
// .method public setText(Ljava/lang/String;)V
void android::icu::text::Normalizer::setText(std::shared_ptr<java::lang::String> newText)
{
	
	std::shared_ptr<android::icu::text::UCharacterIterator> newIter;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "newText"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3895    .end annotation
	newIter = android::icu::text::UCharacterIterator::getInstance(newText);
	//    .local v0, "newIter":Landroid/icu/text/UCharacterIterator;
	if ( newIter )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not create a new UCharacterIterator")));
	// throw
	throw cVar0;
	// 3916    .line 1900
label_cond_f:
	this->text = newIter;
	this->reset();
	return;

}
// .method public setText(Ljava/lang/StringBuffer;)V
void android::icu::text::Normalizer::setText(std::shared_ptr<java::lang::StringBuffer> newText)
{
	
	std::shared_ptr<android::icu::text::UCharacterIterator> newIter;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "newText"    # Ljava/lang/StringBuffer;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3931    .end annotation
	newIter = android::icu::text::UCharacterIterator::getInstance(newText);
	//    .local v0, "newIter":Landroid/icu/text/UCharacterIterator;
	if ( newIter )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not create a new UCharacterIterator")));
	// throw
	throw cVar0;
	// 3952    .line 1866
label_cond_f:
	this->text = newIter;
	this->reset();
	return;

}
// .method public setText(Ljava/text/CharacterIterator;)V
void android::icu::text::Normalizer::setText(std::shared_ptr<java::text::CharacterIterator> newText)
{
	
	std::shared_ptr<android::icu::text::UCharacterIterator> newIter;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "newText"    # Ljava/text/CharacterIterator;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3967    .end annotation
	newIter = android::icu::text::UCharacterIterator::getInstance(newText);
	//    .local v0, "newIter":Landroid/icu/text/UCharacterIterator;
	if ( newIter )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not create a new UCharacterIterator")));
	// throw
	throw cVar0;
	// 3988    .line 1917
label_cond_f:
	this->text = newIter;
	this->reset();
	return;

}
// .method public setText([C)V
void android::icu::text::Normalizer::setText(std::shared_ptr<char[]> newText)
{
	
	std::shared_ptr<android::icu::text::UCharacterIterator> newIter;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "newText"    # [C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4003    .end annotation
	newIter = android::icu::text::UCharacterIterator::getInstance(newText);
	//    .local v0, "newIter":Landroid/icu/text/UCharacterIterator;
	if ( newIter )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not create a new UCharacterIterator")));
	// throw
	throw cVar0;
	// 4024    .line 1883
label_cond_f:
	this->text = newIter;
	this->reset();
	return;

}
// .method public startIndex()I
int android::icu::text::Normalizer::startIndex()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4038    .end annotation
	return 0x0;

}


