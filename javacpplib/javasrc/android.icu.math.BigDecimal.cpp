// CPP L:\smali2cpp20\x64\Release\out\android\icu\math\BigDecimal.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.math.MathContext.h"
#include "java.lang.ArithmeticException.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"

static android::icu::math::BigDecimal::MaxArg = 0x3b9ac9ff;
static android::icu::math::BigDecimal::MaxExp = 0x3b9ac9ff;
static android::icu::math::BigDecimal::MinArg = -0x3b9ac9ff;
static android::icu::math::BigDecimal::MinExp = -0x3b9ac9ff;
static android::icu::math::BigDecimal::ONE;
static android::icu::math::BigDecimal::ROUND_CEILING = 0x2;
static android::icu::math::BigDecimal::ROUND_DOWN = 0x1;
static android::icu::math::BigDecimal::ROUND_FLOOR = 0x3;
static android::icu::math::BigDecimal::ROUND_HALF_DOWN = 0x5;
static android::icu::math::BigDecimal::ROUND_HALF_EVEN = 0x6;
static android::icu::math::BigDecimal::ROUND_HALF_UP = 0x4;
static android::icu::math::BigDecimal::ROUND_UNNECESSARY = 0x7;
static android::icu::math::BigDecimal::ROUND_UP = 0x0;
static android::icu::math::BigDecimal::TEN;
static android::icu::math::BigDecimal::ZERO;
static android::icu::math::BigDecimal::bytecar = nullptr;
static android::icu::math::BigDecimal::bytedig = nullptr;
static android::icu::math::BigDecimal::isneg = -0x1t;
static android::icu::math::BigDecimal::ispos = 0x1t;
static android::icu::math::BigDecimal::iszero = 0x0t;
static android::icu::math::BigDecimal::plainMC;
static android::icu::math::BigDecimal::serialVersionUID = 0x726d636b3a313030L;
// .method static constructor <clinit>()V
void android::icu::math::BigDecimal::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<android::icu::math::BigDecimal> cVar1;
	std::shared_ptr<android::icu::math::BigDecimal> cVar2;
	std::shared_ptr<android::icu::math::BigDecimal> cVar3;
	std::shared_ptr<android::icu::math::MathContext> cVar4;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::math::BigDecimal>(0x0);
	android::icu::math::BigDecimal::ZERO = cVar1;
	cVar2 = std::make_shared<android::icu::math::BigDecimal>(0x1);
	android::icu::math::BigDecimal::ONE = cVar2;
	cVar3 = std::make_shared<android::icu::math::BigDecimal>(0xa);
	android::icu::math::BigDecimal::TEN = cVar3;
	cVar4 = std::make_shared<android::icu::math::MathContext>(cVar0, cVar0);
	android::icu::math::BigDecimal::plainMC = cVar4;
	android::icu::math::BigDecimal::bytecar = std::make_shared<std::vector<unsigned char[]>>(0xbe);
	android::icu::math::BigDecimal::bytedig = android::icu::math::BigDecimal::diginit({const[class].FS-Param});
	return;

}
// .method private constructor <init>()V
android::icu::math::BigDecimal::BigDecimal()
{
	
	// 143    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->form = 0x0;
	return;

}
// .method public constructor <init>(D)V
android::icu::math::BigDecimal::BigDecimal(double num)
{
	
	std::shared_ptr<java::math::BigDecimal> cVar0;
	
	//    .param p1, "num"    # D
	cVar0 = std::make_shared<java::math::BigDecimal>(num);
	android::icu::math::BigDecimal::(cVar0->toString());
	return;

}
// .method public constructor <init>(I)V
android::icu::math::BigDecimal::BigDecimal(int cVar3)
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	unsigned char cVar2;
	int i;
	int cVar3;
	int mun;
	
	//    .param p1, "num"    # I
	cVar0 = -0x1;
	cVar1 = 0x1;
	cVar2 = 0x0;
	// 186    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->form = cVar2;
	i = 0x0;
	//    .local v0, "i":I
	if ( cVar3 >  0x9 )
		goto label_cond_49;
	if ( cVar3 <  -0x9 )
		goto label_cond_49;
	if ( cVar3 )     
		goto label_cond_1c;
	this->mant = android::icu::math::BigDecimal::ZERO->mant;
	this->ind = cVar2;
label_goto_1b:
	return;
	// 222    .line 767
label_cond_1c:
	if ( cVar3 != cVar1 )
		goto label_cond_27;
	this->mant = android::icu::math::BigDecimal::ONE->mant;
	this->ind = cVar1;
	goto label_goto_1b;
	// 238    .line 770
label_cond_27:
	if ( cVar3 != cVar0 )
		goto label_cond_32;
	this->mant = android::icu::math::BigDecimal::ONE->mant;
	this->ind = cVar0;
	goto label_goto_1b;
	// 254    .line 775
label_cond_32:
	this->mant = std::make_shared<std::vector<unsigned char[]>>(cVar1);
	if ( cVar3 <= 0 )
		goto label_cond_40;
	this->mant[cVar2] = (unsigned char)(cVar3);
	this->ind = cVar1;
	goto label_goto_1b;
	// 275    .line 780
label_cond_40:
	this->mant[cVar2] = (unsigned char)((0 - cVar3));
	this->ind = cVar0;
	goto label_goto_1b;
	// 290    .line 791
label_cond_49:
	if ( cVar3 <= 0 )
		goto label_cond_6d;
	this->ind = cVar1;
	cVar3 = (0 - cVar3);
label_goto_4e:
	//    .local v1, "mun":I
	i = 0x9;
label_goto_51:
	mun = ( mun / 0xa);
	if ( mun )     
		goto label_cond_70;
	this->mant = std::make_shared<std::vector<unsigned char[]>>(( i - 0xa));
	i = ( ( i - 0xa) + -0x1);
label_goto_5f:
	this->mant[i] = (unsigned char)((0 - (unsigned char)(( cVar3 % 0xa))));
	cVar3 = ( cVar3 / 0xa);
	if ( cVar3 )     
		goto label_cond_73;
	return;
	// 350    .line 795
	// 351    .end local v1    # "mun":I
label_cond_6d:
	this->ind = cVar0;
	goto label_goto_4e;
	// 357    .line 802
	// 358    .restart local v1    # "mun":I
label_cond_70:
	i = ( i + -0x1);
	goto label_goto_51;
	// 364    .line 812
