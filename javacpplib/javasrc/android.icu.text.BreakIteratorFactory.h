#ifndef __android_icu_text_BreakIteratorFactory__
#define __android_icu_text_BreakIteratorFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIteratorFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.text.BreakIterator_S_BreakIteratorServiceShim.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class BreakIteratorFactory : public android::icu::text::BreakIterator_S_BreakIteratorServiceShim {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> KIND_NAMES;
	static std::shared_ptr<android::icu::text::BreakIterator> createBreakInstance(std::shared_ptr<android::icu::util::ULocale> locale,int kind);
public:
	static std::shared_ptr<android::icu::impl::ICULocaleService> service;
	static std::shared_ptr<android::icu::text::BreakIterator> _wrap0(std::shared_ptr<android::icu::util::ULocale> locale,int kind);
	static void static_cinit();
	BreakIteratorFactory();
	std::shared_ptr<android::icu::text::BreakIterator> virtual createBreakIterator(std::shared_ptr<android::icu::util::ULocale> locale,int kind);
	std::shared_ptr<java::util::Locale> virtual getAvailableLocales();
	std::shared_ptr<android::icu::util::ULocale> virtual getAvailableULocales();
	std::shared_ptr<java::lang::Object> virtual registerInstance(std::shared_ptr<android::icu::text::BreakIterator> iter,std::shared_ptr<android::icu::util::ULocale> locale,int kind);
	bool virtual unregister(std::shared_ptr<java::lang::Object> key);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::BreakIteratorFactory::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BreakIteratorFactory(){
	}

}; // class BreakIteratorFactory
}; // namespace android::icu::text

#endif //__android_icu_text_BreakIteratorFactory__

