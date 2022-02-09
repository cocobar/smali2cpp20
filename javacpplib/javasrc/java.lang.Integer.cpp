// CPP L:\smali2cpp20\x64\Release\out\java\lang\Integer.smali
#include "java2ctype.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer_S_IntegerCache.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"

static java::lang::Integer::BYTES = 0x4;
static java::lang::Integer::DigitOnes;
static java::lang::Integer::DigitTens;
static java::lang::Integer::MAX_VALUE = 0x7fffffff;
static java::lang::Integer::MIN_VALUE = -0x80000000;
static java::lang::Integer::SIZE = 0x20;
static java::lang::Integer::SMALL_NEG_VALUES;
static java::lang::Integer::SMALL_NONNEG_VALUES;
static java::lang::Integer::TYPE;
static java::lang::Integer::digits;
static java::lang::Integer::serialVersionUID = 0x12e2a0a4f7818738L;
static java::lang::Integer::sizeTable;
// .method static constructor <clinit>()V
void java::lang::Integer::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<char[]>> cVar1;
	std::shared<std::vector<char[]>> cVar2;
	std::shared<std::vector<char[]>> cVar3;
	std::shared<std::vector<int[]>> cVar4;
	
	cVar0 = 0x64;
	java::lang::Integer::TYPE = int[]()->getComponentType();
	cVar1 = std::make_shared<std::vector<char[]>>(0x24);
	?;
	java::lang::Integer::digits = cVar1;
	java::lang::Integer::SMALL_NEG_VALUES = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	java::lang::Integer::SMALL_NONNEG_VALUES = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar2 = std::make_shared<std::vector<char[]>>(cVar0);
	?;
	java::lang::Integer::DigitTens = cVar2;
	cVar3 = std::make_shared<std::vector<char[]>>(cVar0);
	?;
	java::lang::Integer::DigitOnes = cVar3;
	cVar4 = std::make_shared<std::vector<int[]>>(0xa);
	?;
	java::lang::Integer::sizeTable = cVar4;
	return;
	// 127    .line 78
	// 128    nop
	// 130    :array_34
	// 131    .array-data 2
	// 132        0x30s
	// 133        0x31s
	// 134        0x32s
	// 135        0x33s
	// 136        0x34s
	// 137        0x35s
	// 138        0x36s
	// 139        0x37s
	// 140        0x38s
	// 141        0x39s
	// 142        0x61s
	// 143        0x62s
	// 144        0x63s
	// 145        0x64s
	// 146        0x65s
	// 147        0x66s
	// 148        0x67s
	// 149        0x68s
	// 150        0x69s
	// 151        0x6as
	// 152        0x6bs
	// 153        0x6cs
	// 154        0x6ds
	// 155        0x6es
	// 156        0x6fs
	// 157        0x70s
	// 158        0x71s
	// 159        0x72s
	// 160        0x73s
	// 161        0x74s
	// 162        0x75s
	// 163        0x76s
	// 164        0x77s
	// 165        0x78s
	// 166        0x79s
	// 167        0x7as
	// 168    .end array-data
	// 170    .line 346
	// 171    :array_5c
	// 172    .array-data 2
	// 173        0x30s
	// 174        0x30s
	// 175        0x30s
	// 176        0x30s
	// 177        0x30s
	// 178        0x30s
	// 179        0x30s
	// 180        0x30s
	// 181        0x30s
	// 182        0x30s
	// 183        0x31s
	// 184        0x31s
	// 185        0x31s
	// 186        0x31s
	// 187        0x31s
	// 188        0x31s
	// 189        0x31s
	// 190        0x31s
	// 191        0x31s
	// 192        0x31s
	// 193        0x32s
	// 194        0x32s
	// 195        0x32s
	// 196        0x32s
	// 197        0x32s
	// 198        0x32s
	// 199        0x32s
	// 200        0x32s
	// 201        0x32s
	// 202        0x32s
	// 203        0x33s
	// 204        0x33s
	// 205        0x33s
	// 206        0x33s
	// 207        0x33s
	// 208        0x33s
	// 209        0x33s
	// 210        0x33s
	// 211        0x33s
	// 212        0x33s
	// 213        0x34s
	// 214        0x34s
	// 215        0x34s
	// 216        0x34s
	// 217        0x34s
	// 218        0x34s
	// 219        0x34s
	// 220        0x34s
	// 221        0x34s
	// 222        0x34s
	// 223        0x35s
	// 224        0x35s
	// 225        0x35s
	// 226        0x35s
	// 227        0x35s
	// 228        0x35s
	// 229        0x35s
	// 230        0x35s
	// 231        0x35s
	// 232        0x35s
	// 233        0x36s
	// 234        0x36s
	// 235        0x36s
	// 236        0x36s
	// 237        0x36s
	// 238        0x36s
	// 239        0x36s
	// 240        0x36s
	// 241        0x36s
	// 242        0x36s
	// 243        0x37s
	// 244        0x37s
	// 245        0x37s
	// 246        0x37s
	// 247        0x37s
	// 248        0x37s
	// 249        0x37s
	// 250        0x37s
	// 251        0x37s
	// 252        0x37s
	// 253        0x38s
	// 254        0x38s
	// 255        0x38s
	// 256        0x38s
	// 257        0x38s
	// 258        0x38s
	// 259        0x38s
	// 260        0x38s
	// 261        0x38s
	// 262        0x38s
	// 263        0x39s
	// 264        0x39s
	// 265        0x39s
	// 266        0x39s
	// 267        0x39s
	// 268        0x39s
	// 269        0x39s
	// 270        0x39s
	// 271        0x39s
	// 272        0x39s
	// 273    .end array-data
	// 275    .line 359
	// 276    :array_c4
	// 277    .array-data 2
	// 278        0x30s
	// 279        0x31s
	// 280        0x32s
	// 281        0x33s
	// 282        0x34s
	// 283        0x35s
	// 284        0x36s
	// 285        0x37s
	// 286        0x38s
	// 287        0x39s
	// 288        0x30s
	// 289        0x31s
	// 290        0x32s
	// 291        0x33s
	// 292        0x34s
	// 293        0x35s
	// 294        0x36s
	// 295        0x37s
	// 296        0x38s
	// 297        0x39s
	// 298        0x30s
	// 299        0x31s
	// 300        0x32s
	// 301        0x33s
	// 302        0x34s
	// 303        0x35s
	// 304        0x36s
	// 305        0x37s
	// 306        0x38s
	// 307        0x39s
	// 308        0x30s
	// 309        0x31s
	// 310        0x32s
	// 311        0x33s
	// 312        0x34s
	// 313        0x35s
	// 314        0x36s
	// 315        0x37s
	// 316        0x38s
	// 317        0x39s
	// 318        0x30s
	// 319        0x31s
	// 320        0x32s
	// 321        0x33s
	// 322        0x34s
	// 323        0x35s
	// 324        0x36s
	// 325        0x37s
	// 326        0x38s
	// 327        0x39s
	// 328        0x30s
	// 329        0x31s
	// 330        0x32s
	// 331        0x33s
	// 332        0x34s
	// 333        0x35s
	// 334        0x36s
	// 335        0x37s
	// 336        0x38s
	// 337        0x39s
	// 338        0x30s
	// 339        0x31s
	// 340        0x32s
	// 341        0x33s
	// 342        0x34s
	// 343        0x35s
	// 344        0x36s
	// 345        0x37s
	// 346        0x38s
	// 347        0x39s
	// 348        0x30s
	// 349        0x31s
	// 350        0x32s
	// 351        0x33s
	// 352        0x34s
	// 353        0x35s
	// 354        0x36s
	// 355        0x37s
	// 356        0x38s
	// 357        0x39s
	// 358        0x30s
	// 359        0x31s
	// 360        0x32s
	// 361        0x33s
	// 362        0x34s
	// 363        0x35s
	// 364        0x36s
	// 365        0x37s
	// 366        0x38s
	// 367        0x39s
	// 368        0x30s
	// 369        0x31s
	// 370        0x32s
	// 371        0x33s
	// 372        0x34s
	// 373        0x35s
	// 374        0x36s
	// 375        0x37s
	// 376        0x38s
	// 377        0x39s
	// 378    .end array-data
	// 380    .line 495
	// 381    :array_12c
	// 382    .array-data 4
	// 383        0x9
	// 384        0x63
	// 385        0x3e7
	// 386        0x270f
	// 387        0x1869f
	// 388        0xf423f
	// 389        0x98967f
	// 390        0x5f5e0ff
	// 391        0x3b9ac9ff
	// 392        0x7fffffff
	// 393    .end array-data

}
// .method public constructor <init>(I)V
java::lang::Integer::Integer(int value)
{
	
	//    .param p1, "value"    # I
	// 402    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = value;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::Integer::Integer(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 415        value = {
	// 416            Ljava/lang/NumberFormatException;
	// 417        }
	// 418    .end annotation
	// 422    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	this->value = java::lang::Integer::parseInt(s, 0xa);
	return;

}
// .method public static bitCount(I)I
int java::lang::Integer::bitCount(int i)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	
	//    .param p0, "i"    # I
	cVar0 = 0x33333333;
	cVar1 = (i -  (_ushri(i,0x1) &  0x55555555));
	cVar2 = ((cVar1 & cVar0) + (_ushri(cVar1,0x2) &  cVar0));
	cVar3 = ((_ushri(cVar2,0x4) +  cVar2) & 0xf0f0f0f);
	cVar4 = (cVar3 +  _ushri(cVar3,0x8));
	return ( (cVar4 +  _ushri(cVar4,0x10)) & 0x3f);

}
// .method public static compare(II)I
int java::lang::Integer::compare(int x,int y)
{
	
	int cVar0;
	
	//    .param p0, "x"    # I
	//    .param p1, "y"    # I
	if ( x >= y )
		goto label_cond_4;
	cVar0 = -0x1;
label_goto_3:
	return cVar0;
label_cond_4:
	if ( x != y )
		goto label_cond_8;
	cVar0 = 0x0;
	goto label_goto_3;
label_cond_8:
	cVar0 = 0x1;
	goto label_goto_3;

}
// .method public static compareUnsigned(II)I
int java::lang::Integer::compareUnsigned(int x,int y)
{
	
	int cVar0;
	
	//    .param p0, "x"    # I
	//    .param p1, "y"    # I
	cVar0 = -0x80000000;
	return java::lang::Integer::compare((x + cVar0), (cVar0 +  y));

}
// .method public static decode(Ljava/lang/String;)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> java::lang::Integer::decode(std::shared_ptr<java::lang::String> nm)
{
	
	int index;
	std::shared_ptr<java::lang::NumberFormatException> cVar0;
	int firstChar;
	int negative;
	int radix;
	std::shared_ptr<java::lang::NumberFormatException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::Integer> result;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "nm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 538        value = {
	// 539            Ljava/lang/NumberFormatException;
	// 540        }
	// 541    .end annotation
	0xa;
	//    .local v5, "radix":I
	index = 0x0;
	//    .local v3, "index":I
	0x0;
	//    .local v4, "negative":Z
	if ( nm->length() )     
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::NumberFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Zero length string")));
	// throw
	throw cVar0;
	// 574    .line 1191
label_cond_14:
	firstChar = nm->charAt(0x0);
	//    .local v2, "firstChar":C
	if ( firstChar != 0x2d )
		goto label_cond_4f;
	negative = 0x1;
	index = 0x1;
label_cond_1e:
label_goto_1e:
	if ( nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("0x")), index) )     
		goto label_cond_30;
	if ( !(nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("0X")), index)) )  
		goto label_cond_55;
