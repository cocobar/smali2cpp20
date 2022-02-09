#ifndef __android_icu_text_AlphabeticIndex_S_Bucket_S_LabelType__
#define __android_icu_text_AlphabeticIndex_S_Bucket_S_LabelType__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$Bucket$LabelType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class AlphabeticIndex_S_Bucket_S_LabelType : public java::lang::Enum<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType>> _S_VALUES;
	AlphabeticIndex_S_Bucket_S_LabelType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> INFLOW;
	static std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> NORMAL;
	static std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> OVERFLOW;
	static std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> UNDERFLOW;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AlphabeticIndex_S_Bucket_S_LabelType(){
	}

}; // class AlphabeticIndex_S_Bucket_S_LabelType
}; // namespace android::icu::text

#endif //__android_icu_text_AlphabeticIndex_S_Bucket_S_LabelType__

