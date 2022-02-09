// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_en_US.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_en_US.h"
#include "android.icu.util.EasterHoliday.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_en_US::fContents;
static android::icu::impl::data::HolidayBundle_en_US::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_en_US::static_cinit()
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
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar15;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar16;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar17;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar18;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar19;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar20;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar21;
	
	cVar0 = 0x8;
	cVar1 = 0x0;
	cVar2 = 0x4;
	cVar3 = 0x2;
	cVar4 = 0x1;
	cVar5 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0x12);
	cVar5[cVar1] = android::icu::util::SimpleHoliday::NEW_YEARS_DAY;
	cVar6 = std::make_shared<android::icu::util::SimpleHoliday>(cVar1, 0xf, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Martin Luther King Day")), 0x7c2);
	cVar5[cVar4] = cVar6;
	cVar7 = std::make_shared<android::icu::util::SimpleHoliday>(cVar4, 0xf, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Presidents\' Day")), 0x7b8);
	cVar5[cVar3] = cVar7;
	cVar8 = std::make_shared<android::icu::util::SimpleHoliday>(cVar4, 0x16, std::make_shared<java::lang::String>(std::make_shared<char[]>("Washington\'s Birthday")), 0x6f0, 0x7b7);
	cVar5[0x3] = cVar8;
	cVar5[cVar2] = android::icu::util::EasterHoliday::GOOD_FRIDAY;
	cVar5[0x5] = android::icu::util::EasterHoliday::EASTER_SUNDAY;
	cVar9 = std::make_shared<android::icu::util::SimpleHoliday>(cVar2, cVar0, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Mother\'s Day")), 0x77a);
	cVar5[0x6] = cVar9;
	cVar10 = std::make_shared<android::icu::util::SimpleHoliday>(cVar2, 0x1f, -0x2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Memorial Day")), 0x7b3);
	cVar5[0x7] = cVar10;
	cVar11 = std::make_shared<android::icu::util::SimpleHoliday>(cVar2, 0x1e, std::make_shared<java::lang::String>(std::make_shared<char[]>("Memorial Day")), 0x74c, 0x7b2);
	cVar5[cVar0] = cVar11;
	cVar12 = std::make_shared<android::icu::util::SimpleHoliday>(0x5, 0xf, cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Father\'s Day")), 0x7a4);
	cVar5[0x9] = cVar12;
	cVar13 = std::make_shared<android::icu::util::SimpleHoliday>(0x6, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Independence Day")), 0x6f0);
	cVar5[0xa] = cVar13;
	cVar14 = std::make_shared<android::icu::util::SimpleHoliday>(cVar0, cVar4, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Labor Day")), 0x766);
	cVar5[0xb] = cVar14;
	cVar15 = std::make_shared<android::icu::util::SimpleHoliday>(0xa, cVar3, 0x3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Election Day")));
	cVar5[0xc] = cVar15;
	cVar16 = std::make_shared<android::icu::util::SimpleHoliday>(0x9, cVar0, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Columbus Day")), 0x7b3);
	cVar5[0xd] = cVar16;
	cVar17 = std::make_shared<android::icu::util::SimpleHoliday>(0x9, 0x1f, std::make_shared<java::lang::String>(std::make_shared<char[]>("Halloween")));
	cVar5[0xe] = cVar17;
	cVar18 = std::make_shared<android::icu::util::SimpleHoliday>(0xa, 0xb, std::make_shared<java::lang::String>(std::make_shared<char[]>("Veterans\' Day")), 0x77e);
	cVar5[0xf] = cVar18;
	cVar19 = std::make_shared<android::icu::util::SimpleHoliday>(0xa, 0x16, 0x5, std::make_shared<java::lang::String>(std::make_shared<char[]>("Thanksgiving")), 0x747);
	cVar5[0x10] = cVar19;
	cVar5[0x11] = android::icu::util::SimpleHoliday::CHRISTMAS;
	android::icu::impl::data::HolidayBundle_en_US::fHolidays = cVar5;
	cVar20 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar4);
	cVar21 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar3);
	cVar21[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar21[cVar4] = android::icu::impl::data::HolidayBundle_en_US::fHolidays;
	cVar20[cVar1] = cVar21;
	android::icu::impl::data::HolidayBundle_en_US::fContents = cVar20;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_en_US::HolidayBundle_en_US()
{
	
	// 329    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_en_US::getContents()
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
	return android::icu::impl::data::HolidayBundle_en_US::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


