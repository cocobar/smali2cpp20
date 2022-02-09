#ifndef __sun_security_jca_ProviderList_S_2__
#define __sun_security_jca_ProviderList_S_2__
// H L:\smali2cpp20\x64\Release\out\sun\security\jca\ProviderList$2.smali
#include "java2ctype.h"
#include "java.security.Provider.h"
#include "java.util.AbstractList.h"
#include "sun.security.jca.ProviderList.h"

namespace sun::security::jca{
class ProviderList_S_2 : public java::util::AbstractList<java::security::Provider> {
protected:
private:
public:
	std::shared_ptr<sun::security::jca::ProviderList> this_S_0;
	ProviderList_S_2(std::shared_ptr<sun::security::jca::ProviderList> this_S_0);
	std::shared_ptr<java::security::Provider> virtual get(int index);
	int virtual size();
public:
	virtual ~ProviderList_S_2(){
	}

}; // class ProviderList_S_2
}; // namespace sun::security::jca

#endif //__sun_security_jca_ProviderList_S_2__

