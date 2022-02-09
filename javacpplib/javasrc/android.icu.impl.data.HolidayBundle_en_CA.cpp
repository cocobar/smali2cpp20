// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_en_CA.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_en_CA.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_en_CA::fContents;
static android::icu::impl::data::HolidayBundle_en_CA::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_en_CA::static_cinit()
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
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar12;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar13;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar14;
	
	cVar0 = 0x4;
	cVar1 = 0x8;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0xa);
	cVar5[cVar4] = android::icu::util::SimpleHoliday::NEW_YEARS_DAY;
	cVar6 = std::make_shared<android::icu::util::SimpleHoliday>(cVar0, 0x13, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Victoria Day")));
	cVar5[cVar3] = cVar6;
	cVar7 = std::make_shared<android::icu::util::SimpleHoliday>(0x6, cVar3, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Canada Day")));
	cVar5[cVar2] = cVar7;
	cVar8 = std::make_shared<android::icu::util::SimpleHoliday>(0x7, cVar3, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Civic Holiday")));
	cVar5[0x3] = cVar8;
	cVar9 = std::make_shared<android::icu::util::SimpleHoliday>(cVar1, cVar3, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Labor Day")));
	cVar5[cVar0] = cVar9;
	cVar10 = std::make_shared<android::icu::util::SimpleHoliday>(0x9, cVar1, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Thanksgiving")));
	cVar5[0x5] = cVar10;
	cVar11 = std::make_shared<android::icu::util::SimpleHoliday>(0xa, 0xb, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Remembrance Day")));
	cVar5[0x6] = cVar11;
	cVar5[0x7] = android::icu::util::SimpleHoliday::CHRISTMAS;
	cVar5[cVar1] = android::icu::util::SimpleHoliday::BOXING_DAY;
	cVar5[0x9] = android::icu::util::SimpleHoliday::NEW_YEARS_EVE;
	android::icu::impl::data::HolidayBundle_en_CA::fHolidays = cVar5;
	cVar12 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar2);
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar13[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar13[cVar3] = android::icu::impl::data::HolidayBundle_en_CA::fHolidays;
	cVar12[cVar4] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar14[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Labor Day"));
	cVar14[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Labour Day"));
	cVar12[cVar3] = cVar14;
	android::icu::impl::data::HolidayBundle_en_CA::fContents = cVar12;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_en_CA::HolidayBundle_en_CA()
{
	
	// 172    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_en_CA::getContents()
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
	return android::icu::impl::data::HolidayBundle_en_CA::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


