#ifndef __sun_nio_fs_UnixUserPrincipals_S_User__
#define __sun_nio_fs_UnixUserPrincipals_S_User__
// H L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixUserPrincipals$User.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.file.attribute.UserPrincipal.h"

namespace sun::nio::fs{
class UnixUserPrincipals_S_User : public java::nio::file::attribute::UserPrincipal {
protected:
private:
	int id;
	bool isGroup;
	std::shared_ptr<java::lang::String> name;
	UnixUserPrincipals_S_User(int id,bool isGroup,std::shared_ptr<java::lang::String> name);
public:
	UnixUserPrincipals_S_User(int id,std::shared_ptr<java::lang::String> name);
	UnixUserPrincipals_S_User(int id,bool isGroup,std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::nio::fs::UnixUserPrincipals_S_User> _this3);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual gid();
	int virtual hashCode();
	bool virtual isSpecial();
	std::shared_ptr<java::lang::String> virtual toString();
	int virtual uid();
public:
	virtual ~UnixUserPrincipals_S_User(){
	}

}; // class UnixUserPrincipals_S_User
}; // namespace sun::nio::fs

#endif //__sun_nio_fs_UnixUserPrincipals_S_User__

