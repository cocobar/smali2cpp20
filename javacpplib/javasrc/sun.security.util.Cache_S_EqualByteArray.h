#ifndef __sun_security_util_Cache_S_EqualByteArray__
#define __sun_security_util_Cache_S_EqualByteArray__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\Cache$EqualByteArray.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace sun::security::util{
class Cache_S_EqualByteArray : public java::lang::Object {
protected:
private:
	std::shared_ptr<unsigned char[]> b;
	int hash;
public:
	Cache_S_EqualByteArray(std::shared_ptr<unsigned char[]> b);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
public:
	virtual ~Cache_S_EqualByteArray(){
	}

}; // class Cache_S_EqualByteArray
}; // namespace sun::security::util

#endif //__sun_security_util_Cache_S_EqualByteArray__