label_cond_30:
	index = ( index + 0x2);
	radix = 0x10;
label_cond_34:
label_goto_34:
	if ( nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")), index) )     
		goto label_cond_46;
	if ( !(nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("+")), index)) )  
		goto label_cond_79;
label_cond_46:
	cVar1 = std::make_shared<java::lang::NumberFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Sign character in wrong position")));
	// throw
	throw cVar1;
	// 647    .line 1196
label_cond_4f:
	if ( firstChar != 0x2b )
		goto label_cond_1e;
	index = 0x1;
	goto label_goto_1e;
	// 658    .line 1204
label_cond_55:
	if ( !(nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("#")), index)) )  
		goto label_cond_63;
	index = ( index + 0x1);
	0x10;
	goto label_goto_34;
	// 676    .line 1208
label_cond_63:
	if ( !(nm->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("0")), index)) )  
		goto label_cond_34;
	if ( nm->length() <= ( index + 0x1) )
		goto label_cond_34;
	index = ( index + 0x1);
	0x8;
	goto label_goto_34;
	// 702    .line 1217
label_cond_79:
	try {
	//label_try_start_79:
	result = java::lang::Integer::valueOf(nm->substring(index), radix);
	//    .local v6, "result":Ljava/lang/Integer;
	if ( !(negative) )  
		goto label_cond_8c;
	//label_try_end_8b:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8d;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_79 .. :try_end_8b} :catch_8d
	result = java::lang::Integer::valueOf((0 - result->intValue()));
label_cond_8c:
label_goto_8c:
	return result;
	// 734    .line 1219
	// 735    .end local v6    # "result":Ljava/lang/Integer;
label_catch_8d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/NumberFormatException;
	if ( !(negative) )  
		goto label_cond_ad;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "constant":Ljava/lang/String;
label_goto_a8:
	result = java::lang::Integer::valueOf(constant, radix);
	//    .restart local v6    # "result":Ljava/lang/Integer;
	goto label_goto_8c;
	// 775    .line 1224
	// 776    .end local v0    # "constant":Ljava/lang/String;
	// 777    .end local v6    # "result":Ljava/lang/Integer;
label_cond_ad:
	//    .restart local v0    # "constant":Ljava/lang/String;
	goto label_goto_a8;

}
// .method public static divideUnsigned(II)I
int java::lang::Integer::divideUnsigned(int dividend,int divisor)
{
	
	//    .param p0, "dividend"    # I
	//    .param p1, "divisor"    # I
	return (int)((java::lang::Integer::toUnsignedLong(dividend) /  java::lang::Integer::toUnsignedLong(divisor)));

}
// .method static formatUnsignedInt(II[CII)I
int java::lang::Integer::formatUnsignedInt(int val,int shift,std::shared_ptr<char[]> buf,int offset,int len)
{
	
	int charPos;
	int val;
	
	//    .param p0, "val"    # I
	//    .param p1, "shift"    # I
	//    .param p2, "buf"    # [C
	//    .param p3, "offset"    # I
	//    .param p4, "len"    # I
	//    .local v0, "charPos":I
	//    .local v2, "radix":I
	//    .local v1, "mask":I
label_cond_6:
	charPos = ( charPos + -0x1);
	buf[(offset + charPos)] = java::lang::Integer::digits[(val & ( (0x1 << shift) + -0x1))];
	val = _ushri(val,shift);
	if ( !(val) )  
		goto label_cond_17;
	if ( charPos > 0 ) 
		goto label_cond_6;
label_cond_17:
	return charPos;

}
// .method static getChars(II[C)V
void java::lang::Integer::getChars(int cVar0,int index,std::shared_ptr<char[]> buf)
{
	
	int charPos;
	int sign;
	int cVar0;
	int q;
	int r;
	
	//    .param p0, "i"    # I
	//    .param p1, "index"    # I
	//    .param p2, "buf"    # [C
	charPos = index;
	//    .local v0, "charPos":I
	0x0;
	//    .local v3, "sign":C
	if ( cVar0 >= 0 )
		goto label_cond_7;
	sign = 0x2d;
	cVar0 = (0 - cVar0);
label_cond_7:
label_goto_7:
	if ( cVar0 <  0x10000 )
		goto label_cond_29;
	q = ( cVar0 / 0x64);
	//    .local v1, "q":I
	r = (cVar0 - ((( q << 0x6) +  ( q << 0x5)) +  ( q << 0x2)));
	//    .local v2, "r":I
	cVar0 = q;
	charPos = ( charPos + -0x1);
	buf[charPos] = java::lang::Integer::DigitOnes[r];
	charPos = ( charPos + -0x1);
	buf[charPos] = java::lang::Integer::DigitTens[r];
	goto label_goto_7;
	// 931    .line 484
	// 932    .end local v1    # "q":I
	// 933    .end local v2    # "r":I
label_cond_29:
	q = _ushri((0xcccd *  cVar0),0x13);
	//    .restart local v1    # "q":I
	//    .restart local v2    # "r":I
	charPos = ( charPos + -0x1);
	buf[charPos] = java::lang::Integer::digits[(cVar0 - (( q << 0x3) +  ( q << 0x1)))];
	cVar0 = q;
	if ( q )     
		goto label_cond_29;
	if ( !(sign) )  
		goto label_cond_47;
	buf[( charPos + -0x1)] = sign;
label_cond_47:
	return;

}
// .method public static getInteger(Ljava/lang/String;)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> java::lang::Integer::getInteger(std::shared_ptr<java::lang::String> nm)
{
	
	//    .param p0, "nm"    # Ljava/lang/String;
	return java::lang::Integer::getInteger(nm, 0x0);

}
// .method public static getInteger(Ljava/lang/String;I)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> java::lang::Integer::getInteger(std::shared_ptr<java::lang::String> nm,int val)
{
	
	std::shared_ptr<java::lang::Integer> result;
	
	//    .param p0, "nm"    # Ljava/lang/String;
	//    .param p1, "val"    # I
	result = java::lang::Integer::getInteger(nm, 0x0);
	//    .local v0, "result":Ljava/lang/Integer;
	if ( result )     
		goto label_cond_b;
	//    .end local v0    # "result":Ljava/lang/Integer;
label_cond_b:
	return result;

}
// .method public static getInteger(Ljava/lang/String;Ljava/lang/Integer;)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> java::lang::Integer::getInteger(std::shared_ptr<java::lang::String> nm,std::shared_ptr<java::lang::Integer> val)
{
	
	std::shared_ptr<java::lang::String> v;
	std::vector<std::any> tryCatchExcetionList;
	auto v;
	
	//    .param p0, "nm"    # Ljava/lang/String;
	//    .param p1, "val"    # Ljava/lang/Integer;
	v = 0x0;
	//    .local v2, "v":Ljava/lang/String;
	try {
	//label_try_start_1:
	//label_try_end_4:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c;
	}
	catch (java::lang::NullPointerException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_4} :catch_c
	//    .catch Ljava/lang/NullPointerException; {:try_start_1 .. :try_end_4} :catch_c
	v = java::lang::System::getProperty(nm);
	//    .end local v2    # "v":Ljava/lang/String;
label_goto_5:
	if ( !(v) )  
		goto label_cond_f;
	try {
	//label_try_start_7:
	//label_try_end_a:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_7 .. :try_end_a} :catch_e
	return java::lang::Integer::decode(v);
	// 1055    .line 1130
	// 1056    .restart local v2    # "v":Ljava/lang/String;
label_catch_c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/RuntimeException;
	goto label_goto_5;
	// 1063    .line 1135
	// 1064    .end local v1    # "e":Ljava/lang/RuntimeException;
	// 1065    .end local v2    # "v":Ljava/lang/String;
label_catch_e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_f:
	return val;

}
// .method public static hashCode(I)I
int java::lang::Integer::hashCode(int value)
{
	
	//    .param p0, "value"    # I
	return value;

}
// .method public static highestOneBit(I)I
int java::lang::Integer::highestOneBit(int i)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	
	//    .param p0, "i"    # I
	cVar0 = (i |  _shri(i,0x1));
	cVar1 = (cVar0 |  _shri(cVar0,0x2));
	cVar2 = (cVar1 |  _shri(cVar1,0x4));
	cVar3 = (cVar2 |  _shri(cVar2,0x8));
	cVar4 = (cVar3 |  _shri(cVar3,0x10));
	return (cVar4 - _ushri(cVar4,0x1));

}
// .method public static lowestOneBit(I)I
int java::lang::Integer::lowestOneBit(int i)
{
	
	//    .param p0, "i"    # I
	return ((0 - i) &  i);

}
// .method public static max(II)I
int java::lang::Integer::max(int a,int b)
{
	
	//    .param p0, "a"    # I
	//    .param p1, "b"    # I
	return java::lang::Math::max(a, b);

}
// .method public static min(II)I
int java::lang::Integer::min(int a,int b)
{
	
	//    .param p0, "a"    # I
	//    .param p1, "b"    # I
	return java::lang::Math::min(a, b);

}
// .method public static numberOfLeadingZeros(I)I
int java::lang::Integer::numberOfLeadingZeros(int cVar3)
{
	
	int n;
	int cVar3;
	
	//    .param p0, "i"    # I
	if ( cVar3 )     
		goto label_cond_5;
	return 0x20;
	// 1175    .line 1427
label_cond_5:
	//    .local v0, "n":I
	if ( _ushri(cVar3,0x10) )     
		goto label_cond_e;
	n = 0x11;
	cVar3 = ( cVar3 << 0x10);
label_cond_e:
	if ( _ushri(cVar3,0x18) )     
		goto label_cond_16;
	n = ( n + 0x8);
	cVar3 = ( cVar3 << 0x8);
label_cond_16:
	if ( _ushri(cVar3,0x1c) )     
		goto label_cond_1e;
	n = ( n + 0x4);
	cVar3 = ( cVar3 << 0x4);
label_cond_1e:
	if ( _ushri(cVar3,0x1e) )     
		goto label_cond_26;
	cVar3 = ( cVar3 << 0x2);
label_cond_26:
	return (0x1 -  _ushri(cVar3,0x1f));

}
// .method public static numberOfTrailingZeros(I)I
int java::lang::Integer::numberOfTrailingZeros(int cVar3)
{
	
	int y;
	int n;
	int cVar3;
	
	//    .param p0, "i"    # I
	if ( cVar3 )     
		goto label_cond_5;
	return 0x20;
	// 1241    .line 1454
label_cond_5:
	//    .local v0, "n":I
	y = ( cVar3 << 0x10);
	//    .local v1, "y":I
	if ( !(y) )  
		goto label_cond_e;
	n = 0xf;
	cVar3 = y;
label_cond_e:
	y = ( cVar3 << 0x8);
	if ( !(y) )  
		goto label_cond_15;
	n = ( n + -0x8);
	cVar3 = y;
label_cond_15:
	y = ( cVar3 << 0x4);
	if ( !(y) )  
		goto label_cond_1c;
	n = ( n + -0x4);
	cVar3 = y;
label_cond_1c:
	y = ( cVar3 << 0x2);
	if ( !(y) )  
		goto label_cond_23;
	cVar3 = y;
label_cond_23:
	return (0x1f - _ushri(( cVar3 << 0x1),0x1f));

}
// .method public static parseInt(Ljava/lang/String;)I
int java::lang::Integer::parseInt(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1301        value = {
	// 1302            Ljava/lang/NumberFormatException;
	// 1303        }
	// 1304    .end annotation
	return java::lang::Integer::parseInt(s, 0xa);

}
// .method public static parseInt(Ljava/lang/String;I)I
int java::lang::Integer::parseInt(std::shared_ptr<java::lang::String> s,int radix)
{
	
	std::shared_ptr<java::lang::NumberFormatException> cVar0;
	std::shared_ptr<java::lang::NumberFormatException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::NumberFormatException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	int result;
	int len;
	int firstChar;
	int limit;
	int i;
	int digit;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "radix"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1322        value = {
	// 1323            Ljava/lang/NumberFormatException;
	// 1324        }
	// 1325    .end annotation
	if ( s )     
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::NumberFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("s == null")));
	// throw
	throw cVar0;
	// 1342    .line 573
label_cond_c:
	if ( radix >= 0x2 )
		goto label_cond_30;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::NumberFormatException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("radix ")))->append(radix)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" less than Character.MIN_RADIX")))->toString());
	// throw
	throw cVar1;
	// 1381    .line 578
