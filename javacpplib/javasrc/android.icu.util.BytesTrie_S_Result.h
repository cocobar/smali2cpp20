#ifndef __android_icu_util_BytesTrie_S_Result__
#define __android_icu_util_BytesTrie_S_Result__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BytesTrie$Result.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class BytesTrie_S_Result : public java::lang::Enum<android::icu::util::BytesTrie_S_Result> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::BytesTrie_S_Result>> _S_VALUES;
	BytesTrie_S_Result(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::util::BytesTrie_S_Result> FINAL_VALUE;
	static std::shared_ptr<android::icu::util::BytesTrie_S_Result> INTERMEDIATE_VALUE;
	static std::shared_ptr<android::icu::util::BytesTrie_S_Result> NO_MATCH;
	static std::shared_ptr<android::icu::util::BytesTrie_S_Result> NO_VALUE;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::BytesTrie_S_Result> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::BytesTrie_S_Result> values();
	bool virtual hasNext();
	bool virtual hasValue();
	bool virtual matches();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::BytesTrie_S_Result::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BytesTrie_S_Result(){
	}

}; // class BytesTrie_S_Result
}; // namespace android::icu::util

#endif //__android_icu_util_BytesTrie_S_Result__

