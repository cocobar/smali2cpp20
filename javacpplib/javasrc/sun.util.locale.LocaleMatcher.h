#ifndef __sun_util_locale_LocaleMatcher__
#define __sun_util_locale_LocaleMatcher__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleMatcher.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.List.h"
#include "java.util.Locale_S_FilteringMode.h"
#include "java.util.Locale_S_LanguageRange.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

namespace sun::util::locale{
class LocaleMatcher : public java::lang::Object {
protected:
private:
	LocaleMatcher();
	static std::shared_ptr<java::util::List<java::lang::String>> filterBasic(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::lang::String>> tags);
	static std::shared_ptr<java::util::List<java::lang::String>> filterExtended(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::lang::String>> tags);
	static std::shared_ptr<java::lang::String> getEquivalentForRegionAndVariant(std::shared_ptr<java::lang::String> range);
	static std::shared_ptr<java::lang::String> getEquivalentsForLanguage(std::shared_ptr<java::lang::String> range);
	static int getExtentionKeyIndex(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> replaceFirstSubStringMatch(std::shared_ptr<java::lang::String> range,std::shared_ptr<java::lang::String> substr,std::shared_ptr<java::lang::String> replacement);
public:
	static std::shared_ptr<java::util::List<java::util::Locale>> filter(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::util::Locale>> locales,std::shared_ptr<java::util::Locale_S_FilteringMode> mode);
	static std::shared_ptr<java::util::List<java::lang::String>> filterTags(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::lang::String>> tags,std::shared_ptr<java::util::Locale_S_FilteringMode> mode);
	static std::shared_ptr<java::util::Locale> lookup(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::util::Locale>> locales);
	static std::shared_ptr<java::lang::String> lookupTag(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Collection<java::lang::String>> tags);
	static std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> mapEquivalents(std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> priorityList,std::shared_ptr<java::util::Map<java::lang::String,java::util::List<java::lang::String>>> map);
	static std::shared_ptr<java::util::List<java::util::Locale_S_LanguageRange>> parse(std::shared_ptr<java::lang::String> ranges);
public:
	virtual ~LocaleMatcher(){
	}

}; // class LocaleMatcher
}; // namespace sun::util::locale

#endif //__sun_util_locale_LocaleMatcher__