label_cond_73:
	i = ( i + -0x1);
	goto label_goto_5f;

}
// .method public constructor <init>(J)V
android::icu::math::BigDecimal::BigDecimal(long long cVar3)
{
	
	unsigned char cVar0;
	long long cVar1;
	long long cVar2;
	int i;
	long long cVar3;
	long long mun;
	
	//    .param p1, "num"    # J
	cVar0 = 0x0;
	cVar1 = 0xa;
	cVar2 = 0x0;
	// 383    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->form = cVar0;
	i = 0x0;
	//    .local v0, "i":I
	if ( (cVar3 > cVar2) <= 0 )
		goto label_cond_35;
	this->ind = 0x1;
	cVar3 = (0 - cVar3);
label_goto_13:
	//    .local v2, "mun":J
	i = 0x12;
label_goto_16:
	mun = (mun /  cVar1);
	if ( (mun > cVar2) )     
		goto label_cond_40;
	this->mant = std::make_shared<std::vector<unsigned char[]>>(( i - 0x13));
	i = ( ( i - 0x13) + -0x1);
label_goto_25:
	this->mant[i] = (unsigned char)((0 - (unsigned char)((int)((cVar3 % cVar1)))));
	cVar3 = (cVar3 /  cVar1);
	if ( (cVar3 > cVar2) )     
		goto label_cond_43;
	return;
	// 461    .line 843
	// 462    .end local v2    # "mun":J
label_cond_35:
	if ( (cVar3 > cVar2) )     
		goto label_cond_3c;
	this->ind = cVar0;
	goto label_goto_13;
	// 473    .line 846
label_cond_3c:
	this->ind = -0x1;
	goto label_goto_13;
	// 481    .line 850
	// 482    .restart local v2    # "mun":J
label_cond_40:
	i = ( i + -0x1);
	goto label_goto_16;
	// 488    .line 860
label_cond_43:
	i = ( i + -0x1);
	goto label_goto_25;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::math::BigDecimal::BigDecimal(std::shared_ptr<java::lang::String> string)
{
	
	//    .param p1, "string"    # Ljava/lang/String;
	android::icu::math::BigDecimal::(string->toCharArray(), 0x0, string->length());
	return;

}
// .method public constructor <init>(Ljava/math/BigDecimal;)V
android::icu::math::BigDecimal::BigDecimal(std::shared_ptr<java::math::BigDecimal> bd)
{
	
	//    .param p1, "bd"    # Ljava/math/BigDecimal;
	android::icu::math::BigDecimal::(bd->toString());
	return;

}
// .method public constructor <init>(Ljava/math/BigInteger;)V
android::icu::math::BigDecimal::BigDecimal(std::shared_ptr<java::math::BigInteger> bi)
{
	
	//    .param p1, "bi"    # Ljava/math/BigInteger;
	android::icu::math::BigDecimal::(bi->toString(0xa));
	return;

}
// .method public constructor <init>(Ljava/math/BigInteger;I)V
android::icu::math::BigDecimal::BigDecimal(std::shared_ptr<java::math::BigInteger> bi,int scale)
{
	
	std::shared_ptr<java::lang::NumberFormatException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "bi"    # Ljava/math/BigInteger;
	//    .param p2, "scale"    # I
	android::icu::math::BigDecimal::(bi->toString(0xa));
	if ( scale >= 0 )
		goto label_cond_25;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::NumberFormatException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative scale: ")))->append(scale)->toString());
	// throw
	throw cVar0;
	// 594    .line 464
label_cond_25:
	this->exp = (0 - scale);
	return;

}
// .method public constructor <init>([C)V
android::icu::math::BigDecimal::BigDecimal(std::shared_ptr<char[]> inchars)
{
	
	//    .param p1, "inchars"    # [C
	android::icu::math::BigDecimal::(inchars, 0x0, inchars->size());
	return;

}
// .method public constructor <init>([CII)V
android::icu::math::BigDecimal::BigDecimal(std::shared_ptr<char[]> inchars,int cVar1,int cVar0)
{
	
	int i;
	int eneg;
	int k;
	int j;
	int dvalue;
	int cVar0;
	int cVar1;
	int d;
	int dotoff;
	int _S_1;
	int si;
	int elen;
	int cVar4;
	int cVar5;
	int _S_2;
	int sj;
	int hadexp;
	char si;
	int _S_4;
	int mag;
	int cVar11;
	int cVar12;
	int _S_5;
	
	//    .param p1, "inchars"    # [C
	//    .param p2, "offset"    # I
	//    .param p3, "length"    # I
	// 628    invoke-direct/range {p0 .. p0}, Ljava/lang/Number;-><init>()V
	this->form = 0x0;
	i = 0x0;
	//    .local v14, "i":I
	0x0;
	//    .local v19, "si":C
	eneg = 0x0;
	//    .local v11, "eneg":Z
	k = 0x0;
	//    .local v16, "k":I
	0x0;
	//    .local v10, "elen":I
	j = 0x0;
	//    .local v15, "j":I
	0x0;
	//    .local v20, "sj":C
	dvalue = 0x0;
	//    .local v9, "dvalue":I
	0x0;
	//    .local v18, "mag":I
	if ( cVar0 > 0 ) 
		goto label_cond_1d;
	this->bad(inchars);
label_cond_1d:
	this->ind = 0x1;
	if ( inchars[cVar1] != 0x2d )
		goto label_cond_67;
	cVar0 = ( cVar0 + -0x1);
	if ( cVar0 )     
		goto label_cond_36;
	this->bad(inchars);
label_cond_36:
	this->ind = -0x1;
	cVar1 = ( cVar1 + 0x1);
label_cond_40:
label_goto_40:
	//    .local v12, "exotic":Z
	//    .local v13, "hadexp":Z
	d = 0x0;
	//    .local v7, "d":I
	dotoff = -0x1;
	//    .local v8, "dotoff":I
	//    .local v17, "last":I
	_S_1 = cVar0;
	//    .local v2, "$1":I
	i = cVar1;
	//    .end local v19    # "si":C
label_goto_4a:
	if ( _S_1 <= 0 )
		goto label_cond_154;
	si = inchars[i];
	//    .local v19, "si":C
	if ( si <  0x30 )
		goto label_cond_7b;
	if ( si >  0x39 )
		goto label_cond_7b;
	i;
	d = ( d + 0x1);
label_goto_62:
	_S_1 = ( _S_1 + -0x1);
	i = ( i + 0x1);
	goto label_goto_4a;
	// 794    .line 537
	// 795    .end local v2    # "$1":I
	// 796    .end local v7    # "d":I
	// 797    .end local v8    # "dotoff":I
	// 798    .end local v12    # "exotic":Z
	// 799    .end local v13    # "hadexp":Z
	// 800    .end local v17    # "last":I
	// 801    .local v19, "si":C
label_cond_67:
	if ( inchars[cVar1] != 0x2b )
		goto label_cond_40;
	cVar0 = ( cVar0 + -0x1);
	if ( cVar0 )     
		goto label_cond_78;
	this->bad(inchars);
label_cond_78:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_40;
	// 828    .line 561
	// 829    .restart local v2    # "$1":I
	// 830    .restart local v7    # "d":I
	// 831    .restart local v8    # "dotoff":I
	// 832    .restart local v12    # "exotic":Z
	// 833    .restart local v13    # "hadexp":Z
	// 834    .restart local v17    # "last":I
	// 835    .local v19, "si":C
label_cond_7b:
	if ( si != 0x2e )
		goto label_cond_8b;
	if ( dotoff < 0 ) 
		goto label_cond_88;
	this->bad(inchars);
label_cond_88:
	dotoff = (i - cVar1);
	goto label_goto_62;
	// 858    .line 567
label_cond_8b:
	if ( si == 0x65 )
		goto label_cond_aa;
	if ( si == 0x45 )
		goto label_cond_aa;
	if ( android::icu::lang::UCharacter::isDigit(si) )     
		goto label_cond_a4;
	this->bad(inchars);
label_cond_a4:
	0x1;
	i;
	d = ( d + 0x1);
	goto label_goto_62;
	// 900    .line 579
label_cond_aa:
	if ( (i - cVar1) <= ( cVar0 + -0x2) )
		goto label_cond_b7;
	this->bad(inchars);
label_cond_b7:
	eneg = 0x0;
	if ( inchars[( i + 0x1)] != 0x2d )
		goto label_cond_123;
	eneg = 0x1;
	k = ( i + 0x2);
label_goto_c7:
	elen = (cVar0 - (k - cVar1));
	if ( elen )     
		goto label_cond_135;
	cVar4 = 0x1;
label_goto_d1:
	if ( elen <= 0x9 )
		goto label_cond_13a;
	cVar5 = 0x1;
label_goto_d9:
	if ( !((cVar5 | cVar4)) )  
		goto label_cond_e0;
	this->bad(inchars);
label_cond_e0:
	_S_2 = elen;
	//    .local v3, "$2":I
	j = k;
	//    .end local v20    # "sj":C
label_goto_e3:
	if ( _S_2 <= 0 )
		goto label_cond_140;
	sj = inchars[j];
	//    .local v20, "sj":C
	if ( sj >= 0x30 )
		goto label_cond_f2;
	this->bad(inchars);
label_cond_f2:
	if ( sj <= 0x39 )
		goto label_cond_13d;
	if ( android::icu::lang::UCharacter::isDigit(sj) )     
		goto label_cond_103;
	this->bad(inchars);
label_cond_103:
	dvalue = android::icu::lang::UCharacter::digit(sj, 0xa);
	if ( dvalue >= 0 )
		goto label_cond_10e;
	this->bad(inchars);
label_cond_10e:
label_goto_10e:
	this->exp = (( this->exp * 0xa) + dvalue);
	_S_2 = ( _S_2 + -0x1);
	j = ( j + 0x1);
	goto label_goto_e3;
	// 1057    .line 585
	// 1058    .end local v3    # "$2":I
	// 1059    .local v20, "sj":C
label_cond_123:
	if ( inchars[( i + 0x1)] != 0x2b )
		goto label_cond_132;
	k = ( i + 0x2);
	goto label_goto_c7;
	// 1078    .line 588
label_cond_132:
	k = ( i + 0x1);
	goto label_goto_c7;
	// 1084    .line 591
label_cond_135:
	cVar4 = 0x0;
	goto label_goto_d1;
label_cond_13a:
	cVar5 = 0x0;
	goto label_goto_d9;
	// 1097    .line 607
	// 1098    .restart local v3    # "$2":I
	// 1099    .local v20, "sj":C
label_cond_13d:
	dvalue = ( sj + -0x30);
	goto label_goto_10e;
	// 1105    .line 611
	// 1106    .end local v20    # "sj":C
label_cond_140:
	if ( !(eneg) )  
		goto label_cond_153;
	this->exp = (0 - this->exp);
label_cond_153:
	hadexp = 0x1;
	//    .end local v3    # "$2":I
	//    .end local v19    # "si":C
label_cond_154:
	if ( d )     
		goto label_cond_159;
	this->bad(inchars);
label_cond_159:
	if ( dotoff < 0 ) 
		goto label_cond_16b;
	this->exp = ((this->exp + dotoff) - d);
label_cond_16b:
	//    .local v4, "$3":I
	i = cVar1;
label_goto_16f:
	if ( i >  ( -0x1 + -0x1) )
		goto label_cond_199;
	si = inchars[i];
	//    .restart local v19    # "si":C
	if ( si != 0x30 )
		goto label_cond_184;
	cVar1 = ( cVar1 + 0x1);
	dotoff = ( dotoff + -0x1);
	d = ( d + -0x1);
label_goto_181:
	i = ( i + 0x1);
	goto label_goto_16f;
	// 1203    .line 634
label_cond_184:
	if ( si != 0x2e )
		goto label_cond_191;
	cVar1 = ( cVar1 + 0x1);
	dotoff = ( dotoff + -0x1);
	goto label_goto_181;
	// 1221    .line 637
label_cond_191:
	if ( si >  0x39 )
		goto label_cond_1cf;
	//    .end local v19    # "si":C
label_cond_199:
	this->mant = std::make_shared<std::vector<unsigned char[]>>(d);
	j = cVar1;
	if ( !(0x0) )  
		goto label_cond_1f9;
	_S_4 = d;
	//    .local v5, "$4":I
	i = 0x0;
label_goto_1a9:
	if ( _S_4 <= 0 )
		goto label_cond_219;
	if ( i != dotoff )
		goto label_cond_1af;
	j = ( j + 0x1);
label_cond_1af:
	sj = inchars[j];
	//    .restart local v20    # "sj":C
	if ( sj >  0x39 )
		goto label_cond_1e2;
	this->mant[i] = (unsigned char)(( sj + -0x30));
label_goto_1c8:
	j = ( j + 0x1);
	_S_4 = ( _S_4 + -0x1);
	i = ( i + 0x1);
	goto label_goto_1a9;
	// 1309    .line 640
	// 1310    .end local v5    # "$4":I
	// 1311    .end local v20    # "sj":C
	// 1312    .restart local v19    # "si":C
label_cond_1cf:
	if ( android::icu::lang::UCharacter::digit(si, 0xa) )     
		goto label_cond_199;
	cVar1 = ( cVar1 + 0x1);
	dotoff = ( dotoff + -0x1);
	d = ( d + -0x1);
	goto label_goto_181;
	// 1337    .line 665
	// 1338    .end local v19    # "si":C
	// 1339    .restart local v5    # "$4":I
	// 1340    .restart local v20    # "sj":C
label_cond_1e2:
	dvalue = android::icu::lang::UCharacter::digit(sj, 0xa);
	if ( dvalue >= 0 )
		goto label_cond_1ed;
	this->bad(inchars);
label_cond_1ed:
	this->mant[i] = (unsigned char)(dvalue);
	goto label_goto_1c8;
	// 1370    .line 678
	// 1371    .end local v5    # "$4":I
	// 1372    .end local v20    # "sj":C
label_cond_1f9:
	_S_5 = d;
	//    .local v6, "$5":I
	i = 0x0;
label_goto_1fb:
	if ( _S_5 <= 0 )
		goto label_cond_219;
	if ( i != dotoff )
		goto label_cond_201;
	j = ( j + 0x1);
label_cond_201:
	this->mant[i] = (unsigned char)(( inchars[j] + -0x30));
	j = ( j + 0x1);
	_S_5 = ( _S_5 + -0x1);
	i = ( i + 0x1);
	goto label_goto_1fb;
	// 1420    .line 696
	// 1421    .end local v6    # "$5":I
label_cond_219:
	if ( this->mant[0x0] )     
		goto label_cond_256;
	this->ind = 0x0;
	if ( this->exp <= 0 )
		goto label_cond_23d;
	this->exp = 0x0;
label_cond_23d:
	if ( !(hadexp) )  
		goto label_cond_255;
	this->mant = android::icu::math::BigDecimal::ZERO->mant;
	this->exp = 0x0;
label_cond_255:
label_goto_255:
	return;
	// 1495    .line 708
label_cond_256:
	if ( !(0x0) )  
		goto label_cond_255;
	this->form = 0x1;
	mag = ( (this->exp + this->mant->size()) + -0x1);
	if ( mag >= -0x3b9ac9ff )
		goto label_cond_295;
	cVar11 = 0x1;
label_goto_282:
	if ( mag <= 0x3b9ac9ff )
		goto label_cond_29a;
	cVar12 = 0x1;
label_goto_28d:
	if ( !((cVar12 | cVar11)) )  
		goto label_cond_255;
	this->bad(inchars);
	goto label_goto_255;
	// 1565    .line 712
label_cond_295:
	cVar11 = 0x0;
	goto label_goto_282;
label_cond_29a:
	cVar12 = 0x0;
	goto label_goto_28d;

}
// .method private static final allzero([BI)Z
bool android::icu::math::BigDecimal::allzero(std::shared_ptr<unsigned char[]> array,int cVar0)
{
	
	int i;
	int cVar0;
	
	//    .param p0, "array"    # [B
	//    .param p1, "start"    # I
	i = 0x0;
	//    .local v1, "i":I
	if ( cVar0 >= 0 )
		goto label_cond_5;
	cVar0 = 0x0;
label_cond_5:
	//    .local v0, "$25":I
	i = cVar0;
label_goto_9:
	if ( i >  ( array->size() + -0x1) )
		goto label_cond_13;
	if ( !(array[i]) )  
		goto label_cond_10;
	return 0x0;
	// 1619    .line 3699
label_cond_10:
	i = ( i + 0x1);
	goto label_goto_9;
	// 1625    .line 3704
label_cond_13:
	return 0x1;

}
// .method private bad([C)V
void android::icu::math::BigDecimal::bad(std::shared_ptr<char[]> s)
{
	
	std::shared_ptr<java::lang::NumberFormatException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "s"    # [C
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::NumberFormatException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not a number: ")))->append(java::lang::String::valueOf(s))->toString());
	// throw
	throw cVar0;

}
// .method private badarg(Ljava/lang/String;ILjava/lang/String;)V
void android::icu::math::BigDecimal::badarg(std::shared_ptr<java::lang::String> name,int pos,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "pos"    # I
	//    .param p3, "value"    # Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad argument ")))->append(pos)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("to")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(value)->toString());
	// throw
	throw cVar0;

}
// .method private static final byteaddsub([BI[BIIZ)[B
unsigned char android::icu::math::BigDecimal::byteaddsub(std::shared_ptr<unsigned char[]> a,int avlen,std::shared_ptr<unsigned char[]> b,int bvlen,int m,bool reuse)
{
	
	int op;
	int i;
	int alength;
	int ap;
	int bp;
	int maxarr;
	std::shared_ptr<unsigned char[]> reb;
	std::shared<std::vector<unsigned char[]>> reb;
	int digit;
	int dp90;
	unsigned char digit;
	std::shared_ptr<unsigned char[]> newarr;
	std::shared<std::vector<unsigned char[]>> newarr;
	int _S_24;
	
	//    .param p0, "a"    # [B
	//    .param p1, "avlen"    # I
	//    .param p2, "b"    # [B
	//    .param p3, "bvlen"    # I
	//    .param p4, "m"    # I
	//    .param p5, "reuse"    # Z
	op = 0x0;
	//    .local v11, "op":I
	0x0;
	//    .local v7, "dp90":I
	i = 0x0;
	//    .local v8, "i":I
	alength = a->size();
	//    .local v2, "alength":I
	//    .local v4, "blength":I
	ap = ( avlen + -0x1);
	//    .local v3, "ap":I
	bp = ( bvlen + -0x1);
	//    .local v5, "bp":I
	maxarr = bp;
	//    .local v9, "maxarr":I
	if ( bp >= ap )
		goto label_cond_11;
	maxarr = ap;
label_cond_11:
	reb = 0x0;
	//    .local v13, "reb":[B
	if ( !(reuse) )  
		goto label_cond_1a;
	if ( ( maxarr + 0x1) != alength )
		goto label_cond_1a;
	reb = a;
	//    .end local v13    # "reb":[B
label_cond_1a:
	if ( reb )     
		goto label_cond_20;
	reb = std::make_shared<std::vector<unsigned char[]>>(( maxarr + 0x1));
label_cond_20:
	0x0;
	//    .local v12, "quickm":Z
	if ( m != 0x1 )
		goto label_cond_4e;
label_cond_27:
label_goto_27:
	digit = 0x0;
	//    .local v6, "digit":I
	op = maxarr;
label_goto_29:
	if ( op < 0 ) 
		goto label_cond_6c;
	if ( ap < 0 ) 
		goto label_cond_34;
	if ( ap >= alength )
		goto label_cond_32;
	digit = (digit +  a[ap]);
label_cond_32:
	ap = ( ap + -0x1);
label_cond_34:
	if ( bp < 0 ) 
		goto label_cond_41;
	if ( bp >= b->size() )
		goto label_cond_3f;
	if ( !(0x1) )  
		goto label_cond_59;
	if ( m <= 0 )
		goto label_cond_55;
	digit = (digit +  b[bp]);
label_cond_3f:
label_goto_3f:
	bp = ( bp + -0x1);
label_cond_41:
	if ( digit >= 0xa )
		goto label_cond_5f;
	if ( digit < 0 ) 
		goto label_cond_5f;
	reb[op] = (unsigned char)(digit);
	digit = 0x0;
label_goto_4b:
	op = ( op + -0x1);
	goto label_goto_29;
	// 1905    .line 3434
	// 1906    .end local v6    # "digit":I
label_cond_4e:
	if ( m != -0x1 )
		goto label_cond_27;
	0x1;
	goto label_goto_27;
	// 1919    .line 3452
	// 1920    .restart local v6    # "digit":I
label_cond_55:
	digit = (digit -  b[bp]);
	goto label_goto_3f;
	// 1928    .line 3454
label_cond_59:
	digit = (digit +  (b[bp] * m));
	goto label_goto_3f;
	// 1938    .line 3467
label_cond_5f:
	dp90 = ( digit + 0x5a);
	reb[op] = android::icu::math::BigDecimal::bytedig[dp90];
	digit = android::icu::math::BigDecimal::bytecar[dp90];
	goto label_goto_4b;
	// 1956    .line 3473
label_cond_6c:
	if ( digit )     
		goto label_cond_6f;
	return reb;
	// 1963    .line 3479
label_cond_6f:
	newarr = 0x0;
	//    .local v10, "newarr":[B
	if ( !(reuse) )  
		goto label_cond_7b;
	if ( ( maxarr + 0x2) != a->size() )
		goto label_cond_7b;
	newarr = a;
	//    .end local v10    # "newarr":[B
label_cond_7b:
	if ( newarr )     
		goto label_cond_81;
	newarr = std::make_shared<std::vector<unsigned char[]>>(( maxarr + 0x2));
label_cond_81:
	newarr[0x0] = (unsigned char)(digit);
	if ( maxarr >= 0xa )
		goto label_cond_99;
	_S_24 = ( maxarr + 0x1);
	//    .local v1, "$24":I
	i = 0x0;
label_goto_8c:
	if ( _S_24 <= 0 )
		goto label_cond_a3;
	newarr[( i + 0x1)] = reb[i];
	_S_24 = ( _S_24 + -0x1);
	i = ( i + 0x1);
	goto label_goto_8c;
	// 2031    .line 3495
	// 2032    .end local v1    # "$24":I
label_cond_99:
	java::lang::System::arraycopy(reb, 0x0, newarr, 0x1, ( maxarr + 0x1));
label_cond_a3:
	return newarr;

}
// .method private checkdigits(Landroid/icu/math/BigDecimal;I)V
void android::icu::math::BigDecimal::checkdigits(std::shared_ptr<android::icu::math::BigDecimal> rhs,int dig)
{
	
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::ArithmeticException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "dig"    # I
	if ( dig )     
		goto label_cond_3;
	return;
	// 2061    .line 3551
label_cond_3:
	if ( this->mant->size() <= dig )
		goto label_cond_2e;
	if ( android::icu::math::BigDecimal::allzero(this->mant, dig) )     
		goto label_cond_2e;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::ArithmeticException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too many digits: ")))->append(this->toString())->toString());
	// throw
	throw cVar0;
	// 2107    .line 3554
label_cond_2e:
	if ( rhs )     
		goto label_cond_31;
	return;
	// 2114    .line 3556
label_cond_31:
	if ( rhs->mant->size() <= dig )
		goto label_cond_5c;
	if ( android::icu::math::BigDecimal::allzero(rhs->mant, dig) )     
		goto label_cond_5c;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::ArithmeticException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too many digits: ")))->append(rhs->toString())->toString());
	// throw
	throw cVar2;
	// 2160    .line 3559
label_cond_5c:
	return;

}
// .method private static final clone(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::clone(std::shared_ptr<android::icu::math::BigDecimal> dec)
{
	
	std::shared_ptr<android::icu::math::BigDecimal> copy;
	
	//    .param p0, "dec"    # Landroid/icu/math/BigDecimal;
	copy = std::make_shared<android::icu::math::BigDecimal>();
	//    .local v0, "copy":Landroid/icu/math/BigDecimal;
	copy->ind = dec->ind;
	copy->exp = dec->exp;
	copy->form = dec->form;
	copy->mant = dec->mant;
	return copy;

}
// .method private static final diginit()[B
unsigned char android::icu::math::BigDecimal::diginit()
{
	
	int op;
	std::shared<std::vector<unsigned char[]>> work;
	int digit;
	
	op = 0x0;
	//    .local v1, "op":I
	0x0;
	//    .local v0, "digit":I
	work = std::make_shared<std::vector<unsigned char[]>>(0xbe);
	//    .local v2, "work":[B
	op = 0x0;
label_goto_7:
	if ( op >  0xbd )
		goto label_cond_2f;
	digit = ( op + -0x5a);
	if ( digit < 0 ) 
		goto label_cond_1e;
	work[op] = (unsigned char)(( digit % 0xa));
	android::icu::math::BigDecimal::bytecar[op] = (unsigned char)(( digit / 0xa));
label_goto_1b:
	op = ( op + 0x1);
	goto label_goto_7;
	// 2255    .line 3519
label_cond_1e:
	digit = ( digit + 0x64);
	work[op] = (unsigned char)(( digit % 0xa));
	android::icu::math::BigDecimal::bytecar[op] = (unsigned char)(( ( digit / 0xa) + -0xa));
	goto label_goto_1b;
	// 2279    .line 3524
label_cond_2f:
	return work;

}
// .method private dodivide(CLandroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;I)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::dodivide(char code,std::shared_ptr<android::icu::math::BigDecimal> cVar1,std::shared_ptr<android::icu::math::MathContext> set,int cVar2)
{
	
	int thisdigit;
	int i;
	int ba;
	int start;
	int d;
	auto lhs;
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	int reqdig;
	std::shared_ptr<android::icu::math::BigDecimal> lhs;
	std::shared_ptr<java::lang::Object> cVar1;
	int newexp;
	std::shared_ptr<android::icu::math::BigDecimal> res;
	int newlen;
	std::shared_ptr<unsigned char[]> var1;
	int var1len;
	std::shared_ptr<unsigned char[]> var2;
	int var2len;
	int b2b;
	int have;
	int cVar3;
	int cVar4;
	int cVar5;
	int cVar6;
	std::shared_ptr<java::lang::ArithmeticException> cVar7;
	int cVar12;
	int cVar13;
	auto newvar1;
	auto newmant;
	unsigned char lasthave;
	int _S_22;
	unsigned char v2;
	unsigned char ba;
	int mult;
	int cVar2;
	
	//    .param p1, "code"    # C
	//    .param p2, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p3, "set"    # Landroid/icu/math/MathContext;
	//    .param p4, "scale"    # I
	thisdigit = 0x0;
	//    .local v27, "thisdigit":I
	i = 0x0;
	//    .local v15, "i":I
	0x0;
	//    .local v28, "v2":B
	ba = 0x0;
	//    .local v12, "ba":I
	0x0;
	//    .local v18, "mult":I
	start = 0x0;
	//    .local v26, "start":I
	0x0;
	//    .local v23, "padding":I
	d = 0x0;
	//    .local v13, "d":I
	0x0;
	//    .local v22, "newvar1":[B
	0x0;
	//    .local v16, "lasthave":B
	0x0;
	//    .local v10, "actdig":I
	0x0;
	//    .local v21, "newmant":[B
	if ( !(set->lostDigits) )  
		goto label_cond_25;
	this->checkdigits(cVar1, set->digits);
label_cond_25:
	lhs = this;
	//    .local v17, "lhs":Landroid/icu/math/BigDecimal;
	if ( cVar1->ind )     
		goto label_cond_36;
	cVar0 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Divide by 0")));
	// throw
	throw cVar0;
	// 2379    .line 3081
label_cond_36:
	if ( this->ind )     
		goto label_cond_54;
	if ( !(set->form) )  
		goto label_cond_45;
	return android::icu::math::BigDecimal::ZERO;
	// 2399    .line 3084
label_cond_45:
	if ( cVar2 != -0x1 )
		goto label_cond_4b;
	return this;
	// 2410    .line 3086
label_cond_4b:
	return this->setScale(cVar2);
	// 2422    .line 3090
label_cond_54:
	reqdig = set->digits;
	//    .local v24, "reqdig":I
	if ( reqdig <= 0 )
		goto label_cond_a9;
	if ( this->mant->size() <= reqdig )
		goto label_cond_6f;
	lhs = android::icu::math::BigDecimal::clone(this)->round(set);
label_cond_6f:
	if ( cVar1->mant->size() <= reqdig )
		goto label_cond_82;
	cVar1 = android::icu::math::BigDecimal::clone(cVar1)->round(set);
label_cond_82:
label_goto_82:
	newexp = (((lhs->exp -  cVar1->exp) +  lhs->mant->size()) - cVar1->mant->size());
	//    .local v19, "newexp":I
	if ( newexp >= 0 )
		goto label_cond_106;
	if ( code == 0x44 )
		goto label_cond_106;
	if ( code != 0x49 )
		goto label_cond_fa;
	return android::icu::math::BigDecimal::ZERO;
	// 2531    .line 3097
	// 2532    .end local v19    # "newexp":I
label_cond_a9:
	if ( cVar2 != -0x1 )
		goto label_cond_b2;
	cVar2 = this->scale();
label_cond_b2:
	reqdig = this->mant->size();
	if ( cVar2 == (0 - this->exp) )
		goto label_cond_ca;
	reqdig = ((reqdig + cVar2) + this->exp);
label_cond_ca:
	reqdig = ((reqdig - ( cVar1->mant->size() + -0x1)) - cVar1->exp);
	if ( reqdig >= this->mant->size() )
		goto label_cond_e9;
	reqdig = this->mant->size();
label_cond_e9:
	if ( reqdig >= cVar1->mant->size() )
		goto label_cond_82;
	reqdig = cVar1->mant->size();
	goto label_goto_82;
	// 2636    .line 3119
	// 2637    .restart local v19    # "newexp":I
label_cond_fa:
	return android::icu::math::BigDecimal::clone(lhs)->finish(set, 0x0);
	// 2653    .line 3123
label_cond_106:
	res = std::make_shared<android::icu::math::BigDecimal>();
	//    .local v25, "res":Landroid/icu/math/BigDecimal;
	res->ind = (unsigned char)((lhs->ind *  cVar1->ind));
	res->exp = newexp;
	res->mant = std::make_shared<std::vector<unsigned char[]>>(( reqdig + 0x1));
	newlen = ( (reqdig + reqdig) + 0x1);
	//    .local v20, "newlen":I
	var1 = android::icu::math::BigDecimal::extend(lhs->mant, newlen);
	//    .local v2, "var1":[B
	var1len = newlen;
	//    .local v3, "var1len":I
	var2 = cVar1->mant;
	//    .local v4, "var2":[B
	var2len = newlen;
	//    .local v5, "var2len":I
	b2b = ( ( var2[0x0] * 0xa) + 0x1);
	//    .local v11, "b2b":I
	if ( var2->size() <= 0x1 )
		goto label_cond_14c;
label_cond_14c:
	have = 0x0;
	//    .end local v28    # "v2":B
	//    .local v14, "have":I
label_goto_14d:
	thisdigit = 0x0;
label_cond_14f:
label_goto_14f:
	if ( var1len >= var2len )
		goto label_cond_191;
label_cond_151:
	if ( !(have) )  
		goto label_cond_205;
	cVar3 = 0x1;
label_goto_155:
	if ( !(thisdigit) )  
		goto label_cond_209;
	cVar4 = 0x1;
label_goto_158:
	if ( !((cVar4 |  cVar3)) )  
		goto label_cond_211;
	res->mant[have] = (unsigned char)(thisdigit);
	have = ( have + 0x1);
	if ( have != ( reqdig + 0x1) )
		goto label_cond_20c;
label_cond_16a:
label_goto_16a:
	if ( have )     
		goto label_cond_16d;
	have = 0x1;
label_cond_16d:
	if ( code != 0x49 )
		goto label_cond_236;
	cVar5 = 0x1;
label_goto_175:
	if ( code != 0x52 )
		goto label_cond_23a;
	cVar6 = 0x1;
label_goto_17c:
	if ( !((cVar6 |  cVar5)) )  
		goto label_cond_2da;
	if ( (res->exp +  have) <= reqdig )
		goto label_cond_23d;
	cVar7 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Integer overflow")));
	// throw
	throw cVar7;
	// 2855    .line 3152
label_cond_191:
	if ( var1len != var2len )
		goto label_cond_1f3;
	_S_22 = var1len;
	//    .local v8, "$22":I
	i = 0x0;
label_goto_195:
	if ( _S_22 <= 0 )
		goto label_cond_1e0;
	if ( i >= var2->size() )
		goto label_cond_1d8;
	v2 = var2[i];
label_goto_19c:
	if ( var1[i] <  v2 )
		goto label_cond_151;
	if ( var1[i] <= v2 )
		goto label_cond_1db;
	ba = var1[0x0];
	//    .end local v8    # "$22":I
label_cond_1ab:
label_goto_1ab:
	mult = (( ba * 0xa) / b2b);
	if ( mult )     
		goto label_cond_1b3;
	mult = 0x1;
label_cond_1b3:
	thisdigit = (thisdigit + mult);
	var1 = android::icu::math::BigDecimal::byteaddsub(var1, var1len, var2, var2len, (0 - mult), 0x1);
	if ( var1[0x0] )     
		goto label_cond_14f;
	//    .local v9, "$23":I
	start = 0x0;
label_goto_1c6:
	if ( start >  ( var1len + -0x2) )
		goto label_cond_1ce;
	if ( !(var1[start]) )  
		goto label_cond_200;
label_cond_1ce:
	if ( !(start) )  
		goto label_cond_14f;
	java::lang::System::arraycopy(var1, start, var1, 0x0, var1len);
	goto label_goto_14f;
	// 2965    .line 3163
	// 2966    .end local v9    # "$23":I
	// 2967    .restart local v8    # "$22":I
label_cond_1d8:
	//    .restart local v28    # "v2":B
	goto label_goto_19c;
	// 2974    .line 3158
	// 2975    .end local v28    # "v2":B
label_cond_1db:
	_S_22 = ( _S_22 + -0x1);
	i = ( i + 0x1);
	goto label_goto_195;
	// 2983    .line 3175
label_cond_1e0:
	thisdigit = ( thisdigit + 0x1);
	res->mant[have] = (unsigned char)(thisdigit);
	have = ( have + 0x1);
	var1[0x0] = 0x0;
	goto label_goto_16a;
	// 3010    .line 3188
	// 3011    .end local v8    # "$22":I
label_cond_1f3:
	ba = ( var1[0x0] * 0xa);
	if ( var1len <= 0x1 )
		goto label_cond_1ab;
	ba = (ba +  var1[0x1]);
	goto label_goto_1ab;
	// 3033    .line 3211
	// 3034    .restart local v9    # "$23":I
label_cond_200:
	var1len = ( var1len + -0x1);
	start = ( start + 0x1);
	goto label_goto_1c6;
	// 3043    .line 3222
	// 3044    .end local v9    # "$23":I
label_cond_205:
	cVar3 = 0x0;
	goto label_goto_155;
label_cond_209:
	cVar4 = 0x0;
	goto label_goto_158;
	// 3057    .line 3227
label_cond_20c:
	if ( !(var1[0x0]) )  
		goto label_cond_16a;
label_cond_211:
	if ( cVar2 < 0 ) 
		goto label_cond_21c;
	if ( (0 - res->exp) >  cVar2 )
		goto label_cond_16a;
label_cond_21c:
	if ( code == 0x44 )
		goto label_cond_228;
	if ( res->exp <= 0 )
		goto label_cond_16a;
label_cond_228:
	res->exp = ( res->exp + -0x1);
	var2len = ( var2len + -0x1);
	goto label_goto_14d;
	// 3112    .line 3251
label_cond_236:
	cVar5 = 0x0;
	goto label_goto_175;
label_cond_23a:
	cVar6 = 0x0;
	goto label_goto_17c;
	// 3125    .line 3255
label_cond_23d:
	if ( code != 0x52 )
		goto label_cond_2fa;
	if ( res->mant[0x0] )     
		goto label_cond_258;
	return android::icu::math::BigDecimal::clone(lhs)->finish(set, 0x0);
	// 3159    .line 3260
label_cond_258:
	if ( var1[0x0] )     
		goto label_cond_260;
	return android::icu::math::BigDecimal::ZERO;
	// 3172    .line 3262
label_cond_260:
	res->ind = lhs->ind;
	res->exp = ((res->exp - (( (reqdig + reqdig) + 0x1) - lhs->mant->size())) +  lhs->exp);
	d = var1len;
	i = ( var1len + -0x1);
label_goto_285:
	if ( i <  0x1 )
		goto label_cond_2a5;
	if ( res->exp <  lhs->exp )
		goto label_cond_2c3;
	cVar12 = 0x1;
label_goto_293:
	if ( res->exp <  cVar1->exp )
		goto label_cond_2c5;
	cVar13 = 0x1;
label_goto_2a2:
	if ( !((cVar12 |  cVar13)) )  
		goto label_cond_2c7;
label_cond_2a5:
	if ( d >= var1->size() )
		goto label_cond_2b5;
	newvar1 = std::make_shared<std::vector<unsigned char[]>>(d);
	//    .local v22, "newvar1":[B
	java::lang::System::arraycopy(var1, 0x0, newvar1, 0x0, d);
	//    .end local v22    # "newvar1":[B
label_cond_2b5:
	res->mant = var1;
	return res->finish(set, 0x0);
	// 3303    .line 3277
	// 3304    .local v22, "newvar1":[B
label_cond_2c3:
	cVar12 = 0x0;
	goto label_goto_293;
label_cond_2c5:
	cVar13 = 0x0;
	goto label_goto_2a2;
	// 3315    .line 3279
label_cond_2c7:
	if ( var1[i] )     
		goto label_cond_2a5;
	d = ( d + -0x1);
	res->exp = ( res->exp + 0x1);
	i = ( i + -0x1);
	goto label_goto_285;
	// 3340    .line 3301
label_cond_2da:
	if ( !(var1[0x0]) )  
		goto label_cond_2fa;
	lasthave = res->mant[( have + -0x1)];
	//    .local v16, "lasthave":B
	if ( ( lasthave % 0x5) )     
		goto label_cond_2fa;
	res->mant[( have + -0x1)] = (unsigned char)(( lasthave + 0x1));
	//    .end local v16    # "lasthave":B
label_cond_2fa:
	if ( cVar2 < 0 ) 
		goto label_cond_359;
	if ( have == res->mant->size() )
		goto label_cond_312;
	res->exp = (res->exp -  (res->mant->size() -  have));
label_cond_312:
	res->round((res->mant->size() - ((0 - res->exp) - cVar2)), set->roundingMode);
	if ( res->exp == (0 - cVar2) )
		goto label_cond_34f;
	res->mant = android::icu::math::BigDecimal::extend(res->mant, ( res->mant->size() + 0x1));
	res->exp = ( res->exp + -0x1);
label_cond_34f:
	return res->finish(set, 0x1);
	// 3497    .line 3330
label_cond_359:
	if ( have != res->mant->size() )
		goto label_cond_373;
	res->round(set);
	reqdig;
	//    .end local v21    # "newmant":[B
label_goto_369:
	return res->finish(set, 0x1);
	// 3532    .line 3334
	// 3533    .restart local v21    # "newmant":[B
label_cond_373:
	if ( res->mant[0x0] )     
		goto label_cond_37f;
	return android::icu::math::BigDecimal::ZERO;
	// 3550    .line 3339
label_cond_37f:
	newmant = std::make_shared<std::vector<unsigned char[]>>(have);
	//    .local v21, "newmant":[B
	java::lang::System::arraycopy(res->mant, 0x0, newmant, 0x0, have);
	res->mant = newmant;
	goto label_goto_369;

}
// .method private static final extend([BI)[B
unsigned char android::icu::math::BigDecimal::extend(std::shared_ptr<unsigned char[]> inarr,int newlen)
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> newarr;
	
	//    .param p0, "inarr"    # [B
	//    .param p1, "newlen"    # I
	cVar0 = 0x0;
	if ( inarr->size() != newlen )
		goto label_cond_5;
	return inarr;
	// 3598    .line 3373
label_cond_5:
	newarr = std::make_shared<std::vector<unsigned char[]>>(newlen);
	//    .local v0, "newarr":[B
	java::lang::System::arraycopy(inarr, cVar0, newarr, cVar0, inarr->size());
	return newarr;

}
// .method private finish(Landroid/icu/math/MathContext;Z)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::finish(std::shared_ptr<android::icu::math::MathContext> set,bool strip)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int d;
	int i;
	std::shared<std::vector<unsigned char[]>> newmant;
	int _S_26;
	int mag;
	int cVar4;
	int sig;
	std::shared_ptr<java::lang::ArithmeticException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::ArithmeticException> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	
	//    .param p1, "set"    # Landroid/icu/math/MathContext;
	//    .param p2, "strip"    # Z
	cVar0 = 0x3b9ac9ff;
	cVar1 = 0x1;
	cVar2 = -0x3b9ac9ff;
	cVar3 = 0x0;
	d = 0x0;
	//    .local v1, "d":I
	i = 0x0;
	//    .local v2, "i":I
	0x0;
	//    .local v4, "newmant":[B
	0x0;
	//    .local v3, "mag":I
	0x0;
	//    .local v5, "sig":I
	if ( !(set->digits) )  
		goto label_cond_1b;
	if ( this->mant->size() <= set->digits )
		goto label_cond_1b;
	this->round(set);
