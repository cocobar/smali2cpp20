// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DigitList.smali
#include "java2ctype.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.text.DigitList.h"
#include "java.lang.Double.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"

static android::icu::text::DigitList::DBL_DIG = 0x11;
static android::icu::text::DigitList::LONG_MIN_REP = nullptr;
static android::icu::text::DigitList::MAX_LONG_DIGITS = 0x13;
// .method static constructor <clinit>()V
void android::icu::text::DigitList::static_cinit()
{
	
	int cVar0;
	int i;
	
	cVar0 = 0x13;
	//    .local v1, "s":Ljava/lang/String;
	android::icu::text::DigitList::LONG_MIN_REP = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( i >= cVar0 )
		goto label_cond_1d;
	android::icu::text::DigitList::LONG_MIN_REP[i] = (unsigned char)(java::lang::Long::toString(-0x8000000000000000L)->charAt(( i + 0x1)));
	i = ( i + 0x1);
	goto label_goto_d;
	// 069    .line 48
label_cond_1d:
	return;

}
// .method public constructor <init>()V
android::icu::text::DigitList::DigitList()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	// 081    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->decimalAt = cVar0;
	this->count = cVar0;
	this->digits = std::make_shared<std::vector<unsigned char[]>>(0x13);
	this->didRound = cVar0;
	return;

}
// .method private final ensureCapacity(II)V
void android::icu::text::DigitList::ensureCapacity(int digitCapacity,int digitsToCopy)
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> newDigits;
	
	//    .param p1, "digitCapacity"    # I
	//    .param p2, "digitsToCopy"    # I
	cVar0 = 0x0;
	if ( digitCapacity <= this->digits->size() )
		goto label_cond_11;
	newDigits = std::make_shared<std::vector<unsigned char[]>>(( digitCapacity * 0x2));
	//    .local v0, "newDigits":[B
	java::lang::System::arraycopy(this->digits, cVar0, newDigits, cVar0, digitsToCopy);
	this->digits = newDigits;
	//    .end local v0    # "newDigits":[B
label_cond_11:
	return;

}
// .method private getStringRep(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DigitList::getStringRep(bool isPositive)
{
	
	char cVar0;
	char cVar1;
	std::shared_ptr<java::lang::StringBuilder> stringRep;
	int d;
	int i;
	
	//    .param p1, "isPositive"    # Z
	cVar0 = 0x30;
	cVar1 = 0x2e;
	if ( !(this->isZero()) )  
		goto label_cond_e;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("0"));
	// 158    .line 215
label_cond_e:
	stringRep = std::make_shared<java::lang::StringBuilder>(( this->count + 0x1));
	//    .local v3, "stringRep":Ljava/lang/StringBuilder;
	if ( isPositive )     
		goto label_cond_1e;
	stringRep->append(0x2d);
label_cond_1e:
	d = this->decimalAt;
	//    .local v0, "d":I
	if ( d >= 0 )
		goto label_cond_2e;
	stringRep->append(cVar1);
label_goto_25:
	if ( d >= 0 )
		goto label_cond_2d;
	stringRep->append(cVar0);
	d = ( d + 0x1);
	goto label_goto_25;
	// 200    .line 226
label_cond_2d:
	d = -0x1;
label_cond_2e:
	i = 0x0;
	//    .local v2, "i":I
label_goto_2f:
	if ( i >= this->count )
		goto label_cond_43;
	if ( d != i )
		goto label_cond_38;
	stringRep->append(cVar1);
label_cond_38:
	stringRep->append((char)(this->digits[i]));
	i = ( i + 0x1);
	goto label_goto_2f;
	// 235    .line 234
label_cond_43:
label_goto_43:
	d = ( d + -0x1);
	//    .end local v0    # "d":I
	//    .local v1, "d":I
	if ( d <= this->count )
		goto label_cond_4e;
	stringRep->append(cVar0);
	d = d;
	//    .end local v1    # "d":I
	//    .restart local v0    # "d":I
	goto label_goto_43;
	// 255    .line 237
	// 256    .end local v0    # "d":I
	// 257    .restart local v1    # "d":I
