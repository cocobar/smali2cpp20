// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$DateTimeMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.DateTimePatternGenerator_S_DateTimeMatcher.h"
#include "android.icu.text.DateTimePatternGenerator_S_DistanceInfo.h"
#include "android.icu.text.DateTimePatternGenerator_S_FormatParser.h"
#include "android.icu.text.DateTimePatternGenerator_S_SkeletonFields.h"
#include "android.icu.text.DateTimePatternGenerator_S_VariableField.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Arrays.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

// .method static synthetic -get0(Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;)Landroid/icu/text/DateTimePatternGenerator$SkeletonFields;
std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::_get0(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	return _this->original;

}
// .method static synthetic -get1(Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;)[I
int android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::_get1(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	return _this->type;

}
// .method private constructor <init>()V
android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::DateTimePatternGenerator_S_DateTimeMatcher()
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> cVar0;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> cVar1;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_SkeletonFields> cVar2;
	
	cVar0 = 0x0;
	// 066    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->type = std::make_shared<std::vector<int[]>>(0x10);
	cVar1 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_SkeletonFields>(cVar0);
	this->original = cVar1;
	cVar2 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_SkeletonFields>(cVar0);
	this->baseOriginal = cVar2;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;)V
android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::DateTimePatternGenerator_S_DateTimeMatcher(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	// 098    invoke-direct {p0}, Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;-><init>()V
	return;

}
// .method public compareTo(Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;)I
int android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::compareTo(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> that)
{
	
	int cVar1;
	int result;
	
	//    .param p1, "that"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	cVar1 = 0x0;
	result = this->original->compareTo(that->original);
	//    .local v0, "result":I
	if ( result <= 0 )
		goto label_cond_d;
	cVar1 = -0x1;
label_cond_c:
label_goto_c:
	return cVar1;
label_cond_d:
	if ( result >= 0 )
		goto label_cond_c;
	cVar1 = 0x1;
	goto label_goto_c;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( this == other )
		goto label_cond_13;
	if ( !(other) )  
		goto label_cond_15;
	if ( !(other->instanceOf("android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher")) )  
		goto label_cond_15;
	other->checkCast("android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher");
	//    .end local p1    # "other":Ljava/lang/Object;
	cVar0 = this->original->equals(other->original);
label_goto_12:
	return cVar0;
	// 183    .restart local p1    # "other":Ljava/lang/Object;
label_cond_13:
	cVar0 = 0x1;
	goto label_goto_12;
label_cond_15:
	cVar0 = 0x0;
	goto label_goto_12;

}
// .method extractFrom(Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;I)V
void android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::extractFrom(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> source,int fieldMask)
{
	
	int i;
	
	//    .param p1, "source"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	//    .param p2, "fieldMask"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->type->size() )
		goto label_cond_28;
	if ( !(((0x1 << i) &  fieldMask)) )  
		goto label_cond_1e;
	this->type[i] = source->type[i];
	this->original->copyFieldFrom(source->original, i);
label_goto_1b:
	i = ( i + 0x1);
	goto label_goto_2;
	// 245    .line 2424
label_cond_1e:
	this->type[i] = 0x0;
	this->original->clearField(i);
	goto label_goto_1b;
	// 258    .line 2428
label_cond_28:
	return;

}
// .method public fieldIsNumeric(I)Z
bool android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::fieldIsNumeric(int field)
{
	
	bool cVar1;
	
	//    .param p1, "field"    # I
	cVar1 = 0x0;
	if ( this->type[field] <= 0 )
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method getBasePattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::getBasePattern()
{
	
	return this->baseOriginal->toString();

}
// .method getDistance(Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;ILandroid/icu/text/DateTimePatternGenerator$DistanceInfo;)I
int android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::getDistance(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> other,int includeMask,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> distanceInfo)
{
	
	int result;
	int i;
	int myType;
	int otherType;
	
	//    .param p1, "other"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	//    .param p2, "includeMask"    # I
	//    .param p3, "distanceInfo"    # Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;
	result = 0x0;
	//    .local v3, "result":I
	distanceInfo->clear();
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( i >= 0x10 )
		goto label_cond_36;
	if ( ((0x1 << i) &  includeMask) )     
		goto label_cond_18;
	myType = 0x0;
	//    .local v1, "myType":I
label_goto_f:
	otherType = other->type[i];
	//    .local v2, "otherType":I
	if ( myType != otherType )
		goto label_cond_1d;
label_goto_15:
	i = ( i + 0x1);
	goto label_goto_5;
	// 348    .line 2434
	// 349    .end local v1    # "myType":I
	// 350    .end local v2    # "otherType":I
label_cond_18:
	myType = this->type[i];
	//    .restart local v1    # "myType":I
	goto label_goto_f;
	// 359    .line 2437
	// 360    .restart local v2    # "otherType":I
label_cond_1d:
	if ( myType )     
		goto label_cond_26;
	result = (result +  0x10000);
	distanceInfo->addExtra(i);
	goto label_goto_15;
	// 374    .line 2440
label_cond_26:
	if ( otherType )     
		goto label_cond_2e;
	result = ( result + 0x1000);
	distanceInfo->addMissing(i);
	goto label_goto_15;
	// 386    .line 2444
label_cond_2e:
	result = (result +  java::lang::Math::abs((myType - otherType)));
	goto label_goto_15;
	// 398    .line 2447
	// 399    .end local v1    # "myType":I
	// 400    .end local v2    # "otherType":I
label_cond_36:
	return result;

}
// .method getFieldMask()I
int android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::getFieldMask()
{
	
	int result;
	int i;
	
	result = 0x0;
	//    .local v1, "result":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->type->size() )
		goto label_cond_13;
	if ( !(this->type[i]) )  
		goto label_cond_10;
	result = (result |  (0x1 << i));
label_cond_10:
	i = ( i + 0x1);
	goto label_goto_2;
	// 443    .line 2414
label_cond_13:
	return result;

}
// .method public hashCode()I
int android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::hashCode()
{
	
	return this->original->hashCode();

}
// .method set(Ljava/lang/String;Landroid/icu/text/DateTimePatternGenerator$FormatParser;Z)Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::set(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> fp,bool allowDuplicateFields)
{
	
	std::shared_ptr<java::util::Iterator> obj_S_iterator;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> obj;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> item;
	std::shared_ptr<java::lang::String> value;
	auto row;
	int field;
	char ch1;
	int ch2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int repeatChar;
	int subField;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "fp"    # Landroid/icu/text/DateTimePatternGenerator$FormatParser;
	//    .param p3, "allowDuplicateFields"    # Z
	java::util::Arrays::fill(this->type, 0x0);
	this->original->clear();
	this->baseOriginal->clear();
	fp->set(pattern);
	obj_S_iterator = fp->getItems()->iterator();
	//    .local v8, "obj$iterator":Ljava/util/Iterator;
label_cond_25:
label_goto_25:
	if ( !(obj_S_iterator->hasNext()) )  
		goto label_cond_dc;
	obj = obj_S_iterator->next();
	//    .local v7, "obj":Ljava/lang/Object;
	if ( !(obj->instanceOf("android::icu::text::DateTimePatternGenerator_S_VariableField")) )  
		goto label_cond_25;
	item = obj;
	item->checkCast("android::icu::text::DateTimePatternGenerator_S_VariableField");
	//    .local v6, "item":Landroid/icu/text/DateTimePatternGenerator$VariableField;
	value = item->toString();
	//    .local v13, "value":Ljava/lang/String;
	if ( value->charAt(0x0) == 0x61 )
		goto label_cond_25;
	//    .local v2, "canonicalIndex":I
	row = android::icu::text::DateTimePatternGenerator::-get1({const[class].FS-Param})[android::icu::text::DateTimePatternGenerator_S_VariableField::-wrap0(item)];
	//    .local v11, "row":[I
	field = row[0x1];
	//    .local v5, "field":I
	if ( this->original->isFieldEmpty(field) )     
		goto label_cond_ab;
	ch1 = this->original->getFieldChar(field);
	//    .local v3, "ch1":C
	ch2 = value->charAt(0x0);
	//    .local v4, "ch2":C
	if ( allowDuplicateFields )     
		goto label_cond_25;
	if ( ch1 != 0x72 )
		goto label_cond_71;
	if ( ch2 == 0x55 )
		goto label_cond_25;
label_cond_71:
	if ( ch1 != 0x55 )
		goto label_cond_79;
	if ( ch2 == 0x72 )
		goto label_cond_25;
label_cond_79:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Conflicting fields:\t")))->append(ch1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(value)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\t in ")))->append(pattern)->toString());
	// throw
	throw cVar0;
	// 673    .line 2396
	// 674    .end local v3    # "ch1":C
	// 675    .end local v4    # "ch2":C
