#ifndef __java_lang_Math_S_RandomNumberGeneratorHolder__
#define __java_lang_Math_S_RandomNumberGeneratorHolder__
// H L:\smali2cpp20\x64\Release\out\java\lang\Math$RandomNumberGeneratorHolder.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.Random.h"

namespace java::lang{
class Math_S_RandomNumberGeneratorHolder : public java::lang::Object {
protected:
private:
	Math_S_RandomNumberGeneratorHolder();
public:
	static std::shared_ptr<java::util::Random> randomNumberGenerator;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Math_S_RandomNumberGeneratorHolder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Math_S_RandomNumberGeneratorHolder(){
	}

}; // class Math_S_RandomNumberGeneratorHolder
}; // namespace java::lang

#endif //__java_lang_Math_S_RandomNumberGeneratorHolder__

