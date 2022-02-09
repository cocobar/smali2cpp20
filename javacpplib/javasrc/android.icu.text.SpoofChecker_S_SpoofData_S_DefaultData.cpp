// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$SpoofData$DefaultData.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.text.SpoofChecker_S_SpoofData_S_DefaultData.h"
#include "android.icu.text.SpoofChecker_S_SpoofData.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

static android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::EXCEPTION;
static android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::INSTANCE;
// .method static synthetic -get0()Ljava/io/IOException;
std::shared_ptr<java::io::IOException> android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::_get0()
{
	
	return android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::EXCEPTION;

}
// .method static synthetic -get1()Landroid/icu/text/SpoofChecker$SpoofData;
std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::_get1()
{
	
	return android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::INSTANCE;

}
// .method static constructor <clinit>()V
void android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::static_cinit()
{
	
	std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> cVar0;
	std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::INSTANCE = cVar0;
	android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::EXCEPTION = cVar0;
	try {
	//label_try_start_5:
	cVar1 = std::make_shared<android::icu::text::SpoofChecker_S_SpoofData>(android::icu::impl::ICUBinary::getRequiredData(std::make_shared<java::lang::String>(std::make_shared<char[]>("confusables.cfu"))), 0x0);
	android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::INSTANCE = cVar1;
	//label_try_end_14:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	//    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_14} :catch_15
	//    .local v0, "e":Ljava/io/IOException;
label_goto_14:
	return;
	// 075    .line 1716
	// 076    .end local v0    # "e":Ljava/io/IOException;
label_catch_15:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/io/IOException;
	android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::EXCEPTION = getCatchExcetionFromList;
	goto label_goto_14;

}
// .method private constructor <init>()V
android::icu::text::SpoofChecker_S_SpoofData_S_DefaultData::SpoofChecker_S_SpoofData_S_DefaultData()
{
	
	// 092    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


