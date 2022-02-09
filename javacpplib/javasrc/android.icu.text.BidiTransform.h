#ifndef __android_icu_text_BidiTransform__
#define __android_icu_text_BidiTransform__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform.smali
#include "java2ctype.h"
#include "android.icu.text.Bidi.h"
#include "android.icu.text.BidiTransform_S_Mirroring.h"
#include "android.icu.text.BidiTransform_S_Order.h"
#include "android.icu.text.BidiTransform_S_ReorderingScheme.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class BidiTransform : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::Bidi> bidi;
	int reorderingOptions;
	int shapingOptions;
	std::shared_ptr<java::lang::String> text;
	static bool IsLTR(unsigned char level);
	static bool IsLogical(std::shared_ptr<android::icu::text::BidiTransform_S_Order> order);
	static bool IsRTL(unsigned char level);
	static bool IsVisual(std::shared_ptr<android::icu::text::BidiTransform_S_Order> order);
	std::shared_ptr<android::icu::text::BidiTransform_S_ReorderingScheme> virtual findMatchingScheme(unsigned char inLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> inOrder,unsigned char outLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> outOrder);
	void virtual mirror();
	void virtual reorder();
	void virtual resolve(unsigned char level,int options);
	void virtual resolveBaseDirection(std::shared_ptr<unsigned char[]> levels);
	void virtual reverse();
	void virtual shapeArabic(int options);
	void virtual shapeArabic(int digitsDir,int lettersDir);
public:
	static bool _wrap0(unsigned char level);
	static bool _wrap1(std::shared_ptr<android::icu::text::BidiTransform_S_Order> order);
	static bool _wrap2(unsigned char level);
	static bool _wrap3(std::shared_ptr<android::icu::text::BidiTransform_S_Order> order);
	static void _wrap4(std::shared_ptr<android::icu::text::BidiTransform> _this);
	static void _wrap5(std::shared_ptr<android::icu::text::BidiTransform> _this);
	static void _wrap6(std::shared_ptr<android::icu::text::BidiTransform> _this,unsigned char level,int options);
	static void _wrap7(std::shared_ptr<android::icu::text::BidiTransform> _this);
	static void _wrap8(std::shared_ptr<android::icu::text::BidiTransform> _this,int digitsDir,int lettersDir);
	BidiTransform();
	std::shared_ptr<java::lang::String> virtual transform(std::shared_ptr<java::lang::CharSequence> text,unsigned char inParaLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> inOrder,unsigned char outParaLevel,std::shared_ptr<android::icu::text::BidiTransform_S_Order> outOrder,std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> doMirroring,int shapingOptions);
public:
	virtual ~BidiTransform(){
	}

}; // class BidiTransform
}; // namespace android::icu::text

#endif //__android_icu_text_BidiTransform__

