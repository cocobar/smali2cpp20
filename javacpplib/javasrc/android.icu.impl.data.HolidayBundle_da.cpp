// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_da.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_da.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_da::fContents;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_da::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<std::vector<std::vector<java::lang::Object>>>> cVar3;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar4;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar7;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar8;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar9;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar10;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar11;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar12;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar13;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar14;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar15;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(0xc);
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar4[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Armistice Day"));
	cVar4[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("v\u00e5benhvile"));
	cVar3[cVar2] = cVar4;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Ascension"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("himmelfart"));
	cVar3[cVar1] = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Boxing Day"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("anden juledag"));
	cVar3[cVar0] = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Christmas Eve"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("juleaften"));
	cVar3[0x3] = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Easter"));
	cVar8[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("p\u00e5ske"));
	cVar3[0x4] = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar9[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Epiphany"));
	cVar9[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("helligtrekongersdag"));
	cVar3[0x5] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar10[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Good Friday"));
	cVar10[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("langfredag"));
	cVar3[0x6] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar11[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Halloween"));
	cVar11[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("allehelgensaften"));
	cVar3[0x7] = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar12[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Maundy Thursday"));
	cVar12[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sk\u00e6rtorsdag"));
	cVar3[0x8] = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar13[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Palm Sunday"));
	cVar13[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("palmes\u00f8ndag"));
	cVar3[0x9] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar14[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pentecost"));
	cVar14[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pinse"));
	cVar3[0xa] = cVar14;
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar15[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Shrove Tuesday"));
	cVar15[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hvidetirsdag"));
	cVar3[0xb] = cVar15;
	android::icu::impl::data::HolidayBundle_da::fContents = cVar3;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_da::HolidayBundle_da()
{
	
	// 212    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_da::getContents()
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
	return android::icu::impl::data::HolidayBundle_da::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


