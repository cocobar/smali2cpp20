#ifndef __android_icu_text_BidiTransform_S_Mirroring__
#define __android_icu_text_BidiTransform_S_Mirroring__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform$Mirroring.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class BidiTransform_S_Mirroring : public java::lang::Enum<android::icu::text::BidiTransform_S_Mirroring> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::BidiTransform_S_Mirroring>> _S_VALUES;
	BidiTransform_S_Mirroring(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> OFF;
	static std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> ON;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::BidiTransform_S_Mirroring::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BidiTransform_S_Mirroring(){
	}

}; // class BidiTransform_S_Mirroring
}; // namespace android::icu::text

#endif //__android_icu_text_BidiTransform_S_Mirroring__

