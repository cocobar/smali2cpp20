// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\EasterHoliday.smali
#include "java2ctype.h"
#include "android.icu.util.EasterHoliday.h"
#include "android.icu.util.EasterRule.h"
#include "android.icu.util.Holiday.h"
#include "java.lang.String.h"

static android::icu::util::EasterHoliday::ASCENSION;
static android::icu::util::EasterHoliday::ASH_WEDNESDAY;
static android::icu::util::EasterHoliday::CORPUS_CHRISTI;
static android::icu::util::EasterHoliday::EASTER_MONDAY;
static android::icu::util::EasterHoliday::EASTER_SUNDAY;
static android::icu::util::EasterHoliday::GOOD_FRIDAY;
static android::icu::util::EasterHoliday::MAUNDY_THURSDAY;
static android::icu::util::EasterHoliday::PALM_SUNDAY;
static android::icu::util::EasterHoliday::PENTECOST;
static android::icu::util::EasterHoliday::SHROVE_TUESDAY;
static android::icu::util::EasterHoliday::WHIT_MONDAY;
static android::icu::util::EasterHoliday::WHIT_SUNDAY;
// .method static constructor <clinit>()V
void android::icu::util::EasterHoliday::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar1;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar2;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar3;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar4;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar5;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar6;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar7;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar8;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar9;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar10;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar11;
	std::shared_ptr<android::icu::util::EasterHoliday> cVar12;
	
	cVar0 = 0x31;
	cVar1 = std::make_shared<android::icu::util::EasterHoliday>(-0x30, std::make_shared<java::lang::String>(std::make_shared<char[]>("Shrove Tuesday")));
	android::icu::util::EasterHoliday::SHROVE_TUESDAY = cVar1;
	cVar2 = std::make_shared<android::icu::util::EasterHoliday>(-0x2f, std::make_shared<java::lang::String>(std::make_shared<char[]>("Ash Wednesday")));
	android::icu::util::EasterHoliday::ASH_WEDNESDAY = cVar2;
	cVar3 = std::make_shared<android::icu::util::EasterHoliday>(-0x7, std::make_shared<java::lang::String>(std::make_shared<char[]>("Palm Sunday")));
	android::icu::util::EasterHoliday::PALM_SUNDAY = cVar3;
	cVar4 = std::make_shared<android::icu::util::EasterHoliday>(-0x3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Maundy Thursday")));
	android::icu::util::EasterHoliday::MAUNDY_THURSDAY = cVar4;
	cVar5 = std::make_shared<android::icu::util::EasterHoliday>(-0x2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Good Friday")));
	android::icu::util::EasterHoliday::GOOD_FRIDAY = cVar5;
	cVar6 = std::make_shared<android::icu::util::EasterHoliday>(0x0, std::make_shared<java::lang::String>(std::make_shared<char[]>("Easter Sunday")));
	android::icu::util::EasterHoliday::EASTER_SUNDAY = cVar6;
	cVar7 = std::make_shared<android::icu::util::EasterHoliday>(0x1, std::make_shared<java::lang::String>(std::make_shared<char[]>("Easter Monday")));
	android::icu::util::EasterHoliday::EASTER_MONDAY = cVar7;
	cVar8 = std::make_shared<android::icu::util::EasterHoliday>(0x27, std::make_shared<java::lang::String>(std::make_shared<char[]>("Ascension")));
	android::icu::util::EasterHoliday::ASCENSION = cVar8;
	cVar9 = std::make_shared<android::icu::util::EasterHoliday>(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("Pentecost")));
	android::icu::util::EasterHoliday::PENTECOST = cVar9;
	cVar10 = std::make_shared<android::icu::util::EasterHoliday>(cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("Whit Sunday")));
	android::icu::util::EasterHoliday::WHIT_SUNDAY = cVar10;
	cVar11 = std::make_shared<android::icu::util::EasterHoliday>(0x32, std::make_shared<java::lang::String>(std::make_shared<char[]>("Whit Monday")));
	android::icu::util::EasterHoliday::WHIT_MONDAY = cVar11;
	cVar12 = std::make_shared<android::icu::util::EasterHoliday>(0x3c, std::make_shared<java::lang::String>(std::make_shared<char[]>("Corpus Christi")));
	android::icu::util::EasterHoliday::CORPUS_CHRISTI = cVar12;
	return;

}
// .method public constructor <init>(ILjava/lang/String;)V
android::icu::util::EasterHoliday::EasterHoliday(int daysAfter,std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::EasterRule> cVar0;
	
	//    .param p1, "daysAfter"    # I
	//    .param p2, "name"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::EasterRule>(daysAfter, 0x0);
	android::icu::util::Holiday::(name, cVar0);
	return;

}
// .method public constructor <init>(IZLjava/lang/String;)V
android::icu::util::EasterHoliday::EasterHoliday(int daysAfter,bool orthodox,std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::EasterRule> cVar0;
	
	//    .param p1, "daysAfter"    # I
	//    .param p2, "orthodox"    # Z
	//    .param p3, "name"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::EasterRule>(daysAfter, orthodox);
	android::icu::util::Holiday::(name, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::EasterHoliday::EasterHoliday(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::EasterRule> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::util::EasterRule>(cVar0, cVar0);
	android::icu::util::Holiday::(name, cVar1);
	return;

}


