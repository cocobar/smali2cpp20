#ifndef __sun_security_util_ManifestDigester_S_Position__
#define __sun_security_util_ManifestDigester_S_Position__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ManifestDigester$Position.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace sun::security::util{
class ManifestDigester_S_Position : public java::lang::Object {
protected:
private:
public:
	int endOfFirstLine;
	int endOfSection;
	int startOfNext;
	ManifestDigester_S_Position();
public:
	virtual ~ManifestDigester_S_Position(){
	}

}; // class ManifestDigester_S_Position
}; // namespace sun::security::util

#endif //__sun_security_util_ManifestDigester_S_Position__

