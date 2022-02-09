#ifndef __android_icu_text_Normalizer2_S_Mode__
#define __android_icu_text_Normalizer2_S_Mode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer2$Mode.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class Normalizer2_S_Mode : public java::lang::Enum<android::icu::text::Normalizer2_S_Mode> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::Normalizer2_S_Mode>> _S_VALUES;
	Normalizer2_S_Mode(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::Normalizer2_S_Mode> COMPOSE;
	static std::shared_ptr<android::icu::text::Normalizer2_S_Mode> COMPOSE_CONTIGUOUS;
	static std::shared_ptr<android::icu::text::Normalizer2_S_Mode> DECOMPOSE;
	static std::shared_ptr<android::icu::text::Normalizer2_S_Mode> FCD;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::Normalizer2_S_Mode> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::Normalizer2_S_Mode> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::Normalizer2_S_Mode::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Normalizer2_S_Mode(){
	}

}; // class Normalizer2_S_Mode
}; // namespace android::icu::text

#endif //__android_icu_text_Normalizer2_S_Mode__

