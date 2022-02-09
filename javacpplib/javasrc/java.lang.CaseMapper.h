#ifndef __java_lang_CaseMapper__
#define __java_lang_CaseMapper__
// H L:\smali2cpp20\x64\Release\out\java\lang\CaseMapper.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.ThreadLocal.h"
#include "java.util.Locale.h"

namespace java::lang{
class CaseMapper : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::ThreadLocal<android::icu::text::Transliterator>> EL_UPPER;
	static char GREEK_CAPITAL_SIGMA;
	static char GREEK_SMALL_FINAL_SIGMA;
	static char LATIN_CAPITAL_I_WITH_DOT;
	static std::shared_ptr<char[]> upperValues;
	static std::shared_ptr<char[]> upperValues2;
	CaseMapper();
	static bool isFinalSigma(std::shared_ptr<java::lang::String> s,int index);
	static int upperIndex(int ch);
public:
	static void static_cinit();
	static std::shared_ptr<java::lang::String> toLowerCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> cVar2);
	static std::shared_ptr<java::lang::String> toUpperCase(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::String> s,int count);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::CaseMapper::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CaseMapper(){
	}

}; // class CaseMapper
}; // namespace java::lang

#endif //__java_lang_CaseMapper__