label_cond_1b:
	if ( !(strip) )  
		goto label_cond_3c;
	if ( !(set->form) )  
		goto label_cond_3c;
	d = this->mant->size();
	i = ( d + -0x1);
label_goto_26:
	if ( i <  cVar1 )
		goto label_cond_2e;
	if ( !(this->mant[i]) )  
		goto label_cond_78;
label_cond_2e:
	if ( d >= this->mant->size() )
		goto label_cond_3c;
	newmant = std::make_shared<std::vector<unsigned char[]>>(d);
	//    .local v4, "newmant":[B
	java::lang::System::arraycopy(this->mant, cVar3, newmant, cVar3, d);
	this->mant = newmant;
	//    .end local v4    # "newmant":[B
label_cond_3c:
	this->form = cVar3;
	_S_26 = this->mant->size();
	//    .local v0, "$26":I
	i = 0x0;
label_goto_42:
	if ( _S_26 <= 0 )
		goto label_cond_ca;
	if ( !(this->mant[i]) )  
		goto label_cond_c4;
	if ( i <= 0 )
		goto label_cond_5d;
	newmant = std::make_shared<std::vector<unsigned char[]>>((this->mant->size() -  i));
	//    .restart local v4    # "newmant":[B
	java::lang::System::arraycopy(this->mant, i, newmant, cVar3, (this->mant->size() -  i));
	this->mant = newmant;
	//    .end local v4    # "newmant":[B
