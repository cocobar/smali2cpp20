// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UTS46.smali
#include "java2ctype.h"
#include "android.icu.impl.Punycode.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.impl.UTS46.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.IDNA_S_Error.h"
#include "android.icu.text.IDNA_S_Info.h"
#include "android.icu.text.Normalizer2_S_Mode.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.StringPrepParseException.h"
#include "android.icu.util.ICUException.h"
#include "java.io.InputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.util.EnumSet.h"
#include "java.util.Set.h"

static android::icu::impl::UTS46::EN_AN_MASK;
static android::icu::impl::UTS46::ES_CS_ET_ON_BN_NSM_MASK;
static android::icu::impl::UTS46::L_EN_ES_CS_ET_ON_BN_NSM_MASK;
static android::icu::impl::UTS46::L_EN_MASK;
static android::icu::impl::UTS46::L_MASK;
static android::icu::impl::UTS46::L_R_AL_MASK;
static android::icu::impl::UTS46::R_AL_AN_EN_ES_CS_ET_ON_BN_NSM_MASK;
static android::icu::impl::UTS46::R_AL_AN_MASK;
static android::icu::impl::UTS46::R_AL_EN_AN_MASK;
static android::icu::impl::UTS46::R_AL_MASK;
static android::icu::impl::UTS46::U_GC_M_MASK;
static android::icu::impl::UTS46::asciiData;
static android::icu::impl::UTS46::severeErrors;
static android::icu::impl::UTS46::uts46Norm2;
// .method static constructor <clinit>()V
void android::icu::impl::UTS46::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<unsigned char[]>> cVar3;
	
	cVar0 = 0x6;
	cVar1 = 0x5;
	cVar2 = 0x2;
	android::icu::impl::UTS46::uts46Norm2 = android::icu::text::Normalizer2::getInstance(0x0, std::make_shared<java::lang::String>(std::make_shared<char[]>("uts46")), android::icu::text::Normalizer2_S_Mode::COMPOSE);
	android::icu::impl::UTS46::severeErrors = java::util::EnumSet::of(android::icu::text::IDNA_S_Error::LEADING_COMBINING_MARK, android::icu::text::IDNA_S_Error::DISALLOWED, android::icu::text::IDNA_S_Error::PUNYCODE, android::icu::text::IDNA_S_Error::LABEL_HAS_DOT, android::icu::text::IDNA_S_Error::INVALID_ACE_LABEL);
	cVar3 = std::make_shared<std::vector<unsigned char[]>>(0x80);
	?;
	android::icu::impl::UTS46::asciiData = cVar3;
	android::icu::impl::UTS46::L_MASK = android::icu::impl::UTS46::U_MASK(0x0);
	android::icu::impl::UTS46::R_AL_MASK = (android::icu::impl::UTS46::U_MASK(0x1) |  android::icu::impl::UTS46::U_MASK(0xd));
	android::icu::impl::UTS46::L_R_AL_MASK = (android::icu::impl::UTS46::L_MASK |  android::icu::impl::UTS46::R_AL_MASK);
	android::icu::impl::UTS46::R_AL_AN_MASK = (android::icu::impl::UTS46::R_AL_MASK |  android::icu::impl::UTS46::U_MASK(cVar1));
	android::icu::impl::UTS46::EN_AN_MASK = (android::icu::impl::UTS46::U_MASK(cVar2) |  android::icu::impl::UTS46::U_MASK(cVar1));
	android::icu::impl::UTS46::R_AL_EN_AN_MASK = (android::icu::impl::UTS46::R_AL_MASK |  android::icu::impl::UTS46::EN_AN_MASK);
	android::icu::impl::UTS46::L_EN_MASK = (android::icu::impl::UTS46::L_MASK |  android::icu::impl::UTS46::U_MASK(cVar2));
	android::icu::impl::UTS46::ES_CS_ET_ON_BN_NSM_MASK = (((((android::icu::impl::UTS46::U_MASK(0x3) |  android::icu::impl::UTS46::U_MASK(cVar0)) |  android::icu::impl::UTS46::U_MASK(0x4)) |  android::icu::impl::UTS46::U_MASK(0xa)) |  android::icu::impl::UTS46::U_MASK(0x12)) |  android::icu::impl::UTS46::U_MASK(0x11));
	android::icu::impl::UTS46::L_EN_ES_CS_ET_ON_BN_NSM_MASK = (android::icu::impl::UTS46::L_EN_MASK |  android::icu::impl::UTS46::ES_CS_ET_ON_BN_NSM_MASK);
	android::icu::impl::UTS46::R_AL_AN_EN_ES_CS_ET_ON_BN_NSM_MASK = ((android::icu::impl::UTS46::R_AL_MASK |  android::icu::impl::UTS46::EN_AN_MASK) |  android::icu::impl::UTS46::ES_CS_ET_ON_BN_NSM_MASK);
	android::icu::impl::UTS46::U_GC_M_MASK = ((android::icu::impl::UTS46::U_MASK(cVar0) |  android::icu::impl::UTS46::U_MASK(0x7)) |  android::icu::impl::UTS46::U_MASK(0x8));
	return;
	// 301    .line 98
	// 302    :array_b4
	// 303    .array-data 1
	// 304        -0x1t
	// 305        -0x1t
	// 306        -0x1t
	// 307        -0x1t
	// 308        -0x1t
	// 309        -0x1t
	// 310        -0x1t
	// 311        -0x1t
	// 312        -0x1t
	// 313        -0x1t
	// 314        -0x1t
	// 315        -0x1t
	// 316        -0x1t
	// 317        -0x1t
	// 318        -0x1t
	// 319        -0x1t
	// 320        -0x1t
	// 321        -0x1t
	// 322        -0x1t
	// 323        -0x1t
	// 324        -0x1t
	// 325        -0x1t
	// 326        -0x1t
	// 327        -0x1t
	// 328        -0x1t
	// 329        -0x1t
	// 330        -0x1t
	// 331        -0x1t
	// 332        -0x1t
	// 333        -0x1t
	// 334        -0x1t
	// 335        -0x1t
	// 336        -0x1t
	// 337        -0x1t
	// 338        -0x1t
	// 339        -0x1t
	// 340        -0x1t
	// 341        -0x1t
	// 342        -0x1t
	// 343        -0x1t
	// 344        -0x1t
	// 345        -0x1t
	// 346        -0x1t
	// 347        -0x1t
	// 348        -0x1t
	// 349        0x0t
	// 350        0x0t
	// 351        -0x1t
	// 352        0x0t
	// 353        0x0t
	// 354        0x0t
	// 355        0x0t
	// 356        0x0t
	// 357        0x0t
	// 358        0x0t
	// 359        0x0t
	// 360        0x0t
	// 361        0x0t
	// 362        -0x1t
	// 363        -0x1t
	// 364        -0x1t
	// 365        -0x1t
	// 366        -0x1t
	// 367        -0x1t
	// 368        -0x1t
	// 369        0x1t
	// 370        0x1t
	// 371        0x1t
	// 372        0x1t
	// 373        0x1t
	// 374        0x1t
	// 375        0x1t
	// 376        0x1t
	// 377        0x1t
	// 378        0x1t
	// 379        0x1t
	// 380        0x1t
	// 381        0x1t
	// 382        0x1t
	// 383        0x1t
	// 384        0x1t
	// 385        0x1t
	// 386        0x1t
	// 387        0x1t
	// 388        0x1t
	// 389        0x1t
	// 390        0x1t
	// 391        0x1t
	// 392        0x1t
	// 393        0x1t
	// 394        0x1t
	// 395        -0x1t
	// 396        -0x1t
	// 397        -0x1t
	// 398        -0x1t
	// 399        -0x1t
	// 400        -0x1t
	// 401        0x0t
	// 402        0x0t
	// 403        0x0t
	// 404        0x0t
	// 405        0x0t
	// 406        0x0t
	// 407        0x0t
	// 408        0x0t
	// 409        0x0t
	// 410        0x0t
	// 411        0x0t
	// 412        0x0t
	// 413        0x0t
	// 414        0x0t
	// 415        0x0t
	// 416        0x0t
	// 417        0x0t
	// 418        0x0t
	// 419        0x0t
	// 420        0x0t
	// 421        0x0t
	// 422        0x0t
	// 423        0x0t
	// 424        0x0t
	// 425        0x0t
	// 426        0x0t
	// 427        -0x1t
	// 428        -0x1t
	// 429        -0x1t
	// 430        -0x1t
	// 431        -0x1t
	// 432    .end array-data

}
// .method public constructor <init>(I)V
android::icu::impl::UTS46::UTS46(int options)
{
	
	//    .param p1, "options"    # I
	// 441    invoke-direct {p0}, Landroid/icu/text/IDNA;-><init>()V
	this->options = options;
	return;

}
// .method private static U_GET_GC_MASK(I)I
int android::icu::impl::UTS46::U_GET_GC_MASK(int c)
{
	
	//    .param p0, "c"    # I
	return (0x1 << android::icu::lang::UCharacter::getType(c));

}
// .method private static U_MASK(I)I
int android::icu::impl::UTS46::U_MASK(int x)
{
	
	//    .param p0, "x"    # I
	return (0x1 << x);

}
// .method private checkLabelBiDi(Ljava/lang/CharSequence;IILandroid/icu/text/IDNA$Info;)V
void android::icu::impl::UTS46::checkLabelBiDi(std::shared_ptr<java::lang::CharSequence> label,int labelStart,int labelLength,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	int i;
	int c;
	int firstMask;
	int labelLimit;
	int lastMask;
	int mask;
	int dir;
	
	//    .param p1, "label"    # Ljava/lang/CharSequence;
	//    .param p2, "labelStart"    # I
	//    .param p3, "labelLength"    # I
	//    .param p4, "info"    # Landroid/icu/text/IDNA$Info;
	i = labelStart;
	//    .local v3, "i":I
	c = java::lang::Character::codePointAt(label, labelStart);
	//    .local v0, "c":I
	i = (labelStart + java::lang::Character::charCount(c));
	firstMask = android::icu::impl::UTS46::U_MASK(android::icu::impl::UBiDiProps::INSTANCE->getClass(c));
	//    .local v2, "firstMask":I
	if ( !(((~android::icu::impl::UTS46::L_R_AL_MASK) &  firstMask)) )  
		goto label_cond_1e;
	android::icu::impl::UTS46::setNotOkBiDi(info);
label_cond_1e:
	labelLimit = (labelStart + labelLength);
	//    .local v4, "labelLimit":I
label_cond_20:
	if ( i <  labelLimit )
		goto label_cond_49;
	lastMask = firstMask;
	//    .local v5, "lastMask":I
label_goto_23:
	if ( !((android::icu::impl::UTS46::L_MASK &  firstMask)) )  
		goto label_cond_61;
	if ( !(((~android::icu::impl::UTS46::L_EN_MASK) &  lastMask)) )  
		goto label_cond_31;
label_goto_2e:
	android::icu::impl::UTS46::setNotOkBiDi(info);
label_cond_31:
	mask = 0x0;
	//    .local v6, "mask":I
label_goto_32:
	if ( i >= labelLimit )
		goto label_cond_68;
	c = java::lang::Character::codePointAt(label, i);
	i = (i +  java::lang::Character::charCount(c));
	mask = (mask |  android::icu::impl::UTS46::U_MASK(android::icu::impl::UBiDiProps::INSTANCE->getClass(c)));
	goto label_goto_32;
	// 599    .line 570
	// 600    .end local v5    # "lastMask":I
	// 601    .end local v6    # "mask":I
label_cond_49:
	c = java::lang::Character::codePointBefore(label, labelLimit);
	labelLimit = (labelLimit -  java::lang::Character::charCount(c));
	dir = android::icu::impl::UBiDiProps::INSTANCE->getClass(c);
	//    .local v1, "dir":I
	if ( dir == 0x11 )
		goto label_cond_20;
	lastMask = android::icu::impl::UTS46::U_MASK(dir);
	//    .restart local v5    # "lastMask":I
	goto label_goto_23;
	// 635    .line 586
	// 636    .end local v1    # "dir":I
label_cond_61:
	if ( !(((~android::icu::impl::UTS46::R_AL_EN_AN_MASK) &  lastMask)) )  
		goto label_cond_31;
	goto label_goto_2e;
	// 648    .line 597
	// 649    .restart local v6    # "mask":I
label_cond_68:
	if ( !((android::icu::impl::UTS46::L_MASK &  firstMask)) )  
		goto label_cond_82;
	if ( !(((~android::icu::impl::UTS46::L_EN_ES_CS_ET_ON_BN_NSM_MASK) &  mask)) )  
		goto label_cond_76;
	android::icu::impl::UTS46::setNotOkBiDi(info);
label_cond_76:
label_goto_76:
	if ( !((((firstMask | mask) |  lastMask) &  android::icu::impl::UTS46::R_AL_AN_MASK)) )  
		goto label_cond_81;
	android::icu::impl::UTS46::setBiDi(info);
label_cond_81:
	return;
	// 689    .line 606
label_cond_82:
	if ( !(((~android::icu::impl::UTS46::R_AL_AN_EN_ES_CS_ET_ON_BN_NSM_MASK) &  mask)) )  
		goto label_cond_8b;
	android::icu::impl::UTS46::setNotOkBiDi(info);
label_cond_8b:
	if ( (android::icu::impl::UTS46::EN_AN_MASK &  mask) != android::icu::impl::UTS46::EN_AN_MASK )
		goto label_cond_76;
	android::icu::impl::UTS46::setNotOkBiDi(info);
	goto label_goto_76;

}
// .method private checkLabelContextO(Ljava/lang/CharSequence;IILandroid/icu/text/IDNA$Info;)V
void android::icu::impl::UTS46::checkLabelContextO(std::shared_ptr<java::lang::CharSequence> label,int labelStart,int labelLength,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	int cVar0;
	int cVar1;
	int labelEnd;
	int arabicDigits;
	int i;
	int c;
	int j;
	int script;
	
	//    .param p1, "label"    # Ljava/lang/CharSequence;
	//    .param p2, "labelStart"    # I
	//    .param p3, "labelLength"    # I
	//    .param p4, "info"    # Landroid/icu/text/IDNA$Info;
	cVar0 = 0xb7;
	cVar1 = 0x6c;
	labelEnd = ( (labelStart + labelLength) + -0x1);
	//    .local v4, "labelEnd":I
	arabicDigits = 0x0;
	//    .local v0, "arabicDigits":I
	i = labelStart;
	//    .local v2, "i":I
label_goto_a:
	if ( i >  labelEnd )
		goto label_cond_b2;
	c = label->charAt(i);
	//    .local v1, "c":I
	if ( c >= cVar0 )
		goto label_cond_15;
label_cond_12:
label_goto_12:
	i = ( i + 0x1);
	goto label_goto_a;
	// 763    .line 747
label_cond_15:
	if ( c >  0x6f9 )
		goto label_cond_8a;
	if ( c != cVar0 )
		goto label_cond_36;
	if ( labelStart >= i )
		goto label_cond_25;
	if ( label->charAt(( i + -0x1)) == cVar1 )
		goto label_cond_2b;
label_cond_25:
label_goto_25:
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::CONTEXTO_PUNCTUATION);
	goto label_goto_12;
	// 792    .line 755
