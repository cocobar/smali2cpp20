#ifndef __android_icu_text_CompactDecimalDataCache_S_PatternsTableKey__
#define __android_icu_text_CompactDecimalDataCache_S_PatternsTableKey__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$PatternsTableKey.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CompactDecimalDataCache_S_PatternsTableKey : public java::lang::Enum<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey>> _S_VALUES;
	CompactDecimalDataCache_S_PatternsTableKey(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> PATTERNS_LONG;
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> PATTERNS_SHORT;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_PatternsTableKey> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CompactDecimalDataCache_S_PatternsTableKey::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CompactDecimalDataCache_S_PatternsTableKey(){
	}

}; // class CompactDecimalDataCache_S_PatternsTableKey
}; // namespace android::icu::text

#endif //__android_icu_text_CompactDecimalDataCache_S_PatternsTableKey__

