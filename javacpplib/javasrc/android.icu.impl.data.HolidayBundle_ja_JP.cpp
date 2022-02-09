// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_ja_JP.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_ja_JP.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_ja_JP::fContents;
static android::icu::impl::data::HolidayBundle_ja_JP::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_ja_JP::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<std::vector<android::icu::util::Holiday>>> cVar2;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar3;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar4;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar5;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(cVar0);
	cVar3 = std::make_shared<android::icu::util::SimpleHoliday>(cVar0, 0xb, cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("National Foundation Day")));
	cVar2[cVar1] = cVar3;
	android::icu::impl::data::HolidayBundle_ja_JP::fHolidays = cVar2;
	cVar4 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar0);
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar5[cVar0] = android::icu::impl::data::HolidayBundle_ja_JP::fHolidays;
	cVar4[cVar1] = cVar5;
	android::icu::impl::data::HolidayBundle_ja_JP::fContents = cVar4;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_ja_JP::HolidayBundle_ja_JP()
{
	
	// 068    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_ja_JP::getContents()
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
	return android::icu::impl::data::HolidayBundle_ja_JP::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


