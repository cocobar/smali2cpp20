// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Punycode.smali
#include "java2ctype.h"
#include "android.icu.impl.Punycode.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.StringPrepParseException.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"

static android::icu::impl::Punycode::BASE = 0x24;
static android::icu::impl::Punycode::CAPITAL_A = 0x41;
static android::icu::impl::Punycode::CAPITAL_Z = 0x5a;
static android::icu::impl::Punycode::DAMP = 0x2bc;
static android::icu::impl::Punycode::DELIMITER = '-';
static android::icu::impl::Punycode::HYPHEN = '-';
static android::icu::impl::Punycode::INITIAL_BIAS = 0x48;
static android::icu::impl::Punycode::INITIAL_N = 0x80;
static android::icu::impl::Punycode::SKEW = 0x26;
static android::icu::impl::Punycode::SMALL_A = 0x61;
static android::icu::impl::Punycode::SMALL_Z = 0x7a;
static android::icu::impl::Punycode::TMAX = 0x1a;
static android::icu::impl::Punycode::TMIN = 0x1;
static android::icu::impl::Punycode::ZERO = 0x30;
static android::icu::impl::Punycode::basicToDigit;
// .method static constructor <clinit>()V
void android::icu::impl::Punycode::static_cinit()
{
	
	std::shared<std::vector<int[]>> cVar0;
	
	cVar0 = std::make_shared<std::vector<int[]>>(0x100);
	?;
	android::icu::impl::Punycode::basicToDigit = cVar0;
	return;
	// 055    .line 66
	// 056    :array_a
	// 057    .array-data 4
	// 058        -0x1
	// 059        -0x1
	// 060        -0x1
	// 061        -0x1
	// 062        -0x1
	// 063        -0x1
	// 064        -0x1
	// 065        -0x1
	// 066        -0x1
	// 067        -0x1
	// 068        -0x1
	// 069        -0x1
	// 070        -0x1
	// 071        -0x1
	// 072        -0x1
	// 073        -0x1
	// 074        -0x1
	// 075        -0x1
	// 076        -0x1
	// 077        -0x1
	// 078        -0x1
	// 079        -0x1
	// 080        -0x1
	// 081        -0x1
	// 082        -0x1
	// 083        -0x1
	// 084        -0x1
	// 085        -0x1
	// 086        -0x1
	// 087        -0x1
	// 088        -0x1
	// 089        -0x1
	// 090        -0x1
	// 091        -0x1
	// 092        -0x1
	// 093        -0x1
	// 094        -0x1
	// 095        -0x1
	// 096        -0x1
	// 097        -0x1
	// 098        -0x1
	// 099        -0x1
	// 100        -0x1
	// 101        -0x1
	// 102        -0x1
	// 103        -0x1
	// 104        -0x1
	// 105        -0x1
	// 106        0x1a
	// 107        0x1b
	// 108        0x1c
	// 109        0x1d
	// 110        0x1e
	// 111        0x1f
	// 112        0x20
	// 113        0x21
	// 114        0x22
	// 115        0x23
	// 116        -0x1
	// 117        -0x1
	// 118        -0x1
	// 119        -0x1
	// 120        -0x1
	// 121        -0x1
	// 122        -0x1
	// 123        0x0
	// 124        0x1
	// 125        0x2
	// 126        0x3
	// 127        0x4
	// 128        0x5
	// 129        0x6
	// 130        0x7
	// 131        0x8
	// 132        0x9
	// 133        0xa
	// 134        0xb
	// 135        0xc
	// 136        0xd
	// 137        0xe
	// 138        0xf
	// 139        0x10
	// 140        0x11
	// 141        0x12
	// 142        0x13
	// 143        0x14
	// 144        0x15
	// 145        0x16
	// 146        0x17
	// 147        0x18
	// 148        0x19
	// 149        -0x1
	// 150        -0x1
	// 151        -0x1
	// 152        -0x1
	// 153        -0x1
	// 154        -0x1
	// 155        0x0
	// 156        0x1
	// 157        0x2
	// 158        0x3
	// 159        0x4
	// 160        0x5
	// 161        0x6
	// 162        0x7
	// 163        0x8
	// 164        0x9
	// 165        0xa
	// 166        0xb
	// 167        0xc
	// 168        0xd
	// 169        0xe
	// 170        0xf
	// 171        0x10
	// 172        0x11
	// 173        0x12
	// 174        0x13
	// 175        0x14
	// 176        0x15
	// 177        0x16
	// 178        0x17
	// 179        0x18
	// 180        0x19
	// 181        -0x1
	// 182        -0x1
	// 183        -0x1
	// 184        -0x1
	// 185        -0x1
	// 186        -0x1
	// 187        -0x1
	// 188        -0x1
	// 189        -0x1
	// 190        -0x1
	// 191        -0x1
	// 192        -0x1
	// 193        -0x1
	// 194        -0x1
	// 195        -0x1
	// 196        -0x1
	// 197        -0x1
	// 198        -0x1
	// 199        -0x1
	// 200        -0x1
	// 201        -0x1
	// 202        -0x1
	// 203        -0x1
	// 204        -0x1
	// 205        -0x1
	// 206        -0x1
	// 207        -0x1
	// 208        -0x1
	// 209        -0x1
	// 210        -0x1
	// 211        -0x1
	// 212        -0x1
	// 213        -0x1
	// 214        -0x1
	// 215        -0x1
	// 216        -0x1
	// 217        -0x1
	// 218        -0x1
	// 219        -0x1
	// 220        -0x1
	// 221        -0x1
	// 222        -0x1
	// 223        -0x1
	// 224        -0x1
	// 225        -0x1
	// 226        -0x1
	// 227        -0x1
	// 228        -0x1
	// 229        -0x1
	// 230        -0x1
	// 231        -0x1
	// 232        -0x1
	// 233        -0x1
	// 234        -0x1
	// 235        -0x1
	// 236        -0x1
	// 237        -0x1
	// 238        -0x1
	// 239        -0x1
	// 240        -0x1
	// 241        -0x1
	// 242        -0x1
	// 243        -0x1
	// 244        -0x1
	// 245        -0x1
	// 246        -0x1
	// 247        -0x1
	// 248        -0x1
	// 249        -0x1
	// 250        -0x1
	// 251        -0x1
	// 252        -0x1
	// 253        -0x1
	// 254        -0x1
	// 255        -0x1
	// 256        -0x1
	// 257        -0x1
	// 258        -0x1
	// 259        -0x1
	// 260        -0x1
	// 261        -0x1
	// 262        -0x1
	// 263        -0x1
	// 264        -0x1
	// 265        -0x1
	// 266        -0x1
	// 267        -0x1
	// 268        -0x1
	// 269        -0x1
	// 270        -0x1
	// 271        -0x1
	// 272        -0x1
	// 273        -0x1
	// 274        -0x1
	// 275        -0x1
	// 276        -0x1
	// 277        -0x1
	// 278        -0x1
	// 279        -0x1
	// 280        -0x1
	// 281        -0x1
	// 282        -0x1
	// 283        -0x1
	// 284        -0x1
	// 285        -0x1
	// 286        -0x1
	// 287        -0x1
	// 288        -0x1
	// 289        -0x1
	// 290        -0x1
	// 291        -0x1
	// 292        -0x1
	// 293        -0x1
	// 294        -0x1
	// 295        -0x1
	// 296        -0x1
	// 297        -0x1
	// 298        -0x1
	// 299        -0x1
	// 300        -0x1
	// 301        -0x1
	// 302        -0x1
	// 303        -0x1
	// 304        -0x1
	// 305        -0x1
	// 306        -0x1
	// 307        -0x1
	// 308        -0x1
	// 309        -0x1
	// 310        -0x1
	// 311        -0x1
	// 312        -0x1
	// 313        -0x1
	// 314    .end array-data

}
// .method public constructor <init>()V
android::icu::impl::Punycode::Punycode()
{
	
	// 322    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static adaptBias(IIZ)I
int android::icu::impl::Punycode::adaptBias(int delta,int length,bool firstTime)
{
	
	int cVar0;
	int cVar1;
	int count;
	
	//    .param p0, "delta"    # I
	//    .param p1, "length"    # I
	//    .param p2, "firstTime"    # Z
	if ( !(firstTime) )  
		goto label_cond_11;
	cVar0 = ( delta / 0x2bc);
label_goto_4:
	cVar1 = (cVar0 +  (cVar0 / length));
	count = 0x0;
	//    .local v0, "count":I
label_goto_8:
	if ( cVar1 <= 0x1c7 )
		goto label_cond_14;
	cVar1 = ( cVar1 / 0x23);
	count = ( count + 0x24);
	goto label_goto_8;
	// 364    .line 49
	// 365    .end local v0    # "count":I
label_cond_11:
	cVar0 = ( delta / 0x2);
	goto label_goto_4;
	// 371    .line 58
	// 372    .restart local v0    # "count":I
label_cond_14:
	return ((( cVar1 * 0x24) /  ( cVar1 + 0x26)) +  count);

}
// .method private static asciiCaseMap(CZ)C
char android::icu::impl::Punycode::asciiCaseMap(char cVar0,bool uppercase)
{
	
	char cVar0;
	
	//    .param p0, "b"    # C
	//    .param p1, "uppercase"    # Z
	if ( !(uppercase) )  
		goto label_cond_e;
	if ( 0x61 >  cVar0 )
		goto label_cond_d;
	if ( cVar0 >  0x7a )
		goto label_cond_d;
	cVar0 = (char)(( cVar0 + -0x20));
label_cond_d:
label_goto_d:
	return cVar0;
	// 413    .line 99
label_cond_e:
	if ( 0x41 >  cVar0 )
		goto label_cond_d;
	if ( cVar0 >  0x5a )
		goto label_cond_d;
	cVar0 = (char)(( cVar0 + 0x20));
	goto label_goto_d;

}
// .method public static decode(Ljava/lang/CharSequence;[Z)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Punycode::decode(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<bool[]> caseFlags)
{
	
	int srcLength;
	std::shared_ptr<java::lang::StringBuilder> dest;
	int j;
	int basicLength;
	int b;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar0;
	int n;
	int i;
	int bias;
	int firstSupplementaryIndex;
	int in;
	int oldi;
	int w;
	int k;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar1;
	int digit;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar2;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar3;
	int t;
	int destCPCount;
	int cVar4;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar5;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar8;
	int cpLength;
	int codeUnitIndex;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar6;
	
	//    .param p0, "src"    # Ljava/lang/CharSequence;
	//    .param p1, "caseFlags"    # [Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 436        value = {
	// 437            Landroid/icu/text/StringPrepParseException;
	// 438        }
	// 439    .end annotation
	srcLength = src->length();
	//    .local v20, "srcLength":I
	dest = std::make_shared<java::lang::StringBuilder>(src->length());
	//    .local v9, "dest":Ljava/lang/StringBuilder;
	j = srcLength;
	//    .local v16, "j":I
label_cond_11:
	if ( j <= 0 )
		goto label_cond_25;
	j = ( j + -0x1);
	if ( src->charAt(j) != 0x2d )
		goto label_cond_11;
label_cond_25:
	//    .local v10, "destCPCount":I
	basicLength = j;
	//    .local v5, "basicLength":I
	j = 0x0;
label_goto_2b:
	if ( j >= basicLength )
		goto label_cond_61;
	b = src->charAt(j);
	//    .local v4, "b":C
	if ( android::icu::impl::Punycode::isBasic(b) )     
		goto label_cond_48;
	cVar0 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal char found")), 0x0);
	// throw
	throw cVar0;
	// 530    .line 302
label_cond_48:
	dest->append(b);
	if ( !(caseFlags) )  
		goto label_cond_5e;
	if ( j >= caseFlags->size() )
		goto label_cond_5e;
	caseFlags[j] = android::icu::impl::Punycode::isBasicUpperCase(b);
label_cond_5e:
	j = ( j + 0x1);
	goto label_goto_2b;
	// 562    .line 310
	// 563    .end local v4    # "b":C
label_cond_61:
	n = 0x80;
	//    .local v18, "n":I
	i = 0x0;
	//    .local v13, "i":I
	bias = 0x48;
	//    .local v6, "bias":I
	firstSupplementaryIndex = 0x3b9aca00;
	//    .local v12, "firstSupplementaryIndex":I
	if ( basicLength <= 0 )
		goto label_cond_87;
	in = ( basicLength + 0x1);
	//    .local v14, "in":I
label_goto_6d:
	if ( in >= srcLength )
		goto label_cond_1d7;
	oldi = i;
	//    .local v19, "oldi":I
	w = 0x1;
	//    .local v22, "w":I
	k = 0x24;
	//    .local v17, "k":I
	in = in;
	//    .end local v14    # "in":I
	//    .local v15, "in":I
label_goto_78:
	if ( in <  srcLength )
		goto label_cond_89;
	cVar1 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal char found")), 0x1);
	// throw
	throw cVar1;
	// 622    .line 320
	// 623    .end local v15    # "in":I
	// 624    .end local v17    # "k":I
	// 625    .end local v19    # "oldi":I
	// 626    .end local v22    # "w":I
label_cond_87:
	//    .restart local v14    # "in":I
	goto label_goto_6d;
	// 633    .line 335
	// 634    .end local v14    # "in":I
	// 635    .restart local v15    # "in":I
	// 636    .restart local v17    # "k":I
	// 637    .restart local v19    # "oldi":I
	// 638    .restart local v22    # "w":I
label_cond_89:
	in = ( in + 0x1);
	//    .end local v15    # "in":I
	//    .restart local v14    # "in":I
	digit = android::icu::impl::Punycode::basicToDigit[( src->charAt(in) & 0xff)];
	//    .local v11, "digit":I
	if ( digit >= 0 )
		goto label_cond_a8;
	cVar2 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid char found")), 0x0);
	// throw
	throw cVar2;
	// 675    .line 339
label_cond_a8:
	if ( digit <= ((0x7fffffff - i) / w) )
		goto label_cond_be;
	cVar3 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal char found")), 0x1);
	// throw
	throw cVar3;
	// 698    .line 344
label_cond_be:
	i = (i + (digit * w));
	t = (k - bias);
	//    .local v21, "t":I
	if ( t >= 0x1 )
		goto label_cond_fa;
	t = 0x1;
label_cond_ce:
label_goto_ce:
	if ( digit >= t )
		goto label_cond_105;
	destCPCount = ( destCPCount + 0x1);
	if ( oldi )     
		goto label_cond_126;
	cVar4 = 0x1;
label_goto_da:
	bias = android::icu::impl::Punycode::adaptBias((i - oldi), destCPCount, cVar4);
	if ( (i / destCPCount) <= (0x7fffffff - n) )
		goto label_cond_129;
	cVar5 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal char found")), 0x1);
	// throw
	throw cVar5;
	// 770    .line 348
label_cond_fa:
	if ( k <  ( bias + 0x1a) )
		goto label_cond_ce;
	t = 0x1a;
	goto label_goto_ce;
	// 785    .line 355
label_cond_105:
	if ( w <= (0x7fffffff / ( t - 0x24)) )
		goto label_cond_11d;
	cVar6 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal char found")), 0x1);
	// throw
	throw cVar6;
	// 810    .line 359
label_cond_11d:
	w = (w * ( t - 0x24));
	k = ( k + 0x24);
	in = in;
	//    .end local v14    # "in":I
	//    .restart local v15    # "in":I
	goto label_goto_78;
	// 825    .line 368
	// 826    .end local v15    # "in":I
	// 827    .restart local v14    # "in":I
label_cond_126:
	cVar4 = 0x0;
	goto label_goto_da;
	// 833    .line 379
label_cond_129:
	n = (n + (i / destCPCount));
	i = (i %  destCPCount);
	if ( n >  0x10ffff )
		goto label_cond_13d;
	if ( !(android::icu::impl::Punycode::isSurrogate(n)) )  
		goto label_cond_148;
label_cond_13d:
	cVar8 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal char found")), 0x1);
	// throw
	throw cVar8;
	// 869    .line 390
label_cond_148:
	cpLength = java::lang::Character::charCount(n);
	//    .local v8, "cpLength":I
	if ( i >  firstSupplementaryIndex )
		goto label_cond_1b7;
	codeUnitIndex = i;
	//    .local v7, "codeUnitIndex":I
	if ( cpLength <= 0x1 )
		goto label_cond_1b4;
	firstSupplementaryIndex = i;
label_goto_156:
	if ( !(caseFlags) )  
		goto label_cond_1a0;
	if ( (dest->length() + cpLength) >  caseFlags->size() )
		goto label_cond_1a0;
	if ( codeUnitIndex >= dest->length() )
		goto label_cond_184;
	java::lang::System::arraycopy(caseFlags, codeUnitIndex, caseFlags, (codeUnitIndex + cpLength), (dest->length() - codeUnitIndex));
label_cond_184:
	caseFlags[codeUnitIndex] = android::icu::impl::Punycode::isBasicUpperCase(src->charAt(( in + -0x1)));
	if ( cpLength != 0x2 )
		goto label_cond_1a0;
	caseFlags[( codeUnitIndex + 0x1)] = 0x0;
label_cond_1a0:
	if ( cpLength != 0x1 )
		goto label_cond_1c0;
	dest->insert(codeUnitIndex, (char)(n));
label_goto_1b0:
	i = ( i + 0x1);
	goto label_goto_6d;
	// 1002    .line 408
label_cond_1b4:
	firstSupplementaryIndex = ( firstSupplementaryIndex + 0x1);
	goto label_goto_156;
	// 1008    .line 411
	// 1009    .end local v7    # "codeUnitIndex":I
label_cond_1b7:
	codeUnitIndex = dest->offsetByCodePoints(firstSupplementaryIndex, (i - firstSupplementaryIndex));
	//    .restart local v7    # "codeUnitIndex":I
	goto label_goto_156;
	// 1022    .line 432
label_cond_1c0:
	dest->insert(codeUnitIndex, android::icu::text::UTF16::getLeadSurrogate(n));
	dest->insert(( codeUnitIndex + 0x1), android::icu::text::UTF16::getTrailSurrogate(n));
	goto label_goto_1b0;
	// 1047    .line 437
	// 1048    .end local v7    # "codeUnitIndex":I
	// 1049    .end local v8    # "cpLength":I
	// 1050    .end local v11    # "digit":I
	// 1051    .end local v17    # "k":I
	// 1052    .end local v19    # "oldi":I
	// 1053    .end local v21    # "t":I
	// 1054    .end local v22    # "w":I
label_cond_1d7:
	return dest;

}
// .method private static digitToBasic(IZ)C
char android::icu::impl::Punycode::digitToBasic(int digit,bool uppercase)
{
	
	//    .param p0, "digit"    # I
	//    .param p1, "uppercase"    # Z
	if ( digit >= 0x1a )
		goto label_cond_e;
	if ( !(uppercase) )  
		goto label_cond_a;
	return (char)(( digit + 0x41));
	// 1080    .line 119
label_cond_a:
	return (char)(( digit + 0x61));
	// 1088    .line 122
label_cond_e:
	return (char)(( digit + 0x16));

}
// .method public static encode(Ljava/lang/CharSequence;[Z)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::Punycode::encode(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<bool[]> caseFlags)
{
	
	int srcLength;
	std::shared<std::vector<int[]>> cpBuffer;
	std::shared_ptr<java::lang::StringBuilder> dest;
	int j;
	int srcCPCount;
	int c;
	int cVar0;
	int n;
	char c2;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar2;
	int basicLength;
	int delta;
	int bias;
	int handledCPCount;
	int m;
	int q;
	std::shared_ptr<java::lang::IllegalStateException> cVar3;
	int k;
	int t;
	int cVar4;
	int cVar5;
	
	//    .param p0, "src"    # Ljava/lang/CharSequence;
	//    .param p1, "caseFlags"    # [Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1102        value = {
	// 1103            Landroid/icu/text/StringPrepParseException;
	// 1104        }
	// 1105    .end annotation
	srcLength = src->length();
	//    .local v17, "srcLength":I
	cpBuffer = std::make_shared<std::vector<int[]>>(srcLength);
	//    .local v6, "cpBuffer":[I
	dest = std::make_shared<java::lang::StringBuilder>(srcLength);
	//    .local v8, "dest":Ljava/lang/StringBuilder;
	//    .local v15, "srcCPCount":I
	j = 0x0;
	//    .local v10, "j":I
	srcCPCount = 0x0;
	//    .end local v15    # "srcCPCount":I
	//    .local v16, "srcCPCount":I
label_goto_13:
	if ( j >= srcLength )
		goto label_cond_86;
	c = src->charAt(j);
	//    .local v4, "c":C
	if ( !(android::icu::impl::Punycode::isBasic(c)) )  
		goto label_cond_3b;
	//    .end local v16    # "srcCPCount":I
	//    .restart local v15    # "srcCPCount":I
	cpBuffer[srcCPCount] = 0x0;
	if ( !(caseFlags) )  
		goto label_cond_33;
	//    .end local v4    # "c":C
label_cond_33:
	dest->append(c);
label_goto_36:
	j = ( j + 0x1);
	srcCPCount = srcCPCount;
	//    .end local v15    # "srcCPCount":I
	//    .restart local v16    # "srcCPCount":I
	goto label_goto_13;
	// 1194    .line 152
	// 1195    .restart local v4    # "c":C
label_cond_3b:
	if ( !(caseFlags) )  
		goto label_cond_51;
	if ( !(caseFlags[j]) )  
		goto label_cond_51;
	cVar0 = 0x1;
label_goto_43:
	n = ( cVar0 << 0x1f);
	//    .local v13, "n":I
	if ( android::icu::text::UTF16::isSurrogate(c) )     
		goto label_cond_54;
	n = (n |  c);
label_goto_4c:
	//    .end local v16    # "srcCPCount":I
	//    .restart local v15    # "srcCPCount":I
	cpBuffer[srcCPCount] = n;
	goto label_goto_36;
	// 1229    .line 152
	// 1230    .end local v13    # "n":I
	// 1231    .end local v15    # "srcCPCount":I
	// 1232    .restart local v16    # "srcCPCount":I
label_cond_51:
	cVar0 = 0x0;
	goto label_goto_43;
	// 1238    .line 155
	// 1239    .restart local v13    # "n":I
label_cond_54:
	if ( !(android::icu::text::UTF16::isLeadSurrogate(c)) )  
		goto label_cond_7b;
	if ( ( j + 0x1) >= srcLength )
		goto label_cond_7b;
	c2 = src->charAt(( j + 0x1));
	//    .local v5, "c2":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(c2)) )  
		goto label_cond_7b;
	j = ( j + 0x1);
	n = (n | android::icu::lang::UCharacter::getCodePoint(c, c2));
	goto label_goto_4c;
	// 1284    .line 161
	// 1285    .end local v5    # "c2":C
label_cond_7b:
	cVar2 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal char found")), 0x1);
	// throw
	throw cVar2;
	// 1297    .line 168
	// 1298    .end local v4    # "c":C
	// 1299    .end local v13    # "n":I
label_cond_86:
	basicLength = dest->length();
	//    .local v2, "basicLength":I
	if ( basicLength <= 0 )
		goto label_cond_93;
	dest->append(0x2d);
label_cond_93:
	n = 0x80;
	//    .restart local v13    # "n":I
	delta = 0x0;
	//    .local v7, "delta":I
	bias = 0x48;
	//    .local v3, "bias":I
	handledCPCount = basicLength;
	//    .local v9, "handledCPCount":I
label_goto_99:
	if ( handledCPCount >= srcCPCount )
		goto label_cond_153;
	m = 0x7fffffff;
	//    .local v12, "m":I
	j = 0x0;
label_goto_a1:
	if ( j >= srcCPCount )
		goto label_cond_b4;
	q = (cpBuffer[j] & 0x7fffffff);
	//    .local v14, "q":I
	if ( n >  q )
		goto label_cond_b1;
	if ( q >= m )
		goto label_cond_b1;
	m = q;
label_cond_b1:
	j = ( j + 0x1);
	goto label_goto_a1;
	// 1371    .line 201
	// 1372    .end local v14    # "q":I
label_cond_b4:
	if ( (m - n) <= ((0x7fffffff - delta) / ( handledCPCount + 0x1)) )
		goto label_cond_ce;
	cVar3 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal program error")));
	// throw
	throw cVar3;
	// 1399    .line 204
label_cond_ce:
	delta = (delta + ((m - n) * ( handledCPCount + 0x1)));
	n = m;
	j = 0x0;
label_goto_d8:
	if ( j >= srcCPCount )
		goto label_cond_14d;
	q = (cpBuffer[j] & 0x7fffffff);
	//    .restart local v14    # "q":I
	if ( q >= n )
		goto label_cond_ea;
	delta = ( delta + 0x1);
label_cond_e7:
label_goto_e7:
	j = ( j + 0x1);
	goto label_goto_d8;
	// 1441    .line 212
label_cond_ea:
	if ( q != n )
		goto label_cond_e7;
	q = delta;
	k = 0x24;
	//    .local v11, "k":I
label_goto_ef:
	t = (k - bias);
	//    .local v18, "t":I
	if ( t >= 0x1 )
		goto label_cond_122;
	t = 0x1;
label_cond_fb:
label_goto_fb:
	if ( q >= t )
		goto label_cond_12b;
	if ( cpBuffer[j] >= 0 )
		goto label_cond_147;
	cVar4 = 0x1;
label_goto_105:
	dest->append(android::icu::impl::Punycode::digitToBasic(q, cVar4));
	if ( handledCPCount != basicLength )
		goto label_cond_14a;
	cVar5 = 0x1;
label_goto_116:
	bias = android::icu::impl::Punycode::adaptBias(delta, ( handledCPCount + 0x1), cVar5);
	delta = 0x0;
	handledCPCount = ( handledCPCount + 0x1);
	goto label_goto_e7;
	// 1517    .line 229
label_cond_122:
	if ( k <  ( bias + 0x1a) )
		goto label_cond_fb;
	t = 0x1a;
	goto label_goto_fb;
	// 1530    .line 237
label_cond_12b:
	dest->append(android::icu::impl::Punycode::digitToBasic((((q - t) % ( t - 0x24)) + t), 0x0));
	q = ((q - t) / ( t - 0x24));
	k = ( k + 0x24);
	goto label_goto_ef;
	// 1562    .line 241
label_cond_147:
	cVar4 = 0x0;
	goto label_goto_105;
	// 1568    .line 242
label_cond_14a:
	cVar5 = 0x0;
	goto label_goto_116;
	// 1574    .line 248
	// 1575    .end local v11    # "k":I
	// 1576    .end local v14    # "q":I
	// 1577    .end local v18    # "t":I
label_cond_14d:
	delta = ( delta + 0x1);
	n = ( n + 0x1);
	goto label_goto_99;
	// 1586    .line 252
	// 1587    .end local v12    # "m":I
label_cond_153:
	return dest;

}
// .method private static isBasic(I)Z
bool android::icu::impl::Punycode::isBasic(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	if ( ch >= 0x80 )
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method private static isBasicUpperCase(I)Z
bool android::icu::impl::Punycode::isBasicUpperCase(int ch)
{
	
	bool cVar1;
	
	//    .param p0, "ch"    # I
	cVar1 = 0x0;
	if ( 0x41 >  ch )
		goto label_cond_a;
	if ( ch <  0x5a )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method private static isSurrogate(I)Z
bool android::icu::impl::Punycode::isSurrogate(int ch)
{
	
	bool cVar0;
	
	//    .param p0, "ch"    # I
	if ( ( ch & -0x800) != 0xd800 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}


