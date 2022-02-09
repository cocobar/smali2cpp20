// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\DateNumberFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.DateNumberFormat.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Long.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Arrays.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::DateNumberFormat::CACHE = nullptr;
static android::icu::impl::DateNumberFormat::DECIMAL_BUF_SIZE = 0x14;
static android::icu::impl::DateNumberFormat::PARSE_THRESHOLD = 0xccccccccccccccbL;
static android::icu::impl::DateNumberFormat::serialVersionUID = -0x57a5d92a02d4dc49L;
// .method static constructor <clinit>()V
void android::icu::impl::DateNumberFormat::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::SimpleCache> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::impl::DateNumberFormat::CACHE = cVar0;
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;CLjava/lang/String;)V
android::icu::impl::DateNumberFormat::DateNumberFormat(std::shared_ptr<android::icu::util::ULocale> loc,char zeroDigit,std::shared_ptr<java::lang::String> nsName)
{
	
	std::shared_ptr<java::lang::StringBuffer> buf;
	int i;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "zeroDigit"    # C
	//    .param p3, "nsName"    # Ljava/lang/String;
	// 065    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->positiveOnly = 0x0;
	this->decimalBuf = std::make_shared<std::vector<char[]>>(0x14);
	buf = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "buf":Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v1, "i":I
label_goto_12:
	if ( i >= 0xa )
		goto label_cond_1f;
	buf->append((char)((zeroDigit + i)));
	i = ( i + 0x1);
	goto label_goto_12;
	// 106    .line 60
label_cond_1f:
	this->initialize(loc, buf->toString(), nsName);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)V
android::icu::impl::DateNumberFormat::DateNumberFormat(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> digitString,std::shared_ptr<java::lang::String> nsName)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "digitString"    # Ljava/lang/String;
	//    .param p3, "nsName"    # Ljava/lang/String;
	// 126    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->positiveOnly = 0x0;
	this->decimalBuf = std::make_shared<std::vector<char[]>>(0x14);
	this->initialize(loc, digitString, nsName);
	return;

}
// .method private initialize(Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;)V
void android::icu::impl::DateNumberFormat::initialize(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> digitString,std::shared_ptr<java::lang::String> nsName)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<char[]> elems;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared<std::vector<char[]>> elems;
	int i;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "digitString"    # Ljava/lang/String;
	//    .param p3, "nsName"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = 0xa;
	elems = android::icu::impl::DateNumberFormat::CACHE->get(loc);
	elems->checkCast("char[]");
	//    .local v0, "elems":[C
	if ( elems )     
		goto label_cond_6b;
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), loc);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v5, "rb":Landroid/icu/impl/ICUResourceBundle;
	try {
	//label_try_start_16:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_34:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_45;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_16 .. :try_end_34} :catch_45
	//    .local v4, "minusString":Ljava/lang/String;
label_goto_35:
	elems = std::make_shared<std::vector<char[]>>(0xb);
	i = 0x0;
	//    .local v3, "i":I
label_goto_3a:
	if ( i >= cVar1 )
		goto label_cond_60;
	elems[i] = digitString->charAt(i);
	i = ( i + 0x1);
	goto label_goto_3a;
	// 239    .line 71
	// 240    .end local v3    # "i":I
	// 241    .end local v4    # "minusString":Ljava/lang/String;
label_catch_45:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/util/MissingResourceException;
	if ( nsName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("latn"))) )     
		goto label_cond_5c;
	try {
	//label_try_start_4f:
	//label_try_end_55:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_57;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_4f .. :try_end_55} :catch_57
	//    .restart local v4    # "minusString":Ljava/lang/String;
	goto label_goto_35;
	// 268    .line 75
	// 269    .end local v4    # "minusString":Ljava/lang/String;
label_catch_57:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ex1":Ljava/util/MissingResourceException;
	//    .restart local v4    # "minusString":Ljava/lang/String;
	goto label_goto_35;
	// 280    .line 79
	// 281    .end local v2    # "ex1":Ljava/util/MissingResourceException;
	// 282    .end local v4    # "minusString":Ljava/lang/String;
label_cond_5c:
	//    .restart local v4    # "minusString":Ljava/lang/String;
	goto label_goto_35;
	// 289    .line 86
	// 290    .end local v1    # "ex":Ljava/util/MissingResourceException;
	// 291    .restart local v3    # "i":I
label_cond_60:
	elems[cVar1] = minusString->charAt(cVar0);
	android::icu::impl::DateNumberFormat::CACHE->put(loc, elems);
	//    .end local v3    # "i":I
	//    .end local v4    # "minusString":Ljava/lang/String;
	//    .end local v5    # "rb":Landroid/icu/impl/ICUResourceBundle;
label_cond_6b:
	this->digits = std::make_shared<std::vector<char[]>>(cVar1);
	java::lang::System::arraycopy(elems, cVar0, this->digits, cVar0, cVar1);
	this->zeroDigit = this->digits[cVar0];
	this->minusSign = elems[cVar1];
	return;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::impl::DateNumberFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 338        value = {
	// 339            Ljava/io/IOException;,
	// 340            Ljava/lang/ClassNotFoundException;
	// 341        }
	// 342    .end annotation
	stream->defaultReadObject();
	if ( this->digits )     
		goto label_cond_c;
	this->setZeroDigit(this->zeroDigit);
label_cond_c:
	this->decimalBuf = std::make_shared<std::vector<char[]>>(0x14);
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::DateNumberFormat::clone()
{
	
	std::shared_ptr<android::icu::impl::DateNumberFormat> dnfmt;
	std::shared_ptr<char[]> cVar0;
	
	dnfmt = this->clone();
	dnfmt->checkCast("android::icu::impl::DateNumberFormat");
	//    .local v0, "dnfmt":Landroid/icu/impl/DateNumberFormat;
	cVar0 = this->digits->clone();
	cVar0->checkCast("char[]");
	dnfmt->digits = cVar0;
	dnfmt->decimalBuf = std::make_shared<std::vector<char[]>>(0x14);
	return dnfmt;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::DateNumberFormat::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::DateNumberFormat> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(obj) )  
		goto label_cond_11;
	if ( ( this->equals(obj) ^ 0x1) )     
		goto label_cond_11;
	if ( !(( obj->instanceOf("android::icu::impl::DateNumberFormat") ^ 0x1)) )  
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	other = obj;
	other->checkCast("android::icu::impl::DateNumberFormat");
	//    .local v0, "other":Landroid/icu/impl/DateNumberFormat;
	if ( this->maxIntDigits != other->maxIntDigits )
		goto label_cond_35;
	if ( this->minIntDigits != other->minIntDigits )
		goto label_cond_35;
	if ( this->minusSign != other->minusSign )
		goto label_cond_35;
	if ( this->positiveOnly != other->positiveOnly )
		goto label_cond_35;
	cVar1 = java::util::Arrays::equals(this->digits, other->digits);
label_cond_35:
	return cVar1;

}
// .method public format(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::DateNumberFormat::format(double number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "number"    # D
	//    .param p3, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("StringBuffer format(double, StringBuffer, FieldPostion) is not implemented")));
	// throw
	throw cVar0;

}
// .method public format(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::DateNumberFormat::format(long long cVar1,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	int cVar0;
	long long cVar1;
	int number;
	int limit;
	int index;
	int padding;
	int length;
	
	//    .param p1, "numberL"    # J
	//    .param p3, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	cVar0 = 0x0;
	if ( (cVar1 > 0x0) >= 0 )
		goto label_cond_d;
	toAppendTo->append(this->minusSign);
	cVar1 = (0 - cVar1);
