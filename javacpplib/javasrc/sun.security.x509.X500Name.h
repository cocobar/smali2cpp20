#ifndef __sun_security_x509_X500Name__
#define __sun_security_x509_X500Name__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X500Name.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.Field.h"
#include "java.security.Principal.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AVA.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.RDN.h"

namespace sun::security::x509{
class X500Name : public sun::security::x509::GeneralNameInterface, public java::security::Principal {
protected:
private:
	static std::shared_ptr<int[]> DNQUALIFIER_DATA;
	static std::shared_ptr<int[]> DOMAIN_COMPONENT_DATA;
	static std::shared_ptr<int[]> GENERATIONQUALIFIER_DATA;
	static std::shared_ptr<int[]> GIVENNAME_DATA;
	static std::shared_ptr<int[]> INITIALS_DATA;
	static std::shared_ptr<int[]> SERIALNUMBER_DATA;
	static std::shared_ptr<int[]> SURNAME_DATA;
	static std::shared_ptr<int[]> commonName_data;
	static std::shared_ptr<int[]> countryName_data;
	static std::shared_ptr<java::util::Map<sun::security::util::ObjectIdentifier,sun::security::util::ObjectIdentifier>> internedOIDs;
	static std::shared_ptr<int[]> ipAddress_data;
	static std::shared_ptr<int[]> localityName_data;
	static std::shared_ptr<int[]> orgName_data;
	static std::shared_ptr<int[]> orgUnitName_data;
	static std::shared_ptr<java::lang::reflect::Constructor<javax::security::auth::x500::X500Principal>> principalConstructor;
	static std::shared_ptr<java::lang::reflect::Field> principalField;
	static std::shared_ptr<int[]> stateName_data;
	static std::shared_ptr<int[]> streetAddress_data;
	static std::shared_ptr<int[]> title_data;
	static std::shared_ptr<int[]> userid_data;
	std::shared_ptr<java::util::List<sun::security::x509::AVA>> allAvaList;
	std::shared_ptr<java::lang::String> canonicalDn;
	std::shared_ptr<java::lang::String> dn;
	std::shared_ptr<unsigned char[]> encoded;
	std::shared_ptr<std::vector<sun::security::x509::RDN>> names;
	std::shared_ptr<java::util::List<sun::security::x509::RDN>> rdnList;
	std::shared_ptr<java::lang::String> rfc1779Dn;
	std::shared_ptr<java::lang::String> rfc2253Dn;
	std::shared_ptr<javax::security::auth::x500::X500Principal> x500Principal;
	void virtual checkNoNewLinesNorTabsAtBeginningOfDN(std::shared_ptr<java::lang::String> input);
	static bool escaped(int rdnEnd,int searchOffset,std::shared_ptr<java::lang::String> dnString);
	std::shared_ptr<sun::security::util::DerValue> virtual findAttribute(std::shared_ptr<sun::security::util::ObjectIdentifier> attribute);
	void virtual generateDN();
	std::shared_ptr<java::lang::String> virtual generateRFC1779DN(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
	std::shared_ptr<java::lang::String> virtual generateRFC2253DN(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
	std::shared_ptr<java::lang::String> virtual getString(std::shared_ptr<sun::security::util::DerValue> attribute);
	bool virtual isWithinSubtree(std::shared_ptr<sun::security::x509::X500Name> other);
	void virtual parseDER(std::shared_ptr<sun::security::util::DerInputStream> in);
	void virtual parseDN(std::shared_ptr<java::lang::String> input,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap);
	void virtual parseRFC2253DN(std::shared_ptr<java::lang::String> dnString);
public:
	static std::shared_ptr<sun::security::util::ObjectIdentifier> DNQUALIFIER_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> DOMAIN_COMPONENT_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> GENERATIONQUALIFIER_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> GIVENNAME_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> INITIALS_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SERIALNUMBER_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> SURNAME_OID;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> commonName_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> countryName_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> ipAddress_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> localityName_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> orgName_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> orgUnitName_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> stateName_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> streetAddress_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> title_oid;
	static std::shared_ptr<sun::security::util::ObjectIdentifier> userid_oid;
	static void static_cinit();
	X500Name(std::shared_ptr<java::lang::String> dname);
	X500Name(std::shared_ptr<java::lang::String> dname,std::shared_ptr<java::lang::String> format);
	X500Name(std::shared_ptr<java::lang::String> commonName,std::shared_ptr<java::lang::String> organizationUnit,std::shared_ptr<java::lang::String> organizationName,std::shared_ptr<java::lang::String> country);
	X500Name(std::shared_ptr<java::lang::String> commonName,std::shared_ptr<java::lang::String> organizationUnit,std::shared_ptr<java::lang::String> organizationName,std::shared_ptr<java::lang::String> localityName,std::shared_ptr<java::lang::String> stateName,std::shared_ptr<java::lang::String> country);
	X500Name(std::shared_ptr<java::lang::String> dname,std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywordMap);
	X500Name(std::shared_ptr<sun::security::util::DerInputStream> in);
	X500Name(std::shared_ptr<sun::security::util::DerValue> value);
	X500Name(std::shared_ptr<unsigned char[]> name);
	X500Name(std::shared_ptr<std::vector<sun::security::x509::RDN>> rdnArray);
	static std::shared_ptr<sun::security::x509::X500Name> asX500Name(std::shared_ptr<javax::security::auth::x500::X500Principal> p);
	static int countQuotes(std::shared_ptr<java::lang::String> string,int from,int to);
	static std::shared_ptr<sun::security::util::ObjectIdentifier> intern(std::shared_ptr<sun::security::util::ObjectIdentifier> oid);
	std::shared_ptr<java::util::List<sun::security::x509::AVA>> virtual allAvas();
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual asX500Principal();
	int virtual avaSize();
	std::shared_ptr<sun::security::x509::X500Name> virtual commonAncestor(std::shared_ptr<sun::security::x509::X500Name> other);
	int virtual constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName);
	void virtual emit(std::shared_ptr<sun::security::util::DerOutputStream> out);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<sun::security::util::DerValue> virtual findMostSpecificAttribute(std::shared_ptr<sun::security::util::ObjectIdentifier> attribute);
	std::shared_ptr<java::lang::String> virtual getCommonName();
	std::shared_ptr<java::lang::String> virtual getCountry();
	std::shared_ptr<java::lang::String> virtual getDNQualifier();
	std::shared_ptr<java::lang::String> virtual getDomain();
	unsigned char virtual getEncoded();
	unsigned char virtual getEncodedInternal();
	std::shared_ptr<java::lang::String> virtual getGeneration();
	std::shared_ptr<java::lang::String> virtual getGivenName();
	std::shared_ptr<java::lang::String> virtual getIP();
	std::shared_ptr<java::lang::String> virtual getInitials();
	std::shared_ptr<java::lang::String> virtual getLocality();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::lang::String> virtual getOrganization();
	std::shared_ptr<java::lang::String> virtual getOrganizationalUnit();
	std::shared_ptr<java::lang::String> virtual getRFC1779Name();
	std::shared_ptr<java::lang::String> virtual getRFC1779Name(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
	std::shared_ptr<java::lang::String> virtual getRFC2253CanonicalName();
	std::shared_ptr<java::lang::String> virtual getRFC2253Name();
	std::shared_ptr<java::lang::String> virtual getRFC2253Name(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> oidMap);
	std::shared_ptr<java::lang::String> virtual getState();
	std::shared_ptr<java::lang::String> virtual getSurname();
	int virtual getType();
	int virtual hashCode();
	bool virtual isEmpty();
	std::shared_ptr<java::util::List<sun::security::x509::RDN>> virtual rdns();
	int virtual size();
	int virtual subtreeDepth();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::X500Name::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~X500Name(){
	}

}; // class X500Name
}; // namespace sun::security::x509

#endif //__sun_security_x509_X500Name__

