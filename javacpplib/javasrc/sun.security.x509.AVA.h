#ifndef __sun_security_x509_AVA__
#define __sun_security_x509_AVA__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AVA.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.io.Reader.h"
#include "java.lang.Byte.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerEncoder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::x509{
class AVA : public sun::security::util::DerEncoder {
protected:
private:
	static bool PRESERVE_OLD_DC_ENCODING;
	static std::shared_ptr<sun::security::util::Debug> debug;
	static std::shared_ptr<java::lang::String> escapedDefault;
	static std::shared_ptr<java::lang::String> hexDigits;
	static std::shared_ptr<java::lang::String> specialChars1779;
	static std::shared_ptr<java::lang::String> specialChars2253;
	static std::shared_ptr<java::lang::String> specialCharsDefault;
	static std::shared_ptr<java::lang::Byte> getEmbeddedHexPair(int c1,std::shared_ptr<java::io::Reader> in);
	static std::shared_ptr<java::lang::String> getEmbeddedHexString(std::shared_ptr<java::util::List<java::lang::Byte>> hexList);
	static bool isDerString(std::shared_ptr<sun::security::util::DerValue> value,bool canonical);
	static bool isTerminator(int ch,int format);
	static std::shared_ptr<sun::security::util::DerValue> parseHexString(std::shared_ptr<java::io::Reader> in,int format);
	std::shared_ptr<sun::security::util::DerValue> virtual parseQuotedString(std::shared_ptr<java::io::Reader> in,std::shared_ptr<java::lang::StringBuilder> temp);
	std::shared_ptr<sun::security::util::DerValue> virtual parseString(std::shared_ptr<java::io::Reader> in,int c,int format,std::shared_ptr<java::lang::StringBuilder> temp);
	static int readChar(std::shared_ptr<java::io::Reader> in,std::shared_ptr<java::lang::String> errMsg);
	std::shared_ptr<java::lang::String> virtual toKeyword(int format,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
	std::shared_ptr<java::lang::String> virtual toKeywordValueString(std::shared_ptr<java::lang::String> keyword);
	static bool trailingSpace(std::shared_ptr<java::io::Reader> in);
public:
	static int DEFAULT;
	static int RFC1779;
	static int RFC2253;
	std::shared_ptr<sun::security::util::ObjectIdentifier> oid;
	std::shared_ptr<sun::security::util::DerValue> value;
	static void static_cinit();
	AVA(std::shared_ptr<java::io::Reader> in);
	AVA(std::shared_ptr<java::io::Reader> in,int format);
	AVA(std::shared_ptr<java::io::Reader> in,int format,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap);
	AVA(std::shared_ptr<java::io::Reader> in,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap);
	AVA(std::shared_ptr<sun::security::util::DerInputStream> in);
	AVA(std::shared_ptr<sun::security::util::DerValue> derval);
	AVA(std::shared_ptr<sun::security::util::ObjectIdentifier> type,std::shared_ptr<sun::security::util::DerValue> val);
	void virtual derEncode(std::shared_ptr<java::io::OutputStream> out);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<sun::security::util::DerValue> virtual getDerValue();
	std::shared_ptr<sun::security::util::ObjectIdentifier> virtual getObjectIdentifier();
	std::shared_ptr<java::lang::String> virtual getValueString();
	bool virtual hasRFC2253Keyword();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toRFC1779String();
	std::shared_ptr<java::lang::String> virtual toRFC1779String(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
	std::shared_ptr<java::lang::String> virtual toRFC2253CanonicalString();
	std::shared_ptr<java::lang::String> virtual toRFC2253String();
	std::shared_ptr<java::lang::String> virtual toRFC2253String(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::AVA::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AVA(){
	}

}; // class AVA
}; // namespace sun::security::x509

#endif //__sun_security_x509_AVA__

