#ifndef __android_icu_text_BidiTransform_S_ReorderingScheme__
#define __android_icu_text_BidiTransform_S_ReorderingScheme__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform$ReorderingScheme.smali
#include "java2ctype.h"
#include "android.icu.text.BidiTransform_S_Order.h"
#include "android.icu.text.BidiTransform.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class BidiTransform_S_ReorderingScheme : public java::lang::Enum<android::icu::text::BidiTransform_S_ReorderingScheme> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::BidiTransform_S_ReorderingScheme>> _S_VALUES;
	BidiTransform_S_ReorderingScheme(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> LOG_LTR_TO_LOG_LTR;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> LOG_LTR_TO_LOG_RTL;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> LOG_LTR_TO_VIS_LTR;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> LOG_LTR_TO_VIS_RTL;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> LOG_RTL_TO_LOG_LTR;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> LOG_RTL_TO_LOG_RTL;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> LOG_RTL_TO_VIS_LTR;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> LOG_RTL_TO_VIS_RTL;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> VIS_LTR_TO_LOG_LTR;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> VIS_LTR_TO_LOG_RTL;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> VIS_LTR_TO_VIS_LTR;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> VIS_LTR_TO_VIS_RTL;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> VIS_RTL_TO_LOG_LTR;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> VIS_RTL_TO_LOG_RTL;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> VIS_RTL_TO_VIS_LTR;
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> VIS_RTL_TO_VIS_RTL;
	static void static_cinit();
	BidiTransform_S_ReorderingScheme(std::shared_ptr<java::lang::String> enum_S_name,int enum_S_ordinal,std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> _this2);
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> values();
	void doTransform(std::shared_ptr<android::icu::text::BidiTransform> var0) = 0;
	bool matches(unsigned char var0,std::shared_ptr<android::icu::text::BidiTransform_S_Order> var1,unsigned char var2,std::shared_ptr<android::icu::text::BidiTransform_S_Order> var3) = 0;
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::BidiTransform_S_ReorderingScheme::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BidiTransform_S_ReorderingScheme(){
	}

}; // class BidiTransform_S_ReorderingScheme
}; // namespace android::icu::text

#endif //__android_icu_text_BidiTransform_S_ReorderingScheme__

