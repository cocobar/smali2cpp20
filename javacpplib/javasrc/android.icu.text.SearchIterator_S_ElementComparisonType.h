#ifndef __android_icu_text_SearchIterator_S_ElementComparisonType__
#define __android_icu_text_SearchIterator_S_ElementComparisonType__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SearchIterator$ElementComparisonType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class SearchIterator_S_ElementComparisonType : public java::lang::Enum<android::icu::text::SearchIterator_S_ElementComparisonType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::SearchIterator_S_ElementComparisonType>> _S_VALUES;
	SearchIterator_S_ElementComparisonType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> ANY_BASE_WEIGHT_IS_WILDCARD;
	static std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> PATTERN_BASE_WEIGHT_IS_WILDCARD;
	static std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> STANDARD_ELEMENT_COMPARISON;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SearchIterator_S_ElementComparisonType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SearchIterator_S_ElementComparisonType(){
	}

}; // class SearchIterator_S_ElementComparisonType
}; // namespace android::icu::text

#endif //__android_icu_text_SearchIterator_S_ElementComparisonType__

