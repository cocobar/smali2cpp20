// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$VariableField.smali
#include "java2ctype.h"
#include "android.icu.text.DateTimePatternGenerator_S_VariableField.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method static synthetic -wrap0(Landroid/icu/text/DateTimePatternGenerator$VariableField;)I
int android::icu::text::DateTimePatternGenerator_S_VariableField::_wrap0(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/DateTimePatternGenerator$VariableField;
	return _this->getCanonicalIndex();

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::DateTimePatternGenerator_S_VariableField::DateTimePatternGenerator_S_VariableField(std::shared_ptr<java::lang::String> string)
{
	
	//    .param p1, "string"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 043    .end annotation
	android::icu::text::DateTimePatternGenerator_S_VariableField::(string, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Z)V
android::icu::text::DateTimePatternGenerator_S_VariableField::DateTimePatternGenerator_S_VariableField(std::shared_ptr<java::lang::String> string,bool strict)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "string"    # Ljava/lang/String;
	//    .param p2, "strict"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 060    .end annotation
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->canonicalIndex = android::icu::text::DateTimePatternGenerator::-wrap3(string, strict);
	if ( this->canonicalIndex >= 0 )
		goto label_cond_27;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal datetime field:\t")))->append(string)->toString());
	// throw
	throw cVar0;
	// 103    .line 1271
label_cond_27:
	this->string = string;
	return;

}
// .method public static getCanonicalCode(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_VariableField::getCanonicalCode(int type)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "type"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 115    .end annotation
	try {
	//label_try_start_0:
	//label_try_end_6:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_6} :catch_7
	return android::icu::text::DateTimePatternGenerator::-get0({const[class].FS-Param})[type];
	// 130    .line 1297
label_catch_7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return java::lang::String::valueOf(type);

}
// .method private getCanonicalIndex()I
int android::icu::text::DateTimePatternGenerator_S_VariableField::getCanonicalIndex()
{
	
	return this->canonicalIndex;

}
// .method public getType()I
int android::icu::text::DateTimePatternGenerator_S_VariableField::getType()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 158    .end annotation
	return android::icu::text::DateTimePatternGenerator::-get1({const[class].FS-Param})[this->canonicalIndex][0x1];

}
// .method public isNumeric()Z
bool android::icu::text::DateTimePatternGenerator_S_VariableField::isNumeric()
{
	
	bool cVar1;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 180    .end annotation
	cVar1 = 0x0;
	if ( android::icu::text::DateTimePatternGenerator::-get1({const[class].FS-Param})[this->canonicalIndex][0x2] <= 0 )
		goto label_cond_f;
	cVar1 = 0x1;
label_cond_f:
	return cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_VariableField::toString()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 209    .end annotation
	return this->string;

}


