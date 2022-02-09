// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_en_GB.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_en_GB.h"
#include "android.icu.util.EasterHoliday.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_en_GB::fContents;
static android::icu::impl::data::HolidayBundle_en_GB::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_en_GB::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<android::icu::util::Holiday>>> cVar5;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar6;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar7;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar8;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar9;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar10;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar11;
	
	cVar0 = 0x1f;
	cVar1 = -0x2;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0xa);
	cVar5[cVar4] = android::icu::util::SimpleHoliday::NEW_YEARS_DAY;
	cVar5[cVar3] = android::icu::util::SimpleHoliday::MAY_DAY;
	cVar6 = std::make_shared<android::icu::util::SimpleHoliday>(0x4, cVar0, cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("Spring Holiday")));
	cVar5[cVar2] = cVar6;
	cVar7 = std::make_shared<android::icu::util::SimpleHoliday>(0x7, cVar0, cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("Summer Bank Holiday")));
	cVar5[0x3] = cVar7;
	cVar5[0x4] = android::icu::util::SimpleHoliday::CHRISTMAS;
	cVar5[0x5] = android::icu::util::SimpleHoliday::BOXING_DAY;
	cVar8 = std::make_shared<android::icu::util::SimpleHoliday>(0xb, cVar0, cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("Christmas Holiday")));
	cVar5[0x6] = cVar8;
	cVar5[0x7] = android::icu::util::EasterHoliday::GOOD_FRIDAY;
	cVar5[0x8] = android::icu::util::EasterHoliday::EASTER_SUNDAY;
	cVar5[0x9] = android::icu::util::EasterHoliday::EASTER_MONDAY;
	android::icu::impl::data::HolidayBundle_en_GB::fHolidays = cVar5;
	cVar9 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar2);
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar10[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar10[cVar3] = android::icu::impl::data::HolidayBundle_en_GB::fHolidays;
	cVar9[cVar4] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar11[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Labor Day"));
	cVar11[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Labour Day"));
	cVar9[cVar3] = cVar11;
	android::icu::impl::data::HolidayBundle_en_GB::fContents = cVar9;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_en_GB::HolidayBundle_en_GB()
{
	
	// 158    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_en_GB::getContents()
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
	return android::icu::impl::data::HolidayBundle_en_GB::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


