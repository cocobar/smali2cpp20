#ifndef __android_icu_text_SpoofChecker__
#define __android_icu_text_SpoofChecker__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.SpoofChecker_S_CheckResult.h"
#include "android.icu.text.SpoofChecker_S_RestrictionLevel.h"
#include "android.icu.text.SpoofChecker_S_ScriptSet.h"
#include "android.icu.text.SpoofChecker_S_SpoofData.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::text{
class SpoofChecker : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::text::Normalizer2> nfdNormalizer;
	std::shared_ptr<android::icu::text::UnicodeSet> fAllowedCharsSet;
	std::shared_ptr<java::util::Set<android::icu::util::ULocale>> fAllowedLocales;
	int fChecks;
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> fRestrictionLevel;
	std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> fSpoofData;
	SpoofChecker();
	static void getAugmentedScriptSet(int codePoint,std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> result);
	void virtual getNumerics(std::shared_ptr<java::lang::String> input,std::shared_ptr<android::icu::text::UnicodeSet> result);
	void virtual getResolvedScriptSet(std::shared_ptr<java::lang::CharSequence> input,std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> result);
	void virtual getResolvedScriptSetWithout(std::shared_ptr<java::lang::CharSequence> input,int script,std::shared_ptr<android::icu::text::SpoofChecker_S_ScriptSet> result);
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> virtual getRestrictionLevel(std::shared_ptr<java::lang::String> input);
public:
	static int ALL_CHECKS;
	static int ANY_CASE;
	static std::shared_ptr<android::icu::text::UnicodeSet> ASCII;
	static int CHAR_LIMIT;
	static int CONFUSABLE;
	static std::shared_ptr<android::icu::text::UnicodeSet> INCLUSION;
	static int INVISIBLE;
	static int MIXED_NUMBERS;
	static int MIXED_SCRIPT_CONFUSABLE;
	static std::shared_ptr<android::icu::text::UnicodeSet> RECOMMENDED;
	static int RESTRICTION_LEVEL;
	static int SINGLE_SCRIPT;
	static int SINGLE_SCRIPT_CONFUSABLE;
	static int WHOLE_SCRIPT_CONFUSABLE;
	static std::shared_ptr<android::icu::text::UnicodeSet> _get0(std::shared_ptr<android::icu::text::SpoofChecker> _this);
	static std::shared_ptr<java::util::Set> _get1(std::shared_ptr<android::icu::text::SpoofChecker> _this);
	static int _get2(std::shared_ptr<android::icu::text::SpoofChecker> _this);
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> _get3(std::shared_ptr<android::icu::text::SpoofChecker> _this);
	static std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> _get4(std::shared_ptr<android::icu::text::SpoofChecker> _this);
	static std::shared_ptr<android::icu::text::UnicodeSet> _set0(std::shared_ptr<android::icu::text::SpoofChecker> _this,std::shared_ptr<android::icu::text::UnicodeSet> _value);
	static std::shared_ptr<java::util::Set> _set1(std::shared_ptr<android::icu::text::SpoofChecker> _this,std::shared_ptr<java::util::Set> _value);
	static int _set2(std::shared_ptr<android::icu::text::SpoofChecker> _this,int _value);
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> _set3(std::shared_ptr<android::icu::text::SpoofChecker> _this,std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> _value);
	static std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> _set4(std::shared_ptr<android::icu::text::SpoofChecker> _this,std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> _value);
	static void static_cinit();
	SpoofChecker(std::shared_ptr<android::icu::text::SpoofChecker> _this0);
	int virtual areConfusable(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	bool virtual failsChecks(std::shared_ptr<java::lang::String> text);
	bool virtual failsChecks(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::text::SpoofChecker_S_CheckResult> checkResult);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getAllowedChars();
	std::shared_ptr<java::util::Set<java::util::Locale>> virtual getAllowedJavaLocales();
	std::shared_ptr<java::util::Set<android::icu::util::ULocale>> virtual getAllowedLocales();
	int virtual getChecks();
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> virtual getRestrictionLevel();
	std::shared_ptr<java::lang::String> virtual getSkeleton(int type,std::shared_ptr<java::lang::String> id);
	std::shared_ptr<java::lang::String> virtual getSkeleton(std::shared_ptr<java::lang::CharSequence> str);
	int virtual hashCode();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SpoofChecker::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SpoofChecker(){
	}

}; // class SpoofChecker
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker__