label_cond_5d:
	mag = (this->exp + this->mant->size());
	if ( mag <= 0 )
		goto label_cond_83;
	if ( mag <= set->digits )
		goto label_cond_73;
	if ( !(set->digits) )  
		goto label_cond_73;
	this->form = (unsigned char)(set->form);
label_cond_73:
	if ( ( mag + -0x1) >  cVar0 )
		goto label_cond_8b;
	return this;
	// 3805    .line 3739
	// 3806    .end local v0    # "$26":I
	// 3807    .local v4, "newmant":[B
label_cond_78:
	d = ( d + -0x1);
	this->exp = ( this->exp + 0x1);
	i = ( i + -0x1);
	goto label_goto_26;
	// 3823    .line 3776
	// 3824    .end local v4    # "newmant":[B
	// 3825    .restart local v0    # "$26":I
label_cond_83:
	if ( mag >= -0x5 )
		goto label_cond_8b;
	this->form = (unsigned char)(set->form);
label_cond_8b:
	mag = ( mag + -0x1);
	if ( mag >= cVar2 )
		goto label_cond_a6;
	cVar4 = cVar1;
label_goto_90:
	if ( mag <= cVar0 )
		goto label_cond_a8;
label_goto_92:
	if ( !((cVar1 |  cVar4)) )  
		goto label_cond_a5;
	if ( this->form != 0x2 )
		goto label_cond_aa;
	sig = ( mag % 0x3);
	if ( sig >= 0 )
		goto label_cond_a0;
label_cond_a0:
	mag = (mag -  sig);
	if ( mag <  cVar2 )
		goto label_cond_aa;
	if ( mag >  cVar0 )
		goto label_cond_aa;
label_cond_a5:
	return this;
label_cond_a6:
	cVar4 = cVar3;
	goto label_goto_90;
label_cond_a8:
	cVar1 = cVar3;
	goto label_goto_92;
	// 3896    .line 3793
label_cond_aa:
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::lang::ArithmeticException>(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exponent Overflow: ")))->append(mag)->toString());
	// throw
	throw cVar7;
	// 3922    .line 3756
label_cond_c4:
	_S_26 = ( _S_26 + -0x1);
	i = ( i + 0x1);
	goto label_goto_42;
	// 3930    .line 3802
label_cond_ca:
	this->ind = cVar3;
	if ( !(set->form) )  
		goto label_cond_d9;
	this->exp = cVar3;
label_cond_d2:
label_goto_d2:
	this->mant = android::icu::math::BigDecimal::ZERO->mant;
	return this;
	// 3954    .line 3806
label_cond_d9:
	if ( this->exp <= 0 )
		goto label_cond_e0;
	this->exp = cVar3;
	goto label_goto_d2;
	// 3965    .line 3810
label_cond_e0:
	if ( this->exp >= cVar2 )
		goto label_cond_d2;
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	cVar9 = std::make_shared<java::lang::ArithmeticException>(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exponent Overflow: ")))->append(this->exp)->toString());
	// throw
	throw cVar9;

}
// .method private intcheck(II)I
int android::icu::math::BigDecimal::intcheck(int min,int max)
{
	
	int cVar0;
	int cVar1;
	int i;
	int cVar2;
	std::shared_ptr<java::lang::ArithmeticException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p1, "min"    # I
	//    .param p2, "max"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	i = this->intValueExact();
	//    .local v0, "i":I
	if ( i >= min )
		goto label_cond_28;
	cVar2 = cVar0;
label_goto_9:
	if ( i <= max )
		goto label_cond_2a;
label_goto_b:
	if ( !((cVar0 |  cVar2)) )  
		goto label_cond_2c;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::ArithmeticException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Conversion overflow: ")))->append(i)->toString());
	// throw
	throw cVar3;
label_cond_28:
	cVar2 = cVar1;
	goto label_goto_9;
label_cond_2a:
	cVar0 = cVar1;
	goto label_goto_b;
	// 4064    .line 3025
label_cond_2c:
	return i;

}
// .method private layout()[C
char android::icu::math::BigDecimal::layout()
{
	
	int i;
	int euse;
	int csign;
	std::shared<std::vector<char[]>> cmant;
	int _S_18;
	std::shared_ptr<java::lang::StringBuilder> sb;
	char csign;
	std::shared<std::vector<char[]>> rec;
	int srcEnd;
	int sig;
	int _S_19;
	int needsign;
	int mag;
	int _S_20;
	int _S_21;
	
	i = 0x0;
	//    .local v10, "i":I
	0x0;
	//    .local v15, "sb":Ljava/lang/StringBuilder;
	euse = 0x0;
	//    .local v9, "euse":I
	0x0;
	//    .local v16, "sig":I
	csign = 0x0;
	//    .local v8, "csign":C
	0x0;
	//    .local v14, "rec":[C
	0x0;
	//    .local v11, "len":I
	cmant = std::make_shared<std::vector<char[]>>(this->mant->size());
	//    .local v7, "cmant":[C
	_S_18 = this->mant->size();
	//    .local v3, "$18":I
	i = 0x0;
label_goto_21:
	if ( _S_18 <= 0 )
		goto label_cond_39;
	cmant[i] = (char)(( this->mant[i] + 0x30));
	_S_18 = ( _S_18 + -0x1);
	i = ( i + 0x1);
	goto label_goto_21;
	// 4164    .line 2903
label_cond_39:
	if ( !(this->form) )  
		goto label_cond_133;
	//    .end local v15    # "sb":Ljava/lang/StringBuilder;
	sb = std::make_shared<java::lang::StringBuilder>(( cmant->size() + 0xf));
	//    .local v15, "sb":Ljava/lang/StringBuilder;
	if ( this->ind != -0x1 )
		goto label_cond_62;
	sb->append(0x2d);
label_cond_62:
	euse = ( (this->exp + cmant->size()) + -0x1);
	if ( this->form != 0x1 )
		goto label_cond_df;
	sb->append(cmant[0x0]);
	if ( cmant->size() <= 0x1 )
		goto label_cond_a9;
	sb->append(0x2e)->append(cmant, 0x1, ( cmant->size() + -0x1));
label_cond_a9:
label_goto_a9:
	if ( !(euse) )  
		goto label_cond_c3;
	if ( euse >= 0 )
		goto label_cond_12f;
	csign = 0x2d;
	euse = (0 - euse);
label_goto_b0:
	sb->append(0x45)->append(csign)->append(euse);
label_cond_c3:
	rec = std::make_shared<std::vector<char[]>>(sb->length());
	//    .local v14, "rec":[C
	srcEnd = sb->length();
	//    .local v17, "srcEnd":I
	if ( !(srcEnd) )  
		goto label_cond_de;
	sb->getChars(0x0, srcEnd, rec, 0x0);
label_cond_de:
	return rec;
	// 4360    .line 2915
	// 4361    .end local v17    # "srcEnd":I
	// 4362    .local v14, "rec":[C
label_cond_df:
	sig = ( euse % 0x3);
	if ( sig >= 0 )
		goto label_cond_e5;
	sig = ( sig + 0x3);
label_cond_e5:
	euse = (euse - sig);
	sig = ( sig + 0x1);
	if ( sig <  cmant->size() )
		goto label_cond_10f;
	sb->append(cmant, 0x0, cmant->size());
	_S_19 = (sig - cmant->size());
	//    .local v4, "$19":I
label_goto_103:
	if ( _S_19 <= 0 )
		goto label_cond_a9;
	sb->append(0x30);
	_S_19 = ( _S_19 + -0x1);
	goto label_goto_103;
	// 4427    .line 2929
	// 4428    .end local v4    # "$19":I
label_cond_10f:
	sb->append(cmant, 0x0, sig)->append(0x2e)->append(cmant, sig, (cmant->size() - sig));
	goto label_goto_a9;
	// 4462    .line 2938
label_cond_12f:
	csign = 0x2b;
	goto label_goto_b0;
	// 4468    .line 2950
	// 4469    .local v15, "sb":Ljava/lang/StringBuilder;
label_cond_133:
	if ( this->exp )     
		goto label_cond_164;
	if ( this->ind < 0 ) 
		goto label_cond_144;
	return cmant;
	// 4491    .line 2953
label_cond_144:
	rec = std::make_shared<std::vector<char[]>>(( cmant->size() + 0x1));
	//    .local v14, "rec":[C
	rec[0x0] = 0x2d;
	java::lang::System::arraycopy(cmant, 0x0, rec, 0x1, cmant->size());
	return rec;
	// 4531    .line 2960
	// 4532    .local v14, "rec":[C
label_cond_164:
	if ( this->ind != -0x1 )
		goto label_cond_1b0;
	needsign = 0x1;
	//    .local v13, "needsign":I
label_goto_173:
	mag = (this->exp + cmant->size());
	//    .local v12, "mag":I
	if ( mag >= 0x1 )
		goto label_cond_1c5;
	rec = std::make_shared<std::vector<char[]>>((( needsign + 0x2) - this->exp));
	//    .local v14, "rec":[C
	if ( !(needsign) )  
		goto label_cond_198;
	rec[0x0] = 0x2d;
label_cond_198:
	rec[needsign] = 0x30;
	rec[( needsign + 0x1)] = 0x2e;
	_S_20 = (0 - mag);
	//    .local v5, "$20":I
	i = ( needsign + 0x2);
label_goto_1a5:
	if ( _S_20 <= 0 )
		goto label_cond_1b2;
	rec[i] = 0x30;
	_S_20 = ( _S_20 + -0x1);
	i = ( i + 0x1);
	goto label_goto_1a5;
	// 4634    .line 2960
	// 4635    .end local v5    # "$20":I
	// 4636    .end local v12    # "mag":I
	// 4637    .end local v13    # "needsign":I
	// 4638    .local v14, "rec":[C
label_cond_1b0:
	needsign = 0x0;
	//    .restart local v13    # "needsign":I
	goto label_goto_173;
	// 4645    .line 2981
	// 4646    .restart local v5    # "$20":I
	// 4647    .restart local v12    # "mag":I
	// 4648    .local v14, "rec":[C
label_cond_1b2:
	java::lang::System::arraycopy(cmant, 0x0, rec, (( needsign + 0x2) - mag), cmant->size());
	return rec;
	// 4673    .line 2986
	// 4674    .end local v5    # "$20":I
	// 4675    .local v14, "rec":[C
label_cond_1c5:
	if ( mag <= cmant->size() )
		goto label_cond_1fa;
	rec = std::make_shared<std::vector<char[]>>((needsign + mag));
	//    .local v14, "rec":[C
	if ( !(needsign) )  
		goto label_cond_1d8;
	rec[0x0] = 0x2d;
label_cond_1d8:
	java::lang::System::arraycopy(cmant, 0x0, rec, needsign, cmant->size());
	_S_21 = (mag - cmant->size());
	//    .local v6, "$21":I
	i = (needsign + cmant->size());
label_goto_1ee:
	if ( _S_21 <= 0 )
		goto label_cond_1f9;
	rec[i] = 0x30;
	_S_21 = ( _S_21 + -0x1);
	i = ( i + 0x1);
	goto label_goto_1ee;
	// 4747    .line 2999
label_cond_1f9:
	return rec;
	// 4751    .line 3003
	// 4752    .end local v6    # "$21":I
	// 4753    .local v14, "rec":[C
label_cond_1fa:
	rec = std::make_shared<std::vector<char[]>>((( needsign + 0x1) + cmant->size()));
	//    .local v14, "rec":[C
	if ( !(needsign) )  
		goto label_cond_20b;
	rec[0x0] = 0x2d;
label_cond_20b:
	java::lang::System::arraycopy(cmant, 0x0, rec, needsign, mag);
	rec[(needsign + mag)] = 0x2e;
	java::lang::System::arraycopy(cmant, mag, rec, ( (needsign + mag) + 0x1), (cmant->size() - mag));
	return rec;

}
// .method private round(II)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::round(int len,int mode)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int adjust;
	unsigned char sign;
	std::shared_ptr<unsigned char[]> oldmant;
	unsigned char first;
	int increment;
	std::shared_ptr<java::lang::ArithmeticException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<unsigned char[]> newmant;
	std::shared_ptr<java::lang::ArithmeticException> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	
	//    .param p1, "len"    # I
	//    .param p2, "mode"    # I
	cVar0 = 0x1;
	cVar1 = 0x5;
	cVar2 = 0x0;
	0x0;
	//    .local v5, "reuse":Z
	0x0;
	//    .local v7, "first":B
	0x0;
	//    .local v8, "newmant":[B
	adjust = (this->mant->size() - len);
	//    .local v6, "adjust":I
	if ( adjust > 0 ) 
		goto label_cond_e;
	return this;
	// 4853    .line 3592
label_cond_e:
	this->exp = (this->exp +  adjust);
	sign = this->ind;
	//    .local v10, "sign":I
	oldmant = this->mant;
	//    .local v9, "oldmant":[B
	if ( len <= 0 )
		goto label_cond_5e;
	this->mant = std::make_shared<std::vector<unsigned char[]>>(len);
	java::lang::System::arraycopy(oldmant, cVar2, this->mant, cVar2, len);
	first = oldmant[len];
	//    .end local v7    # "first":B
label_goto_25:
	increment = 0x0;
	//    .local v4, "increment":I
	if ( mode != 0x4 )
		goto label_cond_6e;
	if ( first <  cVar1 )
		goto label_cond_2c;
	increment = sign;
label_cond_2c:
label_goto_2c:
	if ( !(increment) )  
		goto label_cond_3b;
	if ( this->ind )     
		goto label_cond_f8;
	this->mant = android::icu::math::BigDecimal::ONE->mant;
	this->ind = (unsigned char)(increment);
	//    .end local v8    # "newmant":[B
label_cond_3b:
label_goto_3b:
	if ( this->exp <= 0x3b9ac9ff )
		goto label_cond_125;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::ArithmeticException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exponent Overflow: ")))->append(this->exp)->toString());
	// throw
	throw cVar3;
	// 4964    .line 3602
	// 4965    .end local v4    # "increment":I
	// 4966    .restart local v7    # "first":B
	// 4967    .restart local v8    # "newmant":[B
label_cond_5e:
	this->mant = android::icu::math::BigDecimal::ZERO->mant;
	this->ind = cVar2;
	0x0;
	if ( len )     
		goto label_cond_6c;
	oldmant[cVar2];
	//    .local v7, "first":B
	goto label_goto_25;
	// 4990    .line 3608
	// 4991    .local v7, "first":B
label_cond_6c:
	0x0;
	goto label_goto_25;
	// 4997    .line 3618
	// 4998    .end local v7    # "first":B
	// 4999    .restart local v4    # "increment":I
label_cond_6e:
	if ( mode != 0x7 )
		goto label_cond_80;
	if ( android::icu::math::BigDecimal::allzero(oldmant, len) )     
		goto label_cond_2c;
	cVar5 = std::make_shared<java::lang::ArithmeticException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rounding necessary")));
	// throw
	throw cVar5;
	// 5021    .line 3622
label_cond_80:
	if ( mode != cVar1 )
		goto label_cond_92;
	if ( first <= cVar1 )
		goto label_cond_86;
	increment = sign;
	goto label_goto_2c;
	// 5033    .line 3625
label_cond_86:
	if ( first != cVar1 )
		goto label_cond_2c;
	if ( android::icu::math::BigDecimal::allzero(oldmant, ( len + 0x1)) )     
		goto label_cond_2c;
	increment = sign;
	goto label_goto_2c;
	// 5051    .line 3628
label_cond_92:
	if ( mode != 0x6 )
		goto label_cond_b5;
	if ( first <= cVar1 )
		goto label_cond_99;
	increment = sign;
	goto label_goto_2c;
	// 5065    .line 3631
label_cond_99:
	if ( first != cVar1 )
		goto label_cond_2c;
	if ( android::icu::math::BigDecimal::allzero(oldmant, ( len + 0x1)) )     
		goto label_cond_a5;
	increment = sign;
	goto label_goto_2c;
	// 5083    .line 3635
label_cond_a5:
	if ( !(( this->mant[( this->mant->size() + -0x1)] % 0x2)) )  
		goto label_cond_2c;
	increment = sign;
	goto label_goto_2c;
	// 5104    .line 3638
label_cond_b5:
	if ( mode == cVar0 )
		goto label_cond_2c;
	if ( mode )     
		goto label_cond_c2;
	if ( android::icu::math::BigDecimal::allzero(oldmant, len) )     
		goto label_cond_2c;
	increment = sign;
	goto label_goto_2c;
	// 5123    .line 3643
label_cond_c2:
	if ( mode != 0x2 )
		goto label_cond_d0;
	if ( sign <= 0 )
		goto label_cond_2c;
	if ( android::icu::math::BigDecimal::allzero(oldmant, len) )     
		goto label_cond_2c;
	increment = sign;
	goto label_goto_2c;
	// 5144    .line 3647
label_cond_d0:
	if ( mode != 0x3 )
		goto label_cond_de;
	if ( sign >= 0 )
		goto label_cond_2c;
	if ( android::icu::math::BigDecimal::allzero(oldmant, len) )     
		goto label_cond_2c;
	increment = sign;
	goto label_goto_2c;
	// 5165    .line 3652
label_cond_de:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad round value: ")))->append(mode)->toString());
	// throw
	throw cVar6;
	// 5191    .line 3665
label_cond_f8:
	if ( this->ind != -0x1 )
		goto label_cond_fe;
	increment = (0 - increment);
label_cond_fe:
	newmant = android::icu::math::BigDecimal::byteaddsub(this->mant, this->mant->size(), android::icu::math::BigDecimal::ONE->mant, cVar0, increment, 0x1);
	//    .local v8, "newmant":[B
	if ( newmant->size() <= this->mant->size() )
		goto label_cond_121;
	this->exp = ( this->exp + 0x1);
	java::lang::System::arraycopy(newmant, cVar2, this->mant, cVar2, this->mant->size());
	goto label_goto_3b;
	// 5248    .line 3675
label_cond_121:
	this->mant = newmant;
	goto label_goto_3b;
	// 5254    .line 3682
	// 5255    .end local v8    # "newmant":[B
label_cond_125:
	return this;

}
// .method private round(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::round(std::shared_ptr<android::icu::math::MathContext> set)
{
	
	//    .param p1, "set"    # Landroid/icu/math/MathContext;
	return this->round(set->digits, set->roundingMode);

}
// .method public static valueOf(D)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::valueOf(double dub)
{
	
	std::shared_ptr<android::icu::math::BigDecimal> cVar0;
	std::shared_ptr<java::lang::Double> cVar1;
	
	//    .param p0, "dub"    # D
	cVar1 = std::make_shared<java::lang::Double>(dub);
	cVar0 = std::make_shared<android::icu::math::BigDecimal>(cVar1->toString());
	return cVar0;

}
// .method public static valueOf(J)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::valueOf(long long lint)
{
	
	//    .param p0, "lint"    # J
	return android::icu::math::BigDecimal::valueOf(lint, 0x0);

}
// .method public static valueOf(JI)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::valueOf(long long lint,int scale)
{
	
	std::shared_ptr<android::icu::math::BigDecimal> res;
	std::shared_ptr<java::lang::NumberFormatException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "lint"    # J
	//    .param p2, "scale"    # I
	0x0;
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
	if ( (lint > 0x0) )     
		goto label_cond_c;
	res = android::icu::math::BigDecimal::ZERO;
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
label_goto_9:
	if ( scale )     
		goto label_cond_24;
	return res;
	// 5341    .line 2854
	// 5342    .local v0, "res":Landroid/icu/math/BigDecimal;
label_cond_c:
	if ( (lint > 0x1) )     
		goto label_cond_15;
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
	goto label_goto_9;
	// 5356    .line 2856
	// 5357    .local v0, "res":Landroid/icu/math/BigDecimal;
label_cond_15:
	if ( (lint > 0xa) )     
		goto label_cond_1e;
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
	goto label_goto_9;
	// 5371    .line 2859
	// 5372    .local v0, "res":Landroid/icu/math/BigDecimal;
label_cond_1e:
	//    .end local v0    # "res":Landroid/icu/math/BigDecimal;
	res = std::make_shared<android::icu::math::BigDecimal>(lint);
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
	goto label_goto_9;
	// 5382    .line 2864
label_cond_24:
	if ( scale >= 0 )
		goto label_cond_40;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::NumberFormatException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative scale: ")))->append(scale)->toString());
	// throw
	throw cVar0;
	// 5411    .line 2866
label_cond_40:
	res = android::icu::math::BigDecimal::clone(res);
	res->exp = (0 - scale);
	return res;

}
// .method public abs()Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::abs()
{
	
	return this->abs(android::icu::math::BigDecimal::plainMC);

}
// .method public abs(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::abs(std::shared_ptr<android::icu::math::MathContext> set)
{
	
	//    .param p1, "set"    # Landroid/icu/math/MathContext;
	if ( this->ind != -0x1 )
		goto label_cond_a;
	return this->negate(set);
	// 5461    .line 953
label_cond_a:
	return this->plus(set);

}
// .method public add(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::add(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->add(rhs, android::icu::math::BigDecimal::plainMC);

}
// .method public add(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::add(std::shared_ptr<android::icu::math::BigDecimal> cVar0,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	int mult;
	int ia;
	int ib;
	std::shared_ptr<unsigned char[]> lhs;
	int reqdig;
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<android::icu::math::BigDecimal> res;
	std::shared_ptr<unsigned char[]> usel;
	int usellen;
	std::shared_ptr<unsigned char[]> user;
	int userlen;
	int cVar1;
	int cVar2;
	int cVar5;
	int cVar6;
	int eb;
	unsigned char ca;
	unsigned char cb;
	int newlen;
	int tlen;
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	0x0;
	//    .local v15, "newlen":I
	0x0;
	//    .local v19, "tlen":I
	mult = 0x0;
	//    .local v6, "mult":I
	0x0;
	//    .local v18, "t":[B
	ia = 0x0;
	//    .local v12, "ia":I
	ib = 0x0;
	//    .local v13, "ib":I
	0x0;
	//    .local v10, "ea":I
	0x0;
	//    .local v11, "eb":I
	0x0;
	//    .local v8, "ca":B
	0x0;
	//    .local v9, "cb":B
	if ( !(set->lostDigits) )  
		goto label_cond_1d;
	this->checkdigits(cVar0, set->digits);
