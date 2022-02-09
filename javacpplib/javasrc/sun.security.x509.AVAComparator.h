#ifndef __sun_security_x509_AVAComparator__
#define __sun_security_x509_AVAComparator__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\AVAComparator.smali
#include "java2ctype.h"
#include "java.util.Comparator.h"
#include "sun.security.x509.AVA.h"

namespace sun::security::x509{
class AVAComparator : public java::util::Comparator<sun::security::x509::AVA> {
protected:
private:
	static std::shared_ptr<java::util::Comparator<sun::security::x509::AVA>> INSTANCE;
	AVAComparator();
public:
	static void static_cinit();
	static std::shared_ptr<java::util::Comparator<sun::security::x509::AVA>> getInstance();
	int virtual compare(std::shared_ptr<sun::security::x509::AVA> a1,std::shared_ptr<sun::security::x509::AVA> a2);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::x509::AVAComparator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~AVAComparator(){
	}

}; // class AVAComparator
}; // namespace sun::security::x509

#endif //__sun_security_x509_AVAComparator__

