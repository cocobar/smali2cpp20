// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_el_GR.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_el_GR.h"
#include "android.icu.util.EasterHoliday.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_el_GR::fContents;
static android::icu::impl::data::HolidayBundle_el_GR::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_el_GR::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar3;
	std::shared<std::vector<std::vector<android::icu::util::Holiday>>> cVar4;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar5;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar6;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar7;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar8;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar9;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar10;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar11;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar12;
	
	cVar0 = 0x9;
	cVar1 = 0x2;
	cVar2 = 0x0;
	cVar3 = 0x1;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0xc);
	cVar4[cVar2] = android::icu::util::SimpleHoliday::NEW_YEARS_DAY;
	cVar4[cVar3] = android::icu::util::SimpleHoliday::EPIPHANY;
	cVar5 = std::make_shared<android::icu::util::SimpleHoliday>(cVar1, 0x19, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Independence Day")));
	cVar4[cVar1] = cVar5;
	cVar4[0x3] = android::icu::util::SimpleHoliday::MAY_DAY;
	cVar4[0x4] = android::icu::util::SimpleHoliday::ASSUMPTION;
	cVar6 = std::make_shared<android::icu::util::SimpleHoliday>(cVar0, 0x1c, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Ochi Day")));
	cVar4[0x5] = cVar6;
	cVar4[0x6] = android::icu::util::SimpleHoliday::CHRISTMAS;
	cVar4[0x7] = android::icu::util::SimpleHoliday::BOXING_DAY;
	cVar7 = std::make_shared<android::icu::util::EasterHoliday>(-0x2, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Good Friday")));
	cVar4[0x8] = cVar7;
	cVar8 = std::make_shared<android::icu::util::EasterHoliday>(cVar2, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Easter Sunday")));
	cVar4[cVar0] = cVar8;
	cVar9 = std::make_shared<android::icu::util::EasterHoliday>(cVar3, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Easter Monday")));
	cVar4[0xa] = cVar9;
	cVar10 = std::make_shared<android::icu::util::EasterHoliday>(0x32, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Whit Monday")));
	cVar4[0xb] = cVar10;
	android::icu::impl::data::HolidayBundle_el_GR::fHolidays = cVar4;
	cVar11 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar3);
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar1);
	cVar12[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar12[cVar3] = android::icu::impl::data::HolidayBundle_el_GR::fHolidays;
	cVar11[cVar2] = cVar12;
	android::icu::impl::data::HolidayBundle_el_GR::fContents = cVar11;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_el_GR::HolidayBundle_el_GR()
{
	
	// 169    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_el_GR::getContents()
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
	return android::icu::impl::data::HolidayBundle_el_GR::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


