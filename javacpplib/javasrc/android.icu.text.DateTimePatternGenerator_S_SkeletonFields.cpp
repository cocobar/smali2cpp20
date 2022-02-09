// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$SkeletonFields.smali
#include "java2ctype.h"
#include "android.icu.text.DateTimePatternGenerator_S_SkeletonFields.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Arrays.h"

static android::icu::text::DateTimePatternGenerator_S_SkeletonFields::_assertionsDisabled;
static android::icu::text::DateTimePatternGenerator_S_SkeletonFields::DEFAULT_CHAR;
static android::icu::text::DateTimePatternGenerator_S_SkeletonFields::DEFAULT_LENGTH;
// .method static constructor <clinit>()V
void android::icu::text::DateTimePatternGenerator_S_SkeletonFields::static_cinit()
{
	
	android::icu::text::DateTimePatternGenerator_S_SkeletonFields::_assertionsDisabled = ( android::icu::text::DateTimePatternGenerator_S_SkeletonFields()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>()V
android::icu::text::DateTimePatternGenerator_S_SkeletonFields::DateTimePatternGenerator_S_SkeletonFields()
{
	
	int cVar0;
	
	cVar0 = 0x10;
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->chars = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	this->lengths = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/DateTimePatternGenerator$SkeletonFields;)V
android::icu::text::DateTimePatternGenerator_S_SkeletonFields::DateTimePatternGenerator_S_SkeletonFields(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/DateTimePatternGenerator$SkeletonFields;
	// 078    invoke-direct {p0}, Landroid/icu/text/DateTimePatternGenerator$SkeletonFields;-><init>()V
	return;

}
// .method private appendFieldTo(ILjava/lang/StringBuilder;Z)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::DateTimePatternGenerator_S_SkeletonFields::appendFieldTo(int field,std::shared_ptr<java::lang::StringBuilder> sb,bool canonical)
{
	
	int i;
	
	//    .param p1, "field"    # I
	//    .param p2, "sb"    # Ljava/lang/StringBuilder;
	//    .param p3, "canonical"    # Z
	//    .local v0, "ch":C
	//    .local v2, "length":I
	if ( !(canonical) )  
		goto label_cond_f;
label_cond_f:
	i = 0x0;
	//    .local v1, "i":I
label_goto_10:
	if ( i >= this->lengths[field] )
		goto label_cond_18;
	sb->append(android::icu::text::DateTimePatternGenerator::-wrap1(field, (char)(this->chars[field])));
	i = ( i + 0x1);
	goto label_goto_10;
	// 128    .line 2305
label_cond_18:
	return sb;

}
// .method private appendTo(Ljava/lang/StringBuilder;Z)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::DateTimePatternGenerator_S_SkeletonFields::appendTo(std::shared_ptr<java::lang::StringBuilder> sb,bool canonical)
{
	
	int i;
	
	//    .param p1, "sb"    # Ljava/lang/StringBuilder;
	//    .param p2, "canonical"    # Z
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= 0x10 )
		goto label_cond_b;
	this->appendFieldTo(i, sb, canonical);
	i = ( i + 0x1);
	goto label_goto_1;
	// 156    .line 2287
label_cond_b:
	return sb;

}
// .method public appendFieldTo(ILjava/lang/StringBuilder;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::DateTimePatternGenerator_S_SkeletonFields::appendFieldTo(int field,std::shared_ptr<java::lang::StringBuilder> sb)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "sb"    # Ljava/lang/StringBuilder;
	return this->appendFieldTo(field, sb, 0x0);

}
// .method public appendTo(Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::DateTimePatternGenerator_S_SkeletonFields::appendTo(std::shared_ptr<java::lang::StringBuilder> sb)
{
	
	//    .param p1, "sb"    # Ljava/lang/StringBuilder;
	return this->appendTo(sb, 0x0);

}
// .method public clear()V
void android::icu::text::DateTimePatternGenerator_S_SkeletonFields::clear()
{
	
	unsigned char cVar0;
	
	cVar0 = 0x0;
	java::util::Arrays::fill(this->chars, cVar0);
	java::util::Arrays::fill(this->lengths, cVar0);
	return;

}
// .method clearField(I)V
void android::icu::text::DateTimePatternGenerator_S_SkeletonFields::clearField(int field)
{
	
	unsigned char cVar0;
	
	//    .param p1, "field"    # I
	cVar0 = 0x0;
	this->chars[field] = cVar0;
	this->lengths[field] = cVar0;
	return;

}
// .method public compareTo(Landroid/icu/text/DateTimePatternGenerator$SkeletonFields;)I
int android::icu::text::DateTimePatternGenerator_S_SkeletonFields::compareTo(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> other)
{
	
	int i;
	int charDiff;
	int lengthDiff;
	
	//    .param p1, "other"    # Landroid/icu/text/DateTimePatternGenerator$SkeletonFields;
	i = 0x0;
	//    .local v1, "i":I
label_goto_2:
	if ( i >= 0x10 )
		goto label_cond_23;
	charDiff = (this->chars[i] - other->chars[i]);
	//    .local v0, "charDiff":I
	if ( !(charDiff) )  
		goto label_cond_13;
	return charDiff;
	// 269    .line 2314
label_cond_13:
	lengthDiff = (this->lengths[i] - other->lengths[i]);
	//    .local v2, "lengthDiff":I
	if ( !(lengthDiff) )  
		goto label_cond_20;
	return lengthDiff;
	// 288    .line 2309
label_cond_20:
	i = ( i + 0x1);
	goto label_goto_2;
	// 294    .line 2319
	// 295    .end local v0    # "charDiff":I
	// 296    .end local v2    # "lengthDiff":I
label_cond_23:
	return 0x0;

}
// .method copyFieldFrom(Landroid/icu/text/DateTimePatternGenerator$SkeletonFields;I)V
void android::icu::text::DateTimePatternGenerator_S_SkeletonFields::copyFieldFrom(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> other,int field)
{
	
	//    .param p1, "other"    # Landroid/icu/text/DateTimePatternGenerator$SkeletonFields;
	//    .param p2, "field"    # I
	this->chars[field] = other->chars[field];
	this->lengths[field] = other->lengths[field];
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DateTimePatternGenerator_S_SkeletonFields::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this == other )
		goto label_cond_12;
	if ( !(other) )  
		goto label_cond_15;
	if ( !(other->instanceOf("android::icu::text::DateTimePatternGenerator_S_SkeletonFields")) )  
		goto label_cond_15;
	other->checkCast("android::icu::text::DateTimePatternGenerator_S_SkeletonFields");
	//    .end local p1    # "other":Ljava/lang/Object;
	if ( this->compareTo(other) )     
		goto label_cond_13;
