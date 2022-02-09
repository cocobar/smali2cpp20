#ifndef __android_icu_text_CurrencyMetaInfo_S_CurrencyFilter__
#define __android_icu_text_CurrencyMetaInfo_S_CurrencyFilter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyMetaInfo$CurrencyFilter.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::text{
class CurrencyMetaInfo_S_CurrencyFilter : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> ALL;
	CurrencyMetaInfo_S_CurrencyFilter(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> currency,long long from,long long to,bool tenderOnly);
	static bool equals(std::shared_ptr<java::lang::String> lhs,std::shared_ptr<java::lang::String> rhs);
public:
	std::shared_ptr<java::lang::String> currency;
	long long from;
	std::shared_ptr<java::lang::String> region;
	bool tenderOnly;
	long long to;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> all();
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> now();
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> onCurrency(std::shared_ptr<java::lang::String> currency);
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> onDate(long long date);
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> onDate(std::shared_ptr<java::util::Date> date);
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> onDateRange(long long from,long long to);
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> onDateRange(std::shared_ptr<java::util::Date> from,std::shared_ptr<java::util::Date> to);
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> onRegion(std::shared_ptr<java::lang::String> region);
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> onTender();
	bool virtual equals(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> rhs);
	bool virtual equals(std::shared_ptr<java::lang::Object> rhs);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> virtual withCurrency(std::shared_ptr<java::lang::String> currency);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> virtual withDate(long long date);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> virtual withDate(std::shared_ptr<java::util::Date> date);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> virtual withDateRange(long long from,long long to);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> virtual withDateRange(std::shared_ptr<java::util::Date> from,std::shared_ptr<java::util::Date> to);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> virtual withRegion(std::shared_ptr<java::lang::String> region);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> virtual withTender();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CurrencyMetaInfo_S_CurrencyFilter::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CurrencyMetaInfo_S_CurrencyFilter(){
	}

}; // class CurrencyMetaInfo_S_CurrencyFilter
}; // namespace android::icu::text

#endif //__android_icu_text_CurrencyMetaInfo_S_CurrencyFilter__

