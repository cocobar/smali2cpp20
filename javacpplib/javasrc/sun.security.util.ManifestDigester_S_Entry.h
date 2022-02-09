#ifndef __sun_security_util_ManifestDigester_S_Entry__
#define __sun_security_util_ManifestDigester_S_Entry__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ManifestDigester$Entry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.MessageDigest.h"

namespace sun::security::util{
class ManifestDigester_S_Entry : public java::lang::Object {
protected:
private:
	void virtual doOldStyle(std::shared_ptr<java::security::MessageDigest> md,std::shared_ptr<unsigned char[]> bytes,int offset,int length);
public:
	int length;
	int lengthWithBlankLine;
	int offset;
	bool oldStyle;
	std::shared_ptr<unsigned char[]> rawBytes;
	ManifestDigester_S_Entry(int offset,int length,int lengthWithBlankLine,std::shared_ptr<unsigned char[]> rawBytes);
	unsigned char virtual digest(std::shared_ptr<java::security::MessageDigest> md);
	unsigned char virtual digestWorkaround(std::shared_ptr<java::security::MessageDigest> md);
public:
	virtual ~ManifestDigester_S_Entry(){
	}

}; // class ManifestDigester_S_Entry
}; // namespace sun::security::util

#endif //__sun_security_util_ManifestDigester_S_Entry__

