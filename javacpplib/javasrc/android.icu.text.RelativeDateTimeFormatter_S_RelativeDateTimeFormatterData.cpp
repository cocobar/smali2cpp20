// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelativeDateTimeFormatterData.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_AbsoluteUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Direction.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Style.h"
#include "java.lang.String.h"
#include "java.util.EnumMap.h"

// .method public constructor <init>(Ljava/util/EnumMap;Ljava/util/EnumMap;Ljava/lang/String;)V
android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData::RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData(std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Direction,java::lang::String>>>> qualitativeUnitMap,std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit,std::vector<std::vector<java::lang::String>>>>> relUnitPatternMap,std::shared_ptr<java::lang::String> dateTimePattern)
{
	
	//    .param p3, "dateTimePattern"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 060        value = {
	// 061            "(",
	// 062            "Ljava/util/EnumMap",
	// 063            "<",
	// 064            "Landroid/icu/text/RelativeDateTimeFormatter$Style;",
	// 065            "Ljava/util/EnumMap",
	// 066            "<",
	// 067            "Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;",
	// 068            "Ljava/util/EnumMap",
	// 069            "<",
	// 070            "Landroid/icu/text/RelativeDateTimeFormatter$Direction;",
	// 071            "Ljava/lang/String;",
	// 072            ">;>;>;",
	// 073            "Ljava/util/EnumMap",
	// 074            "<",
	// 075            "Landroid/icu/text/RelativeDateTimeFormatter$Style;",
	// 076            "Ljava/util/EnumMap",
	// 077            "<",
	// 078            "Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;",
	// 079            "[[",
	// 080            "Ljava/lang/String;",
	// 081            ">;>;",
	// 082            "Ljava/lang/String;",
	// 083            ")V"
	// 084        }
	// 085    .end annotation
	//    .local p1, "qualitativeUnitMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Style;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Direction;Ljava/lang/String;>;>;>;"
	//    .local p2, "relUnitPatternMap":Ljava/util/EnumMap;, "Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$Style;Ljava/util/EnumMap<Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;[[Ljava/lang/String;>;>;"
	// 091    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->qualitativeUnitMap = qualitativeUnitMap;
	this->relUnitPatternMap = relUnitPatternMap;
	this->dateTimePattern = dateTimePattern;
	return;

}