label_cond_2b:
	if ( i >= labelEnd )
		goto label_cond_25;
	if ( label->charAt(( i + 0x1)) == cVar1 )
		goto label_cond_12;
	goto label_goto_25;
	// 806    .line 758
label_cond_36:
	if ( c != 0x375 )
		goto label_cond_50;
	if ( i >= labelEnd )
		goto label_cond_4a;
	if ( 0xe == android::icu::lang::UScript::getScript(java::lang::Character::codePointAt(label, ( i + 0x1))) )
		goto label_cond_12;
label_cond_4a:
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::CONTEXTO_PUNCTUATION);
	goto label_goto_12;
	// 838    .line 767
label_cond_50:
	if ( c == 0x5f3 )
		goto label_cond_58;
	if ( c != 0x5f4 )
		goto label_cond_6c;
label_cond_58:
	if ( labelStart >= i )
		goto label_cond_66;
	if ( 0x13 == android::icu::lang::UScript::getScript(java::lang::Character::codePointBefore(label, i)) )
		goto label_cond_12;
label_cond_66:
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::CONTEXTO_PUNCTUATION);
	goto label_goto_12;
	// 873    .line 781
label_cond_6c:
	if ( 0x660 >  c )
		goto label_cond_12;
	if ( c >  0x669 )
		goto label_cond_7d;
	if ( arabicDigits <= 0 )
		goto label_cond_7b;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::CONTEXTO_DIGITS);
