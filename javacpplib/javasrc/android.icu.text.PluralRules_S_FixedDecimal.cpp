// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$FixedDecimal.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_Operand.h"
#include "java.io.NotSerializableException.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Double.h"
#include "java.lang.Integer.h"
#include "java.lang.Math.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Locale.h"

static android::icu::text::PluralRules_S_FixedDecimal::_android_icu_text_PluralRules_S_OperandSwitchesValues = nullptr;
static android::icu::text::PluralRules_S_FixedDecimal::MAX = 0xde0b6b3a7640000L;
static android::icu::text::PluralRules_S_FixedDecimal::MAX_INTEGER_PART = 0x3b9aca00L;
static android::icu::text::PluralRules_S_FixedDecimal::serialVersionUID = -0x42016b294abcff1dL;
// .method static synthetic -get0(Landroid/icu/text/PluralRules$FixedDecimal;)I
int android::icu::text::PluralRules_S_FixedDecimal::_get0(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/PluralRules$FixedDecimal;
	return _this->baseFactor;

}
// .method private static synthetic -getandroid-icu-text-PluralRules$OperandSwitchesValues()[I
int android::icu::text::PluralRules_S_FixedDecimal::_getandroid_icu_text_PluralRules_S_OperandSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::PluralRules_S_FixedDecimal::_android_icu_text_PluralRules_S_OperandSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::PluralRules_S_FixedDecimal::_android_icu_text_PluralRules_S_OperandSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::PluralRules_S_Operand::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::PluralRules_S_Operand::f->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_5c
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::PluralRules_S_Operand::i->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_5a
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::PluralRules_S_Operand::j->ordinal()] = 0x6;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_58;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_58
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::text::PluralRules_S_Operand::n->ordinal()] = 0x7;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_56;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_56
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::text::PluralRules_S_Operand::t->ordinal()] = 0x3;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_54;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_54
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::text::PluralRules_S_Operand::v->ordinal()] = 0x4;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_52;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_52
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[android::icu::text::PluralRules_S_Operand::w->ordinal()] = 0x5;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_50;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_50
label_goto_4d:
	android::icu::text::PluralRules_S_FixedDecimal::_android_icu_text_PluralRules_S_OperandSwitchesValues = cVar0;
	return cVar0;
