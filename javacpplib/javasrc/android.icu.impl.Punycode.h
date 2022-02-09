#ifndef __android_icu_impl_Punycode__
#define __android_icu_impl_Punycode__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Punycode.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl{
class Punycode : public java::lang::Object {
protected:
private:
	static int BASE;
	static int CAPITAL_A;
	static int CAPITAL_Z;
	static int DAMP;
	static char DELIMITER;
	static char HYPHEN;
	static int INITIAL_BIAS;
	static int INITIAL_N;
	static int SKEW;
	static int SMALL_A;
	static int SMALL_Z;
	static int TMAX;
	static int TMIN;
	static int ZERO;
	static int adaptBias(int delta,int length,bool firstTime);
	static char asciiCaseMap(char cVar0,bool uppercase);
	static char digitToBasic(int digit,bool uppercase);
	static bool isBasic(int ch);
	static bool isBasicUpperCase(int ch);
	static bool isSurrogate(int ch);
public:
	static std::shared_ptr<int[]> basicToDigit;
	static void static_cinit();
	Punycode();
	static std::shared_ptr<java::lang::StringBuilder> decode(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<bool[]> caseFlags);
	static std::shared_ptr<java::lang::StringBuilder> encode(std::shared_ptr<java::lang::CharSequence> src,std::shared_ptr<bool[]> caseFlags);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Punycode::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Punycode(){
	}

}; // class Punycode
}; // namespace android::icu::impl

#endif //__android_icu_impl_Punycode__