label_cond_7b:
	arabicDigits = -0x1;
	goto label_goto_12;
	// 898    .line 800
label_cond_7d:
	if ( 0x6f0 >  c )
		goto label_cond_12;
	if ( arabicDigits >= 0 )
		goto label_cond_88;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::CONTEXTO_DIGITS);
label_cond_88:
	arabicDigits = 0x1;
	goto label_goto_12;
	// 918    .line 807
label_cond_8a:
	if ( c != 0x30fb )
		goto label_cond_12;
	j = labelStart;
	//    .local v3, "j":I
label_goto_8f:
	if ( j <= labelEnd )
		goto label_cond_98;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::CONTEXTO_PUNCTUATION);
	goto label_goto_12;
	// 939    .line 819
label_cond_98:
	c = java::lang::Character::codePointAt(label, j);
	script = android::icu::lang::UScript::getScript(c);
	//    .local v5, "script":I
	if ( script == 0x14 )
		goto label_cond_12;
	if ( script == 0x16 )
		goto label_cond_12;
	if ( script == 0x11 )
		goto label_cond_12;
	j = (j +  java::lang::Character::charCount(c));
	goto label_goto_8f;
	// 973    .line 827
	// 974    .end local v1    # "c":I
	// 975    .end local v3    # "j":I
	// 976    .end local v5    # "script":I
label_cond_b2:
	return;

}
// .method private static isASCIIOkBiDi(Ljava/lang/CharSequence;I)Z
bool android::icu::impl::UTS46::isASCIIOkBiDi(std::shared_ptr<java::lang::CharSequence> s,int length)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	int labelStart;
	int i;
	int c;
	
	//    .param p0, "s"    # Ljava/lang/CharSequence;
	//    .param p1, "length"    # I
	cVar0 = 0x7a;
	cVar1 = 0x61;
	cVar2 = 0x0;
	labelStart = 0x0;
	//    .local v2, "labelStart":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= length )
		goto label_cond_43;
	c = s->charAt(i);
	//    .local v0, "c":C
	if ( c != 0x2e )
		goto label_cond_2b;
	if ( i <= labelStart )
		goto label_cond_26;
	c = s->charAt(( i + -0x1));
	if ( cVar1 >  c )
		goto label_cond_1d;
	if ( c <= cVar0 )
		goto label_cond_26;
label_cond_1d:
	if ( 0x30 >  c )
		goto label_cond_25;
	if ( c <= 0x39 )
		goto label_cond_26;
label_cond_25:
	return cVar2;
	// 1043    .line 652
label_cond_26:
	labelStart = ( i + 0x1);
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_7;
	// 1053    .line 653
label_cond_2b:
	if ( i != labelStart )
		goto label_cond_32;
	if ( cVar1 >  c )
		goto label_cond_31;
	if ( c <= cVar0 )
		goto label_cond_28;
label_cond_31:
	return cVar2;
	// 1066    .line 659
label_cond_32:
	if ( c >  0x20 )
		goto label_cond_28;
	if ( c >= 0x1c )
		goto label_cond_42;
	if ( 0x9 >  c )
		goto label_cond_28;
	if ( c >  0xd )
		goto label_cond_28;
label_cond_42:
	return cVar2;
	// 1088    .line 665
	// 1089    .end local v0    # "c":C
