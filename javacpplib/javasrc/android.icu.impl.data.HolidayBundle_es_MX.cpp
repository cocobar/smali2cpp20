// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_es_MX.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_es_MX.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_es_MX::fContents;
static android::icu::impl::data::HolidayBundle_es_MX::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_es_MX::static_cinit()
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
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar14;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar15;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar16;
	
	cVar0 = 0xa;
	cVar1 = 0x5;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0xd);
	cVar5[cVar4] = android::icu::util::SimpleHoliday::NEW_YEARS_DAY;
	cVar6 = std::make_shared<android::icu::util::SimpleHoliday>(cVar3, cVar1, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Constitution Day")));
	cVar5[cVar3] = cVar6;
	cVar7 = std::make_shared<android::icu::util::SimpleHoliday>(cVar2, 0x15, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Benito Ju\u00e1rez Day")));
	cVar5[cVar2] = cVar7;
	cVar5[0x3] = android::icu::util::SimpleHoliday::MAY_DAY;
	cVar8 = std::make_shared<android::icu::util::SimpleHoliday>(0x4, cVar1, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Cinco de Mayo")));
	cVar5[0x4] = cVar8;
	cVar9 = std::make_shared<android::icu::util::SimpleHoliday>(cVar1, cVar3, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Navy Day")));
	cVar5[cVar1] = cVar9;
	cVar10 = std::make_shared<android::icu::util::SimpleHoliday>(0x8, 0x10, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Independence Day")));
	cVar5[0x6] = cVar10;
	cVar11 = std::make_shared<android::icu::util::SimpleHoliday>(0x9, 0xc, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("D\u00eda de la Raza")));
	cVar5[0x7] = cVar11;
	cVar5[0x8] = android::icu::util::SimpleHoliday::ALL_SAINTS_DAY;
	cVar12 = std::make_shared<android::icu::util::SimpleHoliday>(cVar0, cVar2, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Day of the Dead")));
	cVar5[0x9] = cVar12;
	cVar13 = std::make_shared<android::icu::util::SimpleHoliday>(cVar0, 0x14, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Revolution Day")));
	cVar5[cVar0] = cVar13;
	cVar14 = std::make_shared<android::icu::util::SimpleHoliday>(0xb, 0xc, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Flag Day")));
	cVar5[0xb] = cVar14;
	cVar5[0xc] = android::icu::util::SimpleHoliday::CHRISTMAS;
	android::icu::impl::data::HolidayBundle_es_MX::fHolidays = cVar5;
	cVar15 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar3);
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar2);
	cVar16[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar16[cVar3] = android::icu::impl::data::HolidayBundle_es_MX::fHolidays;
	cVar15[cVar4] = cVar16;
	android::icu::impl::data::HolidayBundle_es_MX::fContents = cVar15;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_es_MX::HolidayBundle_es_MX()
{
	
	// 198    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_es_MX::getContents()
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
	return android::icu::impl::data::HolidayBundle_es_MX::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


