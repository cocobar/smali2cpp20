#ifndef __android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder__
#define __android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$Builder$ConfusabledataBuilder.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString.h"
#include "android.icu.text.SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool.h"
#include "android.icu.text.SpoofChecker_S_SpoofData.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.io.Reader.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.StringBuffer.h"
#include "java.util.ArrayList.h"
#include "java.util.Hashtable.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::text{
class SpoofChecker_S_Builder_S_ConfusabledataBuilder : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::UnicodeSet> fKeySet;
	std::shared_ptr<java::util::ArrayList<java::lang::Integer>> fKeyVec;
	int fLineNum;
	std::shared_ptr<java::util::regex::Pattern> fParseHexNum;
	std::shared_ptr<java::util::regex::Pattern> fParseLine;
	std::shared_ptr<java::lang::StringBuffer> fStringTable;
	std::shared_ptr<java::util::Hashtable<java::lang::Integer,android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUString>> fTable;
	std::shared_ptr<java::util::ArrayList<java::lang::Integer>> fValueVec;
	std::shared_ptr<android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder_S_SPUStringPool> stringPool;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	SpoofChecker_S_Builder_S_ConfusabledataBuilder();
	static void buildConfusableData(std::shared_ptr<java::io::Reader> confusables,std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> dest);
	void virtual build(std::shared_ptr<java::io::Reader> confusables,std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData> dest);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SpoofChecker_S_Builder_S_ConfusabledataBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SpoofChecker_S_Builder_S_ConfusabledataBuilder(){
	}

}; // class SpoofChecker_S_Builder_S_ConfusabledataBuilder
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_Builder_S_ConfusabledataBuilder__

