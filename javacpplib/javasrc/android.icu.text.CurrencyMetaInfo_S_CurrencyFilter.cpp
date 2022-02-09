// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyMetaInfo$CurrencyFilter.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyFilter.h"
#include "android.icu.text.CurrencyMetaInfo.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

static android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL;
// .method static constructor <clinit>()V
void android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::static_cinit()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar1;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter>(cVar0, cVar0, -0x8000000000000000L, 0x7fffffffffffffffL, 0x0);
	android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL = cVar1;
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/String;JJZ)V
android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::CurrencyMetaInfo_S_CurrencyFilter(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> currency,long long from,long long to,bool tenderOnly)
{
	
	//    .param p1, "region"    # Ljava/lang/String;
	//    .param p2, "currency"    # Ljava/lang/String;
	//    .param p3, "from"    # J
	//    .param p5, "to"    # J
	//    .param p7, "tenderOnly"    # Z
	// 074    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->region = region;
	this->currency = currency;
	this->from = from;
	this->to = to;
	this->tenderOnly = tenderOnly;
	return;

}
// .method public static all()Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::all()
{
	
	return android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL;

}
// .method private static equals(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::equals(std::shared_ptr<java::lang::String> lhs,std::shared_ptr<java::lang::String> rhs)
{
	
	bool cVar0;
	
	//    .param p0, "lhs"    # Ljava/lang/String;
	//    .param p1, "rhs"    # Ljava/lang/String;
	if ( android::icu::impl::Utility::sameObjects(lhs, rhs) )     
		goto label_cond_d;
	if ( !(lhs) )  
		goto label_cond_f;
	cVar0 = lhs->equals(rhs);
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x1;
	goto label_goto_c;
	// 134    .line 338
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public static now()Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::now()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	cVar0 = std::make_shared<java::util::Date>();
	return android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL->withDate(cVar0);

}
// .method public static onCurrency(Ljava/lang/String;)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onCurrency(std::shared_ptr<java::lang::String> currency)
{
	
	//    .param p0, "currency"    # Ljava/lang/String;
	return android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL->withCurrency(currency);

}
// .method public static onDate(J)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onDate(long long date)
{
	
	//    .param p0, "date"    # J
	return android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL->withDate(date);

}
// .method public static onDate(Ljava/util/Date;)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onDate(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p0, "date"    # Ljava/util/Date;
	return android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL->withDate(date);

}
// .method public static onDateRange(JJ)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onDateRange(long long from,long long to)
{
	
	//    .param p0, "from"    # J
	//    .param p2, "to"    # J
	return android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL->withDateRange(from, to);

}
// .method public static onDateRange(Ljava/util/Date;Ljava/util/Date;)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onDateRange(std::shared_ptr<java::util::Date> from,std::shared_ptr<java::util::Date> to)
{
	
	//    .param p0, "from"    # Ljava/util/Date;
	//    .param p1, "to"    # Ljava/util/Date;
	return android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL->withDateRange(from, to);

}
// .method public static onRegion(Ljava/lang/String;)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onRegion(std::shared_ptr<java::lang::String> region)
{
	
	//    .param p0, "region"    # Ljava/lang/String;
	return android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL->withRegion(region);

}
// .method public static onTender()Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::onTender()
{
	
	return android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::ALL->withTender();

}
// .method public equals(Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;)Z
bool android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::equals(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> rhs)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "rhs"    # Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( android::icu::impl::Utility::sameObjects(this, rhs) )     
		goto label_cond_34;
	if ( !(rhs) )  
		goto label_cond_37;
	if ( !(android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::equals(this->region, rhs->region)) )  
		goto label_cond_37;
	if ( !(android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::equals(this->currency, rhs->currency)) )  
		goto label_cond_37;
	if ( (this->from > rhs->from) )     
		goto label_cond_37;
	if ( (this->to > rhs->to) )     
		goto label_cond_37;
	if ( this->tenderOnly != rhs->tenderOnly )
		goto label_cond_35;
label_cond_34:
label_goto_34:
	return cVar0;
label_cond_35:
	cVar0 = cVar1;
	goto label_goto_34;