label_cond_43:
	return 0x1;

}
// .method private static isASCIIString(Ljava/lang/CharSequence;)Z
bool android::icu::impl::UTS46::isASCIIString(std::shared_ptr<java::lang::CharSequence> dest)
{
	
	int i;
	
	//    .param p0, "dest"    # Ljava/lang/CharSequence;
	//    .local v1, "length":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= dest->length() )
		goto label_cond_14;
	if ( dest->charAt(i) <= 0x7f )
		goto label_cond_11;
	return 0x0;
	// 1128    .line 83
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_5;
	// 1134    .line 88
label_cond_14:
	return 0x1;

}
// .method private isLabelOkContextJ(Ljava/lang/CharSequence;II)Z
bool android::icu::impl::UTS46::isLabelOkContextJ(std::shared_ptr<java::lang::CharSequence> label,int labelStart,int labelLength)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar3;
	int labelLimit;
	int i;
	int j;
	int c;
	int type;
	
	//    .param p1, "label"    # Ljava/lang/CharSequence;
	//    .param p2, "labelStart"    # I
	//    .param p3, "labelLength"    # I
	cVar0 = 0x9;
	cVar1 = 0x5;
	cVar2 = 0x2;
	cVar3 = 0x0;
	labelLimit = (labelStart + labelLength);
	//    .local v3, "labelLimit":I
	i = labelStart;
	//    .local v1, "i":I
label_goto_8:
	if ( i >= labelLimit )
		goto label_cond_78;
	if ( label->charAt(i) != 0x200c )
		goto label_cond_60;
	if ( i != labelStart )
		goto label_cond_15;
	return cVar3;
	// 1182    .line 685
label_cond_15:
	j = i;
	//    .local v2, "j":I
	c = java::lang::Character::codePointBefore(label, i);
	//    .local v0, "c":I
	j = (j -  java::lang::Character::charCount(c));
	if ( android::icu::impl::UTS46::uts46Norm2->getCombiningClass(c) != cVar0 )
		goto label_cond_33;
	//    .end local v0    # "c":I
	//    .end local v2    # "j":I
label_cond_27:
	i = ( i + 0x1);
	goto label_goto_8;
	// 1217    .line 698
	// 1218    .restart local v0    # "c":I
	// 1219    .restart local v2    # "j":I
	// 1220    .local v4, "type":I
label_cond_2a:
	c = java::lang::Character::codePointBefore(label, j);
	j = (j -  java::lang::Character::charCount(c));
	//    .end local v4    # "type":I
label_cond_33:
	type = android::icu::impl::UBiDiProps::INSTANCE->getJoiningType(c);
	//    .restart local v4    # "type":I
	if ( type != cVar1 )
		goto label_cond_3e;
	if ( j )     
		goto label_cond_2a;
	return cVar3;
	// 1252    .line 700
label_cond_3e:
	if ( type == 0x3 )
		goto label_cond_43;
	if ( type != cVar2 )
		goto label_cond_48;
label_cond_43:
	j = ( i + 0x1);
label_cond_45:
	if ( j != labelLimit )
		goto label_cond_49;
	return cVar3;
	// 1271    .line 703
label_cond_48:
	return cVar3;
	// 1275    .line 711
label_cond_49:
	c = java::lang::Character::codePointAt(label, j);
	j = (j +  java::lang::Character::charCount(c));
	type = android::icu::impl::UBiDiProps::INSTANCE->getJoiningType(c);
	if ( type == cVar1 )
		goto label_cond_45;
	if ( type == 0x4 )
		goto label_cond_27;
	if ( type == cVar2 )
		goto label_cond_27;
	return cVar3;
	// 1308    .line 722
	// 1309    .end local v0    # "c":I
	// 1310    .end local v2    # "j":I
	// 1311    .end local v4    # "type":I
label_cond_60:
	if ( label->charAt(i) != 0x200d )
		goto label_cond_27;
	if ( i != labelStart )
		goto label_cond_6b;
	return cVar3;
	// 1327    .line 730
label_cond_6b:
	//    .restart local v0    # "c":I
	if ( android::icu::impl::UTS46::uts46Norm2->getCombiningClass(java::lang::Character::codePointBefore(label, i)) == cVar0 )
		goto label_cond_27;
	return cVar3;
	// 1346    .line 736
	// 1347    .end local v0    # "c":I
