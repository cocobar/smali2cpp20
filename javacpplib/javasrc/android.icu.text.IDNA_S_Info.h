#ifndef __android_icu_text_IDNA_S_Info__
#define __android_icu_text_IDNA_S_Info__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\IDNA$Info.smali
#include "java2ctype.h"
#include "android.icu.text.IDNA_S_Error.h"
#include "java.lang.Object.h"
#include "java.util.EnumSet.h"
#include "java.util.Set.h"

namespace android::icu::text{
class IDNA_S_Info : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::EnumSet<android::icu::text::IDNA_S_Error>> errors;
	bool isBiDi;
	bool isOkBiDi;
	bool isTransDiff;
	std::shared_ptr<java::util::EnumSet<android::icu::text::IDNA_S_Error>> labelErrors;
	void virtual reset();
public:
	static std::shared_ptr<java::util::EnumSet> _get0(std::shared_ptr<android::icu::text::IDNA_S_Info> _this);
	static bool _get1(std::shared_ptr<android::icu::text::IDNA_S_Info> _this);
	static bool _get2(std::shared_ptr<android::icu::text::IDNA_S_Info> _this);
	static std::shared_ptr<java::util::EnumSet> _get3(std::shared_ptr<android::icu::text::IDNA_S_Info> _this);
	static bool _set0(std::shared_ptr<android::icu::text::IDNA_S_Info> _this,bool _value);
	static bool _set1(std::shared_ptr<android::icu::text::IDNA_S_Info> _this,bool _value);
	static bool _set2(std::shared_ptr<android::icu::text::IDNA_S_Info> _this,bool _value);
	static void _wrap0(std::shared_ptr<android::icu::text::IDNA_S_Info> _this);
	IDNA_S_Info();
	std::shared_ptr<java::util::Set<android::icu::text::IDNA_S_Error>> virtual getErrors();
	bool virtual hasErrors();
	bool virtual isTransitionalDifferent();
public:
	virtual ~IDNA_S_Info(){
	}

}; // class IDNA_S_Info
}; // namespace android::icu::text

#endif //__android_icu_text_IDNA_S_Info__