label_cond_30:
	if ( radix <= 0x24 )
		goto label_cond_55;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::NumberFormatException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("radix ")))->append(radix)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" greater than Character.MAX_RADIX")))->toString());
	// throw
	throw cVar3;
	// 1420    .line 583
label_cond_55:
	result = 0x0;
	//    .local v8, "result":I
	//    .local v7, "negative":Z
	//    .local v2, "i":I
	len = s->length();
	//    .local v4, "len":I
	//    .local v5, "limit":I
	if ( len <= 0 )
		goto label_cond_ac;
	firstChar = s->charAt(0x0);
	//    .local v1, "firstChar":C
	if ( firstChar >= 0x30 )
		goto label_cond_82;
	if ( firstChar != 0x2d )
		goto label_cond_78;
	limit = -0x80000000;
label_cond_70:
	if ( len != 0x1 )
		goto label_cond_81;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1480    .line 596
label_cond_78:
	if ( firstChar == 0x2b )
		goto label_cond_70;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1493    .line 601
label_cond_81:
label_cond_82:
	//    .local v6, "multmin":I
	i = 0x0;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
label_goto_85:
	if ( i >= len )
		goto label_cond_b1;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	digit = java::lang::Character::digit(s->charAt(i), radix);
	//    .local v0, "digit":I
	if ( digit >= 0 )
		goto label_cond_98;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1534    .line 610