label_cond_78:
	return 0x1;

}
// .method private static isNonASCIIDisallowedSTD3Valid(I)Z
bool android::icu::impl::UTS46::isNonASCIIDisallowedSTD3Valid(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	cVar0 = 0x1;
	if ( c == 0x2260 )
		goto label_cond_9;
	if ( c != 0x226e )
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	if ( c == 0x226f )
		goto label_cond_9;
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method private mapDevChars(Ljava/lang/StringBuilder;II)I
int android::icu::impl::UTS46::mapDevChars(std::shared_ptr<java::lang::StringBuilder> dest,int labelStart,int mappingStart)
{
	
	char cVar0;
	int length;
	int i;
	
	//    .param p1, "dest"    # Ljava/lang/StringBuilder;
	//    .param p2, "labelStart"    # I
	//    .param p3, "mappingStart"    # I
	cVar0 = 0x73;
	length = dest->length();
	//    .local v4, "length":I
	//    .local v1, "didMapDevChars":Z
	//    .local v2, "i":I
	i = mappingStart;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
label_goto_9:
	if ( i >= length )
		goto label_cond_38;
	//    .local v0, "c":C
	// switch
	{
	auto item = ( dest->charAt(i) );
	if (item == 0xdf) goto label_sswitch_16;
	if (item == 0x3c2) goto label_sswitch_25;
	if (item == 0x200c) goto label_sswitch_2e;
	if (item == 0x200d) goto label_sswitch_2e;
	}
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
label_goto_14:
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_9;
	// 1435    .line 261
label_sswitch_16:
	0x1;
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	dest->setCharAt(i, cVar0);
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	dest->insert(i, cVar0);
	length = ( length + 0x1);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_14;
	// 1463    .line 267
	// 1464    .end local v2    # "i":I
	// 1465    .restart local v3    # "i":I
label_sswitch_25:
	0x1;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	dest->setCharAt(i, 0x3c3);
	goto label_goto_14;
	// 1480    .line 272
	// 1481    .end local v2    # "i":I
	// 1482    .restart local v3    # "i":I
label_sswitch_2e:
	0x1;
	dest->delete(i, ( i + 0x1));
	length = ( length + -0x1);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_14;
	// 1501    .line 281
	// 1502    .end local v0    # "c":C
	// 1503    .end local v2    # "i":I
	// 1504    .restart local v3    # "i":I
label_cond_38:
	if ( !(0x0) )  
		goto label_cond_53;
	//    .local v5, "normalized":Ljava/lang/String;
	dest->replace(labelStart, 0x7fffffff, android::icu::impl::UTS46::uts46Norm2->normalize(dest->subSequence(labelStart, dest->length())));
	return dest->length();
	// 1536    .line 289
	// 1537    .end local v5    # "normalized":Ljava/lang/String;
label_cond_53:
	return length;
	// 1541    .line 258
	// 1542    :sswitch_data_54
	// 1543    .sparse-switch
	// 1544        0xdf -> :sswitch_16
	// 1545        0x3c2 -> :sswitch_25
	// 1546        0x200c -> :sswitch_2e
	// 1547        0x200d -> :sswitch_2e
	// 1548    .end sparse-switch

}
// .method private markBadACELabel(Ljava/lang/StringBuilder;IIZLandroid/icu/text/IDNA$Info;)I
int android::icu::impl::UTS46::markBadACELabel(std::shared_ptr<java::lang::StringBuilder> dest,int labelStart,int cVar1,bool toASCII,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	char cVar0;
	int i;
	int c;
	int cVar1;
	
	//    .param p1, "dest"    # Ljava/lang/StringBuilder;
	//    .param p2, "labelStart"    # I
	//    .param p3, "labelLength"    # I
	//    .param p4, "toASCII"    # Z
	//    .param p5, "info"    # Landroid/icu/text/IDNA$Info;
	cVar0 = 0xfffd;
	if ( !(( this->options & 0x2)) )  
		goto label_cond_34;
	//    .local v1, "disallowNonLDHDot":Z
label_goto_a:
	0x1;
	//    .local v3, "isASCII":Z
	0x1;
	//    .local v5, "onlyLDH":Z
	i = ( labelStart + 0x4);
	//    .local v2, "i":I
	//    .local v4, "limit":I
label_cond_10:
	c = dest->charAt(i);
	//    .local v0, "c":C
	if ( c >  0x7f )
		goto label_cond_44;
	if ( c != 0x2e )
		goto label_cond_36;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LABEL_HAS_DOT);
	dest->setCharAt(i, cVar0);
label_cond_26:
label_goto_26:
	i = ( i + 0x1);
	if ( i <  (labelStart + cVar1) )
		goto label_cond_10;
	if ( !(0x0) )  
		goto label_cond_47;
	dest->insert((labelStart + cVar1), cVar0);
	cVar1 = ( cVar1 + 0x1);
label_cond_33:
label_goto_33:
	return cVar1;
	// 1642    .line 484
	// 1643    .end local v0    # "c":C
	// 1644    .end local v1    # "disallowNonLDHDot":Z
	// 1645    .end local v2    # "i":I
	// 1646    .end local v3    # "isASCII":Z
	// 1647    .end local v4    # "limit":I
	// 1648    .end local v5    # "onlyLDH":Z
label_cond_34:
	0x0;
	//    .restart local v1    # "disallowNonLDHDot":Z
	goto label_goto_a;
	// 1655    .line 496
	// 1656    .restart local v0    # "c":C
	// 1657    .restart local v2    # "i":I
	// 1658    .restart local v3    # "isASCII":Z
	// 1659    .restart local v4    # "limit":I
	// 1660    .restart local v5    # "onlyLDH":Z
label_cond_36:
	if ( android::icu::impl::UTS46::asciiData[c] >= 0 )
		goto label_cond_26;
	0x0;
	if ( !(0x1) )  
		goto label_cond_26;
	dest->setCharAt(i, cVar0);
	0x0;
	goto label_goto_26;
	// 1682    .line 504
label_cond_44:
	0x0;
	0x0;
	goto label_goto_26;
	// 1690    .line 511
label_cond_47:
	if ( !(toASCII) )  
		goto label_cond_33;
	if ( !(0x0) )  
		goto label_cond_33;
	if ( cVar1 <= 0x3f )
		goto label_cond_33;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LABEL_TOO_LONG);
	goto label_goto_33;

}
// .method private process(Ljava/lang/CharSequence;ZZLjava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::UTS46::process(std::shared_ptr<java::lang::CharSequence> src,bool isLabel,bool toASCII,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int srcLength;
	int labelStart;
	int i;
	char c;
	unsigned char cData;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "isLabel"    # Z
	//    .param p3, "toASCII"    # Z
	//    .param p4, "dest"    # Ljava/lang/StringBuilder;
	//    .param p5, "info"    # Landroid/icu/text/IDNA$Info;
	if ( dest != src )
		goto label_cond_a;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 1729    .line 125
label_cond_a:
	dest->delete(0x0, 0x7fffffff);
	android::icu::impl::UTS46::resetInfo(info);
	srcLength = src->length();
	//    .local v12, "srcLength":I
	if ( srcLength )     
		goto label_cond_24;
	android::icu::impl::UTS46::addError(info, android::icu::text::IDNA_S_Error::EMPTY_LABEL);
	return dest;
	// 1761    .line 133
label_cond_24:
	if ( !(( this->options & 0x2)) )  
		goto label_cond_55;
	//    .local v11, "disallowNonLDHDot":Z
label_goto_2b:
	labelStart = 0x0;
	//    .local v3, "labelStart":I
	i = 0x0;
	//    .local v4, "i":I
label_goto_2d:
	if ( i != srcLength )
		goto label_cond_57;
	if ( !(toASCII) )  
		goto label_cond_51;
	if ( (i - labelStart) <= 0x3f )
		goto label_cond_3e;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LABEL_TOO_LONG);
label_cond_3e:
	if ( isLabel )     
		goto label_cond_51;
	if ( i <  0xfe )
		goto label_cond_51;
	if ( i >  0xfe )
		goto label_cond_4a;
	if ( labelStart >= i )
		goto label_cond_51;
label_cond_4a:
	android::icu::impl::UTS46::addError(info, android::icu::text::IDNA_S_Error::DOMAIN_NAME_TOO_LONG);
label_cond_51:
	android::icu::impl::UTS46::promoteAndResetLabelErrors(info);
	return dest;
	// 1831    .line 133
	// 1832    .end local v3    # "labelStart":I
	// 1833    .end local v4    # "i":I
	// 1834    .end local v11    # "disallowNonLDHDot":Z
label_cond_55:
	0x0;
	//    .restart local v11    # "disallowNonLDHDot":Z
	goto label_goto_2b;
	// 1841    .line 150
	// 1842    .restart local v3    # "labelStart":I
	// 1843    .restart local v4    # "i":I
label_cond_57:
	c = src->charAt(i);
	//    .local v9, "c":C
	if ( c <= 0x7f )
		goto label_cond_9a;
label_cond_5f:
label_goto_5f:
	android::icu::impl::UTS46::promoteAndResetLabelErrors(info);
	this->processUnicode(src, labelStart, i, isLabel, toASCII, dest, info);
	if ( !(android::icu::impl::UTS46::isBiDi(info)) )  
		goto label_cond_99;
	if ( !(( android::icu::impl::UTS46::hasCertainErrors(info, android::icu::impl::UTS46::severeErrors) ^ 0x1)) )  
		goto label_cond_99;
	if ( !(android::icu::impl::UTS46::isOkBiDi(info)) )  
		goto label_cond_92;
	if ( labelStart <= 0 )
		goto label_cond_99;
	if ( !(( android::icu::impl::UTS46::isASCIIOkBiDi(dest, labelStart) ^ 0x1)) )  
		goto label_cond_99;
label_cond_92:
	android::icu::impl::UTS46::addError(info, android::icu::text::IDNA_S_Error::BIDI);
label_cond_99:
	return dest;
	// 1926    .line 154
label_cond_9a:
	cData = android::icu::impl::UTS46::asciiData[c];
	//    .local v10, "cData":I
	if ( cData <= 0 )
		goto label_cond_ab;
	dest->append((char)(( c + 0x20)));
