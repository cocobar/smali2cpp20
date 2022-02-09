// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$RangeConstraint.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_Operand.h"
#include "android.icu.text.PluralRules_S_RangeConstraint.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "android.icu.text.PluralRules.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::text::PluralRules_S_RangeConstraint::_android_icu_text_PluralRules_S_SampleTypeSwitchesValues = nullptr;
static android::icu::text::PluralRules_S_RangeConstraint::serialVersionUID = 0x1L;
// .method private static synthetic -getandroid-icu-text-PluralRules$SampleTypeSwitchesValues()[I
int android::icu::text::PluralRules_S_RangeConstraint::_getandroid_icu_text_PluralRules_S_SampleTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::text::PluralRules_S_RangeConstraint::_android_icu_text_PluralRules_S_SampleTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::text::PluralRules_S_RangeConstraint::_android_icu_text_PluralRules_S_SampleTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::PluralRules_S_SampleType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::PluralRules_S_SampleType::DECIMAL->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_25
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::PluralRules_S_SampleType::INTEGER->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_23
label_goto_20:
	android::icu::text::PluralRules_S_RangeConstraint::_android_icu_text_PluralRules_S_SampleTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_25:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method constructor <init>(IZLandroid/icu/text/PluralRules$Operand;ZDD[J)V
android::icu::text::PluralRules_S_RangeConstraint::PluralRules_S_RangeConstraint(int mod,bool inRange,std::shared_ptr<android::icu::text::PluralRules_S_Operand> operand,bool integersOnly,double lowBound,double highBound,std::shared_ptr<long long[]> vals)
{
	
	//    .param p1, "mod"    # I
	//    .param p2, "inRange"    # Z
	//    .param p3, "operand"    # Landroid/icu/text/PluralRules$Operand;
	//    .param p4, "integersOnly"    # Z
	//    .param p5, "lowBound"    # D
	//    .param p7, "highBound"    # D
	//    .param p9, "vals"    # [J
	// 119    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->mod = mod;
	this->inRange = inRange;
	this->integersOnly = integersOnly;
	this->lowerBound = lowBound;
	this->upperBound = highBound;
	this->range_list = vals;
	this->operand = operand;
	return;

}
// .method public isFulfilled(Landroid/icu/text/PluralRules$FixedDecimal;)Z
bool android::icu::text::PluralRules_S_RangeConstraint::isFulfilled(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> number)
{
	
	bool cVar1;
	auto n;
	double n;
	int test;
	int i;
	
	//    .param p1, "number"    # Landroid/icu/text/PluralRules$FixedDecimal;
	cVar1 = 0x0;
	n = number->get(this->operand);
	//    .local v2, "n":D
	if ( !(this->integersOnly) )  
		goto label_cond_1a;
	if ( !(((n -  (double)((long long)(n))) < 0x0)) )  
		goto label_cond_1a;
label_cond_15:
	return ( this->inRange ^ 0x1);
	// 188    .line 1515
label_cond_1a:
	if ( this->operand != android::icu::text::PluralRules_S_Operand::j )
		goto label_cond_24;
	if ( number->visibleDecimalDigitCount )     
		goto label_cond_15;
label_cond_24:
	if ( !(this->mod) )  
		goto label_cond_2c;
	n = ( n % (double)(this->mod));
label_cond_2c:
	if ( (n < this->lowerBound) < 0 ) 
		goto label_cond_60;
	if ( (n > this->upperBound) > 0 ) 
		goto label_cond_60;
	test = 0x1;
	//    .local v1, "test":Z
label_goto_39:
	if ( !(test) )  
		goto label_cond_64;
	if ( !(this->range_list) )  
		goto label_cond_64;
	test = 0x0;
	i = 0x0;
	//    .local v0, "i":I
label_goto_41:
	if ( test )     
		goto label_cond_64;
	if ( i >= this->range_list->size() )
		goto label_cond_64;
	if ( (n < (double)(this->range_list[i])) < 0 ) 
		goto label_cond_62;
	if ( (n > (double)(this->range_list[( i + 0x1)])) > 0 ) 
		goto label_cond_62;
	test = 0x1;
label_goto_5d:
	i = ( i + 0x2);
	goto label_goto_41;
	// 285    .line 1521
	// 286    .end local v0    # "i":I
	// 287    .end local v1    # "test":Z
label_cond_60:
	test = 0x0;
	//    .restart local v1    # "test":Z
	goto label_goto_39;
	// 294    .line 1525
	// 295    .restart local v0    # "i":I
label_cond_62:
	test = 0x0;
	goto label_goto_5d;
	// 301    .line 1528
	// 302    .end local v0    # "i":I
label_cond_64:
	if ( this->inRange != test )
		goto label_cond_69;
	cVar1 = 0x1;
label_cond_69:
	return cVar1;

}
// .method public isLimited(Landroid/icu/text/PluralRules$SampleType;)Z
bool android::icu::text::PluralRules_S_RangeConstraint::isLimited(std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType)
{
	
	bool cVar3;
	int hasDecimals;
	
	//    .param p1, "sampleType"    # Landroid/icu/text/PluralRules$SampleType;
	cVar3 = 0x0;
	if ( (this->lowerBound < this->upperBound) )     
		goto label_cond_31;
	if ( (this->lowerBound < 0x0) )     
		goto label_cond_31;
	//    .local v1, "valueIsZero":Z
label_goto_12:
	if ( this->operand == android::icu::text::PluralRules_S_Operand::v )
		goto label_cond_1e;
	if ( this->operand != android::icu::text::PluralRules_S_Operand::w )
		goto label_cond_33;
label_cond_1e:
	if ( this->inRange == valueIsZero )
		goto label_cond_41;
	hasDecimals = 0x1;
	//    .local v0, "hasDecimals":Z
label_goto_23:
	// switch
	{
	auto item = ( android::icu::text::PluralRules_S_RangeConstraint::-getandroid-icu-text-PluralRules$SampleTypeSwitchesValues({const[class].FS-Param})[sampleType->ordinal()] );
	if (item == 1) goto label_pswitch_61;
	if (item == 2) goto label_pswitch_43;
	}
	return cVar3;
	// 381    .line 1533
	// 382    .end local v0    # "hasDecimals":Z
	// 383    .end local v1    # "valueIsZero":Z
label_cond_31:
	//    .restart local v1    # "valueIsZero":Z
	goto label_goto_12;
	// 390    .line 1535
label_cond_33:
	if ( this->operand == android::icu::text::PluralRules_S_Operand::f )
		goto label_cond_1e;
	if ( this->operand == android::icu::text::PluralRules_S_Operand::t )
		goto label_cond_1e;
	0x0;
	//    .restart local v0    # "hasDecimals":Z
	goto label_goto_23;
	// 409    .line 1536
	// 410    .end local v0    # "hasDecimals":Z
label_cond_41:
	0x0;
	//    .restart local v0    # "hasDecimals":Z
	goto label_goto_23;
	// 417    .line 1539
label_pswitch_43:
	if ( hasDecimals )     
		goto label_cond_58;
	if ( this->operand == android::icu::text::PluralRules_S_Operand::n )
		goto label_cond_51;
	if ( this->operand != android::icu::text::PluralRules_S_Operand::i )
		goto label_cond_5a;
label_cond_51:
label_goto_51:
	if ( this->mod )     
		goto label_cond_57;
	cVar3 = this->inRange;
label_cond_57:
label_goto_57:
	return cVar3;
label_cond_58:
	cVar3 = 0x1;
	goto label_goto_57;
	// 454    .line 1540
label_cond_5a:
	if ( this->operand != android::icu::text::PluralRules_S_Operand::j )
		goto label_cond_57;
	goto label_goto_51;
	// 464    .line 1545
label_pswitch_61:
	if ( !(hasDecimals) )  
		goto label_cond_69;
	if ( this->operand != android::icu::text::PluralRules_S_Operand::n )
		goto label_cond_7c;
label_cond_69:
label_goto_69:
	if ( this->integersOnly )     
		goto label_cond_75;
	if ( (this->lowerBound < this->upperBound) )     
		goto label_cond_7b;
label_cond_75:
	if ( this->mod )     
		goto label_cond_7b;
	cVar3 = this->inRange;
label_cond_7b:
	return cVar3;
label_cond_7c:
	if ( this->operand != android::icu::text::PluralRules_S_Operand::j )
		goto label_cond_7b;
	goto label_goto_69;
	// 511    .line 1537
	// 512    nop
	// 514    :pswitch_data_84
	// 515    .packed-switch 0x1
	// 516        :pswitch_61
	// 517        :pswitch_43
	// 518    .end packed-switch

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::PluralRules_S_RangeConstraint::toString()
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::lang::String> cVar1;
	int i;
	bool cVar2;
	
	cVar0 = 0x0;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "result":Ljava/lang/StringBuilder;
	result->append(this->operand);
	if ( !(this->mod) )  
		goto label_cond_1b;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" % ")))->append(this->mod);
