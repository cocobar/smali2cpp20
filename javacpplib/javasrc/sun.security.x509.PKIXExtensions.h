#ifndef __sun_security_x509_PKIXExtensions__
#define __sun_security_x509_PKIXExtensions__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\PKIXExtensions.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "sun.security.util.ObjectIdentifier.h"

namespace sun::security::x509{
class PKIXExtensions : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> AuthInfoAccess_data;
	static std::shared_ptr<int[]> AuthorityKey_data;
	static std::shared_ptr<int[]> BasicConstraints_data;
	static std::shared_ptr<int[]> CRLDistributionPoints_data;
	static std::shared_ptr<int[]> CRLNumber_data;
	static std::shared_ptr<int[]> CertificateIssuer_data;
	static std::shared_ptr<int[]> CertificatePolicies_data;
	static std::shared_ptr<int[]> DeltaCRLIndicator_data;
	static std::shared_ptr<int[]> ExtendedKeyUsage_data;
	static std::shared_ptr<int[]> FreshestCRL_data;
	static std::shared_ptr<int[]> HoldInstructionCode_data;
	static std::shared_ptr<int[]> InhibitAnyPolicy_data;
	static std::shared_ptr<int[]> InvalidityDate_data;
	static std::shared_ptr<int[]> IssuerAlternativeName_data;
	static std::shared_ptr<int[]> IssuingDistributionPoint_data;
	static std::shared_ptr<int[]> KeyUsage_data;
	static std::shared_ptr<int[]> NameConstraints_data;
	static std::shared_ptr<int[]> OCSPNoCheck_data;
	static std::shared_ptr<int[]> PolicyConstraints_data;
	static std::shared_ptr<int[]> PolicyMappings_data;
	static std::shared_ptr<int[]> PrivateKeyUsage_data;
	static std::shared_ptr<int[]> ReasonCode_data;
	static std::shared_ptr<int[]> SubjectAlternativeName_data;
	static std::shared_ptr<int[]> SubjectDirectoryAttributes_data;
	static std::shared_ptr<int[]> SubjectInfoAccess_data;
	static std::shared_ptr<int[]> SubjectKey_data;
public:
	static std::shared_ptr<sun::security::util::ObjectIdentifier> AuthInfoAccess_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> AuthorityKey_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> BasicConstraints_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> CRLDistributionPoints_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> CRLNumber_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> CertificateIssuer_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> CertificatePolicies_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> DeltaCRLIndicator_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> ExtendedKeyUsage_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> FreshestCRL_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> HoldInstructionCode_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> InhibitAnyPolicy_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> InvalidityDate_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> IssuerAlternativeName_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> IssuingDistributionPoint_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> KeyUsage_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> NameConstraints_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> OCSPNoCheck_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> PolicyConstraints_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> PolicyMappings_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> PrivateKeyUsage_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> ReasonCode_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SubjectAlternativeName_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SubjectDirectoryAttributes_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SubjectInfoAccess_Id;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SubjectKey_Id;
	static void static_cinit();
	PKIXExtensions();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::PKIXExtensions::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PKIXExtensions(){
	}

}; // class PKIXExtensions
}; // namespace sun::security::x509

#endif //__sun_security_x509_PKIXExtensions__

