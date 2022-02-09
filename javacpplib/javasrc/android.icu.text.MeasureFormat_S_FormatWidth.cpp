// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$FormatWidth.smali
#include "java2ctype.h"
#include "android.icu.text.ListFormatter_S_Style.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::MeasureFormat_S_FormatWidth::_S_VALUES;
static android::icu::text::MeasureFormat_S_FormatWidth::INDEX_COUNT = 0x3;
static android::icu::text::MeasureFormat_S_FormatWidth::NARROW;
static android::icu::text::MeasureFormat_S_FormatWidth::NUMERIC;
static android::icu::text::MeasureFormat_S_FormatWidth::SHORT;
static android::icu::text::MeasureFormat_S_FormatWidth::WIDE;
// .method static constructor <clinit>()V
void android::icu::text::MeasureFormat_S_FormatWidth::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> cVar4;
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> cVar5;
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> cVar6;
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> cVar7;
	std::shared<std::vector<std::vector<android::icu::text::MeasureFormat_S_FormatWidth>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x0;
	cVar3 = 0x1;
	cVar4 = std::make_shared<android::icu::text::MeasureFormat_S_FormatWidth>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WIDE")), cVar2, android::icu::text::ListFormatter_S_Style::DURATION, 0x6);
	android::icu::text::MeasureFormat_S_FormatWidth::WIDE = cVar4;
	cVar5 = std::make_shared<android::icu::text::MeasureFormat_S_FormatWidth>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORT")), cVar3, android::icu::text::ListFormatter_S_Style::DURATION_SHORT, 0x5);
	android::icu::text::MeasureFormat_S_FormatWidth::SHORT = cVar5;
	cVar6 = std::make_shared<android::icu::text::MeasureFormat_S_FormatWidth>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NARROW")), cVar1, android::icu::text::ListFormatter_S_Style::DURATION_NARROW, cVar3);
	android::icu::text::MeasureFormat_S_FormatWidth::NARROW = cVar6;
	cVar7 = std::make_shared<android::icu::text::MeasureFormat_S_FormatWidth>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NUMERIC")), cVar0, android::icu::text::ListFormatter_S_Style::DURATION_NARROW, cVar3);
	android::icu::text::MeasureFormat_S_FormatWidth::NUMERIC = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::text::MeasureFormat_S_FormatWidth>>>(0x4);
	cVar8[cVar2] = android::icu::text::MeasureFormat_S_FormatWidth::WIDE;
	cVar8[cVar3] = android::icu::text::MeasureFormat_S_FormatWidth::SHORT;
	cVar8[cVar1] = android::icu::text::MeasureFormat_S_FormatWidth::NARROW;
	cVar8[cVar0] = android::icu::text::MeasureFormat_S_FormatWidth::NUMERIC;
	android::icu::text::MeasureFormat_S_FormatWidth::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILandroid/icu/text/ListFormatter$Style;I)V
android::icu::text::MeasureFormat_S_FormatWidth::MeasureFormat_S_FormatWidth(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<android::icu::text::ListFormatter_S_Style> style,int currencyStyle)
{
	
	//    .param p3, "style"    # Landroid/icu/text/ListFormatter$Style;
	//    .param p4, "currencyStyle"    # I
	java::lang::Enum::(var0, var1);
	this->listFormatterStyle = style;
	this->currencyStyle = currencyStyle;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::MeasureFormat_S_FormatWidth::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::MeasureFormat_S_FormatWidth(), name);
	cVar0->checkCast("android::icu::text::MeasureFormat_S_FormatWidth");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/MeasureFormat$FormatWidth;
std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> android::icu::text::MeasureFormat_S_FormatWidth::values()
{
	
	return android::icu::text::MeasureFormat_S_FormatWidth::_S_VALUES;

}
// .method getCurrencyStyle()I
int android::icu::text::MeasureFormat_S_FormatWidth::getCurrencyStyle()
{
	
	return this->currencyStyle;

}
// .method getListFormatterStyle()Landroid/icu/text/ListFormatter$Style;
std::shared_ptr<android::icu::text::ListFormatter_S_Style> android::icu::text::MeasureFormat_S_FormatWidth::getListFormatterStyle()
{
	
	return this->listFormatterStyle;

}


