#ifndef __sun_security_x509_ReasonFlags__
#define __sun_security_x509_ReasonFlags__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\ReasonFlags.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"

namespace sun::security::x509{
class ReasonFlags : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> NAMES;
	std::shared_ptr<bool[]> bitString;
	bool virtual isSet(int position);
	static int name2Index(std::shared_ptr<java::lang::String> name);
	void virtual set(int position,bool val);
public:
	static std::shared_ptr<java::lang::String> AA_COMPROMISE;
	static std::shared_ptr<java::lang::String> AFFILIATION_CHANGED;
	static std::shared_ptr<java::lang::String> CA_COMPROMISE;
	static std::shared_ptr<java::lang::String> CERTIFICATE_HOLD;
	static std::shared_ptr<java::lang::String> CESSATION_OF_OPERATION;
	static std::shared_ptr<java::lang::String> KEY_COMPROMISE;
	static std::shared_ptr<java::lang::String> PRIVILEGE_WITHDRAWN;
	static std::shared_ptr<java::lang::String> SUPERSEDED;
	static std::shared_ptr<java::lang::String> UNUSED;
	static void static_cinit();
	ReasonFlags(std::shared_ptr<sun::security::util::BitArray> reasons);
	ReasonFlags(std::shared_ptr<sun::security::util::DerInputStream> in);
	ReasonFlags(std::shared_ptr<sun::security::util::DerValue> derVal);
	ReasonFlags(std::shared_ptr<unsigned char[]> reasons);
	ReasonFlags(std::shared_ptr<bool[]> reasons);
	void virtual _delete_(std::shared_ptr<java::lang::String> name);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getElements();
	bool virtual getFlags();
	void virtual set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::ReasonFlags::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ReasonFlags(){
	}

}; // class ReasonFlags
}; // namespace sun::security::x509

#endif //__sun_security_x509_ReasonFlags__

