// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_iw_IL.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_iw_IL.h"
#include "android.icu.util.HebrewHoliday.h"
#include "android.icu.util.Holiday.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_iw_IL::fContents;
static android::icu::impl::data::HolidayBundle_iw_IL::fHolidays;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_iw_IL::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<std::vector<android::icu::util::Holiday>>> cVar3;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar4;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar5;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0x7);
	cVar3[cVar2] = android::icu::util::HebrewHoliday::ROSH_HASHANAH;
	cVar3[cVar1] = android::icu::util::HebrewHoliday::YOM_KIPPUR;
	cVar3[cVar0] = android::icu::util::HebrewHoliday::HANUKKAH;
	cVar3[0x3] = android::icu::util::HebrewHoliday::PURIM;
	cVar3[0x4] = android::icu::util::HebrewHoliday::PASSOVER;
	cVar3[0x5] = android::icu::util::HebrewHoliday::SHAVUOT;
	cVar3[0x6] = android::icu::util::HebrewHoliday::SELIHOT;
	android::icu::impl::data::HolidayBundle_iw_IL::fHolidays = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(cVar1);
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays"));
	cVar5[cVar1] = android::icu::impl::data::HolidayBundle_iw_IL::fHolidays;
	cVar4[cVar2] = cVar5;
	android::icu::impl::data::HolidayBundle_iw_IL::fContents = cVar4;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_iw_IL::HolidayBundle_iw_IL()
{
	
	// 102    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_iw_IL::getContents()
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
	return android::icu::impl::data::HolidayBundle_iw_IL::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