label_cond_98:
	if ( result >= (-0x7fffffff / radix) )
		goto label_cond_9f;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1545    .line 613
label_cond_9f:
	result = (result *  radix);
	if ( result >= (limit + digit) )
		goto label_cond_a9;
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1561    .line 617
label_cond_a9:
	result = (result -  digit);
	i = ( i + 0x1);
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_85;
	// 1571    .line 620
	// 1572    .end local v0    # "digit":I
	// 1573    .end local v1    # "firstChar":C
	// 1574    .end local v3    # "i":I
	// 1575    .end local v6    # "multmin":I
	// 1576    .restart local v2    # "i":I
label_cond_ac:
	// throw
	throw java::lang::NumberFormatException::forInputString(s);
	// 1584    .line 622
	// 1585    .end local v2    # "i":I
	// 1586    .restart local v1    # "firstChar":C
	// 1587    .restart local v3    # "i":I
	// 1588    .restart local v6    # "multmin":I
label_cond_b1:
	if ( !(0x0) )  
		goto label_cond_b4;
	//    .end local v8    # "result":I
label_goto_b3:
	return result;
	// 1596    .restart local v8    # "result":I
label_cond_b4:
	result = (0 - result);
	goto label_goto_b3;

}
// .method public static parseUnsignedInt(Ljava/lang/String;)I
int java::lang::Integer::parseUnsignedInt(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1607        value = {
	// 1608            Ljava/lang/NumberFormatException;
	// 1609        }
	// 1610    .end annotation
	return java::lang::Integer::parseUnsignedInt(s, 0xa);

}
// .method public static parseUnsignedInt(Ljava/lang/String;I)I
int java::lang::Integer::parseUnsignedInt(std::shared_ptr<java::lang::String> s,int radix)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::NumberFormatException> cVar2;
	int len;
	std::shared_ptr<java::lang::NumberFormatException> cVar3;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar4;
	auto ell;
	std::shared_ptr<java::lang::NumberFormatException> cVar5;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar6;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "radix"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1628        value = {
	// 1629            Ljava/lang/NumberFormatException;
	// 1630        }
	// 1631    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( s )     
		goto label_cond_d;
	cVar2 = std::make_shared<java::lang::NumberFormatException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
	// throw
	throw cVar2;
	// 1650    .line 695
label_cond_d:
	len = s->length();
	//    .local v3, "len":I
	if ( len <= 0 )
		goto label_cond_5f;
	//    .local v2, "firstChar":C
	if ( s->charAt(cVar1) != 0x2d )
		goto label_cond_2c;
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar4[cVar1] = s;
	cVar3 = std::make_shared<java::lang::NumberFormatException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal leading minus sign on unsigned string %s.")), cVar4));
	// throw
	throw cVar3;
	// 1692    .line 703
label_cond_2c:
	if ( len <= 0x5 )
		goto label_cond_37;
	if ( radix != 0xa )
		goto label_cond_3c;
	if ( len >  0x9 )
		goto label_cond_3c;
label_cond_37:
	return java::lang::Integer::parseInt(s, radix);
	// 1715    .line 707
label_cond_3c:
	ell = java::lang::Long::parseLong(s, radix);
	//    .local v0, "ell":J
	if ( ((-0x100000000L &  ell) > 0x0) )     
		goto label_cond_4e;
	return (int)(ell);
	// 1738    .line 711
label_cond_4e:
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar6[cVar1] = s;
	cVar5 = std::make_shared<java::lang::NumberFormatException>(java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("String value %s exceeds range of unsigned int.")), cVar6));
	// throw
	throw cVar5;
	// 1760    .line 718
	// 1761    .end local v0    # "ell":J
	// 1762    .end local v2    # "firstChar":C
