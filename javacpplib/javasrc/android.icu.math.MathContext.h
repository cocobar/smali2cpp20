#ifndef __android_icu_math_MathContext__
#define __android_icu_math_MathContext__
// H L:\smali2cpp20\x64\Release\out\android\icu\math\MathContext.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.String.h"

namespace android::icu::math{
class MathContext : public java::io::Serializable {
protected:
private:
	static int DEFAULT_DIGITS;
	static int DEFAULT_FORM;
	static bool DEFAULT_LOSTDIGITS;
	static int DEFAULT_ROUNDINGMODE;
	static int MAX_DIGITS;
	static int MIN_DIGITS;
	static std::shared_ptr<int[]> ROUNDS;
	static std::shared_ptr<std::vector<java::lang::String>> ROUNDWORDS;
	static long long serialVersionUID;
	static bool isValidRound(int testround);
public:
	static std::shared_ptr<android::icu::math::MathContext> DEFAULT;
	static int ENGINEERING;
	static int PLAIN;
	static int ROUND_CEILING;
	static int ROUND_DOWN;
	static int ROUND_FLOOR;
	static int ROUND_HALF_DOWN;
	static int ROUND_HALF_EVEN;
	static int ROUND_HALF_UP;
	static int ROUND_UNNECESSARY;
	static int ROUND_UP;
	static int SCIENTIFIC;
	int digits;
	int form;
	bool lostDigits;
	int roundingMode;
	static void static_cinit();
	MathContext(int setdigits);
	MathContext(int setdigits,int setform);
	MathContext(int setdigits,int setform,bool setlostdigits);
	MathContext(int setdigits,int setform,bool setlostdigits,int setroundingmode);
	int virtual getDigits();
	int virtual getForm();
	bool virtual getLostDigits();
	int virtual getRoundingMode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::math::MathContext::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MathContext(){
	}

}; // class MathContext
}; // namespace android::icu::math

#endif //__android_icu_math_MathContext__