label_cond_d:
	number = (int)(cVar1);
	//    .local v3, "number":I
	if ( this->decimalBuf->size() >= this->maxIntDigits )
		goto label_cond_3f;
	limit = this->decimalBuf->size();
	//    .local v2, "limit":I
label_goto_18:
	index = ( limit + -0x1);
	//    .local v0, "index":I
label_goto_1a:
	this->decimalBuf[index] = this->digits[( number % 0xa)];
	number = ( number / 0xa);
	if ( !(index) )  
		goto label_cond_2a;
	if ( number )     
		goto label_cond_42;
label_cond_2a:
	padding = (this->minIntDigits - (limit - index));
	//    .local v4, "padding":I
label_goto_30:
	if ( padding <= 0 )
		goto label_cond_45;
	index = ( index + -0x1);
	this->decimalBuf[index] = this->digits[cVar0];
	padding = ( padding + -0x1);
	goto label_goto_30;
	// 597    .line 162
	// 598    .end local v0    # "index":I
	// 599    .end local v2    # "limit":I
	// 600    .end local v4    # "padding":I
label_cond_3f:
	limit = this->maxIntDigits;
	//    .restart local v2    # "limit":I
	goto label_goto_18;
	// 607    .line 170
	// 608    .restart local v0    # "index":I
label_cond_42:
	index = ( index + -0x1);
	goto label_goto_1a;
	// 614    .line 176
	// 615    .restart local v4    # "padding":I
label_cond_45:
	length = (limit - index);
	//    .local v1, "length":I
	toAppendTo->append(this->decimalBuf, index, length);
	pos->setBeginIndex(cVar0);
	if ( pos->getField() )     
		goto label_cond_59;
	pos->setEndIndex(length);
label_goto_58:
	return toAppendTo;
	// 642    .line 182
