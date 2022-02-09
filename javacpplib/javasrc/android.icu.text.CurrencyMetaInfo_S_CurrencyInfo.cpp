// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyMetaInfo$CurrencyInfo.smali
#include "java2ctype.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyInfo.h"
#include "android.icu.text.CurrencyMetaInfo.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;JJI)V
android::icu::text::CurrencyMetaInfo_S_CurrencyInfo::CurrencyMetaInfo_S_CurrencyInfo(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> code,long long from,long long to,int priority)
{
	
	//    .param p1, "region"    # Ljava/lang/String;
	//    .param p2, "code"    # Ljava/lang/String;
	//    .param p3, "from"    # J
	//    .param p5, "to"    # J
	//    .param p7, "priority"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 040    .end annotation
	android::icu::text::CurrencyMetaInfo_S_CurrencyInfo::(region, code, from, to, priority, 0x1);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;JJIZ)V
android::icu::text::CurrencyMetaInfo_S_CurrencyInfo::CurrencyMetaInfo_S_CurrencyInfo(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> code,long long from,long long to,int priority,bool tender)
{
	
	//    .param p1, "region"    # Ljava/lang/String;
	//    .param p2, "code"    # Ljava/lang/String;
	//    .param p3, "from"    # J
	//    .param p5, "to"    # J
	//    .param p7, "priority"    # I
	//    .param p8, "tender"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 073    .end annotation
	// 077    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->region = region;
	this->code = code;
	this->from = from;
	this->to = to;
	this->priority = priority;
	this->tender = tender;
	return;

}
// .method public isTender()Z
bool android::icu::text::CurrencyMetaInfo_S_CurrencyInfo::isTender()
{
	
	return this->tender;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CurrencyMetaInfo_S_CurrencyInfo::toString()
{
	
	return android::icu::text::CurrencyMetaInfo::-wrap0(this);

}