label_cond_4e:
	return stringRep->toString();

}
// .method private isLongMIN_VALUE()Z
bool android::icu::text::DigitList::isLongMIN_VALUE()
{
	
	bool cVar0;
	int i;
	
	cVar0 = 0x0;
	if ( this->decimalAt != this->count )
		goto label_cond_d;
	if ( this->count == 0x13 )
		goto label_cond_e;
label_cond_d:
	return cVar0;
	// 289    .line 748
label_cond_e:
	i = 0x0;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= this->count )
		goto label_cond_21;
	if ( this->digits[i] == android::icu::text::DigitList::LONG_MIN_REP[i] )
		goto label_cond_1e;
	return cVar0;
	// 312    .line 748
label_cond_1e:
	i = ( i + 0x1);
	goto label_goto_f;
	// 318    .line 753
label_cond_21:
	return 0x1;

}
// .method private set(Ljava/lang/String;I)V
void android::icu::text::DigitList::set(std::shared_ptr<java::lang::String> rep,int maxCount)
{
	
	int cVar0;
	int leadingZerosAfterDecimal;
	int nonZeroDigitSeen;
	int i;
	int c;
	int cVar1;
	
	//    .param p1, "rep"    # Ljava/lang/String;
	//    .param p2, "maxCount"    # I
	cVar0 = -0x1;
	this->decimalAt = cVar0;
	this->count = 0x0;
	//    .local v1, "exponent":I
	leadingZerosAfterDecimal = 0x0;
	//    .local v3, "leadingZerosAfterDecimal":I
	nonZeroDigitSeen = 0x0;
	//    .local v4, "nonZeroDigitSeen":Z
	i = 0x0;
	//    .local v2, "i":I
	if ( rep->charAt(i) != 0x2d )
		goto label_cond_13;
	i = 0x1;
label_cond_13:
label_goto_13:
	if ( i >= rep->length() )
		goto label_cond_48;
	c = rep->charAt(i);
	//    .local v0, "c":C
	if ( c != 0x2e )
		goto label_cond_28;
	this->decimalAt = this->count;
label_cond_25:
label_goto_25:
	i = ( i + 0x1);
	goto label_goto_13;
	// 401    .line 427
label_cond_28:
	if ( c == 0x65 )
		goto label_cond_30;
	if ( c != 0x45 )
		goto label_cond_58;
label_cond_30:
	i = ( i + 0x1);
	if ( rep->charAt(i) != 0x2b )
		goto label_cond_3c;
	i = ( i + 0x1);
label_cond_3c:
	//    .end local v0    # "c":C
label_cond_48:
	if ( this->decimalAt != cVar0 )
		goto label_cond_50;
	this->decimalAt = this->count;
label_cond_50:
	this->decimalAt = (this->decimalAt +  (0x0 - leadingZerosAfterDecimal));
	return;
	// 466    .line 435
	// 467    .restart local v0    # "c":C
label_cond_58:
	if ( this->count >= maxCount )
		goto label_cond_25;
	if ( nonZeroDigitSeen )     
		goto label_cond_6b;
	if ( c == 0x30 )
		goto label_cond_82;
	nonZeroDigitSeen = 0x1;
label_goto_63:
	if ( nonZeroDigitSeen )     
		goto label_cond_6b;
	if ( this->decimalAt == cVar0 )
		goto label_cond_6b;
	leadingZerosAfterDecimal = ( leadingZerosAfterDecimal + 0x1);
label_cond_6b:
	if ( !(nonZeroDigitSeen) )  
		goto label_cond_25;
	this->ensureCapacity(( this->count + 0x1), this->count);
	cVar1 = this->count;
	this->count = ( cVar1 + 0x1);
	this->digits[cVar1] = (unsigned char)(c);
	goto label_goto_25;
	// 522    .line 437
label_cond_82:
	nonZeroDigitSeen = 0x0;
	goto label_goto_63;

}
// .method private setBigDecimalDigits(Ljava/lang/String;IZ)V
void android::icu::text::DigitList::setBigDecimalDigits(std::shared_ptr<java::lang::String> stringDigits,int cVar0,bool fixedPoint)
{
	
	int cVar0;
	
	//    .param p1, "stringDigits"    # Ljava/lang/String;
	//    .param p2, "maximumDigits"    # I
	//    .param p3, "fixedPoint"    # Z
	this->didRound = 0x0;
	this->set(stringDigits, stringDigits->length());
	if ( !(fixedPoint) )  
		goto label_cond_13;
	cVar0 = (cVar0 +  this->decimalAt);
	//    .end local p2    # "maximumDigits":I
label_cond_f:
label_goto_f:
	this->round(cVar0);
	return;
	// 563    .line 706
	// 564    .restart local p2    # "maximumDigits":I
label_cond_13:
	if ( cVar0 )     
		goto label_cond_f;
	cVar0 = -0x1;
	goto label_goto_f;

}
// .method private shouldRoundUp(I)Z
bool android::icu::text::DigitList::shouldRoundUp(int maximumDigits)
{
	
	int cVar0;
	bool cVar1;
	bool cVar2;
	int i;
	
	//    .param p1, "maximumDigits"    # I
	cVar0 = 0x35;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( maximumDigits >= this->count )
		goto label_cond_36;
	if ( this->digits[maximumDigits] <= cVar0 )
		goto label_cond_f;
	return cVar1;
	// 599    .line 476
label_cond_f:
	if ( this->digits[maximumDigits] != cVar0 )
		goto label_cond_36;
	i = ( maximumDigits + 0x1);
	//    .local v0, "i":I
label_goto_17:
	if ( i >= this->count )
		goto label_cond_27;
	if ( this->digits[i] == 0x30 )
		goto label_cond_24;
	return cVar1;
	// 628    .line 477
label_cond_24:
	i = ( i + 0x1);
	goto label_goto_17;
	// 634    .line 482
label_cond_27:
	if ( maximumDigits <= 0 )
		goto label_cond_34;
	if ( !(( this->digits[( maximumDigits + -0x1)] % 0x2)) )  
		goto label_cond_34;
label_goto_33:
	return cVar1;
label_cond_34:
	cVar1 = cVar2;
	goto label_goto_33;
	// 656    .line 485
	// 657    .end local v0    # "i":I
label_cond_36:
	return cVar2;

}
// .method public append(I)V
void android::icu::text::DigitList::append(int digit)
{
	
	int cVar0;
	
	//    .param p1, "digit"    # I
	this->ensureCapacity(( this->count + 0x1), this->count);
	cVar0 = this->count;
	this->count = ( cVar0 + 0x1);
	this->digits[cVar0] = (unsigned char)(digit);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DigitList::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::DigitList> other;
	int i;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return cVar0;
	// 710    .line 805
label_cond_5:
	if ( obj->instanceOf("android::icu::text::DigitList") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = obj;
	other->checkCast("android::icu::text::DigitList");
	//    .local v1, "other":Landroid/icu/text/DigitList;
	if ( this->count != other->count )
		goto label_cond_19;
	if ( this->decimalAt == other->decimalAt )
		goto label_cond_1a;
label_cond_19:
	return cVar1;
	// 744    .line 811
label_cond_1a:
	i = 0x0;
	//    .local v0, "i":I
label_goto_1b:
	if ( i >= this->count )
		goto label_cond_2d;
	if ( this->digits[i] == other->digits[i] )
		goto label_cond_2a;
	return cVar1;
	// 768    .line 811
label_cond_2a:
	i = ( i + 0x1);
	goto label_goto_1b;
	// 774    .line 814
label_cond_2d:
	return cVar0;

}
// .method public getBigDecimalICU(Z)Landroid/icu/math/BigDecimal;
std::shared_ptr<android::icu::math::BigDecimal> android::icu::text::DigitList::getBigDecimalICU(bool isPositive)
{
	
	long long scale;
	int numDigits;
	long long numShift;
	std::shared_ptr<java::lang::StringBuilder> significantDigits;
	int i;
	std::shared_ptr<java::math::BigInteger> unscaledVal;
	std::shared_ptr<android::icu::math::BigDecimal> cVar1;
	std::shared_ptr<android::icu::math::BigDecimal> cVar0;
	std::shared_ptr<android::icu::math::BigDecimal> cVar2;
	
	//    .param p1, "isPositive"    # Z
	if ( !(this->isZero()) )  
		goto label_cond_d;
	return android::icu::math::BigDecimal::valueOf(0x0);
	// 800    .line 255
label_cond_d:
	scale = ((long long)(this->count) - (long long)(this->decimalAt));
	//    .local v4, "scale":J
	if ( (scale > 0x0) <= 0 )
		goto label_cond_66;
	numDigits = this->count;
	//    .local v1, "numDigits":I
	if ( (scale > 0x7fffffff) <= 0 )
		goto label_cond_33;
	numShift = (scale - 0x7fffffff);
	//    .local v2, "numShift":J
	if ( (numShift > (long long)(this->count)) >= 0 )
		goto label_cond_4f;
	numDigits = (int)(((long long)(numDigits) -  numShift));
	//    .end local v2    # "numShift":J
label_cond_33:
	significantDigits = std::make_shared<java::lang::StringBuilder>(( numDigits + 0x1));
	//    .local v6, "significantDigits":Ljava/lang/StringBuilder;
	if ( isPositive )     
		goto label_cond_41;
	significantDigits->append(0x2d);
label_cond_41:
	i = 0x0;
	//    .local v0, "i":I
label_goto_42:
	if ( i >= numDigits )
		goto label_cond_56;
	significantDigits->append((char)(this->digits[i]));
	i = ( i + 0x1);
	goto label_goto_42;
	// 893    .line 265
	// 894    .end local v0    # "i":I
	// 895    .end local v6    # "significantDigits":Ljava/lang/StringBuilder;
	// 896    .restart local v2    # "numShift":J
label_cond_4f:
	cVar0 = std::make_shared<android::icu::math::BigDecimal>(0x0);
	return cVar0;
	// 906    .line 275
	// 907    .end local v2    # "numShift":J
	// 908    .restart local v0    # "i":I
	// 909    .restart local v6    # "significantDigits":Ljava/lang/StringBuilder;
label_cond_56:
	unscaledVal = std::make_shared<java::math::BigInteger>(significantDigits->toString());
	//    .local v7, "unscaledVal":Ljava/math/BigInteger;
	cVar1 = std::make_shared<android::icu::math::BigDecimal>(unscaledVal, (int)(scale));
	return cVar1;
	// 929    .line 278
	// 930    .end local v0    # "i":I
	// 931    .end local v1    # "numDigits":I
	// 932    .end local v6    # "significantDigits":Ljava/lang/StringBuilder;
	// 933    .end local v7    # "unscaledVal":Ljava/math/BigInteger;
label_cond_66:
	cVar2 = std::make_shared<android::icu::math::BigDecimal>(this->getStringRep(isPositive));
	return cVar2;

}
// .method public getBigInteger(Z)Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> android::icu::text::DigitList::getBigInteger(bool isPositive)
{
	
	int len;
	std::shared<std::vector<char[]>> text;
	int n;
	int i;
	std::shared_ptr<java::math::BigInteger> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .param p1, "isPositive"    # Z
	if ( !(this->isZero()) )  
		goto label_cond_d;
	return java::math::BigInteger::valueOf(0x0);
	// 966    .line 188
label_cond_d:
	if ( this->decimalAt <= this->count )
		goto label_cond_34;
	len = this->decimalAt;
	//    .local v1, "len":I
label_goto_15:
	if ( isPositive )     
		goto label_cond_19;
label_cond_19:
	text = std::make_shared<std::vector<char[]>>(len);
	//    .local v3, "text":[C
	n = 0x0;
	//    .local v2, "n":I
	if ( isPositive )     
		goto label_cond_46;
	text[0x0] = 0x2d;
	i = 0x0;
	//    .local v0, "i":I
label_goto_24:
	if ( i >= this->count )
		goto label_cond_37;
	text[( i + 0x1)] = (char)(this->digits[i]);
	i = ( i + 0x1);
	goto label_goto_24;
	// 1028    .line 188
	// 1029    .end local v0    # "i":I
	// 1030    .end local v1    # "len":I
	// 1031    .end local v2    # "n":I
	// 1032    .end local v3    # "text":[C
label_cond_34:
	//    .restart local v1    # "len":I
	goto label_goto_15;
	// 1039    .line 199
	// 1040    .restart local v0    # "i":I
	// 1041    .restart local v2    # "n":I
	// 1042    .restart local v3    # "text":[C
label_cond_37:
	n = ( this->count + 0x1);
label_goto_3b:
	i = n;
label_goto_3c:
	if ( i >= text->size() )
		goto label_cond_58;
	text[i] = 0x30;
	i = ( i + 0x1);
	goto label_goto_3c;
	// 1067    .line 201
	// 1068    .end local v0    # "i":I
label_cond_46:
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_47:
	if ( i >= this->count )
		goto label_cond_55;
	text[i] = (char)(this->digits[i]);
	i = ( i + 0x1);
	goto label_goto_47;
	// 1092    .line 204
label_cond_55:
	n = this->count;
	goto label_goto_3b;
	// 1098    .line 209
label_cond_58:
	cVar1 = std::make_shared<java::lang::String>(text);
	cVar0 = std::make_shared<java::math::BigInteger>(cVar1);
	return cVar0;

}
// .method public getDigitValue(I)B
unsigned char android::icu::text::DigitList::getDigitValue(int i)
{
	
	//    .param p1, "i"    # I
	return (unsigned char)(( this->digits[i] + -0x30));

}
// .method public final getDouble()D
double android::icu::text::DigitList::getDouble()
{
	
	std::shared_ptr<java::lang::StringBuilder> temp;
	int i;
	
	if ( this->count )     
		goto label_cond_7;
	return 0x0;
	// 1141    .line 131
label_cond_7:
	temp = std::make_shared<java::lang::StringBuilder>(this->count);
	//    .local v1, "temp":Ljava/lang/StringBuilder;
	temp->append(0x2e);
	i = 0x0;
	//    .local v0, "i":I
label_goto_14:
	if ( i >= this->count )
		goto label_cond_23;
	temp->append((char)(this->digits[i]));
	i = ( i + 0x1);
	goto label_goto_14;
	// 1176    .line 134
label_cond_23:
	temp->append(0x45);
	temp->append(java::lang::Integer::toString(this->decimalAt));
	return java::lang::Double::valueOf(temp->toString())->doubleValue();

}
// .method public final getLong()J
long long android::icu::text::DigitList::getLong()
{
	
	std::shared_ptr<java::lang::StringBuilder> temp;
	int i;
	char cVar0;
	
	if ( this->count )     
		goto label_cond_7;
	return 0x0;
	// 1220    .line 153
label_cond_7:
	if ( !(this->isLongMIN_VALUE()) )  
		goto label_cond_10;
	return -0x8000000000000000L;
	// 1232    .line 155
label_cond_10:
	temp = std::make_shared<java::lang::StringBuilder>(this->count);
	//    .local v1, "temp":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_18:
	if ( i >= this->decimalAt )
		goto label_cond_2e;
	if ( i >= this->count )
		goto label_cond_2b;
	cVar0 = (char)(this->digits[i]);
label_goto_25:
	temp->append(cVar0);
	i = ( i + 0x1);
	goto label_goto_18;
	// 1269    .line 158
label_cond_2b:
	cVar0 = 0x30;
	goto label_goto_25;
	// 1275    .line 160
label_cond_2e:
	return java::lang::Long::parseLong(temp->toString());

}
// .method public hashCode()I
int android::icu::text::DigitList::hashCode()
{
	
	int hashcode;
	int i;
	
	hashcode = this->decimalAt;
	//    .local v0, "hashcode":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_3:
	if ( i >= this->count )
		goto label_cond_12;
	hashcode = (( hashcode * 0x25) + this->digits[i]);
	i = ( i + 0x1);
	goto label_goto_3;
	// 1319    .line 826
label_cond_12:
	return hashcode;

}
// .method isIntegral()Z
bool android::icu::text::DigitList::isIntegral()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
label_goto_2:
	if ( this->count <= 0 )
		goto label_cond_19;
	if ( this->digits[( this->count + -0x1)] != 0x30 )
		goto label_cond_19;
	this->count = ( this->count + -0x1);
	goto label_goto_2;
	// 1358    .line 290
label_cond_19:
	if ( !(this->count) )  
		goto label_cond_23;
	if ( this->decimalAt <  this->count )
		goto label_cond_24;
label_cond_23:
label_goto_23:
	return cVar0;
label_cond_24:
	cVar0 = 0x0;
	goto label_goto_23;

}
// .method isZero()Z
bool android::icu::text::DigitList::isZero()
{
	
	int i;
	
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= this->count )
		goto label_cond_12;
	if ( this->digits[i] == 0x30 )
		goto label_cond_f;
	return 0x0;
