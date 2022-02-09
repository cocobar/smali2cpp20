// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_en.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_en.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_en::fContents;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_en::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar2;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar3;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar0);
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar3[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar3[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar2[cVar1] = cVar3;
	android::icu::impl::data::HolidayBundle_en::fContents = cVar2;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_en::HolidayBundle_en()
{
	
	// 049    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_en::getContents()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_5;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_5
	this->monitor_exit();
	return android::icu::impl::data::HolidayBundle_en::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


