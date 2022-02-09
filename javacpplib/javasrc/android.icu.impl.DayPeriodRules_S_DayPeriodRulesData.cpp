// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$DayPeriodRulesData.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesData.h"
#include "java.util.HashMap.h"

// .method private constructor <init>()V
android::icu::impl::DayPeriodRules_S_DayPeriodRulesData::DayPeriodRules_S_DayPeriodRulesData()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	// 041    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::HashMap>();
	this->localesToRuleSetNumMap = cVar0;
	this->maxRuleSetNum = -0x1;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;)V
android::icu::impl::DayPeriodRules_S_DayPeriodRulesData::DayPeriodRules_S_DayPeriodRulesData(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;
	// 064    invoke-direct {p0}, Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;-><init>()V
	return;

}


