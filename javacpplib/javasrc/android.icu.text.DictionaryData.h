#ifndef __android_icu_text_DictionaryData__
#define __android_icu_text_DictionaryData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryData.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DictionaryData : public java::lang::Object {
protected:
private:
	static int DATA_FORMAT_ID;
	DictionaryData();
public:
	static int IX_COUNT;
	static int IX_RESERVED1_OFFSET;
	static int IX_RESERVED2_OFFSET;
	static int IX_RESERVED6;
	static int IX_RESERVED7;
	static int IX_STRING_TRIE_OFFSET;
	static int IX_TOTAL_SIZE;
	static int IX_TRANSFORM;
	static int IX_TRIE_TYPE;
	static int TRANSFORM_NONE;
	static int TRANSFORM_OFFSET_MASK;
	static int TRANSFORM_TYPE_MASK;
	static int TRANSFORM_TYPE_OFFSET;
	static int TRIE_HAS_VALUES;
	static int TRIE_TYPE_BYTES;
	static int TRIE_TYPE_MASK;
	static int TRIE_TYPE_UCHARS;
	static std::shared_ptr<android::icu::text::DictionaryMatcher> loadDictionaryFor(std::shared_ptr<java::lang::String> dictType);
public:
	virtual ~DictionaryData(){
	}

}; // class DictionaryData
}; // namespace android::icu::text

#endif //__android_icu_text_DictionaryData__

