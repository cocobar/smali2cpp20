// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit$1.smali
#include "java2ctype.h"
#include "android.icu.util.MeasureUnit_S_1.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.String.h"

// .method constructor <init>()V
android::icu::util::MeasureUnit_S_1::MeasureUnit_S_1()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public create(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/MeasureUnit;
std::shared_ptr<android::icu::util::MeasureUnit> android::icu::util::MeasureUnit_S_1::create(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> subType)
{
	
	std::shared_ptr<android::icu::util::MeasureUnit> cVar0;
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "subType"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::MeasureUnit>(type, subType);
	return cVar0;

}


