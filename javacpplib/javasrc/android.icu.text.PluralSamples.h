#ifndef __android_icu_text_PluralSamples__
#define __android_icu_text_PluralSamples__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralSamples.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_KeywordStatus.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.Output.h"
#include "java.lang.Boolean.h"
#include "java.lang.Double.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::text{
class PluralSamples : public java::lang::Object {
protected:
private:
	static int LIMIT_FRACTION_SAMPLES;
	static std::shared_ptr<int[]> TENS;
	std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> _fractionSamples;
	std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>>> _keyFractionSamplesMap;
	std::shared_ptr<java::util::Map<java::lang::String,java::util::List<java::lang::Double>>> _keySamplesMap;
	std::shared_ptr<android::icu::text::PluralRules> pluralRules;
	bool virtual addIfNotPresent(double d,std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> mentioned,std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>>> foundKeywords);
	void virtual addRelation(std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>>> foundKeywords,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> s);
	int virtual addSimpleSamples(std::shared_ptr<android::icu::text::PluralRules> pluralRules,int MAX_SAMPLES,std::shared_ptr<java::util::Map<java::lang::String,java::util::List<java::lang::Double>>> sampleMap,int cVar1,double val);
	std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> virtual fractions(std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> original);
	std::shared_ptr<java::lang::Integer> virtual getDifferentCategory(std::shared_ptr<java::util::List<java::lang::Integer>> ints,std::shared_ptr<java::lang::String> keyword);
public:
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::Boolean>> _keyLimitedMap;
	static void static_cinit();
	PluralSamples(std::shared_ptr<android::icu::text::PluralRules> pluralRules);
	std::shared_ptr<java::util::Collection<java::lang::Double>> virtual getAllKeywordValues(std::shared_ptr<java::lang::String> keyword);
	std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> virtual getFractionSamples();
	std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>>> virtual getKeyFractionSamplesMap();
	std::shared_ptr<java::util::Map<java::lang::String,java::util::List<java::lang::Double>>> virtual getKeySamplesMap();
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> virtual getStatus(std::shared_ptr<java::lang::String> keyword,int offset,std::shared_ptr<java::util::Set<java::lang::Double>> explicits,std::shared_ptr<android::icu::util::Output<java::lang::Double>> uniqueValue);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::PluralSamples::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralSamples(){
	}

}; // class PluralSamples
}; // namespace android::icu::text

#endif //__android_icu_text_PluralSamples__

