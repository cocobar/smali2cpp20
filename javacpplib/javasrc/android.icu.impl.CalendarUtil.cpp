// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarUtil.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarUtil_S_CalendarPreferences.h"
#include "android.icu.impl.CalendarUtil.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

static android::icu::impl::CalendarUtil::CALKEY = std::make_shared<java::lang::String>("calendar");
static android::icu::impl::CalendarUtil::DEFCAL = std::make_shared<java::lang::String>("gregorian");
// .method public constructor <init>()V
android::icu::impl::CalendarUtil::CalendarUtil()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getCalendarType(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarUtil::getCalendarType(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<java::lang::String> calType;
	std::shared_ptr<android::icu::util::ULocale> canonical;
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	calType = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar")));
	//    .local v0, "calType":Ljava/lang/String;
	if ( !(calType) )  
		goto label_cond_a;
	return calType;
	// 050    .line 49
label_cond_a:
	canonical = android::icu::util::ULocale::createCanonical(loc->toString());
	//    .local v1, "canonical":Landroid/icu/util/ULocale;
	calType = canonical->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar")));
	if ( !(calType) )  
		goto label_cond_1c;
	return calType;
	// 074    .line 57
label_cond_1c:
	//    .local v2, "region":Ljava/lang/String;
	return android::icu::impl::CalendarUtil_S_CalendarPreferences::-get0({const[class].FS-Param})->getCalendarTypeForRegion(android::icu::util::ULocale::getRegionForSupplementalData(canonical, 0x1));

}


