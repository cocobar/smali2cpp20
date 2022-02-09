// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ZoneMeta$CustomTimeZoneCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ZoneMeta_S_CustomTimeZoneCache.h"
#include "android.icu.impl.ZoneMeta.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "android.icu.util.TimeZone.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"

static android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::static_cinit()
{
	
	android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::_assertionsDisabled = ( android::icu::impl::ZoneMeta_S_CustomTimeZoneCache()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>()V
android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::ZoneMeta_S_CustomTimeZoneCache()
{
	
	// 055    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ZoneMeta$CustomTimeZoneCache;)V
android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::ZoneMeta_S_CustomTimeZoneCache(std::shared_ptr<android::icu::impl::ZoneMeta_S_CustomTimeZoneCache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/ZoneMeta$CustomTimeZoneCache;
	// 065    invoke-direct {p0}, Landroid/icu/impl/ZoneMeta$CustomTimeZoneCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/Integer;[I)Landroid/icu/util/SimpleTimeZone;
std::shared_ptr<android::icu::util::SimpleTimeZone> android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::createInstance(std::shared_ptr<java::lang::Integer> key,std::shared_ptr<int[]> data)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	std::shared_ptr<java::lang::AssertionError> cVar9;
	bool cVar10;
	std::shared_ptr<android::icu::util::SimpleTimeZone> tz;
	
	//    .param p1, "key"    # Ljava/lang/Integer;
	//    .param p2, "data"    # [I
	cVar0 = 0x3b;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	if ( android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::_assertionsDisabled )     
		goto label_cond_14;
	if ( data->size() == 0x4 )
		goto label_cond_14;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 105    .line 597
label_cond_14:
	if ( android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::_assertionsDisabled )     
		goto label_cond_27;
	if ( data[cVar4] == cVar3 )
		goto label_cond_27;
	if ( data[cVar4] == -0x1 )
		goto label_cond_27;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 127    .line 598
label_cond_27:
	if ( android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::_assertionsDisabled )     
		goto label_cond_3b;
	if ( data[cVar3] < 0 ) 
		goto label_cond_35;
	if ( data[cVar3] <= 0x17 )
		goto label_cond_3b;
label_cond_35:
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 150    .line 599
label_cond_3b:
	if ( android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::_assertionsDisabled )     
		goto label_cond_4d;
	if ( data[cVar2] < 0 ) 
		goto label_cond_47;
	if ( data[cVar2] <= cVar0 )
		goto label_cond_4d;
label_cond_47:
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 171    .line 600
label_cond_4d:
	if ( android::icu::impl::ZoneMeta_S_CustomTimeZoneCache::_assertionsDisabled )     
		goto label_cond_5f;
	if ( data[cVar1] < 0 ) 
		goto label_cond_59;
	if ( data[cVar1] <= cVar0 )
		goto label_cond_5f;
label_cond_59:
	cVar9 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar9;
	// 192    .line 601
label_cond_5f:
	if ( data[cVar4] >= 0 )
		goto label_cond_88;
	cVar10 = cVar3;
label_goto_6a:
	//    .local v0, "id":Ljava/lang/String;
	//    .local v1, "offset":I
	tz = std::make_shared<android::icu::util::SimpleTimeZone>(( (data[cVar4] *  (( (( data[cVar3] * 0x3c) +  data[cVar2]) * 0x3c) +  data[cVar1])) * 0x3e8), android::icu::impl::ZoneMeta::formatCustomID(data[cVar3], data[cVar2], data[cVar1], cVar10));
	//    .local v2, "tz":Landroid/icu/util/SimpleTimeZone;
	tz->freeze();
	return tz;
	// 246    .end local v0    # "id":Ljava/lang/String;
	// 247    .end local v1    # "offset":I
	// 248    .end local v2    # "tz":Landroid/icu/util/SimpleTimeZone;
label_cond_88:
	cVar10 = cVar4;
	goto label_goto_6a;

}


