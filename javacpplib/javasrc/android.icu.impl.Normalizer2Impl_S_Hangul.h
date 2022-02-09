#ifndef __android_icu_impl_Normalizer2Impl_S_Hangul__
#define __android_icu_impl_Normalizer2Impl_S_Hangul__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Normalizer2Impl$Hangul.smali
#include "java2ctype.h"
#include "java.lang.Appendable.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class Normalizer2Impl_S_Hangul : public java::lang::Object {
protected:
private:
public:
	static int HANGUL_BASE;
	static int HANGUL_COUNT;
	static int HANGUL_END;
	static int HANGUL_LIMIT;
	static int JAMO_L_BASE;
	static int JAMO_L_COUNT;
	static int JAMO_L_END;
	static int JAMO_L_LIMIT;
	static int JAMO_T_BASE;
	static int JAMO_T_COUNT;
	static int JAMO_T_END;
	static int JAMO_VT_COUNT;
	static int JAMO_V_BASE;
	static int JAMO_V_COUNT;
	static int JAMO_V_END;
	static int JAMO_V_LIMIT;
	Normalizer2Impl_S_Hangul();
	static int decompose(int c,std::shared_ptr<java::lang::Appendable> buffer);
	static void getRawDecomposition(int c,std::shared_ptr<java::lang::Appendable> buffer);
	static bool isHangul(int c);
	static bool isHangulWithoutJamoT(char c);
	static bool isJamoL(int c);
	static bool isJamoV(int c);
public:
	virtual ~Normalizer2Impl_S_Hangul(){
	}

}; // class Normalizer2Impl_S_Hangul
}; // namespace android::icu::impl

#endif //__android_icu_impl_Normalizer2Impl_S_Hangul__

