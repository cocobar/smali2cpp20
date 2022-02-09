#ifndef __android_icu_text_CaseMap_S_Fold__
#define __android_icu_text_CaseMap_S_Fold__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CaseMap$Fold.smali
#include "java2ctype.h"
#include "android.icu.text.CaseMap.h"
#include "android.icu.text.Edits.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"

namespace android::icu::text{
class CaseMap_S_Fold : public android::icu::text::CaseMap {
protected:
private:
	static std::shared_ptr<android::icu::text::CaseMap_S_Fold> DEFAULT;
	static std::shared_ptr<android::icu::text::CaseMap_S_Fold> OMIT_UNCHANGED;
	static std::shared_ptr<android::icu::text::CaseMap_S_Fold> TURKIC;
	static std::shared_ptr<android::icu::text::CaseMap_S_Fold> TURKIC_OMIT_UNCHANGED;
	CaseMap_S_Fold(int opt);
public:
	static std::shared_ptr<android::icu::text::CaseMap_S_Fold> _get0();
	static void static_cinit();
	std::shared_ptr<java::lang::Appendable> virtual apply(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<java::lang::Appendable> dest,std::shared_ptr<android::icu::text::Edits> edits);
	std::shared_ptr<android::icu::text::CaseMap_S_Fold> virtual omitUnchangedText();
	std::shared_ptr<android::icu::text::CaseMap_S_Fold> virtual turkic();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CaseMap_S_Fold::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CaseMap_S_Fold(){
	}

}; // class CaseMap_S_Fold
}; // namespace android::icu::text

#endif //__android_icu_text_CaseMap_S_Fold__

