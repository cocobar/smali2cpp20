#ifndef __android_icu_text_Normalizer_S_NFKC32ModeImpl__
#define __android_icu_text_Normalizer_S_NFKC32ModeImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$NFKC32ModeImpl.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_ModeImpl.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Normalizer_S_NFKC32ModeImpl : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> INSTANCE;
	Normalizer_S_NFKC32ModeImpl();
public:
	static std::shared_ptr<android::icu::text::Normalizer_S_ModeImpl> _get0();
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::Normalizer_S_NFKC32ModeImpl::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Normalizer_S_NFKC32ModeImpl(){
	}

}; // class Normalizer_S_NFKC32ModeImpl
}; // namespace android::icu::text

#endif //__android_icu_text_Normalizer_S_NFKC32ModeImpl__

