#ifndef __android_icu_text_CaseMap__
#define __android_icu_text_CaseMap__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CaseMap.smali
#include "java2ctype.h"
#include "android.icu.text.CaseMap_S_Fold.h"
#include "android.icu.text.CaseMap_S_Lower.h"
#include "android.icu.text.CaseMap_S_Title.h"
#include "android.icu.text.CaseMap_S_Upper.h"
#include "java.lang.Object.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class CaseMap : public java::lang::Object {
protected:
	int internalOptions;
private:
	CaseMap(int opt);
	static int getCaseLocale(std::shared_ptr<java::util::Locale> cVar0);
public:
	static int _wrap0(std::shared_ptr<java::util::Locale> locale);
	CaseMap(int opt,std::shared_ptr<android::icu::text::CaseMap> _this1);
	static std::shared_ptr<android::icu::text::CaseMap_S_Fold> fold();
	static std::shared_ptr<android::icu::text::CaseMap_S_Lower> toLower();
	static std::shared_ptr<android::icu::text::CaseMap_S_Title> toTitle();
	static std::shared_ptr<android::icu::text::CaseMap_S_Upper> toUpper();
	std::shared_ptr<android::icu::text::CaseMap> omitUnchangedText() = 0;
public:
	virtual ~CaseMap(){
	}

}; // class CaseMap
}; // namespace android::icu::text

#endif //__android_icu_text_CaseMap__

