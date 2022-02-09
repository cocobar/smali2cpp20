#ifndef __android_icu_impl_ICUCurrencyMetaInfo_S_Collector__
#define __android_icu_impl_ICUCurrencyMetaInfo_S_Collector__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyMetaInfo$Collector.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::impl{
template <typename T>
class ICUCurrencyMetaInfo_S_Collector : public java::lang::Object {
protected:
private:
public:
	void collect(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,long long var2,long long var3,int var4,bool var5) = 0;
	int collects() = 0;
	std::shared_ptr<java::util::List<T>> getList();
	ICUCurrencyMetaInfo_S_Collector(){ };
	virtual ~ICUCurrencyMetaInfo_S_Collector(){ };

}; // class ICUCurrencyMetaInfo_S_Collector
}; // namespace android::icu::impl
// .method public abstract getList()Ljava/util/List;
template <typename T>
std::shared_ptr<java::util::List<T>> android::icu::impl::ICUCurrencyMetaInfo_S_Collector<T>::getList()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 035        value = {
	// 036            "()",
	// 037            "Ljava/util/List",
	// 038            "<TT;>;"
	// 039        }
	// 040    .end annotation

}

#endif //__android_icu_impl_ICUCurrencyMetaInfo_S_Collector__

