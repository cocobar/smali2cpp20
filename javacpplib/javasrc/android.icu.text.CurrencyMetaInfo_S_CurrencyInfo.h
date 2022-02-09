#ifndef __android_icu_text_CurrencyMetaInfo_S_CurrencyInfo__
#define __android_icu_text_CurrencyMetaInfo_S_CurrencyInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyMetaInfo$CurrencyInfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CurrencyMetaInfo_S_CurrencyInfo : public java::lang::Object {
protected:
private:
	bool tender;
public:
	std::shared_ptr<java::lang::String> code;
	long long from;
	int priority;
	std::shared_ptr<java::lang::String> region;
	long long to;
	CurrencyMetaInfo_S_CurrencyInfo(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> code,long long from,long long to,int priority);
	CurrencyMetaInfo_S_CurrencyInfo(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> code,long long from,long long to,int priority,bool tender);
	bool virtual isTender();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CurrencyMetaInfo_S_CurrencyInfo(){
	}

}; // class CurrencyMetaInfo_S_CurrencyInfo
}; // namespace android::icu::text

#endif //__android_icu_text_CurrencyMetaInfo_S_CurrencyInfo__