label_cond_1d:
	lhs = this;
	//    .local v14, "lhs":Landroid/icu/math/BigDecimal;
	if ( this->ind )     
		goto label_cond_30;
	if ( !(set->form) )  
		goto label_cond_30;
	return cVar0->plus(set);
	// 5575    .line 1011
label_cond_30:
	if ( cVar0->ind )     
		goto label_cond_45;
	if ( !(set->form) )  
		goto label_cond_45;
	return this->plus(set);
	// 5601    .line 1016
label_cond_45:
	reqdig = set->digits;
	//    .local v16, "reqdig":I
	if ( reqdig <= 0 )
		goto label_cond_73;
	if ( this->mant->size() <= reqdig )
		goto label_cond_60;
	lhs = android::icu::math::BigDecimal::clone(this)->round(set);
label_cond_60:
	if ( cVar0->mant->size() <= reqdig )
		goto label_cond_73;
	cVar0 = android::icu::math::BigDecimal::clone(cVar0)->round(set);
label_cond_73:
	res = std::make_shared<android::icu::math::BigDecimal>();
	//    .local v17, "res":Landroid/icu/math/BigDecimal;
	usel = lhs->mant;
	//    .local v2, "usel":[B
	usellen = lhs->mant->size();
	//    .local v3, "usellen":I
	user = cVar0->mant;
	//    .local v4, "user":[B
	userlen = cVar0->mant->size();
	//    .local v5, "userlen":I
	if ( lhs->exp != cVar0->exp )
		goto label_cond_d2;
	res->exp = lhs->exp;
label_cond_98:
label_goto_98:
	if ( lhs->ind )     
		goto label_cond_1be;
	res->ind = 0x1;
label_goto_a1:
	if ( lhs->ind != -0x1 )
		goto label_cond_1c6;
	cVar1 = 0x1;
label_goto_aa:
	if ( cVar0->ind != -0x1 )
		goto label_cond_1c9;
	cVar2 = 0x1;
label_goto_ba:
	if ( cVar1 != cVar2 )
		goto label_cond_1cd;
	mult = 0x1;
	//    .end local v8    # "ca":B
	//    .end local v9    # "cb":B
	//    .end local v18    # "t":[B
label_cond_bf:
label_goto_bf:
	res->mant = android::icu::math::BigDecimal::byteaddsub(usel, usellen, user, userlen, mult, 0x0);
	return res->finish(set, 0x0);
	// 5789    .line 1044
	// 5790    .restart local v8    # "ca":B
	// 5791    .restart local v9    # "cb":B
	// 5792    .restart local v18    # "t":[B
label_cond_d2:
	if ( lhs->exp <= cVar0->exp )
		goto label_cond_14c;
	newlen = ((lhs->exp +  usellen) - cVar0->exp);
	if ( newlen <  ( (userlen + reqdig) + 0x1) )
		goto label_cond_127;
	if ( reqdig <= 0 )
		goto label_cond_127;
	res->mant = usel;
	res->exp = lhs->exp;
	res->ind = lhs->ind;
	if ( usellen >= reqdig )
		goto label_cond_11d;
	res->mant = android::icu::math::BigDecimal::extend(lhs->mant, reqdig);
	res->exp = (res->exp - (reqdig - usellen));
label_cond_11d:
	return res->finish(set, 0x0);
	// 5893    .line 1063
label_cond_127:
	res->exp = cVar0->exp;
	if ( newlen <= ( reqdig + 0x1) )
		goto label_cond_147;
	if ( reqdig <= 0 )
		goto label_cond_147;
	tlen = ( (newlen - reqdig) + -0x1);
	userlen = (userlen - tlen);
	res->exp = (res->exp + tlen);
	newlen = ( reqdig + 0x1);
label_cond_147:
	if ( newlen <= usellen )
		goto label_cond_98;
	usellen = newlen;
	goto label_goto_98;
	// 5942    .line 1075
label_cond_14c:
	newlen = ((cVar0->exp +  userlen) - lhs->exp);
	if ( newlen <  ( (usellen + reqdig) + 0x1) )
		goto label_cond_19b;
	if ( reqdig <= 0 )
		goto label_cond_19b;
	res->mant = user;
	res->exp = cVar0->exp;
	res->ind = cVar0->ind;
	if ( userlen >= reqdig )
		goto label_cond_191;
	res->mant = android::icu::math::BigDecimal::extend(cVar0->mant, reqdig);
	res->exp = (res->exp - (reqdig - userlen));
label_cond_191:
	return res->finish(set, 0x0);
	// 6036    .line 1089
label_cond_19b:
	res->exp = lhs->exp;
	if ( newlen <= ( reqdig + 0x1) )
		goto label_cond_1b9;
	if ( reqdig <= 0 )
		goto label_cond_1b9;
	tlen = ( (newlen - reqdig) + -0x1);
	usellen = (usellen - tlen);
	res->exp = (res->exp + tlen);
	newlen = ( reqdig + 0x1);
label_cond_1b9:
	if ( newlen <= userlen )
		goto label_cond_98;
	userlen = newlen;
	goto label_goto_98;
	// 6083    .line 1111
label_cond_1be:
	res->ind = lhs->ind;
	goto label_goto_a1;
	// 6093    .line 1112
label_cond_1c6:
	cVar1 = 0x0;
	goto label_goto_aa;
label_cond_1c9:
	cVar2 = 0x0;
	goto label_goto_ba;
	// 6104    .line 1116
label_cond_1cd:
	mult = -0x1;
	if ( !(cVar0->ind) )  
		goto label_cond_bf;
	if ( usellen >= userlen )
		goto label_cond_1f9;
	cVar5 = 0x1;
label_goto_1d7:
	if ( lhs->ind )     
		goto label_cond_1fb;
	cVar6 = 0x1;
label_goto_1df:
	if ( !((cVar5 | cVar6)) )  
		goto label_cond_1fe;
	//    .local v18, "t":[B
	usel = user;
	user = usel;
	usellen = userlen;
	userlen = usellen;
	res->ind = (unsigned char)((0 - res->ind));
	goto label_goto_bf;
	// 6168    .line 1125
	// 6169    .local v18, "t":[B
label_cond_1f9:
	cVar5 = 0x0;
	goto label_goto_1d7;
label_cond_1fb:
	cVar6 = 0x0;
	goto label_goto_1df;
	// 6180    .line 1133
label_cond_1fe:
	if ( usellen >  userlen )
		goto label_cond_bf;
	ia = 0x0;
	ib = 0x0;
	eb = ( user->size() + -0x1);
	//    .end local v8    # "ca":B
	//    .end local v9    # "cb":B
label_goto_208:
	if ( ia >  ( usel->size() + -0x1) )
		goto label_cond_22a;
	ca = usel[ia];
label_goto_20c:
	if ( ib >  eb )
		goto label_cond_237;
	cb = user[ib];
label_goto_210:
	if ( ca == cb )
		goto label_cond_239;
	if ( ca >= cb )
		goto label_cond_bf;
	//    .local v18, "t":[B
	usel = user;
	user = usel;
	usellen = userlen;
	userlen = usellen;
	res->ind = (unsigned char)((0 - res->ind));
	goto label_goto_bf;
	// 6257    .line 1147
	// 6258    .local v18, "t":[B
label_cond_22a:
	if ( ib <= eb )
		goto label_cond_235;
	if ( !(set->form) )  
		goto label_cond_bf;
	return android::icu::math::BigDecimal::ZERO;
	// 6274    .line 1153
label_cond_235:
	//    .restart local v8    # "ca":B
	goto label_goto_20c;
	// 6281    .line 1158
	// 6282    .end local v8    # "ca":B
label_cond_237:
	//    .restart local v9    # "cb":B
	goto label_goto_210;
	// 6289    .line 1172
	// 6290    .end local v9    # "cb":B
