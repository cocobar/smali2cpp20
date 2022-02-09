// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\HebrewHoliday.smali
#include "java2ctype.h"
#include "android.icu.util.HebrewCalendar.h"
#include "android.icu.util.HebrewHoliday.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.SimpleDateRule.h"
#include "java.lang.String.h"

static android::icu::util::HebrewHoliday::ESTHER;
static android::icu::util::HebrewHoliday::GEDALIAH;
static android::icu::util::HebrewHoliday::HANUKKAH;
static android::icu::util::HebrewHoliday::HOSHANAH_RABBAH;
static android::icu::util::HebrewHoliday::LAG_BOMER;
static android::icu::util::HebrewHoliday::PASSOVER;
static android::icu::util::HebrewHoliday::PESACH_SHEINI;
static android::icu::util::HebrewHoliday::PURIM;
static android::icu::util::HebrewHoliday::ROSH_HASHANAH;
static android::icu::util::HebrewHoliday::SELIHOT;
static android::icu::util::HebrewHoliday::SHAVUOT;
static android::icu::util::HebrewHoliday::SHEMINI_ATZERET;
static android::icu::util::HebrewHoliday::SHUSHAN_PURIM;
static android::icu::util::HebrewHoliday::SIMCHAT_TORAH;
static android::icu::util::HebrewHoliday::SUKKOT;
static android::icu::util::HebrewHoliday::TAMMUZ_17;
static android::icu::util::HebrewHoliday::TEVET_10;
static android::icu::util::HebrewHoliday::TISHA_BAV;
static android::icu::util::HebrewHoliday::TU_BSHEVAT;
static android::icu::util::HebrewHoliday::YOM_HAATZMAUT;
static android::icu::util::HebrewHoliday::YOM_HASHOAH;
static android::icu::util::HebrewHoliday::YOM_HAZIKARON;
static android::icu::util::HebrewHoliday::YOM_KIPPUR;
static android::icu::util::HebrewHoliday::YOM_YERUSHALAYIM;
static android::icu::util::HebrewHoliday::gCalendar;
// .method static constructor <clinit>()V
void android::icu::util::HebrewHoliday::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::util::HebrewCalendar> cVar5;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar6;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar7;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar8;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar9;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar10;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar11;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar12;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar13;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar14;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar15;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar16;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar17;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar18;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar19;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar20;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar21;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar22;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar23;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar24;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar25;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar26;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar27;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar28;
	std::shared_ptr<android::icu::util::HebrewHoliday> cVar29;
	
	cVar0 = 0x2;
	cVar1 = 0xf;
	cVar2 = 0x6;
	cVar3 = 0x8;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::util::HebrewCalendar>();
	android::icu::util::HebrewHoliday::gCalendar = cVar5;
	cVar6 = std::make_shared<android::icu::util::HebrewHoliday>(cVar4, 0x1, cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("Rosh Hashanah")));
	android::icu::util::HebrewHoliday::ROSH_HASHANAH = cVar6;
	cVar7 = std::make_shared<android::icu::util::HebrewHoliday>(cVar4, 0x3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Fast of Gedaliah")));
	android::icu::util::HebrewHoliday::GEDALIAH = cVar7;
	cVar8 = std::make_shared<android::icu::util::HebrewHoliday>(cVar4, 0xa, std::make_shared<java::lang::String>(std::make_shared<char[]>("Yom Kippur")));
	android::icu::util::HebrewHoliday::YOM_KIPPUR = cVar8;
	cVar9 = std::make_shared<android::icu::util::HebrewHoliday>(cVar4, cVar1, cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("Sukkot")));
	android::icu::util::HebrewHoliday::SUKKOT = cVar9;
	cVar10 = std::make_shared<android::icu::util::HebrewHoliday>(cVar4, 0x15, std::make_shared<java::lang::String>(std::make_shared<char[]>("Hoshanah Rabbah")));
	android::icu::util::HebrewHoliday::HOSHANAH_RABBAH = cVar10;
	cVar11 = std::make_shared<android::icu::util::HebrewHoliday>(cVar4, 0x16, std::make_shared<java::lang::String>(std::make_shared<char[]>("Shemini Atzeret")));
	android::icu::util::HebrewHoliday::SHEMINI_ATZERET = cVar11;
	cVar12 = std::make_shared<android::icu::util::HebrewHoliday>(cVar4, 0x17, std::make_shared<java::lang::String>(std::make_shared<char[]>("Simchat Torah")));
	android::icu::util::HebrewHoliday::SIMCHAT_TORAH = cVar12;
	cVar13 = std::make_shared<android::icu::util::HebrewHoliday>(cVar0, 0x19, std::make_shared<java::lang::String>(std::make_shared<char[]>("Hanukkah")));
	android::icu::util::HebrewHoliday::HANUKKAH = cVar13;
	cVar14 = std::make_shared<android::icu::util::HebrewHoliday>(0x3, 0xa, std::make_shared<java::lang::String>(std::make_shared<char[]>("Fast of Tevet 10")));
	android::icu::util::HebrewHoliday::TEVET_10 = cVar14;
	cVar15 = std::make_shared<android::icu::util::HebrewHoliday>(0x4, cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("Tu B\'Shevat")));
	android::icu::util::HebrewHoliday::TU_BSHEVAT = cVar15;
	cVar16 = std::make_shared<android::icu::util::HebrewHoliday>(cVar2, 0xd, std::make_shared<java::lang::String>(std::make_shared<char[]>("Fast of Esther")));
	android::icu::util::HebrewHoliday::ESTHER = cVar16;
	cVar17 = std::make_shared<android::icu::util::HebrewHoliday>(cVar2, 0xe, std::make_shared<java::lang::String>(std::make_shared<char[]>("Purim")));
	android::icu::util::HebrewHoliday::PURIM = cVar17;
	cVar18 = std::make_shared<android::icu::util::HebrewHoliday>(cVar2, cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("Shushan Purim")));
	android::icu::util::HebrewHoliday::SHUSHAN_PURIM = cVar18;
	cVar19 = std::make_shared<android::icu::util::HebrewHoliday>(0x7, cVar1, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("Passover")));
	android::icu::util::HebrewHoliday::PASSOVER = cVar19;
	cVar20 = std::make_shared<android::icu::util::HebrewHoliday>(0x7, 0x1b, std::make_shared<java::lang::String>(std::make_shared<char[]>("Yom Hashoah")));
	android::icu::util::HebrewHoliday::YOM_HASHOAH = cVar20;
	cVar21 = std::make_shared<android::icu::util::HebrewHoliday>(cVar3, 0x4, std::make_shared<java::lang::String>(std::make_shared<char[]>("Yom Hazikaron")));
	android::icu::util::HebrewHoliday::YOM_HAZIKARON = cVar21;
	cVar22 = std::make_shared<android::icu::util::HebrewHoliday>(cVar3, 0x5, std::make_shared<java::lang::String>(std::make_shared<char[]>("Yom Ha\'Atzmaut")));
	android::icu::util::HebrewHoliday::YOM_HAATZMAUT = cVar22;
	cVar23 = std::make_shared<android::icu::util::HebrewHoliday>(cVar3, 0xe, std::make_shared<java::lang::String>(std::make_shared<char[]>("Pesach Sheini")));
	android::icu::util::HebrewHoliday::PESACH_SHEINI = cVar23;
	cVar24 = std::make_shared<android::icu::util::HebrewHoliday>(cVar3, 0x12, std::make_shared<java::lang::String>(std::make_shared<char[]>("Lab B\'Omer")));
	android::icu::util::HebrewHoliday::LAG_BOMER = cVar24;
	cVar25 = std::make_shared<android::icu::util::HebrewHoliday>(cVar3, 0x1c, std::make_shared<java::lang::String>(std::make_shared<char[]>("Yom Yerushalayim")));
	android::icu::util::HebrewHoliday::YOM_YERUSHALAYIM = cVar25;
	cVar26 = std::make_shared<android::icu::util::HebrewHoliday>(0x9, cVar2, cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("Shavuot")));
	android::icu::util::HebrewHoliday::SHAVUOT = cVar26;
	cVar27 = std::make_shared<android::icu::util::HebrewHoliday>(0xa, 0x11, std::make_shared<java::lang::String>(std::make_shared<char[]>("Fast of Tammuz 17")));
	android::icu::util::HebrewHoliday::TAMMUZ_17 = cVar27;
	cVar28 = std::make_shared<android::icu::util::HebrewHoliday>(0xb, 0x9, std::make_shared<java::lang::String>(std::make_shared<char[]>("Fast of Tisha B\'Av")));
	android::icu::util::HebrewHoliday::TISHA_BAV = cVar28;
	cVar29 = std::make_shared<android::icu::util::HebrewHoliday>(0xc, 0x15, std::make_shared<java::lang::String>(std::make_shared<char[]>("Selihot")));
	android::icu::util::HebrewHoliday::SELIHOT = cVar29;
	return;

}
// .method public constructor <init>(IIILjava/lang/String;)V
android::icu::util::HebrewHoliday::HebrewHoliday(int month,int date,int length,std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::SimpleDateRule> cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "date"    # I
	//    .param p3, "length"    # I
	//    .param p4, "name"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::SimpleDateRule>(month, date, android::icu::util::HebrewHoliday::gCalendar);
	android::icu::util::Holiday::(name, cVar0);
	return;

}
// .method public constructor <init>(IILjava/lang/String;)V
android::icu::util::HebrewHoliday::HebrewHoliday(int month,int date,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "month"    # I
	//    .param p2, "date"    # I
	//    .param p3, "name"    # Ljava/lang/String;
	android::icu::util::HebrewHoliday::(month, date, 0x1, name);
	return;

}


