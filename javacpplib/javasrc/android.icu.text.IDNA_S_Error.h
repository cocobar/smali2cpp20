#ifndef __android_icu_text_IDNA_S_Error__
#define __android_icu_text_IDNA_S_Error__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\IDNA$Error.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class IDNA_S_Error : public java::lang::Enum<android::icu::text::IDNA_S_Error> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::IDNA_S_Error>> _S_VALUES;
	IDNA_S_Error(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::IDNA_S_Error> BIDI;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> CONTEXTJ;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> CONTEXTO_DIGITS;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> CONTEXTO_PUNCTUATION;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> DISALLOWED;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> DOMAIN_NAME_TOO_LONG;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> EMPTY_LABEL;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> HYPHEN_3_4;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> INVALID_ACE_LABEL;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> LABEL_HAS_DOT;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> LABEL_TOO_LONG;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> LEADING_COMBINING_MARK;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> LEADING_HYPHEN;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> PUNYCODE;
	static std::shared_ptr<android::icu::text::IDNA_S_Error> TRAILING_HYPHEN;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::IDNA_S_Error> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::IDNA_S_Error> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::IDNA_S_Error::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~IDNA_S_Error(){
	}

}; // class IDNA_S_Error
}; // namespace android::icu::text

#endif //__android_icu_text_IDNA_S_Error__

