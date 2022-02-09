// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\data\HolidayBundle_fr.smali
#include "java2ctype.h"
#include "android.icu.impl.data.HolidayBundle_fr.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::data::HolidayBundle_fr::fContents;
// .method static constructor <clinit>()V
void android::icu::impl::data::HolidayBundle_fr::static_cinit()
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
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar21;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar22;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar23;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar24;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar25;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar26;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar27;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar28;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar29;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(0x1a);
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar4[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("All Saints\' Day"));
	cVar4[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Toussaint"));
	cVar3[cVar2] = cVar4;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Armistice Day"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Jour de l\'Armistice"));
	cVar3[cVar1] = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Ascension"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Ascension"));
	cVar3[cVar0] = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Bastille Day"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F\u00eate de la Bastille"));
	cVar3[0x3] = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Benito Ju\u00e1rez Day"));
	cVar8[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F\u00eate de Benito Ju\u00e1rez"));
	cVar3[0x4] = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar9[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Boxing Day"));
	cVar9[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Lendemain de No\u00ebl"));
	cVar3[0x5] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar10[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Christmas Eve"));
	cVar10[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Veille de No\u00ebl"));
	cVar3[0x6] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar11[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Christmas"));
	cVar11[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("No\u00ebl"));
	cVar3[0x7] = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar12[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Easter Monday"));
	cVar12[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("P\u00e2ques lundi"));
	cVar3[0x8] = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar13[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Easter Sunday"));
	cVar13[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("P\u00e2ques"));
	cVar3[0x9] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar14[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Epiphany"));
	cVar14[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("l\'\u00c9piphanie"));
	cVar3[0xa] = cVar14;
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar15[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Flag Day"));
	cVar15[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F\u00eate du Drapeau"));
	cVar3[0xb] = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar16[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Good Friday"));
	cVar16[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Vendredi Saint"));
	cVar3[0xc] = cVar16;
	cVar17 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar17[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Halloween"));
	cVar17[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Veille de la Toussaint"));
	cVar3[0xd] = cVar17;
	cVar18 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar18[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("All Saints\' Day"));
	cVar18[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Toussaint"));
	cVar3[0xe] = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar19[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Independence Day"));
	cVar19[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F\u00eate Ind\u00e9pendance"));
	cVar3[0xf] = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar20[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Maundy Thursday"));
	cVar20[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Jeudi Saint"));
	cVar3[0x10] = cVar20;
	cVar21 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar21[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Mother\'s Day"));
	cVar21[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F\u00eate des m\u00e8res"));
	cVar3[0x11] = cVar21;
	cVar22 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar22[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("National Day"));
	cVar22[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F\u00eate Nationale"));
	cVar3[0x12] = cVar22;
	cVar23 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar23[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("New Year\'s Day"));
	cVar23[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Jour de l\'an"));
	cVar3[0x13] = cVar23;
	cVar24 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar24[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Palm Sunday"));
	cVar24[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("les Rameaux"));
	cVar3[0x14] = cVar24;
	cVar25 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar25[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pentecost"));
	cVar25[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Pentec\u00f4te"));
	cVar3[0x15] = cVar25;
	cVar26 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar26[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Shrove Tuesday"));
	cVar26[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Mardi Gras"));
	cVar3[0x16] = cVar26;
	cVar27 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar27[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("St. Stephen\'s Day"));
	cVar27[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Saint-\u00c9tienne"));
	cVar3[0x17] = cVar27;
	cVar28 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar28[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Victoria Day"));
	cVar28[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F\u00eate de la Victoria"));
	cVar3[0x18] = cVar28;
	cVar29 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar0);
	cVar29[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Victory Day"));
	cVar29[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F\u00eate de la Victoire"));
	cVar3[0x19] = cVar29;
	android::icu::impl::data::HolidayBundle_fr::fContents = cVar3;
	return;

}
// .method public constructor <init>()V
android::icu::impl::data::HolidayBundle_fr::HolidayBundle_fr()
{
	
	// 422    invoke-direct {p0}, Ljava/util/ListResourceBundle;-><init>()V
	return;

}
// .method public declared-synchronized getContents()[[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::data::HolidayBundle_fr::getContents()
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
	return android::icu::impl::data::HolidayBundle_fr::fContents;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


