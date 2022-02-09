#ifndef __android_icu_text_BidiTransform_S_ReorderingScheme_S_16__
#define __android_icu_text_BidiTransform_S_ReorderingScheme_S_16__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform$ReorderingScheme$16.smali
#include "java2ctype.h"
#include "android.icu.text.BidiTransform_S_Order.h"
#include "android.icu.text.BidiTransform_S_ReorderingScheme.h"
#include "android.icu.text.BidiTransform.h"
#include "java.lang.String.h"

namespace android::icu::text{
class BidiTransform_S_ReorderingScheme_S_16 : public android::icu::text::BidiTransform_S_ReorderingScheme {
protected:
private:
public:
	BidiTransform_S_ReorderingScheme_S_16(std::shared_ptr<java::lang::String> var0,int var1);
	void virtual doTransform(std::shared_ptr<android::icu::text::BidiTransform> transform);
	bool virtual matches(unsigned char inLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> inOrder,unsigned char outLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> outOrder);
public:
	virtual ~BidiTransform_S_ReorderingScheme_S_16(){
	}

}; // class BidiTransform_S_ReorderingScheme_S_16
}; // namespace android::icu::text

#endif //__android_icu_text_BidiTransform_S_ReorderingScheme_S_16__