label_cond_ab:
	this->original->populate(field, value);
	repeatChar = (char)(row[0x0]);
	//    .local v9, "repeatChar":C
	//    .local v10, "repeatCount":I
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("GEzvQ"))->indexOf(repeatChar) < 0 ) 
		goto label_cond_c3;
label_cond_c3:
	this->baseOriginal->populate(field, repeatChar, row[0x3]);
	subField = row[0x2];
	//    .local v12, "subField":I
	if ( subField <= 0 )
		goto label_cond_d4;
label_cond_d4:
	this->type[field] = subField;
	goto label_goto_25;
	// 741    .line 2406
	// 742    .end local v2    # "canonicalIndex":I
	// 743    .end local v5    # "field":I
	// 744    .end local v6    # "item":Landroid/icu/text/DateTimePatternGenerator$VariableField;
	// 745    .end local v7    # "obj":Ljava/lang/Object;
	// 746    .end local v9    # "repeatChar":C
	// 747    .end local v10    # "repeatCount":I
	// 748    .end local v11    # "row":[I
	// 749    .end local v12    # "subField":I
	// 750    .end local v13    # "value":Ljava/lang/String;
label_cond_dc:
	return this;

}
// .method public toCanonicalString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::toCanonicalString()
{
	
	return this->original->toCanonicalString();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::toString()
{
	
	return this->original->toString();

}


