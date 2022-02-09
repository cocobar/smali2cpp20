#ifndef __sun_security_util_SignatureFileVerifier__
#define __sun_security_util_SignatureFileVerifier__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\SignatureFileVerifier.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.CodeSigner.h"
#include "java.security.CryptoPrimitive.h"
#include "java.security.MessageDigest.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.util.ArrayList.h"
#include "java.util.HashMap.h"
#include "java.util.Hashtable.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "java.util.jar.Attributes.h"
#include "java.util.jar.Manifest.h"
#include "sun.security.pkcs.PKCS7.h"
#include "sun.security.pkcs.SignerInfo.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DisabledAlgorithmConstraints.h"
#include "sun.security.util.ManifestDigester.h"

namespace sun::security::util{
class SignatureFileVerifier : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> ATTR_DIGEST;
	static std::shared_ptr<java::util::Set<java::security::CryptoPrimitive>> DIGEST_PRIMITIVE_SET;
	static std::shared_ptr<sun::security::util::DisabledAlgorithmConstraints> JAR_DISABLED_CHECK;
	static std::shared_ptr<sun::security::util::Debug> debug;
	static std::shared_ptr<char[]> hexc;
	std::shared_ptr<sun::security::pkcs::PKCS7> block;
	std::shared_ptr<java::security::cert::CertificateFactory> certificateFactory;
	std::shared_ptr<java::util::HashMap<java::lang::String,java::security::MessageDigest>> createdDigests;
	std::shared_ptr<sun::security::util::ManifestDigester> md;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<unsigned char[]> sfBytes;
	std::shared_ptr<java::util::ArrayList<std::vector<java::security::CodeSigner>>> signerCache;
	bool workaround;
	std::shared_ptr<java::security::MessageDigest> virtual getDigest(std::shared_ptr<java::lang::String> algorithm);
	std::shared_ptr<java::security::CodeSigner> virtual getSigners(std::shared_ptr<std::vector<sun::security::pkcs::SignerInfo>> infos,std::shared_ptr<sun::security::pkcs::PKCS7> block);
	void virtual processImpl(std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> signers,std::shared_ptr<java::util::List<java::lang::Object>> manifestDigests);
	bool virtual verifyManifestHash(std::shared_ptr<java::util::jar::Manifest> sf,std::shared_ptr<sun::security::util::ManifestDigester> md,std::shared_ptr<java::util::List<java::lang::Object>> manifestDigests);
	bool virtual verifyManifestMainAttrs(std::shared_ptr<java::util::jar::Manifest> sf,std::shared_ptr<sun::security::util::ManifestDigester> md);
	bool virtual verifySection(std::shared_ptr<java::util::jar::Attributes> sfAttr,std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::security::util::ManifestDigester> md);
public:
	static void static_cinit();
	SignatureFileVerifier(std::shared_ptr<java::util::ArrayList<std::vector<java::security::CodeSigner>>> signerCache,std::shared_ptr<sun::security::util::ManifestDigester> md,std::shared_ptr<java::lang::String> name,std::shared_ptr<unsigned char[]> rawBytes);
	static bool contains(std::shared_ptr<std::vector<java::security::CodeSigner>> set,std::shared_ptr<java::security::CodeSigner> signer);
	static bool isBlockOrSF(std::shared_ptr<java::lang::String> s);
	static bool isSigningRelated(std::shared_ptr<java::lang::String> name);
	static bool isSubSet(std::shared_ptr<std::vector<java::security::CodeSigner>> subset,std::shared_ptr<std::vector<java::security::CodeSigner>> set);
	static bool matches(std::shared_ptr<std::vector<java::security::CodeSigner>> signers,std::shared_ptr<std::vector<java::security::CodeSigner>> oldSigners,std::shared_ptr<std::vector<java::security::CodeSigner>> newSigners);
	static std::shared_ptr<java::lang::String> toHex(std::shared_ptr<unsigned char[]> data);
	bool virtual needSignatureFile(std::shared_ptr<java::lang::String> name);
	bool virtual needSignatureFileBytes();
	void virtual process(std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> signers,std::shared_ptr<java::util::List<java::lang::Object>> manifestDigests);
	void virtual setSignatureFile(std::shared_ptr<unsigned char[]> sfBytes);
	void virtual updateSigners(std::shared_ptr<std::vector<java::security::CodeSigner>> newSigners,std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> signers,std::shared_ptr<java::lang::String> name);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::SignatureFileVerifier::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SignatureFileVerifier(){
	}

}; // class SignatureFileVerifier
}; // namespace sun::security::util

#endif //__sun_security_util_SignatureFileVerifier__