label_cond_12:
label_goto_12:
	return cVar0;
label_cond_13:
	cVar0 = cVar1;
	goto label_goto_12;
	// 368    .restart local p1    # "other":Ljava/lang/Object;
label_cond_15:
	cVar0 = cVar1;
	goto label_goto_12;

}
// .method getFieldChar(I)C
char android::icu::text::DateTimePatternGenerator_S_SkeletonFields::getFieldChar(int field)
{
	
	//    .param p1, "field"    # I
	return (char)(this->chars[field]);

}
// .method getFieldLength(I)I
int android::icu::text::DateTimePatternGenerator_S_SkeletonFields::getFieldLength(int field)
{
	
	//    .param p1, "field"    # I
	return this->lengths[field];

}
// .method public hashCode()I
int android::icu::text::DateTimePatternGenerator_S_SkeletonFields::hashCode()
{
	
	return (java::util::Arrays::hashCode(this->chars) ^  java::util::Arrays::hashCode(this->lengths));

}
// .method public isFieldEmpty(I)Z
bool android::icu::text::DateTimePatternGenerator_S_SkeletonFields::isFieldEmpty(int field)
{
	
	bool cVar1;
	
	//    .param p1, "field"    # I
	cVar1 = 0x0;
	if ( this->lengths[field] )     
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method populate(ICI)V
void android::icu::text::DateTimePatternGenerator_S_SkeletonFields::populate(int field,char ch,int length)
{
	
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "field"    # I
	//    .param p2, "ch"    # C
	//    .param p3, "length"    # I
	cVar0 = 0x7f;
	if ( android::icu::text::DateTimePatternGenerator_S_SkeletonFields::_assertionsDisabled )     
		goto label_cond_e;
	if ( ch <= cVar0 )
		goto label_cond_e;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 468    .line 2260
label_cond_e:
	if ( android::icu::text::DateTimePatternGenerator_S_SkeletonFields::_assertionsDisabled )     
		goto label_cond_1a;
	if ( length <= cVar0 )
		goto label_cond_1a;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 482    .line 2262
label_cond_1a:
	this->chars[field] = (unsigned char)(ch);
	this->lengths[field] = (unsigned char)(length);
	return;

}
// .method populate(ILjava/lang/String;)V
void android::icu::text::DateTimePatternGenerator_S_SkeletonFields::populate(int field,std::shared_ptr<java::lang::String> value)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "field"    # I
	//    .param p2, "value"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = value->toCharArray();
	cVar2 = cVar0;
label_goto_7:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_1e;
	//    .local v0, "ch":C
	if ( android::icu::text::DateTimePatternGenerator_S_SkeletonFields::_assertionsDisabled )     
		goto label_cond_1b;
	if ( cVar1[cVar2] == value->charAt(cVar0) )
		goto label_cond_1b;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 541    .line 2251
label_cond_1b:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_7;
	// 547    .line 2255
	// 548    .end local v0    # "ch":C
label_cond_1e:
	this->populate(field, value->charAt(cVar0), value->length());
	return;

}
// .method public toCanonicalString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_SkeletonFields::toCanonicalString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return this->appendTo(cVar0, 0x1)->toString();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_SkeletonFields::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return this->appendTo(cVar0)->toString();

}


