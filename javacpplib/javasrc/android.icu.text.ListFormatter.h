#ifndef __android_icu_text_ListFormatter__
#define __android_icu_text_ListFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ListFormatter.smali
#include "java2ctype.h"
#include "android.icu.text.ListFormatter_S_Cache.h"
#include "android.icu.text.ListFormatter_S_FormattedListBuilder.h"
#include "android.icu.text.ListFormatter_S_Style.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collection.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class ListFormatter : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> end;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<java::lang::String> middle;
	std::shared_ptr<java::lang::String> start;
	std::shared_ptr<java::lang::String> two;
	ListFormatter(std::shared_ptr<java::lang::String> two,std::shared_ptr<java::lang::String> start,std::shared_ptr<java::lang::String> middle,std::shared_ptr<java::lang::String> end,std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<java::lang::String> compilePattern(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::StringBuilder> sb);
public:
	static std::shared_ptr<android::icu::text::ListFormatter_S_Cache> cache;
	static std::shared_ptr<java::lang::String> _wrap0(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::StringBuilder> sb);
	static void static_cinit();
	ListFormatter(std::shared_ptr<java::lang::String> two,std::shared_ptr<java::lang::String> start,std::shared_ptr<java::lang::String> middle,std::shared_ptr<java::lang::String> end);
	ListFormatter(std::shared_ptr<java::lang::String> two,std::shared_ptr<java::lang::String> start,std::shared_ptr<java::lang::String> middle,std::shared_ptr<java::lang::String> end,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::ListFormatter> _this5);
	static std::shared_ptr<android::icu::text::ListFormatter> getInstance();
	static std::shared_ptr<android::icu::text::ListFormatter> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::ListFormatter> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::ListFormatter_S_Style> style);
	static std::shared_ptr<android::icu::text::ListFormatter> getInstance(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<android::icu::text::ListFormatter_S_FormattedListBuilder> virtual format(std::shared_ptr<java::util::Collection<java::lang::Object>> items,int index);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::util::Collection<java::lang::Object>> items);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<std::vector<java::lang::Object>> items);
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale();
	std::shared_ptr<java::lang::String> virtual getPatternForNumItems(int count);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::ListFormatter::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ListFormatter(){
	}

}; // class ListFormatter
}; // namespace android::icu::text

#endif //__android_icu_text_ListFormatter__

