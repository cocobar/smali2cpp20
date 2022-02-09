// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$GMTOffsetPatternType.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneFormat_S_GMTOffsetPatternType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::_S_VALUES;
static android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_H;
static android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HM;
static android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HMS;
static android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_H;
static android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HM;
static android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HMS;
// .method static synthetic -wrap0(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;)Z
bool android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::_wrap0(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	return _this->isPositive();

}
// .method static synthetic -wrap1(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::_wrap1(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	return _this->defaultPattern();

}
// .method static synthetic -wrap2(Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::_wrap2(std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
	return _this->required();

}
// .method static constructor <clinit>()V
void android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	bool cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> cVar5;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> cVar6;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> cVar7;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> cVar8;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> cVar9;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> cVar10;
	std::shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("POSITIVE_HM")), cVar4, std::make_shared<java::lang::String>(std::make_shared<char[]>("+H:mm")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Hm")), cVar3);
	android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HM = cVar5;
	cVar6 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("POSITIVE_HMS")), cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("+H:mm:ss")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Hms")), cVar3);
	android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HMS = cVar6;
	cVar7 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NEGATIVE_HM")), cVar2, std::make_shared<java::lang::String>(std::make_shared<char[]>("-H:mm")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Hm")), cVar4);
	android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HM = cVar7;
	cVar8 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NEGATIVE_HMS")), cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("-H:mm:ss")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Hms")), cVar4);
	android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HMS = cVar8;
	cVar9 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("POSITIVE_H")), cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("+H")), std::make_shared<java::lang::String>(std::make_shared<char[]>("H")), cVar3);
	android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_H = cVar9;
	cVar10 = std::make_shared<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NEGATIVE_H")), 0x5, std::make_shared<java::lang::String>(std::make_shared<char[]>("-H")), std::make_shared<java::lang::String>(std::make_shared<char[]>("H")), cVar4);
	android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_H = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType>>>(0x6);
	cVar11[cVar4] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HM;
	cVar11[cVar3] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_HMS;
	cVar11[cVar2] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HM;
	cVar11[cVar1] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_HMS;
	cVar11[cVar0] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::POSITIVE_H;
	cVar11[0x5] = android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::NEGATIVE_H;
	android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::_S_VALUES = cVar11;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Z)V
android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::TimeZoneFormat_S_GMTOffsetPatternType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> defaultPattern,std::shared_ptr<java::lang::String> required,bool isPositive)
{
	
	//    .param p3, "defaultPattern"    # Ljava/lang/String;
	//    .param p4, "required"    # Ljava/lang/String;
	//    .param p5, "isPositive"    # Z
	java::lang::Enum::(var0, var1);
	this->_defaultPattern = defaultPattern;
	this->_required = required;
	this->_isPositive = isPositive;
	return;

}
// .method private defaultPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::defaultPattern()
{
	
	return this->_defaultPattern;

}
// .method private isPositive()Z
bool android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::isPositive()
{
	
	return this->_isPositive;

}
// .method private required()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::required()
{
	
	return this->_required;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType(), name);
	cVar0->checkCast("android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/TimeZoneFormat$GMTOffsetPatternType;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType> android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::values()
{
	
	return android::icu::text::TimeZoneFormat_S_GMTOffsetPatternType::_S_VALUES;

}


