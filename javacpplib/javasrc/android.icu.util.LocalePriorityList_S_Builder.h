#ifndef __android_icu_util_LocalePriorityList_S_Builder__
#define __android_icu_util_LocalePriorityList_S_Builder__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocalePriorityList$Builder.smali
#include "java2ctype.h"
#include "android.icu.util.LocalePriorityList.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Double.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::util{
class LocalePriorityList_S_Builder : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Map<android::icu::util::ULocale,java::lang::Double>> languageToWeight;
	LocalePriorityList_S_Builder();
public:
	LocalePriorityList_S_Builder(std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> _this0);
	std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> virtual add(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList);
	std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> virtual add(std::shared_ptr<android::icu::util::ULocale> languageCode);
	std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> virtual add(std::shared_ptr<android::icu::util::ULocale> languageCode,double cVar0);
	std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> virtual add(std::shared_ptr<java::lang::String> acceptLanguageList);
	std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> virtual add(std::shared_ptr<std::vector<android::icu::util::ULocale>> languageCodes);
	std::shared_ptr<android::icu::util::LocalePriorityList> virtual build();
	std::shared_ptr<android::icu::util::LocalePriorityList> virtual build(bool preserveWeights);
public:
	virtual ~LocalePriorityList_S_Builder(){
	}

}; // class LocalePriorityList_S_Builder
}; // namespace android::icu::util

#endif //__android_icu_util_LocalePriorityList_S_Builder__