label_cond_a8:
label_goto_a8:
	i = ( i + 0x1);
	goto label_goto_2d;
	// 1952    .line 157
label_cond_ab:
	if ( cData >= 0 )
		goto label_cond_af;
	if ( 0x1 )     
		goto label_cond_5f;
label_cond_af:
	dest->append(c);
	if ( c != 0x2d )
		goto label_cond_e8;
	if ( i != ( labelStart + 0x3) )
		goto label_cond_c9;
	if ( src->charAt(( i + -0x1)) != 0x2d )
		goto label_cond_c9;
	i = ( i + 0x1);
	goto label_goto_5f;
	// 1990    .line 167
label_cond_c9:
	if ( i != labelStart )
		goto label_cond_d2;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LEADING_HYPHEN);
label_cond_d2:
	if ( ( i + 0x1) == srcLength )
		goto label_cond_e0;
	if ( src->charAt(( i + 0x1)) != 0x2e )
		goto label_cond_a8;
label_cond_e0:
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::TRAILING_HYPHEN);
	goto label_goto_a8;
	// 2027    .line 175
label_cond_e8:
	if ( c != 0x2e )
		goto label_cond_a8;
	if ( !(isLabel) )  
		goto label_cond_f2;
	i = ( i + 0x1);
	goto label_goto_5f;
	// 2042    .line 181
label_cond_f2:
	if ( i != labelStart )
		goto label_cond_fb;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::EMPTY_LABEL);
label_cond_fb:
	if ( !(toASCII) )  
		goto label_cond_10a;
	if ( (i - labelStart) <= 0x3f )
		goto label_cond_10a;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LABEL_TOO_LONG);
label_cond_10a:
	android::icu::impl::UTS46::promoteAndResetLabelErrors(info);
	labelStart = ( i + 0x1);
	goto label_goto_a8;

}
// .method private processLabel(Ljava/lang/StringBuilder;IIZLandroid/icu/text/IDNA$Info;)I
int android::icu::impl::UTS46::processLabel(std::shared_ptr<java::lang::StringBuilder> dest,int cVar0,int cVar2,bool toASCII,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	int destLabelStart;
	int destLabelLength;
	int wasPunycode;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::CharSequence> fromPunycode;
	auto labelString;
	int cVar0;
	int cVar2;
	int i;
	int oredChars;
	int disallowNonLDHDot;
	int c;
	std::shared_ptr<android::icu::util::ICUException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> punycode;
	
	//    .param p1, "dest"    # Ljava/lang/StringBuilder;
	//    .param p2, "labelStart"    # I
	//    .param p3, "labelLength"    # I
	//    .param p4, "toASCII"    # Z
	//    .param p5, "info"    # Landroid/icu/text/IDNA$Info;
	destLabelStart = cVar0;
	//    .local v7, "destLabelStart":I
	destLabelLength = cVar2;
	//    .local v8, "destLabelLength":I
	if ( cVar2 <  0x4 )
		goto label_cond_83;
	if ( dest->charAt(cVar0) != 0x78 )
		goto label_cond_83;
	if ( dest->charAt(( cVar0 + 0x1)) != 0x6e )
		goto label_cond_83;
	if ( dest->charAt(( cVar0 + 0x2)) != 0x2d )
		goto label_cond_83;
	if ( dest->charAt(( cVar0 + 0x3)) != 0x2d )
		goto label_cond_83;
	wasPunycode = 0x1;
	//    .local v22, "wasPunycode":Z
	try {
	//label_try_start_3b:
	//label_try_end_45:
	}
	catch (android::icu::text::StringPrepParseException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Landroid/icu/text/StringPrepParseException; {:try_start_3b .. :try_end_45} :catch_5a
	fromPunycode = android::icu::impl::Punycode::decode(dest->subSequence(( cVar0 + 0x4), (cVar0 + cVar2)), 0x0);
	//    .local v15, "fromPunycode":Ljava/lang/StringBuilder;
	//    .local v17, "isValid":Z
	if ( android::icu::impl::UTS46::uts46Norm2->isNormalized(fromPunycode) )     
		goto label_cond_67;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::INVALID_ACE_LABEL);
	return this->markBadACELabel(dest, cVar0, cVar2, toASCII, info);
	// 2200    .line 335
	// 2201    .end local v15    # "fromPunycode":Ljava/lang/StringBuilder;
	// 2202    .end local v17    # "isValid":Z
label_catch_5a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v14, "e":Landroid/icu/text/StringPrepParseException;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::PUNYCODE);
	return this->markBadACELabel(dest, cVar0, cVar2, toASCII, info);
	// 2221    .line 351
	// 2222    .end local v14    # "e":Landroid/icu/text/StringPrepParseException;
	// 2223    .restart local v15    # "fromPunycode":Ljava/lang/StringBuilder;
	// 2224    .restart local v17    # "isValid":Z
label_cond_67:
	labelString = fromPunycode;
	//    .local v18, "labelString":Ljava/lang/StringBuilder;
	cVar0 = 0x0;
	cVar2 = fromPunycode->length();
	//    .end local v15    # "fromPunycode":Ljava/lang/StringBuilder;
	//    .end local v17    # "isValid":Z
label_goto_6f:
	if ( cVar2 )     
		goto label_cond_88;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::EMPTY_LABEL);
	return android::icu::impl::UTS46::replaceLabel(dest, destLabelStart, destLabelLength, labelString, cVar2);
	// 2263    .line 355
	// 2264    .end local v18    # "labelString":Ljava/lang/StringBuilder;
	// 2265    .end local v22    # "wasPunycode":Z
label_cond_83:
	0x0;
	//    .restart local v22    # "wasPunycode":Z
	labelString = dest;
	//    .restart local v18    # "labelString":Ljava/lang/StringBuilder;
	goto label_goto_6f;
	// 2276    .line 364
label_cond_88:
	if ( cVar2 <  0x4 )
		goto label_cond_ac;
	if ( labelString->charAt(( cVar0 + 0x2)) != 0x2d )
		goto label_cond_ac;
	if ( labelString->charAt(( cVar0 + 0x3)) != 0x2d )
		goto label_cond_ac;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::HYPHEN_3_4);
label_cond_ac:
	if ( labelString->charAt(cVar0) != 0x2d )
		goto label_cond_bf;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LEADING_HYPHEN);
label_cond_bf:
	if ( labelString->charAt(( (cVar0 + cVar2) + -0x1)) != 0x2d )
		goto label_cond_d4;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::TRAILING_HYPHEN);
label_cond_d4:
	i = cVar0;
	//    .local v16, "i":I
	//    .local v19, "limit":I
	oredChars = 0x0;
	//    .local v20, "oredChars":C
	if ( !(( this->options & 0x2)) )  
		goto label_cond_1c1;
	disallowNonLDHDot = 0x1;
	//    .end local v20    # "oredChars":C
	//    .local v13, "disallowNonLDHDot":Z
