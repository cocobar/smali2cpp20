// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyMetaInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyDigits.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyFilter.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyInfo.h"
#include "android.icu.text.CurrencyMetaInfo.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "java.lang.Class.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.Field.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.List.h"

static android::icu::text::CurrencyMetaInfo::defaultDigits;
static android::icu::text::CurrencyMetaInfo::hasData;
static android::icu::text::CurrencyMetaInfo::impl;
// .method static synthetic -wrap0(Ljava/lang/Object;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CurrencyMetaInfo::_wrap0(std::shared_ptr<java::lang::Object> o)
{
	
	//    .param p0, "o"    # Ljava/lang/Object;
	return android::icu::text::CurrencyMetaInfo::debugString(o);

}
// .method static constructor <clinit>()V
void android::icu::text::CurrencyMetaInfo::static_cinit()
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> cVar0;
	bool tempHasData;
	std::shared_ptr<android::icu::text::CurrencyMetaInfo> temp;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits>(0x2, 0x0);
	android::icu::text::CurrencyMetaInfo::defaultDigits = cVar0;
	0x0;
	//    .local v2, "temp":Landroid/icu/text/CurrencyMetaInfo;
	tempHasData = 0x0;
	//    .local v3, "tempHasData":Z
	try {
	//label_try_start_b:
	//    .local v0, "clzz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	temp = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.ICUCurrencyMetaInfo")))->newInstance();
	//    .end local v2    # "temp":Landroid/icu/text/CurrencyMetaInfo;
	temp->checkCast("android::icu::text::CurrencyMetaInfo");
	//label_try_end_18:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_b .. :try_end_18} :catch_1e
	//    .local v2, "temp":Landroid/icu/text/CurrencyMetaInfo;
	tempHasData = 0x1;
	//    .end local v0    # "clzz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_19:
	android::icu::text::CurrencyMetaInfo::impl = temp;
	android::icu::text::CurrencyMetaInfo::hasData = tempHasData;
	return;
	// 097    .line 529
	// 098    .end local v2    # "temp":Landroid/icu/text/CurrencyMetaInfo;
label_catch_1e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "t":Ljava/lang/Throwable;
	temp = std::make_shared<android::icu::text::CurrencyMetaInfo>();
	//    .restart local v2    # "temp":Landroid/icu/text/CurrencyMetaInfo;
	goto label_goto_19;

}
// .method protected constructor <init>()V
android::icu::text::CurrencyMetaInfo::CurrencyMetaInfo()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 115    .end annotation
	// 119    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static dateString(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CurrencyMetaInfo::dateString(long long date)
{
	
	//    .param p0, "date"    # J
	if ( !((date > 0x7fffffffffffffffL)) )  
		goto label_cond_f;
	if ( (date > -0x8000000000000000L) )     
		goto label_cond_11;
label_cond_f:
	return 0x0;
	// 149    .line 540
label_cond_11:
	return android::icu::impl::Grego::timeToString(date);

}
// .method private static debugString(Ljava/lang/Object;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CurrencyMetaInfo::debugString(std::shared_ptr<java::lang::Object> o)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	std::shared_ptr<java::lang::reflect::Field> f;
	std::shared_ptr<java::util::Date> v;
	std::shared_ptr<java::lang::String> s;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "o"    # Ljava/lang/Object;
	cVar0 = 0x0;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	try {
	//label_try_start_6:
	cVar1 = o->getClass()->getFields();
	cVar2 = cVar0;
label_goto_10:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_68;
	f = cVar1[cVar2];
	//    .local v0, "f":Ljava/lang/reflect/Field;
	v = f->get(o);
	//    .local v4, "v":Ljava/lang/Object;
	if ( !(v) )  
		goto label_cond_2a;
	if ( !(v->instanceOf("java::util::Date")) )  
		goto label_cond_2d;
	v->checkCast("java::util::Date");
	//    .end local v4    # "v":Ljava/lang/Object;
	s = android::icu::text::CurrencyMetaInfo::dateString(v->getTime());
	//    .local v1, "s":Ljava/lang/String;
label_goto_28:
	if ( s )     
		goto label_cond_41;
	//    .end local v1    # "s":Ljava/lang/String;
label_cond_2a:
label_goto_2a:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_10;
	// 230    .line 552
	// 231    .restart local v4    # "v":Ljava/lang/Object;
label_cond_2d:
	if ( !(v->instanceOf("java::lang::Long")) )  
		goto label_cond_3c;
	v->checkCast("java::lang::Long");
	//    .end local v4    # "v":Ljava/lang/Object;
	s = android::icu::text::CurrencyMetaInfo::dateString(v->longValue());
	//    .restart local v1    # "s":Ljava/lang/String;
	goto label_goto_28;
	// 252    .line 555
	// 253    .end local v1    # "s":Ljava/lang/String;
	// 254    .restart local v4    # "v":Ljava/lang/Object;
label_cond_3c:
	s = java::lang::String::valueOf(v);
	//    .restart local v1    # "s":Ljava/lang/String;
	goto label_goto_28;
	// 263    .line 560
	// 264    .end local v4    # "v":Ljava/lang/Object;
label_cond_41:
	if ( sb->length() <= 0 )
		goto label_cond_4d;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")));
label_cond_4d:
	sb->append(f->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=\'")))->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")));
	//label_try_end_66:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_67;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_6 .. :try_end_66} :catch_67
	goto label_goto_2a;
	// 309    .line 569
	// 310    .end local v0    # "f":Ljava/lang/reflect/Field;
	// 311    .end local v1    # "s":Ljava/lang/String;
label_catch_67:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_68:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sb->insert(cVar0, cVar4->append(o->getClass()->getSimpleName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(")))->toString());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")));
	return sb->toString();

}
// .method public static getInstance()Landroid/icu/text/CurrencyMetaInfo;
std::shared_ptr<android::icu::text::CurrencyMetaInfo> android::icu::text::CurrencyMetaInfo::getInstance()
{
	
	return android::icu::text::CurrencyMetaInfo::impl;

}
// .method public static getInstance(Z)Landroid/icu/text/CurrencyMetaInfo;
std::shared_ptr<android::icu::text::CurrencyMetaInfo> android::icu::text::CurrencyMetaInfo::getInstance(bool noSubstitute)
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo> cVar0;
	
	//    .param p0, "noSubstitute"    # Z
	if ( !(android::icu::text::CurrencyMetaInfo::hasData) )  
		goto label_cond_7;
	cVar0 = android::icu::text::CurrencyMetaInfo::impl;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_6;

}
// .method public static hasData()Z
bool android::icu::text::CurrencyMetaInfo::hasData()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 392    .end annotation
	return android::icu::text::CurrencyMetaInfo::hasData;

}
// .method public currencies(Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::text::CurrencyMetaInfo::currencies(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter)
{
	
	//    .param p1, "filter"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	//    .annotation system Ldalvik/annotation/Signature;
	// 407        value = {
	// 408            "(",
	// 409            "Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;",
	// 410            ")",
	// 411            "Ljava/util/List",
	// 412            "<",
	// 413            "Ljava/lang/String;",
	// 414            ">;"
	// 415        }
	// 416    .end annotation
	return java::util::Collections::emptyList({const[class].FS-Param});

}
// .method public currencyDigits(Ljava/lang/String;)Landroid/icu/text/CurrencyMetaInfo$CurrencyDigits;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> android::icu::text::CurrencyMetaInfo::currencyDigits(std::shared_ptr<java::lang::String> isoCode)
{
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	return this->currencyDigits(isoCode, android::icu::util::Currency_S_CurrencyUsage::STANDARD);

}
// .method public currencyDigits(Ljava/lang/String;Landroid/icu/util/Currency$CurrencyUsage;)Landroid/icu/text/CurrencyMetaInfo$CurrencyDigits;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> android::icu::text::CurrencyMetaInfo::currencyDigits(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> currencyUsage)
{
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	//    .param p2, "currencyUsage"    # Landroid/icu/util/Currency$CurrencyUsage;
	return android::icu::text::CurrencyMetaInfo::defaultDigits;

}
// .method public currencyInfo(Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;)Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo>> android::icu::text::CurrencyMetaInfo::currencyInfo(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter)
{
	
	//    .param p1, "filter"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	//    .annotation system Ldalvik/annotation/Signature;
	// 458        value = {
	// 459            "(",
	// 460            "Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;",
	// 461            ")",
	// 462            "Ljava/util/List",
	// 463            "<",
	// 464            "Landroid/icu/text/CurrencyMetaInfo$CurrencyInfo;",
	// 465            ">;"
	// 466        }
	// 467    .end annotation
	return java::util::Collections::emptyList({const[class].FS-Param});

}
// .method public regions(Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> android::icu::text::CurrencyMetaInfo::regions(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter)
{
	
	//    .param p1, "filter"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	//    .annotation system Ldalvik/annotation/Signature;
	// 482        value = {
	// 483            "(",
	// 484            "Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;",
	// 485            ")",
	// 486            "Ljava/util/List",
	// 487            "<",
	// 488            "Ljava/lang/String;",
	// 489            ">;"
	// 490        }
	// 491    .end annotation
	return java::util::Collections::emptyList({const[class].FS-Param});

}


