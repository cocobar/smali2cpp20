#ifndef __sun_security_util_ManifestEntryVerifier__
#define __sun_security_util_ManifestEntryVerifier__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\ManifestEntryVerifier.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.CodeSigner.h"
#include "java.security.MessageDigest.h"
#include "java.util.ArrayList.h"
#include "java.util.HashMap.h"
#include "java.util.Hashtable.h"
#include "java.util.jar.JarEntry.h"
#include "java.util.jar.Manifest.h"
#include "sun.security.util.Debug.h"

namespace sun::security::util{
class ManifestEntryVerifier : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	static std::shared_ptr<char[]> hexc;
	std::shared_ptr<java::util::jar::JarEntry> entry;
	std::shared_ptr<java::util::jar::Manifest> man;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<std::vector<java::security::CodeSigner>> signers;
	bool skip;
public:
	std::shared_ptr<java::util::HashMap<java::lang::String,java::security::MessageDigest>> createdDigests;
	std::shared_ptr<java::util::ArrayList<java::security::MessageDigest>> digests;
	std::shared_ptr<java::util::ArrayList<unsigned char[]>> manifestHashes;
	static void static_cinit();
	ManifestEntryVerifier(std::shared_ptr<java::util::jar::Manifest> man);
	static std::shared_ptr<java::lang::String> toHex(std::shared_ptr<unsigned char[]> data);
	std::shared_ptr<java::util::jar::JarEntry> virtual getEntry();
	void virtual setEntry(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::util::jar::JarEntry> entry);
	void virtual update(unsigned char buffer);
	void virtual update(std::shared_ptr<unsigned char[]> buffer,int off,int len);
	std::shared_ptr<java::security::CodeSigner> virtual verify(std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> verifiedSigners,std::shared_ptr<java::util::Hashtable<java::lang::String,std::vector<java::security::CodeSigner>>> sigFileSigners);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::ManifestEntryVerifier::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ManifestEntryVerifier(){
	}

}; // class ManifestEntryVerifier
}; // namespace sun::security::util

#endif //__sun_security_util_ManifestEntryVerifier__

