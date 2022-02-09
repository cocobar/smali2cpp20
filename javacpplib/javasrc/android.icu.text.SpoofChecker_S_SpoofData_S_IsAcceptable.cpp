// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$SpoofData$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_SpoofData_S_IsAcceptable.h"

// .method private constructor <init>()V
android::icu::text::SpoofChecker_S_SpoofData_S_IsAcceptable::SpoofChecker_S_SpoofData_S_IsAcceptable()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/SpoofChecker$SpoofData$IsAcceptable;)V
android::icu::text::SpoofChecker_S_SpoofData_S_IsAcceptable::SpoofChecker_S_SpoofData_S_IsAcceptable(std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData_S_IsAcceptable> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/SpoofChecker$SpoofData$IsAcceptable;
	// 036    invoke-direct {p0}, Landroid/icu/text/SpoofChecker$SpoofData$IsAcceptable;-><init>()V
	return;

}
// .method public isDataVersionAcceptable([B)Z
bool android::icu::text::SpoofChecker_S_SpoofData_S_IsAcceptable::isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version)
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	
	//    .param p1, "version"    # [B
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( version[cVar2] == cVar0 )
		goto label_cond_b;
	if ( !(version[cVar1]) )  
		goto label_cond_c;
label_cond_b:
label_goto_b:
	return cVar1;
label_cond_c:
	if ( version[cVar0] )     
		goto label_cond_b;
	if ( version[0x3] )     
		goto label_cond_b;
	cVar1 = cVar2;
	goto label_goto_b;

}