label_cond_f:
	i = ( i + 0x1);
	goto label_goto_1;
	// 1410    .line 96
label_cond_12:
	return 0x1;

}
// .method public final round(I)V
void android::icu::text::DigitList::round(int cVar2)
{
	
	bool cVar0;
	int cVar2;
	std::shared_ptr<unsigned char[]> cVar4;
	
	//    .param p1, "maximumDigits"    # I
	cVar0 = 0x1;
	if ( cVar2 < 0 ) 
		goto label_cond_25;
	if ( cVar2 >= this->count )
		goto label_cond_25;
	if ( !(this->shouldRoundUp(cVar2)) )  
		goto label_cond_23;
label_cond_e:
	cVar2 = ( cVar2 + -0x1);
	if ( cVar2 >= 0 )
		goto label_cond_3c;
	this->digits[0x0] = 0x31;
	this->decimalAt = ( this->decimalAt + 0x1);
	cVar2 = 0x0;
	this->didRound = cVar0;
label_goto_21:
	cVar2 = ( cVar2 + 0x1);
label_cond_23:
	this->count = cVar2;
label_cond_25:
label_goto_25:
	if ( this->count <= cVar0 )
		goto label_cond_50;
	if ( this->digits[( this->count + -0x1)] != 0x30 )
		goto label_cond_50;
	this->count = ( this->count + -0x1);
	goto label_goto_25;
	// 1503    .line 517
label_cond_3c:
	cVar4 = this->digits;
	cVar4[cVar2] = (unsigned char)(( cVar4[cVar2] + 0x1));
	this->didRound = cVar0;
	if ( this->digits[cVar2] >  0x39 )
		goto label_cond_e;
	goto label_goto_21;
	// 1529    .line 532
label_cond_50:
	return;

}
// .method final set(DIZ)V
void android::icu::text::DigitList::set(double cVar2,int cVar3,bool fixedPoint)
{
	
	int cVar0;
	bool cVar1;
	double cVar2;
	int cVar3;
	
	//    .param p1, "source"    # D
	//    .param p3, "maximumDigits"    # I
	//    .param p4, "fixedPoint"    # Z
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( (cVar2 < 0x0) )     
		goto label_cond_a;
	cVar2 = 0x0;
label_cond_a:
	//    .local v0, "rep":Ljava/lang/String;
	this->didRound = cVar1;
	this->set(java::lang::Double::toString(cVar2), 0x13);
	if ( !(fixedPoint) )  
		goto label_cond_3c;
	if ( (0 - this->decimalAt) <= cVar3 )
		goto label_cond_1f;
	this->count = cVar1;
	return;
	// 1585    .line 383
label_cond_1f:
	if ( (0 - this->decimalAt) != cVar3 )
		goto label_cond_3c;
	if ( !(this->shouldRoundUp(cVar1)) )  
		goto label_cond_39;
	this->count = cVar0;
	this->decimalAt = ( this->decimalAt + 0x1);
	this->digits[cVar1] = 0x31;
label_goto_38:
	return;
	// 1621    .line 389
label_cond_39:
	this->count = cVar1;
	goto label_goto_38;
	// 1627    .line 397
label_cond_3c:
label_goto_3c:
	if ( this->count <= cVar0 )
		goto label_cond_53;
	if ( this->digits[( this->count + -0x1)] != 0x30 )
		goto label_cond_53;
	this->count = ( this->count + -0x1);
	goto label_goto_3c;
	// 1655    .line 402
label_cond_53:
	if ( !(fixedPoint) )  
		goto label_cond_5c;
	cVar3 = (cVar3 +  this->decimalAt);
	//    .end local p3    # "maximumDigits":I
label_cond_58:
label_goto_58:
	this->round(cVar3);
	return;
	// 1671    .line 402
	// 1672    .restart local p3    # "maximumDigits":I
label_cond_5c:
	if ( cVar3 )     
		goto label_cond_58;
	cVar3 = -0x1;
	goto label_goto_58;

}
// .method public final set(J)V
void android::icu::text::DigitList::set(long long source)
{
	
	//    .param p1, "source"    # J
	this->set(source, 0x0);
	return;

}
// .method public final set(JI)V
void android::icu::text::DigitList::set(long long source,int maximumDigits)
{
	
	int left;
	long long source;
	int right;
	
	//    .param p1, "source"    # J
	//    .param p3, "maximumDigits"    # I
	this->didRound = 0x0;
	if ( (source > 0x0) > 0 ) 
		goto label_cond_2f;
	if ( (source > -0x8000000000000000L) )     
		goto label_cond_28;
	this->count = 0x13;
	this->decimalAt = 0x13;
	java::lang::System::arraycopy(android::icu::text::DigitList::LONG_MIN_REP, 0x0, this->digits, 0x0, this->count);
label_goto_22:
	if ( maximumDigits <= 0 )
		goto label_cond_27;
	this->round(maximumDigits);
label_cond_27:
	return;
	// 1752    .line 578
label_cond_28:
	this->count = 0x0;
	this->decimalAt = 0x0;
	goto label_goto_22;
	// 1765    .line 582
label_cond_2f:
	left = 0x13;
	//    .local v0, "left":I
label_goto_31:
	if ( (source > 0x0) <= 0 )
		goto label_cond_4a;
	left = ( left + -0x1);
	this->digits[left] = (unsigned char)((int)(((source % 0xa) +  0x30)));
	source = (source /  0xa);
	goto label_goto_31;
	// 1804    .line 588
label_cond_4a:
	this->decimalAt = ( left - 0x13);
	right = 0x12;
	//    .local v1, "right":I
label_goto_50:
	if ( this->digits[right] != 0x30 )
		goto label_cond_5b;
	right = ( right + -0x1);
	goto label_goto_50;
	// 1827    .line 593
label_cond_5b:
	this->count = ( (right - left) + 0x1);
	java::lang::System::arraycopy(this->digits, left, this->digits, 0x0, this->count);
	goto label_goto_22;

}
// .method public final set(Landroid/icu/math/BigDecimal;IZ)V
void android::icu::text::DigitList::set(std::shared_ptr<android::icu::math::BigDecimal> source,int maximumDigits,bool fixedPoint)
{
	
	//    .param p1, "source"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "maximumDigits"    # I
	//    .param p3, "fixedPoint"    # Z
	this->setBigDecimalDigits(source->toString(), maximumDigits, fixedPoint);
	return;

}
// .method public final set(Ljava/math/BigDecimal;IZ)V
void android::icu::text::DigitList::set(std::shared_ptr<java::math::BigDecimal> source,int maximumDigits,bool fixedPoint)
{
	
	//    .param p1, "source"    # Ljava/math/BigDecimal;
	//    .param p2, "maximumDigits"    # I
	//    .param p3, "fixedPoint"    # Z
	this->setBigDecimalDigits(source->toString(), maximumDigits, fixedPoint);
	return;

}
// .method public final set(Ljava/math/BigInteger;I)V
void android::icu::text::DigitList::set(std::shared_ptr<java::math::BigInteger> source,int maximumDigits)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::String> stringDigits;
	int cVar1;
	int i;
	
	//    .param p1, "source"    # Ljava/math/BigInteger;
	//    .param p2, "maximumDigits"    # I
	cVar0 = 0x0;
	stringDigits = source->toString();
	//    .local v2, "stringDigits":Ljava/lang/String;
	cVar1 = stringDigits->length();
	this->decimalAt = cVar1;
	this->count = cVar1;
	this->didRound = cVar0;
