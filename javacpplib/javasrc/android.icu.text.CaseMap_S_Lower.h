#ifndef __android_icu_text_CaseMap_S_Lower__
#define __android_icu_text_CaseMap_S_Lower__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CaseMap$Lower.smali
#include "java2ctype.h"
#include "android.icu.text.CaseMap.h"
#include "android.icu.text.Edits.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class CaseMap_S_Lower : public android::icu::text::CaseMap {
protected:
private:
	static std::shared_ptr<android::icu::text::CaseMap_S_Lower> DEFAULT;
	static std::shared_ptr<android::icu::text::CaseMap_S_Lower> OMIT_UNCHANGED;
	CaseMap_S_Lower(int opt);
public:
	static std::shared_ptr<android::icu::text::CaseMap_S_Lower> _get0();
	static void static_cinit();
	std::shared_ptr<java::lang::Appendable> virtual apply(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits);
	std::shared_ptr<android::icu::text::CaseMap_S_Lower> virtual omitUnchangedText();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CaseMap_S_Lower::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CaseMap_S_Lower(){
	}

}; // class CaseMap_S_Lower
}; // namespace android::icu::text

#endif //__android_icu_text_CaseMap_S_Lower__

