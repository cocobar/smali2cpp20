#ifndef __android_icu_text_Normalizer2__
#define __android_icu_text_Normalizer2__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer2.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_QuickCheckResult.h"
#include "android.icu.text.Normalizer2_S_Mode.h"
#include "java.io.InputStream.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class Normalizer2 : public java::lang::Object {
protected:
	Normalizer2();
private:
	static std::shared_ptr<int[]> _android_icu_text_Normalizer2_S_ModeSwitchesValues;
	static int _getandroid_icu_text_Normalizer2_S_ModeSwitchesValues();
public:
	static std::shared_ptr<android::icu::text::Normalizer2> getInstance(std::shared_ptr<java::io::InputStream> data,std::shared_ptr<java::lang::String> name,std::shared_ptr<android::icu::text::Normalizer2_S_Mode> mode);
	static std::shared_ptr<android::icu::text::Normalizer2> getNFCInstance();
	static std::shared_ptr<android::icu::text::Normalizer2> getNFDInstance();
	static std::shared_ptr<android::icu::text::Normalizer2> getNFKCCasefoldInstance();
	static std::shared_ptr<android::icu::text::Normalizer2> getNFKCInstance();
	static std::shared_ptr<android::icu::text::Normalizer2> getNFKDInstance();
	std::shared_ptr<java::lang::StringBuilder> append(std::shared_ptr<java::lang::StringBuilder> var0,std::shared_ptr<java::lang::CharSequence> var1) = 0;
	int virtual composePair(int a,int b);
	int virtual getCombiningClass(int c);
	std::shared_ptr<java::lang::String> getDecomposition(int var0) = 0;
	std::shared_ptr<java::lang::String> virtual getRawDecomposition(int c);
	bool hasBoundaryAfter(int var0) = 0;
	bool hasBoundaryBefore(int var0) = 0;
	bool isInert(int var0) = 0;
	bool isNormalized(std::shared_ptr<java::lang::CharSequence> var0) = 0;
	std::shared_ptr<java::lang::Appendable> normalize(std::shared_ptr<java::lang::CharSequence> var0,std::shared_ptr<java::lang::Appendable> var1) = 0;
	std::shared_ptr<java::lang::String> virtual normalize(std::shared_ptr<java::lang::CharSequence> src);
	std::shared_ptr<java::lang::StringBuilder> normalize(std::shared_ptr<java::lang::CharSequence> var0,std::shared_ptr<java::lang::StringBuilder> var1) = 0;
	std::shared_ptr<java::lang::StringBuilder> normalizeSecondAndAppend(std::shared_ptr<java::lang::StringBuilder> var0,std::shared_ptr<java::lang::CharSequence> var1) = 0;
	std::shared_ptr<android::icu::text::Normalizer_S_QuickCheckResult> quickCheck(std::shared_ptr<java::lang::CharSequence> var0) = 0;
	int spanQuickCheckYes(std::shared_ptr<java::lang::CharSequence> var0) = 0;
public:
	virtual ~Normalizer2(){
	}

}; // class Normalizer2
}; // namespace android::icu::text

#endif //__android_icu_text_Normalizer2__

