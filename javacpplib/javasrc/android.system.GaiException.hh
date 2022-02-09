#ifndef __android_system_GaiException__
#define __android_system_GaiException__
// H L:\smali2cpp20\x64\Release\out\android\system\GaiException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.hh"

namespace android::system{
class GaiException : public java::lang::RuntimeException {
public:
	GaiException();
	virtual ~GaiException();

}; // class GaiException
}; // namespace android::system

#endif //__android_system_GaiException__