label_cond_37:
	cVar0 = cVar1;
	goto label_goto_34;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::equals(std::shared_ptr<java::lang::Object> rhs)
{
	
	bool cVar0;
	
	//    .param p1, "rhs"    # Ljava/lang/Object;
	if ( !(rhs->instanceOf("android::icu::text::CurrencyMetaInfo_S_CurrencyFilter")) )  
		goto label_cond_b;
	rhs->checkCast("android::icu::text::CurrencyMetaInfo_S_CurrencyFilter");
	//    .end local p1    # "rhs":Ljava/lang/Object;
	cVar0 = this->equals(rhs);
label_goto_a:
	return cVar0;
	// 374    .restart local p1    # "rhs":Ljava/lang/Object;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method public hashCode()I
int android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::hashCode()
{
	
	int cVar0;
	int hc;
	int cVar1;
	
	cVar0 = 0x20;
	//    .local v0, "hc":I
	if ( !(this->region) )  
		goto label_cond_d;
	hc = this->region->hashCode();
label_cond_d:
	if ( !(this->currency) )  
		goto label_cond_1b;
label_cond_1b:
	if ( !(this->tenderOnly) )  
		goto label_cond_43;
	cVar1 = 0x1;
label_goto_40:
	return (( (( (( (( (( 0x0 * 0x1f) + (int)(this->from)) * 0x1f) + (int)(_ushrll(this->from,cVar0))) * 0x1f) + (int)(this->to)) * 0x1f) + (int)(_ushrll(this->to,cVar0))) * 0x1f) + cVar1);
	// 476    .line 323
label_cond_43:
	cVar1 = 0x0;
	goto label_goto_40;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::toString()
{
	
	return android::icu::text::CurrencyMetaInfo::-wrap0(this);

}
// .method public withCurrency(Ljava/lang/String;)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::withCurrency(std::shared_ptr<java::lang::String> currency)
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar0;
	
	//    .param p1, "currency"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter>(this->region, currency, this->from, this->to, this->tenderOnly);
	return cVar0;

}
// .method public withDate(J)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::withDate(long long date)
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar0;
	
	//    .param p1, "date"    # J
	cVar0 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter>(this->region, this->currency, date, date, this->tenderOnly);
	return cVar0;

}
// .method public withDate(Ljava/util/Date;)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::withDate(std::shared_ptr<java::util::Date> date)
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar0;
	
	//    .param p1, "date"    # Ljava/util/Date;
	cVar0 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter>(this->region, this->currency, date->getTime(), date->getTime(), this->tenderOnly);
	return cVar0;

}
// .method public withDateRange(JJ)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::withDateRange(long long from,long long to)
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar0;
	
	//    .param p1, "from"    # J
	//    .param p3, "to"    # J
	cVar0 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter>(this->region, this->currency, from, to, this->tenderOnly);
	return cVar0;

}
// .method public withDateRange(Ljava/util/Date;Ljava/util/Date;)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::withDateRange(std::shared_ptr<java::util::Date> from,std::shared_ptr<java::util::Date> to)
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar0;
	
	//    .param p1, "from"    # Ljava/util/Date;
	//    .param p2, "to"    # Ljava/util/Date;
	if ( from )     
		goto label_cond_17;
	//    .local v4, "fromLong":J
label_goto_4:
	if ( to )     
		goto label_cond_1c;
	//    .local v6, "toLong":J
label_goto_b:
	cVar0 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter>(this->region, this->currency, fromLong, toLong, this->tenderOnly);
	return cVar0;
	// 625    .line 249
	// 626    .end local v4    # "fromLong":J
	// 627    .end local v6    # "toLong":J
label_cond_17:
	//    .restart local v4    # "fromLong":J
	goto label_goto_4;
	// 636    .line 250
label_cond_1c:
	//    .restart local v6    # "toLong":J
	goto label_goto_b;

}
// .method public withRegion(Ljava/lang/String;)Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::withRegion(std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar0;
	
	//    .param p1, "region"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter>(region, this->currency, this->from, this->to, this->tenderOnly);
	return cVar0;

}
// .method public withTender()Landroid/icu/text/CurrencyMetaInfo$CurrencyFilter;
std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::withTender()
{
	
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter>(this->region, this->currency, this->from, this->to, 0x1);
	return cVar0;

}


