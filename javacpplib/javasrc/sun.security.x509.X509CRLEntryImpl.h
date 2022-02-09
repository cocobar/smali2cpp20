#ifndef __sun_security_x509_X509CRLEntryImpl__
#define __sun_security_x509_X509CRLEntryImpl__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CRLEntryImpl.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.cert.CRLReason.h"
#include "java.security.cert.Extension.h"
#include "java.security.cert.X509CRLEntry.h"
#include "java.util.Date.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CRLExtensions.h"
#include "sun.security.x509.CertificateIssuerExtension.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.SerialNumber.h"

namespace sun::security::x509{
class X509CRLEntryImpl : public java::security::cert::X509CRLEntry, public java::lang::Comparable<sun::security::x509::X509CRLEntryImpl> {
protected:
private:
	static long long YR_2050;
	static bool isExplicit;
	std::shared_ptr<javax::security::auth::x500::X500Principal> certIssuer;
	std::shared_ptr<sun::security::x509::CRLExtensions> extensions;
	std::shared_ptr<java::util::Date> revocationDate;
	std::shared_ptr<unsigned char[]> revokedCert;
	std::shared_ptr<sun::security::x509::SerialNumber> serialNumber;
	unsigned char virtual getEncoded0();
	void virtual parse(std::shared_ptr<sun::security::util::DerValue> derVal);
public:
	X509CRLEntryImpl(std::shared_ptr<java::math::BigInteger> num,std::shared_ptr<java::util::Date> date);
	X509CRLEntryImpl(std::shared_ptr<java::math::BigInteger> num,std::shared_ptr<java::util::Date> date,std::shared_ptr<sun::security::x509::CRLExtensions> crlEntryExts);
	X509CRLEntryImpl(std::shared_ptr<sun::security::util::DerValue> derValue);
	X509CRLEntryImpl(std::shared_ptr<unsigned char[]> revokedCert);
	static std::shared_ptr<java::security::cert::CRLReason> getRevocationReason(std::shared_ptr<java::security::cert::X509CRLEntry> crlEntry);
	static std::shared_ptr<sun::security::x509::X509CRLEntryImpl> toImpl(std::shared_ptr<java::security::cert::X509CRLEntry> entry);
	int virtual compareTo(std::shared_ptr<sun::security::x509::X509CRLEntryImpl> that);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> outStrm);
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual getCertificateIssuer();
	std::shared_ptr<sun::security::x509::CertificateIssuerExtension> virtual getCertificateIssuerExtension();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getCriticalExtensionOIDs();
	unsigned char virtual getEncoded();
	std::shared_ptr<sun::security::x509::Extension> virtual getExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	unsigned char virtual getExtensionValue(std::shared_ptr<java::lang::String> oid);
	std::shared_ptr<java::util::Map<java::lang::String,java::security::cert::Extension>> virtual getExtensions();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getNonCriticalExtensionOIDs();
	std::shared_ptr<java::lang::Integer> virtual getReasonCode();
	std::shared_ptr<java::util::Date> virtual getRevocationDate();
	std::shared_ptr<java::security::cert::CRLReason> virtual getRevocationReason();
	std::shared_ptr<java::math::BigInteger> virtual getSerialNumber();
	bool virtual hasExtensions();
	bool virtual hasUnsupportedCriticalExtension();
	void virtual setCertificateIssuer(std::shared_ptr<javax::security::auth::x500::X500Principal> crlIssuer,std::shared_ptr<javax::security::auth::x500::X500Principal> certIssuer);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~X509CRLEntryImpl(){
	}

}; // class X509CRLEntryImpl
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509CRLEntryImpl__

