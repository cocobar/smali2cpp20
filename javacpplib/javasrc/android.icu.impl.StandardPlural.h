#ifndef __android_icu_impl_StandardPlural__
#define __android_icu_impl_StandardPlural__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\StandardPlural.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::impl{
class StandardPlural : public java::lang::Enum<android::icu::impl::StandardPlural> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::StandardPlural>> _S_VALUES;
	std::shared_ptr<java::lang::String> keyword;
	StandardPlural(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> kw);
public:
	static int COUNT;
	static std::shared_ptr<android::icu::impl::StandardPlural> FEW;
	static std::shared_ptr<android::icu::impl::StandardPlural> MANY;
	static std::shared_ptr<android::icu::impl::StandardPlural> ONE;
	static std::shared_ptr<android::icu::impl::StandardPlural> OTHER;
	static int OTHER_INDEX;
	static std::shared_ptr<android::icu::impl::StandardPlural> TWO;
	static std::shared_ptr<java::util::List<android::icu::impl::StandardPlural>> VALUES;
	static std::shared_ptr<android::icu::impl::StandardPlural> ZERO;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::StandardPlural> fromString(std::shared_ptr<java::lang::CharSequence> keyword);
	static int indexFromString(std::shared_ptr<java::lang::CharSequence> keyword);
	static int indexOrNegativeFromString(std::shared_ptr<java::lang::CharSequence> keyword);
	static int indexOrOtherIndexFromString(std::shared_ptr<java::lang::CharSequence> keyword);
	static std::shared_ptr<android::icu::impl::StandardPlural> orNullFromString(std::shared_ptr<java::lang::CharSequence> keyword);
	static std::shared_ptr<android::icu::impl::StandardPlural> orOtherFromString(std::shared_ptr<java::lang::CharSequence> keyword);
	static std::shared_ptr<android::icu::impl::StandardPlural> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::StandardPlural> values();
	std::shared_ptr<java::lang::String> virtual getKeyword();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::StandardPlural::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StandardPlural(){
	}

}; // class StandardPlural
}; // namespace android::icu::impl

#endif //__android_icu_impl_StandardPlural__