label_catch_50:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_52:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_54:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_56:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_58:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_5a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_5c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method public constructor <init>(D)V
android::icu::text::PluralRules_S_FixedDecimal::PluralRules_S_FixedDecimal(double n)
{
	
	//    .param p1, "n"    # D
	//    .annotation runtime Ljava/lang/Deprecated;
	// 260    .end annotation
	android::icu::text::PluralRules_S_FixedDecimal::(n, android::icu::text::PluralRules_S_FixedDecimal::decimals(n));
	return;

}
// .method public constructor <init>(DI)V
android::icu::text::PluralRules_S_FixedDecimal::PluralRules_S_FixedDecimal(double n,int v)
{
	
	//    .param p1, "n"    # D
	//    .param p3, "v"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 279    .end annotation
	android::icu::text::PluralRules_S_FixedDecimal::(n, v, (long long)(android::icu::text::PluralRules_S_FixedDecimal::getFractionalDigits(n, v)));
	return;

}
// .method public constructor <init>(DIJ)V
android::icu::text::PluralRules_S_FixedDecimal::PluralRules_S_FixedDecimal(double n,int v,long long f)
{
	
	bool cVar0;
	double cVar1;
	long long cVar2;
	bool cVar3;
	long long fdwtz;
	int trimmedCount;
	
	//    .param p1, "n"    # D
	//    .param p3, "v"    # I
	//    .param p4, "f"    # J
	//    .annotation runtime Ljava/lang/Deprecated;
	// 307    .end annotation
	// 311    invoke-direct {p0}, Ljava/lang/Number;-><init>()V
	if ( (n > 0x0) >= 0 )
		goto label_cond_4b;
	cVar0 = 0x1;
label_goto_a:
	this->isNegative = cVar0;
	if ( !(this->isNegative) )  
		goto label_cond_4d;
	cVar1 = (0.0 - n);
label_goto_11:
	this->source = cVar1;
	this->visibleDecimalDigitCount = v;
	this->decimalDigits = f;
	if ( (n < 0x43abc16d674ec800L) <= 0 )
		goto label_cond_4f;
	cVar2 = 0xde0b6b3a7640000L;
label_goto_25:
	this->integerValue = cVar2;
	if ( (this->source < (double)(this->integerValue)) )     
		goto label_cond_51;
	cVar3 = 0x1;
label_goto_31:
	this->hasIntegerValue = cVar3;
	if ( (f > 0x0) )     
		goto label_cond_53;
	this->decimalDigitsWithoutTrailingZeros = 0x0;
	this->visibleDecimalDigitCountWithoutTrailingZeros = 0x0;
label_goto_40:
	this->baseFactor = (int)(java::lang::Math::pow(0x4024000000000000L, (double)(v)));
	return;
	// 405    .line 591
label_cond_4b:
	cVar0 = 0x0;
	goto label_goto_a;
label_cond_4d:
	cVar1 = n;
	goto label_goto_11;
	// 417    .line 597
label_cond_4f:
	cVar2 = (long long)(n);
	goto label_goto_25;
	// 423    .line 598
label_cond_51:
	cVar3 = 0x0;
	goto label_goto_31;
	// 429    .line 616
label_cond_53:
	fdwtz = f;
	//    .local v0, "fdwtz":J
	trimmedCount = v;
	//    .local v2, "trimmedCount":I
label_goto_55:
	if ( ((fdwtz % 0xa) > 0x0) )     
		goto label_cond_65;
	fdwtz = (fdwtz /  0xa);
	trimmedCount = ( trimmedCount + -0x1);
	goto label_goto_55;
	// 460    .line 622
label_cond_65:
	this->decimalDigitsWithoutTrailingZeros = fdwtz;
	this->visibleDecimalDigitCountWithoutTrailingZeros = trimmedCount;
	goto label_goto_40;

}
// .method public constructor <init>(J)V
android::icu::text::PluralRules_S_FixedDecimal::PluralRules_S_FixedDecimal(long long n)
{
	
	//    .param p1, "n"    # J
	//    .annotation runtime Ljava/lang/Deprecated;
	// 474    .end annotation
	android::icu::text::PluralRules_S_FixedDecimal::((double)(n), 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::PluralRules_S_FixedDecimal::PluralRules_S_FixedDecimal(std::shared_ptr<java::lang::String> n)
{
	
	//    .param p1, "n"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 492    .end annotation
	android::icu::text::PluralRules_S_FixedDecimal::(java::lang::Double::parseDouble(n), android::icu::text::PluralRules_S_FixedDecimal::getVisibleFractionCount(n));
	return;

}
// .method public static decimals(D)I
int android::icu::text::PluralRules_S_FixedDecimal::decimals(double cVar0)
{
	
	double cVar0;
	int mask;
	int digits;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	std::shared_ptr<java::lang::String> buf;
	int ePos;
	int expNumPos;
	int numFractionDigits;
	int i;
	
	//    .param p0, "n"    # D
	//    .annotation runtime Ljava/lang/Deprecated;
	// 514    .end annotation
	if ( java::lang::Double::isInfinite(cVar0) )     
		goto label_cond_c;
	if ( !(java::lang::Double::isNaN(cVar0)) )  
		goto label_cond_e;
label_cond_c:
	return 0x0;
	// 536    .line 687
label_cond_e:
	if ( (cVar0 > 0x0) >= 0 )
		goto label_cond_19;
	cVar0 = (0.0 - cVar0);
label_cond_19:
	if ( (cVar0 < java::lang::Math::floor(cVar0)) )     
		goto label_cond_23;
	return 0x0;
	// 566    .line 693
label_cond_23:
	if ( (cVar0 > 0x41cdcd6500000000L) >= 0 )
		goto label_cond_4f;
	//    .local v12, "temp":J
	mask = 0xa;
	//    .local v9, "mask":I
	digits = 0x6;
	//    .local v3, "digits":I
label_goto_3c:
	if ( digits <= 0 )
		goto label_cond_4d;
	if ( !(((((long long)((0x412e848000000000L *  cVar0)) % 0xf4240) % (long long)(mask)) > 0x0)) )  
		goto label_cond_48;
	return digits;
	// 610    .line 695
label_cond_48:
	mask = ( mask * 0xa);
	digits = ( digits + -0x1);
	goto label_goto_3c;
	// 618    .line 700
label_cond_4d:
	return 0x0;
	// 624    .line 702
	// 625    .end local v3    # "digits":I
	// 626    .end local v9    # "mask":I
	// 627    .end local v12    # "temp":J
label_cond_4f:
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar1[0x0] = java::lang::Double::valueOf(cVar0);
	buf = java::lang::String::format(java::util::Locale::ENGLISH, std::make_shared<java::lang::String>(std::make_shared<char[]>("%1.15e")), cVar1);
	//    .local v2, "buf":Ljava/lang/String;
	ePos = buf->lastIndexOf(0x65);
	//    .local v4, "ePos":I
	expNumPos = ( ePos + 0x1);
	//    .local v5, "expNumPos":I
	if ( buf->charAt(expNumPos) != 0x2b )
		goto label_cond_75;
label_cond_75:
	//    .local v7, "exponentStr":Ljava/lang/String;
	//    .local v6, "exponent":I
	numFractionDigits = (( ePos + -0x2) - java::lang::Integer::parseInt(buf->substring(expNumPos)));
	//    .local v10, "numFractionDigits":I
	if ( numFractionDigits >= 0 )
		goto label_cond_85;
	return 0x0;
	// 701    .line 714
label_cond_85:
	i = ( ePos + -0x1);
	//    .local v8, "i":I
label_goto_87:
	if ( numFractionDigits <= 0 )
		goto label_cond_91;
	if ( buf->charAt(i) == 0x30 )
		goto label_cond_92;
label_cond_91:
	return numFractionDigits;
	// 722    .line 718
label_cond_92:
	numFractionDigits = ( numFractionDigits + -0x1);
	i = ( i + -0x1);
	goto label_goto_87;

}
// .method private static getFractionalDigits(DI)I
int android::icu::text::PluralRules_S_FixedDecimal::getFractionalDigits(double cVar0,int v)
{
	
	double cVar0;
	int baseFactor;
	
	//    .param p0, "n"    # D
	//    .param p2, "v"    # I
	if ( v )     
		goto label_cond_4;
	return 0x0;
	// 746    .line 642
label_cond_4:
	if ( (cVar0 > 0x0) >= 0 )
		goto label_cond_b;
	cVar0 = (0.0 - cVar0);
label_cond_b:
	baseFactor = (int)(java::lang::Math::pow(0x4024000000000000L, (double)(v)));
	//    .local v0, "baseFactor":I
	//    .local v2, "scaled":J
	return (int)((java::lang::Math::round(( (double)(baseFactor) * cVar0)) % (long long)(baseFactor)));

}
// .method public static getOperand(Ljava/lang/String;)Landroid/icu/text/PluralRules$Operand;
std::shared_ptr<android::icu::text::PluralRules_S_Operand> android::icu::text::PluralRules_S_FixedDecimal::getOperand(std::shared_ptr<java::lang::String> t)
{
	
	//    .param p0, "t"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 794    .end annotation
	return android::icu::text::PluralRules_S_Operand::valueOf(t);

}
// .method private static getVisibleFractionCount(Ljava/lang/String;)I
int android::icu::text::PluralRules_S_FixedDecimal::getVisibleFractionCount(std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	int decimalPos;
	
	//    .param p0, "value"    # Ljava/lang/String;
	cVar0 = value->trim();
	decimalPos = ( cVar0->indexOf(0x2e) + 0x1);
	//    .local v0, "decimalPos":I
	if ( decimalPos )     
		goto label_cond_10;
	return 0x0;
	// 833    .line 741
label_cond_10:
	return (cVar0->length() -  decimalPos);

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::PluralRules_S_FixedDecimal::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<java::io::NotSerializableException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 848        value = {
	// 849            Ljava/io/IOException;,
	// 850            Ljava/lang/ClassNotFoundException;
	// 851        }
	// 852    .end annotation
	cVar0 = std::make_shared<java::io::NotSerializableException>();
	// throw
	throw cVar0;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::text::PluralRules_S_FixedDecimal::writeObject(std::shared_ptr<java::io::ObjectOutputStream> out)
{
	
	std::shared_ptr<java::io::NotSerializableException> cVar0;
	
	//    .param p1, "out"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 867        value = {
	// 868            Ljava/io/IOException;
	// 869        }
	// 870    .end annotation
	cVar0 = std::make_shared<java::io::NotSerializableException>();
	// throw
	throw cVar0;

}
// .method public compareTo(Landroid/icu/text/PluralRules$FixedDecimal;)I
int android::icu::text::PluralRules_S_FixedDecimal::compareTo(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> other)
{
	
	long long cVar0;
	int cVar1;
	int cVar2;
	long long diff;
	
	//    .param p1, "other"    # Landroid/icu/text/PluralRules$FixedDecimal;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 887    .end annotation
	cVar0 = 0x0;
	cVar1 = 0x1;
	cVar2 = -0x1;
	if ( !((this->integerValue > other->integerValue)) )  
		goto label_cond_17;
	if ( (this->integerValue > other->integerValue) >= 0 )
		goto label_cond_15;
label_goto_14:
	return cVar2;
label_cond_15:
	cVar2 = cVar1;
	goto label_goto_14;
	// 922    .line 784
label_cond_17:
	if ( !((this->source < other->source)) )  
		goto label_cond_2a;
	if ( (this->source > other->source) >= 0 )
		goto label_cond_28;
label_goto_27:
	return cVar2;
label_cond_28:
	cVar2 = cVar1;
	goto label_goto_27;
	// 949    .line 787
label_cond_2a:
	if ( this->visibleDecimalDigitCount == other->visibleDecimalDigitCount )
		goto label_cond_39;
	if ( this->visibleDecimalDigitCount >= other->visibleDecimalDigitCount )
		goto label_cond_37;
label_goto_36:
	return cVar2;
label_cond_37:
	cVar2 = cVar1;
	goto label_goto_36;
	// 972    .line 790
label_cond_39:
	diff = (this->decimalDigits - other->decimalDigits);
	//    .local v0, "diff":J
	if ( !((diff > cVar0)) )  
		goto label_cond_4a;
	if ( (diff > cVar0) >= 0 )
		goto label_cond_48;
label_goto_47:
	return cVar2;
label_cond_48:
	cVar2 = cVar1;
	goto label_goto_47;
	// 999    .line 794
label_cond_4a:
	return 0x0;

}
// .method public doubleValue()D
double android::icu::text::PluralRules_S_FixedDecimal::doubleValue()
{
	
	double cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1025    .end annotation
	if ( !(this->isNegative) )  
		goto label_cond_8;
	cVar0 = (0.0 - this->source);
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = this->source;
	goto label_goto_7;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::PluralRules_S_FixedDecimal::equals(std::shared_ptr<java::lang::Object> arg0)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> other;
	
	//    .param p1, "arg0"    # Ljava/lang/Object;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1050    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( arg0 )     
		goto label_cond_5;
	return cVar1;
	// 1063    .line 808
label_cond_5:
	if ( arg0 != this )
		goto label_cond_8;
	return cVar0;
	// 1070    .line 811
label_cond_8:
	if ( arg0->instanceOf("android::icu::text::PluralRules_S_FixedDecimal") )     
		goto label_cond_d;
	return cVar1;
label_cond_d:
	other = arg0;
	other->checkCast("android::icu::text::PluralRules_S_FixedDecimal");
	//    .local v0, "other":Landroid/icu/text/PluralRules$FixedDecimal;
	if ( (this->source < other->source) )     
		goto label_cond_27;
	if ( this->visibleDecimalDigitCount != other->visibleDecimalDigitCount )
		goto label_cond_27;
	if ( (this->decimalDigits > other->decimalDigits) )     
		goto label_cond_27;
label_goto_26:
	return cVar0;
label_cond_27:
	cVar0 = cVar1;
	goto label_goto_26;

}
// .method public floatValue()F
float android::icu::text::PluralRules_S_FixedDecimal::floatValue()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1121    .end annotation
	return (float)(this->source);

}
// .method public get(Landroid/icu/text/PluralRules$Operand;)D
double android::icu::text::PluralRules_S_FixedDecimal::get(std::shared_ptr<android::icu::text::PluralRules_S_Operand> operand)
{
	
	//    .param p1, "operand"    # Landroid/icu/text/PluralRules$Operand;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1136    .end annotation
	// switch
	{
	auto item = ( android::icu::text::PluralRules_S_FixedDecimal::-getandroid-icu-text-PluralRules$OperandSwitchesValues({const[class].FS-Param})[operand->ordinal()] );
	if (item == 1) goto label_pswitch_14;
	if (item == 2) goto label_pswitch_10;
	if (item == 3) goto label_pswitch_18;
	if (item == 4) goto label_pswitch_1c;
	if (item == 5) goto label_pswitch_20;
	}
	return this->source;
	// 1157    .line 754
label_pswitch_10:
	return (double)(this->integerValue);
	// 1165    .line 755
label_pswitch_14:
	return (double)(this->decimalDigits);
	// 1173    .line 756
label_pswitch_18:
	return (double)(this->decimalDigitsWithoutTrailingZeros);
	// 1181    .line 757
label_pswitch_1c:
	return (double)(this->visibleDecimalDigitCount);
	// 1189    .line 758
label_pswitch_20:
	return (double)(this->visibleDecimalDigitCountWithoutTrailingZeros);
	// 1197    .line 752
	// 1198    :pswitch_data_24
	// 1199    .packed-switch 0x1
	// 1200        :pswitch_14
	// 1201        :pswitch_10
	// 1202        :pswitch_18
	// 1203        :pswitch_1c
	// 1204        :pswitch_20
	// 1205    .end packed-switch

}
// .method public getBaseFactor()I
int android::icu::text::PluralRules_S_FixedDecimal::getBaseFactor()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1211    .end annotation
	return this->baseFactor;

}
// .method public getDecimalDigits()J
long long android::icu::text::PluralRules_S_FixedDecimal::getDecimalDigits()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1223    .end annotation
	return this->decimalDigits;

}
// .method public getDecimalDigitsWithoutTrailingZeros()J
long long android::icu::text::PluralRules_S_FixedDecimal::getDecimalDigitsWithoutTrailingZeros()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1235    .end annotation
	return this->decimalDigitsWithoutTrailingZeros;

}
// .method public getIntegerValue()J
long long android::icu::text::PluralRules_S_FixedDecimal::getIntegerValue()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1247    .end annotation
	return this->integerValue;

}
// .method public getShiftedValue()J
long long android::icu::text::PluralRules_S_FixedDecimal::getShiftedValue()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1259    .end annotation
	return ((this->integerValue *  (long long)(this->baseFactor)) +  this->decimalDigits);

}
// .method public getSource()D
double android::icu::text::PluralRules_S_FixedDecimal::getSource()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1281    .end annotation
	return this->source;

}
// .method public getVisibleDecimalDigitCount()I
int android::icu::text::PluralRules_S_FixedDecimal::getVisibleDecimalDigitCount()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1293    .end annotation
	return this->visibleDecimalDigitCount;

}
// .method public getVisibleDecimalDigitCountWithoutTrailingZeros()I
int android::icu::text::PluralRules_S_FixedDecimal::getVisibleDecimalDigitCountWithoutTrailingZeros()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1305    .end annotation
	return this->visibleDecimalDigitCountWithoutTrailingZeros;

}
// .method public hasIntegerValue()Z
bool android::icu::text::PluralRules_S_FixedDecimal::hasIntegerValue()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1317    .end annotation
	return this->hasIntegerValue;

}
// .method public hashCode()I
int android::icu::text::PluralRules_S_FixedDecimal::hashCode()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1329    .end annotation
	return (int)((this->decimalDigits +  (long long)(( (this->visibleDecimalDigitCount +  (int)(( this->source * 0x4042800000000000L))) * 0x25))));

}
// .method public intValue()I
int android::icu::text::PluralRules_S_FixedDecimal::intValue()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1361    .end annotation
	return (int)(this->integerValue);

}
// .method public isHasIntegerValue()Z
bool android::icu::text::PluralRules_S_FixedDecimal::isHasIntegerValue()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1375    .end annotation
	return this->hasIntegerValue;

}
// .method public isNegative()Z
bool android::icu::text::PluralRules_S_FixedDecimal::isNegative()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1387    .end annotation
	return this->isNegative;

}
// .method public longValue()J
long long android::icu::text::PluralRules_S_FixedDecimal::longValue()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1399    .end annotation
	return this->integerValue;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_FixedDecimal::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1411    .end annotation
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar1[0x0] = java::lang::Double::valueOf(this->source);
	return java::lang::String::format(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("%.")))->append(this->visibleDecimalDigitCount)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("f")))->toString(), cVar1);

}