label_cond_5f:
	// throw
	throw java::lang::NumberFormatException::forInputString(s);

}
// .method public static remainderUnsigned(II)I
int java::lang::Integer::remainderUnsigned(int dividend,int divisor)
{
	
	//    .param p0, "dividend"    # I
	//    .param p1, "divisor"    # I
	return (int)((java::lang::Integer::toUnsignedLong(dividend) %  java::lang::Integer::toUnsignedLong(divisor)));

}
// .method public static reverse(I)I
int java::lang::Integer::reverse(int i)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int cVar5;
	int cVar6;
	
	//    .param p0, "i"    # I
	cVar0 = 0x55555555;
	cVar1 = 0x33333333;
	cVar2 = 0xf0f0f0f;
	cVar3 = 0xff00;
	cVar4 = (( (i & cVar0) << 0x1) | (_ushri(i,0x1) &  cVar0));
	cVar5 = (( (cVar4 & cVar1) << 0x2) | (_ushri(cVar4,0x2) &  cVar1));
	cVar6 = (( (cVar5 & cVar2) << 0x4) | (_ushri(cVar5,0x4) &  cVar2));
	return (((( cVar6 << 0x18) |  ( (cVar6 & cVar3) << 0x8)) |  (_ushri(cVar6,0x8) &  cVar3)) | _ushri(cVar6,0x18));

}
// .method public static reverseBytes(I)I
int java::lang::Integer::reverseBytes(int i)
{
	
	//    .param p0, "i"    # I
	return (((_ushri(i,0x18) |  (_shri(i,0x8) &  0xff00)) |  (( i << 0x8) &  0xff0000)) |  ( i << 0x18));

}
// .method public static rotateLeft(II)I
int java::lang::Integer::rotateLeft(int i,int distance)
{
	
	//    .param p0, "i"    # I
	//    .param p1, "distance"    # I
	return ((i << distance) |  _ushri(i,(0 - distance)));

}
// .method public static rotateRight(II)I
int java::lang::Integer::rotateRight(int i,int distance)
{
	
	//    .param p0, "i"    # I
	//    .param p1, "distance"    # I
	return (_ushri(i,distance) |  (i << (0 - distance)));

}
// .method public static signum(I)I
int java::lang::Integer::signum(int i)
{
	
	//    .param p0, "i"    # I
	return (_shri(i,0x1f) |  _ushri((0 - i),0x1f));

}
// .method static stringSize(I)I
int java::lang::Integer::stringSize(int x)
{
	
	int i;
	
	//    .param p0, "x"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( x >  java::lang::Integer::sizeTable[i] )
		goto label_cond_a;
	return ( i + 0x1);
	// 1978    .line 500
label_cond_a:
	i = ( i + 0x1);
	goto label_goto_1;

}
// .method public static sum(II)I
int java::lang::Integer::sum(int a,int b)
{
	
	//    .param p0, "a"    # I
	//    .param p1, "b"    # I
	return (a + b);

}
// .method public static toBinaryString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Integer::toBinaryString(int i)
{
	
	//    .param p0, "i"    # I
	return java::lang::Integer::toUnsignedString0(i, 0x1);

}
// .method public static toHexString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Integer::toHexString(int i)
{
	
	//    .param p0, "i"    # I
	return java::lang::Integer::toUnsignedString0(i, 0x4);

}
// .method public static toOctalString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Integer::toOctalString(int i)
{
	
	//    .param p0, "i"    # I
	return java::lang::Integer::toUnsignedString0(i, 0x3);

}
// .method public static toString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Integer::toString(int cVar5)
{
	
	char cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int negative;
	std::shared_ptr<std::vector<java::lang::String>> smallValues;
	int cVar5;
	std::shared_ptr<java::lang::String> cVar6;
	std::shared<std::vector<char[]>> cVar7;
	std::shared<std::vector<char[]>> cVar9;
	std::shared_ptr<java::lang::String> cVar10;
	std::shared<std::vector<char[]>> cVar11;
	std::shared<std::vector<char[]>> cVar13;
	int size;
	std::shared<std::vector<char[]>> buf;
	std::shared_ptr<java::lang::String> cVar14;
	
	//    .param p0, "i"    # I
	cVar0 = 0x2d;
	cVar1 = 0xa;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	if ( cVar5 != -0x80000000 )
		goto label_cond_f;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("-2147483648"));
	// 2067    .line 406
