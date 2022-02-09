#ifndef __sun_security_util_ByteArrayLexOrder__
#define __sun_security_util_ByteArrayLexOrder__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ByteArrayLexOrder.smali
#include "java2ctype.h"
#include "java.util.Comparator.h"

namespace sun::security::util{
class ByteArrayLexOrder : public java::util::Comparator<unsigned char[]> {
public:
	ByteArrayLexOrder();
	virtual ~ByteArrayLexOrder();

}; // class ByteArrayLexOrder
}; // namespace sun::security::util

#endif //__sun_security_util_ByteArrayLexOrder__