label_cond_239:
	ia = ( ia + 0x1);
	ib = ( ib + 0x1);
	goto label_goto_208;

}
// .method public byteValueExact()B
unsigned char android::icu::math::BigDecimal::byteValueExact()
{
	
	int cVar0;
	int cVar1;
	int num;
	int cVar2;
	std::shared_ptr<java::lang::ArithmeticException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	num = this->intValueExact();
	//    .local v0, "num":I
	if ( num <= 0x7f )
		goto label_cond_30;
	cVar2 = cVar0;
label_goto_b:
	if ( num >= -0x80 )
		goto label_cond_32;
label_goto_f:
	if ( !((cVar0 |  cVar2)) )  
		goto label_cond_34;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::ArithmeticException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Conversion overflow: ")))->append(this->toString())->toString());
	// throw
	throw cVar3;
label_cond_30:
	cVar2 = cVar1;
	goto label_goto_b;
label_cond_32:
	cVar0 = cVar1;
	goto label_goto_f;
	// 6371    .line 1880
label_cond_34:
	return (unsigned char)(num);

}
// .method public compareTo(Landroid/icu/math/BigDecimal;)I
int android::icu::math::BigDecimal::compareTo(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->compareTo(rhs, android::icu::math::BigDecimal::plainMC);

}
// .method public compareTo(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)I
int android::icu::math::BigDecimal::compareTo(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	int cVar0;
	int cVar1;
	int i;
	int cVar2;
	int cVar3;
	int thislength;
	int cVar6;
	int _S_6;
	unsigned char newrhs;
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	cVar0 = 0x1;
	cVar1 = 0x0;
	0x0;
	//    .local v3, "thislength":I
	i = 0x0;
	//    .local v1, "i":I
	if ( !(set->lostDigits) )  
		goto label_cond_d;
	this->checkdigits(rhs, set->digits);
label_cond_d:
	if ( this->ind != rhs->ind )
		goto label_cond_2b;
	cVar2 = cVar0;
label_goto_14:
	if ( this->exp != rhs->exp )
		goto label_cond_2d;
	cVar3 = cVar0;
label_goto_1b:
	if ( !((cVar2 &  cVar3)) )  
		goto label_cond_6d;
	thislength = this->mant->size();
	if ( thislength >= rhs->mant->size() )
		goto label_cond_2f;
	return (unsigned char)((0 - this->ind));
label_cond_2b:
	cVar2 = cVar1;
	goto label_goto_14;
label_cond_2d:
	cVar3 = cVar1;
	goto label_goto_1b;
	// 6477    .line 1248
label_cond_2f:
	if ( thislength <= rhs->mant->size() )
		goto label_cond_37;
	return this->ind;
	// 6490    .line 1254
label_cond_37:
	if ( thislength >  set->digits )
		goto label_cond_56;
	cVar6 = cVar0;
label_goto_3c:
	if ( set->digits )     
		goto label_cond_58;
label_goto_40:
	if ( !((cVar6 |  cVar0)) )  
		goto label_cond_7c;
	_S_6 = thislength;
	//    .local v0, "$6":I
	i = 0x0;
label_goto_45:
	if ( _S_6 <= 0 )
		goto label_cond_6c;
	if ( this->mant[i] >= rhs->mant[i] )
		goto label_cond_5a;
	return (unsigned char)((0 - this->ind));
	// 6539    .end local v0    # "$6":I
label_cond_56:
	cVar6 = cVar1;
	goto label_goto_3c;
label_cond_58:
	cVar0 = cVar1;
	goto label_goto_40;
	// 6551    .line 1261
	// 6552    .restart local v0    # "$6":I
label_cond_5a:
	if ( this->mant[i] <= rhs->mant[i] )
		goto label_cond_67;
	return this->ind;
	// 6569    .line 1258
label_cond_67:
	_S_6 = ( _S_6 + -0x1);
	i = ( i + 0x1);
	goto label_goto_45;
	// 6577    .line 1265
label_cond_6c:
	return cVar1;
	// 6581    .line 1270
	// 6582    .end local v0    # "$6":I
label_cond_6d:
	if ( this->ind >= rhs->ind )
		goto label_cond_75;
	return -0x1;
	// 6595    .line 1272
label_cond_75:
	if ( this->ind <= rhs->ind )
		goto label_cond_7c;
	return cVar0;
	// 6606    .line 1276
label_cond_7c:
	newrhs = android::icu::math::BigDecimal::clone(rhs);
	//    .local v2, "newrhs":Landroid/icu/math/BigDecimal;
	newrhs->ind = (unsigned char)((0 - newrhs->ind));
	return this->add(newrhs, set)->ind;

}
// .method public divide(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::divide(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->dodivide(0x44, rhs, android::icu::math::BigDecimal::plainMC, -0x1);

}
// .method public divide(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::divide(std::shared_ptr<android::icu::math::BigDecimal> rhs,int round)
{
	
	int cVar0;
	std::shared_ptr<android::icu::math::MathContext> set;
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "round"    # I
	cVar0 = 0x0;
	set = std::make_shared<android::icu::math::MathContext>(cVar0, cVar0, cVar0, round);
	//    .local v0, "set":Landroid/icu/math/MathContext;
	return this->dodivide(0x44, rhs, set, -0x1);

}
// .method public divide(Landroid/icu/math/BigDecimal;II)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::divide(std::shared_ptr<android::icu::math::BigDecimal> rhs,int scale,int round)
{
	
	int cVar0;
	std::shared_ptr<java::lang::ArithmeticException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::math::MathContext> set;
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "scale"    # I
	//    .param p3, "round"    # I
	cVar0 = 0x0;
	if ( scale >= 0 )
		goto label_cond_1d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::ArithmeticException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative scale: ")))->append(scale)->toString());
	// throw
	throw cVar1;
	// 6728    .line 1354
label_cond_1d:
	set = std::make_shared<android::icu::math::MathContext>(cVar0, cVar0, cVar0, round);
	//    .local v0, "set":Landroid/icu/math/MathContext;
	return this->dodivide(0x44, rhs, set, scale);

}
// .method public divide(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::divide(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	return this->dodivide(0x44, rhs, set, -0x1);

}
// .method public divideInteger(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::divideInteger(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->dodivide(0x49, rhs, android::icu::math::BigDecimal::plainMC, 0x0);

}
// .method public divideInteger(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::divideInteger(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	return this->dodivide(0x49, rhs, set, 0x0);

}
// .method public doubleValue()D
double android::icu::math::BigDecimal::doubleValue()
{
	
	return java::lang::Double::valueOf(this->toString())->doubleValue();

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::math::BigDecimal::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	int i;
	std::shared_ptr<android::icu::math::BigDecimal> rhs;
	int cVar2;
	int cVar3;
	int cVar4;
	int _S_8;
	auto lca;
	auto rca;
	int _S_9;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	i = 0x0;
	//    .local v2, "i":I
	0x0;
	//    .local v3, "lca":[C
	0x0;
	//    .local v4, "rca":[C
	if ( obj )     
		goto label_cond_8;
	return cVar1;
	// 6847    .line 1930
label_cond_8:
	if ( obj->instanceOf("android::icu::math::BigDecimal") )     
		goto label_cond_d;
	return cVar1;
label_cond_d:
	rhs = obj;
	rhs->checkCast("android::icu::math::BigDecimal");
	//    .local v5, "rhs":Landroid/icu/math/BigDecimal;
	if ( this->ind == rhs->ind )
		goto label_cond_17;
	return cVar1;
	// 6873    .line 1935
label_cond_17:
	if ( this->mant->size() != rhs->mant->size() )
		goto label_cond_43;
	cVar2 = cVar0;
label_goto_20:
	if ( this->exp != rhs->exp )
		goto label_cond_45;
	cVar3 = cVar0;
label_goto_27:
	if ( this->form != rhs->form )
		goto label_cond_47;
	cVar4 = cVar0;
label_goto_2f:
	if ( !((cVar4 &  (cVar3 &  cVar2))) )  
		goto label_cond_4e;
	_S_8 = this->mant->size();
	//    .local v0, "$8":I
	i = 0x0;
label_goto_36:
	if ( _S_8 <= 0 )
		goto label_cond_6b;
	if ( this->mant[i] == rhs->mant[i] )
		goto label_cond_49;
	return cVar1;
	// 6939    .end local v0    # "$8":I
label_cond_43:
	cVar2 = cVar1;
	goto label_goto_20;
label_cond_45:
	cVar3 = cVar1;
	goto label_goto_27;
label_cond_47:
	cVar4 = cVar1;
	goto label_goto_2f;
	// 6956    .line 1942
	// 6957    .restart local v0    # "$8":I
label_cond_49:
	_S_8 = ( _S_8 + -0x1);
	i = ( i + 0x1);
	goto label_goto_36;
	// 6965    .line 1948
	// 6966    .end local v0    # "$8":I
label_cond_4e:
	lca = this->layout();
	//    .local v3, "lca":[C
	rca = rhs->layout();
	//    .local v4, "rca":[C
	if ( lca->size() == rca->size() )
		goto label_cond_5b;
	return cVar1;
	// 6989    .line 1954
label_cond_5b:
	_S_9 = lca->size();
	//    .local v1, "$9":I
	i = 0x0;
label_goto_5d:
	if ( _S_9 <= 0 )
		goto label_cond_6b;
	if ( lca[i] == rca[i] )
		goto label_cond_66;
	return cVar1;
	// 7011    .line 1956
label_cond_66:
	_S_9 = ( _S_9 + -0x1);
	i = ( i + 0x1);
	goto label_goto_5d;
	// 7019    .line 1962
	// 7020    .end local v1    # "$9":I
	// 7021    .end local v3    # "lca":[C
	// 7022    .end local v4    # "rca":[C
label_cond_6b:
	return cVar0;

}
// .method public floatValue()F
float android::icu::math::BigDecimal::floatValue()
{
	
	return java::lang::Float::valueOf(this->toString())->floatValue();

}
// .method public format(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::math::BigDecimal::format(int before,int after)
{
	
	int cVar0;
	
	//    .param p1, "before"    # I
	//    .param p2, "after"    # I
	cVar0 = -0x1;
	return this->format(before, after, cVar0, cVar0, 0x1, 0x4);

}
// .method public format(IIIIII)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::math::BigDecimal::format(int before,int after,int explaces,int exdigits,int exformint,int exround)
{
	
	int thisafter;
	int p;
	int i;
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::math::BigDecimal> num;
	std::shared_ptr<char[]> a;
	int _S_11;
	auto newa;
	int _S_12;
	int _S_13;
	int _S_14;
	std::shared_ptr<java::lang::String> cVar10;
	int places;
	int _S_15;
	std::shared_ptr<java::lang::ArithmeticException> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	int chop;
	int lead;
	int mag;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "before"    # I
	//    .param p2, "after"    # I
	//    .param p3, "explaces"    # I
	//    .param p4, "exdigits"    # I
	//    .param p5, "exformint"    # I
	//    .param p6, "exround"    # I
	0x0;
	//    .local v15, "mag":I
	thisafter = 0x0;
	//    .local v23, "thisafter":I
	0x0;
	//    .local v14, "lead":I
	0x0;
	//    .local v18, "newmant":[B
	0x0;
	//    .local v12, "chop":I
	0x0;
	//    .local v16, "need":I
	0x0;
	//    .local v20, "oldexp":I
	p = 0x0;
	//    .local v21, "p":I
	0x0;
	//    .local v17, "newa":[C
	i = 0x0;
	//    .local v13, "i":I
	0x0;
	//    .local v22, "places":I
	if ( before >= -0x1 )
		goto label_cond_133;
	cVar0 = 0x1;
label_goto_1e:
	if ( before )     
		goto label_cond_139;
	cVar1 = 0x1;
label_goto_22:
	if ( !((cVar1 | cVar0)) )  
		goto label_cond_3a;
	this->badarg(std::make_shared<java::lang::String>(std::make_shared<char[]>("format")), 0x1, java::lang::String::valueOf(before));
label_cond_3a:
	if ( after >= -0x1 )
		goto label_cond_56;
	this->badarg(std::make_shared<java::lang::String>(std::make_shared<char[]>("format")), 0x2, java::lang::String::valueOf(after));
label_cond_56:
	if ( explaces >= -0x1 )
		goto label_cond_13d;
	cVar2 = 0x1;
label_goto_62:
	if ( explaces )     
		goto label_cond_143;
	cVar3 = 0x1;
label_goto_66:
	if ( !((cVar3 | cVar2)) )  
		goto label_cond_7e;
	this->badarg(std::make_shared<java::lang::String>(std::make_shared<char[]>("format")), 0x3, java::lang::String::valueOf(explaces));
label_cond_7e:
	if ( exdigits >= -0x1 )
		goto label_cond_9a;
	this->badarg(std::make_shared<java::lang::String>(std::make_shared<char[]>("format")), 0x4, java::lang::String::valueOf(explaces));
label_cond_9a:
	if ( exformint != 0x1 )
		goto label_cond_147;
label_cond_a2:
label_goto_a2:
	if ( exround == 0x4 )
		goto label_cond_b4;
	if ( exround != -0x1 )
		goto label_cond_171;
label_cond_b4:
label_goto_b4:
	num = android::icu::math::BigDecimal::clone(this);
	//    .local v19, "num":Landroid/icu/math/BigDecimal;
	if ( exdigits != -0x1 )
		goto label_cond_19f;
	num->form = 0x0;
label_goto_c8:
	if ( after < 0 ) 
		goto label_cond_e3;
label_cond_ca:
label_goto_ca:
	if ( num->form )     
		goto label_cond_1f2;
	thisafter = (0 - num->exp);
label_goto_dd:
	if ( thisafter != after )
		goto label_cond_24e;
	//    .end local v18    # "newmant":[B
label_cond_e3:
label_goto_e3:
	a = num->layout();
	//    .local v11, "a":[C
	if ( before <= 0 )
		goto label_cond_32d;
	_S_11 = a->size();
	//    .local v6, "$11":I
	p = 0x0;
label_goto_ec:
	if ( _S_11 <= 0 )
		goto label_cond_f8;
	if ( a[p] != 0x2e )
		goto label_cond_30d;
label_cond_f8:
	if ( p <= before )
		goto label_cond_112;
	this->badarg(std::make_shared<java::lang::String>(std::make_shared<char[]>("format")), 0x1, java::lang::String::valueOf(before));
label_cond_112:
	if ( p >= before )
		goto label_cond_32d;
	newa = std::make_shared<std::vector<char[]>>(((a->size() + before) - p));
	//    .local v17, "newa":[C
	_S_12 = (before - p);
	//    .local v7, "$12":I
	i = 0x0;
label_goto_128:
	if ( _S_12 <= 0 )
		goto label_cond_31d;
	newa[i] = 0x20;
	_S_12 = ( _S_12 + -0x1);
	i = ( i + 0x1);
	goto label_goto_128;
	// 7475    .line 2110
	// 7476    .end local v6    # "$11":I
	// 7477    .end local v7    # "$12":I
	// 7478    .end local v11    # "a":[C
	// 7479    .end local v19    # "num":Landroid/icu/math/BigDecimal;
	// 7480    .local v17, "newa":[C
	// 7481    .restart local v18    # "newmant":[B
label_cond_133:
	cVar0 = 0x0;
	goto label_goto_1e;
label_cond_139:
	cVar1 = 0x0;
	goto label_goto_22;
	// 7494    .line 2114
label_cond_13d:
	cVar2 = 0x0;
	goto label_goto_62;
label_cond_143:
	cVar3 = 0x0;
	goto label_goto_66;
	// 7507    .line 2120
label_cond_147:
	if ( exformint == 0x2 )
		goto label_cond_a2;
	if ( exformint != -0x1 )
		goto label_cond_15b;
	0x1;
	goto label_goto_a2;
	// 7531    .line 2125
label_cond_15b:
	this->badarg(std::make_shared<java::lang::String>(std::make_shared<char[]>("format")), 0x5, java::lang::String::valueOf(exformint));
	goto label_goto_a2;
	// 7553    .line 2135
label_cond_171:
	try {
	//label_try_start_171:
	var161 = new android::icu::math::MathContext(0x9, 0x1, 0x0, exround);
	//label_try_end_186:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_188;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_171 .. :try_end_186} :catch_188
	goto label_goto_b4;
	// 7580    .line 2136
label_catch_188:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "$10":Ljava/lang/IllegalArgumentException;
	this->badarg(std::make_shared<java::lang::String>(std::make_shared<char[]>("format")), 0x6, java::lang::String::valueOf(exround));
	goto label_goto_b4;
	// 7606    .line 2154
	// 7607    .end local v5    # "$10":Ljava/lang/IllegalArgumentException;
	// 7608    .restart local v19    # "num":Landroid/icu/math/BigDecimal;
label_cond_19f:
	if ( num->ind )     
		goto label_cond_1b1;
	num->form = 0x0;
	goto label_goto_c8;
	// 7629    .line 2158
label_cond_1b1:
	mag = (num->exp + num->mant->size());
	if ( mag <= exdigits )
		goto label_cond_1d5;
	num->form = (unsigned char)(exformint);
	goto label_goto_c8;
	// 7671    .line 2161
label_cond_1d5:
	if ( mag >= -0x5 )
		goto label_cond_1e8;
	num->form = (unsigned char)(exformint);
	goto label_goto_c8;
	// 7694    .line 2164
label_cond_1e8:
	num->form = 0x0;
	goto label_goto_c8;
	// 7706    .line 2179
label_cond_1f2:
	if ( num->form != 0x1 )
		goto label_cond_20f;
	thisafter = ( num->mant->size() + -0x1);
	goto label_goto_dd;
	// 7739    .line 2182
label_cond_20f:
	lead = ( ( (num->exp + num->mant->size()) + -0x1) % 0x3);
	if ( lead >= 0 )
		goto label_cond_22a;
label_cond_22a:
	lead = ( lead + 0x1);
	if ( lead <  num->mant->size() )
		goto label_cond_23f;
	thisafter = 0x0;
	goto label_goto_dd;
	// 7797    .line 2189
label_cond_23f:
	thisafter = (num->mant->size() - lead);
	goto label_goto_dd;
	// 7815    .line 2194
label_cond_24e:
	if ( thisafter >= after )
		goto label_cond_2b2;
	//    .local v18, "newmant":[B
	num->mant = android::icu::math::BigDecimal::extend(num->mant, ((num->mant->size() + after) - thisafter));
	num->exp = (num->exp - (after - thisafter));
	if ( num->exp >= -0x3b9ac9ff )
		goto label_cond_e3;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	cVar8 = std::make_shared<java::lang::ArithmeticException>(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exponent Overflow: ")))->append(num->exp)->toString());
	// throw
	throw cVar8;
	// 7921    .line 2206
	// 7922    .local v18, "newmant":[B
label_cond_2b2:
	chop = (thisafter - after);
	if ( chop <= num->mant->size() )
		goto label_cond_2e3;
	num->mant = android::icu::math::BigDecimal::ZERO->mant;
	num->ind = 0x0;
	num->exp = 0x0;
	goto label_goto_ca;
	// 7978    .line 2216
label_cond_2e3:
	num->round((num->mant->size() - chop), 0x4);
	if ( (num->exp - num->exp) != chop )
		goto label_cond_ca;
	goto label_goto_e3;
	// 8025    .line 2239
	// 8026    .end local v18    # "newmant":[B
	// 8027    .restart local v6    # "$11":I
	// 8028    .restart local v11    # "a":[C
label_cond_30d:
	if ( a[p] == 0x45 )
		goto label_cond_f8;
	_S_11 = ( _S_11 + -0x1);
	p = ( p + 0x1);
	goto label_goto_ec;
	// 8047    .line 2256
	// 8048    .restart local v7    # "$12":I
	// 8049    .local v17, "newa":[C
label_cond_31d:
	java::lang::System::arraycopy(a, 0x0, newa, i, a->size());
	a = newa;
	//    .end local v6    # "$11":I
	//    .end local v7    # "$12":I
	//    .end local v17    # "newa":[C
label_cond_32d:
	if ( explaces <= 0 )
		goto label_cond_37b;
	_S_13 = ( a->size() + -0x1);
	//    .local v8, "$13":I
	p = ( a->size() + -0x1);
label_goto_339:
	if ( _S_13 <= 0 )
		goto label_cond_345;
	if ( a[p] != 0x45 )
		goto label_cond_374;
label_cond_345:
	if ( p )     
		goto label_cond_383;
	newa = std::make_shared<std::vector<char[]>>(( (a->size() + explaces) + 0x2));
	//    .restart local v17    # "newa":[C
	java::lang::System::arraycopy(a, 0x0, newa, 0x0, a->size());
	_S_14 = ( explaces + 0x2);
	//    .local v9, "$14":I
	i = a->size();
label_goto_369:
	if ( _S_14 <= 0 )
		goto label_cond_379;
	newa[i] = 0x20;
	_S_14 = ( _S_14 + -0x1);
	i = ( i + 0x1);
	goto label_goto_369;
	// 8167    .line 2267
	// 8168    .end local v9    # "$14":I
	// 8169    .end local v17    # "newa":[C
label_cond_374:
	_S_13 = ( _S_13 + -0x1);
	p = ( p + -0x1);
	goto label_goto_339;
	// 8177    .line 2283
	// 8178    .restart local v9    # "$14":I
	// 8179    .restart local v17    # "newa":[C
label_cond_379:
	a = newa;
	//    .end local v8    # "$13":I
	//    .end local v9    # "$14":I
	//    .end local v17    # "newa":[C
label_cond_37b:
label_goto_37b:
	var383 = cVar10(a);
	return cVar10;
	// 8197    .line 2285
	// 8198    .restart local v8    # "$13":I
label_cond_383:
	places = ( (a->size() - p) + -0x2);
	if ( places <= explaces )
		goto label_cond_3a4;
	this->badarg(std::make_shared<java::lang::String>(std::make_shared<char[]>("format")), 0x3, java::lang::String::valueOf(explaces));
label_cond_3a4:
	if ( places >= explaces )
		goto label_cond_37b;
	newa = std::make_shared<std::vector<char[]>>(((a->size() + explaces) - places));
	//    .restart local v17    # "newa":[C
	java::lang::System::arraycopy(a, 0x0, newa, 0x0, ( p + 0x2));
	_S_15 = (explaces - places);
	//    .local v10, "$15":I
	i = ( p + 0x2);
label_goto_3cc:
	if ( _S_15 <= 0 )
		goto label_cond_3d7;
	newa[i] = 0x30;
	_S_15 = ( _S_15 + -0x1);
	i = ( i + 0x1);
	goto label_goto_3cc;
	// 8298    .line 2299
label_cond_3d7:
	java::lang::System::arraycopy(a, ( p + 0x2), newa, i, places);
	a = newa;
	goto label_goto_37b;

}
// .method public hashCode()I
int android::icu::math::BigDecimal::hashCode()
{
	
	return this->toString()->hashCode();

}
// .method public intValue()I
int android::icu::math::BigDecimal::intValue()
{
	
	return this->toBigInteger()->intValue();

}
// .method public intValueExact()I
int android::icu::math::BigDecimal::intValueExact()
{
	
	int cVar0;
	int cVar1;
	int useexp;
	int i;
	int lodigit;
	std::shared_ptr<java::lang::ArithmeticException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int result;
	std::shared_ptr<java::lang::ArithmeticException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::ArithmeticException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	cVar0 = 0x9;
	cVar1 = 0x0;
	useexp = 0x0;
	//    .local v5, "useexp":I
	i = 0x0;
	//    .local v1, "i":I
	0x0;
	//    .local v4, "topdig":I
	if ( this->ind )     
		goto label_cond_b;
	return cVar1;
	// 8376    .line 2364
label_cond_b:
	lodigit = ( this->mant->size() + -0x1);
	//    .local v2, "lodigit":I
	if ( this->exp >= 0 )
		goto label_cond_55;
	lodigit = (lodigit +  this->exp);
	if ( android::icu::math::BigDecimal::allzero(this->mant, ( lodigit + 0x1)) )     
		goto label_cond_3f;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::ArithmeticException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Decimal part non-zero: ")))->append(this->toString())->toString());
	// throw
	throw cVar2;
	// 8435    .line 2370
label_cond_3f:
	if ( lodigit >= 0 )
		goto label_cond_42;
	return cVar1;
	// 8442    .line 2372
label_cond_42:
	useexp = 0x0;
label_goto_43:
	result = 0x0;
	//    .local v3, "result":I
	//    .local v0, "$16":I
	i = 0x0;
label_goto_47:
	if ( i >  (lodigit + useexp) )
		goto label_cond_7b;
	result = ( result * 0xa);
	if ( i >  lodigit )
		goto label_cond_52;
	result = (result +  this->mant[i]);
label_cond_52:
	i = ( i + 0x1);
	goto label_goto_47;
	// 8481    .line 2374
	// 8482    .end local v0    # "$16":I
	// 8483    .end local v3    # "result":I
label_cond_55:
	if ( (this->exp +  lodigit) <= cVar0 )
		goto label_cond_78;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::ArithmeticException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Conversion overflow: ")))->append(this->toString())->toString());
	// throw
	throw cVar4;
	// 8520    .line 2376
label_cond_78:
	useexp = this->exp;
	goto label_goto_43;
	// 8526    .line 2391
	// 8527    .restart local v0    # "$16":I
	// 8528    .restart local v3    # "result":I
label_cond_7b:
	if ( (lodigit + useexp) != cVar0 )
		goto label_cond_b9;
	if ( (result / 0x3b9aca00) == this->mant[cVar1] )
		goto label_cond_b9;
	if ( result != -0x80000000 )
		goto label_cond_9b;
	if ( this->ind != -0x1 )
		goto label_cond_9b;
	if ( this->mant[cVar1] != 0x2 )
		goto label_cond_9b;
	return result;
	// 8570    .line 2401
label_cond_9b:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::lang::ArithmeticException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Conversion overflow: ")))->append(this->toString())->toString());
	// throw
	throw cVar6;
	// 8600    .line 2406
label_cond_b9:
	if ( this->ind != 0x1 )
		goto label_cond_bf;
	return result;
	// 8611    .line 2408
label_cond_bf:
	return (0 - result);

}
// .method public longValue()J
long long android::icu::math::BigDecimal::longValue()
{
	
	return this->toBigInteger()->longValue();

}
// .method public longValueExact()J
long long android::icu::math::BigDecimal::longValueExact()
{
	
	long long cVar0;
	int cVar1;
	int cVar2;
	int cstart;
	int useexp;
	int i;
	int lodigit;
	std::shared_ptr<java::lang::ArithmeticException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	long long result;
	std::shared_ptr<java::lang::ArithmeticException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::ArithmeticException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	cVar0 = 0x0;
	cVar1 = 0x12;
	cVar2 = 0x0;
	cstart = 0x0;
	//    .local v1, "cstart":I
	useexp = 0x0;
	//    .local v8, "useexp":I
	i = 0x0;
	//    .local v2, "i":I
	0x0;
	//    .local v6, "topdig":J
	if ( this->ind )     
		goto label_cond_f;
	return cVar0;
	// 8668    .line 2445
label_cond_f:
	lodigit = ( this->mant->size() + -0x1);
	//    .local v3, "lodigit":I
	if ( this->exp >= 0 )
		goto label_cond_60;
	lodigit = (lodigit +  this->exp);
	if ( lodigit >= 0 )
		goto label_cond_44;
	cstart = 0x0;
label_goto_1e:
	if ( android::icu::math::BigDecimal::allzero(this->mant, cstart) )     
		goto label_cond_47;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::ArithmeticException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Decimal part non-zero: ")))->append(this->toString())->toString());
	// throw
	throw cVar3;
	// 8732    .line 2452
label_cond_44:
	cstart = ( lodigit + 0x1);
	goto label_goto_1e;
	// 8738    .line 2455
label_cond_47:
	if ( lodigit >= 0 )
		goto label_cond_4a;
	return cVar0;
	// 8745    .line 2457
label_cond_4a:
	useexp = 0x0;
label_goto_4b:
	result = 0x0;
	//    .local v4, "result":J
	//    .local v0, "$17":I
	i = 0x0;
label_goto_50:
	if ( i >  (lodigit + useexp) )
		goto label_cond_89;
	result = (result *  0xa);
	if ( i >  lodigit )
		goto label_cond_5d;
	result = (result +  (long long)(this->mant[i]));
label_cond_5d:
	i = ( i + 0x1);
	goto label_goto_50;
	// 8788    .line 2459
	// 8789    .end local v0    # "$17":I
	// 8790    .end local v4    # "result":J
label_cond_60:
	if ( (this->exp +  this->mant->size()) <= cVar1 )
		goto label_cond_86;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::lang::ArithmeticException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Conversion overflow: ")))->append(this->toString())->toString());
	// throw
	throw cVar5;
	// 8831    .line 2461
label_cond_86:
	useexp = this->exp;
	goto label_goto_4b;
	// 8837    .line 2480
	// 8838    .restart local v0    # "$17":I
	// 8839    .restart local v4    # "result":J
label_cond_89:
	if ( (lodigit + useexp) != cVar1 )
		goto label_cond_cf;
	if ( !(((result / 0xde0b6b3a7640000L) > (long long)(this->mant[cVar2]))) )  
		goto label_cond_cf;
	if ( (result > -0x8000000000000000L) )     
		goto label_cond_b1;
	if ( this->ind != -0x1 )
		goto label_cond_b1;
	if ( this->mant[cVar2] != 0x9 )
		goto label_cond_b1;
	return result;
	// 8887    .line 2488
label_cond_b1:
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::lang::ArithmeticException>(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Conversion overflow: ")))->append(this->toString())->toString());
	// throw
	throw cVar7;
	// 8917    .line 2493
label_cond_cf:
	if ( this->ind != 0x1 )
		goto label_cond_d5;
	return result;
	// 8928    .line 2495
label_cond_d5:
	return (0 - result);

}
// .method public max(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::max(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->max(rhs, android::icu::math::BigDecimal::plainMC);

}
// .method public max(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::max(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	if ( this->compareTo(rhs, set) < 0 ) 
		goto label_cond_b;
	return this->plus(set);
	// 8970    .line 1442
label_cond_b:
	return rhs->plus(set);

}
// .method public min(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::min(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->min(rhs, android::icu::math::BigDecimal::plainMC);

}
// .method public min(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::min(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	if ( this->compareTo(rhs, set) > 0 ) 
		goto label_cond_b;
	return this->plus(set);
	// 9014    .line 1479