label_cond_1b:
	if ( !((this->lowerBound < this->upperBound)) )  
		goto label_cond_4f;
	//    .local v7, "isList":Z
label_goto_24:
	if ( isList )     
		goto label_cond_55;
	if ( !(this->inRange) )  
		goto label_cond_51;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(" = "));
label_goto_2d:
	result->append(cVar1);
	if ( !(this->range_list) )  
		goto label_cond_73;
	i = 0x0;
	//    .local v0, "i":I
label_goto_35:
	if ( i >= this->range_list->size() )
		goto label_cond_7b;
	if ( !(i) )  
		goto label_cond_71;
	cVar2 = 0x1;
label_goto_49:
	android::icu::text::PluralRules::-wrap1(result, (double)(this->range_list[i]), (double)(this->range_list[( i + 0x1)]), cVar2);
	i = ( i + 0x2);
	goto label_goto_35;
	// 624    .line 1560
	// 625    .end local v0    # "i":I
	// 626    .end local v7    # "isList":Z
label_cond_4f:
	//    .restart local v7    # "isList":Z
	goto label_goto_24;
	// 633    .line 1562
label_cond_51:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(" != "));
	goto label_goto_2d;
	// 639    .line 1563
label_cond_55:
	if ( !(this->integersOnly) )  
		goto label_cond_65;
	if ( !(this->inRange) )  
		goto label_cond_61;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(" = "));
	goto label_goto_2d;
label_cond_61:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(" != "));
	goto label_goto_2d;
	// 658    .line 1564
label_cond_65:
	if ( !(this->inRange) )  
		goto label_cond_6d;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(" within "));
	goto label_goto_2d;
label_cond_6d:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(" not within "));
	goto label_goto_2d;
	// 673    .restart local v0    # "i":I
label_cond_71:
	cVar2 = cVar0;
	goto label_goto_49;
	// 680    .line 1571
	// 681    .end local v0    # "i":I
label_cond_73:
	android::icu::text::PluralRules::-wrap1(result, this->lowerBound, this->upperBound, cVar0);
label_cond_7b:
	return result->toString();

}


