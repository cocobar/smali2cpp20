// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\DateInterval.smali
#include "java2ctype.h"
#include "android.icu.util.DateInterval.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::util::DateInterval::serialVersionUID = 0x1L;
// .method public constructor <init>(JJ)V
android::icu::util::DateInterval::DateInterval(long long from,long long to)
{
	
	//    .param p1, "from"    # J
	//    .param p3, "to"    # J
	// 027    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fromDate = from;
	this->toDate = to;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::DateInterval::equals(std::shared_ptr<java::lang::Object> a)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::util::DateInterval> di;
	
	//    .param p1, "a"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(a->instanceOf("android::icu::util::DateInterval")) )  
		goto label_cond_1a;
	di = a;
	di->checkCast("android::icu::util::DateInterval");
	//    .local v0, "di":Landroid/icu/util/DateInterval;
	if ( (this->fromDate > di->fromDate) )     
		goto label_cond_19;
	if ( (this->toDate > di->toDate) )     
		goto label_cond_19;
	cVar1 = 0x1;
label_cond_19:
	return cVar1;
	// 081    .line 64
	// 082    .end local v0    # "di":Landroid/icu/util/DateInterval;
label_cond_1a:
	return cVar1;

}
// .method public getFromDate()J
long long android::icu::util::DateInterval::getFromDate()
{
	
	return this->fromDate;

}
// .method public getToDate()J
long long android::icu::util::DateInterval::getToDate()
{
	
	return this->toDate;

}
// .method public hashCode()I
int android::icu::util::DateInterval::hashCode()
{
	
	return (int)((this->fromDate +  this->toDate));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::DateInterval::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(java::lang::String::valueOf(this->fromDate))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(java::lang::String::valueOf(this->toDate))->toString();

}


