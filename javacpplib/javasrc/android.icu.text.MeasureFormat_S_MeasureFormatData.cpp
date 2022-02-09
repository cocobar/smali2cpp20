// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$MeasureFormatData.smali
#include "java2ctype.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat_S_MeasureFormatData.h"
#include "java.util.EnumMap.h"
#include "java.util.HashMap.h"

static android::icu::text::MeasureFormat_S_MeasureFormatData::PATTERN_COUNT;
static android::icu::text::MeasureFormat_S_MeasureFormatData::PER_UNIT_INDEX;
// .method static constructor <clinit>()V
void android::icu::text::MeasureFormat_S_MeasureFormatData::static_cinit()
{
	
	android::icu::text::MeasureFormat_S_MeasureFormatData::PER_UNIT_INDEX = android::icu::impl::StandardPlural::COUNT;
	android::icu::text::MeasureFormat_S_MeasureFormatData::PATTERN_COUNT = ( android::icu::text::MeasureFormat_S_MeasureFormatData::PER_UNIT_INDEX + 0x1);
	return;

}
// .method private constructor <init>()V
android::icu::text::MeasureFormat_S_MeasureFormatData::MeasureFormat_S_MeasureFormatData()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<java::util::EnumMap> cVar2;
	
	// 096    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->widthFallback = std::make_shared<std::vector<std::vector<android::icu::text::MeasureFormat_S_FormatWidth>>>(0x3);
	cVar0 = std::make_shared<java::util::HashMap>();
	this->unitToStyleToPatterns = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>();
	this->unitToStyleToDnam = cVar1;
	cVar2 = std::make_shared<java::util::EnumMap>(android::icu::text::MeasureFormat_S_FormatWidth());
	this->styleToPerPattern = cVar2;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/MeasureFormat$MeasureFormatData;)V
android::icu::text::MeasureFormat_S_MeasureFormatData::MeasureFormat_S_MeasureFormatData(std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/MeasureFormat$MeasureFormatData;
	// 140    invoke-direct {p0}, Landroid/icu/text/MeasureFormat$MeasureFormatData;-><init>()V
	return;

}
// .method hasPerFormatter(Landroid/icu/text/MeasureFormat$FormatWidth;)Z
bool android::icu::text::MeasureFormat_S_MeasureFormatData::hasPerFormatter(std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width)
{
	
	//    .param p1, "width"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	return this->styleToPerPattern->containsKey(width);

}


