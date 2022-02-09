#ifndef __android_icu_util_LocalePriorityList__
#define __android_icu_util_LocalePriorityList__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocalePriorityList.smali
#include "java2ctype.h"
#include "android.icu.util.LocalePriorityList_S_Builder.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Double.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::util{
class LocalePriorityList : public java::lang::Iterable<android::icu::util::ULocale> {
protected:
private:
	static double D0;
	static std::shared_ptr<java::lang::Double> D1;
	static std::shared_ptr<java::util::regex::Pattern> languageSplitter;
	static std::shared_ptr<java::util::Comparator<java::lang::Double>> myDescendingDouble;
	static std::shared_ptr<java::util::regex::Pattern> weightSplitter;
	std::shared_ptr<java::util::Map<android::icu::util::ULocale,java::lang::Double>> languagesAndWeights;
	LocalePriorityList(std::shared_ptr<java::util::Map<android::icu::util::ULocale,java::lang::Double>> languageToWeight);
public:
	static std::shared_ptr<java::lang::Double> _get0();
	static std::shared_ptr<java::util::regex::Pattern> _get1();
	static std::shared_ptr<java::util::Map> _get2(std::shared_ptr<android::icu::util::LocalePriorityList> _this);
	static std::shared_ptr<java::util::Comparator> _get3();
	static std::shared_ptr<java::util::regex::Pattern> _get4();
	static void static_cinit();
	LocalePriorityList(std::shared_ptr<java::util::Map> languageToWeight,std::shared_ptr<android::icu::util::LocalePriorityList> _this1);
	static std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> add(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList);
	static std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> add(std::shared_ptr<android::icu::util::ULocale> languageCode,double weight);
	static std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> add(std::shared_ptr<java::lang::String> acceptLanguageString);
	static std::shared_ptr<android::icu::util::LocalePriorityList_S_Builder> add(std::shared_ptr<std::vector<android::icu::util::ULocale>> languageCode);
	bool virtual equals(std::shared_ptr<java::lang::Object> o);
	std::shared_ptr<java::lang::Double> virtual getWeight(std::shared_ptr<android::icu::util::ULocale> language);
	int virtual hashCode();
	std::shared_ptr<java::util::Iterator<android::icu::util::ULocale>> virtual iterator();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::LocalePriorityList::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocalePriorityList(){
	}

}; // class LocalePriorityList
}; // namespace android::icu::util

#endif //__android_icu_util_LocalePriorityList__