label_cond_b:
	return rhs->plus(set);

}
// .method public movePointLeft(I)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::movePointLeft(int n)
{
	
	int res;
	
	//    .param p1, "n"    # I
	res = android::icu::math::BigDecimal::clone(this);
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
	res->exp = (res->exp -  n);
	return res->finish(android::icu::math::BigDecimal::plainMC, 0x0);

}
// .method public movePointRight(I)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::movePointRight(int n)
{
	
	int res;
	
	//    .param p1, "n"    # I
	res = android::icu::math::BigDecimal::clone(this);
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
	res->exp = (res->exp +  n);
	return res->finish(android::icu::math::BigDecimal::plainMC, 0x0);

}
// .method public multiply(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::multiply(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->multiply(rhs, android::icu::math::BigDecimal::plainMC);

}
// .method public multiply(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::multiply(std::shared_ptr<android::icu::math::BigDecimal> cVar0,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	int acclen;
	int n;
	std::shared_ptr<unsigned char[]> lhs;
	int padding;
	int reqdig;
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<unsigned char[]> multer;
	std::shared_ptr<unsigned char[]> multand;
	int multandlen;
	std::shared_ptr<android::icu::math::BigDecimal> res;
	std::shared<std::vector<unsigned char[]>> acc;
	int _S_7;
	int mult;
	std::shared_ptr<unsigned char[]> acc;
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	0x0;
	//    .local v10, "multer":[B
	0x0;
	//    .local v3, "multand":[B
	acclen = 0x0;
	//    .local v8, "acclen":I
	n = 0x0;
	//    .local v11, "n":I
	0x0;
	//    .local v5, "mult":B
	if ( !(set->lostDigits) )  
		goto label_cond_14;
	this->checkdigits(cVar0, set->digits);
label_cond_14:
	lhs = this;
	//    .local v9, "lhs":Landroid/icu/math/BigDecimal;
	padding = 0x0;
	//    .local v12, "padding":I
	reqdig = set->digits;
	//    .local v13, "reqdig":I
	if ( reqdig <= 0 )
		goto label_cond_7a;
	if ( this->mant->size() <= reqdig )
		goto label_cond_2b;
	lhs = android::icu::math::BigDecimal::clone(this)->round(set);
label_cond_2b:
	if ( cVar0->mant->size() <= reqdig )
		goto label_cond_3c;
	cVar0 = android::icu::math::BigDecimal::clone(cVar0)->round(set);
label_cond_3c:
label_goto_3c:
	if ( lhs->mant->size() >= cVar0->mant->size() )
		goto label_cond_8e;
	multer = lhs->mant;
	//    .local v10, "multer":[B
	multand = cVar0->mant;
	//    .local v3, "multand":[B
label_goto_4c:
	multandlen = ( (multer->size() +  multand->size()) + -0x1);
	//    .local v4, "multandlen":I
	if ( (multer[0x0] *  multand[0x0]) <= 0x9 )
		goto label_cond_95;
	acclen = ( multandlen + 0x1);
label_goto_5e:
	res = std::make_shared<android::icu::math::BigDecimal>();
	//    .local v14, "res":Landroid/icu/math/BigDecimal;
	acc = std::make_shared<std::vector<unsigned char[]>>(acclen);
	//    .local v1, "acc":[B
	_S_7 = multer->size();
	//    .local v7, "$7":I
	n = 0x0;
	//    .end local v5    # "mult":B
label_goto_67:
	if ( _S_7 <= 0 )
		goto label_cond_97;
	mult = multer[n];
	//    .local v5, "mult":B
	if ( !(mult) )  
		goto label_cond_73;
	acc = android::icu::math::BigDecimal::byteaddsub(acc, acc->size(), multand, multandlen, mult, 0x1);
