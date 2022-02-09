#ifndef __android_icu_text_BidiTransform_S_Order__
#define __android_icu_text_BidiTransform_S_Order__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform$Order.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class BidiTransform_S_Order : public java::lang::Enum<android::icu::text::BidiTransform_S_Order> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::BidiTransform_S_Order>> _S_VALUES;
	BidiTransform_S_Order(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::BidiTransform_S_Order> LOGICAL;
	static std::shared_ptr<android::icu::text::BidiTransform_S_Order> VISUAL;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::BidiTransform_S_Order> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::BidiTransform_S_Order> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::BidiTransform_S_Order::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BidiTransform_S_Order(){
	}

}; // class BidiTransform_S_Order
}; // namespace android::icu::text

#endif //__android_icu_text_BidiTransform_S_Order__

