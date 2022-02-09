#ifndef __sun_security_util_DerInputBuffer__
#define __sun_security_util_DerInputBuffer__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\DerInputBuffer.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.hh"
#include "java.lang.Cloneable.hh"

namespace sun::security::util{
class DerInputBuffer : public java::io::ByteArrayInputStream, public java::lang::Cloneable {
public:
	DerInputBuffer();
	virtual ~DerInputBuffer();

}; // class DerInputBuffer
}; // namespace sun::security::util

#endif //__sun_security_util_DerInputBuffer__

