#ifndef __android_icu_impl_UTS46__
#define __android_icu_impl_UTS46__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UTS46.smali
#include "java2ctype.h"
#include "android.icu.text.IDNA_S_Error.h"
#include "android.icu.text.IDNA_S_Info.h"
#include "android.icu.text.IDNA.h"
#include "android.icu.text.Normalizer2.h"
#include "java.lang.CharSequence.h"
#include "java.lang.StringBuilder.h"
#include "java.util.EnumSet.h"

namespace android::icu::impl{
class UTS46 : public android::icu::text::IDNA {
protected:
private:
	static int EN_AN_MASK;
	static int ES_CS_ET_ON_BN_NSM_MASK;
	static int L_EN_ES_CS_ET_ON_BN_NSM_MASK;
	static int L_EN_MASK;
	static int L_MASK;
	static int L_R_AL_MASK;
	static int R_AL_AN_EN_ES_CS_ET_ON_BN_NSM_MASK;
	static int R_AL_AN_MASK;
	static int R_AL_EN_AN_MASK;
	static int R_AL_MASK;
	static int U_GC_M_MASK;
	static std::shared_ptr<unsigned char[]> asciiData;
	static std::shared_ptr<java::util::EnumSet<android::icu::text::IDNA_S_Error>> severeErrors;
	static std::shared_ptr<android::icu::text::Normalizer2> uts46Norm2;
	static int U_GET_GC_MASK(int c);
	static int U_MASK(int x);
	void virtual checkLabelBiDi(std::shared_ptr<java::lang::CharSequence> label,int labelStart,int labelLength,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	void virtual checkLabelContextO(std::shared_ptr<java::lang::CharSequence> label,int labelStart,int labelLength,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	static bool isASCIIOkBiDi(std::shared_ptr<java::lang::CharSequence> s,int length);
	static bool isASCIIString(std::shared_ptr<java::lang::CharSequence> dest);
	bool virtual isLabelOkContextJ(std::shared_ptr<java::lang::CharSequence> label,int labelStart,int labelLength);
	static bool isNonASCIIDisallowedSTD3Valid(int c);
	int virtual mapDevChars(std::shared_ptr<java::lang::StringBuilder> dest,int labelStart,int mappingStart);
	int virtual markBadACELabel(std::shared_ptr<java::lang::StringBuilder> dest,int labelStart,int cVar1,bool toASCII,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	std::shared_ptr<java::lang::StringBuilder> virtual process(std::shared_ptr<java::lang::CharSequence> src,bool isLabel,bool toASCII,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	int virtual processLabel(std::shared_ptr<java::lang::StringBuilder> dest,int cVar0,int cVar2,bool toASCII,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	std::shared_ptr<java::lang::StringBuilder> virtual processUnicode(std::shared_ptr<java::lang::CharSequence> src,int labelStart,int mappingStart,bool isLabel,bool toASCII,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	static int replaceLabel(std::shared_ptr<java::lang::StringBuilder> dest,int destLabelStart,int destLabelLength,std::shared_ptr<java::lang::CharSequence> label,int labelLength);
public:
	int options;
	static void static_cinit();
	UTS46(int options);
	std::shared_ptr<java::lang::StringBuilder> virtual labelToASCII(std::shared_ptr<java::lang::CharSequence> label,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	std::shared_ptr<java::lang::StringBuilder> virtual labelToUnicode(std::shared_ptr<java::lang::CharSequence> label,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	std::shared_ptr<java::lang::StringBuilder> virtual nameToASCII(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	std::shared_ptr<java::lang::StringBuilder> virtual nameToUnicode(std::shared_ptr<java::lang::CharSequence> name,std::shared_ptr<java::lang::StringBuilder> dest,std::shared_ptr<android::icu::text::IDNA_S_Info> info);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::UTS46::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UTS46(){
	}

}; // class UTS46
}; // namespace android::icu::impl

#endif //__android_icu_impl_UTS46__

