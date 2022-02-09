#ifndef __sun_security_util_ManifestDigester__
#define __sun_security_util_ManifestDigester__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ManifestDigester.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.MessageDigest.h"
#include "java.util.HashMap.h"
#include "sun.security.util.ManifestDigester_S_Entry.h"
#include "sun.security.util.ManifestDigester_S_Position.h"

namespace sun::security::util{
class ManifestDigester : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::HashMap<java::lang::String,sun::security::util::ManifestDigester_S_Entry>> entries;
	std::shared_ptr<unsigned char[]> rawBytes;
	bool virtual findSection(int offset,std::shared_ptr<sun::security::util::ManifestDigester_S_Position> pos);
	bool virtual isNameAttr(std::shared_ptr<unsigned char[]> bytes,int start);
public:
	static std::shared_ptr<java::lang::String> MF_MAIN_ATTRS;
	ManifestDigester(std::shared_ptr<unsigned char[]> bytes);
	std::shared_ptr<sun::security::util::ManifestDigester_S_Entry> virtual get(std::shared_ptr<java::lang::String> name,bool oldStyle);
	unsigned char virtual manifestDigest(std::shared_ptr<java::security::MessageDigest> md);
public:
	virtual ~ManifestDigester(){
	}

}; // class ManifestDigester
}; // namespace sun::security::util

#endif //__sun_security_util_ManifestDigester__

