#ifndef __android_icu_text_TransliteratorIDParser__
#define __android_icu_text_TransliteratorIDParser__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorIDParser.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.TransliteratorIDParser_S_SingleID.h"
#include "android.icu.text.TransliteratorIDParser_S_Specs.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.CaseInsensitiveString.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.util.List.h"
#include "java.util.Map.h"

namespace android::icu::text{
class TransliteratorIDParser : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> ANY;
	static char CLOSE_REV;
	static int FORWARD;
	static char ID_DELIM;
	static char OPEN_REV;
	static int REVERSE;
	static std::shared_ptr<java::util::Map<android::icu::util::CaseInsensitiveString,java::lang::String>> SPECIAL_INVERSES;
	static char TARGET_SEP;
	static char VARIANT_SEP;
	static std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> parseFilterID(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos,bool allowFilter);
	static std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> specsToID(std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> specs,int dir);
	static std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> specsToSpecialInverse(std::shared_ptr<android::icu::text::TransliteratorIDParser_S_Specs> specs);
public:
	static void static_cinit();
	TransliteratorIDParser();
	static std::shared_ptr<java::lang::String> IDtoSTV(std::shared_ptr<java::lang::String> id);
	static std::shared_ptr<java::lang::String> STVtoID(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant);
	static std::shared_ptr<java::util::List<android::icu::text::Transliterator>> instantiateList(std::shared_ptr<java::util::List<android::icu::text::TransliteratorIDParser_S_SingleID>> ids);
	static bool parseCompoundID(std::shared_ptr<java::lang::String> id,int dir,std::shared_ptr<java::lang::StringBuffer> canonID,std::shared_ptr<java::util::List<android::icu::text::TransliteratorIDParser_S_SingleID>> list,std::shared_ptr<std::vector<android::icu::text::UnicodeSet>> globalFilter);
	static std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> parseFilterID(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos);
	static std::shared_ptr<android::icu::text::UnicodeSet> parseGlobalFilter(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos,int dir,std::shared_ptr<int[]> withParens,std::shared_ptr<java::lang::StringBuffer> canonID);
	static std::shared_ptr<android::icu::text::TransliteratorIDParser_S_SingleID> parseSingleID(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> pos,int dir);
	static void registerSpecialInverse(std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> inverseTarget,bool bidirectional);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TransliteratorIDParser::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TransliteratorIDParser(){
	}

}; // class TransliteratorIDParser
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorIDParser__

