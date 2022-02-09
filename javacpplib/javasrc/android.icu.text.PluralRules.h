#ifndef __android_icu_text_PluralRules__
#define __android_icu_text_PluralRules__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRules_S_Constraint.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules_S_FixedDecimalSamples.h"
#include "android.icu.text.PluralRules_S_KeywordStatus.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules_S_Rule.h"
#include "android.icu.text.PluralRules_S_RuleList.h"
#include "android.icu.text.PluralRules_S_SampleType.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.Boolean.h"
#include "java.lang.Double.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParseException.h"
#include "java.util.Collection.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::text{
class PluralRules : public java::io::Serializable {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_text_PluralRules_S_SampleTypeSwitchesValues;
	static std::shared_ptr<android::icu::text::PluralRules_S_Rule> DEFAULT_RULE;
	static std::shared_ptr<android::icu::text::PluralRules_S_Constraint> NO_CONSTRAINT;
	static long long serialVersionUID;
	std::shared_ptr<java::util::Set<java::lang::String>> keywords;
	std::shared_ptr<android::icu::text::PluralRules_S_RuleList> rules;
	static int _getandroid_icu_text_PluralRules_S_SampleTypeSwitchesValues();
	PluralRules(std::shared_ptr<android::icu::text::PluralRules_S_RuleList> rules);
	bool virtual addConditional(std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> toAddTo,std::shared_ptr<java::util::Set<android::icu::text::PluralRules_S_FixedDecimal>> others,double trial);
	static void addRange(std::shared_ptr<java::lang::StringBuilder> result,double lb,double ub,bool addSeparator);
	static std::shared_ptr<java::lang::String> format(double lb);
	static bool isValidKeyword(std::shared_ptr<java::lang::String> token);
	static std::shared_ptr<java::lang::String> nextToken(std::shared_ptr<std::vector<java::lang::String>> tokens,int x,std::shared_ptr<java::lang::String> context);
	static std::shared_ptr<android::icu::text::PluralRules_S_Constraint> parseConstraint(std::shared_ptr<java::lang::String> description);
	static std::shared_ptr<android::icu::text::PluralRules_S_Rule> parseRule(std::shared_ptr<java::lang::String> description);
	static std::shared_ptr<android::icu::text::PluralRules_S_RuleList> parseRuleChain(std::shared_ptr<java::lang::String> cVar1);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	static std::shared_ptr<java::text::ParseException> unexpected(std::shared_ptr<java::lang::String> token,std::shared_ptr<java::lang::String> context);
	void virtual writeObject(std::shared_ptr<java::io::ObjectOutputStream> out);
	std::shared_ptr<java::lang::Object> virtual writeReplace();
public:
	static std::shared_ptr<android::icu::text::UnicodeSet> ALLOWED_ID;
	static std::shared_ptr<java::util::regex::Pattern> AND_SEPARATED;
	static std::shared_ptr<java::util::regex::Pattern> AT_SEPARATED;
	static std::shared_ptr<java::lang::String> CATEGORY_SEPARATOR;
	static std::shared_ptr<java::util::regex::Pattern> COMMA_SEPARATED;
	static std::shared_ptr<android::icu::text::PluralRules> DEFAULT;
	static std::shared_ptr<java::util::regex::Pattern> DOTDOT_SEPARATED;
	static std::shared_ptr<java::lang::String> KEYWORD_FEW;
	static std::shared_ptr<java::lang::String> KEYWORD_MANY;
	static std::shared_ptr<java::lang::String> KEYWORD_ONE;
	static std::shared_ptr<java::lang::String> KEYWORD_OTHER;
	static std::shared_ptr<java::lang::String> KEYWORD_RULE_SEPARATOR;
	static std::shared_ptr<java::lang::String> KEYWORD_TWO;
	static std::shared_ptr<java::lang::String> KEYWORD_ZERO;
	static double NO_UNIQUE_VALUE;
	static std::shared_ptr<java::util::regex::Pattern> OR_SEPARATED;
	static std::shared_ptr<java::util::regex::Pattern> SEMI_SEPARATED;
	static std::shared_ptr<java::util::regex::Pattern> TILDE_SEPARATED;
	static std::shared_ptr<android::icu::text::PluralRules_S_Rule> _wrap0(std::shared_ptr<java::lang::String> description);
	static void _wrap1(std::shared_ptr<java::lang::StringBuilder> result,double lb,double ub,bool addSeparator);
	static void static_cinit();
	static std::shared_ptr<android::icu::text::PluralRules> createRules(std::shared_ptr<java::lang::String> description);
	static std::shared_ptr<android::icu::text::PluralRules> forLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::PluralRules> forLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type);
	static std::shared_ptr<android::icu::text::PluralRules> forLocale(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::PluralRules> forLocale(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type);
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<android::icu::util::ULocale> getFunctionalEquivalent(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<bool[]> isAvailable);
	static std::shared_ptr<android::icu::text::PluralRules> parseDescription(std::shared_ptr<java::lang::String> description);
	bool virtual addSample(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::Number> sample,int maxCount,std::shared_ptr<java::util::Set<java::lang::Double>> result);
	int virtual compareTo(std::shared_ptr<android::icu::text::PluralRules> other);
	bool virtual computeLimited(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	bool virtual equals(std::shared_ptr<android::icu::text::PluralRules> rhs);
	bool virtual equals(std::shared_ptr<java::lang::Object> rhs);
	std::shared_ptr<java::util::Collection<java::lang::Double>> virtual getAllKeywordValues(std::shared_ptr<java::lang::String> keyword);
	std::shared_ptr<java::util::Collection<java::lang::Double>> virtual getAllKeywordValues(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> type);
	std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimalSamples> virtual getDecimalSamples(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> virtual getKeywordStatus(std::shared_ptr<java::lang::String> keyword,int offset,std::shared_ptr<java::util::Set<java::lang::Double>> explicits,std::shared_ptr<android::icu::util::Output<java::lang::Double>> uniqueValue);
	std::shared_ptr<android::icu::text::PluralRules_S_KeywordStatus> virtual getKeywordStatus(std::shared_ptr<java::lang::String> keyword,int offset,std::shared_ptr<java::util::Set<java::lang::Double>> explicits,std::shared_ptr<android::icu::util::Output<java::lang::Double>> uniqueValue,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getKeywords();
	std::shared_ptr<java::lang::String> virtual getRules(std::shared_ptr<java::lang::String> keyword);
	std::shared_ptr<java::util::Collection<java::lang::Double>> virtual getSamples(std::shared_ptr<java::lang::String> keyword);
	std::shared_ptr<java::util::Collection<java::lang::Double>> virtual getSamples(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	double virtual getUniqueKeywordValue(std::shared_ptr<java::lang::String> keyword);
	int virtual hashCode();
	std::shared_ptr<java::lang::Boolean> virtual isLimited(std::shared_ptr<java::lang::String> keyword);
	bool virtual isLimited(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::text::PluralRules_S_SampleType> sampleType);
	bool virtual matches(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> sample,std::shared_ptr<java::lang::String> keyword);
	std::shared_ptr<java::lang::String> virtual select(double number);
	std::shared_ptr<java::lang::String> virtual select(double number,int countVisibleFractionDigits,long long fractionaldigits);
	std::shared_ptr<java::lang::String> virtual select(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> number);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::PluralRules::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralRules(){
	}

}; // class PluralRules
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules__