label_cond_e3:
label_goto_e3:
	c = labelString->charAt(i);
	//    .local v11, "c":C
	if ( c >  0x7f )
		goto label_cond_1df;
	if ( c != 0x2e )
		goto label_cond_1c4;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LABEL_HAS_DOT);
	labelString->setCharAt(i, 0xfffd);
label_cond_104:
label_goto_104:
	i = ( i + 0x1);
	if ( i <  (cVar0 + cVar2) )
		goto label_cond_e3;
	c = labelString->codePointAt(cVar0);
	//    .local v12, "c":I
	if ( !((android::icu::impl::UTS46::U_GET_GC_MASK(c) &  android::icu::impl::UTS46::U_GC_M_MASK)) )  
		goto label_cond_144;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LEADING_COMBINING_MARK);
	labelString->setCharAt(cVar0, 0xfffd);
	if ( c <= 0xffff )
		goto label_cond_144;
	labelString->deleteCharAt(( cVar0 + 0x1));
	cVar2 = ( cVar2 + -0x1);
	if ( labelString != dest )
		goto label_cond_144;
	destLabelLength = ( destLabelLength + -0x1);
label_cond_144:
	if ( android::icu::impl::UTS46::hasCertainLabelErrors(info, android::icu::impl::UTS46::severeErrors) )     
		goto label_cond_266;
	if ( !(( this->options & 0x4)) )  
		goto label_cond_16f;
	if ( !(android::icu::impl::UTS46::isBiDi(info)) )  
		goto label_cond_162;
	if ( !(android::icu::impl::UTS46::isOkBiDi(info)) )  
		goto label_cond_16f;
label_cond_162:
	this->checkLabelBiDi(labelString, cVar0, cVar2, info);
label_cond_16f:
	if ( !(( this->options & 0x8)) )  
		goto label_cond_196;
	if ( ( oredChars & 0x200c) != 0x200c )
		goto label_cond_196;
	if ( !(( this->isLabelOkContextJ(labelString, cVar0, cVar2) ^ 0x1)) )  
		goto label_cond_196;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::CONTEXTJ);
label_cond_196:
	if ( !(( this->options & 0x40)) )  
		goto label_cond_1b1;
	if ( oredChars <  0xb7 )
		goto label_cond_1b1;
	this->checkLabelContextO(labelString, cVar0, cVar2, info);
label_cond_1b1:
	if ( !(toASCII) )  
		goto label_cond_25b;
	if ( !(wasPunycode) )  
		goto label_cond_20d;
	if ( destLabelLength <= 0x3f )
		goto label_cond_1c0;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LABEL_TOO_LONG);
label_cond_1c0:
	return destLabelLength;
	// 2639    .line 389
	// 2640    .end local v11    # "c":C
	// 2641    .end local v12    # "c":I
	// 2642    .end local v13    # "disallowNonLDHDot":Z
	// 2643    .restart local v20    # "oredChars":C
label_cond_1c1:
	//    .restart local v13    # "disallowNonLDHDot":Z
	goto label_goto_e3;
	// 2650    .line 396
	// 2651    .end local v20    # "oredChars":C
	// 2652    .restart local v11    # "c":C
label_cond_1c4:
	if ( !(disallowNonLDHDot) )  
		goto label_cond_104;
	if ( android::icu::impl::UTS46::asciiData[c] >= 0 )
		goto label_cond_104;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::DISALLOWED);
	labelString->setCharAt(i, 0xfffd);
	goto label_goto_104;
	// 2680    .line 401
label_cond_1df:
	//    .local v20, "oredChars":C
	if ( !(disallowNonLDHDot) )  
		goto label_cond_1ff;
	if ( !(android::icu::impl::UTS46::isNonASCIIDisallowedSTD3Valid(c)) )  
		goto label_cond_1ff;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::DISALLOWED);
	labelString->setCharAt(i, 0xfffd);
	goto label_goto_104;
	// 2716    .line 405
label_cond_1ff:
	if ( c != 0xfffd )
		goto label_cond_104;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::DISALLOWED);
	goto label_goto_104;
	// 2731    .line 449
	// 2732    .end local v20    # "oredChars":C
	// 2733    .restart local v12    # "c":I
label_cond_20d:
	if ( oredChars <  0x80 )
		goto label_cond_24e;
	try {
	//label_try_start_215:
	//label_try_end_221:
	}
	catch (android::icu::text::StringPrepParseException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_247;
	}
	//    .catch Landroid/icu/text/StringPrepParseException; {:try_start_215 .. :try_end_221} :catch_247
	punycode = android::icu::impl::Punycode::encode(labelString->subSequence(cVar0, (cVar0 + cVar2)), 0x0);
	//    .local v21, "punycode":Ljava/lang/StringBuilder;
	punycode->insert(0x0, std::make_shared<java::lang::String>(std::make_shared<char[]>("xn--")));
	if ( punycode->length() <= 0x3f )
		goto label_cond_23a;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LABEL_TOO_LONG);
label_cond_23a:
	return android::icu::impl::UTS46::replaceLabel(dest, destLabelStart, destLabelLength, punycode, punycode->length());
	// 2804    .line 454
	// 2805    .end local v21    # "punycode":Ljava/lang/StringBuilder;
label_catch_247:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v14    # "e":Landroid/icu/text/StringPrepParseException;
	cVar3 = std::make_shared<android::icu::util::ICUException>(getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 2817    .line 465
	// 2818    .end local v14    # "e":Landroid/icu/text/StringPrepParseException;
label_cond_24e:
	if ( cVar2 <= 0x3f )
		goto label_cond_25b;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::LABEL_TOO_LONG);
label_cond_25b:
	return android::icu::impl::UTS46::replaceLabel(dest, destLabelStart, destLabelLength, labelString, cVar2);
	// 2847    .line 473
label_cond_266:
	if ( !(wasPunycode) )  
		goto label_cond_25b;
	android::icu::impl::UTS46::addLabelError(info, android::icu::text::IDNA_S_Error::INVALID_ACE_LABEL);
	return this->markBadACELabel(dest, destLabelStart, destLabelLength, toASCII, info);

}
// .method private processUnicode(Ljava/lang/CharSequence;IIZZLjava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::UTS46::processUnicode(std::shared_ptr<java::lang::CharSequence> src,int labelStart,int mappingStart,bool isLabel,bool toASCII,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	int doMapDevChars;
	int destLength;
	int labelLimit;
	int c;
	int labelLength;
	int newLength;
	int labelStart;
	
	//    .param p1, "src"    # Ljava/lang/CharSequence;
	//    .param p2, "labelStart"    # I
	//    .param p3, "mappingStart"    # I
	//    .param p4, "isLabel"    # Z
	//    .param p5, "toASCII"    # Z
	//    .param p6, "dest"    # Ljava/lang/StringBuilder;
	//    .param p7, "info"    # Landroid/icu/text/IDNA$Info;
	if ( mappingStart )     
		goto label_cond_4e;
	android::icu::impl::UTS46::uts46Norm2->normalize(src, dest);
