// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_de_AT.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_de_AT.h"
#include "android.icu.util.EasterHoliday.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_de_AT::fContents;
static android::icu::impl::data::HolidayBundle_de_AT::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_de_AT::static_cinit()
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
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar10;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0x10);
	cVar5[cVar4] = android::icu::util::SimpleHoliday::NEW_YEARS_DAY;
	cVar5[cVar3] = android::icu::util::SimpleHoliday::EPIPHANY;
	cVar5[cVar2] = android::icu::util::EasterHoliday::GOOD_FRIDAY;
	cVar5[cVar1] = android::icu::util::EasterHoliday::EASTER_SUNDAY;
	cVar5[cVar0] = android::icu::util::EasterHoliday::EASTER_MONDAY;
	cVar5[0x5] = android::icu::util::EasterHoliday::ASCENSION;
	cVar5[0x6] = android::icu::util::EasterHoliday::WHIT_SUNDAY;
	cVar5[0x7] = android::icu::util::EasterHoliday::WHIT_MONDAY;
	cVar5[0x8] = android::icu::util::EasterHoliday::CORPUS_CHRISTI;
	cVar5[0x9] = android::icu::util::SimpleHoliday::ASSUMPTION;
	cVar5[0xa] = android::icu::util::SimpleHoliday::ALL_SAINTS_DAY;
	cVar5[0xb] = android::icu::util::SimpleHoliday::IMMACULATE_CONCEPTION;
	cVar5[0xc] = android::icu::util::SimpleHoliday::CHRISTMAS;
	cVar5[0xd] = android::icu::util::SimpleHoliday::ST_STEPHENS_DAY;
	cVar6 = std::make_shared<android::icu::util::SimpleHoliday>(cVar0, cVar3, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("National Holiday")));
	cVar5[0xe] = cVar6;
	cVar7 = std::make_shared<android::icu::util::SimpleHoliday>(0x9, 0x1f, -0x2, std::make_shared<java::lang::String>(std::make_shared<char[]>("National Holiday")));
	cVar5[0xf] = cVar7;
	android::icu::impl::data::HolidayBundle_de_AT::fHolidays = cVar5;
	cVar8 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar1);
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar9[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar9[cVar3] = android::icu::impl::data::HolidayBundle_de_AT::fHolidays;
	cVar8[cVar4] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar10[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Christmas"));
	cVar10[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Christtag"));
	cVar8[cVar3] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar11[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("New Year\'s Day"));
	cVar11[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Neujahrstag"));
	cVar8[cVar2] = cVar11;
	android::icu::impl::data::HolidayBundle_de_AT::fContents = cVar8;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_de_AT::HolidayBundle_de_AT()
{
	
	// 205    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_de_AT::getContents()
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
	return android::icu::impl::data::HolidayBundle_de_AT::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


