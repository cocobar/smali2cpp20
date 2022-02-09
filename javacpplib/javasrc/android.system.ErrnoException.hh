#ifndef __android_system_ErrnoException__
#define __android_system_ErrnoException__
// H L:\smali2cpp20\x64\Release\out\android\system\ErrnoException.smali
#include "java2ctype.h"
#include "java.lang.Exception.hh"

namespace android::system{
class ErrnoException : public java::lang::Exception {
public:
	ErrnoException();
	virtual ~ErrnoException();

}; // class ErrnoException
}; // namespace android::system

#endif //__android_system_ErrnoException__