label_cond_f:
	if ( cVar5 >= 0 )
		goto label_cond_3c;
	negative = 0x1;
	//    .local v1, "negative":Z
label_goto_12:
	if ( !(negative) )  
		goto label_cond_40;
	if ( cVar5 <= -0x64 )
		goto label_cond_3e;
label_goto_18:
	//    .local v3, "small":Z
label_goto_19:
	if ( !(small) )  
		goto label_cond_89;
	if ( !(negative) )  
		goto label_cond_45;
	smallValues = java::lang::Integer::SMALL_NEG_VALUES;
	//    .local v4, "smallValues":[Ljava/lang/String;
label_goto_1f:
	if ( !(negative) )  
		goto label_cond_5f;
	cVar5 = (0 - cVar5);
	if ( smallValues[cVar5] )     
		goto label_cond_39;
	if ( cVar5 >= cVar1 )
		goto label_cond_48;
	cVar7 = std::make_shared<std::vector<char[]>>(cVar2);
	cVar7[cVar4] = cVar0;
	cVar7[cVar3] = java::lang::Integer::DigitOnes[cVar5];
	cVar6 = std::make_shared<java::lang::String>(cVar7);
label_goto_37:
	smallValues[cVar5] = cVar6;
label_cond_39:
label_goto_39:
	return smallValues[cVar5];
	// 2136    .line 406
	// 2137    .end local v1    # "negative":Z
	// 2138    .end local v3    # "small":Z
	// 2139    .end local v4    # "smallValues":[Ljava/lang/String;
