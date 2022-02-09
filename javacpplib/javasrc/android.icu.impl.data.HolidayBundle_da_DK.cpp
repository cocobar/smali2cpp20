// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_da_DK.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_da_DK.h"
#include "android.icu.util.EasterHoliday.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_da_DK::fContents;
static android::icu::impl::data::HolidayBundle_da_DK::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_da_DK::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<android::icu::util::Holiday>>> cVar5;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar6;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar7;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar8;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar9;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x5;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0xd);
	cVar5[cVar4] = android::icu::util::SimpleHoliday::NEW_YEARS_DAY;
	cVar6 = std::make_shared<android::icu::util::SimpleHoliday>(cVar0, 0x1e, -0x6, std::make_shared<java::lang::String>(std::make_shared<char[]>("General Prayer Day")));
	cVar5[cVar3] = cVar6;
	cVar7 = std::make_shared<android::icu::util::SimpleHoliday>(cVar2, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Constitution Day")));
	cVar5[cVar1] = cVar7;
	cVar5[cVar0] = android::icu::util::SimpleHoliday::CHRISTMAS_EVE;
	cVar5[0x4] = android::icu::util::SimpleHoliday::CHRISTMAS;
	cVar5[cVar2] = android::icu::util::SimpleHoliday::BOXING_DAY;
	cVar5[0x6] = android::icu::util::SimpleHoliday::NEW_YEARS_EVE;
	cVar5[0x7] = android::icu::util::EasterHoliday::MAUNDY_THURSDAY;
	cVar5[0x8] = android::icu::util::EasterHoliday::GOOD_FRIDAY;
	cVar5[0x9] = android::icu::util::EasterHoliday::EASTER_SUNDAY;
	cVar5[0xa] = android::icu::util::EasterHoliday::EASTER_MONDAY;
	cVar5[0xb] = android::icu::util::EasterHoliday::ASCENSION;
	cVar5[0xc] = android::icu::util::EasterHoliday::WHIT_MONDAY;
	android::icu::impl::data::HolidayBundle_da_DK::fHolidays = cVar5;
	cVar8 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar3);
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar1);
	cVar9[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar9[cVar3] = android::icu::impl::data::HolidayBundle_da_DK::fHolidays;
	cVar8[cVar4] = cVar9;
	android::icu::impl::data::HolidayBundle_da_DK::fContents = cVar8;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_da_DK::HolidayBundle_da_DK()
{
	
	// 146    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_da_DK::getContents()
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
	return android::icu::impl::data::HolidayBundle_da_DK::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