label_cond_59:
	pos->setEndIndex(cVar0);
	goto label_goto_58;

}
// .method public format(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::DateNumberFormat::format(std::shared_ptr<android::icu::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "number"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("StringBuffer format(BigDecimal, StringBuffer, FieldPostion) is not implemented")));
	// throw
	throw cVar0;

}
// .method public format(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::DateNumberFormat::format(std::shared_ptr<java::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "number"    # Ljava/math/BigDecimal;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("StringBuffer format(BigDecimal, StringBuffer, FieldPostion) is not implemented")));
	// throw
	throw cVar0;

}
// .method public format(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::DateNumberFormat::format(std::shared_ptr<java::math::BigInteger> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "number"    # Ljava/math/BigInteger;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("StringBuffer format(BigInteger, StringBuffer, FieldPostion) is not implemented")));
	// throw
	throw cVar0;

}
// .method public getDigits()[C
char android::icu::impl::DateNumberFormat::getDigits()
{
	
	std::shared_ptr<char[]> cVar0;
	
	cVar0 = this->digits->clone();
	cVar0->checkCast("char[]");
	return cVar0;

}
// .method public getMaximumIntegerDigits()I
int android::icu::impl::DateNumberFormat::getMaximumIntegerDigits()
{
	
	return this->maxIntDigits;

}
// .method public getMinimumIntegerDigits()I
int android::icu::impl::DateNumberFormat::getMinimumIntegerDigits()
{
	
	return this->minIntDigits;

}
// .method public getZeroDigit()C
char android::icu::impl::DateNumberFormat::getZeroDigit()
{
	
	return this->zeroDigit;

}
// .method public hashCode()I
int android::icu::impl::DateNumberFormat::hashCode()
{
	
	return this->hashCode();

}
// .method public parse(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::impl::DateNumberFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition)
{
	
	long long num;
	int base;
	int offset;
	int ch;
	int digit;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	num = 0x0;
	//    .local v6, "num":J
	//    .local v10, "sawNumber":Z
	//    .local v5, "negative":Z
	base = parsePosition->getIndex();
	//    .local v2, "base":I
	offset = 0x0;
	//    .local v8, "offset":I
label_goto_9:
	if ( (base + offset) >= text->length() )
		goto label_cond_27;
	ch = text->charAt((base + offset));
	//    .local v3, "ch":C
	if ( offset )     
		goto label_cond_3f;
	if ( ch != this->minusSign )
		goto label_cond_3f;
	if ( !(this->positiveOnly) )  
		goto label_cond_3b;
	//    .end local v3    # "ch":C
label_cond_27:
	//    .local v9, "result":Ljava/lang/Number;
	if ( !(0x0) )  
		goto label_cond_3a;
	if ( !(0x0) )  
		goto label_cond_2f;
	num = (num *  -0x1);
label_cond_2f:
	//    .local v9, "result":Ljava/lang/Number;
	parsePosition->setIndex((base + offset));
	//    .end local v9    # "result":Ljava/lang/Number;
label_cond_3a:
	return 0x0;
	// 857    .line 223
	// 858    .restart local v3    # "ch":C
label_cond_3b:
	0x1;
label_goto_3c:
	offset = ( offset + 0x1);
	goto label_goto_9;
	// 868    .line 225
label_cond_3f:
	digit = (ch - this->digits[0x0]);
	//    .local v4, "digit":I
	if ( digit < 0 ) 
		goto label_cond_4e;
	if ( 0x9 >= digit )
		goto label_cond_52;
label_cond_4e:
	digit = android::icu::lang::UCharacter::digit(ch);
label_cond_52:
	if ( digit < 0 ) 
		goto label_cond_58;
	if ( 0x9 >= digit )
		goto label_cond_65;
label_cond_58:
	digit = 0x0;
label_goto_59:
	if ( digit >= 0xa )
		goto label_cond_65;
	if ( ch != this->digits[digit] )
		goto label_cond_7c;
label_cond_65:
	if ( digit < 0 ) 
		goto label_cond_27;
	if ( digit >  0x9 )
		goto label_cond_27;
	if ( (num > 0xccccccccccccccbL) >= 0 )
		goto label_cond_27;
	0x1;
	num = ((0xa *  num) + (long long)(digit));
	goto label_goto_3c;
	// 949    .line 230
label_cond_7c:
	digit = ( digit + 0x1);
	goto label_goto_59;

}
// .method public setMaximumIntegerDigits(I)V
void android::icu::impl::DateNumberFormat::setMaximumIntegerDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->maxIntDigits = newValue;
	return;

}
// .method public setMinimumIntegerDigits(I)V
void android::icu::impl::DateNumberFormat::setMinimumIntegerDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->minIntDigits = newValue;
	return;

}
// .method public setParsePositiveOnly(Z)V
void android::icu::impl::DateNumberFormat::setParsePositiveOnly(bool isPositiveOnly)
{
	
	//    .param p1, "isPositiveOnly"    # Z
	this->positiveOnly = isPositiveOnly;
	return;

}
// .method public setZeroDigit(C)V
void android::icu::impl::DateNumberFormat::setZeroDigit(char zero)
{
	
	int cVar0;
	int i;
	
	//    .param p1, "zero"    # C
	cVar0 = 0xa;
	this->zeroDigit = zero;
	if ( this->digits )     
		goto label_cond_c;
	this->digits = std::make_shared<std::vector<char[]>>(cVar0);
label_cond_c:
	this->digits[0x0] = zero;
	i = 0x1;
	//    .local v0, "i":I
label_goto_12:
	if ( i >= cVar0 )
		goto label_cond_1e;
	this->digits[i] = (char)((zero + i));
	i = ( i + 0x1);
	goto label_goto_12;
	// 1041    .line 135
label_cond_1e:
	return;

}


