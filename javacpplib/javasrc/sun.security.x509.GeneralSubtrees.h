#ifndef __sun_security_x509_GeneralSubtrees__
#define __sun_security_x509_GeneralSubtrees__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralSubtrees.smali
#include "java2ctype.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.GeneralSubtree.h"

namespace sun::security::x509{
class GeneralSubtrees : public java::lang::Cloneable {
protected:
private:
	static int NAME_DIFF_TYPE;
	static int NAME_MATCH;
	static int NAME_NARROWS;
	static int NAME_SAME_TYPE;
	static int NAME_WIDENS;
	std::shared_ptr<java::util::List<sun::security::x509::GeneralSubtree>> trees;
	GeneralSubtrees(std::shared_ptr<sun::security::x509::GeneralSubtrees> source);
	std::shared_ptr<sun::security::x509::GeneralSubtree> virtual createWidestSubtree(std::shared_ptr<sun::security::x509::GeneralNameInterface> name);
	std::shared_ptr<sun::security::x509::GeneralNameInterface> virtual getGeneralNameInterface(int ndx);
	static std::shared_ptr<sun::security::x509::GeneralNameInterface> getGeneralNameInterface(std::shared_ptr<sun::security::x509::GeneralSubtree> gs);
	void virtual minimize();
public:
	GeneralSubtrees();
	GeneralSubtrees(std::shared_ptr<sun::security::util::DerValue> val);
	void virtual add(std::shared_ptr<sun::security::x509::GeneralSubtree> tree);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual contains(std::shared_ptr<sun::security::x509::GeneralSubtree> tree);
	void virtual encode(std::shared_ptr<sun::security::util::DerOutputStream> out);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<sun::security::x509::GeneralSubtree> virtual get(int index);
	int virtual hashCode();
	std::shared_ptr<sun::security::x509::GeneralSubtrees> virtual intersect(std::shared_ptr<sun::security::x509::GeneralSubtrees> other);
	std::shared_ptr<java::util::Iterator<sun::security::x509::GeneralSubtree>> virtual iterator();
	void virtual reduce(std::shared_ptr<sun::security::x509::GeneralSubtrees> excluded);
	void virtual remove(int index);
	int virtual size();
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<java::util::List<sun::security::x509::GeneralSubtree>> virtual trees();
	void virtual union(std::shared_ptr<sun::security::x509::GeneralSubtrees> other);
public:
	virtual ~GeneralSubtrees(){
	}

}; // class GeneralSubtrees
}; // namespace sun::security::x509

#endif //__sun_security_x509_GeneralSubtrees__

