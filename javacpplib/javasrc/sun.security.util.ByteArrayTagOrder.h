#ifndef __sun_security_util_ByteArrayTagOrder__
#define __sun_security_util_ByteArrayTagOrder__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ByteArrayTagOrder.smali
#include "java2ctype.h"
#include "java.util.Comparator.h"

namespace sun::security::util{
class ByteArrayTagOrder : public java::util::Comparator<unsigned char[]> {
protected:
private:
public:
	ByteArrayTagOrder();
	int virtual compare(std::shared_ptr<unsigned char[]> bytes1,std::shared_ptr<unsigned char[]> bytes2);
public:
	virtual ~ByteArrayTagOrder(){
	}

}; // class ByteArrayTagOrder
}; // namespace sun::security::util

#endif //__sun_security_util_ByteArrayTagOrder__

