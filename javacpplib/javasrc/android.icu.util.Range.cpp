// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Range.smali
#include "java2ctype.h"
#include "android.icu.util.DateRule.h"
#include "android.icu.util.Range.h"
#include "java.util.Date.h"

// .method public constructor <init>(Ljava/util/Date;Landroid/icu/util/DateRule;)V
android::icu::util::Range::Range(std::shared_ptr<java::util::Date> start,std::shared_ptr<android::icu::util::DateRule> rule)
{
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "rule"    # Landroid/icu/util/DateRule;
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->start = start;
	this->rule = rule;
	return;

}


