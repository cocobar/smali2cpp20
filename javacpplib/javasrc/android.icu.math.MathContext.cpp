// CPP L:\smali2cpp20\x64\Release\out\android\icu\math\MathContext.smali
#include "java2ctype.h"
#include "android.icu.math.MathContext.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::math::MathContext::DEFAULT;
static android::icu::math::MathContext::DEFAULT_DIGITS = 0x9;
static android::icu::math::MathContext::DEFAULT_FORM = 0x1;
static android::icu::math::MathContext::DEFAULT_LOSTDIGITS = false;
static android::icu::math::MathContext::DEFAULT_ROUNDINGMODE = 0x4;
static android::icu::math::MathContext::ENGINEERING = 0x2;
static android::icu::math::MathContext::MAX_DIGITS = 0x3b9ac9ff;
static android::icu::math::MathContext::MIN_DIGITS = 0x0;
static android::icu::math::MathContext::PLAIN = 0x0;
static android::icu::math::MathContext::ROUNDS;
static android::icu::math::MathContext::ROUNDWORDS;
static android::icu::math::MathContext::ROUND_CEILING = 0x2;
static android::icu::math::MathContext::ROUND_DOWN = 0x1;
static android::icu::math::MathContext::ROUND_FLOOR = 0x3;
static android::icu::math::MathContext::ROUND_HALF_DOWN = 0x5;
static android::icu::math::MathContext::ROUND_HALF_EVEN = 0x6;
static android::icu::math::MathContext::ROUND_HALF_UP = 0x4;
static android::icu::math::MathContext::ROUND_UNNECESSARY = 0x7;
static android::icu::math::MathContext::ROUND_UP = 0x0;
static android::icu::math::MathContext::SCIENTIFIC = 0x1;
static android::icu::math::MathContext::serialVersionUID = 0x63696d6d63313030L;
// .method static constructor <clinit>()V
void android::icu::math::MathContext::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar3;
	std::shared<std::vector<int[]>> cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared_ptr<android::icu::math::MathContext> cVar6;
	
	cVar0 = 0x8;
	cVar1 = 0x4;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	android::icu::math::MathContext::ROUNDS = cVar4;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ROUND_HALF_UP"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ROUND_UNNECESSARY"));
	cVar5[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ROUND_CEILING"));
	cVar5[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ROUND_DOWN"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ROUND_FLOOR"));
	cVar5[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ROUND_HALF_DOWN"));
	cVar5[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ROUND_HALF_EVEN"));
	cVar5[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ROUND_UP"));
	android::icu::math::MathContext::ROUNDWORDS = cVar5;
	cVar6 = std::make_shared<android::icu::math::MathContext>(0x9, cVar2, cVar3, cVar1);
	android::icu::math::MathContext::DEFAULT = cVar6;
	return;
	// 142    .line 302
	// 143    nop
	// 145    :array_48
	// 146    .array-data 4
	// 147        0x4
	// 148        0x7
	// 149        0x2
	// 150        0x1
	// 151        0x3
	// 152        0x5
	// 153        0x6
	// 154        0x0
	// 155    .end array-data

}
// .method public constructor <init>(I)V
android::icu::math::MathContext::MathContext(int setdigits)
{
	
	//    .param p1, "setdigits"    # I
	android::icu::math::MathContext::(setdigits, 0x1, 0x0, 0x4);
	return;

}
// .method public constructor <init>(II)V
android::icu::math::MathContext::MathContext(int setdigits,int setform)
{
	
	//    .param p1, "setdigits"    # I
	//    .param p2, "setform"    # I
	android::icu::math::MathContext::(setdigits, setform, 0x0, 0x4);
	return;

}
// .method public constructor <init>(IIZ)V
android::icu::math::MathContext::MathContext(int setdigits,int setform,bool setlostdigits)
{
	
	//    .param p1, "setdigits"    # I
	//    .param p2, "setform"    # I
	//    .param p3, "setlostdigits"    # Z
	android::icu::math::MathContext::(setdigits, setform, setlostdigits, 0x4);
	return;

}
// .method public constructor <init>(IIZI)V
android::icu::math::MathContext::MathContext(int setdigits,int setform,bool setlostdigits,int setroundingmode)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	
	//    .param p1, "setdigits"    # I
	//    .param p2, "setform"    # I
	//    .param p3, "setlostdigits"    # Z
	//    .param p4, "setroundingmode"    # I
	// 218    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( setdigits == 0x9 )
		goto label_cond_42;
	if ( setdigits >= 0 )
		goto label_cond_23;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Digits too small: ")))->append(setdigits)->toString());
	// throw
	throw cVar0;
	// 253    .line 429
label_cond_23:
	if ( setdigits <= 0x3b9ac9ff )
		goto label_cond_42;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Digits too large: ")))->append(setdigits)->toString());
	// throw
	throw cVar2;
	// 284    .line 433
label_cond_42:
	if ( setform != 0x1 )
		goto label_cond_65;
label_cond_45:
	if ( android::icu::math::MathContext::isValidRound(setroundingmode) )     
		goto label_cond_84;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad roundingMode value: ")))->append(setroundingmode)->toString());
	// throw
	throw cVar4;
	// 323    .line 435
label_cond_65:
	if ( setform == 0x2 )
		goto label_cond_45;
	if ( !(setform) )  
		goto label_cond_45;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad form value: ")))->append(setform)->toString());
	// throw
	throw cVar6;
	// 357    .line 443
label_cond_84:
	this->digits = setdigits;
	this->form = setform;
	this->lostDigits = setlostdigits;
	this->roundingMode = setroundingmode;
	return;

}
// .method private static isValidRound(I)Z
bool android::icu::math::MathContext::isValidRound(int testround)
{
	
	int r;
	int _S_2;
	
	//    .param p0, "testround"    # I
	r = 0x0;
	//    .local v1, "r":I
	_S_2 = android::icu::math::MathContext::ROUNDS->size();
	//    .local v0, "$2":I
	r = 0x0;
label_goto_6:
	if ( _S_2 <= 0 )
		goto label_cond_15;
	if ( testround != android::icu::math::MathContext::ROUNDS[r] )
		goto label_cond_10;
	return 0x1;
	// 408    .line 576
label_cond_10:
	_S_2 = ( _S_2 + -0x1);
	r = ( r + 0x1);
	goto label_goto_6;
	// 416    .line 581
label_cond_15:
	return 0x0;

}
// .method public getDigits()I
int android::icu::math::MathContext::getDigits()
{
	
	return this->digits;

}
// .method public getForm()I
int android::icu::math::MathContext::getForm()
{
	
	return this->form;

}
// .method public getLostDigits()Z
bool android::icu::math::MathContext::getLostDigits()
{
	
	return this->lostDigits;

}
// .method public getRoundingMode()I
int android::icu::math::MathContext::getRoundingMode()
{
	
	return this->roundingMode;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::math::MathContext::toString()
{
	
	int r;
	int _S_1;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	0x0;
	//    .local v1, "formstr":Ljava/lang/String;
	r = 0x0;
	//    .local v2, "r":I
	//    .local v3, "roundword":Ljava/lang/String;
	if ( this->form != 0x1 )
		goto label_cond_71;
	//    .local v1, "formstr":Ljava/lang/String;
label_goto_b:
	_S_1 = android::icu::math::MathContext::ROUNDS->size();
	//    .local v0, "$1":I
	r = 0x0;
label_goto_f:
	if ( _S_1 <= 0 )
		goto label_cond_1d;
	if ( this->roundingMode != android::icu::math::MathContext::ROUNDS[r] )
		goto label_cond_7e;
	//    .end local v3    # "roundword":Ljava/lang/String;
label_cond_1d:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->lostDigits) )  
		goto label_cond_83;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("1"));
label_goto_56:
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("digits=")))->append(this->digits)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("form=")))->append(formstr)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("lostDigits=")))->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("roundingMode=")))->append(0x0)->toString();
	// 596    .line 553
	// 597    .end local v0    # "$1":I
	// 598    .local v1, "formstr":Ljava/lang/String;
	// 599    .restart local v3    # "roundword":Ljava/lang/String;
label_cond_71:
	if ( this->form != 0x2 )
		goto label_cond_7a;
	//    .local v1, "formstr":Ljava/lang/String;
	goto label_goto_b;
	// 613    .line 556
	// 614    .local v1, "formstr":Ljava/lang/String;
label_cond_7a:
	//    .local v1, "formstr":Ljava/lang/String;
	goto label_goto_b;
	// 621    .line 559
	// 622    .restart local v0    # "$1":I
label_cond_7e:
	_S_1 = ( _S_1 + -0x1);
	r = ( r + 0x1);
	goto label_goto_f;
	// 630    .line 567
	// 631    .end local v3    # "roundword":Ljava/lang/String;
label_cond_83:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("0"));
	goto label_goto_56;

}


