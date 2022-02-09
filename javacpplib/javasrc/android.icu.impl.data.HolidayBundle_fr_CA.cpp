// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_fr_CA.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_fr_CA.h"
#include "android.icu.util.EasterHoliday.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_fr_CA::fContents;
static android::icu::impl::data::HolidayBundle_fr_CA::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_fr_CA::static_cinit()
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
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar9;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar10;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar11;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar12;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar13;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar14;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar15;
	
	cVar0 = 0x4;
	cVar1 = 0x8;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0xe);
	cVar6 = std::make_shared<android::icu::util::SimpleHoliday>(cVar4, cVar3, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("New Year\'s Day")));
	cVar5[cVar4] = cVar6;
	cVar7 = std::make_shared<android::icu::util::SimpleHoliday>(cVar0, 0x13, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Victoria Day")));
	cVar5[cVar3] = cVar7;
	cVar8 = std::make_shared<android::icu::util::SimpleHoliday>(0x5, 0x18, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("National Day")));
	cVar5[cVar2] = cVar8;
	cVar9 = std::make_shared<android::icu::util::SimpleHoliday>(0x6, cVar3, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Canada Day")));
	cVar5[0x3] = cVar9;
	cVar10 = std::make_shared<android::icu::util::SimpleHoliday>(0x7, cVar3, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Civic Holiday")));
	cVar5[cVar0] = cVar10;
	cVar11 = std::make_shared<android::icu::util::SimpleHoliday>(cVar1, cVar3, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Labour Day")));
	cVar5[0x5] = cVar11;
	cVar12 = std::make_shared<android::icu::util::SimpleHoliday>(0x9, cVar1, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Thanksgiving")));
	cVar5[0x6] = cVar12;
	cVar13 = std::make_shared<android::icu::util::SimpleHoliday>(0xa, 0xb, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Remembrance Day")));
	cVar5[0x7] = cVar13;
	cVar5[cVar1] = android::icu::util::SimpleHoliday::CHRISTMAS;
	cVar5[0x9] = android::icu::util::SimpleHoliday::BOXING_DAY;
	cVar5[0xa] = android::icu::util::SimpleHoliday::NEW_YEARS_EVE;
	cVar5[0xb] = android::icu::util::EasterHoliday::GOOD_FRIDAY;
	cVar5[0xc] = android::icu::util::EasterHoliday::EASTER_SUNDAY;
	cVar5[0xd] = android::icu::util::EasterHoliday::EASTER_MONDAY;
	android::icu::impl::data::HolidayBundle_fr_CA::fHolidays = cVar5;
	cVar14 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar3);
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar15[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar15[cVar3] = android::icu::impl::data::HolidayBundle_fr_CA::fHolidays;
	cVar14[cVar4] = cVar15;
	android::icu::impl::data::HolidayBundle_fr_CA::fContents = cVar14;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_fr_CA::HolidayBundle_fr_CA()
{
	
	// 199    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_fr_CA::getContents()
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
	return android::icu::impl::data::HolidayBundle_fr_CA::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


