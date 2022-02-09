// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_it.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_it.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_it::fContents;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_it::static_cinit()
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
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar16;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar17;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar18;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar19;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar20;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(0x11);
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar4[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("All Saints\' Day"));
	cVar4[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Ognissanti"));
	cVar3[cVar2] = cVar4;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Armistice Day"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("armistizio"));
	cVar3[cVar1] = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Ascension"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ascensione"));
	cVar3[cVar0] = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Ash Wednesday"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("mercoled\u00ec delle ceneri"));
	cVar3[0x3] = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Boxing Day"));
	cVar8[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Santo Stefano"));
	cVar3[0x4] = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar9[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Christmas"));
	cVar9[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("natale"));
	cVar3[0x5] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar10[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Easter Sunday"));
	cVar10[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pasqua"));
	cVar3[0x6] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar11[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Epiphany"));
	cVar11[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Epifania"));
	cVar3[0x7] = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar12[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Good Friday"));
	cVar12[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("venerd\u00ec santo"));
	cVar3[0x8] = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar13[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Halloween"));
	cVar13[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("vigilia di Ognissanti"));
	cVar3[0x9] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar14[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Maundy Thursday"));
	cVar14[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gioved\u00ec santo"));
	cVar3[0xa] = cVar14;
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar15[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("New Year\'s Day"));
	cVar15[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("anno nuovo"));
	cVar3[0xb] = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar16[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Palm Sunday"));
	cVar16[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("domenica delle palme"));
	cVar3[0xc] = cVar16;
	cVar17 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar17[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pentecost"));
	cVar17[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("di Pentecoste"));
	cVar3[0xd] = cVar17;
	cVar18 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar18[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Shrove Tuesday"));
	cVar18[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("martedi grasso"));
	cVar3[0xe] = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar19[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("St. Stephen\'s Day"));
	cVar19[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Santo Stefano"));
	cVar3[0xf] = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar20[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Thanksgiving"));
	cVar20[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Giorno del Ringraziamento"));
	cVar3[0x10] = cVar20;
	android::icu::impl::data::HolidayBundle_it::fContents = cVar3;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_it::HolidayBundle_it()
{
	
	// 287    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_it::getContents()
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
	return android::icu::impl::data::HolidayBundle_it::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