label_cond_73:
	multandlen = ( multandlen + -0x1);
	_S_7 = ( _S_7 + -0x1);
	n = ( n + 0x1);
	goto label_goto_67;
	// 9301    .line 1538
	// 9302    .end local v1    # "acc":[B
	// 9303    .end local v4    # "multandlen":I
	// 9304    .end local v7    # "$7":I
	// 9305    .end local v14    # "res":Landroid/icu/math/BigDecimal;
	// 9306    .local v3, "multand":[B
	// 9307    .local v5, "mult":B
	// 9308    .local v10, "multer":[B
label_cond_7a:
	if ( this->exp <= 0 )
		goto label_cond_82;
	padding = ( this->exp + 0x0);
label_cond_82:
	if ( cVar0->exp <= 0 )
		goto label_cond_3c;
	padding = (padding +  cVar0->exp);
	goto label_goto_3c;
	// 9336    .line 1552
label_cond_8e:
	multer = cVar0->mant;
	//    .local v10, "multer":[B
	multand = lhs->mant;
	//    .local v3, "multand":[B
	goto label_goto_4c;
	// 9349    .line 1562
	// 9350    .restart local v4    # "multandlen":I
label_cond_95:
	acclen = multandlen;
	goto label_goto_5e;
	// 9356    .line 1585
	// 9357    .end local v5    # "mult":B
	// 9358    .restart local v1    # "acc":[B
	// 9359    .restart local v7    # "$7":I
	// 9360    .restart local v14    # "res":Landroid/icu/math/BigDecimal;
label_cond_97:
	res->ind = (unsigned char)((lhs->ind *  cVar0->ind));
	res->exp = ((lhs->exp +  cVar0->exp) -  padding);
	if ( padding )     
		goto label_cond_b7;
	res->mant = acc;
label_goto_af:
	return res->finish(set, 0x0);
	// 9405    .line 1593
label_cond_b7:
	res->mant = android::icu::math::BigDecimal::extend(acc, (acc->size() +  padding));
	goto label_goto_af;

}
// .method public negate()Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::negate()
{
	
	return this->negate(android::icu::math::BigDecimal::plainMC);

}
// .method public negate(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::negate(std::shared_ptr<android::icu::math::MathContext> set)
{
	
	std::shared_ptr<android::icu::math::BigDecimal> cVar0;
	unsigned char res;
	
	//    .param p1, "set"    # Landroid/icu/math/MathContext;
	if ( !(set->lostDigits) )  
		goto label_cond_c;
	cVar0 = 0x0;
	cVar0->checkCast("android::icu::math::BigDecimal");
	this->checkdigits(cVar0, set->digits);
label_cond_c:
	res = android::icu::math::BigDecimal::clone(this);
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
	res->ind = (unsigned char)((0 - res->ind));
	return res->finish(set, 0x0);

}
// .method public plus()Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::plus()
{
	
	return this->plus(android::icu::math::BigDecimal::plainMC);

}
// .method public plus(Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::plus(std::shared_ptr<android::icu::math::MathContext> set)
{
	
	std::shared_ptr<android::icu::math::BigDecimal> cVar0;
	
	//    .param p1, "set"    # Landroid/icu/math/MathContext;
	if ( !(set->lostDigits) )  
		goto label_cond_d;
	cVar0 = 0x0;
	cVar0->checkCast("android::icu::math::BigDecimal");
	this->checkdigits(cVar0, set->digits);
label_cond_d:
	if ( set->form )     
		goto label_cond_22;
	if ( this->form )     
		goto label_cond_22;
	if ( this->mant->size() >  set->digits )
		goto label_cond_1d;
	return this;
	// 9537    .line 1671
label_cond_1d:
	if ( set->digits )     
		goto label_cond_22;
	return this;
	// 9546    .line 1674
label_cond_22:
	return android::icu::math::BigDecimal::clone(this)->finish(set, 0x0);

}
// .method public pow(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::pow(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->pow(rhs, android::icu::math::BigDecimal::plainMC);

}
// .method public pow(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::pow(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	int workdigits;
	int i;
	int n;
	int reqdig;
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::math::MathContext> workset;
	std::shared_ptr<android::icu::math::BigDecimal> res;
	std::shared_ptr<java::lang::ArithmeticException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	workdigits = 0x0;
	//    .local v7, "workdigits":I
	0x0;
	//    .local v0, "L":I
	i = 0x0;
	//    .local v1, "i":I
	if ( !(set->lostDigits) )  
		goto label_cond_d;
	this->checkdigits(rhs, set->digits);
label_cond_d:
	n = rhs->intcheck(-0x3b9ac9ff, 0x3b9ac9ff);
	//    .local v3, "n":I
	//    .local v2, "lhs":Landroid/icu/math/BigDecimal;
	reqdig = set->digits;
	//    .local v4, "reqdig":I
	if ( reqdig )     
		goto label_cond_4e;
	if ( rhs->ind != -0x1 )
		goto label_cond_3f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::ArithmeticException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative power: ")))->append(rhs->toString())->toString());
	// throw
	throw cVar0;
	// 9662    .line 1740
label_cond_3f:
	workdigits = 0x0;
label_goto_40:
	workset = std::make_shared<android::icu::math::MathContext>(workdigits, set->form, 0x0, set->roundingMode);
	//    .local v8, "workset":Landroid/icu/math/MathContext;
	res = android::icu::math::BigDecimal::ONE;
	//    .local v5, "res":Landroid/icu/math/BigDecimal;
	if ( n )     
		goto label_cond_8d;
	return res;
	// 9687    .line 1742
	// 9688    .end local v5    # "res":Landroid/icu/math/BigDecimal;
	// 9689    .end local v8    # "workset":Landroid/icu/math/MathContext;
label_cond_4e:
	if ( (rhs->mant->size() +  rhs->exp) <= reqdig )
		goto label_cond_74;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::ArithmeticException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Too many digits: ")))->append(rhs->toString())->toString());
	// throw
	throw cVar2;
	// 9730    .line 1746
label_cond_74:
	if ( this->mant->size() <= reqdig )
		goto label_cond_81;
	android::icu::math::BigDecimal::clone(this)->round(set);
label_cond_81:
	workdigits = ( (reqdig + (rhs->mant->size() + rhs->exp)) + 0x1);
	goto label_goto_40;
	// 9764    .line 1762
	// 9765    .restart local v5    # "res":Landroid/icu/math/BigDecimal;
	// 9766    .restart local v8    # "workset":Landroid/icu/math/MathContext;
label_cond_8d:
	if ( n >= 0 )
		goto label_cond_90;
	n = (0 - n);
label_cond_90:
	//    .local v6, "seenbit":Z
	i = 0x1;
label_goto_92:
	n = (n +  n);
	if ( n >= 0 )
		goto label_cond_9a;
	res = res->multiply(this, workset);
label_cond_9a:
	if ( i != 0x1f )
		goto label_cond_ae;
	if ( rhs->ind >= 0 )
		goto label_cond_a8;
	res = android::icu::math::BigDecimal::ONE->divide(res, workset);
label_cond_a8:
	return res->finish(set, 0x1);
	// 9824    .line 1775
label_cond_ae:
	if ( 0x0 )     
		goto label_cond_b3;
label_goto_b0:
	i = ( i + 0x1);
	goto label_goto_92;
	// 9834    .line 1777
label_cond_b3:
	res = res->multiply(res, workset);
	goto label_goto_b0;

}
// .method public remainder(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::remainder(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->dodivide(0x52, rhs, android::icu::math::BigDecimal::plainMC, -0x1);

}
// .method public remainder(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::remainder(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	return this->dodivide(0x52, rhs, set, -0x1);

}
// .method public scale()I
int android::icu::math::BigDecimal::scale()
{
	
	if ( this->exp < 0 ) 
		goto label_cond_6;
	return 0x0;
	// 9894    .line 2554
label_cond_6:
	return (0 - this->exp);

}
// .method public setScale(I)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::setScale(int scale)
{
	
	//    .param p1, "scale"    # I
	return this->setScale(scale, 0x7);

}
// .method public setScale(II)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::setScale(int scale,int round)
{
	
	int padding;
	int ourscale;
	std::shared_ptr<unsigned char[]> res;
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int res;
	
	//    .param p1, "scale"    # I
	//    .param p2, "round"    # I
	padding = 0x0;
	//    .local v2, "padding":I
	0x0;
	//    .local v0, "newlen":I
	ourscale = this->scale();
	//    .local v1, "ourscale":I
	if ( ourscale != scale )
		goto label_cond_e;
	if ( this->form )     
		goto label_cond_e;
	return this;
	// 9951    .line 2614
label_cond_e:
	res = android::icu::math::BigDecimal::clone(this);
	//    .local v3, "res":Landroid/icu/math/BigDecimal;
	if ( ourscale >  scale )
		goto label_cond_2f;
	if ( ourscale )     
		goto label_cond_2c;
	padding = (res->exp + scale);
label_goto_1a:
	res->mant = android::icu::math::BigDecimal::extend(res->mant, (res->mant->size() +  padding));
	res->exp = (0 - scale);
label_cond_29:
label_goto_29:
	res->form = 0x0;
	return res;
	// 9998    .line 2620
label_cond_2c:
	padding = (scale - ourscale);
	goto label_goto_1a;
	// 10004    .line 2624
label_cond_2f:
	if ( scale >= 0 )
		goto label_cond_4b;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::ArithmeticException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative scale: ")))->append(scale)->toString());
	// throw
	throw cVar0;
	// 10033    .line 2627
label_cond_4b:
	res = res->round((res->mant->size() - (ourscale - scale)), round);
	if ( res->exp == (0 - scale) )
		goto label_cond_29;
	res->mant = android::icu::math::BigDecimal::extend(res->mant, ( res->mant->size() + 0x1));
	res->exp = ( res->exp + -0x1);
	goto label_goto_29;

}
// .method public shortValueExact()S
short android::icu::math::BigDecimal::shortValueExact()
{
	
	int cVar0;
	int cVar1;
	int num;
	int cVar2;
	std::shared_ptr<java::lang::ArithmeticException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	num = this->intValueExact();
	//    .local v0, "num":I
	if ( num <= 0x7fff )
		goto label_cond_30;
	cVar2 = cVar0;
label_goto_b:
	if ( num >= -0x8000 )
		goto label_cond_32;
label_goto_f:
	if ( !((cVar0 |  cVar2)) )  
		goto label_cond_34;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::ArithmeticException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Conversion overflow: ")))->append(this->toString())->toString());
	// throw
	throw cVar3;
label_cond_30:
	cVar2 = cVar1;
	goto label_goto_b;
label_cond_32:
	cVar0 = cVar1;
	goto label_goto_f;
	// 10151    .line 2654
label_cond_34:
	return (short)(num);

}
// .method public signum()I
int android::icu::math::BigDecimal::signum()
{
	
	return this->ind;

}
// .method public subtract(Landroid/icu/math/BigDecimal;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::subtract(std::shared_ptr<android::icu::math::BigDecimal> rhs)
{
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	return this->subtract(rhs, android::icu::math::BigDecimal::plainMC);

}
// .method public subtract(Landroid/icu/math/BigDecimal;Landroid/icu/math/MathContext;)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::math::BigDecimal::subtract(std::shared_ptr<android::icu::math::BigDecimal> rhs,std::shared_ptr<android::icu::math::MathContext> set)
{
	
	unsigned char newrhs;
	
	//    .param p1, "rhs"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "set"    # Landroid/icu/math/MathContext;
	if ( !(set->lostDigits) )  
		goto label_cond_9;
	this->checkdigits(rhs, set->digits);
label_cond_9:
	newrhs = android::icu::math::BigDecimal::clone(rhs);
	//    .local v0, "newrhs":Landroid/icu/math/BigDecimal;
	newrhs->ind = (unsigned char)((0 - newrhs->ind));
	return this->add(newrhs, set);

}
// .method public toBigDecimal()Ljava/math/BigDecimal;
std::shared_ptr<java::math::BigDecimal> android::icu::math::BigDecimal::toBigDecimal()
{
	
	std::shared_ptr<java::math::BigDecimal> cVar0;
	
	cVar0 = std::make_shared<java::math::BigDecimal>(this->unscaledValue(), this->scale());
	return cVar0;

}
// .method public toBigInteger()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> android::icu::math::BigDecimal::toBigInteger()
{
	
	int cVar0;
	unsigned char cVar1;
	int cVar2;
	std::shared_ptr<java::math::BigInteger> cVar3;
	std::shared_ptr<java::lang::String> cVar4;
	std::shared_ptr<android::icu::math::BigDecimal> res;
	int newlen;
	std::shared<std::vector<unsigned char[]>> newmant;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	0x0;
	//    .local v2, "res":Landroid/icu/math/BigDecimal;
	0x0;
	//    .local v0, "newlen":I
	0x0;
	//    .local v1, "newmant":[B
	if ( this->exp < 0 ) 
		goto label_cond_21;
	cVar2 = cVar0;
label_goto_a:
	if ( this->form )     
		goto label_cond_23;
label_goto_e:
	if ( !((cVar2 &  cVar0)) )  
		goto label_cond_25;
	//    .end local v1    # "newmant":[B
	//    .local v2, "res":Landroid/icu/math/BigDecimal;
label_goto_12:
	cVar4 = std::make_shared<java::lang::String>(res->layout());
	cVar3 = std::make_shared<java::math::BigInteger>(cVar4);
	return cVar3;
	// 10301    .restart local v1    # "newmant":[B
	// 10302    .local v2, "res":Landroid/icu/math/BigDecimal;
label_cond_21:
	cVar2 = cVar1;
	goto label_goto_a;
label_cond_23:
	cVar0 = cVar1;
	goto label_goto_e;
	// 10314    .line 2703
label_cond_25:
	if ( this->exp < 0 ) 
		goto label_cond_30;
	res = android::icu::math::BigDecimal::clone(this);
	//    .local v2, "res":Landroid/icu/math/BigDecimal;
	res->form = cVar1;
	goto label_goto_12;
	// 10331    .line 2709
	// 10332    .local v2, "res":Landroid/icu/math/BigDecimal;
label_cond_30:
	if ( (0 - this->exp) <  this->mant->size() )
		goto label_cond_3b;
	//    .local v2, "res":Landroid/icu/math/BigDecimal;
	goto label_goto_12;
	// 10350    .line 2712
	// 10351    .local v2, "res":Landroid/icu/math/BigDecimal;
label_cond_3b:
	res = android::icu::math::BigDecimal::clone(this);
	//    .local v2, "res":Landroid/icu/math/BigDecimal;
	newlen = (res->mant->size() + res->exp);
	newmant = std::make_shared<std::vector<unsigned char[]>>(newlen);
	//    .local v1, "newmant":[B
	java::lang::System::arraycopy(res->mant, cVar1, newmant, cVar1, newlen);
	res->mant = newmant;
	res->form = cVar1;
	res->exp = cVar1;
	goto label_goto_12;

}
// .method public toBigIntegerExact()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> android::icu::math::BigDecimal::toBigIntegerExact()
{
	
	std::shared_ptr<java::lang::ArithmeticException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	if ( this->exp >= 0 )
		goto label_cond_30;
	if ( android::icu::math::BigDecimal::allzero(this->mant, (this->mant->size() +  this->exp)) )     
		goto label_cond_30;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::ArithmeticException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Decimal part non-zero: ")))->append(this->toString())->toString());
	// throw
	throw cVar0;
	// 10443    .line 2743
label_cond_30:
	return this->toBigInteger();

}
// .method public toCharArray()[C
char android::icu::math::BigDecimal::toCharArray()
{
	
	return this->layout();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::math::BigDecimal::toString()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	cVar0 = std::make_shared<java::lang::String>(this->layout());
	return cVar0;

}
// .method public unscaledValue()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> android::icu::math::BigDecimal::unscaledValue()
{
	
	std::shared_ptr<android::icu::math::BigDecimal> res;
	
	0x0;
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
	if ( this->exp < 0 ) 
		goto label_cond_c;
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
label_goto_7:
	return res->toBigInteger();
	// 10507    .line 2791
	// 10508    .local v0, "res":Landroid/icu/math/BigDecimal;
label_cond_c:
	res = android::icu::math::BigDecimal::clone(this);
	//    .local v0, "res":Landroid/icu/math/BigDecimal;
	res->exp = 0x0;
	goto label_goto_7;

}


