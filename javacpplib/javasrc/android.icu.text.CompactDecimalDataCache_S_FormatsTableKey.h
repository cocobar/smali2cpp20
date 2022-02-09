#ifndef __android_icu_text_CompactDecimalDataCache_S_FormatsTableKey__
#define __android_icu_text_CompactDecimalDataCache_S_FormatsTableKey__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$FormatsTableKey.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CompactDecimalDataCache_S_FormatsTableKey : public java::lang::Enum<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey>> _S_VALUES;
	CompactDecimalDataCache_S_FormatsTableKey(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> CURRENCY_FORMAT;
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> DECIMAL_FORMAT;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_FormatsTableKey> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CompactDecimalDataCache_S_FormatsTableKey::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CompactDecimalDataCache_S_FormatsTableKey(){
	}

}; // class CompactDecimalDataCache_S_FormatsTableKey
}; // namespace android::icu::text

#endif //__android_icu_text_CompactDecimalDataCache_S_FormatsTableKey__

