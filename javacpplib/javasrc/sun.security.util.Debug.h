#ifndef __sun_security_util_Debug__
#define __sun_security_util_Debug__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\Debug.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"

namespace sun::security::util{
class Debug : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> args;
	static std::shared_ptr<char[]> hexDigits;
	std::shared_ptr<java::lang::String> prefix;
	static std::shared_ptr<java::lang::String> marshal(std::shared_ptr<java::lang::String> args);
public:
	static void static_cinit();
	Debug();
	static std::shared_ptr<sun::security::util::Debug> getInstance(std::shared_ptr<java::lang::String> option);
	static std::shared_ptr<sun::security::util::Debug> getInstance(std::shared_ptr<java::lang::String> option,std::shared_ptr<java::lang::String> prefix);
	static bool isOn(std::shared_ptr<java::lang::String> option);
	static std::shared_ptr<java::lang::String> toHexString(std::shared_ptr<java::math::BigInteger> b);
	static std::shared_ptr<java::lang::String> toString(std::shared_ptr<unsigned char[]> b);
	void virtual println();
	void virtual println(std::shared_ptr<java::lang::String> message);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::Debug::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Debug(){
	}

}; // class Debug
}; // namespace sun::security::util

#endif //__sun_security_util_Debug__

