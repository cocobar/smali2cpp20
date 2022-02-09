// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$CalType.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar_S_CalType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::Calendar_S_CalType::_S_VALUES;
static android::icu::util::Calendar_S_CalType::BUDDHIST;
static android::icu::util::Calendar_S_CalType::CHINESE;
static android::icu::util::Calendar_S_CalType::COPTIC;
static android::icu::util::Calendar_S_CalType::DANGI;
static android::icu::util::Calendar_S_CalType::ETHIOPIC;
static android::icu::util::Calendar_S_CalType::ETHIOPIC_AMETE_ALEM;
static android::icu::util::Calendar_S_CalType::GREGORIAN;
static android::icu::util::Calendar_S_CalType::HEBREW;
static android::icu::util::Calendar_S_CalType::INDIAN;
static android::icu::util::Calendar_S_CalType::ISLAMIC;
static android::icu::util::Calendar_S_CalType::ISLAMIC_CIVIL;
static android::icu::util::Calendar_S_CalType::ISLAMIC_RGSA;
static android::icu::util::Calendar_S_CalType::ISLAMIC_TBLA;
static android::icu::util::Calendar_S_CalType::ISLAMIC_UMALQURA;
static android::icu::util::Calendar_S_CalType::ISO8601;
static android::icu::util::Calendar_S_CalType::JAPANESE;
static android::icu::util::Calendar_S_CalType::PERSIAN;
static android::icu::util::Calendar_S_CalType::ROC;
static android::icu::util::Calendar_S_CalType::UNKNOWN;
// .method static constructor <clinit>()V
void android::icu::util::Calendar_S_CalType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar5;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar6;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar7;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar8;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar9;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar10;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar11;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar12;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar13;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar14;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar15;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar16;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar17;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar18;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar19;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar20;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar21;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar22;
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar23;
	std::shared<std::vector<std::vector<android::icu::util::Calendar_S_CalType>>> cVar24;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GREGORIAN")), cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian")));
	android::icu::util::Calendar_S_CalType::GREGORIAN = cVar5;
	cVar6 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO8601")), cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("iso8601")));
	android::icu::util::Calendar_S_CalType::ISO8601 = cVar6;
	cVar7 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BUDDHIST")), cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("buddhist")));
	android::icu::util::Calendar_S_CalType::BUDDHIST = cVar7;
	cVar8 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CHINESE")), cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("chinese")));
	android::icu::util::Calendar_S_CalType::CHINESE = cVar8;
	cVar9 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("COPTIC")), cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("coptic")));
	android::icu::util::Calendar_S_CalType::COPTIC = cVar9;
	cVar10 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DANGI")), 0x5, std::make_shared<java::lang::String>(std::make_shared<char[]>("dangi")));
	android::icu::util::Calendar_S_CalType::DANGI = cVar10;
	cVar11 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ETHIOPIC")), 0x6, std::make_shared<java::lang::String>(std::make_shared<char[]>("ethiopic")));
	android::icu::util::Calendar_S_CalType::ETHIOPIC = cVar11;
	cVar12 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ETHIOPIC_AMETE_ALEM")), 0x7, std::make_shared<java::lang::String>(std::make_shared<char[]>("ethiopic-amete-alem")));
	android::icu::util::Calendar_S_CalType::ETHIOPIC_AMETE_ALEM = cVar12;
	cVar13 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("HEBREW")), 0x8, std::make_shared<java::lang::String>(std::make_shared<char[]>("hebrew")));
	android::icu::util::Calendar_S_CalType::HEBREW = cVar13;
	cVar14 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INDIAN")), 0x9, std::make_shared<java::lang::String>(std::make_shared<char[]>("indian")));
	android::icu::util::Calendar_S_CalType::INDIAN = cVar14;
	cVar15 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISLAMIC")), 0xa, std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic")));
	android::icu::util::Calendar_S_CalType::ISLAMIC = cVar15;
	cVar16 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISLAMIC_CIVIL")), 0xb, std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-civil")));
	android::icu::util::Calendar_S_CalType::ISLAMIC_CIVIL = cVar16;
	cVar17 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISLAMIC_RGSA")), 0xc, std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-rgsa")));
	android::icu::util::Calendar_S_CalType::ISLAMIC_RGSA = cVar17;
	cVar18 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISLAMIC_TBLA")), 0xd, std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-tbla")));
	android::icu::util::Calendar_S_CalType::ISLAMIC_TBLA = cVar18;
	cVar19 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISLAMIC_UMALQURA")), 0xe, std::make_shared<java::lang::String>(std::make_shared<char[]>("islamic-umalqura")));
	android::icu::util::Calendar_S_CalType::ISLAMIC_UMALQURA = cVar19;
	cVar20 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("JAPANESE")), 0xf, std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese")));
	android::icu::util::Calendar_S_CalType::JAPANESE = cVar20;
	cVar21 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PERSIAN")), 0x10, std::make_shared<java::lang::String>(std::make_shared<char[]>("persian")));
	android::icu::util::Calendar_S_CalType::PERSIAN = cVar21;
	cVar22 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ROC")), 0x11, std::make_shared<java::lang::String>(std::make_shared<char[]>("roc")));
	android::icu::util::Calendar_S_CalType::ROC = cVar22;
	cVar23 = std::make_shared<android::icu::util::Calendar_S_CalType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNKNOWN")), 0x12, std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown")));
	android::icu::util::Calendar_S_CalType::UNKNOWN = cVar23;
	cVar24 = std::make_shared<std::vector<std::vector<android::icu::util::Calendar_S_CalType>>>(0x13);
	cVar24[cVar4] = android::icu::util::Calendar_S_CalType::GREGORIAN;
	cVar24[cVar3] = android::icu::util::Calendar_S_CalType::ISO8601;
	cVar24[cVar2] = android::icu::util::Calendar_S_CalType::BUDDHIST;
	cVar24[cVar1] = android::icu::util::Calendar_S_CalType::CHINESE;
	cVar24[cVar0] = android::icu::util::Calendar_S_CalType::COPTIC;
	cVar24[0x5] = android::icu::util::Calendar_S_CalType::DANGI;
	cVar24[0x6] = android::icu::util::Calendar_S_CalType::ETHIOPIC;
	cVar24[0x7] = android::icu::util::Calendar_S_CalType::ETHIOPIC_AMETE_ALEM;
	cVar24[0x8] = android::icu::util::Calendar_S_CalType::HEBREW;
	cVar24[0x9] = android::icu::util::Calendar_S_CalType::INDIAN;
	cVar24[0xa] = android::icu::util::Calendar_S_CalType::ISLAMIC;
	cVar24[0xb] = android::icu::util::Calendar_S_CalType::ISLAMIC_CIVIL;
	cVar24[0xc] = android::icu::util::Calendar_S_CalType::ISLAMIC_RGSA;
	cVar24[0xd] = android::icu::util::Calendar_S_CalType::ISLAMIC_TBLA;
	cVar24[0xe] = android::icu::util::Calendar_S_CalType::ISLAMIC_UMALQURA;
	cVar24[0xf] = android::icu::util::Calendar_S_CalType::JAPANESE;
	cVar24[0x10] = android::icu::util::Calendar_S_CalType::PERSIAN;
	cVar24[0x11] = android::icu::util::Calendar_S_CalType::ROC;
	cVar24[0x12] = android::icu::util::Calendar_S_CalType::UNKNOWN;
	android::icu::util::Calendar_S_CalType::_S_VALUES = cVar24;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
android::icu::util::Calendar_S_CalType::Calendar_S_CalType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> id)
{
	
	//    .param p3, "id"    # Ljava/lang/String;
	java::lang::Enum::(var0, var1);
	this->id = id;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/Calendar$CalType;
std::shared_ptr<android::icu::util::Calendar_S_CalType> android::icu::util::Calendar_S_CalType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::Calendar_S_CalType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::Calendar_S_CalType(), name);
	cVar0->checkCast("android::icu::util::Calendar_S_CalType");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/Calendar$CalType;
std::shared_ptr<android::icu::util::Calendar_S_CalType> android::icu::util::Calendar_S_CalType::values()
{
	
	return android::icu::util::Calendar_S_CalType::_S_VALUES;

}