label_cond_3c:
	negative = 0x0;
	//    .restart local v1    # "negative":Z
	goto label_goto_12;
	// 2146    .line 407
label_cond_3e:
	//    .restart local v3    # "small":Z
	goto label_goto_19;
	// 2153    .end local v3    # "small":Z
label_cond_40:
	if ( cVar5 >= 0x64 )
		goto label_cond_3e;
	goto label_goto_18;
	// 2161    .line 409
	// 2162    .restart local v3    # "small":Z
label_cond_45:
	smallValues = java::lang::Integer::SMALL_NONNEG_VALUES;
	//    .restart local v4    # "smallValues":[Ljava/lang/String;
	goto label_goto_1f;
	// 2169    .line 416
label_cond_48:
	cVar9 = std::make_shared<std::vector<char[]>>(0x3);
	cVar9[cVar4] = cVar0;
	cVar9[cVar3] = java::lang::Integer::DigitTens[cVar5];
	cVar9[cVar2] = java::lang::Integer::DigitOnes[cVar5];
	cVar6 = std::make_shared<java::lang::String>(cVar9);
	goto label_goto_37;
	// 2195    .line 419
label_cond_5f:
	if ( smallValues[cVar5] )     
		goto label_cond_39;
	if ( cVar5 >= cVar1 )
		goto label_cond_75;
	cVar11 = std::make_shared<std::vector<char[]>>(cVar3);
	cVar11[cVar4] = java::lang::Integer::DigitOnes[cVar5];
	cVar10 = std::make_shared<java::lang::String>(cVar11);
label_goto_72:
	smallValues[cVar5] = cVar10;
	goto label_goto_39;
	// 2222    .line 422
label_cond_75:
	cVar13 = std::make_shared<std::vector<char[]>>(cVar2);
	cVar13[cVar4] = java::lang::Integer::DigitTens[cVar5];
	cVar13[cVar3] = java::lang::Integer::DigitOnes[cVar5];
	cVar10 = std::make_shared<java::lang::String>(cVar13);
	goto label_goto_72;
	// 2244    .line 428
	// 2245    .end local v4    # "smallValues":[Ljava/lang/String;
label_cond_89:
	if ( !(negative) )  
		goto label_cond_9d;
	size = ( java::lang::Integer::stringSize((0 - cVar5)) + 0x1);
	//    .local v2, "size":I
label_goto_92:
	buf = std::make_shared<std::vector<char[]>>(size);
	//    .local v0, "buf":[C
	java::lang::Integer::getChars(cVar5, size, buf);
	cVar14 = std::make_shared<java::lang::String>(buf);
	return cVar14;
	// 2273    .line 428
	// 2274    .end local v0    # "buf":[C
	// 2275    .end local v2    # "size":I