label_goto_b:
	if ( !(toASCII) )  
		goto label_cond_65;
	if ( ( this->options & 0x10) )     
		goto label_cond_62;
	doMapDevChars = 0x1;
	//    .local v16, "doMapDevChars":Z
label_goto_17:
	destLength = dest->length();
	//    .local v15, "destLength":I
	labelLimit = labelStart;
	//    .local v17, "labelLimit":I
label_goto_1d:
	if ( labelLimit >= destLength )
		goto label_cond_a2;
	c = dest->charAt(labelLimit);
	//    .local v14, "c":C
	if ( c != 0x2e )
		goto label_cond_73;
	if ( !(( isLabel ^ 0x1)) )  
		goto label_cond_73;
	labelLength = (labelLimit - labelStart);
	//    .local v7, "labelLength":I
	newLength = this->processLabel(dest, labelStart, labelLength, toASCII, info);
	//    .local v18, "newLength":I
	android::icu::impl::UTS46::promoteAndResetLabelErrors(info);
	destLength = (destLength +  (newLength - labelLength));
	labelStart = (labelStart + ( newLength + 0x1));
	labelLimit = labelStart;
	goto label_goto_1d;
	// 2985    .line 211
	// 2986    .end local v7    # "labelLength":I
	// 2987    .end local v14    # "c":C
	// 2988    .end local v15    # "destLength":I
	// 2989    .end local v16    # "doMapDevChars":Z
	// 2990    .end local v17    # "labelLimit":I
	// 2991    .end local v18    # "newLength":I
label_cond_4e:
	android::icu::impl::UTS46::uts46Norm2->normalizeSecondAndAppend(dest, src->subSequence(mappingStart, src->length()));
	goto label_goto_b;
	// 3013    .line 214
label_cond_62:
	doMapDevChars = 0x0;
	//    .restart local v16    # "doMapDevChars":Z
	goto label_goto_17;
	// 3020    .line 215
	// 3021    .end local v16    # "doMapDevChars":Z
label_cond_65:
	if ( ( this->options & 0x20) )     
		goto label_cond_70;
	doMapDevChars = 0x1;
	//    .restart local v16    # "doMapDevChars":Z
	goto label_goto_17;
	// 3036    .end local v16    # "doMapDevChars":Z
label_cond_70:
	doMapDevChars = 0x0;
	//    .restart local v16    # "doMapDevChars":Z
	goto label_goto_17;
	// 3043    .line 227
	// 3044    .restart local v14    # "c":C
	// 3045    .restart local v15    # "destLength":I
	// 3046    .restart local v17    # "labelLimit":I
label_cond_73:
	if ( 0xdf >  c )
		goto label_cond_9b;
	if ( c >  0x200d )
		goto label_cond_9b;
	if ( c == 0xdf )
		goto label_cond_83;
	if ( c != 0x3c2 )
		goto label_cond_97;
label_cond_83:
	android::icu::impl::UTS46::setTransitionalDifferent(info);
	if ( !(doMapDevChars) )  
		goto label_cond_9e;
	destLength = this->mapDevChars(dest, labelStart, labelLimit);
	doMapDevChars = 0x0;
	goto label_goto_1d;
	// 3089    .line 227
label_cond_97:
	if ( c >= 0x200c )
		goto label_cond_83;
label_cond_9b:
	labelLimit = ( labelLimit + 0x1);
	goto label_goto_1d;
	// 3101    .line 235
label_cond_9e:
	labelLimit = ( labelLimit + 0x1);
	goto label_goto_1d;
	// 3107    .line 244
	// 3108    .end local v14    # "c":C
label_cond_a2:
	if ( !(labelStart) )  
		goto label_cond_aa;
	if ( labelStart >= labelLimit )
		goto label_cond_bc;
label_cond_aa:
	this->processLabel(dest, labelStart, (labelLimit - labelStart), toASCII, info);
	android::icu::impl::UTS46::promoteAndResetLabelErrors(info);
label_cond_bc:
	return dest;

}
// .method private static replaceLabel(Ljava/lang/StringBuilder;IILjava/lang/CharSequence;I)I
int android::icu::impl::UTS46::replaceLabel(std::shared_ptr<java::lang::StringBuilder> dest,int destLabelStart,int destLabelLength,std::shared_ptr<java::lang::CharSequence> label,int labelLength)
{
	
	//    .param p0, "dest"    # Ljava/lang/StringBuilder;
	//    .param p1, "destLabelStart"    # I
	//    .param p2, "destLabelLength"    # I
	//    .param p3, "label"    # Ljava/lang/CharSequence;
	//    .param p4, "labelLength"    # I
	if ( label == dest )
		goto label_cond_b;
	dest->delete(destLabelStart, (destLabelStart + destLabelLength))->insert(destLabelStart, label);
label_cond_b:
	return labelLength;

}
// .method public labelToASCII(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::UTS46::labelToASCII(std::shared_ptr<java::lang::CharSequence> label,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	bool cVar0;
	
	//    .param p1, "label"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	//    .param p3, "info"    # Landroid/icu/text/IDNA$Info;
	cVar0 = 0x1;
	return this->process(label, cVar0, cVar0, dest, info);

}
// .method public labelToUnicode(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::UTS46::labelToUnicode(std::shared_ptr<java::lang::CharSequence> label,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	//    .param p1, "label"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	//    .param p3, "info"    # Landroid/icu/text/IDNA$Info;
	return this->process(label, 0x1, 0x0, dest, info);

}
// .method public nameToASCII(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::UTS46::nameToASCII(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	int cVar0;
	
	//    .param p1, "name"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	//    .param p3, "info"    # Landroid/icu/text/IDNA$Info;
	cVar0 = 0xfe;
	this->process(name, 0x0, 0x1, dest, info);
	if ( dest->length() <  cVar0 )
		goto label_cond_3a;
	if ( !(( info->getErrors()->contains(android::icu::text::IDNA_S_Error::DOMAIN_NAME_TOO_LONG) ^ 0x1)) )  
		goto label_cond_3a;
	if ( !(android::icu::impl::UTS46::isASCIIString(dest)) )  
		goto label_cond_3a;
	if ( dest->length() >  cVar0 )
		goto label_cond_35;
	if ( dest->charAt(0xfd) == 0x2e )
		goto label_cond_3a;
label_cond_35:
	android::icu::impl::UTS46::addError(info, android::icu::text::IDNA_S_Error::DOMAIN_NAME_TOO_LONG);
label_cond_3a:
	return dest;

}
// .method public nameToUnicode(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;Landroid/icu/text/IDNA$Info;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::UTS46::nameToUnicode(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info)
{
	
	bool cVar0;
	
	//    .param p1, "name"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	//    .param p3, "info"    # Landroid/icu/text/IDNA$Info;
	cVar0 = 0x0;
	return this->process(name, cVar0, cVar0, dest, info);

}


