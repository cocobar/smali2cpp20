#ifndef __android_icu_text_IDNA__
#define __android_icu_text_IDNA__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\IDNA.smali
#include "java2ctype.h"
#include "android.icu.text.IDNA_S_Error.h"
#include "android.icu.text.IDNA_S_Info.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.util.EnumSet.h"

namespace android::icu::text{
class IDNA : public java::lang::Object {
protected:
	IDNA();
	static void addError(std::shared_ptr<android::icu::text::IDNA_S_Info> info,std::shared_ptr<android::icu::text::IDNA_S_Error> error);
	static void addLabelError(std::shared_ptr<android::icu::text::IDNA_S_Info> info,std::shared_ptr<android::icu::text::IDNA_S_Error> error);
	static bool hasCertainErrors(std::shared_ptr<android::icu::text::IDNA_S_Info> info,std::shared_ptr<java::util::EnumSet<android::icu::text::IDNA_S_Error>> errors);
	static bool hasCertainLabelErrors(std::shared_ptr<android::icu::text::IDNA_S_Info> info,std::shared_ptr<java::util::EnumSet<android::icu::text::IDNA_S_Error>> errors);
	static bool isBiDi(std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	static bool isOkBiDi(std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	static void promoteAndResetLabelErrors(std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	static void resetInfo(std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	static void setBiDi(std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	static void setNotOkBiDi(std::shared_ptr<android::icu::text::IDNA_S_Info> info);
	static void setTransitionalDifferent(std::shared_ptr<android::icu::text::IDNA_S_Info> info);
private:
public:
	static int ALLOW_UNASSIGNED;
	static int CHECK_BIDI;
	static int CHECK_CONTEXTJ;
	static int CHECK_CONTEXTO;
	static int DEFAULT;
	static int NONTRANSITIONAL_TO_ASCII;
	static int NONTRANSITIONAL_TO_UNICODE;
	static int USE_STD3_RULES;
	static int compare(std::shared_ptr<android::icu::text::UCharacterIterator> s1,std::shared_ptr<android::icu::text::UCharacterIterator> s2,int options);
	static int compare(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2,int options);
	static int compare(std::shared_ptr<java::lang::StringBuffer> s1,std::shared_ptr<java::lang::StringBuffer> s2,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertIDNToASCII(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertIDNToASCII(std::shared_ptr<java::lang::String> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertIDNToASCII(std::shared_ptr<java::lang::StringBuffer> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertIDNToUnicode(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertIDNToUnicode(std::shared_ptr<java::lang::String> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertIDNToUnicode(std::shared_ptr<java::lang::StringBuffer> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertToASCII(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertToASCII(std::shared_ptr<java::lang::String> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertToASCII(std::shared_ptr<java::lang::StringBuffer> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertToUnicode(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertToUnicode(std::shared_ptr<java::lang::String> src,int options);
	static std::shared_ptr<java::lang::StringBuffer> convertToUnicode(std::shared_ptr<java::lang::StringBuffer> src,int options);
	static std::shared_ptr<android::icu::text::IDNA> getUTS46Instance(int options);
	std::shared_ptr<java::lang::StringBuilder> labelToASCII(std::shared_ptr<java::lang::CharSequence> var0,std::shared_ptr<java::lang::StringBuilder> var1,std::shared_ptr<android::icu::text::IDNA_S_Info> var2) = 0;
	std::shared_ptr<java::lang::StringBuilder> labelToUnicode(std::shared_ptr<java::lang::CharSequence> var0,std::shared_ptr<java::lang::StringBuilder> var1,std::shared_ptr<android::icu::text::IDNA_S_Info> var2) = 0;
	std::shared_ptr<java::lang::StringBuilder> nameToASCII(std::shared_ptr<java::lang::CharSequence> var0,std::shared_ptr<java::lang::StringBuilder> var1,std::shared_ptr<android::icu::text::IDNA_S_Info> var2) = 0;
	std::shared_ptr<java::lang::StringBuilder> nameToUnicode(std::shared_ptr<java::lang::CharSequence> var0,std::shared_ptr<java::lang::StringBuilder> var1,std::shared_ptr<android::icu::text::IDNA_S_Info> var2) = 0;
public:
	virtual ~IDNA(){
	}

}; // class IDNA
}; // namespace android::icu::text

#endif //__android_icu_text_IDNA__