label_cond_9d:
	size = java::lang::Integer::stringSize(cVar5);
	//    .restart local v2    # "size":I
	goto label_goto_92;

}
// .method public static toString(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Integer::toString(int cVar1,int cVar0)
{
	
	int cVar0;
	std::shared<std::vector<char[]>> buf;
	int negative;
	int charPos;
	int cVar1;
	std::shared_ptr<java::lang::String> cVar3;
	
	//    .param p0, "i"    # I
	//    .param p1, "radix"    # I
	if ( cVar0 <  0x2 )
		goto label_cond_7;
	if ( cVar0 <= 0x24 )
		goto label_cond_9;
label_cond_7:
	cVar0 = 0xa;
label_cond_9:
	if ( cVar0 != 0xa )
		goto label_cond_12;
	return java::lang::Integer::toString(cVar1);
	// 2317    .line 140
label_cond_12:
	buf = std::make_shared<std::vector<char[]>>(0x21);
	//    .local v0, "buf":[C
	if ( cVar1 >= 0 )
		goto label_cond_30;
	negative = 0x1;
	//    .local v3, "negative":Z
label_goto_19:
	charPos = 0x20;
	//    .local v1, "charPos":I
	if ( negative )     
		goto label_cond_2e;
	cVar1 = (0 - cVar1);
	charPos = charPos;
	//    .end local v1    # "charPos":I
	//    .local v2, "charPos":I
label_goto_1f:
	if ( cVar1 >  (0 - cVar0) )
		goto label_cond_32;
	//    .end local v2    # "charPos":I
	//    .restart local v1    # "charPos":I
	buf[charPos] = java::lang::Integer::digits[(0 - (cVar1 % cVar0))];
	cVar1 = (cVar1 /  cVar0);
label_cond_2e:
	charPos = charPos;
	//    .end local v1    # "charPos":I
	//    .restart local v2    # "charPos":I
	goto label_goto_1f;
	// 2376    .line 141
	// 2377    .end local v2    # "charPos":I
	// 2378    .end local v3    # "negative":Z
label_cond_30:
	negative = 0x0;
	//    .restart local v3    # "negative":Z
	goto label_goto_19;
	// 2385    .line 152
	// 2386    .restart local v2    # "charPos":I
label_cond_32:
	buf[charPos] = java::lang::Integer::digits[(0 - cVar1)];
	if ( !(negative) )  
		goto label_cond_49;
	charPos = ( charPos + -0x1);
	//    .end local v2    # "charPos":I
	//    .restart local v1    # "charPos":I
	buf[charPos] = 0x2d;
label_goto_41:
	cVar3 = std::make_shared<java::lang::String>(buf, charPos, ( charPos - 0x21));
	return cVar3;
	// 2418    .end local v1    # "charPos":I
	// 2419    .restart local v2    # "charPos":I
label_cond_49:
	charPos = charPos;
	//    .end local v2    # "charPos":I
	//    .restart local v1    # "charPos":I
	goto label_goto_41;

}
// .method public static toUnsignedLong(I)J
long long java::lang::Integer::toUnsignedLong(int x)
{
	
	//    .param p0, "x"    # I
	return ((long long)(x) &  0xffffffffL);

}
// .method public static toUnsignedString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Integer::toUnsignedString(int i)
{
	
	//    .param p0, "i"    # I
	return java::lang::Long::toString(java::lang::Integer::toUnsignedLong(i));

}
// .method public static toUnsignedString(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Integer::toUnsignedString(int i,int radix)
{
	
	//    .param p0, "i"    # I
	//    .param p1, "radix"    # I
	return java::lang::Long::toUnsignedString(java::lang::Integer::toUnsignedLong(i), radix);

}
// .method private static toUnsignedString0(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Integer::toUnsignedString0(int val,int shift)
{
	
	int chars;
	std::shared<std::vector<char[]>> buf;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "val"    # I
	//    .param p1, "shift"    # I
	//    .local v2, "mag":I
	chars = java::lang::Math::max(((( shift + -0x1) +  ( java::lang::Integer::numberOfLeadingZeros(val) - 0x20)) /  shift), 0x1);
	//    .local v1, "chars":I
	buf = std::make_shared<std::vector<char[]>>(chars);
	//    .local v0, "buf":[C
	java::lang::Integer::formatUnsignedInt(val, shift, buf, 0x0, chars);
	cVar0 = std::make_shared<java::lang::String>(buf);
	return cVar0;

}
// .method public static valueOf(I)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> java::lang::Integer::valueOf(int i)
{
	
	std::shared_ptr<java::lang::Integer> cVar0;
	
	//    .param p0, "i"    # I
	if ( i <  -0x80 )
		goto label_cond_f;
	if ( i >  java::lang::Integer_S_IntegerCache::high )
		goto label_cond_f;
	return java::lang::Integer_S_IntegerCache::cache[( i + 0x80)];
	// 2546    .line 860
label_cond_f:
	cVar0 = std::make_shared<java::lang::Integer>(i);
	return cVar0;

}
// .method public static valueOf(Ljava/lang/String;)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> java::lang::Integer::valueOf(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2559        value = {
	// 2560            Ljava/lang/NumberFormatException;
	// 2561        }
	// 2562    .end annotation
	return java::lang::Integer::valueOf(java::lang::Integer::parseInt(s, 0xa));

}
// .method public static valueOf(Ljava/lang/String;I)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> java::lang::Integer::valueOf(std::shared_ptr<java::lang::String> s,int radix)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "radix"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2584        value = {
	// 2585            Ljava/lang/NumberFormatException;
	// 2586        }
	// 2587    .end annotation
	return java::lang::Integer::valueOf(java::lang::Integer::parseInt(s, radix));

}
// .method public byteValue()B
unsigned char java::lang::Integer::byteValue()
{
	
	return (unsigned char)(this->value);

}
// .method public compareTo(Ljava/lang/Integer;)I
int java::lang::Integer::compareTo(std::shared_ptr<java::lang::Integer> anotherInteger)
{
	
	//    .param p1, "anotherInteger"    # Ljava/lang/Integer;
	return java::lang::Integer::compare(this->value, anotherInteger->value);

}
// .method public doubleValue()D
double java::lang::Integer::doubleValue()
{
	
	return (double)(this->value);

}
// .method public equals(Ljava/lang/Object;)Z
bool java::lang::Integer::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj->instanceOf("java::lang::Integer")) )  
		goto label_cond_11;
	obj->checkCast("java::lang::Integer");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( this->value != obj->intValue() )
		goto label_cond_10;
	cVar1 = 0x1;
label_cond_10:
	return cVar1;
	// 2688    .line 1005
	// 2689    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_11:
	return cVar1;

}
// .method public floatValue()F
float java::lang::Integer::floatValue()
{
	
	return (float)(this->value);

}
// .method public hashCode()I
int java::lang::Integer::hashCode()
{
	
	return java::lang::Integer::hashCode(this->value);

}
// .method public intValue()I
int java::lang::Integer::intValue()
{
	
	return this->value;

}
// .method public longValue()J
long long java::lang::Integer::longValue()
{
	
	return (long long)(this->value);

}
// .method public shortValue()S
short java::lang::Integer::shortValue()
{
	
	return (short)(this->value);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::Integer::toString()
{
	
	return java::lang::Integer::toString(this->value);

}