label_goto_f:
	if ( this->count <= 0x1 )
		goto label_cond_27;
	if ( stringDigits->charAt(( this->count + -0x1)) != 0x30 )
		goto label_cond_27;
	this->count = ( this->count + -0x1);
	goto label_goto_f;
	// 1939    .line 616
label_cond_27:
	0x0;
	//    .local v1, "offset":I
	if ( stringDigits->charAt(cVar0) != 0x2d )
		goto label_cond_3d;
	this->count = ( this->count + -0x1);
	this->decimalAt = ( this->decimalAt + -0x1);
label_cond_3d:
	this->ensureCapacity(this->count, cVar0);
	i = 0x0;
	//    .local v0, "i":I
label_goto_43:
	if ( i >= this->count )
		goto label_cond_55;
	this->digits[i] = (unsigned char)(stringDigits->charAt((i + 0x1)));
	i = ( i + 0x1);
	goto label_goto_43;
	// 2003    .line 628
label_cond_55:
	if ( maximumDigits <= 0 )
		goto label_cond_5a;
	this->round(maximumDigits);
label_cond_5a:
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DigitList::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	int i;
	
	if ( !(this->isZero()) )  
		goto label_cond_a;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("0"));
	// 2029    .line 832
label_cond_a:
	buf = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("0.")));
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v1, "i":I
label_goto_13:
	if ( i >= this->count )
		goto label_cond_22;
	buf->append((char)(this->digits[i]));
	i = ( i + 0x1);
	goto label_goto_13;
	// 2059    .line 834
label_cond_22:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("x10^")));
	buf->append(this->decimalAt);
	return buf->toString();

}
// .method public wasRounded()Z
bool android::icu::text::DigitList::wasRounded()
{
	
	return this->didRound;

}


