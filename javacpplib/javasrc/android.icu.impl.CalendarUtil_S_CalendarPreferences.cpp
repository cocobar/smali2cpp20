// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarUtil$CalendarPreferences.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarUtil_S_CalendarPreferences.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.UResource_S_Array.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.TreeMap.h"

static android::icu::impl::CalendarUtil_S_CalendarPreferences::INSTANCE;
// .method static synthetic -get0()Landroid/icu/impl/CalendarUtil$CalendarPreferences;
std::shared_ptr<android::icu::impl::CalendarUtil_S_CalendarPreferences> android::icu::impl::CalendarUtil_S_CalendarPreferences::_get0()
{
	
	return android::icu::impl::CalendarUtil_S_CalendarPreferences::INSTANCE;

}
// .method static constructor <clinit>()V
void android::icu::impl::CalendarUtil_S_CalendarPreferences::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::CalendarUtil_S_CalendarPreferences> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::CalendarUtil_S_CalendarPreferences>();
	android::icu::impl::CalendarUtil_S_CalendarPreferences::INSTANCE = cVar0;
	return;

}
// .method constructor <init>()V
android::icu::impl::CalendarUtil_S_CalendarPreferences::CalendarUtil_S_CalendarPreferences()
{
	
	std::shared_ptr<java::util::TreeMap> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::vector<std::any> tryCatchExcetionList;
	
	// 064    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	cVar0 = std::make_shared<java::util::TreeMap>();
	this->prefs = cVar0;
	try {
	//label_try_start_a:
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")));
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v1, "rb":Landroid/icu/impl/ICUResourceBundle;
	rb->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendarPreferenceData")), this);
	//label_try_end_1c:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_a .. :try_end_1c} :catch_1d
	//    .end local v1    # "rb":Landroid/icu/impl/ICUResourceBundle;
label_goto_1c:
	return;
	// 099    .line 71
label_catch_1d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "mre":Ljava/util/MissingResourceException;
	goto label_goto_1c;

}
// .method getCalendarTypeForRegion(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CalendarUtil_S_CalendarPreferences::getCalendarTypeForRegion(std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<java::lang::String> type;
	
	//    .param p1, "region"    # Ljava/lang/String;
	type = this->prefs->get(region);
	type->checkCast("java::lang::String");
	//    .local v0, "type":Ljava/lang/String;
	if ( type )     
		goto label_cond_d;
	//    .end local v0    # "type":Ljava/lang/String;
label_cond_d:
	return type;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::impl::CalendarUtil_S_CalendarPreferences::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	std::shared_ptr<java::lang::String> type;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v0, "calendarPreferenceData":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_2f;
	//    .local v3, "types":Landroid/icu/impl/UResource$Array;
	if ( !(value->getArray()->getValue(0x0, value)) )  
		goto label_cond_2c;
	type = value->getString();
	//    .local v2, "type":Ljava/lang/String;
	if ( type->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"))) )     
		goto label_cond_2c;
	this->prefs->put(key->toString(), type);
	//    .end local v2    # "type":Ljava/lang/String;
label_cond_2c:
	i = ( i + 0x1);
	goto label_goto_5;
	// 204    .line 94
	// 205    .end local v3    # "types":Landroid/icu/impl/UResource$Array;
label_cond_2f:
	return;

}


